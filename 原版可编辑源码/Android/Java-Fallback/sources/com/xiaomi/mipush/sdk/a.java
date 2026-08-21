package com.xiaomi.mipush.sdk;

public class a implements android.app.Application.ActivityLifecycleCallbacks {
    private java.util.Set<java.lang.String> a;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.a = r0
            return
    }

    private static void a(android.app.Application r1) {
            com.xiaomi.mipush.sdk.a r0 = new com.xiaomi.mipush.sdk.a
            r0.<init>()
            r1.registerActivityLifecycleCallbacks(r0)
            return
    }

    public static void a(android.content.Context r0) {
            android.content.Context r0 = r0.getApplicationContext()
            android.app.Application r0 = (android.app.Application) r0
            a(r0)
            return
    }

    @Override
    public void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityResumed(android.app.Activity r9) {
            r8 = this;
            android.content.Intent r0 = r9.getIntent()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r1 = "messageId"
            java.lang.String r5 = r0.getStringExtra(r1)
            r1 = -1
            java.lang.String r2 = "eventMessageType"
            int r0 = r0.getIntExtra(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L5b
            if (r0 <= 0) goto L5b
            java.util.Set<java.lang.String> r1 = r8.a
            boolean r1 = r1.contains(r5)
            if (r1 != 0) goto L5b
            java.util.Set<java.lang.String> r1 = r8.a
            r1.add(r5)
            r1 = 3000(0xbb8, float:4.204E-42)
            if (r0 != r1) goto L44
            android.content.Context r1 = r9.getApplicationContext()
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r1)
            java.lang.String r3 = r9.getPackageName()
            java.lang.String r4 = com.xiaomi.push.en.a(r0)
            r6 = 3008(0xbc0, float:4.215E-42)
        L3f:
            r7 = 0
            r2.a(r3, r4, r5, r6, r7)
            goto L5b
        L44:
            r1 = 1000(0x3e8, float:1.401E-42)
            if (r0 != r1) goto L5b
            android.content.Context r1 = r9.getApplicationContext()
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r1)
            java.lang.String r3 = r9.getPackageName()
            java.lang.String r4 = com.xiaomi.push.en.a(r0)
            r6 = 1008(0x3f0, float:1.413E-42)
            goto L3f
        L5b:
            return
    }

    @Override
    public void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityStarted(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityStopped(android.app.Activity r1) {
            r0 = this;
            return
    }
}
