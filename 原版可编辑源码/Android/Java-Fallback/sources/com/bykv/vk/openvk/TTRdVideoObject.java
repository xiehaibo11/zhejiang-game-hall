package com.bykv.vk.openvk;

public interface TTRdVideoObject extends com.bykv.vk.openvk.TTClientBidding {
    public static final java.lang.String REWARD_EXTRA_KEY_ERROR_CODE = "reward_extra_key_error_code";
    public static final java.lang.String REWARD_EXTRA_KEY_ERROR_MSG = "reward_extra_key_error_msg";
    public static final java.lang.String REWARD_EXTRA_KEY_HAS_VIDEO_COMPLETE_REWARD = "reward_extra_key_has_video_complete_reward";
    public static final java.lang.String REWARD_EXTRA_KEY_REWARD_AMOUNT = "reward_extra_key_reward_amount";
    public static final java.lang.String REWARD_EXTRA_KEY_REWARD_NAME = "reward_extra_key_reward_name";
    public static final java.lang.String REWARD_EXTRA_KEY_REWARD_PROPOSE = "reward_extra_key_reward_propose";
    public static final int REWARD_TYPE_CLICK_LANDING = 4;
    public static final int REWARD_TYPE_DEFAULT = 0;
    public static final int REWARD_TYPE_INTERACT = 1;
    public static final int REWARD_TYPE_PLAYABLE = 3;
    public static final int REWARD_TYPE_VIDEO_COMPLETE = 2;

    public interface RdVrInteractionListener {
        void onClose();

        @java.lang.Deprecated
        void onRdVerify(boolean r1, int r2, java.lang.String r3, int r4, java.lang.String r5);

        void onRewardArrived(boolean r1, int r2, android.os.Bundle r3);

        void onShow();

        void onSkippedVideo();

        void onVideoBarClick();

        void onVideoComplete();

        void onVideoError();
    }

    public interface RewardAdPlayAgainController {
        public static final java.lang.String KEY_PLAY_AGAIN_ALLOW = "play_again_allow";
        public static final java.lang.String KEY_PLAY_AGAIN_REWARD_AMOUNT = "play_again_reward_amount";
        public static final java.lang.String KEY_PLAY_AGAIN_REWARD_NAME = "play_again_reward_name";

        public interface Callback {
            void onConditionReturn(android.os.Bundle r1);
        }

        void getPlayAgainCondition(int r1, com.bykv.vk.openvk.TTRdVideoObject.RewardAdPlayAgainController.Callback r2);
    }

    long getExpirationTimestamp();

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    int getRdVideoVrType();

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setRdVrInteractionListener(com.bykv.vk.openvk.TTRdVideoObject.RdVrInteractionListener r1);

    void setRewardPlayAgainController(com.bykv.vk.openvk.TTRdVideoObject.RewardAdPlayAgainController r1);

    void setRewardPlayAgainInteractionListener(com.bykv.vk.openvk.TTRdVideoObject.RdVrInteractionListener r1);

    @java.lang.Deprecated
    void setShowDownLoadBar(boolean r1);

    void showRdVideoVr(android.app.Activity r1);

    void showRdVideoVr(android.app.Activity r1, com.bykv.vk.openvk.TTVfConstant.RitScenes r2, java.lang.String r3);
}
