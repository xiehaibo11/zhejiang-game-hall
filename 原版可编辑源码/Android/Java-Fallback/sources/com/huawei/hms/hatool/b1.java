package com.huawei.hms.hatool;

public class b1 extends com.huawei.hms.hatool.v {

    public static class a {
        public static final int[] a = null;

        static {
                com.huawei.hms.hatool.w0[] r0 = com.huawei.hms.hatool.w0.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.huawei.hms.hatool.b1.a.a = r0
                com.huawei.hms.hatool.w0 r1 = com.huawei.hms.hatool.w0.c     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.huawei.hms.hatool.b1.a.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.huawei.hms.hatool.w0 r1 = com.huawei.hms.hatool.w0.a     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.huawei.hms.hatool.b1.a.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.huawei.hms.hatool.w0 r1 = com.huawei.hms.hatool.w0.b     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public static com.huawei.hms.hatool.c1 a(java.lang.String r4, java.lang.String r5) {
            com.huawei.hms.hatool.c1 r0 = com.huawei.hms.hatool.v.a(r4, r5)
            com.huawei.hms.hatool.x0 r1 = com.huawei.hms.hatool.x0.a()
            com.huawei.hms.hatool.v0 r1 = r1.c(r4, r5)
            com.huawei.hms.hatool.x0 r2 = com.huawei.hms.hatool.x0.a()
            boolean r3 = com.huawei.hms.hatool.c.c(r4, r5)
            java.lang.String r2 = r2.a(r3)
            r0.g(r2)
            java.lang.String r2 = com.huawei.hms.hatool.c.o(r4, r5)
            r0.f(r2)
            com.huawei.hms.hatool.x0 r2 = com.huawei.hms.hatool.x0.a()
            java.lang.String r4 = r2.f(r4, r5)
            r0.c(r4)
            com.huawei.hms.hatool.w0 r4 = r1.a()
            int[] r5 = com.huawei.hms.hatool.b1.a.a
            int r4 = r4.ordinal()
            r4 = r5[r4]
            r5 = 1
            if (r4 == r5) goto L53
            r5 = 2
            if (r4 == r5) goto L4b
            r5 = 3
            if (r4 == r5) goto L43
            goto L5a
        L43:
            java.lang.String r4 = r1.b()
            r0.e(r4)
            goto L5a
        L4b:
            java.lang.String r4 = r1.b()
            r0.b(r4)
            goto L5a
        L53:
            java.lang.String r4 = r1.b()
            r0.d(r4)
        L5a:
            return r0
    }

    public static com.huawei.hms.hatool.d1 a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            com.huawei.hms.hatool.d1 r2 = com.huawei.hms.hatool.v.a(r2, r3, r4, r5)
            com.huawei.hms.hatool.x0 r5 = com.huawei.hms.hatool.x0.a()
            boolean r3 = com.huawei.hms.hatool.c.c(r3, r4)
            java.lang.String r3 = r5.a(r3)
            long r4 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.huawei.hms.hatool.b.c()
            r0.append(r1)
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.SHA.sha256Encrypt(r3)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r2.f(r4)
            r2.g(r3)
            return r2
    }

    public static com.huawei.hms.hatool.e1 a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.huawei.hms.hatool.e1 r4 = com.huawei.hms.hatool.v.a(r2, r3, r4)
            com.huawei.hms.hatool.x0 r0 = com.huawei.hms.hatool.x0.a()
            android.util.Pair r0 = r0.e(r3, r2)
            java.lang.Object r1 = r0.first
            java.lang.String r1 = (java.lang.String) r1
            r4.f(r1)
            java.lang.Object r0 = r0.second
            java.lang.String r0 = (java.lang.String) r0
            r4.g(r0)
            java.lang.String r0 = com.huawei.hms.hatool.f.b()
            r4.h(r0)
            com.huawei.hms.hatool.x0 r0 = com.huawei.hms.hatool.x0.a()
            java.lang.String r2 = r0.d(r3, r2)
            r4.d(r2)
            return r4
    }

    public static com.huawei.hms.hatool.r a(java.util.List<com.huawei.hms.hatool.q> r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "generate UploadData"
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.r r0 = com.huawei.hms.hatool.v.a()
            if (r0 != 0) goto Lf
            r2 = 0
            return r2
        Lf:
            com.huawei.hms.hatool.x r1 = com.huawei.hms.hatool.x.f()
            java.lang.String r1 = r1.a()
            com.huawei.hms.hatool.d1 r5 = a(r1, r3, r4, r5)
            r0.a(r5)
            com.huawei.hms.hatool.c1 r5 = a(r3, r4)
            r0.a(r5)
            com.huawei.hms.hatool.e1 r5 = a(r4, r3, r6)
            r0.a(r5)
            java.lang.String r3 = com.huawei.hms.hatool.c.g(r3, r4)
            r0.a(r3)
            r0.a(r2)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            java.util.Map r2 = com.huawei.hms.hatool.v.b(r0, r2)
            java.util.Map r0 = com.huawei.hms.hatool.c.i(r0, r1)
            if (r0 != 0) goto Lb
            return r2
        Lb:
            r2.putAll(r0)
            return r2
    }
}
