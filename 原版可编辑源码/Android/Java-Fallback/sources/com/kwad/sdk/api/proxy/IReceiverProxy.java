package com.kwad.sdk.api.proxy;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public interface IReceiverProxy extends com.kwad.sdk.api.proxy.IComponentProxy {
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void onReceive(android.content.Context r1, android.content.Intent r2);
}
