package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class AudioCapabilitiesReceiver {
    com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities audioCapabilities;
    private final android.content.Context context;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver.Listener listener;
    private final android.content.BroadcastReceiver receiver;

    static class 1 {
    }

    private final class HdmiAudioPlugBroadcastReceiver extends android.content.BroadcastReceiver {
        final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver this$0;

        private HdmiAudioPlugBroadcastReceiver(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        HdmiAudioPlugBroadcastReceiver(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver r1, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onReceive(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                boolean r1 = r0.isInitialStickyBroadcast()
                if (r1 != 0) goto L21
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities.getCapabilities(r2)
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver r2 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r2 = r2.audioCapabilities
                boolean r2 = r1.equals(r2)
                if (r2 != 0) goto L21
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver r2 = r0.this$0
                r2.audioCapabilities = r1
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver r2 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver$Listener r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver.access$100(r2)
                r2.onAudioCapabilitiesChanged(r1)
            L21:
                return
        }
    }

    public interface Listener {
        void onAudioCapabilitiesChanged(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r1);
    }

    public AudioCapabilitiesReceiver(android.content.Context r2, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver.Listener r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            android.content.Context r2 = (android.content.Context) r2
            r1.context = r2
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver$Listener r2 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver.Listener) r2
            r1.listener = r2
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r3 = 0
            r0 = 21
            if (r2 < r0) goto L20
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver$HdmiAudioPlugBroadcastReceiver r2 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver$HdmiAudioPlugBroadcastReceiver
            r2.<init>(r1, r3)
            r3 = r2
        L20:
            r1.receiver = r3
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver.Listener access$100(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver r0) {
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilitiesReceiver$Listener r0 = r0.listener
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities register() {
            r4 = this;
            android.content.BroadcastReceiver r0 = r4.receiver
            if (r0 != 0) goto L6
            r0 = 0
            goto L13
        L6:
            android.content.Context r1 = r4.context
            android.content.IntentFilter r2 = new android.content.IntentFilter
            java.lang.String r3 = "android.media.action.HDMI_AUDIO_PLUG"
            r2.<init>(r3)
            android.content.Intent r0 = r1.registerReceiver(r0, r2)
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities.getCapabilities(r0)
            r4.audioCapabilities = r0
            return r0
    }

    public final void unregister() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.receiver
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.context
            r1.unregisterReceiver(r0)
        L9:
            return
    }
}
