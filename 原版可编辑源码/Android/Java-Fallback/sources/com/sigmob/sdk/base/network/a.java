package com.sigmob.sdk.base.network;

public class a extends com.czhj.sdk.common.network.SigmobRequest<com.sigmob.sdk.base.models.rtb.BidResponse> {
    private final com.sigmob.sdk.base.network.d.a a;
    private final com.sigmob.sdk.base.models.LoadAdRequest b;
    private com.czhj.sdk.common.models.Network.Builder c;
    private com.czhj.sdk.common.models.AdSlot.Builder d;
    private com.czhj.sdk.common.models.Device.Builder e;
    private com.czhj.sdk.common.models.App.Builder f;


    public a(java.lang.String r3, com.sigmob.sdk.base.models.LoadAdRequest r4, com.sigmob.sdk.base.network.d.a r5) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.<init>(r3, r0, r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r5)
            r2.a = r5
            r2.b = r4
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r4 = 0
            r5 = 10000(0x2710, float:1.4013E-41)
            r0 = 0
            r3.<init>(r5, r4, r0)
            r2.setRetryPolicy(r3)
            r2.setShouldCache(r4)
            return
    }

    private void a(int r2, java.lang.String r3, java.lang.String r4, int r5, java.lang.String r6) {
            r1 = this;
            com.sigmob.sdk.base.network.a$1 r0 = new com.sigmob.sdk.base.network.a$1
            r0.<init>(r1, r4, r3, r2)
            java.lang.String r2 = "server_error"
            r3 = 0
            com.sigmob.sdk.base.common.z.a(r2, r5, r6, r3, r0)
            return
    }

    public static com.czhj.sdk.common.models.App.Builder b() {
            com.czhj.sdk.common.models.App$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createApp()
            com.sigmob.windad.WindAds r1 = com.sigmob.windad.WindAds.sharedAds()
            java.lang.String r1 = r1.getAppId()
            r0.app_id(r1)
            return r0
    }

    public static com.czhj.sdk.common.models.User.Builder c() {
            com.czhj.sdk.common.models.User$Builder r0 = new com.czhj.sdk.common.models.User$Builder
            r0.<init>()
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            boolean r1 = r1.d()
            r1 = r1 ^ 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.is_minor = r1
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            boolean r1 = r1.e()
            r1 = r1 ^ 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.disable_personalized_recommendation = r1
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            boolean r1 = r1.f()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.change_recommendation_state = r1
            return r0
    }

    public static com.czhj.sdk.common.models.Privacy.Builder d() {
            com.czhj.sdk.common.models.Privacy$Builder r0 = new com.czhj.sdk.common.models.Privacy$Builder
            r0.<init>()
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            int r1 = r1.b()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.age(r1)
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            int r1 = r1.c()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.child_protection(r1)
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L2c
            int r1 = r1.g()     // Catch: java.lang.Throwable -> L2c
            goto L2d
        L2c:
            r1 = 0
        L2d:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.gdpr_consent(r1)
            return r0
    }

    private void e() {
            r3 = this;
            com.czhj.sdk.common.models.App$Builder r0 = b()
            r3.f = r0
            com.czhj.sdk.common.models.Device$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createDevice()
            r3.e = r0
            com.czhj.sdk.common.models.DeviceId$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createDeviceId()
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            java.lang.String r1 = r1.getUserId()
            r0.user_id(r1)
            com.czhj.sdk.common.models.Device$Builder r1 = r3.e
            com.czhj.sdk.common.models.DeviceId r0 = r0.build()
            r1.did(r0)
            com.czhj.sdk.common.models.Network$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createNetwork()
            r3.c = r0
            com.czhj.sdk.common.models.AdSlot$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createAdSlot()
            r3.d = r0
            java.util.List<java.lang.Integer> r0 = r0.adslot_type
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            int r1 = r1.getAdType()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.b
            int r0 = r0.getAdType()
            r1 = 1
            r2 = 2
            if (r0 != r2) goto L9e
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.material_type
            com.sigmob.sdk.splash.a r2 = com.sigmob.sdk.splash.a.b
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.material_type
            com.sigmob.sdk.splash.a r2 = com.sigmob.sdk.splash.a.c
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.material_type
            com.sigmob.sdk.splash.a r2 = com.sigmob.sdk.splash.a.d
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.b
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.g
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            goto L119
        L9e:
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.b
            int r0 = r0.getAdType()
            if (r0 == r1) goto Laf
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.b
            int r0 = r0.getAdType()
            r2 = 4
            if (r0 != r2) goto L104
        Laf:
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.a
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.c
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.e
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.f
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.util.List<java.lang.Integer> r0 = r0.creative_type
            com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.h
            int r2 = r2.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
        L104:
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r3.b
            int r2 = r2.getAdType()
            java.util.Map r0 = r0.a(r2)
            if (r0 == 0) goto L119
            com.czhj.sdk.common.models.AdSlot$Builder r2 = r3.d
            r2.ad_caches(r0)
        L119:
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.sdk_strategy_index(r1)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.b
            java.lang.String r0 = r0.getPlacementId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L139
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            java.lang.String r1 = r1.getPlacementId()
            r0.adslot_id(r1)
        L139:
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            java.lang.String r1 = r1.getLastCrid()
            r0.latest_crid(r1)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            java.lang.String r1 = r1.getLastCampid()
            r0.latest_camp_id(r1)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            int r1 = r1.getAdCount()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.ad_count(r1)
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r3.d
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b
            int r1 = r1.getBidFloor()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.bidfloor(r1)
            return
    }

    private com.czhj.sdk.common.models.BidRequest.Builder f() {
            r4 = this;
            java.lang.String r0 = "4.9.0"
            com.czhj.sdk.common.models.BidRequest$Builder r1 = new com.czhj.sdk.common.models.BidRequest$Builder
            r1.<init>()
            com.czhj.sdk.common.models.Device$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createDevice()     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Device r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.device(r2)     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.User$Builder r2 = c()     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.User r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.user(r2)     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Privacy$Builder r2 = d()     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Privacy r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.privacy(r2)     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.App$Builder r2 = r4.f     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.App r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.app(r2)     // Catch: java.lang.Throwable -> Ld4
            java.util.List<com.czhj.sdk.common.models.AdSlot> r2 = r1.slots     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.AdSlot$Builder r3 = r4.d     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.AdSlot r3 = r3.build()     // Catch: java.lang.Throwable -> Ld4
            r2.add(r3)     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Device$Builder r2 = r4.e     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Device r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.device(r2)     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Network$Builder r2 = r4.c     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Network r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.network(r2)     // Catch: java.lang.Throwable -> Ld4
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r4.b     // Catch: java.lang.Throwable -> Ld4
            java.util.Map r2 = r2.getOptions()     // Catch: java.lang.Throwable -> Ld4
            if (r2 == 0) goto L5f
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r4.b     // Catch: java.lang.Throwable -> Ld4
            java.util.Map r2 = r2.getOptions()     // Catch: java.lang.Throwable -> Ld4
            r1.options(r2)     // Catch: java.lang.Throwable -> Ld4
        L5f:
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r4.b     // Catch: java.lang.Throwable -> Ld4
            boolean r2 = r2.isExpired()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> Ld4
            r1.ad_is_expired = r2     // Catch: java.lang.Throwable -> Ld4
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r4.b     // Catch: java.lang.Throwable -> Ld4
            int r2 = r2.getRequest_scene_type()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Ld4
            r1.request_scene_type = r2     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.HeaderBidding$Builder r2 = new com.czhj.sdk.common.models.HeaderBidding$Builder     // Catch: java.lang.Throwable -> Ld4
            r2.<init>()     // Catch: java.lang.Throwable -> Ld4
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r4.b     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r3 = r3.getBidToken()     // Catch: java.lang.Throwable -> Ld4
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Ld4
            if (r3 != 0) goto L91
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r4.b     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r3 = r3.getBidToken()     // Catch: java.lang.Throwable -> Ld4
            r2.bid_token(r3)     // Catch: java.lang.Throwable -> Ld4
        L91:
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r4.b     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r3 = r3.getCurrency()     // Catch: java.lang.Throwable -> Ld4
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Ld4
            if (r3 != 0) goto La6
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r4.b     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r3 = r3.getCurrency()     // Catch: java.lang.Throwable -> Ld4
            r2.cur(r3)     // Catch: java.lang.Throwable -> Ld4
        La6:
            com.czhj.sdk.common.models.HeaderBidding r2 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.header_bidding(r2)     // Catch: java.lang.Throwable -> Ld4
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld4
            if (r2 != 0) goto Lc1
            com.czhj.sdk.common.models.Version$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createVersion(r0)     // Catch: java.lang.Throwable -> Ld4
            r2.version_str(r0)     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.Version r0 = r2.build()     // Catch: java.lang.Throwable -> Ld4
            r1.sdk_version(r0)     // Catch: java.lang.Throwable -> Ld4
        Lc1:
            r0 = 1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Throwable -> Ld4
            r1.disable_mediation = r0     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.WXProgramReq$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createWXProgramReq()     // Catch: java.lang.Throwable -> Ld4
            com.czhj.sdk.common.models.WXProgramReq r0 = r0.build()     // Catch: java.lang.Throwable -> Ld4
            r1.wx_program_req(r0)     // Catch: java.lang.Throwable -> Ld4
            goto Ldc
        Ld4:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        Ldc:
            return r1
    }

    public com.sigmob.sdk.base.network.d.a a() {
            r1 = this;
            com.sigmob.sdk.base.network.d$a r0 = r1.a
            return r0
    }

    protected void a(com.sigmob.sdk.base.models.rtb.BidResponse r12) {
            r11 = this;
            if (r12 == 0) goto Lc7
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ads Response: "
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r1 = " ["
            r0.append(r1)
            r0.append(r12)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            java.lang.String r0 = r12.uid
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3c
            java.lang.String r1 = "KGpfzbYsn4T9Jyuq"
            java.lang.String r0 = com.czhj.sdk.common.utils.AESUtil.DecryptString(r0, r1)
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            r1.setUid(r0)
        L3c:
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r11.b
            java.lang.String r1 = r12.request_id
            r0.setRequestId(r1)
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r0 = r12.ads
            int r0 = r0.size()
            if (r0 <= 0) goto L9b
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L94
            r0.<init>()     // Catch: java.lang.Throwable -> L94
            r1 = 0
        L51:
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r2 = r12.ads     // Catch: java.lang.Throwable -> L94
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L94
            if (r1 >= r2) goto L8c
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r2 = r12.ads     // Catch: java.lang.Throwable -> L94
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L94
            r3 = r2
            com.sigmob.sdk.base.models.rtb.Ad r3 = (com.sigmob.sdk.base.models.rtb.Ad) r3     // Catch: java.lang.Throwable -> L94
            java.lang.String r4 = r12.request_id     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.LoadAdRequest r5 = r11.b     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r6 = r12.slot_ad_setting     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.rtb.Template r7 = r12.scene     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = r12.uid     // Catch: java.lang.Throwable -> L94
            java.lang.Integer r9 = r12.expiration_time     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.rtb.BiddingResponse r10 = r12.bidding_response     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.BaseAdUnit r2 = com.sigmob.sdk.base.models.BaseAdUnit.adUnit(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r11.b     // Catch: java.lang.Throwable -> L94
            int r3 = r3.getAdType()     // Catch: java.lang.Throwable -> L94
            r2.setAd_type(r3)     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r11.b     // Catch: java.lang.Throwable -> L94
            boolean r3 = r3.isHalfInterstitial()     // Catch: java.lang.Throwable -> L94
            r2.setHalfInterstitial(r3)     // Catch: java.lang.Throwable -> L94
            r0.add(r2)     // Catch: java.lang.Throwable -> L94
            int r1 = r1 + 1
            goto L51
        L8c:
            com.sigmob.sdk.base.network.d$a r12 = r11.a     // Catch: java.lang.Throwable -> L94
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r11.b     // Catch: java.lang.Throwable -> L94
            r12.a(r0, r1)     // Catch: java.lang.Throwable -> L94
            return
        L94:
            r12 = move-exception
            java.lang.String r0 = "ads Response: error "
            com.czhj.sdk.logger.SigmobLog.e(r0, r12)
            goto Lc7
        L9b:
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r11.b
            int r2 = r0.getAdType()
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r11.b
            java.lang.String r3 = r0.getPlacementId()
            java.lang.String r4 = r12.request_id
            java.lang.Long r0 = r12.error_code
            int r5 = r0.intValue()
            java.lang.String r6 = r12.error_message
            r1 = r11
            r1.a(r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.network.d$a r0 = r11.a
            java.lang.Long r1 = r12.error_code
            int r1 = r1.intValue()
            java.lang.String r2 = r12.error_message
            java.lang.String r12 = r12.request_id
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r11.b
            r0.a(r1, r2, r12, r3)
            return
        Lc7:
            com.sigmob.sdk.base.network.d$a r12 = r11.a
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE
            int r0 = r0.getErrorCode()
            r1 = 0
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r11.b
            java.lang.String r3 = "bidResponse is null"
            r12.a(r0, r3, r1, r2)
            return
    }

    @Override
    public void deliverError(com.czhj.volley.VolleyError r5) {
            r4 = this;
            boolean r0 = r5 instanceof com.czhj.volley.ParseError
            r1 = 0
            if (r0 == 0) goto La
            com.sigmob.sdk.base.network.d$a r0 = r4.a
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE
            goto L2f
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r4.b
            java.lang.String r2 = r2.getPlacementId()
            r0.append(r2)
            java.lang.String r2 = " ERROR_SIGMOB_NETWORK "
            r0.append(r2)
            java.lang.String r2 = r5.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.sdk.base.network.d$a r0 = r4.a
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NETWORK
        L2f:
            int r2 = r2.getErrorCode()
            java.lang.String r5 = r5.getMessage()
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r4.b
            r0.a(r2, r5, r1, r3)
            return
    }

    @Override
    protected void deliverResponse(java.lang.Object r1) {
            r0 = this;
            com.sigmob.sdk.base.models.rtb.BidResponse r1 = (com.sigmob.sdk.base.models.rtb.BidResponse) r1
            r0.a(r1)
            return
    }

    @Override
    public byte[] getBody() {
            r3 = this;
            r0 = 0
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.b     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L19
            r3.e()     // Catch: java.lang.Throwable -> L11
            com.czhj.sdk.common.models.BidRequest$Builder r1 = r3.f()     // Catch: java.lang.Throwable -> L11
            com.czhj.sdk.common.models.BidRequest r1 = r1.build()     // Catch: java.lang.Throwable -> L11
            goto L1a
        L11:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L19:
            r1 = r0
        L1a:
            if (r1 != 0) goto L22
            java.lang.String r1 = "builder Ads Post entry fail "
            com.czhj.sdk.logger.SigmobLog.e(r1)
            return r0
        L22:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.getUrl()
            r0.append(r2)
            java.lang.String r2 = " send Bid request: "
            r0.append(r2)
            java.lang.String r2 = r1.toString()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            byte[] r0 = r1.encode()     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "KGpfzbYsn4T9Jyuq"
            byte[] r0 = com.czhj.sdk.common.utils.AESUtil.Encrypt(r0, r2)     // Catch: java.lang.Exception -> L4c
            return r0
        L4c:
            r0 = move-exception
            r0.printStackTrace()
            byte[] r0 = r1.encode()
            return r0
    }

    @Override
    public java.lang.String getBodyContentType() {
            r1 = this;
            java.lang.String r0 = "application/octet-stream"
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r3 = this;
            java.util.Map r0 = super.getHeaders()
            java.lang.String r1 = "e"
            java.lang.String r2 = "1"
            r0.put(r1, r2)
            return r0
    }

    @Override
    protected com.czhj.volley.Response<com.sigmob.sdk.base.models.rtb.BidResponse> parseNetworkResponse(com.czhj.volley.NetworkResponse r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            r0.<init>()     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "ads Response start"
            r0.append(r1)     // Catch: java.lang.Throwable -> L37
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L37
            r0.append(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L37
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L37
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BidResponse> r0 = com.sigmob.sdk.base.models.rtb.BidResponse.ADAPTER     // Catch: java.lang.Throwable -> L37
            byte[] r1 = r4.data     // Catch: java.lang.Throwable -> L37
            java.lang.Object r0 = r0.decode(r1)     // Catch: java.lang.Throwable -> L37
            com.sigmob.sdk.base.models.rtb.BidResponse r0 = (com.sigmob.sdk.base.models.rtb.BidResponse) r0     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L2d
            com.czhj.volley.Cache$Entry r4 = com.czhj.volley.toolbox.HttpHeaderParser.parseCacheHeaders(r4)     // Catch: java.lang.Throwable -> L37
            com.czhj.volley.Response r4 = com.czhj.volley.Response.success(r0, r4)     // Catch: java.lang.Throwable -> L37
            return r4
        L2d:
            com.czhj.volley.ParseError r0 = new com.czhj.volley.ParseError     // Catch: java.lang.Throwable -> L37
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L37
            com.czhj.volley.Response r4 = com.czhj.volley.Response.error(r0)     // Catch: java.lang.Throwable -> L37
            return r4
        L37:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.czhj.volley.ParseError r0 = new com.czhj.volley.ParseError
            r0.<init>(r4)
            com.czhj.volley.Response r4 = com.czhj.volley.Response.error(r0)
            return r4
    }
}
