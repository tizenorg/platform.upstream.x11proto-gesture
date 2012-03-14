Name:       xorg-gestureproto
Summary:    X11 Gesture extension wire protocol
Version:    0.1.0
Release:    1
Group:      x11
License:    TO_FILL
Source0:    x11proto-gesture-%{version}.tar.gz
BuildRequires:  pkgconfig(xorg-macros)


%description
X11 Gesture extension wire protocol
 This package provides development headers describing the wire protocol
 for the Gesture extension, used to control all manner of options related
 to gesture event handling.
 .
 More information about X.Org can be found at:
 <URL:http://www.X.org>
 <URL:http://xorg.freedesktop.org>
 <URL:http://lists.freedesktop.org/mailman/listinfo/xorg>
 .
 This package is built from the X.org gestureproto proto module..



%package devel
Summary:    X11 Gesture extension wire protocol
Group:      x11
Requires:   %{name} = %{version}-%{release}

%description devel
X11 Gesture extension wire protocol
 This package provides development headers describing the wire protocol
 for the Gesture extension, used to control all manner of options related
 to gesture event handling.
 .
 More information about X.Org can be found at:
 <URL:http://www.X.org>
 <URL:http://xorg.freedesktop.org>
 <URL:http://lists.freedesktop.org/mailman/listinfo/xorg>
 .
 This package is built from the X.org gestureproto proto module..



%prep
%setup -q -n x11proto-gesture-%{version}


%build
%autogen.sh --disable-static

%configure --disable-static
make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
%make_install










%files
%defattr(-,root,root,-)


%files devel
%defattr(-,root,root,-)
%{_includedir}/X11/extensions/*
%{_libdir}/pkgconfig/gestureproto.pc

