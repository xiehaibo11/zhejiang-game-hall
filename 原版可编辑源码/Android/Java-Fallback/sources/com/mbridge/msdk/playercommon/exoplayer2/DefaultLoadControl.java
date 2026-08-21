package com.mbridge.msdk.playercommon.exoplayer2;

public class DefaultLoadControl implements com.mbridge.msdk.playercommon.exoplayer2.LoadControl {
    public static final int DEFAULT_BUFFER_FOR_PLAYBACK_AFTER_REBUFFER_MS = 5000;
    public static final int DEFAULT_BUFFER_FOR_PLAYBACK_MS = 2500;
    public static final int DEFAULT_MAX_BUFFER_MS = 50000;
    public static final int DEFAULT_MIN_BUFFER_MS = 15000;
    public static final boolean DEFAULT_PRIORITIZE_TIME_OVER_SIZE_THRESHOLDS = true;
    public static final int DEFAULT_TARGET_BUFFER_BYTES = -1;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator allocator;
    private final long bufferForPlaybackAfterRebufferUs;
    private final long bufferForPlaybackUs;
    private boolean isBuffering;
    private final long maxBufferUs;
    private final long minBufferUs;
    private final boolean prioritizeTimeOverSizeThresholds;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;
    private final int targetBufferBytesOverwrite;
    private int targetBufferSize;

