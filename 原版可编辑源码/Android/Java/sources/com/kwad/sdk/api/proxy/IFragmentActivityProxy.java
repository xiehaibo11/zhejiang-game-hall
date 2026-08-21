package com.kwad.sdk.api.proxy;

import com.kwad.sdk.api.core.KsAdSdkDynamicApi;
import com.kwad.sdk.api.core.fragment.KsFragment;
import com.kwad.sdk.api.core.fragment.KsFragmentManager;

@KsAdSdkDynamicApi
public abstract class IFragmentActivityProxy extends IActivityProxy {
    private BaseProxyFragmentActivity mProxyFragmentActivity;

    @KsAdSdkDynamicApi
    public final KsFragmentManager getSupportFragmentManager() {
        return this.mProxyFragmentActivity.getSupportFragmentManager2();
    }

    public void onAttachFragment(KsFragment ksFragment) {
    }

    void setProxyFragmentActivity(BaseProxyFragmentActivity baseProxyFragmentActivity) {
        this.mProxyFragmentActivity = baseProxyFragmentActivity;
    }
}
