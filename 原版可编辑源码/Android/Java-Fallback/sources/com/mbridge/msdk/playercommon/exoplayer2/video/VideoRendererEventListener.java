package com.mbridge.msdk.playercommon.exoplayer2.video;

public interface VideoRendererEventListener {

    public static final class EventDispatcher {
        private final android.os.Handler handler;
        private final com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener listener;








        public EventDispatcher(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r2) {
                r0 = this;
                r0.<init>()
                if (r2 == 0) goto Lc
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
                android.os.Handler r1 = (android.os.Handler) r1
                goto Ld
            Lc:
                r1 = 0
            Ld:
                r0.handler = r1
                r0.listener = r2
                return
        }

        static com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener access$000(com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener.EventDispatcher r0) {
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r0.listener
                return r0
        }

        public final void decoderInitialized(java.lang.String r10, long r11, long r13) {
                r9 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r9.listener
                if (r0 == 0) goto L13
                android.os.Handler r0 = r9.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$2 r8 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$2
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r6 = r13
                r1.<init>(r2, r3, r4, r6)
                r0.post(r8)
            L13:
                return
        }

        public final void disabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$7 r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$7
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void droppedFrames(int r3, long r4) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$4 r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$4
                r1.<init>(r2, r3, r4)
                r0.post(r1)
            Le:
                return
        }

        public final void enabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$1
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void inputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$3 r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$3
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void renderedFirstFrame(android.view.Surface r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$6 r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$6
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void videoSizeChanged(int r9, int r10, int r11, float r12) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r0 = r8.listener
                if (r0 == 0) goto L14
                android.os.Handler r0 = r8.handler
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$5 r7 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher$5
                r1 = r7
                r2 = r8
                r3 = r9
                r4 = r10
                r5 = r11
                r6 = r12
                r1.<init>(r2, r3, r4, r5, r6)
                r0.post(r7)
            L14:
                return
        }
    }

    void onDroppedFrames(int r1, long r2);

    void onRenderedFirstFrame(android.view.Surface r1);

    void onVideoDecoderInitialized(java.lang.String r1, long r2, long r4);

    void onVideoDisabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1);

    void onVideoEnabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1);

    void onVideoInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r1);

    void onVideoSizeChanged(int r1, int r2, int r3, float r4);
}
