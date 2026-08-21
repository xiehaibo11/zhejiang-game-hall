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
import java.util.Map;

public class GDTTYBiddingNotice implements TYBiddingNotice {
    Object a;

    @Override
    public void notifyBidDisplay(boolean z, double d) {
    }

    protected GDTTYBiddingNotice(Object obj) {
        this.a = obj;
    }

    @Override
    public void notifyBidWin(double d) {
        HashMap map = new HashMap(4);
        map.put(IBidding.HIGHEST_LOSS_PRICE, Integer.valueOf((int) d));
        try {
            if (this.a instanceof RewardVideoAD) {
                RewardVideoAD rewardVideoAD = (RewardVideoAD) this.a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(rewardVideoAD.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb = new StringBuilder();
                    sb.append(this.a != null ? this.a.toString() : "");
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
            if (this.a instanceof UnifiedInterstitialAD) {
                UnifiedInterstitialAD unifiedInterstitialAD = (UnifiedInterstitialAD) this.a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(unifiedInterstitialAD.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(this.a != null ? this.a.toString() : "");
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
            if (this.a instanceof SplashAD) {
                SplashAD splashAD = (SplashAD) this.a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(splashAD.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append(this.a != null ? this.a.toString() : "");
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
            if (this.a instanceof UnifiedBannerView) {
                UnifiedBannerView unifiedBannerView = (UnifiedBannerView) this.a;
                map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(unifiedBannerView.getECPM()));
                if (TYSDK.isNetworkLogDebug()) {
                    StringBuilder sb4 = new StringBuilder();
                    sb4.append(this.a != null ? this.a.toString() : "");
                    sb4.append(": notifyBidWin: ");
                    sb4.append(map.toString());
                    Log.i("GDTTYBiddingNotice", sb4.toString());
                }
                unifiedBannerView.sendWinNotification(map);
                return;
            }
        } catch (Throwable unused4) {
        }
        if (this.a instanceof GDTTYNativeExpressAd) {
            GDTTYNativeExpressAd gDTTYNativeExpressAd = (GDTTYNativeExpressAd) this.a;
            map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(gDTTYNativeExpressAd.b.getECPM()));
            if (TYSDK.isNetworkLogDebug()) {
                StringBuilder sb5 = new StringBuilder();
                sb5.append(this.a != null ? this.a.toString() : "");
                sb5.append(": notifyBidWin: ");
                sb5.append(map.toString());
                Log.i("GDTTYBiddingNotice", sb5.toString());
            }
            gDTTYNativeExpressAd.b.sendWinNotification(map);
            return;
        }
        if (this.a instanceof GDTTYNativePatchAd) {
            GDTTYNativePatchAd gDTTYNativePatchAd = (GDTTYNativePatchAd) this.a;
            map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(gDTTYNativePatchAd.c.getECPM()));
            if (TYSDK.isNetworkLogDebug()) {
                StringBuilder sb6 = new StringBuilder();
                sb6.append(this.a != null ? this.a.toString() : "");
                sb6.append(": notifyBidWin: ");
                sb6.append(map.toString());
                Log.i("GDTTYBiddingNotice", sb6.toString());
            }
            gDTTYNativePatchAd.c.sendWinNotification(map);
            return;
        }
        if (this.a instanceof GDTTYNativeAd) {
            GDTTYNativeAd gDTTYNativeAd = (GDTTYNativeAd) this.a;
            map.put(IBidding.EXPECT_COST_PRICE, Integer.valueOf(gDTTYNativeAd.c.getECPM()));
            if (TYSDK.isNetworkLogDebug()) {
                StringBuilder sb7 = new StringBuilder();
                sb7.append(this.a != null ? this.a.toString() : "");
                sb7.append(": notifyBidWin: ");
                sb7.append(map.toString());
                Log.i("GDTTYBiddingNotice", sb7.toString());
            }
            gDTTYNativeAd.c.sendWinNotification(map);
            return;
        }
        this.a = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0068  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void notifyBidLoss(String str, double d, Map<String, Object> map) {
        byte b;
        HashMap map2 = new HashMap(4);
        int iHashCode = str.hashCode();
        if (iHashCode != 50) {
            switch (iHashCode) {
                case 48627:
                    b = !str.equals("102") ? (byte) -1 : (byte) 1;
                    break;
                case 48628:
                    b = !str.equals(TYAdConst.BIDDING_TYPE.BIDDING_LOSS_WITH_LOW_PRICE_IN_NORMAL) ? (byte) -1 : (byte) 2;
                    break;
                default:
                    b = -1;
                    break;
            }
        } else {
            b = str.equals("2") ? (byte) 0 : (byte) -1;
        }
        int i = b != 0 ? (b == 1 || b == 2) ? 1 : 10001 : 2;
        map2.put(IBidding.WIN_PRICE, Integer.valueOf((int) d));
        map2.put(IBidding.LOSS_REASON, Integer.valueOf(i));
        try {
            if (map.containsKey(TYBiddingNotice.ADN_ID)) {
                Object obj = map.get(TYBiddingNotice.ADN_ID);
                int iIntValue = obj instanceof Integer ? ((Integer) obj).intValue() : -1;
                if (iIntValue != -1) {
                    map2.put(IBidding.ADN_ID, Integer.valueOf(iIntValue));
                }
            }
        } catch (Throwable unused) {
        }
        if (TYSDK.isNetworkLogDebug()) {
            StringBuilder sb = new StringBuilder();
            Object obj2 = this.a;
            sb.append(obj2 != null ? obj2.toString() : "");
            sb.append(": notifyBidLoss lossCode:");
            sb.append(str);
            sb.append(",lossReaseon:");
            sb.append(i);
            sb.append("\n");
            sb.append(map2.toString());
            Log.i("GDTTYBiddingNotice", sb.toString());
        }
        try {
            if (this.a instanceof RewardVideoAD) {
                ((RewardVideoAD) this.a).sendLossNotification(map2);
                return;
            }
        } catch (Throwable unused2) {
        }
        try {
            if (this.a instanceof UnifiedInterstitialAD) {
                ((UnifiedInterstitialAD) this.a).sendLossNotification(map2);
                return;
            }
        } catch (Throwable unused3) {
        }
        try {
            if (this.a instanceof SplashAD) {
                ((SplashAD) this.a).sendLossNotification(map2);
                return;
            }
        } catch (Throwable unused4) {
        }
        try {
            if (this.a instanceof UnifiedBannerView) {
                ((UnifiedBannerView) this.a).sendLossNotification(map2);
                return;
            }
        } catch (Throwable unused5) {
        }
        if (this.a instanceof GDTTYNativeExpressAd) {
            ((GDTTYNativeExpressAd) this.a).b.sendLossNotification(map2);
            return;
        }
        if (this.a instanceof GDTTYNativePatchAd) {
            ((GDTTYNativePatchAd) this.a).c.sendLossNotification(map2);
            return;
        }
        if (this.a instanceof GDTTYNativeAd) {
            ((GDTTYNativeAd) this.a).c.sendLossNotification(map2);
            return;
        }
        this.a = null;
    }

    @Override
    public TYAdConst.CURRENCY getNoticePriceCurrency() {
        return TYAdConst.CURRENCY.RMB_CENT;
    }
}
