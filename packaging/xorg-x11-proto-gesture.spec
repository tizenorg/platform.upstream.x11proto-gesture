Name:     xorg-x11-proto-gesture
Summary:  X.Org X11 Protocol gestureproto
Version:  0.1.0
Release:  3
Group:    Development/System
License:  MIT
URL:      http://www.x.org
Source0:  %{name}-%{version}.tar.gz
Source1001: 	xorg-x11-proto-gesture.manifest
Provides: gestureproto

BuildRoot:  %{_tmppath}/%{name}-%{version}-build

BuildRequires: pkgconfig
BuildRequires:  pkgconfig(xorg-macros)

%description
Description: %{summary}
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
cp %{SOURCE1001} .

%build

./autogen.sh
%reconfigure --disable-static \
             --libdir=%{_datadir} \
             --without-xmlto

# Call make instruction with smp support
make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
%make_install

%remove_docs

%clean
rm -rf %{buildroot}

%files
%manifest %{name}.manifest
%defattr(-,root,root,-)
%{_includedir}/X11/extensions/*.h
%{_datadir}/pkgconfig/*.pc
