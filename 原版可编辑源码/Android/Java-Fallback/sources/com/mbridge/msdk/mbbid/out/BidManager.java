package com.mbridge.msdk.mbbid.out;

public class BidManager {
    private com.mbridge.msdk.mbbid.common.a.b a;
    private com.mbridge.msdk.mbbid.out.BidListennning b;
    private boolean c;

    public <T extends com.mbridge.msdk.mbbid.out.CommonBidRequestParams> BidManager(T r5) {
            r4 = this;
            java.lang.String r0 = ""
            if (r5 != 0) goto L6
            r1 = r0
            goto La
        L6:
            java.lang.String r1 = r5.getmPlacementId()
        La:
            if (r5 != 0) goto Le
            r2 = r0
            goto L12
        Le:
            java.lang.String r2 = r5.getmUnitId()
        L12:
            if (r5 != 0) goto L15
            goto L19
        L15:
            java.lang.String r0 = r5.getmFloorPrice()
        L19:
            r4.<init>(r1, r2, r0)
            boolean r0 = r5 instanceof com.mbridge.msdk.mbbid.out.BannerBidRequestParams
            if (r0 == 0) goto L5e
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            r1 = r5
            com.mbridge.msdk.mbbid.out.BannerBidRequestParams r1 = (com.mbridge.msdk.mbbid.out.BannerBidRequestParams) r1
            int r2 = r1.getHeight()
            long r2 = (long) r2
            r0.a(r2)
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            int r1 = r1.getWidth()
            long r1 = (long) r1
            r0.b(r1)
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            r1 = 296(0x128, float:4.15E-43)
            r0.b(r1)
            boolean r0 = r5 instanceof com.mbridge.msdk.mbbid.out.SplashBidRequestParams
            if (r0 == 0) goto L7f
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            com.mbridge.msdk.mbbid.out.SplashBidRequestParams r5 = (com.mbridge.msdk.mbbid.out.SplashBidRequestParams) r5
            boolean r1 = r5.a()
            r0.a(r1)
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            int r5 = r5.getOrientation()
            r0.a(r5)
            com.mbridge.msdk.mbbid.common.a.b r5 = r4.a
            r0 = 297(0x129, float:4.16E-43)
            r5.b(r0)
            goto L7f
        L5e:
            boolean r0 = r5 instanceof com.mbridge.msdk.mbbid.out.AdvancedNativeBidRequestParams
            if (r0 == 0) goto L7f
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            com.mbridge.msdk.mbbid.out.AdvancedNativeBidRequestParams r5 = (com.mbridge.msdk.mbbid.out.AdvancedNativeBidRequestParams) r5
            int r1 = r5.getHeight()
            long r1 = (long) r1
            r0.a(r1)
            com.mbridge.msdk.mbbid.common.a.b r0 = r4.a
            int r5 = r5.getWidth()
            long r1 = (long) r5
            r0.b(r1)
            com.mbridge.msdk.mbbid.common.a.b r5 = r4.a
            r0 = 298(0x12a, float:4.18E-43)
            r5.b(r0)
        L7f:
            return
    }

    public BidManager(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "0"
            r1.<init>(r2, r3, r0)
            return
    }

    public BidManager(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            com.mbridge.msdk.mbbid.common.a.b r0 = new com.mbridge.msdk.mbbid.common.a.b
            r0.<init>(r2, r3, r4)
            r1.a = r0
            return
    }

    public static java.lang.String getBuyerUid(android.content.Context r1) {
            java.lang.String r0 = ""
            java.lang.String r1 = com.mbridge.msdk.mbbid.common.a.a(r1, r0)
            return r1
    }

    public static java.lang.String getBuyerUid(android.content.Context r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            java.lang.String r2 = ""
        L8:
            java.lang.String r1 = com.mbridge.msdk.mbbid.common.a.a(r1, r2)
            return r1
    }

    public void bid() {
            r2 = this;
            com.mbridge.msdk.mbbid.common.a.b r0 = r2.a
            if (r0 == 0) goto La
            boolean r1 = r2.c
            r0.b(r1)
            goto L13
        La:
            com.mbridge.msdk.mbbid.out.BidListennning r0 = r2.b
            if (r0 == 0) goto L13
            java.lang.String r1 = "you need init the class :BidManager"
            r0.onFailed(r1)
        L13:
            return
    }

    public void setBidListener(com.mbridge.msdk.mbbid.out.BidListennning r2) {
            r1 = this;
            r1.b = r2
            com.mbridge.msdk.mbbid.common.a.b r0 = r1.a
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void setRewardPlus(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
