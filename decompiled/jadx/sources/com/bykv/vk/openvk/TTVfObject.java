package com.bykv.vk.openvk;

/* JADX INFO: loaded from: classes.dex */
public interface TTVfObject extends TTNtObject {

    public interface CustomizeVideo {
        String getVideoUrl();

        void reportVideoAutoStart();

        void reportVideoBreak(long j);

        void reportVideoContinue(long j);

        void reportVideoError(long j, int i, int i2);

        void reportVideoFinish();

        void reportVideoPause(long j);

        void reportVideoStart();

        void reportVideoStartError(int i, int i2);
    }

    public interface VideoRewardListener {
        void onFeedRewardCountDown(int i);
    }

    public interface VideoVfListener {
        void onProgressUpdate(long j, long j2);

        void onVideoComplete(TTVfObject tTVfObject);

        void onVideoContinuePlay(TTVfObject tTVfObject);

        void onVideoError(int i, int i2);

        void onVideoLoad(TTVfObject tTVfObject);

        void onVideoPaused(TTVfObject tTVfObject);

        void onVideoStartPlay(TTVfObject tTVfObject);
    }

    int getAdViewHeight();

    int getAdViewWidth();

    CustomizeVideo getCustomVideo();

    double getVideoDuration();

    void setVideoListener(VideoVfListener videoVfListener);

    void setVideoRewardListener(VideoRewardListener videoRewardListener);
}
