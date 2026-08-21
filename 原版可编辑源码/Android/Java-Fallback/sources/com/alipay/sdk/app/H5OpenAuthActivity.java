package com.alipay.sdk.app;

public class H5OpenAuthActivity extends com.alipay.sdk.app.H5PayActivity {
    public boolean i;

    public H5OpenAuthActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.i = r0
            return
    }

    @Override
    public void a() {
            r0 = this;
            return
    }

    @Override
    public void onDestroy() {
            r3 = this;
            boolean r0 = r3.i
            if (r0 == 0) goto L15
            android.content.Intent r0 = r3.getIntent()     // Catch: java.lang.Throwable -> L15
            com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.s.a.a.a(r0)     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L15
            java.lang.String r1 = ""
            java.lang.String r2 = r0.d     // Catch: java.lang.Throwable -> L15
            com.alipay.sdk.m.k.a.b(r3, r0, r1, r2)     // Catch: java.lang.Throwable -> L15
        L15:
            super.onDestroy()
            return
    }

    @Override
    public void startActivity(android.content.Intent r5) {
            r4 = this;
            com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.s.a.a.a(r5)     // Catch: java.lang.Throwable -> L42
            super.startActivity(r5)     // Catch: java.lang.Throwable -> L21
            if (r5 == 0) goto Le
            android.net.Uri r5 = r5.getData()
            goto Lf
        Le:
            r5 = 0
        Lf:
            if (r5 == 0) goto L20
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "alipays://platformapi/startapp"
            boolean r5 = r5.startsWith(r0)
            if (r5 == 0) goto L20
            r4.finish()
        L20:
            return
        L21:
            r1 = move-exception
            if (r5 == 0) goto L33
            android.net.Uri r2 = r5.getData()
            if (r2 == 0) goto L33
            android.net.Uri r5 = r5.getData()
            java.lang.String r5 = r5.toString()
            goto L35
        L33:
            java.lang.String r5 = "null"
        L35:
            if (r0 == 0) goto L3e
            java.lang.String r2 = "biz"
            java.lang.String r3 = "StartActivityEx"
            com.alipay.sdk.m.k.a.a(r0, r2, r3, r1, r5)
        L3e:
            r5 = 1
            r4.i = r5
            throw r1
        L42:
            r4.finish()
            return
    }
}
