package com.sigmob.sdk.videocache;

class g extends com.sigmob.sdk.videocache.o {
    private static final float a = 0.2f;
    private final com.sigmob.sdk.videocache.j b;
    private final com.sigmob.sdk.videocache.file.b c;
    private com.sigmob.sdk.videocache.d d;

    public g(com.sigmob.sdk.videocache.j r1, com.sigmob.sdk.videocache.file.b r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.c = r2
            r0.b = r1
            return
    }

    private java.lang.String a(java.lang.String r2, java.lang.Object... r3) {
            r1 = this;
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r2 = java.lang.String.format(r0, r2, r3)
            return r2
    }

    private void a(java.io.OutputStream r5, long r6) throws com.sigmob.sdk.videocache.p, java.io.IOException {
            r4 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            byte[] r1 = new byte[r0]
        L4:
            int r2 = r4.a(r1, r6, r0)
            r3 = -1
            if (r2 == r3) goto L12
            r3 = 0
            r5.write(r1, r3, r2)
            long r2 = (long) r2
            long r6 = r6 + r2
            goto L4
        L12:
            r5.flush()
            return
    }

    private boolean a(com.sigmob.sdk.videocache.f r10) throws com.sigmob.sdk.videocache.p {
            r9 = this;
            com.sigmob.sdk.videocache.j r0 = r9.b
            long r0 = r0.a()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 <= 0) goto L10
            r2 = r3
            goto L11
        L10:
            r2 = r4
        L11:
            com.sigmob.sdk.videocache.file.b r5 = r9.c
            long r5 = r5.a()
            if (r2 == 0) goto L2d
            boolean r2 = r10.c
            if (r2 == 0) goto L2d
            long r7 = r10.b
            float r10 = (float) r7
            float r2 = (float) r5
            float r0 = (float) r0
            r1 = 1045220557(0x3e4ccccd, float:0.2)
            float r0 = r0 * r1
            float r2 = r2 + r0
            int r10 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r10 > 0) goto L2c
            goto L2d
        L2c:
            r3 = r4
        L2d:
            return r3
    }

    private java.lang.String b(com.sigmob.sdk.videocache.f r13) throws java.io.IOException, com.sigmob.sdk.videocache.p {
            r12 = this;
            com.sigmob.sdk.videocache.j r0 = r12.b
            java.lang.String r0 = r0.c()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 1
            r1 = r1 ^ r2
            com.sigmob.sdk.videocache.file.b r3 = r12.c
            boolean r3 = r3.d()
            if (r3 == 0) goto L1b
            com.sigmob.sdk.videocache.file.b r3 = r12.c
            long r3 = r3.a()
            goto L21
        L1b:
            com.sigmob.sdk.videocache.j r3 = r12.b
            long r3 = r3.a()
        L21:
            r5 = 0
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r6 = 0
            if (r5 < 0) goto L2a
            r5 = r2
            goto L2b
        L2a:
            r5 = r6
        L2b:
            boolean r7 = r13.c
            if (r7 == 0) goto L34
            long r7 = r13.b
            long r7 = r3 - r7
            goto L35
        L34:
            r7 = r3
        L35:
            if (r5 == 0) goto L3d
            boolean r9 = r13.c
            if (r9 == 0) goto L3d
            r9 = r2
            goto L3e
        L3d:
            r9 = r6
        L3e:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            boolean r11 = r13.c
            if (r11 == 0) goto L4a
            java.lang.String r11 = "HTTP/1.1 206 PARTIAL CONTENT\n"
            goto L4c
        L4a:
            java.lang.String r11 = "HTTP/1.1 200 OK\n"
        L4c:
            r10.append(r11)
            java.lang.String r11 = "Accept-Ranges: bytes\n"
            r10.append(r11)
            java.lang.String r11 = ""
            if (r5 == 0) goto L67
            java.lang.Object[] r5 = new java.lang.Object[r2]
            java.lang.Long r7 = java.lang.Long.valueOf(r7)
            r5[r6] = r7
            java.lang.String r7 = "Content-Length: %d\n"
            java.lang.String r5 = r12.a(r7, r5)
            goto L68
        L67:
            r5 = r11
        L68:
            r10.append(r5)
            if (r9 == 0) goto L90
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]
            long r7 = r13.b
            java.lang.Long r13 = java.lang.Long.valueOf(r7)
            r5[r6] = r13
            r7 = 1
            long r7 = r3 - r7
            java.lang.Long r13 = java.lang.Long.valueOf(r7)
            r5[r2] = r13
            r13 = 2
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r5[r13] = r3
            java.lang.String r13 = "Content-Range: bytes %d-%d/%d\n"
            java.lang.String r13 = r12.a(r13, r5)
            goto L91
        L90:
            r13 = r11
        L91:
            r10.append(r13)
            if (r1 == 0) goto La0
            java.lang.Object[] r13 = new java.lang.Object[r2]
            r13[r6] = r0
            java.lang.String r0 = "Content-Type: %s\n"
            java.lang.String r11 = r12.a(r0, r13)
        La0:
            r10.append(r11)
            java.lang.String r13 = "\n"
            r10.append(r13)
            java.lang.String r13 = r10.toString()
            return r13
    }

    private void b(java.io.OutputStream r3, long r4) throws com.sigmob.sdk.videocache.p, java.io.IOException {
            r2 = this;
            com.sigmob.sdk.videocache.j r0 = new com.sigmob.sdk.videocache.j
            com.sigmob.sdk.videocache.j r1 = r2.b
            r0.<init>(r1)
            int r4 = (int) r4
            long r4 = (long) r4
            r0.a(r4)     // Catch: java.lang.Throwable -> L23
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L23
        L10:
            int r5 = r0.a(r4)     // Catch: java.lang.Throwable -> L23
            r1 = -1
            if (r5 == r1) goto L1c
            r1 = 0
            r3.write(r4, r1, r5)     // Catch: java.lang.Throwable -> L23
            goto L10
        L1c:
            r3.flush()     // Catch: java.lang.Throwable -> L23
            r0.b()
            return
        L23:
            r3 = move-exception
            r0.b()
            throw r3
    }

    @Override
    protected void a(int r4) {
            r3 = this;
            com.sigmob.sdk.videocache.d r0 = r3.d
            if (r0 == 0) goto L11
            com.sigmob.sdk.videocache.file.b r1 = r3.c
            java.io.File r1 = r1.a
            com.sigmob.sdk.videocache.j r2 = r3.b
            java.lang.String r2 = r2.d()
            r0.a(r1, r2, r4)
        L11:
            return
    }

    public void a(com.sigmob.sdk.videocache.d r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(com.sigmob.sdk.videocache.f r4, java.net.Socket r5) throws java.io.IOException, com.sigmob.sdk.videocache.p {
            r3 = this;
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream
            java.io.OutputStream r5 = r5.getOutputStream()
            r0.<init>(r5)
            java.lang.String r5 = r3.b(r4)
            java.lang.String r1 = "UTF-8"
            byte[] r5 = r5.getBytes(r1)
            r0.write(r5)
            long r1 = r4.b
            boolean r4 = r3.a(r4)
            if (r4 == 0) goto L22
            r3.a(r0, r1)
            goto L25
        L22:
            r3.b(r0, r1)
        L25:
            return
    }
}
