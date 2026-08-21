package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsVideoPlayConfig extends java.io.Serializable {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static class Builder {
        private boolean showLandscape;
        private java.lang.String showScene;
        private boolean skipLongTime;
        private boolean videoSoundEnable;

        public Builder() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.videoSoundEnable = r0
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsVideoPlayConfig build() {
                r2 = this;
                com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
                java.lang.Class<com.kwad.sdk.api.KsVideoPlayConfig> r1 = com.kwad.sdk.api.KsVideoPlayConfig.class
                java.lang.Object r0 = r0.newInstance(r1)
                com.kwad.sdk.api.KsVideoPlayConfig r0 = (com.kwad.sdk.api.KsVideoPlayConfig) r0
                java.lang.String r1 = r2.showScene
                r0.setShowScene(r1)
                boolean r1 = r2.showLandscape
                r0.setShowLandscape(r1)
                boolean r1 = r2.skipLongTime
                r0.setSkipThirtySecond(r1)
                boolean r1 = r2.videoSoundEnable
                r0.setVideoSoundEnable(r1)
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsVideoPlayConfig.Builder showLandscape(boolean r1) {
                r0 = this;
                r0.showLandscape = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsVideoPlayConfig.Builder showScene(java.lang.String r1) {
                r0 = this;
                r0.showScene = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsVideoPlayConfig.Builder skipThirtySecond(boolean r1) {
                r0 = this;
                r0.skipLongTime = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsVideoPlayConfig.Builder videoSoundEnable(boolean r1) {
                r0 = this;
                r0.videoSoundEnable = r1
                return r0
        }
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getShowScene();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isShowLandscape();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isSkipThirtySecond();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isVideoSoundEnable();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setShowLandscape(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setShowScene(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setSkipThirtySecond(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setVideoSoundEnable(boolean r1);
}
