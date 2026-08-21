package com.xiaomi.push;

public class dl implements android.app.Application.ActivityLifecycleCallbacks {
    private android.content.Context a;
    private java.lang.String a;
    private java.lang.String b;

    public dl(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.a = r0
            r1.a = r2
            r1.a = r3
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            com.xiaomi.push.hr r0 = new com.xiaomi.push.hr
            r0.<init>()
            r0.a(r4)
            long r1 = java.lang.System.currentTimeMillis()
            r0.a(r1)
            com.xiaomi.push.hl r4 = com.xiaomi.push.hl.s
            r0.a(r4)
            android.content.Context r4 = r3.a
            com.xiaomi.push.dt.a(r4, r0)
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
    public void onActivityPaused(android.app.Activity r7) {
            r6 = this;
            java.lang.String r7 = r7.getLocalClassName()
            java.lang.String r0 = r6.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L66
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L13
            goto L66
        L13:
            java.lang.String r0 = ""
            r6.b = r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L28
            java.lang.String r1 = r6.b
            boolean r1 = android.text.TextUtils.equals(r1, r7)
            if (r1 != 0) goto L28
            r6.a = r0
            return
        L28:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = r6.a
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = ":"
            r1.append(r7)
            java.lang.String r7 = r6.a
            r1.append(r7)
            java.lang.String r7 = ","
            r1.append(r7)
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            java.lang.String r7 = java.lang.String.valueOf(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r6.a(r7)
            r6.a = r0
            r6.b = r0
        L66:
            return
    }

    @Override
    public void onActivityResumed(android.app.Activity r5) {
            r4 = this;
            java.lang.String r0 = r4.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Le
            java.lang.String r5 = r5.getLocalClassName()
            r4.b = r5
        Le:
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            java.lang.String r5 = java.lang.String.valueOf(r0)
            r4.a = r5
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
