package com.alipay.sdk.m.d;

public class a {
    public static final java.lang.String a = "OpenId";
    public static boolean b;

    static {
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.Object r3, java.lang.Object r4) {
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = ""
            if (r3 != 0) goto L8
            r3 = r1
        L8:
            r2 = 0
            r0[r2] = r3
            r3 = 1
            if (r4 != 0) goto Lf
            r4 = r1
        Lf:
            r0[r3] = r4
            java.lang.String r3 = "%s:%s"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            return r3
    }

    public static java.lang.String a(java.lang.String r5, java.lang.Object... r6) {
            if (r5 != 0) goto L7
            if (r6 != 0) goto L7
            java.lang.String r5 = ""
            return r5
        L7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            if (r5 != 0) goto L13
            java.lang.String r5 = "-"
        L13:
            r3 = 0
            r2[r3] = r5
            java.lang.String r5 = "[%s] "
            java.lang.String r5 = java.lang.String.format(r5, r2)
            r0.append(r5)
            if (r6 == 0) goto L47
            int r5 = r6.length
        L22:
            int r2 = r3 + 1
            int r4 = r6.length
            if (r2 >= r4) goto L3e
            r3 = r6[r3]
            r4 = r6[r2]
            java.lang.String r3 = a(r3, r4)
            r0.append(r3)
            int r3 = r5 + (-1)
            if (r2 >= r3) goto L3b
            java.lang.String r3 = ","
            r0.append(r3)
        L3b:
            int r3 = r2 + 1
            goto L22
        L3e:
            int r5 = r6.length
            int r5 = r5 - r1
            if (r3 != r5) goto L47
            r5 = r6[r3]
            r0.append(r5)
        L47:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static void a(boolean r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setDebug:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "OpenId"
            android.util.Log.d(r1, r0)
            com.alipay.sdk.m.d.a.b = r2
            return
    }

    public static void b(java.lang.String r1, java.lang.Object... r2) {
            boolean r0 = com.alipay.sdk.m.d.a.b
            if (r0 == 0) goto Ld
            java.lang.String r1 = a(r1, r2)
            java.lang.String r2 = "OpenId"
            android.util.Log.d(r2, r1)
        Ld:
            return
    }

    public static void c(java.lang.String r1, java.lang.Object... r2) {
            boolean r0 = com.alipay.sdk.m.d.a.b
            if (r0 == 0) goto Ld
            java.lang.String r1 = a(r1, r2)
            java.lang.String r2 = "OpenId"
            android.util.Log.e(r2, r1)
        Ld:
            return
    }

    public static void d(java.lang.String r1, java.lang.Object... r2) {
            boolean r0 = com.alipay.sdk.m.d.a.b
            if (r0 == 0) goto Ld
            java.lang.String r1 = a(r1, r2)
            java.lang.String r2 = "OpenId"
            android.util.Log.i(r2, r1)
        Ld:
            return
    }

    public static void e(java.lang.String r1, java.lang.Object... r2) {
            boolean r0 = com.alipay.sdk.m.d.a.b
            if (r0 == 0) goto Ld
            java.lang.String r1 = a(r1, r2)
            java.lang.String r2 = "OpenId"
            android.util.Log.w(r2, r1)
        Ld:
            return
    }
}
