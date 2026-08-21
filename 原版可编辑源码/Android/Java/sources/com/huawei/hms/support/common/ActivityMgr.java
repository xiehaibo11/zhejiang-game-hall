package com.huawei.hms.support.common;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.huawei.hms.support.log.HMSLog;
import com.sigmob.sdk.base.mta.PointCategory;
import java.lang.ref.WeakReference;

public final class ActivityMgr implements Application.ActivityLifecycleCallbacks {
    public static final ActivityMgr INST = new ActivityMgr();
    public WeakReference<Activity> a;

    public static String a(Object obj) {
        if (obj == null) {
            return "null";
        }
        return obj.getClass().getName() + '@' + Integer.toHexString(obj.hashCode());
    }

    public Activity getCurrentActivity() {
        if (this.a == null) {
            HMSLog.i("ActivityMgr", "mCurrentActivity is " + this.a);
            return null;
        }
        HMSLog.i("ActivityMgr", "mCurrentActivity.get() is " + this.a.get());
        return this.a.get();
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

    @Override
    public void onActivityCreated(Activity activity, Bundle bundle) {
        HMSLog.d("ActivityMgr", "onCreated:" + a(activity));
        this.a = new WeakReference<>(activity);
    }

    @Override
    public void onActivityDestroyed(Activity activity) {
    }

    @Override
    public void onActivityPaused(Activity activity) {
    }

    @Override
    public void onActivityResumed(Activity activity) {
        HMSLog.d("ActivityMgr", "onResumed:" + a(activity));
        this.a = new WeakReference<>(activity);
    }

    @Override
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override
    public void onActivityStarted(Activity activity) {
        HMSLog.d("ActivityMgr", "onStarted:" + a(activity));
        this.a = new WeakReference<>(activity);
    }

    @Override
    public void onActivityStopped(Activity activity) {
    }
}