    public static final class Builder {
        private com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator allocator;
        private int bufferForPlaybackAfterRebufferMs;
        private int bufferForPlaybackMs;
        private int maxBufferMs;
        private int minBufferMs;
        private boolean prioritizeTimeOverSizeThresholds;
        private com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;
        private int targetBufferBytes;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.allocator = r0
                r1 = 15000(0x3a98, float:2.102E-41)
                r2.minBufferMs = r1
                r1 = 50000(0xc350, float:7.0065E-41)
                r2.maxBufferMs = r1
                r1 = 2500(0x9c4, float:3.503E-42)
                r2.bufferForPlaybackMs = r1
                r1 = 5000(0x1388, float:7.006E-42)
                r2.bufferForPlaybackAfterRebufferMs = r1
                r1 = -1
                r2.targetBufferBytes = r1
                r1 = 1
                r2.prioritizeTimeOverSizeThresholds = r1
                r2.priorityTaskManager = r0
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl createDefaultLoadControl() {
                r12 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r0 = r12.allocator
                if (r0 != 0) goto Le
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator
                r1 = 1
                r2 = 65536(0x10000, float:9.1835E-41)
                r0.<init>(r1, r2)
                r12.allocator = r0
            Le:
                com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r4 = r12.allocator
                int r5 = r12.minBufferMs
                int r6 = r12.maxBufferMs
                int r7 = r12.bufferForPlaybackMs
                int r8 = r12.bufferForPlaybackAfterRebufferMs
                int r9 = r12.targetBufferBytes
                boolean r10 = r12.prioritizeTimeOverSizeThresholds
                com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r11 = r12.priorityTaskManager
                r3 = r0
                r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl.Builder setAllocator(com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r1) {
                r0 = this;
                r0.allocator = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl.Builder setBufferDurationsMs(int r1, int r2, int r3, int r4) {
                r0 = this;
                r0.minBufferMs = r1
                r0.maxBufferMs = r2
                r0.bufferForPlaybackMs = r3
                r0.bufferForPlaybackAfterRebufferMs = r4
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl.Builder setPrioritizeTimeOverSizeThresholds(boolean r1) {
                r0 = this;
                r0.prioritizeTimeOverSizeThresholds = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl.Builder setPriorityTaskManager(com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r1) {
                r0 = this;
                r0.priorityTaskManager = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl.Builder setTargetBufferBytes(int r1) {
                r0 = this;
                r0.targetBufferBytes = r1
                return r0
        }
    }

    public DefaultLoadControl() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator
            r1 = 1
            r2 = 65536(0x10000, float:9.1835E-41)
            r0.<init>(r1, r2)
            r3.<init>(r0)
            return
    }

    public DefaultLoadControl(com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r9) {
            r8 = this;
            r2 = 15000(0x3a98, float:2.102E-41)
            r3 = 50000(0xc350, float:7.0065E-41)
            r4 = 2500(0x9c4, float:3.503E-42)
            r5 = 5000(0x1388, float:7.006E-42)
            r6 = -1
            r7 = 1
            r0 = r8
            r1 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public DefaultLoadControl(com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r10, int r11, int r12, int r13, int r14, int r15, boolean r16) {
            r9 = this;
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public DefaultLoadControl(com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r5, int r6, int r7, int r8, int r9, int r10, boolean r11, com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r12) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "0"
            java.lang.String r1 = "bufferForPlaybackMs"
            r2 = 0
            assertGreaterOrEqual(r8, r2, r1, r0)
            java.lang.String r3 = "bufferForPlaybackAfterRebufferMs"
            assertGreaterOrEqual(r9, r2, r3, r0)
            java.lang.String r0 = "minBufferMs"
            assertGreaterOrEqual(r6, r8, r0, r1)
            assertGreaterOrEqual(r6, r9, r0, r3)
            java.lang.String r1 = "maxBufferMs"
            assertGreaterOrEqual(r7, r6, r1, r0)
            r4.allocator = r5
            long r5 = (long) r6
            r0 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r0
            r4.minBufferUs = r5
            long r5 = (long) r7
            long r5 = r5 * r0
            r4.maxBufferUs = r5
            long r5 = (long) r8
            long r5 = r5 * r0
            r4.bufferForPlaybackUs = r5
            long r5 = (long) r9
            long r5 = r5 * r0
            r4.bufferForPlaybackAfterRebufferUs = r5
            r4.targetBufferBytesOverwrite = r10
            r4.prioritizeTimeOverSizeThresholds = r11
            r4.priorityTaskManager = r12
            return
    }

    private static void assertGreaterOrEqual(int r0, int r1, java.lang.String r2, java.lang.String r3) {
            if (r0 < r1) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = " cannot be less than "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0, r1)
            return
    }

    private void reset(boolean r4) {
            r3 = this;
            r0 = 0
            r3.targetBufferSize = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r1 = r3.priorityTaskManager
            if (r1 == 0) goto Le
            boolean r2 = r3.isBuffering
            if (r2 == 0) goto Le
            r1.remove(r0)
        Le:
            r3.isBuffering = r0
            if (r4 == 0) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r4 = r3.allocator
            r4.reset()
        L17:
            return
    }

    protected int calculateTargetBufferSize(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r4, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r5) {
            r3 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.length
            if (r0 >= r2) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r2 = r5.get(r0)
            if (r2 == 0) goto L16
            r2 = r4[r0]
            int r2 = r2.getTrackType()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getDefaultBufferSize(r2)
            int r1 = r1 + r2
        L16:
            int r0 = r0 + 1
            goto L2
        L19:
            return r1
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator getAllocator() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r0 = r1.allocator
            return r0
    }

    @Override
    public long getBackBufferDurationUs() {
            r2 = this;
            r0 = 0
            return r0
    }

    @Override
    public void onPrepared() {
            r1 = this;
            r0 = 0
            r1.reset(r0)
            return
    }

    @Override
    public void onReleased() {
            r1 = this;
            r0 = 1
            r1.reset(r0)
            return
    }

    @Override
    public void onStopped() {
            r1 = this;
            r0 = 1
            r1.reset(r0)
            return
    }

    @Override
    public void onTracksSelected(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r4) {
            r1 = this;
            int r3 = r1.targetBufferBytesOverwrite
            r0 = -1
            if (r3 != r0) goto L9
            int r3 = r1.calculateTargetBufferSize(r2, r4)
        L9:
            r1.targetBufferSize = r3
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r2 = r1.allocator
            r2.setTargetBufferSize(r3)
            return
    }

    @Override
    public boolean retainBackBufferFromKeyframe() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean shouldContinueLoading(long r9, float r11) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r0 = r8.allocator
            int r0 = r0.getTotalBytesAllocated()
            int r1 = r8.targetBufferSize
            r2 = 1
            r3 = 0
            if (r0 < r1) goto Le
            r0 = r2
            goto Lf
        Le:
            r0 = r3
        Lf:
            boolean r1 = r8.isBuffering
            long r4 = r8.minBufferUs
            r6 = 1065353216(0x3f800000, float:1.0)
            int r6 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r6 <= 0) goto L23
            long r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getMediaDurationForPlayoutDuration(r4, r11)
            long r6 = r8.maxBufferUs
            long r4 = java.lang.Math.min(r4, r6)
        L23:
            int r11 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r11 >= 0) goto L32
            boolean r9 = r8.prioritizeTimeOverSizeThresholds
            if (r9 != 0) goto L2f
            if (r0 != 0) goto L2e
            goto L2f
        L2e:
            r2 = r3
        L2f:
            r8.isBuffering = r2
            goto L3c
        L32:
            long r4 = r8.maxBufferUs
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 > 0) goto L3a
            if (r0 == 0) goto L3c
        L3a:
            r8.isBuffering = r3
        L3c:
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r9 = r8.priorityTaskManager
            if (r9 == 0) goto L4d
            boolean r10 = r8.isBuffering
            if (r10 == r1) goto L4d
            if (r10 == 0) goto L4a
            r9.add(r3)
            goto L4d
        L4a:
            r9.remove(r3)
        L4d:
            boolean r9 = r8.isBuffering
            return r9
    }

    @Override
    public boolean shouldStartPlayback(long r3, float r5, boolean r6) {
            r2 = this;
            long r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPlayoutDurationForMediaDuration(r3, r5)
            if (r6 == 0) goto L9
            long r5 = r2.bufferForPlaybackAfterRebufferUs
            goto Lb
        L9:
            long r5 = r2.bufferForPlaybackUs
        Lb:
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 <= 0) goto L26
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L26
            boolean r3 = r2.prioritizeTimeOverSizeThresholds
            if (r3 != 0) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultAllocator r3 = r2.allocator
            int r3 = r3.getTotalBytesAllocated()
            int r4 = r2.targetBufferSize
            if (r3 < r4) goto L24
            goto L26
        L24:
            r3 = 0
            goto L27
        L26:
            r3 = 1
        L27:
            return r3
    }
}
