package com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto;

public final class AesCipherDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher cipher;
    private final byte[] secretKey;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource upstream;

    public AesCipherDataSource(byte[] r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2) {
            r0 = this;
            r0.<init>()
            r0.upstream = r2
            r0.secretKey = r1
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.cipher = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.upstream
            r0.close()
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.upstream
            android.net.Uri r0 = r0.getUri()
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r11) throws java.io.IOException {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r10.upstream
            long r0 = r0.open(r11)
            java.lang.String r2 = r11.key
            long r6 = com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.CryptoUtil.getFNV64Hash(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher
            byte[] r5 = r10.secretKey
            long r8 = r11.absoluteStreamPosition
            r4 = 2
            r3 = r2
            r3.<init>(r4, r5, r6, r8)
            r10.cipher = r2
            return r0
    }

    @Override
    public final int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            if (r4 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.upstream
            int r4 = r0.read(r2, r3, r4)
            r0 = -1
            if (r4 != r0) goto Le
            return r0
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto.AesFlushingCipher r0 = r1.cipher
            r0.updateInPlace(r2, r3, r4)
            return r4
    }
}
