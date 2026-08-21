package com.kwad.sdk.api.proxy.app;

import android.content.Context;
import com.kwad.sdk.api.loader.Loader;
import com.kwad.sdk.api.proxy.BaseProxyActivity;
import com.kwad.sdk.api.proxy.IActivityProxy;

public class AdWebViewActivity extends BaseProxyActivity {
    @Override
    public IActivityProxy getDelegate(Context context) {
        return (IActivityProxy) Loader.get().newComponentProxy(context, AdWebViewActivity.class, this);
    }
}
