package com.ss.android.socialbase.downloader.common;

public class AppStatusManager {
    private static final int STATUS_BACKGROUND = 0;
    private static final int STATUS_FOREGROUND = 1;
    private static final int STATUS_UNKNOWN = -1;
    private static final java.lang.String TAG = "AppStatusManager";
    private volatile boolean isActivityOnPause;
    private volatile int mAppStatus;
    private final java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener> mAppStatusChangeListeners;
    private android.app.Application mApplication;
    private final android.app.Application.ActivityLifecycleCallbacks mCallbacks;
    private com.ss.android.socialbase.downloader.common.AppStatusManager.InnerAppStatusChangeCaller mInnerAppStatusChangeCaller;
    private java.lang.ref.WeakReference<android.app.Activity> mTopActivity;
    private int mTopActivityHashCode;


    public interface AppStatusChangeListener {
        void onAppBackground();

        void onAppForeground();
    }

    private static class Holder {
        private static final com.ss.android.socialbase.downloader.common.AppStatusManager INSTANCE = null;

        static {
                com.ss.android.socialbase.downloader.common.AppStatusManager r0 = new com.ss.android.socialbase.downloader.common.AppStatusManager
                r1 = 0
                r0.<init>(r1)
                com.ss.android.socialbase.downloader.common.AppStatusManager.Holder.INSTANCE = r0
                return
        }

        private Holder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.ss.android.socialbase.downloader.common.AppStatusManager access$000() {
                com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.Holder.INSTANCE
                return r0
        }
    }

    public interface InnerAppStatusChangeCaller {
        boolean isAppInBackground();
    }

    private AppStatusManager() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mAppStatusChangeListeners = r0
            r0 = -1
            r1.mAppStatus = r0
            r0 = 0
            r1.isActivityOnPause = r0
            com.ss.android.socialbase.downloader.common.AppStatusManager$1 r0 = new com.ss.android.socialbase.downloader.common.AppStatusManager$1
            r0.<init>(r1)
            r1.mCallbacks = r0
            return
    }

    AppStatusManager(com.ss.android.socialbase.downloader.common.AppStatusManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.ref.WeakReference access$202(com.ss.android.socialbase.downloader.common.AppStatusManager r0, java.lang.ref.WeakReference r1) {
            r0.mTopActivity = r1
            return r1
    }

    static int access$300(com.ss.android.socialbase.downloader.common.AppStatusManager r0) {
            int r0 = r0.mTopActivityHashCode
            return r0
    }

    static int access$302(com.ss.android.socialbase.downloader.common.AppStatusManager r0, int r1) {
            r0.mTopActivityHashCode = r1
            return r1
    }

    static boolean access$402(com.ss.android.socialbase.downloader.common.AppStatusManager r0, boolean r1) {
            r0.isActivityOnPause = r1
            return r1
    }

    static void access$500(com.ss.android.socialbase.downloader.common.AppStatusManager r0) {
            r0.dispatchAppForeground()
            return
    }

    static void access$600(com.ss.android.socialbase.downloader.common.AppStatusManager r0) {
            r0.dispatchAppBackground()
            return
    }

    private boolean checkAppForeground() {
            r3 = this;
            r0 = 0
            android.app.Application r1 = r3.mApplication     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L6
            return r0
        L6:
            java.lang.String r2 = "activity"
            java.lang.Object r2 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L1b
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2     // Catch: java.lang.Throwable -> L1b
            java.lang.String r2 = r1.getPackageName()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getCurProcessName(r1)     // Catch: java.lang.Throwable -> L1b
            boolean r0 = android.text.TextUtils.equals(r2, r1)     // Catch: java.lang.Throwable -> L1b
            return r0
        L1b:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    private java.lang.Object[] collectAppSwitchListeners() {
            r2 = this;
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r0 = r2.mAppStatusChangeListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r1 = r2.mAppStatusChangeListeners     // Catch: java.lang.Throwable -> L15
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L12
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r1 = r2.mAppStatusChangeListeners     // Catch: java.lang.Throwable -> L15
            java.lang.Object[] r1 = r1.toArray()     // Catch: java.lang.Throwable -> L15
            goto L13
        L12:
            r1 = 0
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return r1
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1
    }

    private void dispatchAppBackground() {
            r4 = this;
            r0 = 0
            r4.mAppStatus = r0
            java.lang.Object[] r1 = r4.collectAppSwitchListeners()
            if (r1 == 0) goto L16
            int r2 = r1.length
        La:
            if (r0 >= r2) goto L16
            r3 = r1[r0]
            com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener r3 = (com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener) r3
            r3.onAppBackground()
            int r0 = r0 + 1
            goto La
        L16:
            return
    }

    private void dispatchAppForeground() {
            r4 = this;
            r0 = 1
            r4.mAppStatus = r0
            java.lang.Object[] r0 = r4.collectAppSwitchListeners()
            if (r0 == 0) goto L17
            int r1 = r0.length
            r2 = 0
        Lb:
            if (r2 >= r1) goto L17
            r3 = r0[r2]
            com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener r3 = (com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener) r3
            r3.onAppForeground()
            int r2 = r2 + 1
            goto Lb
        L17:
            return
    }

    public static com.ss.android.socialbase.downloader.common.AppStatusManager getInstance() {
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.Holder.access$000()
            return r0
    }

    public android.app.Activity getTopActivity() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.mTopActivity
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
        Lc:
            return r0
    }

    public void init(android.content.Context r2) {
            r1 = this;
            android.app.Application r0 = r1.mApplication
            if (r0 != 0) goto L1b
            boolean r0 = r2 instanceof android.app.Application
            if (r0 == 0) goto L1b
            monitor-enter(r1)
            android.app.Application r0 = r1.mApplication     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L16
            android.app.Application r2 = (android.app.Application) r2     // Catch: java.lang.Throwable -> L18
            r1.mApplication = r2     // Catch: java.lang.Throwable -> L18
            android.app.Application$ActivityLifecycleCallbacks r0 = r1.mCallbacks     // Catch: java.lang.Throwable -> L18
            r2.registerActivityLifecycleCallbacks(r0)     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            return
    }

    public boolean isAppFocus() {
            r1 = this;
            boolean r0 = r1.isAppForeground()
            if (r0 == 0) goto Lc
            boolean r0 = r1.isActivityOnPause
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isAppForeground() {
            r2 = this;
            int r0 = r2.mAppStatus
            r1 = -1
            if (r0 != r1) goto Lb
            boolean r0 = r2.checkAppForeground()
            r2.mAppStatus = r0
        Lb:
            r1 = 1
            if (r0 != r1) goto Lf
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    public void registerAppSwitchListener(com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r0 = r2.mAppStatusChangeListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r1 = r2.mAppStatusChangeListeners     // Catch: java.lang.Throwable -> L15
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r1 = r2.mAppStatusChangeListeners     // Catch: java.lang.Throwable -> L15
            r1.add(r3)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r3
    }

    public void setInnerAppStatusChangeCaller(com.ss.android.socialbase.downloader.common.AppStatusManager.InnerAppStatusChangeCaller r1) {
            r0 = this;
            r0.mInnerAppStatusChangeCaller = r1
            return
    }

    public void unregisterAppSwitchListener(com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener r3) {
            r2 = this;
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r0 = r2.mAppStatusChangeListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.common.AppStatusManager$AppStatusChangeListener> r1 = r2.mAppStatusChangeListeners     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }
}
