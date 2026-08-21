package com.kwad.sdk.l;

public abstract class a implements com.kwad.sdk.api.proxy.IServiceProxy {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.os.IBinder onBind(android.app.Service r1, android.content.Intent r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate(android.app.Service r1) {
            r0 = this;
            return
    }

    @Override
    public void onDestroy(android.app.Service r1) {
            r0 = this;
            return
    }

    @Override
    public void onRebind(android.app.Service r1, android.content.Intent r2) {
            r0 = this;
            return
    }

    @Override
    public int onStartCommand(android.app.Service r2, android.content.Intent r3, int r4, int r5) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.sdk.api.proxy.BaseProxyService
            if (r0 == 0) goto Lb
            com.kwad.sdk.api.proxy.BaseProxyService r2 = (com.kwad.sdk.api.proxy.BaseProxyService) r2
            int r2 = r2.superOnStartCommand(r3, r4, r5)
            return r2
        Lb:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r2 = " must be AbstractServiceProxy"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
    }

    @Override
    public boolean onUnbind(android.app.Service r2, android.content.Intent r3) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.sdk.api.proxy.BaseProxyService
            if (r0 == 0) goto Lb
            com.kwad.sdk.api.proxy.BaseProxyService r2 = (com.kwad.sdk.api.proxy.BaseProxyService) r2
            boolean r2 = r2.superOnUnbind(r3)
            return r2
        Lb:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " must be AbstractServiceProxy"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }
}
