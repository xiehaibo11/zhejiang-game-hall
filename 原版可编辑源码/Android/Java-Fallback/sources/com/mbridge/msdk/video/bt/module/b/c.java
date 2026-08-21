package com.mbridge.msdk.video.bt.module.b;

public class c implements com.mbridge.msdk.video.bt.module.b.h {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a() {
            r2 = this;
            java.lang.String r0 = "ShowRewardListener"
            java.lang.String r1 = "onAdShow"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    @Override
    public void a(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onAutoLoad: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
            return
    }

    @Override
    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onShowFail:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onVideoComplete: "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            return
    }

    @Override
    public void a(boolean r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onAdCloseWithIVReward: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "  "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public void a(boolean r3, com.mbridge.msdk.videocommon.b.d r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onAdClose:isCompleteView:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",reward:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public void a(boolean r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onVideoAdClicked:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
            return
    }

    @Override
    public void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onEndcardShow: "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ShowRewardListener"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            return
    }

    @Override
    public boolean b() {
            r1 = this;
            r0 = 0
            return r0
    }
}
