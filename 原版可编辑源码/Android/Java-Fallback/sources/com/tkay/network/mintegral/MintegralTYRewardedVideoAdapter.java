package com.tkay.network.mintegral;

public class MintegralTYRewardedVideoAdapter extends com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter {
    com.mbridge.msdk.out.MBRewardVideoHandler a;
    com.mbridge.msdk.out.MBBidRewardVideoHandler b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    java.lang.String f;
    java.util.Map<java.lang.String, java.lang.Object> g;
    private final java.lang.String h;



    public MintegralTYRewardedVideoAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter> r0 = com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            r1.h = r0
            java.lang.String r0 = ""
            r1.c = r0
            r1.d = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r13) {
            r12 = this;
            com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter$2 r0 = new com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter$2
            r0.<init>(r12)
            java.lang.String r1 = r12.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            r3 = 2
            java.lang.String r4 = "1"
            java.lang.String r5 = "0"
            r6 = 49
            r7 = 48
            r8 = -1
            r9 = 1
            if (r1 == 0) goto L5f
            com.mbridge.msdk.out.MBRewardVideoHandler r1 = new com.mbridge.msdk.out.MBRewardVideoHandler
            android.content.Context r13 = r13.getApplicationContext()
            java.lang.String r10 = r12.c
            java.lang.String r11 = r12.d
            r1.<init>(r13, r10, r11)
            r12.a = r1
            r1.setRewardVideoListener(r0)
            java.lang.String r13 = r12.f
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto La4
            java.lang.String r13 = r12.f
            int r0 = r13.hashCode()
            if (r0 == r7) goto L46
            if (r0 == r6) goto L3e
            goto L4d
        L3e:
            boolean r13 = r13.equals(r4)
            if (r13 == 0) goto L4d
            r2 = r9
            goto L4e
        L46:
            boolean r13 = r13.equals(r5)
            if (r13 == 0) goto L4d
            goto L4e
        L4d:
            r2 = r8
        L4e:
            if (r2 == 0) goto L59
            if (r2 == r9) goto L53
            goto L58
        L53:
            com.mbridge.msdk.out.MBRewardVideoHandler r13 = r12.a
            r13.playVideoMute(r3)
        L58:
            return
        L59:
            com.mbridge.msdk.out.MBRewardVideoHandler r13 = r12.a
            r13.playVideoMute(r9)
            return
        L5f:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r1 = new com.mbridge.msdk.out.MBBidRewardVideoHandler
            android.content.Context r13 = r13.getApplicationContext()
            java.lang.String r10 = r12.c
            java.lang.String r11 = r12.d
            r1.<init>(r13, r10, r11)
            r12.b = r1
            r1.setRewardVideoListener(r0)
            java.lang.String r13 = r12.f
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto La4
            java.lang.String r13 = r12.f
            int r0 = r13.hashCode()
            if (r0 == r7) goto L8c
            if (r0 == r6) goto L84
            goto L93
        L84:
            boolean r13 = r13.equals(r4)
            if (r13 == 0) goto L93
            r2 = r9
            goto L94
        L8c:
            boolean r13 = r13.equals(r5)
            if (r13 == 0) goto L93
            goto L94
        L93:
            r2 = r8
        L94:
            if (r2 == 0) goto L9f
            if (r2 == r9) goto L99
            goto La4
        L99:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r13 = r12.b
            r13.playVideoMute(r3)
            goto La4
        L9f:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r13 = r12.b
            r13.playVideoMute(r9)
        La4:
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0, android.content.Context r1) {
            r0.a(r1)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener h(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener i(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener j(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener k(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener l(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener m(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener n(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener o(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener p(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener q(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener s(com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.mbridge.msdk.out.MBBidRewardVideoHandler r0 = r2.b
            r1 = 0
            if (r0 == 0) goto La
            r0.setRewardVideoListener(r1)
            r2.b = r1
        La:
            com.mbridge.msdk.out.MBRewardVideoHandler r0 = r2.a
            if (r0 == 0) goto L13
            r0.setRewardVideoListener(r1)
            r2.a = r1
        L13:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9, java.util.Map<java.lang.String, java.lang.Object> r10, com.tkay.core.api.TYBidRequestInfoListener r11) {
            r7 = this;
            java.lang.String r0 = "unitid"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0)
            r7.d = r0
            com.tkay.network.mintegral.MintegralTYInitManager r1 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r5 = 1
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.a(r2, r3, r4, r5, r6)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.g
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean initNetworkObjectByPlacementId(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            if (r3 == 0) goto L33
            java.lang.String r4 = "appid"
            boolean r4 = r3.containsKey(r4)
            if (r4 == 0) goto L33
            java.lang.String r4 = "appkey"
            boolean r4 = r3.containsKey(r4)
            if (r4 == 0) goto L33
            java.lang.String r4 = "unitid"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L33
            java.lang.String r4 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r4)
            r1.d = r4
            java.lang.String r4 = "placement_id"
            boolean r0 = r3.containsKey(r4)
            if (r0 == 0) goto L2e
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r4)
            r1.c = r3
        L2e:
            r1.a(r2)
            r2 = 1
            return r2
        L33:
            r2 = 0
            return r2
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.mbridge.msdk.out.MBRewardVideoHandler r0 = r1.a
            if (r0 == 0) goto L9
            boolean r0 = r0.isReady()
            return r0
        L9:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r0 = r1.b
            if (r0 == 0) goto L12
            boolean r0 = r0.isBidReady()
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r5 = "appid"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            java.lang.String r0 = "appkey"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "unitid"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r2.d = r1
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L52
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L52
            java.lang.String r5 = r2.d
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L29
            goto L52
        L29:
            java.lang.String r5 = "payload"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            r2.e = r5
            java.lang.String r5 = "placement_id"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            r2.c = r5
            java.lang.String r5 = "video_muted"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            r2.f = r5
            com.tkay.network.mintegral.MintegralTYInitManager r5 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            android.content.Context r0 = r3.getApplicationContext()
            com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter$1 r1 = new com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter$1
            r1.<init>(r2, r3, r4)
            r5.initSDK(r0, r4, r1)
            return
        L52:
            com.tkay.core.api.TYCustomLoadListener r3 = r2.mLoadListener
            if (r3 == 0) goto L5f
            com.tkay.core.api.TYCustomLoadListener r3 = r2.mLoadListener
            java.lang.String r4 = ""
            java.lang.String r5 = "mintegral appid, appkey or unitid is empty!"
            r3.onAdLoadError(r4, r5)
        L5f:
            return
    }

    @Override
    public void show(android.app.Activity r4) {
            r3 = this;
            com.mbridge.msdk.out.MBRewardVideoHandler r4 = r3.a
            java.lang.String r0 = "{network_placement_id}"
            if (r4 == 0) goto L29
            java.lang.String r4 = r3.mUserData
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L20
            java.lang.String r4 = r3.mUserData
            boolean r4 = r4.contains(r0)
            if (r4 == 0) goto L20
            java.lang.String r4 = r3.mUserData
            java.lang.String r1 = r3.d
            java.lang.String r4 = r4.replace(r0, r1)
            r3.mUserData = r4
        L20:
            com.mbridge.msdk.out.MBRewardVideoHandler r4 = r3.a
            java.lang.String r1 = r3.mUserId
            java.lang.String r2 = r3.mUserData
            r4.show(r1, r2)
        L29:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r4 = r3.b
            if (r4 == 0) goto L50
            java.lang.String r4 = r3.mUserData
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L47
            java.lang.String r4 = r3.mUserData
            boolean r4 = r4.contains(r0)
            if (r4 == 0) goto L47
            java.lang.String r4 = r3.mUserData
            java.lang.String r1 = r3.d
            java.lang.String r4 = r4.replace(r0, r1)
            r3.mUserData = r4
        L47:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r4 = r3.b
            java.lang.String r0 = r3.mUserId
            java.lang.String r1 = r3.mUserData
            r4.showFromBid(r0, r1)
        L50:
            return
    }

    public void startLoad(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            com.mbridge.msdk.out.MBRewardVideoHandler r0 = r2.a
            if (r0 == 0) goto L12
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 8
            r0.setCustomInfo(r1, r3)
            com.mbridge.msdk.out.MBRewardVideoHandler r0 = r2.a
            r0.load()
        L12:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r0 = r2.b
            if (r0 == 0) goto L25
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 7
            r0.setCustomInfo(r1, r3)
            com.mbridge.msdk.out.MBBidRewardVideoHandler r3 = r2.b
            java.lang.String r0 = r2.e
            r3.loadFromBid(r0)
        L25:
            return
    }
}
