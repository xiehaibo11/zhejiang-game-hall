package com.kwad.sdk.core.c;

public class b implements com.kwad.sdk.core.c.c<android.app.Activity> {
    private static volatile com.kwad.sdk.core.c.b aox;
    private static final java.util.List<com.kwad.sdk.core.c.c> mListeners = null;
    private final java.util.concurrent.atomic.AtomicBoolean IP;
    private android.app.Application mApplication;








    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.sdk.core.c.b.mListeners = r0
            return
    }

    private b() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.IP = r0
            return
    }

    public static com.kwad.sdk.core.c.b AU() {
            com.kwad.sdk.core.c.b r0 = com.kwad.sdk.core.c.b.aox
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.c.b> r0 = com.kwad.sdk.core.c.b.class
            monitor-enter(r0)
            com.kwad.sdk.core.c.b r1 = com.kwad.sdk.core.c.b.aox     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.c.b r1 = new com.kwad.sdk.core.c.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.c.b.aox = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.c.b r0 = com.kwad.sdk.core.c.b.aox
            return r0
    }

    public static boolean AV() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = r0.getApiVersion()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "3.3.26"
            boolean r0 = com.kwad.sdk.utils.bk.aw(r0, r1)     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto L1d
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()     // Catch: java.lang.Throwable -> L1d
            boolean r0 = r0.isEnable()     // Catch: java.lang.Throwable -> L1d
            return r0
        L1d:
            r0 = 0
            return r0
    }

    static void a(com.kwad.sdk.core.c.b r0, com.kwad.sdk.g.a r1) {
            c(r1)
            return
    }

    public static void a(com.kwad.sdk.core.c.c r1) {
            java.util.List<com.kwad.sdk.core.c.c> r0 = com.kwad.sdk.core.c.b.mListeners
            r0.add(r1)
            return
    }

    public static void b(com.kwad.sdk.core.c.c r1) {
            java.util.List<com.kwad.sdk.core.c.c> r0 = com.kwad.sdk.core.c.b.mListeners
            r0.remove(r1)
            return
    }

    private static <T> void c(com.kwad.sdk.g.a<com.kwad.sdk.core.c.c> r2) {
            java.util.List<com.kwad.sdk.core.c.c> r0 = com.kwad.sdk.core.c.b.mListeners
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.c.c r1 = (com.kwad.sdk.core.c.c) r1
            if (r1 == 0) goto L6
            r2.accept(r1)
            goto L6
        L18:
            return
    }

    public static android.app.Activity getCurrentActivity() {
            boolean r0 = AV()
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()
            android.app.Activity r0 = r0.getCurrentActivity()
            return r0
        Lf:
            com.kwad.sdk.core.c.a r0 = com.kwad.sdk.core.c.a.AS()
            boolean r0 = r0.isEnable()
            if (r0 == 0) goto L22
            com.kwad.sdk.core.c.a r0 = com.kwad.sdk.core.c.a.AS()
            android.app.Activity r0 = r0.getCurrentActivity()
            return r0
        L22:
            r0 = 0
            return r0
    }

    public static boolean isAppOnForeground() {
            boolean r0 = AV()
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()
            boolean r0 = r0.isAppOnForeground()
            return r0
        Lf:
            com.kwad.sdk.core.c.a r0 = com.kwad.sdk.core.c.a.AS()
            boolean r0 = r0.isEnable()
            if (r0 == 0) goto L22
            com.kwad.sdk.core.c.a r0 = com.kwad.sdk.core.c.a.AS()
            boolean r0 = r0.isAppOnForeground()
            return r0
        L22:
            r0 = 0
            return r0
    }

    public static boolean isEnable() {
            boolean r0 = AV()
            if (r0 != 0) goto L13
            com.kwad.sdk.core.c.a r0 = com.kwad.sdk.core.c.a.AS()
            boolean r0 = r0.isEnable()
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    private void onActivityCreated(android.app.Activity r2, android.os.Bundle r3) {
            r1 = this;
            com.kwad.sdk.core.c.b$2 r0 = new com.kwad.sdk.core.c.b$2
            r0.<init>(r1, r2, r3)
            c(r0)
            return
    }

    private void onActivityDestroyed(android.app.Activity r2) {
            r1 = this;
            com.kwad.sdk.core.c.b$5 r0 = new com.kwad.sdk.core.c.b$5
            r0.<init>(r1, r2)
            c(r0)
            return
    }

    private void onActivityPaused(android.app.Activity r2) {
            r1 = this;
            com.kwad.sdk.core.c.b$4 r0 = new com.kwad.sdk.core.c.b$4
            r0.<init>(r1, r2)
            c(r0)
            return
    }

    private void onActivityResumed(android.app.Activity r2) {
            r1 = this;
            com.kwad.sdk.core.c.b$3 r0 = new com.kwad.sdk.core.c.b$3
            r0.<init>(r1, r2)
            c(r0)
            return
    }

    @Override
    public final void a(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityCreated(r1, r2)
            return
    }

    @Override
    public final void b(android.app.Activity r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityPaused(r1)
            return
    }

    @Override
    public final void c(android.app.Activity r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityResumed(r1)
            return
    }

    @Override
    public final void d(android.app.Activity r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityDestroyed(r1)
            return
    }

    public final android.app.Application getApplication() {
            r1 = this;
            android.app.Application r0 = r1.mApplication
            return r0
    }

    public final void init(android.content.Context r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.IP
            boolean r0 = r0.get()
            if (r0 != 0) goto L5b
            if (r2 != 0) goto Lb
            goto L5b
        Lb:
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.IP
            r0 = 1
            r2.set(r0)
            java.lang.Class<com.kwad.sdk.service.a.e> r2 = com.kwad.sdk.service.a.e.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.service.a.e r2 = (com.kwad.sdk.service.a.e) r2     // Catch: java.lang.Throwable -> L43
            java.lang.String r2 = r2.getApiVersion()     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "3.3.26"
            boolean r2 = com.kwad.sdk.utils.bk.aw(r2, r0)     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L3c
            com.kwad.sdk.api.core.KSLifecycleObserver r2 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()     // Catch: java.lang.Throwable -> L43
            android.app.Application r2 = r2.getApplication()     // Catch: java.lang.Throwable -> L43
            r1.mApplication = r2     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.api.core.KSLifecycleObserver r2 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()     // Catch: java.lang.Throwable -> L43
            com.kwad.sdk.core.c.b$1 r0 = new com.kwad.sdk.core.c.b$1     // Catch: java.lang.Throwable -> L43
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L43
            r2.registerLifecycleListener(r0)     // Catch: java.lang.Throwable -> L43
            goto L43
        L3c:
            java.lang.String r2 = "LifecycleHolder"
            java.lang.String r0 = "init KSLifecycleObserver not support"
            com.kwad.sdk.core.e.c.M(r2, r0)     // Catch: java.lang.Throwable -> L43
        L43:
            android.app.Application r2 = com.kwad.sdk.m.l.KT()
            if (r2 == 0) goto L5b
            r1.mApplication = r2
            com.kwad.sdk.core.c.a r2 = com.kwad.sdk.core.c.a.AS()
            android.app.Application r0 = r1.mApplication
            r2.init(r0)
            com.kwad.sdk.core.c.a r2 = com.kwad.sdk.core.c.a.AS()
            r2.a(r1)
        L5b:
            return
    }

    @Override
    public final void onBackToBackground() {
            r2 = this;
            java.lang.String r0 = "LifecycleHolder"
            java.lang.String r1 = "onBackToBackground old"
            com.kwad.sdk.core.e.c.M(r0, r1)
            com.kwad.sdk.core.c.b$7 r0 = new com.kwad.sdk.core.c.b$7
            r0.<init>(r2)
            c(r0)
            return
    }

    @Override
    public final void onBackToForeground() {
            r2 = this;
            java.lang.String r0 = "LifecycleHolder"
            java.lang.String r1 = "onBackToForeground old"
            com.kwad.sdk.core.e.c.M(r0, r1)
            com.kwad.sdk.core.c.b$6 r0 = new com.kwad.sdk.core.c.b$6
            r0.<init>(r2)
            c(r0)
            return
    }
}
