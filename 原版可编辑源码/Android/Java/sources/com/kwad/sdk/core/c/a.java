package com.kwad.sdk.core.c;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

final class a implements Application.ActivityLifecycleCallbacks {
    private final List<WeakReference<Activity>> aov;
    private WeakReference<Activity> currentActivity;
    private Application mApplication;
    private boolean mEnable;
    private boolean mIsInBackground;
    private final List<c> mListeners;

    static final class a {
        static final a aow = new a(0);
    }

    private a() {
        this.mIsInBackground = true;
        this.mListeners = new CopyOnWriteArrayList();
        this.aov = new ArrayList();
        this.mEnable = false;
    }

    a(byte b) {
        this();
    }

    public static a AS() {
        return a.aow;
    }

    private boolean AT() {
        return b.AV() || !this.mEnable;
    }

    private void f(Activity activity) {
        Iterator<WeakReference<Activity>> it = this.aov.iterator();
        while (it.hasNext()) {
            if (it.next().get() == activity) {
                return;
            }
        }
        this.aov.add(new WeakReference<>(activity));
    }

    private void g(Activity activity) {
        Activity activity2;
        if (activity == null) {
            return;
        }
        Iterator<WeakReference<Activity>> it = this.aov.iterator();
        while (it.hasNext()) {
            WeakReference<Activity> next = it.next();
            if (next != null && ((activity2 = next.get()) == activity || activity2 == null)) {
                it.remove();
            }
        }
    }

    public final void a(c cVar) {
        this.mListeners.add(cVar);
    }

    public final Activity getCurrentActivity() {
        WeakReference<Activity> weakReference = this.currentActivity;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    public final void init(Context context) {
        try {
            Application application = (Application) context;
            this.mApplication = application;
            application.registerActivityLifecycleCallbacks(this);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public final boolean isAppOnForeground() {
        return !this.mIsInBackground;
    }

    public final boolean isEnable() {
        return this.mEnable;
    }

    @Override
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        this.mEnable = true;
        if (AT()) {
            return;
        }
        try {
            Iterator<c> it = this.mListeners.iterator();
            while (it.hasNext()) {
                it.next().a(activity, bundle);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void onActivityDestroyed(Activity activity) {
        if (AT()) {
            return;
        }
        try {
            Iterator<c> it = this.mListeners.iterator();
            while (it.hasNext()) {
                it.next().d(activity);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void onActivityPaused(Activity activity) {
        if (AT()) {
            return;
        }
        try {
            Iterator<c> it = this.mListeners.iterator();
            while (it.hasNext()) {
                it.next().b(activity);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void onActivityResumed(Activity activity) {
        if (AT()) {
            return;
        }
        try {
            this.currentActivity = new WeakReference<>(activity);
            Iterator<c> it = this.mListeners.iterator();
            while (it.hasNext()) {
                it.next().c(activity);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override
    public final void onActivityStarted(Activity activity) {
        if (AT()) {
            return;
        }
        try {
            f(activity);
            if (this.aov.size() == 1) {
                this.mIsInBackground = false;
                Iterator<c> it = this.mListeners.iterator();
                while (it.hasNext()) {
                    it.next().onBackToForeground();
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void onActivityStopped(Activity activity) {
        if (AT()) {
            return;
        }
        try {
            g(activity);
            if (this.aov.size() == 0) {
                this.mIsInBackground = true;
                Iterator<c> it = this.mListeners.iterator();
                while (it.hasNext()) {
                    it.next().onBackToBackground();
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
