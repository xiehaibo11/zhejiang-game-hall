package com.kwad.sdk.core.f.a;

public final class g {
    private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> aqk;
    private android.content.ServiceConnection aql;
    private android.content.Context mContext;


    public g(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.aqk = r0
            com.kwad.sdk.core.f.a.g$1 r0 = new com.kwad.sdk.core.f.a.g$1
            r0.<init>(r2)
            r2.aql = r0
            r2.mContext = r3
            return
    }

    static java.util.concurrent.LinkedBlockingQueue a(com.kwad.sdk.core.f.a.g r0) {
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r0.aqk
            return r0
    }

    public final java.lang.String getOAID() {
            r5 = this;
            java.lang.String r0 = ""
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L48
            r1.<init>()     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "com.samsung.android.deviceidservice"
            java.lang.String r3 = "com.samsung.android.deviceidservice.DeviceIdService"
            r1.setClassName(r2, r3)     // Catch: java.lang.Exception -> L48
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L48
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L48
            r4 = 1
            boolean r1 = r2.bindService(r1, r3, r4)     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L48
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r5.aqk     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            com.kwad.sdk.core.f.b.e$a r2 = new com.kwad.sdk.core.f.b.e$a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            java.lang.String r0 = r2.getID()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            java.lang.String r2 = "getOAID oaid:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            r1.append(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L45
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L48
        L36:
            android.content.ServiceConnection r2 = r5.aql     // Catch: java.lang.Exception -> L48
            r1.unbindService(r2)     // Catch: java.lang.Exception -> L48
            goto L48
        L3c:
            r1 = move-exception
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L48
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L48
            r2.unbindService(r3)     // Catch: java.lang.Exception -> L48
            throw r1     // Catch: java.lang.Exception -> L48
        L45:
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L48
            goto L36
        L48:
            return r0
    }
}
