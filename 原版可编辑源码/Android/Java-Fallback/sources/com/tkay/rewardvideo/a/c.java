package com.tkay.rewardvideo.a;

public final class c implements com.tkay.rewardvideo.api.TYRewardVideoExListener {
    com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener a;














    protected c(com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void onAgainReward(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$11 r1 = new com.tkay.rewardvideo.a.c$11
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r3, boolean r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$1 r1 = new com.tkay.rewardvideo.a.c$1
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    @Override
    public final void onDownloadConfirm(android.content.Context r3, com.tkay.core.api.TYAdInfo r4, com.tkay.core.api.TYNetworkConfirmInfo r5) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$6 r1 = new com.tkay.rewardvideo.a.c$6
            r1.<init>(r2, r3, r4, r5)
            r0.a(r1)
            return
    }

    @Override
    public final void onReward(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$5 r1 = new com.tkay.rewardvideo.a.c$5
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayClicked(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$10 r1 = new com.tkay.rewardvideo.a.c$10
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayEnd(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$8 r1 = new com.tkay.rewardvideo.a.c$8
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayFailed(com.tkay.core.api.AdError r3, com.tkay.core.api.TYAdInfo r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$9 r1 = new com.tkay.rewardvideo.a.c$9
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayStart(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$7 r1 = new com.tkay.rewardvideo.a.c$7
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdClosed(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$3 r1 = new com.tkay.rewardvideo.a.c$3
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdFailed(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    public final void onRewardedVideoAdLoaded() {
            r0 = this;
            return
    }

    @Override
    public final void onRewardedVideoAdPlayClicked(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$4 r1 = new com.tkay.rewardvideo.a.c$4
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdPlayEnd(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$13 r1 = new com.tkay.rewardvideo.a.c$13
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdPlayFailed(com.tkay.core.api.AdError r3, com.tkay.core.api.TYAdInfo r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$2 r1 = new com.tkay.rewardvideo.a.c$2
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    @Override
    public final void onRewardedVideoAdPlayStart(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.c$12 r1 = new com.tkay.rewardvideo.a.c$12
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}
