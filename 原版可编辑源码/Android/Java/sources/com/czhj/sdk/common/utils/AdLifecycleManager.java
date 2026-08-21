package com.czhj.sdk.common.utils;

import android.app.Activity;
import android.app.Application;
import android.os.Build;
import android.os.Bundle;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import java.lang.ref.WeakReference;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;

public class AdLifecycleManager {
    private static AdLifecycleManager b;
    private final Set<WeakReference<LifecycleListener>> a = new HashSet();
    private boolean c;

    public interface LifecycleListener {
        void onCreate(Activity activity);

        void onDestroy(Activity activity);

        void onPause(Activity activity);

        void onResume(Activity activity);

        void onStart(Activity activity);

        void onStop(Activity activity);
    }

    AdLifecycleManager() {
    }

    private void a(Activity activity) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            LifecycleListener lifecycleListener = (LifecycleListener) ((WeakReference) it.next()).get();
            if (lifecycleListener != null) {
                lifecycleListener.onCreate(activity);
            }
        }
    }

    private void a(Application application) {
        if (application == null) {
            SigmobLog.e("activityCallBack error, application is null");
        } else {
            application.registerActivityLifecycleCallbacks(new Application.ActivityLifecycleCallbacks() {
                @Override
                public void onActivityCreated(Activity activity, Bundle bundle) {
                    SigmobLog.d("onActivityCreated() called with: activity = [" + activity + "], savedInstanceState = [" + bundle + "]");
                    AdLifecycleManager.this.a(activity);
                }

                @Override
                public void onActivityDestroyed(Activity activity) {
                    SigmobLog.d("onActivityDestroyed() called with: activity = [" + activity + "]");
                    AdLifecycleManager.this.f(activity);
                }

                @Override
                public void onActivityPaused(Activity activity) {
                    SigmobLog.d("onActivityPaused() called with: activity = [" + activity + "]");
                    AdLifecycleManager.this.c(activity);
                }

                @Override
                public void onActivityResumed(Activity activity) {
                    SigmobLog.d("onActivityResumed() called with: activity = [" + activity + "]");
                    if (Build.VERSION.SDK_INT >= 23) {
                        ClientMetadata.getInstance().setWindInsets(activity.getWindow().getDecorView().getRootWindowInsets());
                    }
                    AdLifecycleManager.this.d(activity);
                }

                @Override
                public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
                    SigmobLog.d("onActivitySaveInstanceState() called with: activity = [" + activity + "], outState = [" + bundle + "]");
                }

                @Override
                public void onActivityStarted(Activity activity) {
                    SigmobLog.d("onActivityStarted() called with: activity = [" + activity + "]");
                    AdLifecycleManager.this.b(activity);
                }

                @Override
                public void onActivityStopped(Activity activity) {
                    SigmobLog.d("onActivityStopped() called with: activity = [" + activity + "]");
                    AdLifecycleManager.this.e(activity);
                }
            });
        }
    }

    private boolean a(LifecycleListener lifecycleListener) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            if (((WeakReference) it.next()).get() == lifecycleListener) {
                return true;
            }
        }
        return false;
    }

    private WeakReference<LifecycleListener> b(LifecycleListener lifecycleListener) {
        for (WeakReference<LifecycleListener> weakReference : new CopyOnWriteArraySet(this.a)) {
            if (weakReference.get() == lifecycleListener) {
                return weakReference;
            }
        }
        return null;
    }

    private void b(Activity activity) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            LifecycleListener lifecycleListener = (LifecycleListener) ((WeakReference) it.next()).get();
            if (lifecycleListener != null) {
                lifecycleListener.onStart(activity);
            }
        }
    }

    private void c(Activity activity) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            LifecycleListener lifecycleListener = (LifecycleListener) ((WeakReference) it.next()).get();
            if (lifecycleListener != null) {
                lifecycleListener.onPause(activity);
            }
        }
    }

    private void d(Activity activity) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            LifecycleListener lifecycleListener = (LifecycleListener) ((WeakReference) it.next()).get();
            if (lifecycleListener != null) {
                lifecycleListener.onResume(activity);
            }
        }
    }

    private void e(Activity activity) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            LifecycleListener lifecycleListener = (LifecycleListener) ((WeakReference) it.next()).get();
            if (lifecycleListener != null) {
                lifecycleListener.onStop(activity);
            }
        }
    }

    private void f(Activity activity) {
        Iterator it = new CopyOnWriteArraySet(this.a).iterator();
        while (it.hasNext()) {
            LifecycleListener lifecycleListener = (LifecycleListener) ((WeakReference) it.next()).get();
            if (lifecycleListener != null) {
                lifecycleListener.onDestroy(activity);
            }
        }
    }

    public static AdLifecycleManager getInstance() {
        if (b == null) {
            synchronized (AdLifecycleManager.class) {
                if (b == null) {
                    b = new AdLifecycleManager();
                }
            }
        }
        return b;
    }

    public void addLifecycleListener(LifecycleListener lifecycleListener) {
        if (lifecycleListener == null || this.a == null || a(lifecycleListener)) {
            return;
        }
        this.a.add(new WeakReference<>(lifecycleListener));
    }

    public void initialize(Application application) {
        try {
            if (this.c) {
                return;
            }
            a(application);
            this.c = true;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public void removeLifecycleListener(LifecycleListener lifecycleListener) {
        WeakReference<LifecycleListener> weakReferenceB;
        if (lifecycleListener == null || this.a == null || (weakReferenceB = b(lifecycleListener)) == null) {
            return;
        }
        this.a.remove(weakReferenceB);
    }
}
