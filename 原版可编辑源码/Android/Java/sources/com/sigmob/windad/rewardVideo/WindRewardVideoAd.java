package com.sigmob.windad.rewardVideo;

import com.sigmob.sdk.base.j;
import com.sigmob.sdk.rewardVideoAd.f;
import com.sigmob.sdk.rewardVideoAd.g;
import com.sigmob.windad.WindAdError;
import java.util.HashMap;

public class WindRewardVideoAd extends j implements f, g {
    protected WindRewardVideoAdListener b;

    public WindRewardVideoAd(WindRewardAdRequest windRewardAdRequest) {
        super(windRewardAdRequest, false);
        setAdLoadListener(this);
    }

    @Override
    public boolean loadAd() {
        return super.loadAd();
    }

    @Override
    public boolean loadAd(String str) {
        return super.loadAd(str);
    }

    @Override
    public void onVideoAdClicked(String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdClicked(str);
        }
    }

    @Override
    public void onVideoAdClosed(String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdClosed(str);
        }
    }

    @Override
    public void onVideoAdLoadError(WindAdError windAdError, String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdLoadError(windAdError, str);
        }
    }

    @Override
    public void onVideoAdLoadSuccess(String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdLoadSuccess(str);
        }
    }

    @Override
    public void onVideoAdPlayComplete(WindRewardInfo windRewardInfo, String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdRewarded(windRewardInfo, str);
        }
    }

    @Override
    public void onVideoAdPlayEnd(String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdPlayEnd(str);
        }
    }

    @Override
    public void onVideoAdPlayError(WindAdError windAdError, String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdPlayError(windAdError, str);
        }
    }

    @Override
    public void onVideoAdPlayStart(String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdPlayStart(str);
        }
    }

    @Override
    public void onVideoAdPreLoadFail(WindAdError windAdError, String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdPreLoadFail(str);
        }
    }

    @Override
    public void onVideoAdPreLoadSuccess(String str) {
        WindRewardVideoAdListener windRewardVideoAdListener = this.b;
        if (windRewardVideoAdListener != null) {
            windRewardVideoAdListener.onRewardAdPreLoadSuccess(str);
        }
    }

    public void setWindRewardVideoAdListener(WindRewardVideoAdListener windRewardVideoAdListener) {
        this.b = windRewardVideoAdListener;
    }

    public boolean show(HashMap<String, String> map) {
        return super.show(map, this);
    }
}
