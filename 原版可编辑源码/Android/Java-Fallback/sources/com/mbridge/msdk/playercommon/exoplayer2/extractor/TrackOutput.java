package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public interface TrackOutput {

    public static final class CryptoData {
        public final int clearBlocks;
        public final int cryptoMode;
        public final int encryptedBlocks;
        public final byte[] encryptionKey;

        public CryptoData(int r1, byte[] r2, int r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.cryptoMode = r1
                r0.encryptionKey = r2
                r0.encryptedBlocks = r3
                r0.clearBlocks = r4
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L33
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L33
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r5 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData) r5
                int r2 = r4.cryptoMode
                int r3 = r5.cryptoMode
                if (r2 != r3) goto L31
                int r2 = r4.encryptedBlocks
                int r3 = r5.encryptedBlocks
                if (r2 != r3) goto L31
                int r2 = r4.clearBlocks
                int r3 = r5.clearBlocks
                if (r2 != r3) goto L31
                byte[] r2 = r4.encryptionKey
                byte[] r5 = r5.encryptionKey
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 == 0) goto L31
                goto L32
            L31:
                r0 = r1
            L32:
                return r0
            L33:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.cryptoMode
                int r0 = r0 * 31
                byte[] r1 = r2.encryptionKey
                int r1 = java.util.Arrays.hashCode(r1)
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.encryptedBlocks
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.clearBlocks
                int r0 = r0 + r1
                return r0
        }
    }

    void format(com.mbridge.msdk.playercommon.exoplayer2.Format r1);

    int sampleData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1, int r2, boolean r3) throws java.io.IOException, java.lang.InterruptedException;

    void sampleData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, int r2);

    void sampleMetadata(long r1, int r3, int r4, int r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData r6);
}
