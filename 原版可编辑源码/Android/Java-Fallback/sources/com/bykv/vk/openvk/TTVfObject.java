package com.bykv.vk.openvk;

public interface TTVfObject extends com.bykv.vk.openvk.TTNtObject {

    public interface CustomizeVideo {
        java.lang.String getVideoUrl();

        void reportVideoAutoStart();

        void reportVideoBreak(long r1);

        void reportVideoContinue(long r1);

        void reportVideoError(long r1, int r3, int r4);

        void reportVideoFinish();

        void reportVideoPause(long r1);

        void reportVideoStart();

        void reportVideoStartError(int r1, int r2);
    }

    public interface VideoRewardListener {
        void onFeedRewardCountDown(int r1);
    }

    public interface VideoVfListener {
        void onProgressUpdate(long r1, long r3);

        void onVideoComplete(com.bykv.vk.openvk.TTVfObject r1);

        void onVideoContinuePlay(com.bykv.vk.openvk.TTVfObject r1);

        void onVideoError(int r1, int r2);

        void onVideoLoad(com.bykv.vk.openvk.TTVfObject r1);

        void onVideoPaused(com.bykv.vk.openvk.TTVfObject r1);

        void onVideoStartPlay(com.bykv.vk.openvk.TTVfObject r1);
    }

    int getAdViewHeight();

    int getAdViewWidth();

    com.bykv.vk.openvk.TTVfObject.CustomizeVideo getCustomVideo();

    double getVideoDuration();

    void setVideoListener(com.bykv.vk.openvk.TTVfObject.VideoVfListener r1);

    void setVideoRewardListener(com.bykv.vk.openvk.TTVfObject.VideoRewardListener r1);
}
