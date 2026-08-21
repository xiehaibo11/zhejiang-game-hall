package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public interface IProgressRemoteView {
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.widget.RemoteViews build();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setControlBtnPaused(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setIcon(int r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setIcon(android.graphics.Bitmap r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setName(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setPercentNum(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setProgress(int r1, int r2, boolean r3);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setSize(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setStatus(java.lang.String r1);
}
