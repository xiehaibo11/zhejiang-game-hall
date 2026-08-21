package com.kwad.sdk.core.f.a;

public final class j {
    private android.content.ServiceConnection aql;
    private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> aqn;
    public android.content.Context mContext;


    public j(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.aqn = r0
            com.kwad.sdk.core.f.a.j$1 r0 = new com.kwad.sdk.core.f.a.j$1
            r0.<init>(r2)
            r2.aql = r0
            r2.mContext = r3
            return
    }

    static java.util.concurrent.LinkedBlockingQueue a(com.kwad.sdk.core.f.a.j r0) {
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r0.aqn
            return r0
    }

    public final java.lang.String getOAID() {
            r5 = this;
            java.lang.String r0 = ""
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L62
            r1.<init>()     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = "com.mdid.msa"
            java.lang.String r3 = "com.mdid.msa.service.MsaIdService"
            r1.setClassName(r2, r3)     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = "com.bun.msa.action.bindto.service"
            r1.setAction(r2)     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = "com.bun.msa.param.pkgname"
            android.content.Context r3 = r5.mContext     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L62
            r1.putExtra(r2, r3)     // Catch: java.lang.Exception -> L62
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L62
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L62
            r4 = 1
            boolean r1 = r2.bindService(r1, r3, r4)     // Catch: java.lang.Exception -> L62
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = "getOAID isBind="
            r2.<init>(r3)     // Catch: java.lang.Exception -> L62
            r2.append(r1)     // Catch: java.lang.Exception -> L62
            if (r1 == 0) goto L62
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r5.aqn     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            com.kwad.sdk.core.f.b.f$a r2 = new com.kwad.sdk.core.f.b.f$a     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            java.lang.String r0 = r2.getOAID()     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            java.lang.String r2 = "getOAID oaid:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            r1.append(r0)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5f
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L62
        L50:
            android.content.ServiceConnection r2 = r5.aql     // Catch: java.lang.Exception -> L62
            r1.unbindService(r2)     // Catch: java.lang.Exception -> L62
            goto L62
        L56:
            r1 = move-exception
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L62
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L62
            r2.unbindService(r3)     // Catch: java.lang.Exception -> L62
            throw r1     // Catch: java.lang.Exception -> L62
        L5f:
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L62
            goto L50
        L62:
            return r0
    }
}
