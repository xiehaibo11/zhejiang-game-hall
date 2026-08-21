package com.kwad.sdk.core.f.a;

public final class a {
    private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> aqk;
    private android.content.ServiceConnection aql;
    private android.content.Context mContext;


    public a(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.aqk = r0
            com.kwad.sdk.core.f.a.a$1 r0 = new com.kwad.sdk.core.f.a.a$1
            r0.<init>(r2)
            r2.aql = r0
            r2.mContext = r3
            return
    }

    static java.util.concurrent.LinkedBlockingQueue a(com.kwad.sdk.core.f.a.a r0) {
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r0.aqk
            return r0
    }

    public final java.lang.String getOAID() {
            r5 = this;
            java.lang.String r0 = ""
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L52
            r1.<init>()     // Catch: java.lang.Exception -> L52
            java.lang.String r2 = "com.asus.msa.action.ACCESS_DID"
            r1.setAction(r2)     // Catch: java.lang.Exception -> L52
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = "com.asus.msa.SupplementaryDID"
            java.lang.String r4 = "com.asus.msa.SupplementaryDID.SupplementaryDIDService"
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> L52
            r1.setComponent(r2)     // Catch: java.lang.Exception -> L52
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L52
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L52
            r4 = 1
            boolean r1 = r2.bindService(r1, r3, r4)     // Catch: java.lang.Exception -> L52
            if (r1 == 0) goto L52
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r5.aqk     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            com.kwad.sdk.core.f.b.a$a r2 = new com.kwad.sdk.core.f.b.a$a     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            java.lang.String r0 = r2.getID()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            java.lang.String r2 = "getOAID oaid:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            r1.append(r0)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4f
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L52
        L40:
            android.content.ServiceConnection r2 = r5.aql     // Catch: java.lang.Exception -> L52
            r1.unbindService(r2)     // Catch: java.lang.Exception -> L52
            goto L52
        L46:
            r1 = move-exception
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L52
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L52
            r2.unbindService(r3)     // Catch: java.lang.Exception -> L52
            throw r1     // Catch: java.lang.Exception -> L52
        L4f:
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L52
            goto L40
        L52:
            return r0
    }
}
