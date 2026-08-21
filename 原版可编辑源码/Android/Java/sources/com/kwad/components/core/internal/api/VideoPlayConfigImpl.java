package com.kwad.components.core.internal.api;

import com.kwad.sdk.api.KsVideoPlayConfig;

public class VideoPlayConfigImpl implements KsVideoPlayConfig {
    private static final long serialVersionUID = -7203854889686049813L;
    private boolean showLandscape;
    private String showScene;
    private boolean skipThirtySecond;
    public boolean videoSoundEnable = true;

    public static void register() {
        com.kwad.sdk.service.b.b(KsVideoPlayConfig.class, VideoPlayConfigImpl.class);
    }

    @Override
    public String getShowScene() {
        return this.showScene;
    }

    @Override
    public boolean isShowLandscape() {
        return this.showLandscape;
    }

    @Override
    public boolean isSkipThirtySecond() {
        return this.skipThirtySecond;
    }

    @Override
    public boolean isVideoSoundEnable() {
        return this.videoSoundEnable;
    }

    @Override
    public void setShowLandscape(boolean z) {
        this.showLandscape = z;
    }

    @Override
    public void setShowScene(String str) {
        this.showScene = str;
    }

    @Override
    public void setSkipThirtySecond(boolean z) {
        this.skipThirtySecond = z;
    }

    @Override
    public void setVideoSoundEnable(boolean z) {
        this.videoSoundEnable = z;
    }
}
