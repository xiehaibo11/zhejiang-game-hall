package com.tkay.network.ks;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.api.KsDrawAd;
import com.kwad.sdk.api.KsFeedAd;
import com.kwad.sdk.api.KsFullScreenVideoAd;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.api.KsNativeAd;
import com.kwad.sdk.api.KsRewardVideoAd;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingNotice;
import com.tkay.core.api.TYSDK;
import java.util.Map;

public class KSTYBiddingNotice implements TYBiddingNotice {
    Object a;

    @Override
    public void notifyBidDisplay(boolean z, double d) {
    }

    protected KSTYBiddingNotice(Object obj) {
        this.a = obj;
    }

    @Override
    public synchronized void notifyBidWin(double d) {
        double d2 = d * 100.0d;
        if (TYSDK.isNetworkLogDebug()) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.a != null ? this.a.getClass().getSimpleName() : "");
            sb.append(": notifyBidWin : second price:");
            sb.append(d2);
            Log.i("KSTYBiddingNotice", sb.toString());
        }
        try {
            if (this.a instanceof KsRewardVideoAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsRewardVideoAd) this.a).getECPM());
                }
                ((KsRewardVideoAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused) {
        }
        try {
            if (this.a instanceof KsInterstitialAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsInterstitialAd) this.a).getECPM());
                }
                ((KsInterstitialAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused2) {
        }
        try {
            if (this.a instanceof KsFullScreenVideoAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsFullScreenVideoAd) this.a).getECPM());
                }
                ((KsFullScreenVideoAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused3) {
        }
        try {
            if (this.a instanceof KsDrawAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsDrawAd) this.a).getECPM());
                }
                ((KsDrawAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused4) {
        }
        try {
            if (this.a instanceof KsFeedAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsFeedAd) this.a).getECPM());
                }
                ((KsFeedAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused5) {
        }
        try {
            if (this.a instanceof KsNativeAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsNativeAd) this.a).getECPM());
                }
                ((KsNativeAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused6) {
        }
        try {
            if (this.a instanceof KsSplashScreenAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsSplashScreenAd) this.a).getECPM());
                }
                ((KsSplashScreenAd) this.a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused7) {
        }
        this.a = null;
    }

    @Override
    public synchronized void notifyBidLoss(String str, double d, Map<String, Object> map) {
        if (TYSDK.isNetworkLogDebug()) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.a != null ? this.a.getClass().getSimpleName() : "");
            sb.append(": notifyBidLoss lossCode:");
            sb.append(str);
            sb.append(",winPrice:");
            sb.append(d);
            Log.i("KSTYBiddingNotice", sb.toString());
        }
        AdExposureFailedReason adExposureFailedReason = new AdExposureFailedReason();
        adExposureFailedReason.winEcpm = (int) d;
        int i = TextUtils.equals(str, "5") ? 3 : 4;
        try {
            if (this.a instanceof KsRewardVideoAd) {
                ((KsRewardVideoAd) this.a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused) {
        }
        try {
            if (this.a instanceof KsInterstitialAd) {
                ((KsInterstitialAd) this.a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused2) {
        }
        try {
            if (this.a instanceof KsFullScreenVideoAd) {
                ((KsFullScreenVideoAd) this.a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused3) {
        }
        try {
            if (this.a instanceof KsDrawAd) {
                ((KsDrawAd) this.a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused4) {
        }
        try {
            if (this.a instanceof KsFeedAd) {
                ((KsFeedAd) this.a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused5) {
        }
        try {
            if (this.a instanceof KsNativeAd) {
                ((KsNativeAd) this.a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused6) {
        }
        this.a = null;
    }

    @Override
    public TYAdConst.CURRENCY getNoticePriceCurrency() {
        return TYAdConst.CURRENCY.RMB_CENT;
    }
}
