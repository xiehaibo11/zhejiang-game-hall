package com.kwad.sdk.api.proxy;

public abstract class BaseProxyService extends android.app.Service {
    private com.kwad.sdk.api.proxy.IServiceProxy mDelegate;
    private android.content.Context mNewBase;

    public BaseProxyService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r2) {
            r1 = this;
            r1.mNewBase = r2
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.getDelegate(r2)
            r1.mDelegate = r0
            android.content.Context r2 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r2)
            super.attachBaseContext(r2)
            return
    }

    protected abstract com.kwad.sdk.api.proxy.IServiceProxy getDelegate(android.content.Context r1);

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            if (r0 == 0) goto Ld
            r2.setExtrasClassLoader(r0)
        Ld:
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.mDelegate
            android.os.IBinder r2 = r0.onBind(r1, r2)
            return r2
    }

    @Override
    public void onCreate() {
            r1 = this;
            super.onCreate()
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.mDelegate
            r0.onCreate(r1)
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.mDelegate
            r0.onDestroy(r1)
            android.content.Context r0 = r1.mNewBase
            com.kwad.sdk.api.loader.Wrapper.onDestroy(r0)
            return
    }

    @Override
    public void onRebind(android.content.Intent r2) {
            r1 = this;
            super.onRebind(r2)
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            if (r0 == 0) goto L10
            r2.setExtrasClassLoader(r0)
        L10:
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.mDelegate
            r0.onRebind(r1, r2)
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r2, int r3, int r4) {
            r1 = this;
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            if (r0 == 0) goto Lf
            if (r2 == 0) goto Lf
            r2.setExtrasClassLoader(r0)
        Lf:
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.mDelegate
            int r2 = r0.onStartCommand(r1, r2, r3, r4)
            return r2
    }

    @Override
    public boolean onUnbind(android.content.Intent r2) {
            r1 = this;
            com.kwad.sdk.api.proxy.IServiceProxy r0 = r1.mDelegate
            boolean r2 = r0.onUnbind(r1, r2)
            return r2
    }

    public int superOnStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            int r1 = super.onStartCommand(r1, r2, r3)
            return r1
    }

    public boolean superOnUnbind(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.onUnbind(r1)
            return r1
    }
}
