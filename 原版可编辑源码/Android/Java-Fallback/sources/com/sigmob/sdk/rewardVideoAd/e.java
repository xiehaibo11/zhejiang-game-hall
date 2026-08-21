package com.sigmob.sdk.rewardVideoAd;

public class e extends com.sigmob.sdk.base.common.ai {
    private com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver d;
    private boolean e;

    interface a extends com.sigmob.sdk.base.common.m.b {
        void c(com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2);

        void f(com.sigmob.sdk.base.models.BaseAdUnit r1);

        void g(com.sigmob.sdk.base.models.BaseAdUnit r1);

        void h(com.sigmob.sdk.base.models.BaseAdUnit r1);

        void i(com.sigmob.sdk.base.models.BaseAdUnit r1);
    }

    protected e(com.sigmob.sdk.base.common.m.b r1, boolean r2) {
            r0 = this;
            r0.<init>(r1)
            r0.e = r2
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r12, android.os.Bundle r13) {
            r11 = this;
            super.a(r12, r13)
            com.sigmob.sdk.base.common.m$b r0 = r11.b
            boolean r0 = r0 instanceof com.sigmob.sdk.rewardVideoAd.e.a
            if (r0 == 0) goto L19
            com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver r0 = new com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver
            com.sigmob.sdk.base.common.m$b r1 = r11.b
            com.sigmob.sdk.rewardVideoAd.e$a r1 = (com.sigmob.sdk.rewardVideoAd.e.a) r1
            java.lang.String r2 = r11.a
            r0.<init>(r12, r1, r2)
            r11.d = r0
            r0.a(r0)
        L19:
            int r0 = r12.getAd_type()
            r1 = 4
            r2 = 1
            if (r0 == r2) goto L27
            int r0 = r12.getAd_type()
            if (r0 != r1) goto L45
        L27:
            int r0 = r12.getCreativeType()
            com.sigmob.sdk.base.common.l r3 = com.sigmob.sdk.base.common.l.h
            int r3 = r3.a()
            if (r0 != r3) goto L36
            java.lang.String r0 = "mraid"
            goto L47
        L36:
            int r0 = r12.getCreativeType()
            com.sigmob.sdk.base.common.l r3 = com.sigmob.sdk.base.common.l.i
            int r3 = r3.a()
            if (r0 != r3) goto L45
            java.lang.String r0 = "mraid_two"
            goto L47
        L45:
            java.lang.String r0 = "reward"
        L47:
            if (r13 == 0) goto L50
            boolean r3 = r11.e
            java.lang.String r4 = "isHalfInterstitial"
            r13.putBoolean(r4, r3)
        L50:
            r6 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r5 = "vopen"
            r7 = r12
            com.sigmob.sdk.base.common.z.a(r5, r6, r7, r8, r9, r10)
            int r3 = r12.getAd_type()
            if (r3 != r1) goto L77
            com.sigmob.sdk.base.models.rtb.MaterialMeta r12 = r12.getMaterial()
            java.lang.Integer r12 = r12.theme_data
            int r12 = r12.intValue()
            if (r12 == r2) goto L70
            boolean r12 = r11.e
            if (r12 == 0) goto L77
        L70:
            android.content.Context r12 = com.sigmob.sdk.b.b()
            java.lang.Class<com.sigmob.sdk.base.common.TransparentAdActivity> r1 = com.sigmob.sdk.base.common.TransparentAdActivity.class
            goto L7d
        L77:
            android.content.Context r12 = com.sigmob.sdk.b.b()
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r1 = com.sigmob.sdk.base.common.AdActivity.class
        L7d:
            java.lang.String r2 = r11.a
            com.sigmob.sdk.base.common.AdActivity.a(r12, r1, r2, r13, r0)
            return
    }

    @Override
    public void a(java.util.Map<java.lang.String, java.lang.Object> r1, com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r0 = this;
            super.a(r1, r2)
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            super.b(r1)
            com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver r1 = r0.d
            if (r1 == 0) goto La
            r1.b(r1)
        La:
            return
    }
}
