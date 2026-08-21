package com.mbridge.msdk.playercommon.exoplayer2.audio;

public interface AudioRendererEventListener {

    public static final class EventDispatcher {
        private final android.os.Handler handler;
        private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener listener;







        public EventDispatcher(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r2) {
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

        static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener access$000(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.EventDispatcher r0) {
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r0.listener
                return r0
        }

        public final void audioSessionId(int r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$6 r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$6
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void audioTrackUnderrun(int r10, long r11, long r13) {
                r9 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r9.listener
                if (r0 == 0) goto L13
                android.os.Handler r0 = r9.handler
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$4 r8 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$4
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

        public final void decoderInitialized(java.lang.String r10, long r11, long r13) {
                r9 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r9.listener
                if (r0 == 0) goto L13
                android.os.Handler r0 = r9.handler
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$2 r8 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$2
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
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$5 r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$5
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void enabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$1
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void inputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r0 = r2.listener
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.handler
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$3 r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher$3
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }
    }

    void onAudioDecoderInitialized(java.lang.String r1, long r2, long r4);

    void onAudioDisabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1);

    void onAudioEnabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1);

    void onAudioInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r1);

    void onAudioSessionId(int r1);

    void onAudioSinkUnderrun(int r1, long r2, long r4);
}
