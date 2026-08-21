package com.mbridge.msdk.newinterstitial.a;

public final class a implements com.mbridge.msdk.videocommon.listener.InterVideoOutListener {
    private com.mbridge.msdk.newinterstitial.out.NewInterstitialListener a;
    private java.lang.String b;
    private boolean c;

    public a(com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public a(com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r1, java.lang.String r2, boolean r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    @Override
    public final void onAdClose(com.mbridge.msdk.out.MBridgeIds r2, com.mbridge.msdk.out.RewardInfo r3) {
            r1 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onAdClose(r2, r3)
        L7:
            return
    }

    @Override
    public final void onAdCloseWithIVReward(com.mbridge.msdk.out.MBridgeIds r2, com.mbridge.msdk.out.RewardInfo r3) {
            r1 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onAdCloseWithNIReward(r2, r3)
        L7:
            return
    }

    @Override
    public final void onAdShow(com.mbridge.msdk.out.MBridgeIds r4) {
            r3 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r3.a
            if (r0 == 0) goto L1c
            r0.onAdShow(r4)
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1c
            com.mbridge.msdk.foundation.same.report.f r4 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r0 = r3.b
            boolean r1 = r3.c
            java.lang.String r2 = "niv"
            r4.g(r0, r2, r1)
        L1c:
            return
    }

    @Override
    public final void onEndcardShow(com.mbridge.msdk.out.MBridgeIds r2) {
            r1 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onEndcardShow(r2)
        L7:
            return
    }

    @Override
    public final void onLoadSuccess(com.mbridge.msdk.out.MBridgeIds r4) {
            r3 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r3.a
            if (r0 == 0) goto L1c
            r0.onLoadCampaignSuccess(r4)
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1c
            com.mbridge.msdk.foundation.same.report.f r4 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r0 = r3.b
            boolean r1 = r3.c
            java.lang.String r2 = "niv"
            r4.b(r0, r2, r1)
        L1c:
            return
    }

    @Override
    public final void onShowFail(com.mbridge.msdk.out.MBridgeIds r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r3.a
            if (r0 == 0) goto L1c
            r0.onShowFail(r4, r5)
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1c
            com.mbridge.msdk.foundation.same.report.f r4 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r0 = r3.b
            boolean r1 = r3.c
            java.lang.String r2 = "niv"
            r4.b(r0, r5, r2, r1)
        L1c:
            return
    }

    @Override
    public final void onVideoAdClicked(boolean r1, com.mbridge.msdk.out.MBridgeIds r2) {
            r0 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r1 = r0.a
            if (r1 == 0) goto L7
            r1.onAdClicked(r2)
        L7:
            return
    }

    @Override
    public final void onVideoComplete(com.mbridge.msdk.out.MBridgeIds r2) {
            r1 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onVideoComplete(r2)
        L7:
            return
    }

    @Override
    public final void onVideoLoadFail(com.mbridge.msdk.out.MBridgeIds r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r3.a
            if (r0 == 0) goto L1c
            r0.onResourceLoadFail(r4, r5)
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1c
            com.mbridge.msdk.foundation.same.report.f r4 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r0 = r3.b
            boolean r1 = r3.c
            java.lang.String r2 = "niv"
            r4.a(r0, r5, r2, r1)
        L1c:
            return
    }

    @Override
    public final void onVideoLoadSuccess(com.mbridge.msdk.out.MBridgeIds r4) {
            r3 = this;
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r0 = r3.a
            if (r0 == 0) goto L1c
            r0.onResourceLoadSuccess(r4)
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1c
            com.mbridge.msdk.foundation.same.report.f r4 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r0 = r3.b
            boolean r1 = r3.c
            java.lang.String r2 = "niv"
            r4.c(r0, r2, r1)
        L1c:
            return
    }
}
