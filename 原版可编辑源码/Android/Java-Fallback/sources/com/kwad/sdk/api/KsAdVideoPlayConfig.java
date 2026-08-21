package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsAdVideoPlayConfig {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static class Builder {
        com.kwad.sdk.api.KsAdVideoPlayConfig config;
        private boolean dataFlowAutoStart;
        private boolean isNoCache;
        private boolean videoSoundEnable;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.isNoCache = r0
                com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
                java.lang.Class<com.kwad.sdk.api.KsAdVideoPlayConfig> r1 = com.kwad.sdk.api.KsAdVideoPlayConfig.class
                java.lang.Object r0 = r0.newInstance(r1)
                com.kwad.sdk.api.KsAdVideoPlayConfig r0 = (com.kwad.sdk.api.KsAdVideoPlayConfig) r0
                r2.config = r0
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsAdVideoPlayConfig build() {
                r1 = this;
                com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r1.config
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        @java.lang.Deprecated
        public com.kwad.sdk.api.KsAdVideoPlayConfig.Builder dataFlowAutoStart(boolean r2) {
                r1 = this;
                com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r1.config
                r0.setDataFlowAutoStart(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsAdVideoPlayConfig.Builder noCache() {
                r1 = this;
                com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r1.config
                r0.setNoCache()
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsAdVideoPlayConfig.Builder videoAutoPlayType(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r1.config
                r0.setVideoAutoPlayType(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsAdVideoPlayConfig.Builder videoSoundEnable(boolean r2) {
                r1 = this;
                com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r1.config
                r0.setVideoSoundEnable(r2)
                return r1
        }
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface VideoAutoPlayType {
        public static final int AUTO_PLAY = 1;
        public static final int AUTO_PLAY_WIFI = 2;
        public static final int NO_AUTO_PLAY = 3;
        public static final int UNKNOWN = 0;
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getVideoAutoPlayType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isDataFlowAutoStart();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isNoCache();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isVideoSoundEnable();

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setDataFlowAutoStart(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setNoCache();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setVideoAutoPlayType(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setVideoSoundEnable(boolean r1);
}
