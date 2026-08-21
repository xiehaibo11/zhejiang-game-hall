package com.czhj.sdk.common.utils;

public class AdLifecycleManager {
    private static com.czhj.sdk.common.utils.AdLifecycleManager b;
    private final java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener>> a;
    private boolean c;


    public interface LifecycleListener {
        void onCreate(android.app.Activity r1);

        void onDestroy(android.app.Activity r1);

        void onPause(android.app.Activity r1);

        void onResume(android.app.Activity r1);

        void onStart(android.app.Activity r1);

        void onStop(android.app.Activity r1);
    }

    AdLifecycleManager() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.a = r0
            return
    }

    private void a(android.app.Activity r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener r1 = (com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener) r1
            if (r1 == 0) goto Lb
            r1.onCreate(r3)
            goto Lb
        L23:
            return
    }

    private void a(android.app.Application r2) {
            r1 = this;
            if (r2 != 0) goto L8
            java.lang.String r2 = "activityCallBack error, application is null"
            com.czhj.sdk.logger.SigmobLog.e(r2)
            return
        L8:
            com.czhj.sdk.common.utils.AdLifecycleManager$1 r0 = new com.czhj.sdk.common.utils.AdLifecycleManager$1
            r0.<init>(r1)
            r2.registerActivityLifecycleCallbacks(r0)
            return
    }

    static void a(com.czhj.sdk.common.utils.AdLifecycleManager r0, android.app.Activity r1) {
            r0.a(r1)
            return
    }

    private boolean a(com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            if (r1 != r3) goto Lb
            r3 = 1
            return r3
        L1f:
            r3 = 0
            return r3
    }

    private java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener> b(com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener r4) {
            r3 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r3.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r2 = r1.get()
            if (r2 != r4) goto Lb
            return r1
        L1e:
            r4 = 0
            return r4
    }

    private void b(android.app.Activity r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener r1 = (com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener) r1
            if (r1 == 0) goto Lb
            r1.onStart(r3)
            goto Lb
        L23:
            return
    }

    static void b(com.czhj.sdk.common.utils.AdLifecycleManager r0, android.app.Activity r1) {
            r0.b(r1)
            return
    }

    private void c(android.app.Activity r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener r1 = (com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener) r1
            if (r1 == 0) goto Lb
            r1.onPause(r3)
            goto Lb
        L23:
            return
    }

    static void c(com.czhj.sdk.common.utils.AdLifecycleManager r0, android.app.Activity r1) {
            r0.d(r1)
            return
    }

    private void d(android.app.Activity r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener r1 = (com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener) r1
            if (r1 == 0) goto Lb
            r1.onResume(r3)
            goto Lb
        L23:
            return
    }

    static void d(com.czhj.sdk.common.utils.AdLifecycleManager r0, android.app.Activity r1) {
            r0.c(r1)
            return
    }

    private void e(android.app.Activity r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener r1 = (com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener) r1
            if (r1 == 0) goto Lb
            r1.onStop(r3)
            goto Lb
        L23:
            return
    }

    static void e(com.czhj.sdk.common.utils.AdLifecycleManager r0, android.app.Activity r1) {
            r0.e(r1)
            return
    }

    private void f(android.app.Activity r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener r1 = (com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener) r1
            if (r1 == 0) goto Lb
            r1.onDestroy(r3)
            goto Lb
        L23:
            return
    }

    static void f(com.czhj.sdk.common.utils.AdLifecycleManager r0, android.app.Activity r1) {
            r0.f(r1)
            return
    }

    public static com.czhj.sdk.common.utils.AdLifecycleManager getInstance() {
            com.czhj.sdk.common.utils.AdLifecycleManager r0 = com.czhj.sdk.common.utils.AdLifecycleManager.b
            if (r0 != 0) goto L17
            java.lang.Class<com.czhj.sdk.common.utils.AdLifecycleManager> r0 = com.czhj.sdk.common.utils.AdLifecycleManager.class
            monitor-enter(r0)
            com.czhj.sdk.common.utils.AdLifecycleManager r1 = com.czhj.sdk.common.utils.AdLifecycleManager.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.czhj.sdk.common.utils.AdLifecycleManager r1 = new com.czhj.sdk.common.utils.AdLifecycleManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.czhj.sdk.common.utils.AdLifecycleManager.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.czhj.sdk.common.utils.AdLifecycleManager r0 = com.czhj.sdk.common.utils.AdLifecycleManager.b
            return r0
    }

    public void addLifecycleListener(com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r0 = r2.a
            if (r0 == 0) goto L17
            boolean r0 = r2.a(r3)
            if (r0 != 0) goto L17
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r0 = r2.a
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.add(r1)
        L17:
            return
    }

    public void initialize(android.app.Application r2) {
            r1 = this;
            boolean r0 = r1.c     // Catch: java.lang.Throwable -> Lc
            if (r0 == 0) goto L5
            return
        L5:
            r1.a(r2)     // Catch: java.lang.Throwable -> Lc
            r2 = 1
            r1.c = r2     // Catch: java.lang.Throwable -> Lc
            goto L14
        Lc:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
        L14:
            return
    }

    public void removeLifecycleListener(com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r0 = r1.a
            if (r0 == 0) goto L12
            java.lang.ref.WeakReference r2 = r1.b(r2)
            if (r2 == 0) goto L12
            java.util.Set<java.lang.ref.WeakReference<com.czhj.sdk.common.utils.AdLifecycleManager$LifecycleListener>> r0 = r1.a
            r0.remove(r2)
        L12:
            return
    }
}
