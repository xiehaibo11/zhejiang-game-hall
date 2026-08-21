package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsInnerAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface KsInnerAdInteractionListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked(com.kwad.sdk.api.KsInnerAd r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShow(com.kwad.sdk.api.KsInnerAd r1);
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface KsInnerAdType {
        public static final int AGGREGATION = 1;
        public static final int REFLOW = 2;
        public static final int UNKNOWN = 0;
    }

    int getType();
}
