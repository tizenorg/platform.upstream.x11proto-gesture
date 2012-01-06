gesturedir = $(includedir)/X11/extensions
gesture_HEADERS = \
        gestureconst.h \
	gestureproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = gestureproto.pc


MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

ChangeLog:
	$(CHANGELOG_CMD)
INSTALL:
	$(INSTALL_CMD)

dist-hook: ChangeLog INSTALL
