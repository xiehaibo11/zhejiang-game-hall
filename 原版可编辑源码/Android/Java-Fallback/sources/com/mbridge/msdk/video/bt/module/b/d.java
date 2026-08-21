package com.mbridge.msdk.video.bt.module.b;

public final class d extends com.mbridge.msdk.video.bt.module.b.c {
    private com.mbridge.msdk.video.bt.module.a.c a;
    private java.lang.String b;

    public d(com.mbridge.msdk.video.bt.module.a.c r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public final void a() {
            r2 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            if (r0 == 0) goto L12
            java.lang.String r0 = "H5ShowRewardListener"
            java.lang.String r1 = "onAdShow"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            java.lang.String r1 = r2.b
            r0.a(r1)
        L12:
            return
    }

    @Override
    public final void a(int r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            if (r0 == 0) goto L12
            java.lang.String r0 = "H5ShowRewardListener"
            java.lang.String r1 = "onAutoLoad"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            java.lang.String r1 = r2.b
            r0.a(r1, r3, r4, r5)
        L12:
            return
    }

    @Override
    public final void a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            if (r0 == 0) goto L12
            java.lang.String r0 = "H5ShowRewardListener"
            java.lang.String r1 = "onShowFail"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            java.lang.String r1 = r2.b
            r0.a(r1, r3)
        L12:
            return
    }

    @Override
    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            if (r0 == 0) goto L12
            java.lang.String r0 = "H5ShowRewardListener"
            java.lang.String r1 = "onVideoComplete"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            java.lang.String r1 = r2.b
            r0.b(r1, r3, r4)
        L12:
            return
    }

    @Override
    public final void a(boolean r3, com.mbridge.msdk.videocommon.b.d r4) {
            r2 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            if (r0 == 0) goto L12
            java.lang.String r0 = "H5ShowRewardListener"
            java.lang.String r1 = "onAdClose"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            java.lang.String r1 = r2.b
            r0.a(r1, r3, r4)
        L12:
            return
    }

    @Override
    public final void a(boolean r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.mbridge.msdk.video.bt.module.a.c r2 = r1.a
            if (r2 == 0) goto L12
            java.lang.String r2 = "H5ShowRewardListener"
            java.lang.String r0 = "onVideoAdClicked"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            com.mbridge.msdk.video.bt.module.a.c r2 = r1.a
            java.lang.String r0 = r1.b
            r2.a(r0, r3, r4)
        L12:
            return
    }

    @Override
    public final void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            if (r0 == 0) goto L12
            java.lang.String r0 = "H5ShowRewardListener"
            java.lang.String r1 = "onEndcardShow"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.video.bt.module.a.c r0 = r2.a
            java.lang.String r1 = r2.b
            r0.c(r1, r3, r4)
        L12:
            return
    }

    @Override
    public final boolean b() {
            r1 = this;
            r0 = 0
            return r0
    }
}
