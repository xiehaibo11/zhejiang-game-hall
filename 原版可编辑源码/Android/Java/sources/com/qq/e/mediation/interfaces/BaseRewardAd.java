package com.qq.e.mediation.interfaces;

import android.app.Activity;
import android.content.Context;
import com.qq.e.ads.rewardvideo.ServerSideVerificationOptions;
import com.qq.e.comm.adevent.ADListener;
import com.qq.e.comm.constants.LoadAdParams;

public abstract class BaseRewardAd implements IBaseAd {
    public static final int DEFAULT_PRIORITY = -1;
    private LoadAdParams a = null;

    public BaseRewardAd(Context context, String str, String str2, String str3) {
    }

    public int getAdapterPriority() {
        return -1;
    }

    public abstract String getECPMLevel();

    @Deprecated
    public abstract long getExpireTimestamp();

    public LoadAdParams getLoadAdParams() {
        return this.a;
    }

    public int getRewardAdType() {
        return 0;
    }

    public abstract int getVideoDuration();

    public abstract boolean hasShown();

    public abstract boolean isValid();

    public abstract void loadAD();

    @Override
    public void sendLossNotification(int i, int i2, String str) {
    }

    @Override
    public void sendWinNotification(int i) {
    }

    public abstract void setAdListener(ADListener aDListener);

    @Override
    public void setBidECPM(int i) {
    }

    public void setLoadAdParams(LoadAdParams loadAdParams) {
        this.a = loadAdParams;
    }

    @Override
    public void setPayload(String str) {
    }

    public abstract void setServerSideVerificationOptions(ServerSideVerificationOptions serverSideVerificationOptions);

    public abstract void setVolumeOn(boolean z);

    public abstract void showAD();

    public void showAD(Activity activity) {
        showAD();
    }
}
