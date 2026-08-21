package com.tkay.rewardvideo.api;

public class TYRewardVideoAutoAd {
    public TYRewardVideoAutoAd() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addPlacementId(java.lang.String... r0) {
            com.tkay.rewardvideo.a.d.a()
            com.tkay.rewardvideo.a.d.a(r0)
            return
    }

    public static com.tkay.core.api.TYAdStatusInfo checkAdStatus(java.lang.String r1) {
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            com.tkay.core.api.TYAdStatusInfo r1 = r0.b(r1)
            return r1
    }

    public static java.util.List<com.tkay.core.api.TYAdInfo> checkValidAdCaches(java.lang.String r1) {
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            java.util.List r1 = r0.c(r1)
            return r1
    }

    public static void entryAdScenario(java.lang.String r1, java.lang.String r2) {
            com.tkay.rewardvideo.a.d.a()
            r0 = 0
            com.tkay.rewardvideo.a.d.a(r1, r2, r0)
            return
    }

    public static void entryAdScenario(java.lang.String r0, java.lang.String r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            com.tkay.rewardvideo.a.d.a()
            com.tkay.rewardvideo.a.d.a(r0, r1, r2)
            return
    }

    public static void init(android.content.Context r1, java.lang.String[] r2, com.tkay.rewardvideo.api.TYRewardVideoAutoLoadListener r3) {
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            r0.a(r1, r2, r3)
            return
    }

    public static boolean isAdReady(java.lang.String r1) {
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            boolean r1 = r0.a(r1)
            return r1
    }

    public static void removePlacementId(java.lang.String... r0) {
            com.tkay.rewardvideo.a.d.a()
            com.tkay.rewardvideo.a.d.b(r0)
            return
    }

    public static void setLocalExtra(java.lang.String r0, java.util.Map<java.lang.String, java.lang.Object> r1) {
            com.tkay.rewardvideo.a.d.a()
            com.tkay.rewardvideo.a.d.a(r0, r1)
            return
    }

    public static void show(android.app.Activity r2, java.lang.String r3, com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener r4) {
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            java.lang.String r1 = ""
            r0.a(r2, r3, r1, r4)
            return
    }

    public static void show(android.app.Activity r1, java.lang.String r2, java.lang.String r3, com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener r4) {
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            r0.a(r1, r2, r3, r4)
            return
    }
}
