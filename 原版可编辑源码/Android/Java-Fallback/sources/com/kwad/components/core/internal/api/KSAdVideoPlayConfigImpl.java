package com.kwad.components.core.internal.api;

public class KSAdVideoPlayConfigImpl implements com.kwad.sdk.api.KsAdVideoPlayConfig, java.io.Serializable {
    private static final long serialVersionUID = -154151744722615768L;
    public boolean dataFlowAutoStart;
    private int dataFlowAutoStartValue;
    public boolean hasNoCache;
    public int videoAutoPlayType;
    public boolean videoSoundEnable;
    private int videoSoundValue;

    public KSAdVideoPlayConfigImpl() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.videoSoundValue = r0
            r1.dataFlowAutoStartValue = r0
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.KsAdVideoPlayConfig> r0 = com.kwad.sdk.api.KsAdVideoPlayConfig.class
            java.lang.Class<com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl> r1 = com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl.class
            com.kwad.sdk.service.b.b(r0, r1)
            return
    }

    public int getDataFlowAutoStartValue() {
            r1 = this;
            int r0 = r1.dataFlowAutoStartValue
            return r0
    }

    @Override
    public int getVideoAutoPlayType() {
            r1 = this;
            int r0 = r1.videoAutoPlayType
            return r0
    }

    public int getVideoSoundValue() {
            r1 = this;
            int r0 = r1.videoSoundValue
            return r0
    }

    @Override
    public boolean isDataFlowAutoStart() {
            r1 = this;
            boolean r0 = r1.dataFlowAutoStart
            return r0
    }

    @Override
    public boolean isNoCache() {
            r1 = this;
            boolean r0 = r1.hasNoCache
            return r0
    }

    @Override
    public boolean isVideoSoundEnable() {
            r1 = this;
            boolean r0 = r1.videoSoundEnable
            return r0
    }

    @Override
    public void setDataFlowAutoStart(boolean r1) {
            r0 = this;
            r0.dataFlowAutoStart = r1
            r1 = 1
            r0.dataFlowAutoStartValue = r1
            r1 = 0
            r0.videoAutoPlayType = r1
            return
    }

    @Override
    public void setNoCache() {
            r1 = this;
            r0 = 1
            r1.hasNoCache = r0
            return
    }

    @Override
    public void setVideoAutoPlayType(int r1) {
            r0 = this;
            r0.videoAutoPlayType = r1
            r1 = 0
            r0.dataFlowAutoStartValue = r1
            return
    }

    @Override
    public void setVideoSoundEnable(boolean r1) {
            r0 = this;
            r0.videoSoundEnable = r1
            r1 = 1
            r0.videoSoundValue = r1
            return
    }
}
