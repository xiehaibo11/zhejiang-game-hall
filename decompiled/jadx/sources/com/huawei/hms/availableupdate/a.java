package com.huawei.hms.availableupdate;

import android.app.Activity;
import com.huawei.hms.support.log.HMSLog;
import java.lang.ref.WeakReference;

/* JADX INFO: compiled from: UpdateAdapterMgr.java */
/* JADX INFO: loaded from: classes.dex */
public class a {
    public static final a b = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public WeakReference<Activity> f2015a;

    public boolean a(Activity activity) {
        HMSLog.i("UpdateAdapterMgr", "onActivityCreate");
        if (a() == null) {
            this.f2015a = new WeakReference<>(activity);
            return true;
        }
        activity.finish();
        HMSLog.i("UpdateAdapterMgr", "finish one");
        return false;
    }

    public void b(Activity activity) {
        HMSLog.i("UpdateAdapterMgr", "onActivityDestroy");
        Activity activityA = a();
        if (activity == null || !activity.equals(activityA)) {
            return;
        }
        HMSLog.i("UpdateAdapterMgr", "reset");
        this.f2015a = null;
    }

    public final Activity a() {
        WeakReference<Activity> weakReference = this.f2015a;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }
}
