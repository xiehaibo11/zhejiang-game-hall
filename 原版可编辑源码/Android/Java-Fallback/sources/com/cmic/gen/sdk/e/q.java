package com.cmic.gen.sdk.e;

public class q {
    private static final char[] a = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.cmic.gen.sdk.e.q.a = r0
            return
    }

    static java.lang.String a(byte[] r8) {
            if (r8 != 0) goto L5
            java.lang.String r8 = ""
            return r8
        L5:
            int r0 = r8.length
            int r0 = r0 * 2
            char[] r0 = new char[r0]
            int r1 = r8.length
            r2 = 0
            r3 = 0
        Ld:
            if (r2 >= r1) goto L28
            r4 = r8[r2]
            int r5 = r3 + 1
            char[] r6 = com.cmic.gen.sdk.e.q.a
            int r7 = r4 >>> 4
            r7 = r7 & 15
            char r7 = r6[r7]
            r0[r3] = r7
            int r3 = r5 + 1
            r4 = r4 & 15
            char r4 = r6[r4]
            r0[r5] = r4
            int r2 = r2 + 1
            goto Ld
        L28:
            java.lang.String r8 = new java.lang.String
            r8.<init>(r0)
            return r8
    }

    public static void a(com.cmic.gen.sdk.a r3, java.lang.String r4) {
            java.lang.String r0 = "interfaceType"
            java.lang.String r1 = ""
            java.lang.String r1 = r3.b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L12
            r3.a(r0, r4)
            goto L2d
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.b(r0)
            r1.append(r2)
            java.lang.String r2 = ";"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r3.a(r0, r4)
        L2d:
            return
    }

    public static boolean a(com.cmic.gen.sdk.a.a r4) {
            java.lang.String r0 = "logCloseTime"
            r1 = 0
            long r0 = com.cmic.gen.sdk.e.k.a(r0, r1)
            int r4 = r4.l()
            int r4 = r4 * 60
            int r4 = r4 * 60
            int r4 = r4 * 1000
            long r2 = (long) r4
            long r0 = r0 + r2
            long r2 = java.lang.System.currentTimeMillis()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L1e
            r4 = 1
            goto L1f
        L1e:
            r4 = 0
        L1f:
            return r4
    }

    public static byte[] a() {
            r0 = 16
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r1.nextBytes(r0)
            return r0
    }

    public static java.lang.String b() {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "-"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replaceAll(r1, r2)
            return r0
    }

    public static void b(com.cmic.gen.sdk.a r3, java.lang.String r4) {
            java.lang.String r0 = "interfaceCode"
            java.lang.String r1 = ""
            java.lang.String r1 = r3.b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L12
            r3.a(r0, r4)
            goto L2d
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.b(r0)
            r1.append(r2)
            java.lang.String r2 = ";"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r3.a(r0, r4)
        L2d:
            return
    }

    public static java.lang.String c() {
            java.lang.String r0 = d()
            java.lang.String r1 = "-"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replace(r1, r2)
            return r0
    }

    public static void c(com.cmic.gen.sdk.a r3, java.lang.String r4) {
            java.lang.String r0 = "interfaceElasped"
            java.lang.String r1 = ""
            java.lang.String r1 = r3.b(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L12
            r3.a(r0, r4)
            goto L2d
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.b(r0)
            r1.append(r2)
            java.lang.String r2 = ";"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r3.a(r0, r4)
        L2d:
            return
    }

    private static java.lang.String d() {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            return r0
    }
}
