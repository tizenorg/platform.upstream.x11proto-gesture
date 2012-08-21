
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

