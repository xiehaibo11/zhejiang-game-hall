package com.mbridge.msdk.playercommon.exoplayer2.drm;

public interface DefaultDrmSessionEventListener {

    public static final class EventDispatcher {
        private final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher.HandlerAndListener> listeners;





        private static final class HandlerAndListener {
            public final android.os.Handler handler;
            public final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener listener;

            public HandlerAndListener(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2) {
                    r0 = this;
                    r0.<init>()
                    r0.handler = r1
                    r0.listener = r2
                    return
            }
        }

        public EventDispatcher() {
                r1 = this;
                r1.<init>()
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                r0.<init>()
                r1.listeners = r0
                return
        }

        public final void addListener(android.os.Handler r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r4) {
                r2 = this;
                if (r3 == 0) goto L6
                if (r4 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r0 = r2.listeners
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener
                r1.<init>(r3, r4)
                r0.add(r1)
                return
        }

        public final void drmKeysLoaded() {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r0 = r4.listeners
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher.HandlerAndListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$1 r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$1
                r3.<init>(r4, r2)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void drmKeysRemoved() {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r0 = r4.listeners
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher.HandlerAndListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$4 r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$4
                r3.<init>(r4, r2)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void drmKeysRestored() {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r0 = r4.listeners
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher.HandlerAndListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$3 r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$3
                r3.<init>(r4, r2)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void drmSessionManagerError(java.lang.Exception r5) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r0 = r4.listeners
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher.HandlerAndListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2 = r1.listener
                android.os.Handler r1 = r1.handler
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$2 r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$2
                r3.<init>(r4, r2, r5)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void removeListener(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r4) {
                r3 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r0 = r3.listeners
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher.HandlerAndListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2 = r1.listener
                if (r2 != r4) goto L6
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher$HandlerAndListener> r2 = r3.listeners
                r2.remove(r1)
                goto L6
            L1c:
                return
        }
    }

    void onDrmKeysLoaded();

    void onDrmKeysRemoved();

    void onDrmKeysRestored();

    void onDrmSessionManagerError(java.lang.Exception r1);
}
