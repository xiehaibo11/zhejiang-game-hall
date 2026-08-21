package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class ByteArrayDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private int bytesRemaining;
    private final byte[] data;
    private int readPosition;
    private android.net.Uri uri;

    public ByteArrayDataSource(byte[] r2) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            int r0 = r2.length
            if (r0 <= 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r1.data = r2
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.uri = r0
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            android.net.Uri r0 = r1.uri
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) throws java.io.IOException {
            r4 = this;
            android.net.Uri r0 = r5.uri
            r4.uri = r0
            long r0 = r5.position
            int r0 = (int) r0
            r4.readPosition = r0
            long r0 = r5.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L19
            byte[] r0 = r4.data
            int r0 = r0.length
            long r0 = (long) r0
            long r2 = r5.position
            long r0 = r0 - r2
            goto L1b
        L19:
            long r0 = r5.length
        L1b:
            int r0 = (int) r0
            r4.bytesRemaining = r0
            if (r0 <= 0) goto L2a
            int r1 = r4.readPosition
            int r1 = r1 + r0
            byte[] r2 = r4.data
            int r2 = r2.length
            if (r1 > r2) goto L2a
            long r0 = (long) r0
            return r0
        L2a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unsatisfiable range: ["
            r1.append(r2)
            int r2 = r4.readPosition
            r1.append(r2)
            java.lang.String r2 = ", "
            r1.append(r2)
            long r2 = r5.length
            r1.append(r2)
            java.lang.String r5 = "], length: "
            r1.append(r5)
            byte[] r5 = r4.data
            int r5 = r5.length
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    public final int read(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            if (r5 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r2.bytesRemaining
            if (r0 != 0) goto La
            r3 = -1
            return r3
        La:
            int r5 = java.lang.Math.min(r5, r0)
            byte[] r0 = r2.data
            int r1 = r2.readPosition
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.readPosition
            int r3 = r3 + r5
            r2.readPosition = r3
            int r3 = r2.bytesRemaining
            int r3 = r3 - r5
            r2.bytesRemaining = r3
            return r5
    }
}
