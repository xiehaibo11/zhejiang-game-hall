package com.huawei.hms.support.common;

public final class ActivityMgr implements android.app.Application.ActivityLifecycleCallbacks {
    public static final com.huawei.hms.support.common.ActivityMgr INST = null;
    public java.lang.ref.WeakReference<android.app.Activity> a;

    static {
            com.huawei.hms.support.common.ActivityMgr r0 = new com.huawei.hms.support.common.ActivityMgr
            r0.<init>()
            com.huawei.hms.support.common.ActivityMgr.INST = r0
            return
    }

    public ActivityMgr() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.Object r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = "null"
            goto L29
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            r1 = 64
            r0.append(r1)
            int r2 = r2.hashCode()
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L29:
            return r2
    }

    public android.app.Activity getCurrentActivity() {
            r3 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r3.a
            java.lang.String r1 = "ActivityMgr"
            if (r0 != 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "mCurrentActivity is "
            r0.append(r2)
            java.lang.ref.WeakReference<android.app.Activity> r2 = r3.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 0
            return r0
        L1e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "mCurrentActivity.get() is "
            r0.append(r2)
            java.lang.ref.WeakReference<android.app.Activity> r2 = r3.a
            java.lang.Object r2 = r2.get()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.ref.WeakReference<android.app.Activity> r0 = r3.a
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
    }

    public void init(android.app.Application r3) {
            r2 = this;
            java.lang.String r0 = "ActivityMgr"
            java.lang.String r1 = "init"
            com.huawei.hms.support.log.HMSLog.d(r0, r1)
            if (r3 != 0) goto Lf
            java.lang.String r3 = "init failed for app is null"
            com.huawei.hms.support.log.HMSLog.w(r0, r3)
            return
        Lf:
            com.huawei.hms.support.common.ActivityMgr r0 = com.huawei.hms.support.common.ActivityMgr.INST
            r3.unregisterActivityLifecycleCallbacks(r0)
            com.huawei.hms.support.common.ActivityMgr r0 = com.huawei.hms.support.common.ActivityMgr.INST
            r3.registerActivityLifecycleCallbacks(r0)
            return
    }

    @Override
    public void onActivityCreated(android.app.Activity r2, android.os.Bundle r3) {
            r1 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "onCreated:"
            r3.append(r0)
            java.lang.String r0 = a(r2)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "ActivityMgr"
            com.huawei.hms.support.log.HMSLog.d(r0, r3)
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            r1.a = r3
            return
    }

    @Override
    public void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityResumed(android.app.Activity r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onResumed:"
            r0.append(r1)
            java.lang.String r1 = a(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ActivityMgr"
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.a = r0
            return
    }

    @Override
    public void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityStarted(android.app.Activity r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStarted:"
            r0.append(r1)
            java.lang.String r1 = a(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ActivityMgr"
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.a = r0
            return
    }

    @Override
    public void onActivityStopped(android.app.Activity r1) {
            r0 = this;
            return
    }
}
