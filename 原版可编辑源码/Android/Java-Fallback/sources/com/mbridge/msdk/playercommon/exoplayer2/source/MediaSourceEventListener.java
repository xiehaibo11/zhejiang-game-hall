package com.mbridge.msdk.playercommon.exoplayer2.source;

public interface MediaSourceEventListener {

    public static final class EventDispatcher {
        private final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler> listenerAndHandlers;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId mediaPeriodId;
        private final long mediaTimeOffsetMs;
        public final int windowIndex;










        private static final class ListenerAndHandler {
            public final android.os.Handler handler;
            public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener listener;

            public ListenerAndHandler(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2) {
                    r0 = this;
                    r0.<init>()
                    r0.handler = r1
                    r0.listener = r2
                    return
            }
        }

        public EventDispatcher() {
                r6 = this;
                java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
                r1.<init>()
                r2 = 0
                r3 = 0
                r4 = 0
                r0 = r6
                r0.<init>(r1, r2, r3, r4)
                return
        }

        private EventDispatcher(java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler> r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, long r4) {
                r0 = this;
                r0.<init>()
                r0.listenerAndHandlers = r1
                r0.windowIndex = r2
                r0.mediaPeriodId = r3
                r0.mediaTimeOffsetMs = r4
                return
        }

        private long adjustMediaTime(long r4) {
                r3 = this;
                long r4 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r4)
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
                if (r2 != 0) goto Le
                goto L11
            Le:
                long r0 = r3.mediaTimeOffsetMs
                long r0 = r0 + r4
            L11:
                return r0
        }

        private void postOrRun(android.os.Handler r3, java.lang.Runnable r4) {
                r2 = this;
                android.os.Looper r0 = r3.getLooper()
                android.os.Looper r1 = android.os.Looper.myLooper()
                if (r0 != r1) goto Le
                r4.run()
                goto L11
            Le:
                r3.post(r4)
            L11:
                return
        }

