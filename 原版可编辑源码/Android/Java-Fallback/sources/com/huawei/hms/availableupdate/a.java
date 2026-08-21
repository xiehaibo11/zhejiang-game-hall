package com.huawei.hms.availableupdate;

public class a {
    public static final com.huawei.hms.availableupdate.a b = null;
    public java.lang.ref.WeakReference<android.app.Activity> a;

    static {
            com.huawei.hms.availableupdate.a r0 = new com.huawei.hms.availableupdate.a
            r0.<init>()
            com.huawei.hms.availableupdate.a.b = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public final android.app.Activity a() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
    }

    public boolean a(android.app.Activity r3) {
            r2 = this;
            java.lang.String r0 = "UpdateAdapterMgr"
            java.lang.String r1 = "onActivityCreate"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.app.Activity r1 = r2.a()
            if (r1 == 0) goto L17
            r3.finish()
            java.lang.String r3 = "finish one"
            com.huawei.hms.support.log.HMSLog.i(r0, r3)
            r3 = 0
            return r3
        L17:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.a = r0
            r3 = 1
            return r3
    }

    public void b(android.app.Activity r3) {
            r2 = this;
            java.lang.String r0 = "UpdateAdapterMgr"
            java.lang.String r1 = "onActivityDestroy"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.app.Activity r1 = r2.a()
            if (r3 == 0) goto L1b
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L1b
            java.lang.String r3 = "reset"
            com.huawei.hms.support.log.HMSLog.i(r0, r3)
            r3 = 0
            r2.a = r3
        L1b:
            return
    }
}
