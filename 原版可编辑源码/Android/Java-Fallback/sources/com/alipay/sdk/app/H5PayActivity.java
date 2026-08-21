package com.alipay.sdk.app;

public class H5PayActivity extends android.app.Activity {
    public com.alipay.sdk.m.x.c a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public boolean f;
    public java.lang.String g;
    public java.lang.ref.WeakReference<com.alipay.sdk.m.s.a> h;

    public H5PayActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void b() {
            r2 = this;
            r0 = 1
            super.requestWindowFeature(r0)     // Catch: java.lang.Throwable -> Le
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> Le
            r1 = 8192(0x2000, float:1.148E-41)
            r0.addFlags(r1)     // Catch: java.lang.Throwable -> Le
            goto L12
        Le:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L12:
            return
    }

    public void a() {
            r2 = this;
            java.lang.Object r0 = com.alipay.sdk.app.PayTask.h
            monitor-enter(r0)
            r0.notify()     // Catch: java.lang.Throwable -> L7 java.lang.Exception -> L9
            goto L9
        L7:
            r1 = move-exception
            goto Lb
        L9:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        Lb:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    @Override
    public void finish() {
            r0 = this;
            r0.a()
            super.finish()
            return
    }

    @Override
    public void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            super.onActivityResult(r2, r3, r4)
            r0 = 1010(0x3f2, float:1.415E-42)
            if (r2 != r0) goto L12
            java.lang.ref.WeakReference<com.alipay.sdk.m.s.a> r0 = r1.h
            java.lang.Object r0 = com.alipay.sdk.m.u.n.a(r0)
            com.alipay.sdk.m.s.a r0 = (com.alipay.sdk.m.s.a) r0
            com.alipay.sdk.m.j.d.a(r0, r2, r3, r4)
        L12:
            return
    }

    @Override
    public void onBackPressed() {
            r2 = this;
            com.alipay.sdk.m.x.c r0 = r2.a
            if (r0 != 0) goto L8
            r2.finish()
            return
        L8:
            boolean r1 = r0.a()
            if (r1 == 0) goto L12
            r0.b()
            goto L25
        L12:
            boolean r0 = r0.b()
            if (r0 != 0) goto L1b
            super.onBackPressed()
        L1b:
            java.lang.String r0 = com.alipay.sdk.m.j.b.a()
            com.alipay.sdk.m.j.b.a(r0)
            r2.finish()
        L25:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    public void onCreate(android.os.Bundle r5) {
            r4 = this;
            r4.b()
            super.onCreate(r5)
            android.content.Intent r5 = r4.getIntent()     // Catch: java.lang.Exception -> La6
            com.alipay.sdk.m.s.a r5 = com.alipay.sdk.m.s.a.a.a(r5)     // Catch: java.lang.Exception -> La6
            if (r5 != 0) goto L14
            r4.finish()     // Catch: java.lang.Exception -> La6
            return
        L14:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference     // Catch: java.lang.Exception -> La6
            r0.<init>(r5)     // Catch: java.lang.Exception -> La6
            r4.h = r0     // Catch: java.lang.Exception -> La6
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
            boolean r0 = r0.y()
            if (r0 != 0) goto L2a
            r0 = 1
            r4.setRequestedOrientation(r0)
            goto L2e
        L2a:
            r0 = 3
            r4.setRequestedOrientation(r0)
        L2e:
            android.content.Intent r0 = r4.getIntent()     // Catch: java.lang.Exception -> La2
            android.os.Bundle r0 = r0.getExtras()     // Catch: java.lang.Exception -> La2
            java.lang.String r1 = "url"
            r2 = 0
            java.lang.String r1 = r0.getString(r1, r2)     // Catch: java.lang.Exception -> La2
            r4.b = r1     // Catch: java.lang.Exception -> La2
            boolean r1 = com.alipay.sdk.m.u.n.f(r1)     // Catch: java.lang.Exception -> La2
            if (r1 != 0) goto L49
            r4.finish()     // Catch: java.lang.Exception -> La2
            return
        L49:
            java.lang.String r1 = "cookie"
            java.lang.String r1 = r0.getString(r1, r2)     // Catch: java.lang.Exception -> La2
            r4.d = r1     // Catch: java.lang.Exception -> La2
            java.lang.String r1 = "method"
            java.lang.String r1 = r0.getString(r1, r2)     // Catch: java.lang.Exception -> La2
            r4.c = r1     // Catch: java.lang.Exception -> La2
            java.lang.String r1 = "title"
            java.lang.String r1 = r0.getString(r1, r2)     // Catch: java.lang.Exception -> La2
            r4.e = r1     // Catch: java.lang.Exception -> La2
            java.lang.String r1 = "version"
            java.lang.String r2 = "v1"
            java.lang.String r1 = r0.getString(r1, r2)     // Catch: java.lang.Exception -> La2
            r4.g = r1     // Catch: java.lang.Exception -> La2
            java.lang.String r1 = "backisexit"
            r2 = 0
            boolean r0 = r0.getBoolean(r1, r2)     // Catch: java.lang.Exception -> La2
            r4.f = r0     // Catch: java.lang.Exception -> La2
            com.alipay.sdk.m.x.d r0 = new com.alipay.sdk.m.x.d     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = r4.g     // Catch: java.lang.Throwable -> L96
            r0.<init>(r4, r5, r1)     // Catch: java.lang.Throwable -> L96
            r4.setContentView(r0)     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> L96
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L96
            boolean r3 = r4.f     // Catch: java.lang.Throwable -> L96
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = r4.b     // Catch: java.lang.Throwable -> L96
            java.lang.String r2 = r4.d     // Catch: java.lang.Throwable -> L96
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = r4.b     // Catch: java.lang.Throwable -> L96
            r0.a(r1)     // Catch: java.lang.Throwable -> L96
            r4.a = r0     // Catch: java.lang.Throwable -> L96
            return
        L96:
            r0 = move-exception
            java.lang.String r1 = "biz"
            java.lang.String r2 = "GetInstalledAppEx"
            com.alipay.sdk.m.k.a.a(r5, r1, r2, r0)
            r4.finish()
            return
        La2:
            r4.finish()
            return
        La6:
            r4.finish()
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.alipay.sdk.m.x.c r0 = r1.a
            if (r0 == 0) goto La
            r0.c()
        La:
            return
    }

    @Override
    public void setRequestedOrientation(int r4) {
            r3 = this;
            super.setRequestedOrientation(r4)     // Catch: java.lang.Throwable -> L4
            goto L14
        L4:
            r4 = move-exception
            java.lang.ref.WeakReference<com.alipay.sdk.m.s.a> r0 = r3.h     // Catch: java.lang.Throwable -> L14
            java.lang.Object r0 = com.alipay.sdk.m.u.n.a(r0)     // Catch: java.lang.Throwable -> L14
            com.alipay.sdk.m.s.a r0 = (com.alipay.sdk.m.s.a) r0     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = "biz"
            java.lang.String r2 = "H5PayDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r0, r1, r2, r4)     // Catch: java.lang.Throwable -> L14
        L14:
            return
    }
}
