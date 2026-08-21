package com.kwad.sdk.api.proxy;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class KSLifecycleObserve {
    private static final String TAG = "KSLifecycleObserve";
    private static KSLifecycleObserve sKSLifecycleObserve;
    private WeakReference<Activity> currentActivity;
    private Application mApplication;
    private boolean mIsInBackground = true;
    private int startedActivityCount = 0;
    private final List<KSLifecycleListener> mListeners = new CopyOnWriteArrayList();
    private boolean mHasInit = false;

    private KSLifecycleObserve() {
    }

    static int access$108(KSLifecycleObserve kSLifecycleObserve) {
        int i = kSLifecycleObserve.startedActivityCount;
        kSLifecycleObserve.startedActivityCount = i + 1;
        return i;
    }

    static int access$110(KSLifecycleObserve kSLifecycleObserve) {
        int i = kSLifecycleObserve.startedActivityCount;
        kSLifecycleObserve.startedActivityCount = i - 1;
        return i;
    }

    public static KSLifecycleObserve getInstance() {
        if (sKSLifecycleObserve == null) {
            synchronized (KSLifecycleObserve.class) {
                if (sKSLifecycleObserve == null) {
                    sKSLifecycleObserve = new KSLifecycleObserve();
                }
            }
        }
        return sKSLifecycleObserve;
    }

    private void onAppBackToForeground() {
        try {
            Log.i(TAG, "App switch to foreground");
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
            Log.i(TAG, "App switch to background");
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
                        try {
                            Iterator it = KSLifecycleObserve.this.mListeners.iterator();
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
                            Iterator it = KSLifecycleObserve.this.mListeners.iterator();
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
                            if (KSLifecycleObserve.this.currentActivity != null && KSLifecycleObserve.this.currentActivity.get() != null && ((Activity) KSLifecycleObserve.this.currentActivity.get()).equals(activity)) {
                                KSLifecycleObserve.this.currentActivity = null;
                            }
                            Iterator it = KSLifecycleObserve.this.mListeners.iterator();
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
                            KSLifecycleObserve.this.currentActivity = new WeakReference(activity);
                            Iterator it = KSLifecycleObserve.this.mListeners.iterator();
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
                            KSLifecycleObserve.access$108(KSLifecycleObserve.this);
                            if (KSLifecycleObserve.this.startedActivityCount == 1) {
                                KSLifecycleObserve.this.onAppBackToForeground();
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }

                    @Override
                    public void onActivityStopped(Activity activity) {
                        try {
                            KSLifecycleObserve.access$110(KSLifecycleObserve.this);
                            if (KSLifecycleObserve.this.startedActivityCount == 0) {
                                KSLifecycleObserve.this.onAppGoToBackground();
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

    public void registerLifecycleListener(KSLifecycleListener kSLifecycleListener) {
        this.mListeners.add(kSLifecycleListener);
    }

    public void unRegisterLifecycleListener(KSLifecycleListener kSLifecycleListener) {
        this.mListeners.remove(kSLifecycleListener);
    }
}
