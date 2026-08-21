package com.igexin.push.core;

public class g implements android.app.Application.ActivityLifecycleCallbacks {
    private long a;
    private int b;

    public g(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.app.Activity r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            r0.<init>()     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = "GALC|"
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            android.content.ComponentName r1 = r7.getComponentName()     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = r1.getClassName()     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = " onAStart "
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            int r1 = r6.b     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L73
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L73
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> L73
            int r0 = r6.b     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L73
            java.lang.String r0 = "GALC|>>>>>> FG"
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L73
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> L73
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Throwable -> L73
            boolean r0 = com.igexin.push.util.c.a(r7)     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L73
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L73
            long r4 = r6.a     // Catch: java.lang.Throwable -> L73
            long r2 = r2 - r4
            r4 = 20000(0x4e20, double:9.8813E-320)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L73
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L73
            com.igexin.push.core.a.e r2 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L73
            java.lang.Class r2 = r2.a(r7)     // Catch: java.lang.Throwable -> L73
            r0.<init>(r7, r2)     // Catch: java.lang.Throwable -> L73
            java.lang.String r2 = "action"
            java.lang.String r3 = com.igexin.sdk.PushConsts.ACTION_SERVICE_ONRESUME     // Catch: java.lang.Throwable -> L73
            r0.putExtra(r2, r3)     // Catch: java.lang.Throwable -> L73
            com.igexin.push.core.x r2 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> L73
            r2.a(r7, r0)     // Catch: java.lang.Throwable -> L73
            java.lang.String r7 = "GALC|on fg, start>>>>>>"
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L73
            com.igexin.b.a.c.b.a(r7, r0)     // Catch: java.lang.Throwable -> L73
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L73
            r6.a = r0     // Catch: java.lang.Throwable -> L73
        L73:
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
    public void onActivityResumed(android.app.Activity r1) {
            r0 = this;
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
            if (r1 != 0) goto L3
            return
        L3:
            r0.a(r1)
            int r1 = r0.b
            int r1 = r1 + 1
            r0.b = r1
            return
    }

    @Override
    public void onActivityStopped(android.app.Activity r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r3.b
            int r0 = r0 + (-1)
            r3.b = r0
            r1 = 0
            int r0 = java.lang.Math.max(r0, r1)
            r3.b = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "GALC|"
            r0.append(r2)
            android.content.ComponentName r4 = r4.getComponentName()
            java.lang.String r4 = r4.getClassName()
            r0.append(r4)
            java.lang.String r4 = " onAStopp "
            r0.append(r4)
            int r4 = r3.b
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r4, r0)
            int r4 = r3.b
            if (r4 != 0) goto L43
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r0 = "GALC|>>>>>> on bg"
            com.igexin.b.a.c.b.a(r0, r4)
        L43:
            return
    }
}
