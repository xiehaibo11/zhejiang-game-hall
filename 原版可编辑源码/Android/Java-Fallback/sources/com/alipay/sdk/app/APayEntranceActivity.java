package com.alipay.sdk.app;

public class APayEntranceActivity extends android.app.Activity {
    public static final java.lang.String d = "ap_order_info";
    public static final java.lang.String e = "ap_target_packagename";
    public static final java.lang.String f = "ap_session";
    public static final java.lang.String g = "ap_local_info";
    public static final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.alipay.sdk.app.APayEntranceActivity.a> h = null;
    public java.lang.String a;
    public java.lang.String b;
    public com.alipay.sdk.m.s.a c;

    public interface a {
        void a(java.lang.String r1);
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.alipay.sdk.app.APayEntranceActivity.h = r0
            return
    }

    public APayEntranceActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void finish() {
            r5 = this;
            java.lang.String r0 = r5.b
            com.alipay.sdk.m.s.a r1 = r5.c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = "|"
            r2.append(r3)
            java.lang.String r3 = r5.a
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "biz"
            java.lang.String r4 = "BSAFinish"
            com.alipay.sdk.m.k.a.a(r1, r3, r4, r2)
            java.lang.String r1 = r5.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L3b
            java.lang.String r1 = com.alipay.sdk.m.j.b.a()
            r5.a = r1
            com.alipay.sdk.m.s.a r1 = r5.c
            if (r1 == 0) goto L3b
            r2 = 1
            r1.b(r2)
        L3b:
            java.lang.String r1 = "wr"
            if (r0 == 0) goto L67
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.alipay.sdk.app.APayEntranceActivity$a> r2 = com.alipay.sdk.app.APayEntranceActivity.h
            java.lang.Object r2 = r2.remove(r0)
            com.alipay.sdk.app.APayEntranceActivity$a r2 = (com.alipay.sdk.app.APayEntranceActivity.a) r2
            if (r2 == 0) goto L4f
            java.lang.String r0 = r5.a
            r2.a(r0)
            goto L67
        L4f:
            com.alipay.sdk.m.s.a r2 = r5.c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "session="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.String r3 = "refNull"
            com.alipay.sdk.m.k.a.b(r2, r1, r3, r0)
        L67:
            super.finish()     // Catch: java.lang.Throwable -> L6b
            goto L73
        L6b:
            r0 = move-exception
            com.alipay.sdk.m.s.a r2 = r5.c
            java.lang.String r3 = "APStartFinish"
            com.alipay.sdk.m.k.a.a(r2, r1, r3, r0)
        L73:
            return
    }

    @Override
    public void onActivityResult(int r4, int r5, android.content.Intent r6) {
            r3 = this;
            super.onActivityResult(r4, r5, r6)
            com.alipay.sdk.m.s.a r0 = r3.c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.b
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = ","
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = "biz"
            java.lang.String r2 = "BSAOnAR"
            com.alipay.sdk.m.k.a.a(r0, r1, r2, r5)
            r5 = 1000(0x3e8, float:1.401E-42)
            if (r4 != r5) goto L3b
            if (r6 == 0) goto L38
            java.lang.String r4 = "result"
            java.lang.String r4 = r6.getStringExtra(r4)     // Catch: java.lang.Throwable -> L38
            r3.a = r4     // Catch: java.lang.Throwable -> L38
        L38:
            r3.finish()
        L3b:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            android.content.Intent r7 = r6.getIntent()     // Catch: java.lang.Throwable -> L9b
            android.os.Bundle r7 = r7.getExtras()     // Catch: java.lang.Throwable -> L9b
            if (r7 != 0) goto L11
            r6.finish()     // Catch: java.lang.Throwable -> L9b
            return
        L11:
            java.lang.String r0 = "ap_order_info"
            java.lang.String r0 = r7.getString(r0)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = "ap_target_packagename"
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = "ap_session"
            java.lang.String r2 = r7.getString(r2)     // Catch: java.lang.Throwable -> L9b
            r6.b = r2     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = "ap_local_info"
            java.lang.String r3 = "{}"
            java.lang.String r7 = r7.getString(r2, r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = r6.b
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L5e
            java.lang.String r2 = r6.b
            com.alipay.sdk.m.s.a r2 = com.alipay.sdk.m.s.a.a.a(r2)
            r6.c = r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.b
            r3.append(r4)
            java.lang.String r4 = "|"
            r3.append(r4)
            long r4 = android.os.SystemClock.elapsedRealtime()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "biz"
            java.lang.String r5 = "BSAEntryCreate"
            com.alipay.sdk.m.k.a.a(r2, r4, r5, r3)
        L5e:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "order_info"
            r2.putExtra(r3, r0)
            java.lang.String r3 = "localInfo"
            r2.putExtra(r3, r7)
            java.lang.String r7 = "com.alipay.android.app.flybird.ui.window.FlyBirdWindowActivity"
            r2.setClassName(r1, r7)
            r7 = 1000(0x3e8, float:1.401E-42)
            r6.startActivityForResult(r2, r7)     // Catch: java.lang.Throwable -> L78
            goto L85
        L78:
            r7 = move-exception
            com.alipay.sdk.m.s.a r1 = r6.c
            java.lang.String r2 = "wr"
            java.lang.String r3 = "APStartEx"
            com.alipay.sdk.m.k.a.a(r1, r2, r3, r7)
            r6.finish()
        L85:
            com.alipay.sdk.m.s.a r7 = r6.c
            if (r7 == 0) goto L9a
            android.content.Context r7 = r6.getApplicationContext()
            com.alipay.sdk.m.s.a r1 = r6.c
            java.lang.String r2 = r1.d
            com.alipay.sdk.m.k.a.a(r7, r1, r0, r2)
            com.alipay.sdk.m.s.a r7 = r6.c
            r0 = 1
            r7.a(r0)
        L9a:
            return
        L9b:
            r6.finish()
            return
    }
}