        public final void addEventListener(android.os.Handler r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r4) {
                r2 = this;
                if (r3 == 0) goto L6
                if (r4 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r2.listenerAndHandlers
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler
                r1.<init>(r3, r4)
                r0.add(r1)
                return
        }

        public final void downstreamFormatChanged(int r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14, int r15, java.lang.Object r16, long r17) {
                r12 = this;
                r0 = r12
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r11 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                r1 = r17
                long r7 = r12.adjustMediaTime(r1)
                r2 = 1
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r1 = r11
                r3 = r13
                r4 = r14
                r5 = r15
                r6 = r16
                r1.<init>(r2, r3, r4, r5, r6, r7, r9)
                r12.downstreamFormatChanged(r11)
                return
        }

        public final void downstreamFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r5) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$9 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$9
                r3.<init>(r4, r2, r5)
                r4.postOrRun(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void loadCanceled(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r5, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r6) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$5 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$5
                r3.<init>(r4, r2, r5, r6)
                r4.postOrRun(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void loadCanceled(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r11, int r12, int r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14, int r15, java.lang.Object r16, long r17, long r19, long r21, long r23, long r25) {
                r10 = this;
                r0 = r10
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo
                r1 = r9
                r2 = r11
                r3 = r21
                r5 = r23
                r7 = r25
                r1.<init>(r2, r3, r5, r7)
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                r2 = r17
                long r2 = r10.adjustMediaTime(r2)
                r4 = r19
                long r4 = r10.adjustMediaTime(r4)
                r17 = r1
                r18 = r12
                r19 = r13
                r20 = r14
                r21 = r15
                r22 = r16
                r23 = r2
                r25 = r4
                r17.<init>(r18, r19, r20, r21, r22, r23, r25)
                r10.loadCanceled(r9, r1)
                return
        }

        public final void loadCanceled(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r18, int r19, long r20, long r22, long r24) {
                r17 = this;
                r0 = r17
                r1 = r18
                r2 = r19
                r11 = r20
                r13 = r22
                r15 = r24
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0.loadCanceled(r1, r2, r3, r4, r5, r6, r7, r9, r11, r13, r15)
                return
        }

        public final void loadCompleted(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r5, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r6) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$4 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$4
                r3.<init>(r4, r2, r5, r6)
                r4.postOrRun(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void loadCompleted(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r11, int r12, int r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14, int r15, java.lang.Object r16, long r17, long r19, long r21, long r23, long r25) {
                r10 = this;
                r0 = r10
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo
                r1 = r9
                r2 = r11
                r3 = r21
                r5 = r23
                r7 = r25
                r1.<init>(r2, r3, r5, r7)
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                r2 = r17
                long r2 = r10.adjustMediaTime(r2)
                r4 = r19
                long r4 = r10.adjustMediaTime(r4)
                r17 = r1
                r18 = r12
                r19 = r13
                r20 = r14
                r21 = r15
                r22 = r16
                r23 = r2
                r25 = r4
                r17.<init>(r18, r19, r20, r21, r22, r23, r25)
                r10.loadCompleted(r9, r1)
                return
        }

        public final void loadCompleted(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r18, int r19, long r20, long r22, long r24) {
                r17 = this;
                r0 = r17
                r1 = r18
                r2 = r19
                r11 = r20
                r13 = r22
                r15 = r24
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0.loadCompleted(r1, r2, r3, r4, r5, r6, r7, r9, r11, r13, r15)
                return
        }

        public final void loadError(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r11, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r12, java.io.IOException r13, boolean r14) {
                r10 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r10.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L25
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r4 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$6 r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$6
                r2 = r9
                r3 = r10
                r5 = r11
                r6 = r12
                r7 = r13
                r8 = r14
                r2.<init>(r3, r4, r5, r6, r7, r8)
                r10.postOrRun(r1, r9)
                goto L6
            L25:
                return
        }

        public final void loadError(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r11, int r12, int r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14, int r15, java.lang.Object r16, long r17, long r19, long r21, long r23, long r25, java.io.IOException r27, boolean r28) {
                r10 = this;
                r0 = r10
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo
                r1 = r9
                r2 = r11
                r3 = r21
                r5 = r23
                r7 = r25
                r1.<init>(r2, r3, r5, r7)
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                r2 = r17
                long r2 = r10.adjustMediaTime(r2)
                r4 = r19
                long r4 = r10.adjustMediaTime(r4)
                r17 = r1
                r18 = r12
                r19 = r13
                r20 = r14
                r21 = r15
                r22 = r16
                r23 = r2
                r25 = r4
                r17.<init>(r18, r19, r20, r21, r22, r23, r25)
                r2 = r27
                r3 = r28
                r10.loadError(r9, r1, r2, r3)
                return
        }

        public final void loadError(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r20, int r21, long r22, long r24, long r26, java.io.IOException r28, boolean r29) {
                r19 = this;
                r0 = r19
                r1 = r20
                r2 = r21
                r11 = r22
                r13 = r24
                r15 = r26
                r17 = r28
                r18 = r29
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0.loadError(r1, r2, r3, r4, r5, r6, r7, r9, r11, r13, r15, r17, r18)
                return
        }

        public final void loadStarted(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r5, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r6) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$3 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$3
                r3.<init>(r4, r2, r5, r6)
                r4.postOrRun(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void loadStarted(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r21, int r22, int r23, com.mbridge.msdk.playercommon.exoplayer2.Format r24, int r25, java.lang.Object r26, long r27, long r29, long r31) {
                r20 = this;
                r0 = r20
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$LoadEventInfo
                r5 = 0
                r7 = 0
                r1 = r9
                r2 = r21
                r3 = r31
                r1.<init>(r2, r3, r5, r7)
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                r2 = r27
                long r16 = r0.adjustMediaTime(r2)
                r2 = r29
                long r18 = r0.adjustMediaTime(r2)
                r10 = r1
                r11 = r22
                r12 = r23
                r13 = r24
                r14 = r25
                r15 = r26
                r10.<init>(r11, r12, r13, r14, r15, r16, r18)
                r0.loadStarted(r9, r1)
                return
        }

        public final void loadStarted(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r14, int r15, long r16) {
                r13 = this;
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0 = r13
                r1 = r14
                r2 = r15
                r11 = r16
                r0.loadStarted(r1, r2, r3, r4, r5, r6, r7, r9, r11)
                return
        }

        public final void mediaPeriodCreated() {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r4.mediaPeriodId
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L29
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$1 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$1
                r3.<init>(r4, r2)
                r4.postOrRun(r1, r3)
                goto L10
            L29:
                return
        }

        public final void mediaPeriodReleased() {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r4.mediaPeriodId
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L29
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$2 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$2
                r3.<init>(r4, r2)
                r4.postOrRun(r1, r3)
                goto L10
            L29:
                return
        }

        public final void readingStarted() {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r4.mediaPeriodId
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L29
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$7 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$7
                r3.<init>(r4, r2)
                r4.postOrRun(r1, r3)
                goto L10
            L29:
                return
        }

        public final void removeEventListener(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r4) {
                r3 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r3.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                if (r2 != r4) goto L6
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r2 = r3.listenerAndHandlers
                r2.remove(r1)
                goto L6
            L1c:
                return
        }

        public final void upstreamDiscarded(int r13, long r14, long r16) {
                r12 = this;
                r0 = r12
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r11 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                r1 = r14
                long r7 = r12.adjustMediaTime(r14)
                r1 = r16
                long r9 = r12.adjustMediaTime(r1)
                r2 = 1
                r4 = 0
                r5 = 3
                r6 = 0
                r1 = r11
                r3 = r13
                r1.<init>(r2, r3, r4, r5, r6, r7, r9)
                r12.upstreamDiscarded(r11)
                return
        }

        public final void upstreamDiscarded(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r5) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r0 = r4.listenerAndHandlers
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher.ListenerAndHandler) r1
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$8 r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$8
                r3.<init>(r4, r2, r5)
                r4.postOrRun(r1, r3)
                goto L6
            L1f:
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher withParameters(int r8, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r9, long r10) {
                r7 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher$ListenerAndHandler> r1 = r7.listenerAndHandlers
                r0 = r6
                r2 = r8
                r3 = r9
                r4 = r10
                r0.<init>(r1, r2, r3, r4)
                return r6
        }
    }

    public static final class LoadEventInfo {
        public final long bytesLoaded;
        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
        public final long elapsedRealtimeMs;
        public final long loadDurationMs;

        public LoadEventInfo(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1, long r2, long r4, long r6) {
                r0 = this;
                r0.<init>()
                r0.dataSpec = r1
                r0.elapsedRealtimeMs = r2
                r0.loadDurationMs = r4
                r0.bytesLoaded = r6
                return
        }
    }

    public static final class MediaLoadData {
        public final int dataType;
        public final long mediaEndTimeMs;
        public final long mediaStartTimeMs;
        public final com.mbridge.msdk.playercommon.exoplayer2.Format trackFormat;
        public final java.lang.Object trackSelectionData;
        public final int trackSelectionReason;
        public final int trackType;

        public MediaLoadData(int r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, int r4, java.lang.Object r5, long r6, long r8) {
                r0 = this;
                r0.<init>()
                r0.dataType = r1
                r0.trackType = r2
                r0.trackFormat = r3
                r0.trackSelectionReason = r4
                r0.trackSelectionData = r5
                r0.mediaStartTimeMs = r6
                r0.mediaEndTimeMs = r8
                return
        }
    }

    void onDownstreamFormatChanged(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3);

    void onLoadCanceled(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4);

    void onLoadCompleted(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4);

    void onLoadError(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4, java.io.IOException r5, boolean r6);

    void onLoadStarted(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4);

    void onMediaPeriodCreated(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2);

    void onMediaPeriodReleased(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2);

    void onReadingStarted(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2);

    void onUpstreamDiscarded(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3);
}
