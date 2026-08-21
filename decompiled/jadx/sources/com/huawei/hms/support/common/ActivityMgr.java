package com.huawei.hms.support.common;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.huawei.hms.support.log.HMSLog;
import com.sigmob.sdk.base.mta.PointCategory;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes.dex */
public final class ActivityMgr implements Application.ActivityLifecycleCallbacks {
    public static final ActivityMgr INST = new ActivityMgr();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public WeakReference<Activity> f2187a;

    public static String a(Object obj) {
        if (obj == null) {
            return "null";
        }
        return obj.getClass().getName() + '@' + Integer.toHexString(obj.hashCode());
    }

    public Activity getCurrentActivity() {
        if (this.f2187a == null) {
            HMSLog.i("ActivityMgr", "mCurrentActivity is " + this.f2187a);
            return null;
        }
        HMSLog.i("ActivityMgr", "mCurrentActivity.get() is " + this.f2187a.get());
        return this.f2187a.get();
    }

    public void init(Application application) {
        HMSLog.d("ActivityMgr", PointCategory.INIT);
        if (application == null) {
            HMSLog.w("ActivityMgr", "init failed for app is null");
        } else {
            application.unregisterActivityLifecycleCallbacks(INST);
            application.registerActivityLifecycleCallbacks(INST);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
        HMSLog.d("ActivityMgr", "onCreated:" + a(activity));
        this.f2187a = new WeakReference<>(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
        HMSLog.d("ActivityMgr", "onResumed:" + a(activity));
        this.f2187a = new WeakReference<>(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
        HMSLog.d("ActivityMgr", "onStarted:" + a(activity));
        this.f2187a = new WeakReference<>(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
    }
}
