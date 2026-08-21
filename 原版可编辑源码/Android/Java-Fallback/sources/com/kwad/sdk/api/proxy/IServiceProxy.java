package com.kwad.sdk.api.proxy;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public interface IServiceProxy extends com.kwad.sdk.api.proxy.IComponentProxy {
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.os.IBinder onBind(android.app.Service r1, android.content.Intent r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void onCreate(android.app.Service r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void onDestroy(android.app.Service r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void onRebind(android.app.Service r1, android.content.Intent r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    int onStartCommand(android.app.Service r1, android.content.Intent r2, int r3, int r4);

    boolean onUnbind(android.app.Service r1, android.content.Intent r2);
}
