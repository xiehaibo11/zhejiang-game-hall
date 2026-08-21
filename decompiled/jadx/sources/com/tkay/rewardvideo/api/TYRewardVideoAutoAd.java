package com.tkay.rewardvideo.api;

import android.app.Activity;
import android.content.Context;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.rewardvideo.a.d;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class TYRewardVideoAutoAd {
    public static void init(Context context, String[] strArr, TYRewardVideoAutoLoadListener tYRewardVideoAutoLoadListener) {
        d.a().a(context, strArr, tYRewardVideoAutoLoadListener);
    }

    public static void addPlacementId(String... strArr) {
        d.a();
        d.a(strArr);
    }

    public static void removePlacementId(String... strArr) {
        d.a();
        d.b(strArr);
    }

    public static void setLocalExtra(String str, Map<String, Object> map) {
        d.a();
        d.a(str, map);
    }

    public static void show(Activity activity, String str, TYRewardVideoAutoEventListener tYRewardVideoAutoEventListener) {
        d.a().a(activity, str, "", tYRewardVideoAutoEventListener);
    }

    public static void show(Activity activity, String str, String str2, TYRewardVideoAutoEventListener tYRewardVideoAutoEventListener) {
        d.a().a(activity, str, str2, tYRewardVideoAutoEventListener);
    }

    public static boolean isAdReady(String str) {
        return d.a().a(str);
    }

    public static TYAdStatusInfo checkAdStatus(String str) {
        return d.a().b(str);
    }

    public static List<TYAdInfo> checkValidAdCaches(String str) {
        return d.a().c(str);
    }

    public static void entryAdScenario(String str, String str2) {
        d.a();
        d.a(str, str2, (Map<String, Object>) null);
    }

    public static void entryAdScenario(String str, String str2, Map<String, Object> map) {
        d.a();
        d.a(str, str2, map);
    }
}
