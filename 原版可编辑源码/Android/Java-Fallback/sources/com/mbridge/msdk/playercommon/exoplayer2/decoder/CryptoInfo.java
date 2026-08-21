package com.mbridge.msdk.playercommon.exoplayer2.decoder;

public final class CryptoInfo {
    public int clearBlocks;
    public int encryptedBlocks;
    private final android.media.MediaCodec.CryptoInfo frameworkCryptoInfo;
    public byte[] iv;
    public byte[] key;
    public int mode;
    public int[] numBytesOfClearData;
    public int[] numBytesOfEncryptedData;
    public int numSubSamples;
    private final com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo.PatternHolderV24 patternHolder;

    static class 1 {
    }

    private static final class PatternHolderV24 {
        private final android.media.MediaCodec.CryptoInfo frameworkCryptoInfo;
        private final android.media.MediaCodec.CryptoInfo.Pattern pattern;

        private PatternHolderV24(android.media.MediaCodec.CryptoInfo r2) {
                r1 = this;
                r1.<init>()
                r1.frameworkCryptoInfo = r2
                android.media.MediaCodec$CryptoInfo$Pattern r2 = new android.media.MediaCodec$CryptoInfo$Pattern
                r0 = 0
                r2.<init>(r0, r0)
                r1.pattern = r2
                return
        }

        PatternHolderV24(android.media.MediaCodec.CryptoInfo r1, com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        static void access$100(com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo.PatternHolderV24 r0, int r1, int r2) {
                r0.set(r1, r2)
                return
        }

        private void set(int r2, int r3) {
                r1 = this;
                android.media.MediaCodec$CryptoInfo$Pattern r0 = r1.pattern
                r0.set(r2, r3)
                android.media.MediaCodec$CryptoInfo r2 = r1.frameworkCryptoInfo
                android.media.MediaCodec$CryptoInfo$Pattern r3 = r1.pattern
                r2.setPattern(r3)
                return
        }
    }

    public CryptoInfo() {
            r3 = this;
            r3.<init>()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 0
            r2 = 16
            if (r0 < r2) goto Lf
            android.media.MediaCodec$CryptoInfo r0 = r3.newFrameworkCryptoInfoV16()
            goto L10
        Lf:
            r0 = r1
        L10:
            r3.frameworkCryptoInfo = r0
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 24
            if (r0 < r2) goto L20
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo$PatternHolderV24 r0 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo$PatternHolderV24
            android.media.MediaCodec$CryptoInfo r2 = r3.frameworkCryptoInfo
            r0.<init>(r2, r1)
            r1 = r0
        L20:
            r3.patternHolder = r1
            return
    }

    private android.media.MediaCodec.CryptoInfo newFrameworkCryptoInfoV16() {
            r1 = this;
            android.media.MediaCodec$CryptoInfo r0 = new android.media.MediaCodec$CryptoInfo
            r0.<init>()
            return r0
    }

    private void updateFrameworkCryptoInfoV16() {
            r3 = this;
            android.media.MediaCodec$CryptoInfo r0 = r3.frameworkCryptoInfo
            int r1 = r3.numSubSamples
            r0.numSubSamples = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.frameworkCryptoInfo
            int[] r1 = r3.numBytesOfClearData
            r0.numBytesOfClearData = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.frameworkCryptoInfo
            int[] r1 = r3.numBytesOfEncryptedData
            r0.numBytesOfEncryptedData = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.frameworkCryptoInfo
            byte[] r1 = r3.key
            r0.key = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.frameworkCryptoInfo
            byte[] r1 = r3.iv
            r0.iv = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.frameworkCryptoInfo
            int r1 = r3.mode
            r0.mode = r1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 24
            if (r0 < r1) goto L33
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo$PatternHolderV24 r0 = r3.patternHolder
            int r1 = r3.encryptedBlocks
            int r2 = r3.clearBlocks
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo.PatternHolderV24.access$100(r0, r1, r2)
        L33:
            return
    }

    public final android.media.MediaCodec.CryptoInfo getFrameworkCryptoInfoV16() {
            r1 = this;
            android.media.MediaCodec$CryptoInfo r0 = r1.frameworkCryptoInfo
            return r0
    }

    public final void set(int r1, int[] r2, int[] r3, byte[] r4, byte[] r5, int r6, int r7, int r8) {
            r0 = this;
            r0.numSubSamples = r1
            r0.numBytesOfClearData = r2
            r0.numBytesOfEncryptedData = r3
            r0.key = r4
            r0.iv = r5
            r0.mode = r6
            r0.encryptedBlocks = r7
            r0.clearBlocks = r8
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 16
            if (r1 < r2) goto L19
            r0.updateFrameworkCryptoInfoV16()
        L19:
            return
    }
}
