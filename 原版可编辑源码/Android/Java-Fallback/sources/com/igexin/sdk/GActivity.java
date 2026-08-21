package com.igexin.sdk;

public class GActivity extends android.app.Activity {
    public static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.igexin.sdk.GActivity> r0 = com.igexin.sdk.GActivity.class
            java.lang.String r0 = r0.getName()
            com.igexin.sdk.GActivity.TAG = r0
            return
    }

    public GActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            java.lang.String r0 = "op_app"
            java.lang.String r1 = "isSlave"
            java.lang.String r2 = "action"
            android.content.Intent r3 = new android.content.Intent
            com.igexin.push.core.a.e r4 = com.igexin.push.core.a.e.a()
            java.lang.Class r4 = r4.a(r6)
            r3.<init>(r6, r4)
            r4 = 0
            super.onCreate(r7)     // Catch: java.lang.Throwable -> L6b
            android.content.Intent r7 = r6.getIntent()     // Catch: java.lang.Throwable -> L6b
            if (r7 == 0) goto L8b
            boolean r5 = r7.hasExtra(r2)     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L8b
            boolean r5 = r7.hasExtra(r1)     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L8b
            java.lang.String r5 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L6b
            r3.putExtra(r2, r5)     // Catch: java.lang.Throwable -> L6b
            boolean r5 = r7.getBooleanExtra(r1, r4)     // Catch: java.lang.Throwable -> L6b
            r3.putExtra(r1, r5)     // Catch: java.lang.Throwable -> L6b
            boolean r5 = r7.hasExtra(r0)     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L44
            java.lang.String r5 = r7.getStringExtra(r0)     // Catch: java.lang.Throwable -> L6b
            r3.putExtra(r0, r5)     // Catch: java.lang.Throwable -> L6b
        L44:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            r0.<init>()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r5 = "GActivity action = "
            r0.append(r5)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L6b
            r0.append(r2)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r2 = ", isSlave = "
            r0.append(r2)     // Catch: java.lang.Throwable -> L6b
            boolean r7 = r7.getBooleanExtra(r1, r4)     // Catch: java.lang.Throwable -> L6b
            r0.append(r7)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L6b
            java.lang.Object[] r0 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L6b
            com.igexin.b.a.c.b.a(r7, r0)     // Catch: java.lang.Throwable -> L6b
            goto L8b
        L6b:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.sdk.GActivity.TAG
            r0.append(r1)
            java.lang.String r1 = "|put extra exception"
            r0.append(r1)
            java.lang.String r7 = r7.toString()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r7, r0)
        L8b:
            com.igexin.push.core.x r7 = com.igexin.push.core.x.a()
            r7.a(r6, r3)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.sdk.GActivity.TAG
            r7.append(r0)
            java.lang.String r0 = "|start PushService from GActivity"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r0 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r7, r0)
            r6.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }
}
