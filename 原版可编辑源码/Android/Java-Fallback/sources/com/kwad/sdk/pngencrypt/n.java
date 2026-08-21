package com.kwad.sdk.pngencrypt;

public final class n {
    public static java.nio.charset.Charset aEV;
    public static java.nio.charset.Charset aEW;
    private static java.lang.ThreadLocal<java.lang.Boolean> aEX;


    static {
            java.lang.String r0 = "ISO-8859-1"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.pngencrypt.n.aEV = r0
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.pngencrypt.n.aEW = r0
            com.kwad.sdk.pngencrypt.n$1 r0 = new com.kwad.sdk.pngencrypt.n$1
            r0.<init>()
            com.kwad.sdk.pngencrypt.n.aEX = r0
            return
    }

    public static byte[] GQ() {
            r0 = 8
            byte[] r0 = new byte[r0]
            r0 = {x0008: FILL_ARRAY_DATA , data: [-119, 80, 78, 71, 13, 10, 26, 10} // fill-array
            return r0
    }

    static final int b(int r3, int r4, int r5) {
            int r0 = r3 + r4
            int r0 = r0 - r5
            if (r0 < r3) goto L8
            int r1 = r0 - r3
            goto La
        L8:
            int r1 = r3 - r0
        La:
            if (r0 < r4) goto Lf
            int r2 = r0 - r4
            goto L11
        Lf:
            int r2 = r4 - r0
        L11:
            if (r0 < r5) goto L15
            int r0 = r0 - r5
            goto L17
        L15:
            int r0 = r5 - r0
        L17:
            if (r1 > r2) goto L1c
            if (r1 > r0) goto L1c
            return r3
        L1c:
            if (r2 > r0) goto L1f
            return r4
        L1f:
            return r5
    }

    public static int e(java.io.InputStream r0) {
            int r0 = r0.read()     // Catch: java.io.IOException -> L5
            return r0
        L5:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            r0 = -1
            return r0
    }

    public static int e(byte[] r0, int r1) {
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public static int f(java.io.InputStream r4) {
            r0 = -1
            int r1 = r4.read()     // Catch: java.io.IOException -> L26
            int r2 = r4.read()     // Catch: java.io.IOException -> L26
            int r3 = r4.read()     // Catch: java.io.IOException -> L26
            int r4 = r4.read()     // Catch: java.io.IOException -> L26
            if (r1 == r0) goto L25
            if (r2 == r0) goto L25
            if (r3 == r0) goto L25
            if (r4 != r0) goto L1a
            goto L25
        L1a:
            int r0 = r1 << 24
            int r1 = r2 << 16
            r0 = r0 | r1
            int r1 = r3 << 8
            int r1 = r1 + r4
            r4 = r0 | r1
            return r4
        L25:
            return r0
        L26:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
            return r0
    }

    public static int f(byte[] r1, int r2) {
            r0 = r1[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r2 = r2 + 1
            r1 = r1[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 | r0
            return r1
    }

    public static final int g(byte[] r2, int r3) {
            r0 = r2[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            int r1 = r3 + 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r3 + 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r3 = r3 + 3
            r2 = r2[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r2 | r0
            return r2
    }
}
