package com.alipay.sdk.m.w;

public class b {

    public static class a implements com.alipay.sdk.m.w.a.a<java.lang.Object, java.lang.Boolean> {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof java.lang.String
                if (r0 != 0) goto L9
                if (r2 != 0) goto L7
                goto L9
            L7:
                r2 = 0
                goto La
            L9:
                r2 = 1
            La:
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                return r2
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r1) {
                r0 = this;
                java.lang.Boolean r1 = r0.a(r1)
                return r1
        }
    }

    public static class b implements java.util.concurrent.Callable<java.lang.String> {
        public final android.content.Context a;

        public b(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public java.lang.String call() throws java.lang.Exception {
                r1 = this;
                java.lang.String r0 = r1.call()
                return r0
        }

        @Override
        public java.lang.String call() {
                r1 = this;
                android.content.Context r0 = r1.a
                java.lang.String r0 = com.alipay.sdk.m.b.c.a(r0)
                return r0
        }
    }

    public static class c implements com.alipay.sdk.m.w.a.a<java.lang.Object, java.lang.Boolean> {
        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof android.net.NetworkInfo
                if (r0 != 0) goto L9
                if (r2 != 0) goto L7
                goto L9
            L7:
                r2 = 0
                goto La
            L9:
                r2 = 1
            La:
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                return r2
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r1) {
                r0 = this;
                java.lang.Boolean r1 = r0.a(r1)
                return r1
        }
    }

    public static class d implements java.util.concurrent.Callable<android.net.NetworkInfo> {
        public final android.content.Context a;

        public d(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public android.net.NetworkInfo call() {
                r2 = this;
                android.content.Context r0 = r2.a
                android.content.Context r0 = r0.getApplicationContext()
                java.lang.String r1 = "connectivity"
                java.lang.Object r0 = r0.getSystemService(r1)
                android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
                android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()
                return r0
        }

        @Override
        public android.net.NetworkInfo call() throws java.lang.Exception {
                r1 = this;
                android.net.NetworkInfo r0 = r1.call()
                return r0
        }
    }

    public static class e implements com.alipay.sdk.m.w.a.a<java.lang.Object, java.lang.Boolean> {
        public e() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof java.lang.String
                if (r0 != 0) goto L9
                if (r2 != 0) goto L7
                goto L9
            L7:
                r2 = 0
                goto La
            L9:
                r2 = 1
            La:
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                return r2
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r1) {
                r0 = this;
                java.lang.Boolean r1 = r0.a(r1)
                return r1
        }
    }

    public static class f implements java.util.concurrent.Callable<java.lang.String> {
        public final android.content.Context a;
        public final com.alipay.sdk.m.s.a b;

        public f(android.content.Context r1, com.alipay.sdk.m.s.a r2) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.<init>()
                return
        }

        @Override
        public java.lang.String call() throws java.lang.Exception {
                r1 = this;
                java.lang.String r0 = r1.call()
                return r0
        }

        @Override
        public java.lang.String call() {
                r4 = this;
                android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L7
                java.lang.String r0 = com.alipay.sdk.m.n0.a.c(r0)     // Catch: java.lang.Throwable -> L7
                return r0
            L7:
                r0 = move-exception
                com.alipay.sdk.m.s.a r1 = r4.b
                java.lang.Class r0 = r0.getClass()
                java.lang.String r0 = r0.getName()
                java.lang.String r2 = "third"
                java.lang.String r3 = "GetUtdidEx"
                com.alipay.sdk.m.k.a.b(r1, r2, r3, r0)
                java.lang.String r0 = ""
                return r0
        }
    }

    public static class g implements com.alipay.sdk.m.w.a.a<java.lang.Object, java.lang.Boolean> {
        public g() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof java.lang.String
                if (r0 != 0) goto L9
                if (r2 != 0) goto L7
                goto L9
            L7:
                r2 = 0
                goto La
            L9:
                r2 = 1
            La:
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                return r2
        }

        @Override
        public java.lang.Boolean a(java.lang.Object r1) {
                r0 = this;
                java.lang.Boolean r1 = r0.a(r1)
                return r1
        }
    }

    public static class h implements java.util.concurrent.Callable<java.lang.String> {
        public final java.lang.String a;
        public final java.lang.String b;
        public final android.content.Context c;
        public final com.alipay.sdk.m.s.a d;

        public class a implements com.alipay.apmobilesecuritysdk.face.APSecuritySdk.InitResultListener {
            public final java.lang.String[] a;
            public final android.os.ConditionVariable b;
            public final com.alipay.sdk.m.w.b.h c;

            public a(com.alipay.sdk.m.w.b.h r1, java.lang.String[] r2, android.os.ConditionVariable r3) {
                    r0 = this;
                    r0.c = r1
                    r0.a = r2
                    r0.b = r3
                    r0.<init>()
                    return
            }

            @Override
            public void onResult(com.alipay.apmobilesecuritysdk.face.APSecuritySdk.TokenResult r3) {
                    r2 = this;
                    if (r3 == 0) goto L9
                    java.lang.String[] r0 = r2.a
                    java.lang.String r3 = r3.apdidToken
                    r1 = 0
                    r0[r1] = r3
                L9:
                    android.os.ConditionVariable r3 = r2.b
                    r3.open()
                    return
            }
        }

        public h(java.lang.String r1, java.lang.String r2, android.content.Context r3, com.alipay.sdk.m.s.a r4) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.<init>()
                return
        }

        @Override
        public java.lang.String call() throws java.lang.Exception {
                r1 = this;
                java.lang.String r0 = r1.call()
                return r0
        }

        @Override
        public java.lang.String call() {
                r8 = this;
                java.lang.String r0 = "third"
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                java.lang.String r2 = r8.a
                java.lang.String r3 = "tid"
                r1.put(r3, r2)
                java.lang.String r2 = r8.b
                java.lang.String r3 = "utdid"
                r1.put(r3, r2)
                java.lang.String r2 = ""
                java.lang.String[] r2 = new java.lang.String[]{r2}
                r3 = 0
                android.content.Context r4 = r8.c     // Catch: java.lang.Throwable -> L35
                com.alipay.apmobilesecuritysdk.face.APSecuritySdk r4 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.getInstance(r4)     // Catch: java.lang.Throwable -> L35
                android.os.ConditionVariable r5 = new android.os.ConditionVariable     // Catch: java.lang.Throwable -> L35
                r5.<init>()     // Catch: java.lang.Throwable -> L35
                com.alipay.sdk.m.w.b$h$a r6 = new com.alipay.sdk.m.w.b$h$a     // Catch: java.lang.Throwable -> L35
                r6.<init>(r8, r2, r5)     // Catch: java.lang.Throwable -> L35
                r4.initToken(r3, r1, r6)     // Catch: java.lang.Throwable -> L35
                r6 = 3000(0xbb8, double:1.482E-320)
                r5.block(r6)     // Catch: java.lang.Throwable -> L35
                goto L48
            L35:
                r1 = move-exception
                com.alipay.sdk.m.u.e.a(r1)
                com.alipay.sdk.m.s.a r4 = r8.d
                java.lang.Class r1 = r1.getClass()
                java.lang.String r1 = r1.getName()
                java.lang.String r5 = "GetApdidEx"
                com.alipay.sdk.m.k.a.b(r4, r0, r5, r1)
            L48:
                r1 = r2[r3]
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 == 0) goto L59
                com.alipay.sdk.m.s.a r1 = r8.d
                java.lang.String r4 = "GetApdidNull"
                java.lang.String r5 = "missing token"
                com.alipay.sdk.m.k.a.b(r1, r0, r4, r5)
            L59:
                r0 = r2[r3]
                return r0
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.net.NetworkInfo a(com.alipay.sdk.m.s.a r12, android.content.Context r13) {
            android.content.Context r13 = com.alipay.sdk.m.w.a.a(r13)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            com.alipay.sdk.m.w.b$c r4 = new com.alipay.sdk.m.w.b$c
            r4.<init>()
            com.alipay.sdk.m.w.b$d r5 = new com.alipay.sdk.m.w.b$d
            r5.<init>(r13)
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.SECONDS
            r0 = 2
            r1 = 10
            r6 = 0
            r7 = 10
            r11 = 0
            r10 = r12
            java.lang.Object r12 = com.alipay.sdk.m.w.a.a(r0, r1, r3, r4, r5, r6, r7, r9, r10, r11)
            android.net.NetworkInfo r12 = (android.net.NetworkInfo) r12
            return r12
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r12, android.content.Context r13, java.lang.String r14, java.lang.String r15) {
            android.content.Context r13 = com.alipay.sdk.m.w.a.a(r13)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            com.alipay.sdk.m.w.b$g r4 = new com.alipay.sdk.m.w.b$g
            r4.<init>()
            com.alipay.sdk.m.w.b$h r5 = new com.alipay.sdk.m.w.b$h
            r5.<init>(r14, r15, r13, r12)
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.SECONDS
            r0 = 4
            r1 = 10
            r6 = 1
            r7 = 3
            r11 = 1
            r10 = r12
            java.lang.Object r12 = com.alipay.sdk.m.w.a.a(r0, r1, r3, r4, r5, r6, r7, r9, r10, r11)
            java.lang.String r12 = (java.lang.String) r12
            return r12
    }

    public static java.lang.String b(com.alipay.sdk.m.s.a r12, android.content.Context r13) {
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
            boolean r0 = r0.x()
            if (r0 != 0) goto Ld
            java.lang.String r12 = ""
            return r12
        Ld:
            android.content.Context r13 = com.alipay.sdk.m.w.a.a(r13)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.DAYS
            com.alipay.sdk.m.w.b$a r4 = new com.alipay.sdk.m.w.b$a
            r4.<init>()
            com.alipay.sdk.m.w.b$b r5 = new com.alipay.sdk.m.w.b$b
            r5.<init>(r13)
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS
            r0 = 1
            r1 = 1
            r6 = 1
            r7 = 200(0xc8, double:9.9E-322)
            r11 = 1
            r10 = r12
            java.lang.Object r12 = com.alipay.sdk.m.w.a.a(r0, r1, r3, r4, r5, r6, r7, r9, r10, r11)
            java.lang.String r12 = (java.lang.String) r12
            return r12
    }

    public static java.lang.String c(com.alipay.sdk.m.s.a r12, android.content.Context r13) {
            android.content.Context r13 = com.alipay.sdk.m.w.a.a(r13)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.DAYS
            com.alipay.sdk.m.w.b$e r4 = new com.alipay.sdk.m.w.b$e
            r4.<init>()
            com.alipay.sdk.m.w.b$f r5 = new com.alipay.sdk.m.w.b$f
            r5.<init>(r13, r12)
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.SECONDS
            r0 = 3
            r1 = 1
            r6 = 1
            r7 = 3
            r11 = 0
            r10 = r12
            java.lang.Object r12 = com.alipay.sdk.m.w.a.a(r0, r1, r3, r4, r5, r6, r7, r9, r10, r11)
            java.lang.String r12 = (java.lang.String) r12
            return r12
    }
}
