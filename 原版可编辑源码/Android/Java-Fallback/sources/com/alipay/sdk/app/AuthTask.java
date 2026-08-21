package com.alipay.sdk.app;

public class AuthTask {
    public static final java.lang.Object c = null;
    public android.app.Activity a;
    public com.alipay.sdk.m.x.a b;

    public class a implements com.alipay.sdk.m.u.h.g {
        public final com.alipay.sdk.app.AuthTask a;

        public a(com.alipay.sdk.app.AuthTask r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.alipay.sdk.app.AuthTask r0 = r1.a
                com.alipay.sdk.app.AuthTask.a(r0)
                return
        }

        @Override
        public void b() {
                r0 = this;
                return
        }
    }

    static {
            java.lang.Class<com.alipay.sdk.m.u.h> r0 = com.alipay.sdk.m.u.h.class
            com.alipay.sdk.app.AuthTask.c = r0
            return
    }

    public AuthTask(android.app.Activity r3) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.app.Activity r1 = r2.a
            r0.a(r1)
            com.alipay.sdk.m.x.a r0 = new com.alipay.sdk.m.x.a
            java.lang.String r1 = "去支付宝授权"
            r0.<init>(r3, r1)
            r2.b = r0
            return
    }

    private java.lang.String a(android.app.Activity r4, java.lang.String r5, com.alipay.sdk.m.s.a r6) {
            r3 = this;
            java.lang.String r5 = r6.a(r5)
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
            java.util.List r0 = r0.l()
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()
            boolean r1 = r1.h
            if (r1 == 0) goto L16
            if (r0 != 0) goto L18
        L16:
            java.util.List<com.alipay.sdk.m.m.a$b> r0 = com.alipay.sdk.m.j.a.d
        L18:
            android.app.Activity r1 = r3.a
            r2 = 1
            boolean r0 = com.alipay.sdk.m.u.n.a(r6, r1, r0, r2)
            java.lang.String r1 = "biz"
            if (r0 == 0) goto L5b
            com.alipay.sdk.m.u.h r0 = new com.alipay.sdk.m.u.h
            com.alipay.sdk.m.u.h$g r2 = r3.b()
            r0.<init>(r4, r6, r2)
            r2 = 0
            java.lang.String r2 = r0.a(r5, r2)
            r0.a()
            java.lang.String r0 = "failed"
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 != 0) goto L51
            java.lang.String r0 = "scheme_failed"
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 == 0) goto L45
            goto L51
        L45:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L50
            java.lang.String r4 = com.alipay.sdk.m.j.b.a()
            return r4
        L50:
            return r2
        L51:
            java.lang.String r0 = "LogBindCalledH5"
            com.alipay.sdk.m.k.a.a(r6, r1, r0)
            java.lang.String r4 = r3.b(r4, r5, r6)
            return r4
        L5b:
            java.lang.String r0 = "LogCalledH5"
            com.alipay.sdk.m.k.a.a(r6, r1, r0)
            java.lang.String r4 = r3.b(r4, r5, r6)
            return r4
    }

    private java.lang.String a(com.alipay.sdk.m.s.a r4, com.alipay.sdk.m.r.b r5) {
            r3 = this;
            java.lang.String[] r5 = r5.c()
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1 = 0
            r5 = r5[r1]
            java.lang.String r1 = "url"
            r0.putString(r1, r5)
            android.content.Intent r5 = new android.content.Intent
            android.app.Activity r1 = r3.a
            java.lang.Class<com.alipay.sdk.app.H5AuthActivity> r2 = com.alipay.sdk.app.H5AuthActivity.class
            r5.<init>(r1, r2)
            r5.putExtras(r0)
            com.alipay.sdk.m.s.a.a.a(r4, r5)
            android.app.Activity r4 = r3.a
            r4.startActivity(r5)
            java.lang.Object r4 = com.alipay.sdk.app.AuthTask.c
            monitor-enter(r4)
            java.lang.Object r5 = com.alipay.sdk.app.AuthTask.c     // Catch: java.lang.Throwable -> L3d java.lang.InterruptedException -> L3f
            r5.wait()     // Catch: java.lang.Throwable -> L3d java.lang.InterruptedException -> L3f
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = com.alipay.sdk.m.j.b.d()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L3c
            java.lang.String r4 = com.alipay.sdk.m.j.b.a()
        L3c:
            return r4
        L3d:
            r5 = move-exception
            goto L45
        L3f:
            java.lang.String r5 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3d
            return r5
        L45:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3d
            throw r5
    }

    private void a() {
            r1 = this;
            com.alipay.sdk.m.x.a r0 = r1.b
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    public static void a(com.alipay.sdk.app.AuthTask r0) {
            r0.a()
            return
    }

    private com.alipay.sdk.m.u.h.g b() {
            r1 = this;
            com.alipay.sdk.app.AuthTask$a r0 = new com.alipay.sdk.app.AuthTask$a
            r0.<init>(r1)
            return r0
    }

    private java.lang.String b(android.app.Activity r4, java.lang.String r5, com.alipay.sdk.m.s.a r6) {
            r3 = this;
            r3.c()
            r0 = 0
            com.alipay.sdk.m.q.a r1 = new com.alipay.sdk.m.q.a     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            r1.<init>()     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            com.alipay.sdk.m.p.b r4 = r1.a(r6, r4, r5)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            org.json.JSONObject r4 = r4.c()     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            java.lang.String r5 = "form"
            org.json.JSONObject r4 = r4.optJSONObject(r5)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            java.lang.String r5 = "onload"
            org.json.JSONObject r4 = r4.optJSONObject(r5)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            java.util.List r4 = com.alipay.sdk.m.r.b.a(r4)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            r3.a()     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            r5 = 0
        L25:
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            if (r5 >= r1) goto L4a
            java.lang.Object r1 = r4.get(r5)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            com.alipay.sdk.m.r.b r1 = (com.alipay.sdk.m.r.b) r1     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            com.alipay.sdk.m.r.a r1 = r1.a()     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            com.alipay.sdk.m.r.a r2 = com.alipay.sdk.m.r.a.c     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            if (r1 != r2) goto L47
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            com.alipay.sdk.m.r.b r4 = (com.alipay.sdk.m.r.b) r4     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            java.lang.String r4 = r3.a(r6, r4)     // Catch: java.lang.Throwable -> L4e java.io.IOException -> L57
            r3.a()
            return r4
        L47:
            int r5 = r5 + 1
            goto L25
        L4a:
            r3.a()
            goto L6b
        L4e:
            r4 = move-exception
            java.lang.String r5 = "biz"
            java.lang.String r1 = "H5AuthDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r6, r5, r1, r4)     // Catch: java.lang.Throwable -> L86
            goto L68
        L57:
            r4 = move-exception
            com.alipay.sdk.m.j.c r5 = com.alipay.sdk.m.j.c.f     // Catch: java.lang.Throwable -> L86
            int r5 = r5.b()     // Catch: java.lang.Throwable -> L86
            com.alipay.sdk.m.j.c r5 = com.alipay.sdk.m.j.c.b(r5)     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "net"
            com.alipay.sdk.m.k.a.a(r6, r0, r4)     // Catch: java.lang.Throwable -> L86
            r0 = r5
        L68:
            r3.a()
        L6b:
            if (r0 != 0) goto L77
            com.alipay.sdk.m.j.c r4 = com.alipay.sdk.m.j.c.d
            int r4 = r4.b()
            com.alipay.sdk.m.j.c r0 = com.alipay.sdk.m.j.c.b(r4)
        L77:
            int r4 = r0.b()
            java.lang.String r5 = r0.a()
            java.lang.String r6 = ""
            java.lang.String r4 = com.alipay.sdk.m.j.b.a(r4, r5, r6)
            return r4
        L86:
            r4 = move-exception
            r3.a()
            goto L8c
        L8b:
            throw r4
        L8c:
            goto L8b
    }

    private void c() {
            r1 = this;
            com.alipay.sdk.m.x.a r0 = r1.b
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }

    public synchronized java.lang.String auth(java.lang.String r4, boolean r5) {
            r3 = this;
            monitor-enter(r3)
            com.alipay.sdk.m.s.a r0 = new com.alipay.sdk.m.s.a     // Catch: java.lang.Throwable -> L10
            android.app.Activity r1 = r3.a     // Catch: java.lang.Throwable -> L10
            java.lang.String r2 = "auth"
            r0.<init>(r1, r4, r2)     // Catch: java.lang.Throwable -> L10
            java.lang.String r4 = r3.innerAuth(r0, r4, r5)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r3)
            return r4
        L10:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized java.util.Map<java.lang.String, java.lang.String> authV2(java.lang.String r4, boolean r5) {
            r3 = this;
            monitor-enter(r3)
            com.alipay.sdk.m.s.a r0 = new com.alipay.sdk.m.s.a     // Catch: java.lang.Throwable -> L14
            android.app.Activity r1 = r3.a     // Catch: java.lang.Throwable -> L14
            java.lang.String r2 = "authV2"
            r0.<init>(r1, r4, r2)     // Catch: java.lang.Throwable -> L14
            java.lang.String r4 = r3.innerAuth(r0, r4, r5)     // Catch: java.lang.Throwable -> L14
            java.util.Map r4 = com.alipay.sdk.m.u.l.a(r0, r4)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r3)
            return r4
        L14:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized java.lang.String innerAuth(com.alipay.sdk.m.s.a r7, java.lang.String r8, boolean r9) {
            r6 = this;
            monitor-enter(r6)
            if (r9 == 0) goto L6
            r6.c()     // Catch: java.lang.Throwable -> L137
        L6:
            com.alipay.sdk.m.s.b r9 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Throwable -> L137
            android.app.Activity r0 = r6.a     // Catch: java.lang.Throwable -> L137
            r9.a(r0)     // Catch: java.lang.Throwable -> L137
            java.lang.String r9 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L137
            java.lang.String r0 = ""
            com.alipay.sdk.m.j.a.a(r0)     // Catch: java.lang.Throwable -> L137
            r0 = 1
            r1 = 0
            android.app.Activity r2 = r6.a     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L70
            java.lang.String r9 = r6.a(r2, r8, r7)     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L70
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r2.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturn"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r2)     // Catch: java.lang.Throwable -> L137
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r2.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "resultStatus"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "memo"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturnV"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r2)     // Catch: java.lang.Throwable -> L137
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L137
            boolean r2 = r2.s()     // Catch: java.lang.Throwable -> L137
            if (r2 != 0) goto Lca
            goto Lc1
        L6e:
            r2 = move-exception
            goto Ld6
        L70:
            r2 = move-exception
            com.alipay.sdk.m.u.e.a(r2)     // Catch: java.lang.Throwable -> L6e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r2.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturn"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r2)     // Catch: java.lang.Throwable -> L137
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r2.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "resultStatus"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "memo"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturnV"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r2)     // Catch: java.lang.Throwable -> L137
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L137
            boolean r2 = r2.s()     // Catch: java.lang.Throwable -> L137
            if (r2 != 0) goto Lca
        Lc1:
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L137
            android.app.Activity r3 = r6.a     // Catch: java.lang.Throwable -> L137
            r2.a(r7, r3, r1, r0)     // Catch: java.lang.Throwable -> L137
        Lca:
            r6.a()     // Catch: java.lang.Throwable -> L137
            android.app.Activity r0 = r6.a     // Catch: java.lang.Throwable -> L137
            java.lang.String r1 = r7.d     // Catch: java.lang.Throwable -> L137
            com.alipay.sdk.m.k.a.b(r0, r7, r8, r1)     // Catch: java.lang.Throwable -> L137
            monitor-exit(r6)
            return r9
        Ld6:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r3.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = ""
            r3.append(r4)     // Catch: java.lang.Throwable -> L137
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L137
            r3.append(r4)     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = "biz"
            java.lang.String r5 = "PgReturn"
            com.alipay.sdk.m.k.a.a(r7, r4, r5, r3)     // Catch: java.lang.Throwable -> L137
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r3.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = "resultStatus"
            java.lang.String r4 = com.alipay.sdk.m.u.l.a(r9, r4)     // Catch: java.lang.Throwable -> L137
            r3.append(r4)     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = "memo"
            java.lang.String r9 = com.alipay.sdk.m.u.l.a(r9, r4)     // Catch: java.lang.Throwable -> L137
            r3.append(r9)     // Catch: java.lang.Throwable -> L137
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturnV"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r9)     // Catch: java.lang.Throwable -> L137
            com.alipay.sdk.m.m.a r9 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L137
            boolean r9 = r9.s()     // Catch: java.lang.Throwable -> L137
            if (r9 != 0) goto L12c
            com.alipay.sdk.m.m.a r9 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L137
            android.app.Activity r3 = r6.a     // Catch: java.lang.Throwable -> L137
            r9.a(r7, r3, r1, r0)     // Catch: java.lang.Throwable -> L137
        L12c:
            r6.a()     // Catch: java.lang.Throwable -> L137
            android.app.Activity r9 = r6.a     // Catch: java.lang.Throwable -> L137
            java.lang.String r0 = r7.d     // Catch: java.lang.Throwable -> L137
            com.alipay.sdk.m.k.a.b(r9, r7, r8, r0)     // Catch: java.lang.Throwable -> L137
            throw r2     // Catch: java.lang.Throwable -> L137
        L137:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }
}
