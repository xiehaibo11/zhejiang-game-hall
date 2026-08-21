package com.tkay.network.sigmob;

import android.util.Log;
import com.sigmob.windad.Splash.WindSplashAD;
import com.sigmob.windad.WindAdBiddingLossReason;
import com.sigmob.windad.WindAds;
import com.sigmob.windad.interstitial.WindInterstitialAd;
import com.sigmob.windad.natives.WindNativeUnifiedAd;
import com.sigmob.windad.rewardVideo.WindRewardVideoAd;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingNotice;
import com.tkay.core.api.TYSDK;
import java.util.HashMap;
import java.util.Map;

public class SigmobTYBiddingNotice implements TYBiddingNotice {
    private Object a;

    @Override
    public void notifyBidDisplay(boolean z, double d) {
    }

    public SigmobTYBiddingNotice(Object obj) {
        this.a = obj;
    }

    @Override
    public void notifyBidWin(double d) {
        if (TYSDK.isNetworkLogDebug()) {
            Log.i("SigmobTYBiddingNotice", "notifyBidWin() >>> secondPrice = $".concat(String.valueOf(d)));
        }
        HashMap map = new HashMap();
        map.put(WindAds.AUCTION_PRICE, Integer.valueOf(SigmobTYInitManager.getEcpmInt(this.a)));
        map.put(WindAds.HIGHEST_LOSS_PRICE, Double.valueOf(d * 100.0d));
        map.put(WindAds.CURRENCY, "USD");
        try {
            if (this.a instanceof WindNativeUnifiedAd) {
                ((WindNativeUnifiedAd) this.a).sendWinNotificationWithInfo(map);
            } else if (this.a instanceof WindRewardVideoAd) {
                ((WindRewardVideoAd) this.a).sendWinNotificationWithInfo(map);
            } else if (this.a instanceof WindInterstitialAd) {
                ((WindInterstitialAd) this.a).sendWinNotificationWithInfo(map);
            } else if (this.a instanceof WindSplashAD) {
                ((WindSplashAD) this.a).sendWinNotificationWithInfo(map);
            }
        } catch (Exception unused) {
        }
        this.a = null;
    }

    @Override
    public void notifyBidLoss(String str, double d, Map<String, Object> map) {
        WindAdBiddingLossReason windAdBiddingLossReason = WindAdBiddingLossReason.LOSS_REASON_LOW_PRICE;
        if ("2".equals(str)) {
            windAdBiddingLossReason = WindAdBiddingLossReason.LOSS_REASON_RETURN_TIMEOUT;
        }
        if (TYSDK.isNetworkLogDebug()) {
            Log.i("SigmobTYBiddingNotice", "notifyBidLoss() >>> lossCode = " + str + ",lossReaseon = " + windAdBiddingLossReason.getMessage() + " winPrice = $" + d);
        }
        HashMap map2 = new HashMap();
        map2.put(WindAds.AUCTION_PRICE, Double.valueOf(d * 100.0d));
        map2.put(WindAds.CURRENCY, "USD");
        map2.put(WindAds.LOSS_REASON, Integer.valueOf(windAdBiddingLossReason.getCode()));
        map2.put(WindAds.ADN_ID, "10001");
        try {
            if (this.a instanceof WindNativeUnifiedAd) {
                ((WindNativeUnifiedAd) this.a).sendLossNotificationWithInfo(map2);
            } else if (this.a instanceof WindRewardVideoAd) {
                ((WindRewardVideoAd) this.a).sendLossNotificationWithInfo(map2);
            } else if (this.a instanceof WindInterstitialAd) {
                ((WindInterstitialAd) this.a).sendLossNotificationWithInfo(map2);
            } else if (this.a instanceof WindSplashAD) {
                ((WindSplashAD) this.a).sendLossNotificationWithInfo(map2);
            }
        } catch (Exception unused) {
        }
        this.a = null;
    }

    @Override
    public TYAdConst.CURRENCY getNoticePriceCurrency() {
        return TYAdConst.CURRENCY.USD;
    }
}
