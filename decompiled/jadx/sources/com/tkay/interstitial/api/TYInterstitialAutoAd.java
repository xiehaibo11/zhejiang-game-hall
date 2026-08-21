package com.tkay.interstitial.api;

import android.app.Activity;
import android.content.Context;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.interstitial.a.b;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class TYInterstitialAutoAd {
    public static void init(Context context, String[] strArr, TYInterstitialAutoLoadListener tYInterstitialAutoLoadListener) {
        b.a().a(context, strArr, tYInterstitialAutoLoadListener);
    }

    public static void addPlacementId(String... strArr) {
        b.a();
        b.a(strArr);
    }

    public static void removePlacementId(String... strArr) {
        b.a();
        b.b(strArr);
    }

    public static void setLocalExtra(String str, Map<String, Object> map) {
        b.a();
        b.a(str, map);
    }

    public static void show(Activity activity, String str, TYInterstitialAutoEventListener tYInterstitialAutoEventListener) {
        b.a().a(activity, str, "", tYInterstitialAutoEventListener);
    }

    public static void show(Activity activity, String str, String str2, TYInterstitialAutoEventListener tYInterstitialAutoEventListener) {
        b.a().a(activity, str, str2, tYInterstitialAutoEventListener);
    }

    public static boolean isAdReady(String str) {
        return b.a().a(str);
    }

    public static TYAdStatusInfo checkAdStatus(String str) {
        return b.a().b(str);
    }

    public static List<TYAdInfo> checkValidAdCaches(String str) {
        b.a();
        return b.c(str);
    }

    public static void entryAdScenario(String str, String str2) {
        b.a();
        b.a(str, str2, (Map<String, Object>) null);
    }

    public static void entryAdScenario(String str, String str2, Map<String, Object> map) {
        b.a();
        b.a(str, str2, map);
    }
}
