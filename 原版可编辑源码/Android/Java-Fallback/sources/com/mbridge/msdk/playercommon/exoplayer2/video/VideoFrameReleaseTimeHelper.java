package com.mbridge.msdk.playercommon.exoplayer2.video;

public final class VideoFrameReleaseTimeHelper {
    private static final long CHOREOGRAPHER_SAMPLE_DELAY_MILLIS = 500;
    private static final long MAX_ALLOWED_DRIFT_NS = 20000000;
    private static final int MIN_FRAMES_FOR_ADJUSTMENT = 6;
    private static final long VSYNC_OFFSET_PERCENTAGE = 80;
    private long adjustedLastFrameTimeNs;
    private final com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.DefaultDisplayListener displayListener;
    private long frameCount;
    private boolean haveSync;
    private long lastFramePresentationTimeUs;
    private long pendingAdjustedFrameTimeNs;
    private long syncFramePresentationTimeNs;
    private long syncUnadjustedReleaseTimeNs;
    private long vsyncDurationNs;
    private long vsyncOffsetNs;
    private final com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.VSyncSampler vsyncSampler;
    private final android.view.WindowManager windowManager;

    private final class DefaultDisplayListener implements android.hardware.display.DisplayManager.DisplayListener {
        private final android.hardware.display.DisplayManager displayManager;
        final com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper this$0;

        public DefaultDisplayListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r1, android.hardware.display.DisplayManager r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.displayManager = r2
                return
        }

        @Override
        public final void onDisplayAdded(int r1) {
                r0 = this;
                return
        }

        @Override
        public final void onDisplayChanged(int r1) {
                r0 = this;
                if (r1 != 0) goto L7
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.access$000(r1)
            L7:
                return
        }

        @Override
        public final void onDisplayRemoved(int r1) {
                r0 = this;
                return
        }

        public final void register() {
                r2 = this;
                android.hardware.display.DisplayManager r0 = r2.displayManager
                r1 = 0
                r0.registerDisplayListener(r2, r1)
                return
        }

