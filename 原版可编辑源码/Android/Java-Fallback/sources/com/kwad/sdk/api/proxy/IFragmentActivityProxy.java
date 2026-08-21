package com.kwad.sdk.api.proxy;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public abstract class IFragmentActivityProxy extends com.kwad.sdk.api.proxy.IActivityProxy {
    private com.kwad.sdk.api.proxy.BaseProxyFragmentActivity mProxyFragmentActivity;

    public IFragmentActivityProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final com.kwad.sdk.api.core.fragment.KsFragmentManager getSupportFragmentManager() {
            r1 = this;
            com.kwad.sdk.api.proxy.BaseProxyFragmentActivity r0 = r1.mProxyFragmentActivity
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r0.getSupportFragmentManager2()
            return r0
    }

    public void onAttachFragment(com.kwad.sdk.api.core.fragment.KsFragment r1) {
            r0 = this;
            return
    }

    void setProxyFragmentActivity(com.kwad.sdk.api.proxy.BaseProxyFragmentActivity r1) {
            r0 = this;
            r0.mProxyFragmentActivity = r1
            return
    }
}
