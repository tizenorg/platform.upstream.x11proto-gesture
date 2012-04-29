#sbs-git:slp/pkgs/xorg/proto/x11proto-gesture x11proto-gesture 0.1.0 db31c7fee9bc0d164b695505aa48a9c649c1593c
Name:       x11proto-gesture 
Summary:    X.Org X11 Protocol gestureproto  
Version: 0.1.0
Release:    1  
Group:      Development/System  
License:    MIT  
URL:        http://www.x.org  
Source0:    %{name}-%{version}.tar.gz
Provides:   gestureproto  
  
BuildRoot:  %{_tmppath}/%{name}-%{version}-build  
BuildRequires:  pkgconfig(xorg-macros)  
  
%description  
This package provides development headers describing the wire protocol  
for the Gesture extension, used to control all manner of options related  
to gesture event handling.  
  
More information about X.Org can be found at:  
<URL:http://www.X.org>  
<URL:http://xorg.freedesktop.org>  
<URL:http://lists.freedesktop.org/mailman/listinfo/xorg>  
  
This package is built from the X.org gestureproto proto module.  
  
%prep  
%setup -q
  
%build  
  
%reconfigure --disable-shared   
  
# Call make instruction with smp support  
make %{?jobs:-j%jobs}  
  
%install  
rm -rf %{buildroot}  
%make_install  
  
%clean  
rm -rf %{buildroot}  

%files  
%{_libdir}/pkgconfig/gestureproto.pc  
%{_includedir}/X11/extensions/*.h  
