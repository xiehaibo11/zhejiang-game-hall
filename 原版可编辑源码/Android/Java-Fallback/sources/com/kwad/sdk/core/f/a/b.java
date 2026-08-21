package com.kwad.sdk.core.f.a;

public final class b {
    private android.content.ServiceConnection aql;
    private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> aqn;
    private android.content.Context mContext;


    public b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.aqn = r0
            com.kwad.sdk.core.f.a.b$1 r0 = new com.kwad.sdk.core.f.a.b$1
            r0.<init>(r2)
            r2.aql = r0
            r2.mContext = r3
            return
    }

    static java.util.concurrent.LinkedBlockingQueue a(com.kwad.sdk.core.f.a.b r0) {
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r0.aqn
            return r0
    }

    public final java.lang.String getOAID() {
            r5 = this;
            java.lang.String r0 = ""
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "com.huawei.hwid"
            r1.setPackage(r2)     // Catch: java.lang.Exception -> L54
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L54
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L54
            r4 = 1
            boolean r1 = r2.bindService(r1, r3, r4)     // Catch: java.lang.Exception -> L54
            if (r1 == 0) goto L54
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r5.aqn     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            com.kwad.sdk.core.f.b.b$a r2 = new com.kwad.sdk.core.f.b.b$a     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            java.lang.String r0 = r2.BM()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            boolean r1 = r2.BN()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            java.lang.String r3 = "getOAID oaid:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            r2.append(r0)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            java.lang.String r3 = "--boos:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            r2.append(r1)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L51
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L54
        L42:
            android.content.ServiceConnection r2 = r5.aql     // Catch: java.lang.Exception -> L54
            r1.unbindService(r2)     // Catch: java.lang.Exception -> L54
            goto L54
        L48:
            r1 = move-exception
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L54
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L54
            r2.unbindService(r3)     // Catch: java.lang.Exception -> L54
            throw r1     // Catch: java.lang.Exception -> L54
        L51:
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L54
            goto L42
        L54:
            return r0
    }
}
