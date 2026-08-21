package com.mbridge.msdk.foundation.same.net.d;

public class a extends com.mbridge.msdk.foundation.same.net.i<java.lang.Void> {
    private static final java.lang.String c = null;
    private java.io.File d;
    private java.io.File e;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.d.a> r0 = com.mbridge.msdk.foundation.same.net.d.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.d.a.c = r0
            return
    }

    public a(java.io.File r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r3)
            r1.d = r2
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".tmp"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            r1.e = r3
            return
    }

    @Override
    protected final com.mbridge.msdk.foundation.same.net.k<java.lang.Void> a(com.mbridge.msdk.foundation.same.net.e.c r7) {
            r6 = this;
            boolean r0 = r6.c()
            if (r0 != 0) goto L4d
            java.io.File r0 = r6.e
            boolean r0 = r0.canRead()
            r1 = 4
            if (r0 == 0) goto L3c
            java.io.File r0 = r6.e
            long r2 = r0.length()
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L3c
            java.io.File r0 = r6.e
            java.io.File r2 = r6.d
            boolean r0 = r0.renameTo(r2)
            if (r0 == 0) goto L2b
            r0 = 0
            com.mbridge.msdk.foundation.same.net.k r7 = com.mbridge.msdk.foundation.same.net.k.a(r0, r7)
            return r7
        L2b:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.d.a.c
            java.lang.String r2 = "Can't rename the download temporary file!"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r0.<init>(r1, r7)
            com.mbridge.msdk.foundation.same.net.k r7 = com.mbridge.msdk.foundation.same.net.k.a(r0)
            return r7
        L3c:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.d.a.c
            java.lang.String r2 = "Download temporary file was invalid!"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r0.<init>(r1, r7)
            com.mbridge.msdk.foundation.same.net.k r7 = com.mbridge.msdk.foundation.same.net.k.a(r0)
            return r7
        L4d:
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = -2
            r0.<init>(r1, r7)
            com.mbridge.msdk.foundation.same.net.k r7 = com.mbridge.msdk.foundation.same.net.k.a(r0)
            return r7
    }

    @Override
    public final byte[] a(com.mbridge.msdk.foundation.same.net.e.b r17, com.mbridge.msdk.foundation.same.net.c r18) throws java.io.IOException {
            r16 = this;
            r7 = r16
            java.lang.String r8 = "Error occured when calling InputStream.close"
            java.util.List r0 = r17.b()
            java.lang.String r1 = "Content-Length"
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.f.b.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L20
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            long r0 = r0.longValue()
            r9 = r0
            goto L21
        L20:
            r9 = r2
        L21:
            int r0 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r0 > 0) goto L2c
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.d.a.c
            java.lang.String r4 = "Response doesn't present Content-Length!"
            com.mbridge.msdk.foundation.tools.z.b(r1, r4)
        L2c:
            r11 = 0
            if (r0 <= 0) goto L4a
            java.io.File r0 = r7.d
            long r0 = r0.length()
            int r0 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r0 != 0) goto L4a
            java.io.File r0 = r7.d
            java.io.File r1 = r7.e
            r0.renameTo(r1)
            r1 = r18
            r2 = r16
            r3 = r9
            r5 = r9
            r1.a(r2, r3, r5)
            return r11
        L4a:
            java.io.RandomAccessFile r12 = new java.io.RandomAccessFile
            java.io.File r0 = r7.e
            java.lang.String r0 = r0.getAbsolutePath()
            java.lang.String r1 = "rw"
            r12.<init>(r0, r1)
            r12.setLength(r2)
            java.io.InputStream r1 = r17.c()     // Catch: java.lang.Throwable -> Lb4
            java.util.List r0 = r17.b()     // Catch: java.lang.Throwable -> Lb1
            boolean r0 = com.mbridge.msdk.foundation.same.net.f.b.b(r0)     // Catch: java.lang.Throwable -> Lb1
            if (r0 == 0) goto L73
            boolean r0 = r1 instanceof java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> Lb1
            if (r0 != 0) goto L73
            java.util.zip.GZIPInputStream r0 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> Lb1
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb1
            r13 = r0
            goto L74
        L73:
            r13 = r1
        L74:
            r0 = 6144(0x1800, float:8.61E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> Lae
        L78:
            int r1 = r13.read(r0)     // Catch: java.lang.Throwable -> Lae
            r4 = -1
            if (r1 == r4) goto L9f
            r4 = 0
            r12.write(r0, r4, r1)     // Catch: java.lang.Throwable -> Lae
            long r4 = (long) r1     // Catch: java.lang.Throwable -> Lae
            long r14 = r2 + r4
            r1 = r18
            r2 = r16
            r3 = r9
            r5 = r14
            r1.a(r2, r3, r5)     // Catch: java.lang.Throwable -> Lae
            boolean r1 = r16.c()     // Catch: java.lang.Throwable -> Lae
            if (r1 == 0) goto L9b
            r1 = r18
            r1.b(r7)     // Catch: java.lang.Throwable -> Lae
            goto L9f
        L9b:
            r1 = r18
            r2 = r14
            goto L78
        L9f:
            if (r13 == 0) goto Laa
            r13.close()     // Catch: java.lang.Exception -> La5
            goto Laa
        La5:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.d.a.c
            com.mbridge.msdk.foundation.tools.z.d(r0, r8)
        Laa:
            r12.close()
            return r11
        Lae:
            r0 = move-exception
            r11 = r13
            goto Lb5
        Lb1:
            r0 = move-exception
            r11 = r1
            goto Lb5
        Lb4:
            r0 = move-exception
        Lb5:
            if (r11 == 0) goto Lc0
            r11.close()     // Catch: java.lang.Exception -> Lbb
            goto Lc0
        Lbb:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.d.a.c
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)
        Lc0:
            r12.close()
            throw r0
    }

    @Override
    public final int g() {
            r1 = this;
            r0 = 1
            return r0
    }
}
