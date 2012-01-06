/**************************************************************************

x11proto-gesture

Copyright (c) 2011 Samsung Electronics Co., Ltd All Rights Reserved

Contact: Sung-Jin Park <sj76.park@samsung.com>
         Sangjin LEE <lsj119@samsung.com>

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sub license, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial portions
of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

**************************************************************************/

#ifndef _GESTUREPROTO_CONST_H_
#define _GESTUREPROTO_CONST_H_

/* Reply status */
#define GestureSuccess				0

#define GestureUngrabSuccess		0
#define GestureUngrabNotGrabbed		1
#define GestureUngrabAbnormal		2

#define GestureGrabSuccess			0
#define GestureGrabAbnormal			1
#define GestureGrabbedAlready		2
#define GestureGrabInvalidTime		3
#define GestureInvalidReply			4

/* Events */
#define GestureNotifyFlick			0
#define GestureNotifyPan				1
#define GestureNotifyPinchRotation	2
#define GestureNotifyTap				3
#define GestureNotifyTapNHold		4
#define GestureNotifyHold				5
#define GestureNotifyGroup			6
#define GestureNumberEvents			(GestureNotifyGroup + 1)

#define GestureMaskNone				0L
#define GestureFlickMask				(1L << 0)
#define GesturePanMask				(1L << 1)
#define GesturePinchRotationMask		(1L << 2)
#define GestureTapMask				(1L << 3)
#define GestureTapNHoldMask			(1L << 4)
#define GestureHoldMask				(1L << 5)
#define GestureGroupMask			(1L << 6)

/* "Kinds" of events for GestureNotifyGroup */
#define GestureGroupRemoved		0
#define GestureGroupAdded			1
#define GestureGroupCurrent			2

/* "Kinds" of events for GestureNotifyFlick ~ GestureNotifyHold */
#define GestureEnd					0
#define GestureBegin					1
#define GestureUpdate				2
#define GestureDone					3

/* Errors */
#define GestureClientNotLocal				0
#define GestureInValidMask				1
#define GestureOperationNotSupported	2
#define GestureNumberErrors		(GestureOperationNotSupported + 1)

#endif//_GESTUREPROTO_CONST_H_

