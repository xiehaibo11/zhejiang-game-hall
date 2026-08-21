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

/* JADX INFO: loaded from: classes3.dex */
public class KSTYBiddingNotice implements TYBiddingNotice {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Object f7590a;

    @Override // com.tkay.core.api.TYBiddingNotice
    public void notifyBidDisplay(boolean z, double d) {
    }

    protected KSTYBiddingNotice(Object obj) {
        this.f7590a = obj;
    }

    @Override // com.tkay.core.api.TYBiddingNotice
    public synchronized void notifyBidWin(double d) {
        double d2 = d * 100.0d;
        if (TYSDK.isNetworkLogDebug()) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.f7590a != null ? this.f7590a.getClass().getSimpleName() : "");
            sb.append(": notifyBidWin : second price:");
            sb.append(d2);
            Log.i("KSTYBiddingNotice", sb.toString());
        }
        try {
            if (this.f7590a instanceof KsRewardVideoAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsRewardVideoAd) this.f7590a).getECPM());
                }
                ((KsRewardVideoAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused) {
        }
        try {
            if (this.f7590a instanceof KsInterstitialAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsInterstitialAd) this.f7590a).getECPM());
                }
                ((KsInterstitialAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused2) {
        }
        try {
            if (this.f7590a instanceof KsFullScreenVideoAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsFullScreenVideoAd) this.f7590a).getECPM());
                }
                ((KsFullScreenVideoAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused3) {
        }
        try {
            if (this.f7590a instanceof KsDrawAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsDrawAd) this.f7590a).getECPM());
                }
                ((KsDrawAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused4) {
        }
        try {
            if (this.f7590a instanceof KsFeedAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsFeedAd) this.f7590a).getECPM());
                }
                ((KsFeedAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused5) {
        }
        try {
            if (this.f7590a instanceof KsNativeAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsNativeAd) this.f7590a).getECPM());
                }
                ((KsNativeAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused6) {
        }
        try {
            if (this.f7590a instanceof KsSplashScreenAd) {
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i("KSTYBiddingNotice", "Origin price:" + ((KsSplashScreenAd) this.f7590a).getECPM());
                }
                ((KsSplashScreenAd) this.f7590a).setBidEcpm((int) d2);
                return;
            }
        } catch (Throwable unused7) {
        }
        this.f7590a = null;
    }

    @Override // com.tkay.core.api.TYBiddingNotice
    public synchronized void notifyBidLoss(String str, double d, Map<String, Object> map) {
        if (TYSDK.isNetworkLogDebug()) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.f7590a != null ? this.f7590a.getClass().getSimpleName() : "");
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
            if (this.f7590a instanceof KsRewardVideoAd) {
                ((KsRewardVideoAd) this.f7590a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused) {
        }
        try {
            if (this.f7590a instanceof KsInterstitialAd) {
                ((KsInterstitialAd) this.f7590a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused2) {
        }
        try {
            if (this.f7590a instanceof KsFullScreenVideoAd) {
                ((KsFullScreenVideoAd) this.f7590a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused3) {
        }
        try {
            if (this.f7590a instanceof KsDrawAd) {
                ((KsDrawAd) this.f7590a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused4) {
        }
        try {
            if (this.f7590a instanceof KsFeedAd) {
                ((KsFeedAd) this.f7590a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused5) {
        }
        try {
            if (this.f7590a instanceof KsNativeAd) {
                ((KsNativeAd) this.f7590a).reportAdExposureFailed(i, adExposureFailedReason);
                return;
            }
        } catch (Throwable unused6) {
        }
        this.f7590a = null;
    }

    @Override // com.tkay.core.api.TYBiddingNotice
    public TYAdConst.CURRENCY getNoticePriceCurrency() {
        return TYAdConst.CURRENCY.RMB_CENT;
    }
}
