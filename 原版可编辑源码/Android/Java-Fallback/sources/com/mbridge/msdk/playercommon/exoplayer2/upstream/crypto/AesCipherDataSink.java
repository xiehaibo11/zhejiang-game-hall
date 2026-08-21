package com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto;

public final class AesCipherDataSink implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink {
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher cipher;
    private final byte[] scratch;
    private final byte[] secretKey;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink wrappedDataSink;

    public AesCipherDataSink(byte[] r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public AesCipherDataSink(byte[] r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r2, byte[] r3) {
            r0 = this;
            r0.<init>()
            r0.wrappedDataSink = r2
            r0.secretKey = r1
            r0.scratch = r3
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.cipher = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r1.wrappedDataSink
            r0.close()
            return
    }

    @Override
    public final void open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r9) throws java.io.IOException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r8.wrappedDataSink
            r0.open(r9)
            java.lang.String r0 = r9.key
            long r4 = com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.CryptoUtil.getFNV64Hash(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher
            byte[] r3 = r8.secretKey
            long r6 = r9.absoluteStreamPosition
            r2 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r6)
            r8.cipher = r0
            return
    }

    @Override
    public final void write(byte[] r11, int r12, int r13) throws java.io.IOException {
            r10 = this;
            byte[] r0 = r10.scratch
            if (r0 != 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher r0 = r10.cipher
            r0.updateInPlace(r11, r12, r13)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r10.wrappedDataSink
            r0.write(r11, r12, r13)
            goto L31
        Lf:
            r0 = 0
            r1 = r0
        L11:
            if (r1 >= r13) goto L31
            int r2 = r13 - r1
            byte[] r3 = r10.scratch
            int r3 = r3.length
            int r2 = java.lang.Math.min(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher r4 = r10.cipher
            int r6 = r12 + r1
            byte[] r8 = r10.scratch
            r9 = 0
            r5 = r11
            r7 = r2
            r4.update(r5, r6, r7, r8, r9)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r3 = r10.wrappedDataSink
            byte[] r4 = r10.scratch
            r3.write(r4, r0, r2)
            int r1 = r1 + r2
            goto L11
        L31:
            return
    }
}
