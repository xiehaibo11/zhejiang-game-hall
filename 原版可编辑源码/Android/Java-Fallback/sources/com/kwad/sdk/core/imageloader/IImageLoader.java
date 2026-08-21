package com.kwad.sdk.core.imageloader;

public interface IImageLoader extends com.kwad.sdk.service.a.g {
    void clearMemory(android.content.Context r1);

    void load(android.content.Context r1, java.lang.String r2, android.widget.ImageView r3, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5);

    void load(android.content.Context r1, java.lang.String r2, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r3, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4);

    void load(android.widget.ImageView r1, java.lang.Object r2, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r3);

    void load(com.kwad.sdk.api.core.fragment.KsFragment r1, android.content.Context r2, java.lang.String r3, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5);

    void pause();

    void resume();
}
