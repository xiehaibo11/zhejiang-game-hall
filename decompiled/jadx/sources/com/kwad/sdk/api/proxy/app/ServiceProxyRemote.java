package com.kwad.sdk.api.proxy.app;

import android.content.Context;
import com.kwad.sdk.api.loader.Loader;
import com.kwad.sdk.api.proxy.BaseProxyService;
import com.kwad.sdk.api.proxy.IServiceProxy;

/* JADX INFO: loaded from: classes2.dex */
public class ServiceProxyRemote extends BaseProxyService {
    @Override // com.kwad.sdk.api.proxy.BaseProxyService
    public IServiceProxy getDelegate(Context context) {
        return (IServiceProxy) Loader.get().newComponentProxy(context, ServiceProxyRemote.class, this);
    }
}
