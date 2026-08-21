package com.huawei.hms.hatool;

public abstract class c {
    public static void a(java.lang.String r0, java.lang.String r1, long r2) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public static boolean a(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            boolean r0 = r0.a()
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public static int b(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            int r0 = r0.d()
            return r0
        Lb:
            r0 = 7
            return r0
    }

    public static boolean c(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            boolean r0 = r0.g()
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public static java.lang.String d(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.f()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static boolean e(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            boolean r0 = r0.i()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.lang.String f(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.h()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String g(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.n()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static com.huawei.hms.hatool.k h(java.lang.String r1, java.lang.String r2) {
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.m r1 = r0.a(r1)
            if (r1 == 0) goto L26
            java.lang.String r0 = "alltype"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L21
            java.lang.String r2 = "oper"
            com.huawei.hms.hatool.k r2 = r1.a(r2)
            if (r2 != 0) goto L20
            java.lang.String r2 = "maint"
            com.huawei.hms.hatool.k r2 = r1.a(r2)
        L20:
            return r2
        L21:
            com.huawei.hms.hatool.k r1 = r1.a(r2)
            return r1
        L26:
            r1 = 0
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> i(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.util.Map r0 = r0.k()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static long j(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            long r0 = r0.l()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static int k(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            int r0 = r0.b()
            return r0
        Lb:
            r0 = 10
            return r0
    }

    public static java.lang.String l(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.o()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String m(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.q()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String n(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.m()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String o(java.lang.String r0, java.lang.String r1) {
            com.huawei.hms.hatool.k r0 = h(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.p()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }
}
