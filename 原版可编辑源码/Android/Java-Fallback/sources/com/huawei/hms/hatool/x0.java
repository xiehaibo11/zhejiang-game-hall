package com.huawei.hms.hatool;

public class x0 {
    public static com.huawei.hms.hatool.x0 b;
    public android.content.Context a;

    public static class a extends com.huawei.hms.hatool.y0 {
        public java.lang.String a;
        public java.lang.String b;

        public a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public java.lang.String a() {
                r2 = this;
                java.lang.String r0 = r2.a
                java.lang.String r1 = r2.b
                java.lang.String r0 = com.huawei.hms.hatool.a.d(r0, r1)
                return r0
        }

        @Override
        public java.lang.String a(java.lang.String r1) {
                r0 = this;
                java.lang.String r1 = com.huawei.secure.android.common.encrypt.hash.SHA.sha256Encrypt(r1)
                return r1
        }

        @Override
        public java.lang.String b() {
                r2 = this;
                java.lang.String r0 = r2.a
                java.lang.String r1 = r2.b
                java.lang.String r0 = com.huawei.hms.hatool.a.g(r0, r1)
                return r0
        }

        @Override
        public java.lang.String c() {
                r2 = this;
                java.lang.String r0 = r2.a
                java.lang.String r1 = r2.b
                java.lang.String r0 = com.huawei.hms.hatool.a.j(r0, r1)
                return r0
        }

        @Override
        public int d() {
                r4 = this;
                java.lang.String r0 = r4.a
                java.lang.String r1 = r4.b
                boolean r0 = com.huawei.hms.hatool.a.k(r0, r1)
                r1 = 0
                if (r0 == 0) goto Ld
                r0 = 4
                goto Le
            Ld:
                r0 = r1
            Le:
                r0 = r0 | r1
                java.lang.String r2 = r4.a
                java.lang.String r3 = r4.b
                boolean r2 = com.huawei.hms.hatool.a.e(r2, r3)
                if (r2 == 0) goto L1a
                r1 = 2
            L1a:
                r0 = r0 | r1
                java.lang.String r1 = r4.a
                java.lang.String r2 = r4.b
                boolean r1 = com.huawei.hms.hatool.a.h(r1, r2)
                r0 = r0 | r1
                return r0
        }
    }

    public x0() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.hatool.x0 a() {
            java.lang.Class<com.huawei.hms.hatool.x0> r0 = com.huawei.hms.hatool.x0.class
            monitor-enter(r0)
            com.huawei.hms.hatool.x0 r1 = com.huawei.hms.hatool.x0.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.x0 r1 = new com.huawei.hms.hatool.x0     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.hms.hatool.x0.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.hms.hatool.x0 r1 = com.huawei.hms.hatool.x0.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.Context r0 = r1.a
            java.lang.String r2 = com.huawei.hms.hatool.g.a(r0, r2, r3)
            return r2
    }

    public java.lang.String a(boolean r5) {
            r4 = this;
            java.lang.String r0 = ""
            if (r5 != 0) goto L5
            return r0
        L5:
            java.lang.String r5 = com.huawei.hms.hatool.b.j()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L35
            android.content.Context r5 = r4.a
            java.lang.String r1 = "uuid"
            java.lang.String r2 = "global_v2"
            java.lang.String r5 = com.huawei.hms.hatool.g0.a(r5, r2, r1, r0)
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 == 0) goto L32
            java.util.UUID r5 = java.util.UUID.randomUUID()
            java.lang.String r5 = r5.toString()
            java.lang.String r3 = "-"
            java.lang.String r5 = r5.replace(r3, r0)
            android.content.Context r0 = r4.a
            com.huawei.hms.hatool.g0.b(r0, r2, r1, r5)
        L32:
            com.huawei.hms.hatool.b.c(r5)
        L35:
            return r5
    }

    public void a(android.content.Context r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            if (r0 != 0) goto L6
            r1.a = r2
        L6:
            return
    }

    public java.lang.String b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.Context r0 = r1.a
            java.lang.String r2 = com.huawei.hms.hatool.g.b(r0, r2, r3)
            return r2
    }

    public com.huawei.hms.hatool.v0 c(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.huawei.hms.hatool.x0$a r0 = new com.huawei.hms.hatool.x0$a
            r0.<init>(r2, r3)
            android.content.Context r2 = r1.a
            com.huawei.hms.hatool.v0 r2 = r0.a(r2)
            return r2
    }

    public java.lang.String d(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = com.huawei.hms.hatool.a1.b(r1, r2)
            return r1
    }

    public android.util.Pair<java.lang.String, java.lang.String> e(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r2 = com.huawei.hms.hatool.a.f(r2, r3)
            if (r2 == 0) goto L56
            com.huawei.hms.hatool.i r2 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r2 = r2.b()
            java.lang.String r2 = r2.n()
            com.huawei.hms.hatool.i r3 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r3 = r3.b()
            java.lang.String r3 = r3.o()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L31
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2b
            goto L31
        L2b:
            android.util.Pair r0 = new android.util.Pair
            r0.<init>(r2, r3)
            return r0
        L31:
            android.content.Context r2 = r1.a
            android.util.Pair r2 = com.huawei.hms.hatool.z0.e(r2)
            com.huawei.hms.hatool.i r3 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r3 = r3.b()
            java.lang.Object r0 = r2.first
            java.lang.String r0 = (java.lang.String) r0
            r3.i(r0)
            com.huawei.hms.hatool.i r3 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r3 = r3.b()
            java.lang.Object r0 = r2.second
            java.lang.String r0 = (java.lang.String) r0
            r3.j(r0)
            return r2
        L56:
            android.util.Pair r2 = new android.util.Pair
            java.lang.String r3 = ""
            r2.<init>(r3, r3)
            return r2
    }

    public java.lang.String f(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = com.huawei.hms.hatool.a1.a(r1, r2)
            return r1
    }
}
