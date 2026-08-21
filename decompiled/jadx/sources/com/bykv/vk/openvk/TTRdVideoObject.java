package com.bykv.vk.openvk;

import android.app.Activity;
import android.os.Bundle;
import com.bykv.vk.openvk.TTVfConstant;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface TTRdVideoObject extends TTClientBidding {
    public static final String REWARD_EXTRA_KEY_ERROR_CODE = "reward_extra_key_error_code";
    public static final String REWARD_EXTRA_KEY_ERROR_MSG = "reward_extra_key_error_msg";
    public static final String REWARD_EXTRA_KEY_HAS_VIDEO_COMPLETE_REWARD = "reward_extra_key_has_video_complete_reward";
    public static final String REWARD_EXTRA_KEY_REWARD_AMOUNT = "reward_extra_key_reward_amount";
    public static final String REWARD_EXTRA_KEY_REWARD_NAME = "reward_extra_key_reward_name";
    public static final String REWARD_EXTRA_KEY_REWARD_PROPOSE = "reward_extra_key_reward_propose";
    public static final int REWARD_TYPE_CLICK_LANDING = 4;
    public static final int REWARD_TYPE_DEFAULT = 0;
    public static final int REWARD_TYPE_INTERACT = 1;
    public static final int REWARD_TYPE_PLAYABLE = 3;
    public static final int REWARD_TYPE_VIDEO_COMPLETE = 2;

    public interface RdVrInteractionListener {
        void onClose();

        @Deprecated
        void onRdVerify(boolean z, int i, String str, int i2, String str2);

        void onRewardArrived(boolean z, int i, Bundle bundle);

        void onShow();

        void onSkippedVideo();

        void onVideoBarClick();

        void onVideoComplete();

        void onVideoError();
    }

    public interface RewardAdPlayAgainController {
        public static final String KEY_PLAY_AGAIN_ALLOW = "play_again_allow";
        public static final String KEY_PLAY_AGAIN_REWARD_AMOUNT = "play_again_reward_amount";
        public static final String KEY_PLAY_AGAIN_REWARD_NAME = "play_again_reward_name";

        public interface Callback {
            void onConditionReturn(Bundle bundle);
        }

        void getPlayAgainCondition(int i, Callback callback);
    }

    long getExpirationTimestamp();

    int getInteractionType();

    Map<String, Object> getMediaExtraInfo();

    int getRdVideoVrType();

    void setDownloadListener(TTAppDownloadListener tTAppDownloadListener);

    void setRdVrInteractionListener(RdVrInteractionListener rdVrInteractionListener);

    void setRewardPlayAgainController(RewardAdPlayAgainController rewardAdPlayAgainController);

    void setRewardPlayAgainInteractionListener(RdVrInteractionListener rdVrInteractionListener);

    @Deprecated
    void setShowDownLoadBar(boolean z);

    void showRdVideoVr(Activity activity);

    void showRdVideoVr(Activity activity, TTVfConstant.RitScenes ritScenes, String str);
}
