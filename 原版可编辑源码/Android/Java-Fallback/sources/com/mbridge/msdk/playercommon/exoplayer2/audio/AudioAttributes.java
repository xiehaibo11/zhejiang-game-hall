package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class AudioAttributes {
    public static final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes DEFAULT = null;
    private android.media.AudioAttributes audioAttributesV21;
    public final int contentType;
    public final int flags;
    public final int usage;

    static class 1 {
    }

    public static final class Builder {
        private int contentType;
        private int flags;
        private int usage;

        public Builder() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.contentType = r0
                r1.flags = r0
                r0 = 1
                r1.usage = r0
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes build() {
                r5 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes
                int r1 = r5.contentType
                int r2 = r5.flags
                int r3 = r5.usage
                r4 = 0
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.Builder setContentType(int r1) {
                r0 = this;
                r0.contentType = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.Builder setFlags(int r1) {
                r0 = this;
                r0.flags = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.Builder setUsage(int r1) {
                r0 = this;
                r0.usage = r1
                return r0
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes$Builder r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes$Builder
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = r0.build()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.DEFAULT = r0
            return
    }

    private AudioAttributes(int r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.contentType = r1
            r0.flags = r2
            r0.usage = r3
            return
    }

    AudioAttributes(int r1, int r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.1 r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L29
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L29
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r5 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes) r5
            int r2 = r4.contentType
            int r3 = r5.contentType
            if (r2 != r3) goto L27
            int r2 = r4.flags
            int r3 = r5.flags
            if (r2 != r3) goto L27
            int r2 = r4.usage
            int r5 = r5.usage
            if (r2 != r5) goto L27
            goto L28
        L27:
            r0 = r1
        L28:
            return r0
        L29:
            return r1
    }

    final android.media.AudioAttributes getAudioAttributesV21() {
            r2 = this;
            android.media.AudioAttributes r0 = r2.audioAttributesV21
            if (r0 != 0) goto L21
            android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
            r0.<init>()
            int r1 = r2.contentType
            android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
            int r1 = r2.flags
            android.media.AudioAttributes$Builder r0 = r0.setFlags(r1)
            int r1 = r2.usage
            android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
            android.media.AudioAttributes r0 = r0.build()
            r2.audioAttributesV21 = r0
        L21:
            android.media.AudioAttributes r0 = r2.audioAttributesV21
            return r0
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.contentType
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            int r0 = r2.flags
            int r1 = r1 + r0
            int r1 = r1 * 31
            int r0 = r2.usage
            int r1 = r1 + r0
            return r1
    }
}
