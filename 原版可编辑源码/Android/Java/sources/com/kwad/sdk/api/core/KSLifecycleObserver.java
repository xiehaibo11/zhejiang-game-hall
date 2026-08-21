package com.kwad.sdk.api.core;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class KSLifecycleObserver {
    private static volatile KSLifecycleObserver sKSLifecycleObserver;
    private WeakReference<Activity> currentActivity;
    private Application mApplication;
    private boolean mIsInBackground = true;
    private int startedActivityCount = 0;
    private final List<KSLifecycleListener> mListeners = new CopyOnWriteArrayList();
    private boolean mHasInit = false;
    private boolean mEnable = false;

    private KSLifecycleObserver() {
    }

    static int access$208(KSLifecycleObserver kSLifecycleObserver) {
        int i = kSLifecycleObserver.startedActivityCount;
        kSLifecycleObserver.startedActivityCount = i + 1;
        return i;
    }

    static int access$210(KSLifecycleObserver kSLifecycleObserver) {
        int i = kSLifecycleObserver.startedActivityCount;
        kSLifecycleObserver.startedActivityCount = i - 1;
        return i;
    }

    public static KSLifecycleObserver getInstance() {
        if (sKSLifecycleObserver == null) {
            synchronized (KSLifecycleObserver.class) {
                if (sKSLifecycleObserver == null) {
                    sKSLifecycleObserver = new KSLifecycleObserver();
                }
            }
        }
        return sKSLifecycleObserver;
    }

    private void onAppBackToForeground() {
        try {
            this.mIsInBackground = false;
            Iterator<KSLifecycleListener> it = this.mListeners.iterator();
            while (it.hasNext()) {
                it.next().onBackToForeground();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void onAppGoToBackground() {
        try {
            this.mIsInBackground = true;
            Iterator<KSLifecycleListener> it = this.mListeners.iterator();
            while (it.hasNext()) {
                it.next().onBackToBackground();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public Application getApplication() {
        return this.mApplication;
    }

    public Activity getCurrentActivity() {
        WeakReference<Activity> weakReference = this.currentActivity;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    public void init(Context context) {
        try {
            if ((context instanceof Application) && !this.mHasInit) {
                this.mHasInit = true;
                Application application = (Application) context;
                this.mApplication = application;
                application.registerActivityLifecycleCallbacks(new Application.ActivityLifecycleCallbacks() {
                    @Override
                    public void onActivityCreated(Activity activity, Bundle bundle) {
                        KSLifecycleObserver.this.mEnable = true;
                        try {
                            Iterator it = KSLifecycleObserver.this.mListeners.iterator();
                            while (it.hasNext()) {
                                ((KSLifecycleListener) it.next()).onActivityCreated(activity, bundle);
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }

                    @Override
                    public void onActivityDestroyed(Activity activity) {
                        try {
                            Iterator it = KSLifecycleObserver.this.mListeners.iterator();
                            while (it.hasNext()) {
                                ((KSLifecycleListener) it.next()).onActivityDestroyed(activity);
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }

                    @Override
                    public void onActivityPaused(Activity activity) {
                        try {
                            if (KSLifecycleObserver.this.currentActivity != null && KSLifecycleObserver.this.currentActivity.get() != null && ((Activity) KSLifecycleObserver.this.currentActivity.get()).equals(activity)) {
                                KSLifecycleObserver.this.currentActivity = null;
                            }
                            Iterator it = KSLifecycleObserver.this.mListeners.iterator();
                            while (it.hasNext()) {
                                ((KSLifecycleListener) it.next()).onActivityPaused(activity);
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }

                    @Override
                    public void onActivityResumed(Activity activity) {
                        try {
                            KSLifecycleObserver.this.currentActivity = new WeakReference(activity);
                            Iterator it = KSLifecycleObserver.this.mListeners.iterator();
                            while (it.hasNext()) {
                                ((KSLifecycleListener) it.next()).onActivityResumed(activity);
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }

                    @Override
                    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
                    }

                    @Override
                    public void onActivityStarted(Activity activity) {
                        try {
                            KSLifecycleObserver.access$208(KSLifecycleObserver.this);
                            if (KSLifecycleObserver.this.startedActivityCount == 1) {
                                KSLifecycleObserver.this.onAppBackToForeground();
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }

                    @Override
                    public void onActivityStopped(Activity activity) {
                        try {
                            KSLifecycleObserver.access$210(KSLifecycleObserver.this);
                            if (KSLifecycleObserver.this.startedActivityCount == 0) {
                                KSLifecycleObserver.this.onAppGoToBackground();
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }
                });
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public boolean isAppOnForeground() {
        return !this.mIsInBackground;
    }

    public boolean isEnable() {
        return this.mEnable;
    }

    public void registerLifecycleListener(KSLifecycleListener kSLifecycleListener) {
        this.mListeners.add(kSLifecycleListener);
    }

    public void unRegisterLifecycleListener(KSLifecycleListener kSLifecycleListener) {
        this.mListeners.remove(kSLifecycleListener);
    }
}
