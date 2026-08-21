package com.mbridge.msdk.newinterstitial.a;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.report.f;
import com.mbridge.msdk.newinterstitial.out.NewInterstitialListener;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.RewardInfo;
import com.mbridge.msdk.videocommon.listener.InterVideoOutListener;

public final class a implements InterVideoOutListener {
    private NewInterstitialListener a;
    private String b;
    private boolean c;

    public a(NewInterstitialListener newInterstitialListener) {
        this.a = newInterstitialListener;
    }

    public a(NewInterstitialListener newInterstitialListener, String str, boolean z) {
        this.a = newInterstitialListener;
        this.b = str;
        this.c = z;
    }

    @Override
    public final void onAdShow(MBridgeIds mBridgeIds) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onAdShow(mBridgeIds);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            f.a().g(this.b, "niv", this.c);
        }
    }

    @Override
    public final void onAdClose(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onAdClose(mBridgeIds, rewardInfo);
        }
    }

    @Override
    public final void onShowFail(MBridgeIds mBridgeIds, String str) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onShowFail(mBridgeIds, str);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            f.a().b(this.b, str, "niv", this.c);
        }
    }

    @Override
    public final void onVideoAdClicked(boolean z, MBridgeIds mBridgeIds) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onAdClicked(mBridgeIds);
        }
    }

    @Override
    public final void onVideoComplete(MBridgeIds mBridgeIds) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onVideoComplete(mBridgeIds);
        }
    }

    @Override
    public final void onAdCloseWithIVReward(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onAdCloseWithNIReward(mBridgeIds, rewardInfo);
        }
    }

    @Override
    public final void onEndcardShow(MBridgeIds mBridgeIds) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onEndcardShow(mBridgeIds);
        }
    }

    @Override
    public final void onVideoLoadFail(MBridgeIds mBridgeIds, String str) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onResourceLoadFail(mBridgeIds, str);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            f.a().a(this.b, str, "niv", this.c);
        }
    }

    @Override
    public final void onVideoLoadSuccess(MBridgeIds mBridgeIds) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onResourceLoadSuccess(mBridgeIds);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            f.a().c(this.b, "niv", this.c);
        }
    }

    @Override
    public final void onLoadSuccess(MBridgeIds mBridgeIds) {
        NewInterstitialListener newInterstitialListener = this.a;
        if (newInterstitialListener != null) {
            newInterstitialListener.onLoadCampaignSuccess(mBridgeIds);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            f.a().b(this.b, "niv", this.c);
        }
    }
}
