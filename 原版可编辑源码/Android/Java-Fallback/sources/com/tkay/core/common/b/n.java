package com.tkay.core.common.b;

public abstract class n {
    boolean isRefresh;
    protected java.lang.ref.WeakReference<android.app.Activity> mActivityRef;
    private com.tkay.core.common.f.d mTrackingInfo;
    private com.tkay.core.common.f.aj mUnitGroupInfo;

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.tkay.core.common.f.d getTrackingInfo() {
            r1 = this;
            com.tkay.core.common.f.d r0 = r1.mTrackingInfo
            return r0
    }

    public final com.tkay.core.common.f.aj getUnitGroupInfo() {
            r1 = this;
            com.tkay.core.common.f.aj r0 = r1.mUnitGroupInfo
            return r0
    }

    public final boolean isRefresh() {
            r1 = this;
            boolean r0 = r1.isRefresh
            return r0
    }

    public final void postOnMainThread(java.lang.Runnable r2) {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r2)
            return
    }

    public final void postOnMainThreadDelayed(java.lang.Runnable r2, long r3) {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r2, r3)
            return
    }

    public final void refreshActivityContext(android.app.Activity r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.mActivityRef = r0
            return
    }

    public final void runOnNetworkRequestThread(java.lang.Runnable r3) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L12
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r0.b(r3)
            return
        L12:
            r3.run()
            return
    }

    public final void setRefresh(boolean r1) {
            r0 = this;
            r0.isRefresh = r1
            return
    }

    public final void setTrackingInfo(com.tkay.core.common.f.d r1) {
            r0 = this;
            r0.mTrackingInfo = r1
            return
    }

    public final void setUnitGroupInfo(com.tkay.core.common.f.aj r1) {
            r0 = this;
            r0.mUnitGroupInfo = r1
            return
    }
}
