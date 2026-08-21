package com.iab.omid.library.mmadbridge.internal;

public class d implements android.app.Application.ActivityLifecycleCallbacks {
    private boolean a;
    protected boolean b;
    private com.iab.omid.library.mmadbridge.internal.d.a c;

    public interface a {
        void a(boolean r1);
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(boolean r2) {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == r2) goto L14
            r1.b = r2
            boolean r0 = r1.a
            if (r0 == 0) goto L14
            r1.b(r2)
            com.iab.omid.library.mmadbridge.internal.d$a r0 = r1.c
            if (r0 == 0) goto L14
            r0.a(r2)
        L14:
            return
    }

    private boolean a() {
            r4 = this;
            android.app.ActivityManager$RunningAppProcessInfo r0 = r4.b()
            int r0 = r0.importance
            r1 = 1
            r2 = 0
            r3 = 100
            if (r0 != r3) goto Le
            r0 = r1
            goto Lf
        Le:
            r0 = r2
        Lf:
            if (r0 != 0) goto L19
            boolean r0 = r4.d()
            if (r0 == 0) goto L18
            goto L19
        L18:
            r1 = r2
        L19:
            return r1
    }

    public void a(android.content.Context r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.app.Application
            if (r0 == 0) goto L9
            android.app.Application r2 = (android.app.Application) r2
            r2.registerActivityLifecycleCallbacks(r1)
        L9:
            return
    }

    public void a(com.iab.omid.library.mmadbridge.internal.d.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    android.app.ActivityManager.RunningAppProcessInfo b() {
            r1 = this;
            android.app.ActivityManager$RunningAppProcessInfo r0 = new android.app.ActivityManager$RunningAppProcessInfo
            r0.<init>()
            android.app.ActivityManager.getMyMemoryState(r0)
            return r0
    }

    protected void b(boolean r1) {
            r0 = this;
            return
    }

    public boolean c() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    protected boolean d() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void e() {
            r1 = this;
            r0 = 1
            r1.a = r0
            boolean r0 = r1.a()
            r1.b = r0
            r1.b(r0)
            return
    }

    public void f() {
            r1 = this;
            r0 = 0
            r1.a = r0
            r0 = 0
            r1.c = r0
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
            r1 = 1
            r0.a(r1)
            return
    }

    @Override
    public void onActivityStopped(android.app.Activity r1) {
            r0 = this;
            boolean r1 = r0.a()
            r0.a(r1)
            return
    }
}
