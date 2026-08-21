package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DataSchemeDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    public static final java.lang.String SCHEME_DATA = "data";
    private int bytesRead;
    private byte[] data;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;

    public DataSchemeDataSource() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.dataSpec = r0
            r1.data = r0
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r1.dataSpec
            if (r0 == 0) goto L7
            android.net.Uri r0 = r0.uri
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) throws java.io.IOException {
            r4 = this;
            r4.dataSpec = r5
            android.net.Uri r5 = r5.uri
            java.lang.String r0 = r5.getScheme()
            java.lang.String r1 = "data"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L73
            java.lang.String r0 = r5.getSchemeSpecificPart()
            java.lang.String r1 = ","
            java.lang.String[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r0, r1)
            int r1 = r0.length
            r2 = 2
            if (r1 != r2) goto L5c
            r5 = 1
            r5 = r0[r5]
            r1 = 0
            r0 = r0[r1]
            java.lang.String r2 = ";base64"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L4b
            byte[] r0 = android.util.Base64.decode(r5, r1)     // Catch: java.lang.IllegalArgumentException -> L33
            r4.data = r0     // Catch: java.lang.IllegalArgumentException -> L33
            goto L57
        L33:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Error while parsing Base64 encoded string: "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5, r0)
            throw r1
        L4b:
            java.lang.String r0 = "US-ASCII"
            java.lang.String r5 = java.net.URLDecoder.decode(r5, r0)
            byte[] r5 = r5.getBytes()
            r4.data = r5
        L57:
            byte[] r5 = r4.data
            int r5 = r5.length
            long r0 = (long) r5
            return r0
        L5c:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected URI format: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L73:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r5 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unsupported scheme: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
    }

    @Override
    public final int read(byte[] r3, int r4, int r5) {
            r2 = this;
            if (r5 != 0) goto L4
            r3 = 0
            return r3
        L4:
            byte[] r0 = r2.data
            int r0 = r0.length
            int r1 = r2.bytesRead
            int r0 = r0 - r1
            if (r0 != 0) goto Le
            r3 = -1
            return r3
        Le:
            int r5 = java.lang.Math.min(r5, r0)
            byte[] r0 = r2.data
            int r1 = r2.bytesRead
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.bytesRead
            int r3 = r3 + r5
            r2.bytesRead = r3
            return r5
    }
}
