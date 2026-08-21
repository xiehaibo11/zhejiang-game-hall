package com.kwad.components.ad.reward.model;

public final class c {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private org.json.JSONObject mReportExtData;
    public int mScreenOrientation;
    private com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;
    private int rewardType;

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.rewardType = r0
            return
    }

    public static com.kwad.components.ad.reward.model.c a(android.content.Intent r5) {
            java.lang.String r0 = "key_video_play_config"
            java.io.Serializable r0 = r5.getSerializableExtra(r0)
            boolean r1 = r0 instanceof com.kwad.sdk.api.KsVideoPlayConfig
            r2 = 0
            if (r1 != 0) goto L1f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r1 = "data is not instanceof VideoPlayConfigImpl:"
            r5.<init>(r1)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "RewardActivityModel"
            com.kwad.sdk.core.e.c.e(r0, r5)
            return r2
        L1f:
            com.kwad.sdk.api.KsVideoPlayConfig r0 = (com.kwad.sdk.api.KsVideoPlayConfig) r0
            r1 = 1
            java.lang.String r3 = "key_template_reward_type"
            int r1 = r5.getIntExtra(r3, r1)
            java.lang.String r3 = "key_template_json"
            java.lang.String r5 = r5.getStringExtra(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L40
            r3.<init>()     // Catch: java.lang.Throwable -> L40
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L40
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L40
            r3.parseJson(r4)     // Catch: java.lang.Throwable -> L40
            com.kwad.components.ad.reward.model.c r5 = a(r3, r1, r0)     // Catch: java.lang.Throwable -> L40
            return r5
        L40:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r5)
            return r2
    }

    private static com.kwad.components.ad.reward.model.c a(com.kwad.sdk.core.response.model.AdTemplate r6, int r7, com.kwad.sdk.api.KsVideoPlayConfig r8) {
            com.kwad.components.ad.reward.model.c r0 = new com.kwad.components.ad.reward.model.c
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r6)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.F(r1)
            int r3 = com.kwad.sdk.core.config.d.zz()
            if (r3 >= 0) goto L25
            com.kwad.sdk.core.diskcache.b.a r3 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r2 = r3.bR(r2)
            if (r2 == 0) goto L23
            boolean r2 = r2.exists()
            if (r2 != 0) goto L25
        L23:
            r6 = 0
            return r6
        L25:
            boolean r2 = r8.isShowLandscape()
            boolean r3 = r8.isVideoSoundEnable()
            if (r3 == 0) goto L31
            r3 = 2
            goto L32
        L31:
            r3 = 1
        L32:
            r6.mInitVoiceStatus = r3
            java.lang.String r3 = r8.getShowScene()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L4e
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r4 = r8.getShowScene()
            java.lang.String r5 = "ext_showscene"
            com.kwad.sdk.utils.t.putValue(r3, r5, r4)
            r0.mReportExtData = r3
        L4e:
            r0.mVideoPlayConfig = r8
            r0.mAdTemplate = r6
            r0.mAdInfo = r1
            r0.mScreenOrientation = r2
            r0.rewardType = r7
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdInfo bB() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            return r0
    }

    public final boolean bC() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.ct(r0)
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    public final int getScreenOrientation() {
            r1 = this;
            int r0 = r1.mScreenOrientation
            return r0
    }

    public final boolean hr() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.bB()
            boolean r1 = com.kwad.components.ad.reward.a.b.k(r1)
            boolean r0 = com.kwad.sdk.core.response.b.d.f(r0, r1)
            return r0
    }

    public final boolean hs() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.getAdTemplate()
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            return r0
    }

    public final com.kwad.sdk.api.KsVideoPlayConfig ht() {
            r1 = this;
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r1.mVideoPlayConfig
            return r0
    }

    public final int hu() {
            r1 = this;
            int r0 = r1.rewardType
            return r0
    }

    public final org.json.JSONObject hv() {
            r1 = this;
            org.json.JSONObject r0 = r1.mReportExtData
            return r0
    }
}
