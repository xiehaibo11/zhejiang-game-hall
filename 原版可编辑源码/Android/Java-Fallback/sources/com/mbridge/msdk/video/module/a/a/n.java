package com.mbridge.msdk.video.module.a.a;

public class n extends com.mbridge.msdk.video.module.a.a.j {
    protected int k;
    private boolean l;
    private boolean m;
    private boolean n;
    private boolean o;
    private boolean p;
    private java.util.Map<java.lang.Integer, java.lang.String> q;
    private int r;


    public n(com.mbridge.msdk.foundation.entity.CampaignEx r11, com.mbridge.msdk.videocommon.b.d r12, com.mbridge.msdk.videocommon.download.a r13, java.lang.String r14, java.lang.String r15, com.mbridge.msdk.video.module.a.a r16, int r17, boolean r18) {
            r10 = this;
            r9 = r10
            r0 = r10
            r1 = r11
            r2 = r13
            r3 = r12
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 0
            r9.p = r0
            r9.k = r0
            r0 = -1
            r9.r = r0
            boolean r0 = r9.a
            if (r0 == 0) goto L22
            java.util.Map r0 = r11.getAdvImpList()
            r9.q = r0
        L22:
            int r0 = r11.getVideoCompleteTime()
            r9.k = r0
            return
    }

