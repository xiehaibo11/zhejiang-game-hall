package com.igexin.push.core.stub;

public class PushCore implements com.igexin.sdk.IPushCore {
    private com.igexin.push.core.c a;
    private java.util.Map<android.app.Activity, com.igexin.push.core.e.a> b;

    public PushCore() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            return
    }

    @Override
    public void onActivityConfigurationChanged(android.app.Activity r2, android.content.res.Configuration r3) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto Ld
            r2.a(r3)
        Ld:
            return
    }

    @Override
    public boolean onActivityCreateOptionsMenu(android.app.Activity r2, android.view.Menu r3) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto L12
            boolean r2 = r2.a(r3)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    @Override
    public void onActivityDestroy(android.app.Activity r3) {
            r2 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r2.b
            java.lang.Object r0 = r0.get(r3)
            com.igexin.push.core.e.a r0 = (com.igexin.push.core.e.a) r0
            if (r0 == 0) goto L19
            r0.h()
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r1 = r2.b
            r1.remove(r3)
            com.igexin.push.core.e.b r3 = com.igexin.push.core.e.b.a()
            r3.c(r0)
        L19:
            return
    }

    @Override
    public boolean onActivityKeyDown(android.app.Activity r2, int r3, android.view.KeyEvent r4) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto L12
            boolean r2 = r2.a(r3, r4)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    @Override
    public void onActivityNewIntent(android.app.Activity r2, android.content.Intent r3) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto Ld
            r2.a(r3)
        Ld:
            return
    }

    @Override
    public void onActivityPause(android.app.Activity r2) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto Ld
            r2.f()
        Ld:
            return
    }

    @Override
    public void onActivityRestart(android.app.Activity r2) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto Ld
            r2.d()
        Ld:
            return
    }

    @Override
    public void onActivityResume(android.app.Activity r2) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto Ld
            r2.e()
        Ld:
            return
    }

    @Override
    public void onActivityStart(android.app.Activity r4, android.content.Intent r5) {
            r3 = this;
            if (r4 == 0) goto L2f
            if (r5 == 0) goto L2f
            java.lang.String r0 = "activityid"
            boolean r1 = r5.hasExtra(r0)
            if (r1 == 0) goto L2f
            r1 = 0
            long r0 = r5.getLongExtra(r0, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            com.igexin.push.core.e.b r0 = com.igexin.push.core.e.b.a()
            com.igexin.push.core.e.a r5 = r0.a(r5)
            if (r5 == 0) goto L2c
            r5.a(r4)
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r3.b
            r0.put(r4, r5)
            r5.c()
            goto L2f
        L2c:
            r4.finish()
        L2f:
            return
    }

    @Override
    public void onActivityStop(android.app.Activity r2) {
            r1 = this;
            java.util.Map<android.app.Activity, com.igexin.push.core.e.a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.igexin.push.core.e.a r2 = (com.igexin.push.core.e.a) r2
            if (r2 == 0) goto Ld
            r2.g()
        Ld:
            return
    }

    @Override
    public android.os.IBinder onServiceBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onServiceDestroy() {
            r0 = this;
            return
    }

    @Override
    public int onServiceStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            com.igexin.push.core.c r2 = r0.a
            if (r2 == 0) goto L13
            android.os.Message r2 = android.os.Message.obtain()
            int r3 = com.igexin.push.core.CoreConsts.c
            r2.what = r3
            r2.obj = r1
            com.igexin.push.core.c r1 = r0.a
            r1.a(r2)
        L13:
            r1 = 2
            return r1
    }

    @Override
    public boolean start(android.content.Context r2) {
            r1 = this;
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            r1.a = r0
            r0.a(r2)
            r2 = 1
            return r2
    }
}
