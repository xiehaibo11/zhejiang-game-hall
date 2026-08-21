package com.kwad.sdk.api.core;

public class KSLifecycleObserver {
    private static volatile com.kwad.sdk.api.core.KSLifecycleObserver sKSLifecycleObserver;
    private java.lang.ref.WeakReference<android.app.Activity> currentActivity;
    private android.app.Application mApplication;
    private boolean mEnable;
    private boolean mHasInit;
    private boolean mIsInBackground;
    private final java.util.List<com.kwad.sdk.api.core.KSLifecycleListener> mListeners;
    private int startedActivityCount;


    private KSLifecycleObserver() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.mIsInBackground = r0
            r0 = 0
            r2.startedActivityCount = r0
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r2.mListeners = r1
            r2.mHasInit = r0
            r2.mEnable = r0
            return
    }

    static boolean access$002(com.kwad.sdk.api.core.KSLifecycleObserver r0, boolean r1) {
            r0.mEnable = r1
            return r1
    }

    static java.util.List access$100(com.kwad.sdk.api.core.KSLifecycleObserver r0) {
            java.util.List<com.kwad.sdk.api.core.KSLifecycleListener> r0 = r0.mListeners
            return r0
    }

    static int access$200(com.kwad.sdk.api.core.KSLifecycleObserver r0) {
            int r0 = r0.startedActivityCount
            return r0
    }

    static int access$208(com.kwad.sdk.api.core.KSLifecycleObserver r2) {
            int r0 = r2.startedActivityCount
            int r1 = r0 + 1
            r2.startedActivityCount = r1
            return r0
    }

    static int access$210(com.kwad.sdk.api.core.KSLifecycleObserver r2) {
            int r0 = r2.startedActivityCount
            int r1 = r0 + (-1)
            r2.startedActivityCount = r1
            return r0
    }

    static void access$300(com.kwad.sdk.api.core.KSLifecycleObserver r0) {
            r0.onAppBackToForeground()
            return
    }

    static java.lang.ref.WeakReference access$400(com.kwad.sdk.api.core.KSLifecycleObserver r0) {
            java.lang.ref.WeakReference<android.app.Activity> r0 = r0.currentActivity
            return r0
    }

    static java.lang.ref.WeakReference access$402(com.kwad.sdk.api.core.KSLifecycleObserver r0, java.lang.ref.WeakReference r1) {
            r0.currentActivity = r1
            return r1
    }

    static void access$500(com.kwad.sdk.api.core.KSLifecycleObserver r0) {
            r0.onAppGoToBackground()
            return
    }

    public static com.kwad.sdk.api.core.KSLifecycleObserver getInstance() {
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.sKSLifecycleObserver
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.api.core.KSLifecycleObserver> r0 = com.kwad.sdk.api.core.KSLifecycleObserver.class
            monitor-enter(r0)
            com.kwad.sdk.api.core.KSLifecycleObserver r1 = com.kwad.sdk.api.core.KSLifecycleObserver.sKSLifecycleObserver     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.api.core.KSLifecycleObserver r1 = new com.kwad.sdk.api.core.KSLifecycleObserver     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.api.core.KSLifecycleObserver.sKSLifecycleObserver = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.sKSLifecycleObserver
            return r0
    }

    private void onAppBackToForeground() {
            r2 = this;
            r0 = 0
            r2.mIsInBackground = r0     // Catch: java.lang.Throwable -> L1a
            java.util.List<com.kwad.sdk.api.core.KSLifecycleListener> r0 = r2.mListeners     // Catch: java.lang.Throwable -> L1a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1a
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.api.core.KSLifecycleListener r1 = (com.kwad.sdk.api.core.KSLifecycleListener) r1     // Catch: java.lang.Throwable -> L1a
            r1.onBackToForeground()     // Catch: java.lang.Throwable -> L1a
            goto L9
        L19:
            return
        L1a:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private void onAppGoToBackground() {
            r2 = this;
            r0 = 1
            r2.mIsInBackground = r0     // Catch: java.lang.Throwable -> L1a
            java.util.List<com.kwad.sdk.api.core.KSLifecycleListener> r0 = r2.mListeners     // Catch: java.lang.Throwable -> L1a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1a
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.api.core.KSLifecycleListener r1 = (com.kwad.sdk.api.core.KSLifecycleListener) r1     // Catch: java.lang.Throwable -> L1a
            r1.onBackToBackground()     // Catch: java.lang.Throwable -> L1a
            goto L9
        L19:
            return
        L1a:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public android.app.Application getApplication() {
            r1 = this;
            android.app.Application r0 = r1.mApplication
            return r0
    }

    public android.app.Activity getCurrentActivity() {
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

    public void init(android.content.Context r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.app.Application     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L18
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L9
            goto L18
        L9:
            r0 = 1
            r1.mHasInit = r0     // Catch: java.lang.Throwable -> L19
            android.app.Application r2 = (android.app.Application) r2     // Catch: java.lang.Throwable -> L19
            r1.mApplication = r2     // Catch: java.lang.Throwable -> L19
            com.kwad.sdk.api.core.KSLifecycleObserver$1 r0 = new com.kwad.sdk.api.core.KSLifecycleObserver$1     // Catch: java.lang.Throwable -> L19
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19
            r2.registerActivityLifecycleCallbacks(r0)     // Catch: java.lang.Throwable -> L19
        L18:
            return
        L19:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public boolean isAppOnForeground() {
            r1 = this;
            boolean r0 = r1.mIsInBackground
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public boolean isEnable() {
            r1 = this;
            boolean r0 = r1.mEnable
            return r0
    }

    public void registerLifecycleListener(com.kwad.sdk.api.core.KSLifecycleListener r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.api.core.KSLifecycleListener> r0 = r1.mListeners
            r0.add(r2)
            return
    }

    public void unRegisterLifecycleListener(com.kwad.sdk.api.core.KSLifecycleListener r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.api.core.KSLifecycleListener> r0 = r1.mListeners
            r0.remove(r2)
            return
    }
}
