package com.kwad.components.offline.api.core.video;

public interface IKsMediaPlayerView {

    public interface VideoViewClickListener {
        void onClickRootView();

        void onClickVideoView();
    }

    void adaptVideoSize(int r1, int r2);

    void fixWidth(boolean r1);

    int getTextureViewGravity();

    void setAd(boolean r1);

    void setClickListener(com.kwad.components.offline.api.core.video.IKsMediaPlayerView.VideoViewClickListener r1);

    void setForce(boolean r1);

    void setHorizontalVideo(boolean r1);

    void setMediaPlayer(com.kwad.components.offline.api.core.video.IKsMediaPlayer r1);

    void setRadius(float r1);

    void updateTextureViewGravity(int r1);
}
