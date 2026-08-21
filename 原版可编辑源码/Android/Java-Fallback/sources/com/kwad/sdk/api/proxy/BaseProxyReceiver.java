package com.kwad.sdk.api.proxy;

public abstract class BaseProxyReceiver extends android.content.BroadcastReceiver {
    private com.kwad.sdk.api.proxy.IReceiverProxy mDelegate;

    public BaseProxyReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    protected abstract com.kwad.sdk.api.proxy.IReceiverProxy getDelegate(android.content.Context r1);

    @Override
    public void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            com.kwad.sdk.api.proxy.IReceiverProxy r0 = r1.mDelegate
            if (r0 != 0) goto Le
            android.content.Context r0 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r2)
            com.kwad.sdk.api.proxy.IReceiverProxy r0 = r1.getDelegate(r0)
            r1.mDelegate = r0
        Le:
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            if (r0 == 0) goto L1b
            r3.setExtrasClassLoader(r0)
        L1b:
            com.kwad.sdk.api.proxy.IReceiverProxy r0 = r1.mDelegate
            r0.onReceive(r2, r3)
            return
    }
}
