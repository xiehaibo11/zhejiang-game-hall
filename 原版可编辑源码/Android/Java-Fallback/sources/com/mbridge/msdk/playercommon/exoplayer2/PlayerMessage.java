package com.mbridge.msdk.playercommon.exoplayer2;

public final class PlayerMessage {
    private boolean deleteAfterDelivery;
    private android.os.Handler handler;
    private boolean isCanceled;
    private boolean isDelivered;
    private boolean isProcessed;
    private boolean isSent;
    private java.lang.Object payload;
    private long positionMs;
    private final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Sender sender;
    private final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target target;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;
    private int type;
    private int windowIndex;

    public interface Sender {
        void sendMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1);
    }

    public interface Target {
        void handleMessage(int r1, java.lang.Object r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;
    }

    public PlayerMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Sender r1, com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, int r4, android.os.Handler r5) {
            r0 = this;
            r0.<init>()
            r0.sender = r1
            r0.target = r2
            r0.timeline = r3
            r0.handler = r5
            r0.windowIndex = r4
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.positionMs = r1
            r1 = 1
            r0.deleteAfterDelivery = r1
            return
    }

    public final synchronized boolean blockUntilDelivered() throws java.lang.InterruptedException, java.util.concurrent.TimeoutException {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.isSent     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L47
            android.os.Handler r0 = r6.handler     // Catch: java.lang.Throwable -> L47
            android.os.Looper r0 = r0.getLooper()     // Catch: java.lang.Throwable -> L47
            java.lang.Thread r0 = r0.getThread()     // Catch: java.lang.Throwable -> L47
            java.lang.Thread r1 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L47
            if (r0 == r1) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L47
            r0 = 500(0x1f4, double:2.47E-321)
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L47
            long r2 = r2 + r0
        L23:
            boolean r4 = r6.isProcessed     // Catch: java.lang.Throwable -> L47
            if (r4 != 0) goto L37
            r4 = 0
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 <= 0) goto L37
            r6.wait(r0)     // Catch: java.lang.Throwable -> L47
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L47
            long r0 = r2 - r0
            goto L23
        L37:
            boolean r0 = r6.isProcessed     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L3f
            boolean r0 = r6.isDelivered     // Catch: java.lang.Throwable -> L47
            monitor-exit(r6)
            return r0
        L3f:
            java.util.concurrent.TimeoutException r0 = new java.util.concurrent.TimeoutException     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = "Message delivery time out"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L47
            throw r0     // Catch: java.lang.Throwable -> L47
        L47:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage cancel() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isSent     // Catch: java.lang.Throwable -> Lf
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> Lf
            r0 = 1
            r1.isCanceled = r0     // Catch: java.lang.Throwable -> Lf
            r0 = 0
            r1.markAsProcessed(r0)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r1
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final boolean getDeleteAfterDelivery() {
            r1 = this;
            boolean r0 = r1.deleteAfterDelivery
            return r0
    }

    public final android.os.Handler getHandler() {
            r1 = this;
            android.os.Handler r0 = r1.handler
            return r0
    }

    public final java.lang.Object getPayload() {
            r1 = this;
            java.lang.Object r0 = r1.payload
            return r0
    }

    public final long getPositionMs() {
            r2 = this;
            long r0 = r2.positionMs
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target getTarget() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage$Target r0 = r1.target
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline getTimeline() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            return r0
    }

    public final int getType() {
            r1 = this;
            int r0 = r1.type
            return r0
    }

    public final int getWindowIndex() {
            r1 = this;
            int r0 = r1.windowIndex
            return r0
    }

    public final synchronized boolean isCanceled() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isCanceled     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void markAsProcessed(boolean r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isDelivered     // Catch: java.lang.Throwable -> Le
            r2 = r2 | r0
            r1.isDelivered = r2     // Catch: java.lang.Throwable -> Le
            r2 = 1
            r1.isProcessed = r2     // Catch: java.lang.Throwable -> Le
            r1.notifyAll()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage send() {
            r6 = this;
            boolean r0 = r6.isSent
            r1 = 1
            r0 = r0 ^ r1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            long r2 = r6.positionMs
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L17
            boolean r0 = r6.deleteAfterDelivery
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
        L17:
            r6.isSent = r1
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage$Sender r0 = r6.sender
            r0.sendMessage(r6)
            return r6
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage setDeleteAfterDelivery(boolean r2) {
            r1 = this;
            boolean r0 = r1.isSent
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.deleteAfterDelivery = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage setHandler(android.os.Handler r2) {
            r1 = this;
            boolean r0 = r1.isSent
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.handler = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage setPayload(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.isSent
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.payload = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage setPosition(int r5, long r6) {
            r4 = this;
            boolean r0 = r4.isSent
            r1 = 1
            r0 = r0 ^ r1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 == 0) goto L11
            goto L12
        L11:
            r1 = 0
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
            if (r5 < 0) goto L2c
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r4.timeline
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r4.timeline
            int r0 = r0.getWindowCount()
            if (r5 >= r0) goto L2c
        L27:
            r4.windowIndex = r5
            r4.positionMs = r6
            return r4
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.IllegalSeekPositionException r0 = new com.mbridge.msdk.playercommon.exoplayer2.IllegalSeekPositionException
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r4.timeline
            r0.<init>(r1, r5, r6)
            throw r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage setPosition(long r2) {
            r1 = this;
            boolean r0 = r1.isSent
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.positionMs = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage setType(int r2) {
            r1 = this;
            boolean r0 = r1.isSent
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.type = r2
            return r1
    }
}
