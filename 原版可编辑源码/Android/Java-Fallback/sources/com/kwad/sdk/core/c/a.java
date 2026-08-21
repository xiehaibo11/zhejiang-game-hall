package com.kwad.sdk.core.c;

final class a implements android.app.Application.ActivityLifecycleCallbacks {
    private final java.util.List<java.lang.ref.WeakReference<android.app.Activity>> aov;
    private java.lang.ref.WeakReference<android.app.Activity> currentActivity;
    private android.app.Application mApplication;
    private boolean mEnable;
    private boolean mIsInBackground;
    private final java.util.List<com.kwad.sdk.core.c.c> mListeners;

    static final class a {
        static final com.kwad.sdk.core.c.a aow = null;

        static {
                com.kwad.sdk.core.c.a r0 = new com.kwad.sdk.core.c.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.core.c.a.a.aow = r0
                return
        }
    }

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mIsInBackground = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.mListeners = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aov = r0
            r0 = 0
            r1.mEnable = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.c.a AS() {
            com.kwad.sdk.core.c.a r0 = com.kwad.sdk.core.c.a.a.aow
            return r0
    }

    private boolean AT() {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.c.b.AV()
            if (r0 != 0) goto Ld
            boolean r0 = r1.mEnable
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    private void f(android.app.Activity r3) {
            r2 = this;
            java.util.List<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.aov
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            if (r1 != r3) goto L6
            return
        L19:
            java.util.List<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.aov
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.add(r1)
            return
    }

    private void g(android.app.Activity r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.List<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.aov
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            if (r1 == 0) goto L9
            java.lang.Object r1 = r1.get()
            android.app.Activity r1 = (android.app.Activity) r1
            if (r1 == r3) goto L21
            if (r1 != 0) goto L9
        L21:
            r0.remove()
            goto L9
        L25:
            return
    }

    public final void a(com.kwad.sdk.core.c.c r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.c.c> r0 = r1.mListeners
            r0.add(r2)
            return
    }

    public final android.app.Activity getCurrentActivity() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.currentActivity
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
    }

    public final void init(android.content.Context r1) {
            r0 = this;
            android.app.Application r1 = (android.app.Application) r1     // Catch: java.lang.Throwable -> L8
            r0.mApplication = r1     // Catch: java.lang.Throwable -> L8
            r1.registerActivityLifecycleCallbacks(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    public final boolean isAppOnForeground() {
            r1 = this;
            boolean r0 = r1.mIsInBackground
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final boolean isEnable() {
            r1 = this;
            boolean r0 = r1.mEnable
            return r0
    }

    @Override
    public final void onActivityCreated(android.app.Activity r3, android.os.Bundle r4) {
            r2 = this;
            r0 = 1
            r2.mEnable = r0
            boolean r0 = r2.AT()
            if (r0 == 0) goto La
            return
        La:
            java.util.List<com.kwad.sdk.core.c.c> r0 = r2.mListeners     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L21
        L10:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L21
            com.kwad.sdk.core.c.c r1 = (com.kwad.sdk.core.c.c) r1     // Catch: java.lang.Throwable -> L21
            r1.a(r3, r4)     // Catch: java.lang.Throwable -> L21
            goto L10
        L20:
            return
        L21:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void onActivityDestroyed(android.app.Activity r3) {
            r2 = this;
            boolean r0 = r2.AT()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.List<com.kwad.sdk.core.c.c> r0 = r2.mListeners     // Catch: java.lang.Throwable -> L1e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1e
        Ld:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1e
            com.kwad.sdk.core.c.c r1 = (com.kwad.sdk.core.c.c) r1     // Catch: java.lang.Throwable -> L1e
            r1.d(r3)     // Catch: java.lang.Throwable -> L1e
            goto Ld
        L1d:
            return
        L1e:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void onActivityPaused(android.app.Activity r3) {
            r2 = this;
            boolean r0 = r2.AT()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.List<com.kwad.sdk.core.c.c> r0 = r2.mListeners     // Catch: java.lang.Throwable -> L1e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1e
        Ld:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1e
            com.kwad.sdk.core.c.c r1 = (com.kwad.sdk.core.c.c) r1     // Catch: java.lang.Throwable -> L1e
            r1.b(r3)     // Catch: java.lang.Throwable -> L1e
            goto Ld
        L1d:
            return
        L1e:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void onActivityResumed(android.app.Activity r3) {
            r2 = this;
            boolean r0 = r2.AT()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L25
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L25
            r2.currentActivity = r0     // Catch: java.lang.Throwable -> L25
            java.util.List<com.kwad.sdk.core.c.c> r0 = r2.mListeners     // Catch: java.lang.Throwable -> L25
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L25
        L14:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L25
            com.kwad.sdk.core.c.c r1 = (com.kwad.sdk.core.c.c) r1     // Catch: java.lang.Throwable -> L25
            r1.c(r3)     // Catch: java.lang.Throwable -> L25
            goto L14
        L24:
            return
        L25:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityStarted(android.app.Activity r2) {
            r1 = this;
            boolean r0 = r1.AT()
            if (r0 == 0) goto L7
            return
        L7:
            r1.f(r2)     // Catch: java.lang.Throwable -> L2d
            java.util.List<java.lang.ref.WeakReference<android.app.Activity>> r2 = r1.aov     // Catch: java.lang.Throwable -> L2d
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L2d
            r0 = 1
            if (r2 != r0) goto L2c
            r2 = 0
            r1.mIsInBackground = r2     // Catch: java.lang.Throwable -> L2d
            java.util.List<com.kwad.sdk.core.c.c> r2 = r1.mListeners     // Catch: java.lang.Throwable -> L2d
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L2d
        L1c:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Throwable -> L2d
            com.kwad.sdk.core.c.c r0 = (com.kwad.sdk.core.c.c) r0     // Catch: java.lang.Throwable -> L2d
            r0.onBackToForeground()     // Catch: java.lang.Throwable -> L2d
            goto L1c
        L2c:
            return
        L2d:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void onActivityStopped(android.app.Activity r2) {
            r1 = this;
            boolean r0 = r1.AT()
            if (r0 == 0) goto L7
            return
        L7:
            r1.g(r2)     // Catch: java.lang.Throwable -> L2c
            java.util.List<java.lang.ref.WeakReference<android.app.Activity>> r2 = r1.aov     // Catch: java.lang.Throwable -> L2c
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L2c
            if (r2 != 0) goto L2b
            r2 = 1
            r1.mIsInBackground = r2     // Catch: java.lang.Throwable -> L2c
            java.util.List<com.kwad.sdk.core.c.c> r2 = r1.mListeners     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L2c
        L1b:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Throwable -> L2c
            com.kwad.sdk.core.c.c r0 = (com.kwad.sdk.core.c.c) r0     // Catch: java.lang.Throwable -> L2c
            r0.onBackToBackground()     // Catch: java.lang.Throwable -> L2c
            goto L1b
        L2b:
            return
        L2c:
            r2 = move-exception
            r2.printStackTrace()
            return
    }
}
