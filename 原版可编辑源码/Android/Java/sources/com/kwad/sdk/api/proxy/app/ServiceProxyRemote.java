package com.kwad.sdk.api.proxy.app;

import android.content.Context;
import com.kwad.sdk.api.loader.Loader;
import com.kwad.sdk.api.proxy.BaseProxyService;
import com.kwad.sdk.api.proxy.IServiceProxy;

public class ServiceProxyRemote extends BaseProxyService {
    @Override
    public IServiceProxy getDelegate(Context context) {
        return (IServiceProxy) Loader.get().newComponentProxy(context, ServiceProxyRemote.class, this);
    }
}
