package com.huawei.hms.activity.internal;

public class ForegroundBusResponseMgr {
    private static final com.huawei.hms.activity.internal.ForegroundBusResponseMgr instance = null;
    private final java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> callbackMap;

    static {
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = new com.huawei.hms.activity.internal.ForegroundBusResponseMgr
            r0.<init>()
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr.instance = r0
            return
    }

    public ForegroundBusResponseMgr() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.callbackMap = r0
            return
    }

    public static com.huawei.hms.activity.internal.ForegroundBusResponseMgr getInstance() {
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = com.huawei.hms.activity.internal.ForegroundBusResponseMgr.instance
            return r0
    }

    public com.huawei.hms.activity.internal.BusResponseCallback get(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r0 = r2.callbackMap
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r1 = r2.callbackMap     // Catch: java.lang.Throwable -> L15
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L15
            com.huawei.hms.activity.internal.BusResponseCallback r3 = (com.huawei.hms.activity.internal.BusResponseCallback) r3     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return r3
        L15:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r3
    }

    public void registerObserver(java.lang.String r3, com.huawei.hms.activity.internal.BusResponseCallback r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1e
            if (r4 != 0) goto L9
            goto L1e
        L9:
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r0 = r2.callbackMap
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r1 = r2.callbackMap     // Catch: java.lang.Throwable -> L1b
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r1 = r2.callbackMap     // Catch: java.lang.Throwable -> L1b
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r3
        L1e:
            return
    }

    public void unRegisterObserver(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r0 = r2.callbackMap
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.hms.activity.internal.BusResponseCallback> r1 = r2.callbackMap     // Catch: java.lang.Throwable -> L11
            r1.remove(r3)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r3
    }
}
