package com.tkay.expressad.exoplayer.j;

public final class f implements com.tkay.expressad.exoplayer.j.h {
    public static final java.lang.String a = "data";
    private com.tkay.expressad.exoplayer.j.k b;
    private int c;
    private byte[] d;

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final int a(byte[] r3, int r4, int r5) {
            r2 = this;
            if (r5 != 0) goto L4
            r3 = 0
            return r3
        L4:
            byte[] r0 = r2.d
            int r0 = r0.length
            int r1 = r2.c
            int r0 = r0 - r1
            if (r0 != 0) goto Le
            r3 = -1
            return r3
        Le:
            int r5 = java.lang.Math.min(r5, r0)
            byte[] r0 = r2.d
            int r1 = r2.c
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.c
            int r3 = r3 + r5
            r2.c = r3
            return r5
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r4) {
            r3 = this;
            r3.b = r4
            android.net.Uri r4 = r4.c
            java.lang.String r0 = r4.getScheme()
            java.lang.String r1 = "data"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L65
            java.lang.String r0 = r4.getSchemeSpecificPart()
            java.lang.String r1 = ","
            java.lang.String[] r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r1)
            int r1 = r0.length
            r2 = 2
            if (r1 != r2) goto L55
            r4 = 1
            r4 = r0[r4]
            r1 = 0
            r0 = r0[r1]
            java.lang.String r2 = ";base64"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L44
            byte[] r0 = android.util.Base64.decode(r4, r1)     // Catch: java.lang.IllegalArgumentException -> L33
            r3.d = r0     // Catch: java.lang.IllegalArgumentException -> L33
            goto L50
        L33:
            r0 = move-exception
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "Error while parsing Base64 encoded string: "
            java.lang.String r4 = r2.concat(r4)
            r1.<init>(r4, r0)
            throw r1
        L44:
            java.lang.String r0 = "US-ASCII"
            java.lang.String r4 = java.net.URLDecoder.decode(r4, r0)
            byte[] r4 = r4.getBytes()
            r3.d = r4
        L50:
            byte[] r4 = r3.d
            int r4 = r4.length
            long r0 = (long) r4
            return r0
        L55:
            com.tkay.expressad.exoplayer.t r0 = new com.tkay.expressad.exoplayer.t
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "Unexpected URI format: "
            java.lang.String r4 = r1.concat(r4)
            r0.<init>(r4)
            throw r0
        L65:
            com.tkay.expressad.exoplayer.t r4 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "Unsupported scheme: "
            java.lang.String r0 = r1.concat(r0)
            r4.<init>(r0)
            throw r4
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.k r0 = r1.b
            if (r0 == 0) goto L7
            android.net.Uri r0 = r0.c
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final void b() {
            r1 = this;
            r0 = 0
            r1.b = r0
            r1.d = r0
            return
    }
}
