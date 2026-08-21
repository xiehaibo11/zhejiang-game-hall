package com.huawei.updatesdk.service.otaupdate;

public class d {
    private static final java.lang.Object b = null;
    private static com.huawei.updatesdk.service.otaupdate.d c;
    private com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack a;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.updatesdk.service.otaupdate.d.b = r0
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.updatesdk.service.otaupdate.d a() {
            java.lang.Object r0 = com.huawei.updatesdk.service.otaupdate.d.b
            monitor-enter(r0)
            com.huawei.updatesdk.service.otaupdate.d r1 = com.huawei.updatesdk.service.otaupdate.d.c     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.updatesdk.service.otaupdate.d r1 = new com.huawei.updatesdk.service.otaupdate.d     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.updatesdk.service.otaupdate.d.c = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.updatesdk.service.otaupdate.d r1 = com.huawei.updatesdk.service.otaupdate.d.c     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public void a(int r2) {
            r1 = this;
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r1.a
            if (r0 == 0) goto L7
            r0.onMarketStoreError(r2)
        L7:
            return
    }

    public void a(android.content.Intent r2) {
            r1 = this;
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r1.a
            if (r0 == 0) goto L7
            r0.onMarketInstallInfo(r2)
        L7:
            return
    }

    public void a(com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void b(android.content.Intent r2) {
            r1 = this;
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r1.a
            if (r0 == 0) goto L7
            r0.onUpdateInfo(r2)
        L7:
            return
    }
}
