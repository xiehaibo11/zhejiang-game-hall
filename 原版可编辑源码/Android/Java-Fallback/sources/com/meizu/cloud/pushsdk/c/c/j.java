package com.meizu.cloud.pushsdk.c.c;

public abstract class j {



    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.meizu.cloud.pushsdk.c.c.j a(com.meizu.cloud.pushsdk.c.c.g r1, java.io.File r2) {
            if (r2 == 0) goto L8
            com.meizu.cloud.pushsdk.c.c.j$2 r0 = new com.meizu.cloud.pushsdk.c.c.j$2
            r0.<init>(r1, r2)
            return r0
        L8:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "content == null"
            r1.<init>(r2)
            throw r1
    }

    public static com.meizu.cloud.pushsdk.c.c.j a(com.meizu.cloud.pushsdk.c.c.g r2, java.lang.String r3) {
            java.nio.charset.Charset r0 = com.meizu.cloud.pushsdk.c.c.m.c
            if (r2 == 0) goto L21
            java.nio.charset.Charset r0 = r2.b()
            if (r0 != 0) goto L21
            java.nio.charset.Charset r0 = com.meizu.cloud.pushsdk.c.c.m.c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "; charset=utf-8"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            com.meizu.cloud.pushsdk.c.c.g r2 = com.meizu.cloud.pushsdk.c.c.g.a(r2)
        L21:
            byte[] r3 = r3.getBytes(r0)
            com.meizu.cloud.pushsdk.c.c.j r2 = a(r2, r3)
            return r2
    }

    public static com.meizu.cloud.pushsdk.c.c.j a(com.meizu.cloud.pushsdk.c.c.g r2, byte[] r3) {
            int r0 = r3.length
            r1 = 0
            com.meizu.cloud.pushsdk.c.c.j r2 = a(r2, r3, r1, r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.c.c.j a(com.meizu.cloud.pushsdk.c.c.g r7, byte[] r8, int r9, int r10) {
            if (r8 == 0) goto Lf
            int r0 = r8.length
            long r1 = (long) r0
            long r3 = (long) r9
            long r5 = (long) r10
            com.meizu.cloud.pushsdk.c.c.m.a(r1, r3, r5)
            com.meizu.cloud.pushsdk.c.c.j$1 r0 = new com.meizu.cloud.pushsdk.c.c.j$1
            r0.<init>(r7, r10, r8, r9)
            return r0
        Lf:
            java.lang.NullPointerException r7 = new java.lang.NullPointerException
            java.lang.String r8 = "content == null"
            r7.<init>(r8)
            throw r7
    }

    public abstract com.meizu.cloud.pushsdk.c.c.g a();

    public abstract void a(com.meizu.cloud.pushsdk.c.g.c r1);

    public long b() {
            r2 = this;
            r0 = -1
            return r0
    }
}
