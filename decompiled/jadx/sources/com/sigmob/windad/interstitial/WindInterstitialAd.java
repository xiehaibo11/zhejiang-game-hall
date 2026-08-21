package com.sigmob.windad.interstitial;

import com.sigmob.sdk.base.j;
import com.sigmob.sdk.rewardVideoAd.f;
import com.sigmob.sdk.rewardVideoAd.g;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.rewardVideo.WindRewardInfo;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class WindInterstitialAd extends j implements f, g {
    protected WindInterstitialAdListener b;

    public WindInterstitialAd(WindInterstitialAdRequest windInterstitialAdRequest) {
        this(windInterstitialAdRequest, false);
    }

    public WindInterstitialAd(WindInterstitialAdRequest windInterstitialAdRequest, boolean z) {
        super(windInterstitialAdRequest, z);
        setAdLoadListener(this);
    }

    @Override // com.sigmob.sdk.base.j, com.sigmob.sdk.base.g
    public boolean loadAd() {
        return super.loadAd();
    }

    @Override // com.sigmob.sdk.base.j, com.sigmob.sdk.base.g
    public boolean loadAd(String str) {
        return super.loadAd(str);
    }

    @Override // com.sigmob.sdk.rewardVideoAd.g
    public void onVideoAdClicked(String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdClicked(str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.g
    public void onVideoAdClosed(String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdClosed(str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.f
    public void onVideoAdLoadError(WindAdError windAdError, String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdLoadError(windAdError, str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.f
    public void onVideoAdLoadSuccess(String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdLoadSuccess(str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.g
    public void onVideoAdPlayComplete(WindRewardInfo windRewardInfo, String str) {
    }

    @Override // com.sigmob.sdk.rewardVideoAd.g
    public void onVideoAdPlayEnd(String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdPlayEnd(str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.g
    public void onVideoAdPlayError(WindAdError windAdError, String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdPlayError(windAdError, str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.g
    public void onVideoAdPlayStart(String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdPlayStart(str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.f
    public void onVideoAdPreLoadFail(WindAdError windAdError, String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdPreLoadFail(str);
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.f
    public void onVideoAdPreLoadSuccess(String str) {
        WindInterstitialAdListener windInterstitialAdListener = this.b;
        if (windInterstitialAdListener != null) {
            windInterstitialAdListener.onInterstitialAdPreLoadSuccess(str);
        }
    }

    public void setWindInterstitialAdListener(WindInterstitialAdListener windInterstitialAdListener) {
        this.b = windInterstitialAdListener;
    }

    public boolean show(HashMap<String, String> map) {
        return super.show(map, this);
    }
}
