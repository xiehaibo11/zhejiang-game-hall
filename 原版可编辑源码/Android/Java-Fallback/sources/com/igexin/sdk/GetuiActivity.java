package com.igexin.sdk;

public class GetuiActivity extends android.app.Activity {
    private java.lang.String a;

    public GetuiActivity() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "GetuiActivity"
            r1.a = r0
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r5) {
            r4 = this;
            java.lang.String r0 = "broadcast_intent"
            java.lang.String r1 = "action"
            android.content.Intent r2 = new android.content.Intent
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()
            java.lang.Class r3 = r3.a(r4)
            r2.<init>(r4, r3)
            super.onCreate(r5)     // Catch: java.lang.Throwable -> L37
            android.content.Intent r5 = r4.getIntent()     // Catch: java.lang.Throwable -> L37
            if (r5 == 0) goto L58
            boolean r3 = r5.hasExtra(r1)     // Catch: java.lang.Throwable -> L37
            if (r3 == 0) goto L58
            boolean r3 = r5.hasExtra(r0)     // Catch: java.lang.Throwable -> L37
            if (r3 == 0) goto L58
            java.lang.String r3 = r5.getStringExtra(r1)     // Catch: java.lang.Throwable -> L37
            r2.putExtra(r1, r3)     // Catch: java.lang.Throwable -> L37
            android.os.Parcelable r5 = r5.getParcelableExtra(r0)     // Catch: java.lang.Throwable -> L37
            android.content.Intent r5 = (android.content.Intent) r5     // Catch: java.lang.Throwable -> L37
            r2.putExtra(r0, r5)     // Catch: java.lang.Throwable -> L37
            goto L58
        L37:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.a
            r0.append(r1)
            java.lang.String r1 = "|put extra exception"
            r0.append(r1)
            java.lang.String r5 = r5.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r0)
        L58:
            com.igexin.push.core.x r5 = com.igexin.push.core.x.a()
            r5.a(r4, r2)
            r4.finish()
            return
    }
}
