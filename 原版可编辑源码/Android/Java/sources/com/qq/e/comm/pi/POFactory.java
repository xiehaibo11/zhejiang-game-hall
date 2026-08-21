package com.qq.e.comm.pi;

import android.app.Activity;
import android.app.Service;
import android.content.Context;
import com.qq.e.ads.banner2.UnifiedBannerView;
import com.qq.e.ads.dfa.GDTAppDialogClickListener;
import com.qq.e.ads.dfa.IGDTApkListener;
import com.qq.e.ads.hybrid.HybridADListener;
import com.qq.e.ads.hybrid.HybridADSetting;
import com.qq.e.ads.nativ.ADSize;
import com.qq.e.comm.adevent.ADListener;
import java.util.Map;

public interface POFactory extends InnerPOFactory {
    @Override
    SVSD getAPKDownloadServiceDelegate(Service service);

    @Override
    ACTD getActivityDelegate(String str, Activity activity);

    @Override
    String getBuyerId(Map<String, Object> map);

    @Override
    DFA getGDTApkDelegate(IGDTApkListener iGDTApkListener);

    @Override
    HADI getHybridAD(HybridADSetting hybridADSetting, HybridADListener hybridADListener);

    @Override
    NUADI getNativeAdManagerDelegate(Context context, String str, String str2, String str3, ADListener aDListener);

    @Override
    NEADI getNativeExpressADDelegate(Context context, ADSize aDSize, String str, String str2, String str3, ADListener aDListener);

    @Override
    NSPVI getNativeSplashAdView(Context context, String str, String str2, String str3);

    @Override
    RVADI getRewardVideoADDelegate(Context context, String str, String str2, String str3, ADListener aDListener);

    @Override
    String getSDKInfo(String str);

    @Override
    UBVI getUnifiedBannerViewDelegate(UnifiedBannerView unifiedBannerView, Activity activity, String str, String str2, String str3, ADListener aDListener);

    @Override
    UIADI getUnifiedInterstitialADDelegate(Activity activity, String str, String str2, String str3, ADListener aDListener);

    @Override
    int showOpenOrInstallAppDialog(GDTAppDialogClickListener gDTAppDialogClickListener);
}
