package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class AudioCapabilities {
    public static final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities DEFAULT_AUDIO_CAPABILITIES = null;
    private final int maxChannelCount;
    private final int[] supportedEncodings;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities
            r1 = 1
            int[] r1 = new int[r1]
            r2 = 2
            r3 = 0
            r1[r3] = r2
            r0.<init>(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities.DEFAULT_AUDIO_CAPABILITIES = r0
            return
    }

    AudioCapabilities(int[] r2, int r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L10
            int r0 = r2.length
            int[] r2 = java.util.Arrays.copyOf(r2, r0)
            r1.supportedEncodings = r2
            java.util.Arrays.sort(r2)
            goto L15
        L10:
            r2 = 0
            int[] r2 = new int[r2]
            r1.supportedEncodings = r2
        L15:
            r1.maxChannelCount = r3
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities getCapabilities(android.content.Context r2) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.media.action.HDMI_AUDIO_PLUG"
            r0.<init>(r1)
            r1 = 0
            android.content.Intent r2 = r2.registerReceiver(r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r2 = getCapabilities(r2)
            return r2
    }

    static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities getCapabilities(android.content.Intent r4) {
            if (r4 == 0) goto L1e
            r0 = 0
            java.lang.String r1 = "android.media.extra.AUDIO_PLUG_STATE"
            int r1 = r4.getIntExtra(r1, r0)
            if (r1 != 0) goto Lc
            goto L1e
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities
            java.lang.String r2 = "android.media.extra.ENCODINGS"
            int[] r2 = r4.getIntArrayExtra(r2)
            java.lang.String r3 = "android.media.extra.MAX_CHANNEL_COUNT"
            int r4 = r4.getIntExtra(r3, r0)
            r1.<init>(r2, r4)
            return r1
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities.DEFAULT_AUDIO_CAPABILITIES
            return r4
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r5 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities) r5
            int[] r1 = r4.supportedEncodings
            int[] r3 = r5.supportedEncodings
            boolean r1 = java.util.Arrays.equals(r1, r3)
            if (r1 == 0) goto L1d
            int r1 = r4.maxChannelCount
            int r5 = r5.maxChannelCount
            if (r1 != r5) goto L1d
            goto L1e
        L1d:
            r0 = r2
        L1e:
            return r0
    }

    public final int getMaxChannelCount() {
            r1 = this;
            int r0 = r1.maxChannelCount
            return r0
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.maxChannelCount
            int[] r1 = r2.supportedEncodings
            int r1 = java.util.Arrays.hashCode(r1)
            int r1 = r1 * 31
            int r0 = r0 + r1
            return r0
    }

    public final boolean supportsEncoding(int r2) {
            r1 = this;
            int[] r0 = r1.supportedEncodings
            int r2 = java.util.Arrays.binarySearch(r0, r2)
            if (r2 < 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AudioCapabilities[maxChannelCount="
            r0.append(r1)
            int r1 = r2.maxChannelCount
            r0.append(r1)
            java.lang.String r1 = ", supportedEncodings="
            r0.append(r1)
            int[] r1 = r2.supportedEncodings
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
