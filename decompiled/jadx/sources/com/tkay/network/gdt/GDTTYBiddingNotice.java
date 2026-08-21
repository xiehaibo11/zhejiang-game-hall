package com.tkay.network.gdt;

import android.util.Log;
import com.qq.e.ads.banner2.UnifiedBannerView;
import com.qq.e.ads.interstitial2.UnifiedInterstitialAD;
import com.qq.e.ads.rewardvideo.RewardVideoAD;
import com.qq.e.ads.splash.SplashAD;
import com.qq.e.comm.pi.IBidding;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingNotice;
import com.tkay.core.api.TYSDK;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYBiddingNotice implements TYBiddingNotice {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Object f7549a;

    @Override // com.tkay.core.api.TYBiddingNotice
    public void notifyBidDisplay(boolean z, double d) {
    }

    protected GDTTYBiddingNotice(Object obj) {
        this.f7549a = obj;
    }

    @Override // com.tkay.core.api.TYBiddingNotice
    public void notifyBidWin(double d) {
        HashMap map = new HashMap(4);
        map.put(IBidding.HIGHEST_LOSS_PRICE, Integer.valueOf((int) d));
        try {
            if (this.f7549a instanceof RewardVideoAD) {
                RewardVideoAD rewardVideoAD = (RewardVideoAD) this.f7549a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(rewardVideoAD.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb = new StringBuilder();
                    sb.append(this.f7549a != null ? this.f7549a.toString() : "");
                    sb.append(": notifyBidWin: ");
                    sb.append(map.toString());
                    Log.i("GDTTYBiddingNotice", sb.toString());
                }
                rewardVideoAD.sendWinNotification(map);
                return;
            }
        } catch (Throwable unused) {
        }
        try {
            if (this.f7549a instanceof UnifiedInterstitialAD) {
                UnifiedInterstitialAD unifiedInterstitialAD = (UnifiedInterstitialAD) this.f7549a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(unifiedInterstitialAD.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(this.f7549a != null ? this.f7549a.toString() : "");
                    sb2.append(": notifyBidWin: ");
                    sb2.append(map.toString());
                    Log.i("GDTTYBiddingNotice", sb2.toString());
                }
                unifiedInterstitialAD.sendWinNotification(map);
                return;
            }
        } catch (Throwable unused2) {
        }
        try {
            if (this.f7549a instanceof SplashAD) {
                SplashAD splashAD = (SplashAD) this.f7549a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(splashAD.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append(this.f7549a != null ? this.f7549a.toString() : "");
                    sb3.append(": notifyBidWin: ");
                    sb3.append(map.toString());
                    Log.i("GDTTYBiddingNotice", sb3.toString());
                }
                splashAD.sendWinNotification(map);
                return;
            }
        } catch (Throwable unused3) {
        }
        try {
            if (this.f7549a instanceof UnifiedBannerView) {
                UnifiedBannerView unifiedBannerView = (UnifiedBannerView) this.f7549a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(unifiedBannerView.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb4 = new StringBuilder();
                    sb4.append(this.f7549a != null ? this.f7549a.toString() : "");
                    sb4.append(": notifyBidWin: ");
                    sb4.append(map.toString());
                    Log.i("GDTTYBiddingNotice", sb4.toString());
                }
                unifiedBannerView.sendWinNotification(map);
                return;
            }
        } catch (Throwable unused4) {
        }
        if (this.f7549a instanceof GDTTYNativeExpressAd) {
            GDTTYNativeExpressAd gDTTYNativeExpressAd = (GDTTYNativeExpressAd) this.f7549a;
            map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(gDTTYNativeExpressAd.b.getECPM()));
            if (TYSDK.isNetworkLogDebug()) {
                StringBuilder sb5 = new StringBuilder();
                sb5.append(this.f7549a != null ? this.f7549a.toString() : "");
                sb5.append(": notifyBidWin: ");
                sb5.append(map.toString());
                Log.i("GDTTYBiddingNotice", sb5.toString());
            }
            gDTTYNativeExpressAd.b.sendWinNotification(map);
            return;
        }
        if (this.f7549a instanceof GDTTYNativePatchAd) {
            GDTTYNativePatchAd gDTTYNativePatchAd = (GDTTYNativePatchAd) this.f7549a;
            map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(gDTTYNativePatchAd.c.getECPM()));
            if (TYSDK.isNetworkLogDebug()) {
                StringBuilder sb6 = new StringBuilder();
                sb6.append(this.f7549a != null ? this.f7549a.toString() : "");
                sb6.append(": notifyBidWin: ");
                sb6.append(map.toString());
                Log.i("GDTTYBiddingNotice", sb6.toString());
            }
            gDTTYNativePatchAd.c.sendWinNotification(map);
            return;
        }
        if (this.f7549a instanceof GDTTYNativeAd) {
            GDTTYNativeAd gDTTYNativeAd = (GDTTYNativeAd) this.f7549a;
            map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(gDTTYNativeAd.c.getECPM()));
            if (TYSDK.isNetworkLogDebug()) {
                StringBuilder sb7 = new StringBuilder();
                sb7.append(this.f7549a != null ? this.f7549a.toString() : "");
                sb7.append(": notifyBidWin: ");
                sb7.append(map.toString());
                Log.i("GDTTYBiddingNotice", sb7.toString());
            }
            gDTTYNativeAd.c.sendWinNotification(map);
            return;
        }
        this.f7549a = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0068  */
    @Override // com.tkay.core.api.TYBiddingNotice
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void notifyBidLoss(java.lang.String r8, double r9, java.util.Map<java.lang.String, java.lang.Object> r11) {
        /*
            Method dump skipped, instruction units count: 294
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.gdt.GDTTYBiddingNotice.notifyBidLoss(java.lang.String, double, java.util.Map):void");
    }

    @Override // com.tkay.core.api.TYBiddingNotice
    public TYAdConst.CURRENCY getNoticePriceCurrency() {
        return TYAdConst.CURRENCY.RMB_CENT;
    }
}
