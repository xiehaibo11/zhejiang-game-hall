package com.tkay.core.common.b;

import android.app.Activity;
import android.os.Looper;
import com.tkay.core.common.f.aj;
import java.lang.ref.WeakReference;

public abstract class n {
    boolean isRefresh;
    protected WeakReference<Activity> mActivityRef;
    private com.tkay.core.common.f.d mTrackingInfo;
    private aj mUnitGroupInfo;

    public final void setTrackingInfo(com.tkay.core.common.f.d dVar) {
        this.mTrackingInfo = dVar;
    }

    public final com.tkay.core.common.f.d getTrackingInfo() {
        return this.mTrackingInfo;
    }

    public final aj getUnitGroupInfo() {
        return this.mUnitGroupInfo;
    }

    public final void setUnitGroupInfo(aj ajVar) {
        this.mUnitGroupInfo = ajVar;
    }

    public final void setRefresh(boolean z) {
        this.isRefresh = z;
    }

    public final boolean isRefresh() {
        return this.isRefresh;
    }

    public final void refreshActivityContext(Activity activity) {
        this.mActivityRef = new WeakReference<>(activity);
    }

    public final void postOnMainThread(Runnable runnable) {
        m.a().a(runnable);
    }

    public final void postOnMainThreadDelayed(Runnable runnable, long j) {
        m.a().a(runnable, j);
    }

    public final void runOnNetworkRequestThread(Runnable runnable) {
        if (Looper.getMainLooper() == Looper.myLooper()) {
            com.tkay.core.common.l.b.a.a().b(runnable);
        } else {
            runnable.run();
        }
    }
}