    @Override
    public void a(int r8, java.lang.Object r9) {
            r7 = this;
            r0 = 2
            r1 = 1
            if (r8 == r0) goto L124
            r2 = 130(0x82, float:1.82E-43)
            if (r8 == r2) goto L116
            r2 = 6
            if (r8 == r2) goto L124
            r2 = 7
            if (r8 == r2) goto Ld9
            r0 = 15
            r2 = 0
            if (r8 == r0) goto L76
            r0 = 16
            if (r8 == r0) goto L124
            switch(r8) {
                case 11: goto L6a;
                case 12: goto L24;
                case 13: goto L1c;
                default: goto L1a;
            }
        L1a:
            goto L13e
        L1c:
            r7.b()     // Catch: java.lang.Throwable -> L144
            r7.c()     // Catch: java.lang.Throwable -> L144
            goto L13e
        L24:
            com.mbridge.msdk.video.module.a.a.n$1 r0 = new com.mbridge.msdk.video.module.a.a.n$1     // Catch: java.lang.Throwable -> L144
            r0.<init>(r7, r9)     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> L144
            boolean r1 = r1.d()     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto L3b
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L144
            r1.execute(r0)     // Catch: java.lang.Throwable -> L144
            goto L3e
        L3b:
            r0.run()     // Catch: java.lang.Throwable -> L144
        L3e:
            r7.d()     // Catch: java.lang.Throwable -> L144
            r7.b()     // Catch: java.lang.Throwable -> L144
            r7.c()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.a.a.j$4 r0 = new com.mbridge.msdk.video.module.a.a.j$4     // Catch: java.lang.Throwable -> L144
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> L144
            boolean r1 = r1.d()     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto L5e
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L144
            r1.execute(r0)     // Catch: java.lang.Throwable -> L144
            goto L61
        L5e:
            r0.run()     // Catch: java.lang.Throwable -> L144
        L61:
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L144
            r0.b(r2)     // Catch: java.lang.Throwable -> L144
            goto L13e
        L6a:
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L144
            r0.b(r2)     // Catch: java.lang.Throwable -> L144
            r7.d()     // Catch: java.lang.Throwable -> L144
            goto L13e
        L76:
            r7.g()     // Catch: java.lang.Throwable -> L144
            r7.f()     // Catch: java.lang.Throwable -> L144
            r7.e()     // Catch: java.lang.Throwable -> L144
            if (r9 == 0) goto L93
            boolean r0 = r9 instanceof com.mbridge.msdk.video.module.MBridgeVideoView.a     // Catch: java.lang.Throwable -> L144
            if (r0 == 0) goto L93
            r0 = r9
            com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = (com.mbridge.msdk.video.module.MBridgeVideoView.a) r0     // Catch: java.lang.Throwable -> L144
            int r2 = r0.a     // Catch: java.lang.Throwable -> L144
            r0 = r9
            com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = (com.mbridge.msdk.video.module.MBridgeVideoView.a) r0     // Catch: java.lang.Throwable -> L144
            int r0 = r0.b     // Catch: java.lang.Throwable -> L144
            r6 = r2
            r2 = r0
            r0 = r6
            goto L94
        L93:
            r0 = r2
        L94:
            if (r2 != 0) goto La0
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.Throwable -> L144
            if (r3 == 0) goto La0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b     // Catch: java.lang.Throwable -> L144
            int r2 = r2.getVideoLength()     // Catch: java.lang.Throwable -> L144
        La0:
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L144
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r7.b     // Catch: java.lang.Throwable -> L144
            int r5 = r7.j     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.b.b.a(r3, r4, r0, r2, r5)     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.Throwable -> L144
            java.util.Map<java.lang.Integer, java.lang.String> r4 = r7.q     // Catch: java.lang.Throwable -> L144
            java.lang.String r5 = r7.g     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.b.b.a(r3, r4, r5, r0)     // Catch: java.lang.Throwable -> L144
            boolean r3 = r7.o     // Catch: java.lang.Throwable -> L144
            if (r3 != 0) goto Lc5
            r7.o = r1     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.Throwable -> L144
            java.lang.String r4 = r7.g     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.b.b.a(r3, r4)     // Catch: java.lang.Throwable -> L144
        Lc5:
            boolean r3 = r7.p     // Catch: java.lang.Throwable -> L144
            if (r3 != 0) goto Ld6
            int r3 = r7.k     // Catch: java.lang.Throwable -> L144
            if (r3 != 0) goto Lce
            goto Ld0
        Lce:
            int r2 = r7.k     // Catch: java.lang.Throwable -> L144
        Ld0:
            if (r0 < r2) goto Ld6
            r7.p = r1     // Catch: java.lang.Throwable -> L144
            r8 = 17
        Ld6:
            r7.r = r0     // Catch: java.lang.Throwable -> L144
            goto L13e
        Ld9:
            boolean r2 = r7.a     // Catch: java.lang.Throwable -> L144
            if (r2 == 0) goto L13e
            if (r9 == 0) goto L13e
            boolean r2 = r9 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L144
            if (r2 == 0) goto L13e
            r2 = r9
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L144
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L144
            if (r2 != r0) goto L100
            boolean r0 = r7.m     // Catch: java.lang.Throwable -> L144
            if (r0 != 0) goto L13e
            r7.m = r1     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L144
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.b.b.b(r0, r1)     // Catch: java.lang.Throwable -> L144
            goto L13e
        L100:
            if (r2 != r1) goto L13e
            boolean r0 = r7.l     // Catch: java.lang.Throwable -> L144
            if (r0 != 0) goto L13e
            r7.l = r1     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L144
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.b.b.c(r0, r1)     // Catch: java.lang.Throwable -> L144
            goto L13e
        L116:
            boolean r0 = r9 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L144
            if (r0 == 0) goto L13e
            r0 = r9
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L144
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L144
            r7.k = r0     // Catch: java.lang.Throwable -> L144
            goto L13e
        L124:
            boolean r0 = r7.a     // Catch: java.lang.Throwable -> L144
            if (r0 == 0) goto L13e
            boolean r0 = r7.n     // Catch: java.lang.Throwable -> L144
            if (r0 != 0) goto L13e
            r7.n = r1     // Catch: java.lang.Throwable -> L144
            r7.d()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L144
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.module.b.b.e(r0, r1)     // Catch: java.lang.Throwable -> L144
        L13e:
            com.mbridge.msdk.video.module.a.a r0 = r7.i     // Catch: java.lang.Throwable -> L144
            r0.a(r8, r9)     // Catch: java.lang.Throwable -> L144
            goto L14e
        L144:
            r8 = move-exception
            java.lang.String r9 = r8.getMessage()
            java.lang.String r0 = "NotifyListener"
            com.mbridge.msdk.foundation.tools.z.c(r0, r9, r8)
        L14e:
            return
    }
}
