package com.kwad.components.core.internal.api;

public class VideoPlayConfigImpl implements com.kwad.sdk.api.KsVideoPlayConfig {
    private static final long serialVersionUID = -7203854889686049813L;
    private boolean showLandscape;
    private java.lang.String showScene;
    private boolean skipThirtySecond;
    public boolean videoSoundEnable;

    public VideoPlayConfigImpl() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.videoSoundEnable = r0
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.KsVideoPlayConfig> r0 = com.kwad.sdk.api.KsVideoPlayConfig.class
            java.lang.Class<com.kwad.components.core.internal.api.VideoPlayConfigImpl> r1 = com.kwad.components.core.internal.api.VideoPlayConfigImpl.class
            com.kwad.sdk.service.b.b(r0, r1)
            return
    }

    @Override
    public java.lang.String getShowScene() {
            r1 = this;
            java.lang.String r0 = r1.showScene
            return r0
    }

    @Override
    public boolean isShowLandscape() {
            r1 = this;
            boolean r0 = r1.showLandscape
            return r0
    }

    @Override
    public boolean isSkipThirtySecond() {
            r1 = this;
            boolean r0 = r1.skipThirtySecond
            return r0
    }

    @Override
    public boolean isVideoSoundEnable() {
            r1 = this;
            boolean r0 = r1.videoSoundEnable
            return r0
    }

    @Override
    public void setShowLandscape(boolean r1) {
            r0 = this;
            r0.showLandscape = r1
            return
    }

    @Override
    public void setShowScene(java.lang.String r1) {
            r0 = this;
            r0.showScene = r1
            return
    }

    @Override
    public void setSkipThirtySecond(boolean r1) {
            r0 = this;
            r0.skipThirtySecond = r1
            return
    }

    @Override
    public void setVideoSoundEnable(boolean r1) {
            r0 = this;
            r0.videoSoundEnable = r1
            return
    }
}