        public final void unregister() {
                r1 = this;
                android.hardware.display.DisplayManager r0 = r1.displayManager
                r0.unregisterDisplayListener(r1)
                return
        }
    }

    private static final class VSyncSampler implements android.os.Handler.Callback, android.view.Choreographer.FrameCallback {
        private static final int CREATE_CHOREOGRAPHER = 0;
        private static final com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.VSyncSampler INSTANCE = null;
        private static final int MSG_ADD_OBSERVER = 1;
        private static final int MSG_REMOVE_OBSERVER = 2;
        private android.view.Choreographer choreographer;
        private final android.os.HandlerThread choreographerOwnerThread;
        private final android.os.Handler handler;
        private int observerCount;
        public volatile long sampledVsyncTimeNs;

        static {
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler r0 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.VSyncSampler.INSTANCE = r0
                return
        }

        private VSyncSampler() {
                r2 = this;
                r2.<init>()
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r2.sampledVsyncTimeNs = r0
                android.os.HandlerThread r0 = new android.os.HandlerThread
                java.lang.String r1 = "ChoreographerOwner:Handler"
                r0.<init>(r1)
                r2.choreographerOwnerThread = r0
                r0.start()
                android.os.Handler r0 = new android.os.Handler
                android.os.HandlerThread r1 = r2.choreographerOwnerThread
                android.os.Looper r1 = r1.getLooper()
                r0.<init>(r1, r2)
                r2.handler = r0
                r1 = 0
                r0.sendEmptyMessage(r1)
                return
        }

        private void addObserverInternal() {
                r2 = this;
                int r0 = r2.observerCount
                r1 = 1
                int r0 = r0 + r1
                r2.observerCount = r0
                if (r0 != r1) goto Ld
                android.view.Choreographer r0 = r2.choreographer
                r0.postFrameCallback(r2)
            Ld:
                return
        }

        private void createChoreographerInstanceInternal() {
                r1 = this;
                android.view.Choreographer r0 = android.view.Choreographer.getInstance()
                r1.choreographer = r0
                return
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.VSyncSampler getInstance() {
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler r0 = com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.VSyncSampler.INSTANCE
                return r0
        }

        private void removeObserverInternal() {
                r2 = this;
                int r0 = r2.observerCount
                int r0 = r0 + (-1)
                r2.observerCount = r0
                if (r0 != 0) goto L14
                android.view.Choreographer r0 = r2.choreographer
                r0.removeFrameCallback(r2)
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r2.sampledVsyncTimeNs = r0
            L14:
                return
        }

        public final void addObserver() {
                r2 = this;
                android.os.Handler r0 = r2.handler
                r1 = 1
                r0.sendEmptyMessage(r1)
                return
        }

        @Override
        public final void doFrame(long r3) {
                r2 = this;
                r2.sampledVsyncTimeNs = r3
                android.view.Choreographer r3 = r2.choreographer
                r0 = 500(0x1f4, double:2.47E-321)
                r3.postFrameCallbackDelayed(r2, r0)
                return
        }

        @Override
        public final boolean handleMessage(android.os.Message r3) {
                r2 = this;
                int r3 = r3.what
                r0 = 1
                if (r3 == 0) goto L14
                if (r3 == r0) goto L10
                r1 = 2
                if (r3 == r1) goto Lc
                r3 = 0
                return r3
            Lc:
                r2.removeObserverInternal()
                return r0
            L10:
                r2.addObserverInternal()
                return r0
            L14:
                r2.createChoreographerInstanceInternal()
                return r0
        }

        public final void removeObserver() {
                r2 = this;
                android.os.Handler r0 = r2.handler
                r1 = 2
                r0.sendEmptyMessage(r1)
                return
        }
    }

    public VideoFrameReleaseTimeHelper() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public VideoFrameReleaseTimeHelper(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            if (r4 == 0) goto L15
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r1 = "window"
            java.lang.Object r1 = r4.getSystemService(r1)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            r3.windowManager = r1
            goto L17
        L15:
            r3.windowManager = r0
        L17:
            android.view.WindowManager r1 = r3.windowManager
            if (r1 == 0) goto L2e
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 17
            if (r1 < r2) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$DefaultDisplayListener r0 = r3.maybeBuildDefaultDisplayListenerV17(r4)
        L25:
            r3.displayListener = r0
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler r4 = com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.VSyncSampler.getInstance()
            r3.vsyncSampler = r4
            goto L32
        L2e:
            r3.displayListener = r0
            r3.vsyncSampler = r0
        L32:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.vsyncDurationNs = r0
            r3.vsyncOffsetNs = r0
            return
    }

    static void access$000(com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r0) {
            r0.updateDefaultDisplayRefreshRateParams()
            return
    }

    private static long closestVsync(long r4, long r6, long r8) {
            long r0 = r4 - r6
            long r0 = r0 / r8
            long r0 = r0 * r8
            long r6 = r6 + r0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 > 0) goto Lc
            long r8 = r6 - r8
            goto L10
        Lc:
            long r8 = r8 + r6
            r2 = r6
            r6 = r8
            r8 = r2
        L10:
            long r0 = r6 - r4
            long r4 = r4 - r8
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 >= 0) goto L18
            goto L19
        L18:
            r6 = r8
        L19:
            return r6
    }

    private boolean isDriftTooLarge(long r3, long r5) {
            r2 = this;
            long r0 = r2.syncFramePresentationTimeNs
            long r3 = r3 - r0
            long r0 = r2.syncUnadjustedReleaseTimeNs
            long r5 = r5 - r0
            long r5 = r5 - r3
            long r3 = java.lang.Math.abs(r5)
            r5 = 20000000(0x1312d00, double:9.881313E-317)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L14
            r3 = 1
            goto L15
        L14:
            r3 = 0
        L15:
            return r3
    }

    private com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper.DefaultDisplayListener maybeBuildDefaultDisplayListenerV17(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "display"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.hardware.display.DisplayManager r2 = (android.hardware.display.DisplayManager) r2
            if (r2 != 0) goto Lc
            r2 = 0
            goto L12
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$DefaultDisplayListener r0 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$DefaultDisplayListener
            r0.<init>(r1, r2)
            r2 = r0
        L12:
            return r2
    }

    private void updateDefaultDisplayRefreshRateParams() {
            r4 = this;
            android.view.WindowManager r0 = r4.windowManager
            android.view.Display r0 = r0.getDefaultDisplay()
            if (r0 == 0) goto L1e
            float r0 = r0.getRefreshRate()
            double r0 = (double) r0
            r2 = 4741671816366391296(0x41cdcd6500000000, double:1.0E9)
            double r2 = r2 / r0
            long r0 = (long) r2
            r4.vsyncDurationNs = r0
            r2 = 80
            long r0 = r0 * r2
            r2 = 100
            long r0 = r0 / r2
            r4.vsyncOffsetNs = r0
        L1e:
            return
    }

    public final long adjustReleaseTime(long r11, long r13) {
            r10 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r11
            boolean r2 = r10.haveSync
            if (r2 == 0) goto L41
            long r2 = r10.lastFramePresentationTimeUs
            int r2 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r2 == 0) goto L18
            long r2 = r10.frameCount
            r4 = 1
            long r2 = r2 + r4
            r10.frameCount = r2
            long r2 = r10.pendingAdjustedFrameTimeNs
            r10.adjustedLastFrameTimeNs = r2
        L18:
            long r2 = r10.frameCount
            r4 = 6
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r5 = 0
            if (r4 < 0) goto L39
            long r6 = r10.syncFramePresentationTimeNs
            long r6 = r0 - r6
            long r6 = r6 / r2
            long r2 = r10.adjustedLastFrameTimeNs
            long r2 = r2 + r6
            boolean r4 = r10.isDriftTooLarge(r2, r13)
            if (r4 == 0) goto L32
            r10.haveSync = r5
            goto L41
        L32:
            long r4 = r10.syncUnadjustedReleaseTimeNs
            long r4 = r4 + r2
            long r6 = r10.syncFramePresentationTimeNs
            long r4 = r4 - r6
            goto L43
        L39:
            boolean r2 = r10.isDriftTooLarge(r0, r13)
            if (r2 == 0) goto L41
            r10.haveSync = r5
        L41:
            r4 = r13
            r2 = r0
        L43:
            boolean r6 = r10.haveSync
            if (r6 != 0) goto L52
            r10.syncFramePresentationTimeNs = r0
            r10.syncUnadjustedReleaseTimeNs = r13
            r13 = 0
            r10.frameCount = r13
            r13 = 1
            r10.haveSync = r13
        L52:
            r10.lastFramePresentationTimeUs = r11
            r10.pendingAdjustedFrameTimeNs = r2
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler r11 = r10.vsyncSampler
            if (r11 == 0) goto L77
            long r12 = r10.vsyncDurationNs
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r12 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r12 != 0) goto L66
            goto L77
        L66:
            long r6 = r11.sampledVsyncTimeNs
            int r11 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r11 != 0) goto L6d
            return r4
        L6d:
            long r8 = r10.vsyncDurationNs
            long r11 = closestVsync(r4, r6, r8)
            long r13 = r10.vsyncOffsetNs
            long r11 = r11 - r13
            return r11
        L77:
            return r4
    }

    public final void disable() {
            r1 = this;
            android.view.WindowManager r0 = r1.windowManager
            if (r0 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$DefaultDisplayListener r0 = r1.displayListener
            if (r0 == 0) goto Lb
            r0.unregister()
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler r0 = r1.vsyncSampler
            r0.removeObserver()
        L10:
            return
    }

    public final void enable() {
            r1 = this;
            r0 = 0
            r1.haveSync = r0
            android.view.WindowManager r0 = r1.windowManager
            if (r0 == 0) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$VSyncSampler r0 = r1.vsyncSampler
            r0.addObserver()
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper$DefaultDisplayListener r0 = r1.displayListener
            if (r0 == 0) goto L13
            r0.register()
        L13:
            r1.updateDefaultDisplayRefreshRateParams()
        L16:
            return
    }
}
