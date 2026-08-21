package com.loc;

public final class bz {
    private android.content.Context a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;

    public bz(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) throws com.loc.k {
            r2 = this;
            r2.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L1e
            int r0 = r6.length()
            r1 = 256(0x100, float:3.59E-43)
            if (r0 > r1) goto L1e
            android.content.Context r3 = r3.getApplicationContext()
            r2.a = r3
            r2.c = r4
            r2.d = r5
            r2.b = r6
            return
        L1e:
            com.loc.k r3 = new com.loc.k
            java.lang.String r4 = "无效的参数 - IllegalArgumentException"
            r3.<init>(r4)
            throw r3
    }

    private static byte[] a(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r3 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r3 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r3 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }

    private byte[] b(java.lang.String r2) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r0 = 2
            if (r2 == 0) goto Ld
            byte[] r2 = new byte[r0]
            r2 = {x0022: FILL_ARRAY_DATA , data: [0, 0} // fill-array
            return r2
        Ld:
            java.lang.String r2 = r1.e
            byte[] r2 = com.loc.x.a(r2)
            if (r2 != 0) goto L1b
            byte[] r2 = new byte[r0]
            r2 = {x0028: FILL_ARRAY_DATA , data: [0, 0} // fill-array
            return r2
        L1b:
            int r2 = r2.length
            byte[] r2 = com.loc.x.a(r2)
            return r2
    }

    public final void a(java.lang.String r3) throws com.loc.k {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L11
            int r0 = r3.length()
            r1 = 65536(0x10000, float:9.1835E-41)
            if (r0 > r1) goto L11
            r2.e = r3
            return
        L11:
            com.loc.k r3 = new com.loc.k
            java.lang.String r0 = "无效的参数 - IllegalArgumentException"
            r3.<init>(r0)
            throw r3
    }

    public final byte[] a() {
            r8 = this;
            r0 = 0
            byte[] r1 = new byte[r0]
            r2 = 0
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L56
            r3.<init>()     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r8.c     // Catch: java.lang.Throwable -> L53
            com.loc.x.a(r3, r2)     // Catch: java.lang.Throwable -> L53
            java.lang.String r2 = r8.d     // Catch: java.lang.Throwable -> L53
            com.loc.x.a(r3, r2)     // Catch: java.lang.Throwable -> L53
            java.lang.String r2 = r8.b     // Catch: java.lang.Throwable -> L53
            com.loc.x.a(r3, r2)     // Catch: java.lang.Throwable -> L53
            android.content.Context r2 = r8.a     // Catch: java.lang.Throwable -> L53
            int r2 = com.loc.o.j(r2)     // Catch: java.lang.Throwable -> L53
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L53
            com.loc.x.a(r3, r2)     // Catch: java.lang.Throwable -> L53
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2d
            r6 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r6
            int r0 = (int) r4
        L2d:
            byte[] r0 = a(r0)     // Catch: java.lang.Throwable -> L53
            r3.write(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r8.e     // Catch: java.lang.Throwable -> L53
            byte[] r0 = r8.b(r0)     // Catch: java.lang.Throwable -> L53
            r3.write(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r8.e     // Catch: java.lang.Throwable -> L53
            byte[] r0 = com.loc.x.a(r0)     // Catch: java.lang.Throwable -> L53
            r3.write(r0)     // Catch: java.lang.Throwable -> L53
            byte[] r1 = r3.toByteArray()     // Catch: java.lang.Throwable -> L53
            r3.close()     // Catch: java.lang.Throwable -> L4e
            goto L63
        L4e:
            r0 = move-exception
            r0.printStackTrace()
            goto L63
        L53:
            r0 = move-exception
            r2 = r3
            goto L57
        L56:
            r0 = move-exception
        L57:
            java.lang.String r3 = "se"
            java.lang.String r4 = "tds"
            com.loc.av.b(r0, r3, r4)     // Catch: java.lang.Throwable -> L64
            if (r2 == 0) goto L63
            r2.close()     // Catch: java.lang.Throwable -> L4e
        L63:
            return r1
        L64:
            r0 = move-exception
            if (r2 == 0) goto L6f
            r2.close()     // Catch: java.lang.Throwable -> L6b
            goto L6f
        L6b:
            r1 = move-exception
            r1.printStackTrace()
        L6f:
            throw r0
    }
}
