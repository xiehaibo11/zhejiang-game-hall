package com.mbridge.msdk.video.module;

public class MBridgeContainerView extends com.mbridge.msdk.video.module.MBridgeBaseView implements com.mbridge.msdk.video.js.e, com.mbridge.msdk.video.js.g {
    private int A;
    private boolean B;
    private boolean C;
    private boolean D;
    private boolean E;
    private boolean F;
    private boolean G;
    private int H;
    private boolean I;
    private boolean J;
    private int K;
    private int L;
    private int M;
    private int N;
    private int O;
    private java.lang.String P;
    private com.mbridge.msdk.video.js.factory.b Q;
    private com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView R;
    private boolean S;
    private boolean T;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> U;
    private com.mbridge.msdk.video.module.MBridgePlayableView n;
    private com.mbridge.msdk.video.module.MBridgeClickCTAView o;
    private com.mbridge.msdk.video.module.MBridgeClickMiniCardView p;
    private com.mbridge.msdk.video.module.MBridgeNativeEndCardView q;
    private com.mbridge.msdk.video.module.MBridgeH5EndCardView r;
    private com.mbridge.msdk.video.module.MBridgeVideoEndCoverView s;
    private com.mbridge.msdk.video.module.MBridgeVastEndCardView t;
    private com.mbridge.msdk.video.module.MBridgeLandingPageView u;
    private com.mbridge.msdk.video.module.MBridgeAlertWebview v;
    private java.lang.String w;
    private int x;
    private int y;
    private int z;





    public MBridgeContainerView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 1
            r1.y = r2
            r1.z = r2
            r1.A = r2
            r0 = 0
            r1.B = r0
            r1.C = r0
            r1.D = r0
            r1.E = r0
            r1.F = r2
            r1.G = r0
            r1.I = r0
            r1.J = r0
            r1.S = r0
            r1.T = r0
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.U = r2
            return
    }

    public MBridgeContainerView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1
            r0.y = r1
            r0.z = r1
            r0.A = r1
            r2 = 0
            r0.B = r2
            r0.C = r2
            r0.D = r2
            r0.E = r2
            r0.F = r1
            r0.G = r2
            r0.I = r2
            r0.J = r2
            r0.S = r2
            r0.T = r2
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.U = r1
            return
    }

    static java.lang.String a(com.mbridge.msdk.video.module.MBridgeContainerView r0) {
            java.lang.String r0 = r0.w
            return r0
    }

    private void a() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            boolean r0 = r0.isDynamicView()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            java.lang.String r1 = r1.getendcard_url()
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.j(r1)
            if (r0 == 0) goto L1c
            if (r1 != 0) goto L1c
            r2.e()
            return
        L1c:
            int r0 = r2.y
            r1 = 2
            if (r0 != r1) goto L29
            boolean r0 = r2.I
            if (r0 != 0) goto L29
            r2.b()
            goto L2c
        L29:
            r2.e()
        L2c:
            return
    }

    private void a(android.view.View r3) {
            r2 = this;
            if (r3 == 0) goto L18
            android.view.ViewParent r0 = r3.getParent()     // Catch: java.lang.Throwable -> Le
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L18
            r0.removeView(r3)     // Catch: java.lang.Throwable -> Le
            goto L18
        Le:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r3)
        L18:
            return
    }

    private void a(com.mbridge.msdk.video.js.factory.b r13, java.lang.Integer r14) {
            r12 = this;
            r12.Q = r13
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b
            if (r0 == 0) goto L23d
            if (r14 != 0) goto L12
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            int r14 = r14.getVideo_end_type()
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)
        L12:
            boolean r0 = r12.isLast()
            if (r0 != 0) goto L1b
            r12.h()
        L1b:
            int r14 = r14.intValue()
            r0 = 1
            if (r14 == r0) goto L23d
            r1 = 3
            if (r14 == r1) goto L218
            r1 = 4
            if (r14 == r1) goto L1f7
            r1 = 5
            if (r14 == r1) goto L23d
            int r14 = r12.y
            java.lang.String r2 = "MBridgeBaseView"
            r3 = 2
            if (r14 != r3) goto Ldb
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            boolean r14 = r14.isDynamicView()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b
            java.lang.String r0 = r0.getendcard_url()
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.j(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r12.b
            if (r4 == 0) goto L4b
            if (r14 == 0) goto L4b
            if (r0 != 0) goto L4b
            return
        L4b:
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            int r14 = r14.getAdSpaceT()
            if (r14 == r3) goto L23d
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = r12.r
            if (r14 != 0) goto L60
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView
            android.content.Context r0 = r12.a
            r14.<init>(r0)
            r12.r = r14
        L60:
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            int r14 = r14.getDynamicTempCode()
            if (r14 != r1) goto L7b
            com.mbridge.msdk.video.module.a.a r14 = r12.e
            if (r14 == 0) goto L7b
            com.mbridge.msdk.video.module.a.a r14 = r12.e
            boolean r14 = r14 instanceof com.mbridge.msdk.video.module.a.a.j
            if (r14 == 0) goto L7b
            com.mbridge.msdk.video.module.a.a r14 = r12.e
            com.mbridge.msdk.video.module.a.a.j r14 = (com.mbridge.msdk.video.module.a.a.j) r14
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b
            r14.a(r0)
        L7b:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = r12.r
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b
            r14.setCampaign(r0)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = r12.r
            int r0 = r12.z
            r14.setCloseDelayShowTime(r0)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = r12.r
            com.mbridge.msdk.video.module.a.a.h r0 = new com.mbridge.msdk.video.module.a.a.h
            com.mbridge.msdk.video.module.a.a r1 = r12.e
            r0.<init>(r1)
            r14.setNotifyListener(r0)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = r12.r
            java.lang.String r0 = r12.w
            r14.setUnitId(r0)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r3 = r12.r
            java.lang.String r4 = r12.P
            int r5 = r12.K
            int r6 = r12.L
            int r7 = r12.M
            int r8 = r12.N
            r3.setNotchValue(r4, r5, r6, r7, r8)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r14 = r12.r
            r14.preLoadData(r13)
            java.lang.String r13 = "preload H5Endcard"
            com.mbridge.msdk.foundation.tools.z.a(r2, r13)
            boolean r13 = r12.D
            if (r13 != 0) goto L23d
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "showTransparent = "
            r13.append(r14)
            boolean r14 = r12.D
            r13.append(r14)
            java.lang.String r14 = " addview"
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r13)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r13 = r12.r
            r12.addView(r13)
            goto L23d
        Ldb:
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            r1 = 0
            if (r14 == 0) goto Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r14 = r14.getRewardTemplateMode()
            if (r14 == 0) goto Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r14 = r14.getRewardTemplateMode()
            int r14 = r14.c()
            r10 = r14
            goto Lf5
        Lf4:
            r10 = r1
        Lf5:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = r12.q
            if (r14 != 0) goto L128
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            boolean r14 = r14.isDynamicView()
            if (r14 == 0) goto L105
            r12.i()
            goto L128
        L105:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView
            android.content.Context r5 = r12.a
            r6 = 0
            r7 = 0
            r8 = -1
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r12.b
            int r4 = r4.getAdSpaceT()
            if (r4 != r3) goto L116
            r9 = r0
            goto L117
        L116:
            r9 = r1
        L117:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.b
            int r11 = r1.getMof_tplid()
            r4 = r14
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            r12.q = r14
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.b
            r14.setCampaign(r1)
        L128:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = r12.q
            r14.setLayout()
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            boolean r14 = r14.isDynamicView()
            if (r14 == 0) goto L1ca
            com.mbridge.msdk.video.dynview.moffer.a r14 = com.mbridge.msdk.video.dynview.moffer.a.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r12.b
            java.lang.String r4 = r4.getRequestId()
            r1.append(r4)
            java.lang.String r4 = "_"
            r1.append(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r12.b
            java.lang.String r5 = r5.getId()
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            boolean r14 = r14.a(r1)
            if (r14 == 0) goto L197
            com.mbridge.msdk.video.dynview.moffer.a r14 = com.mbridge.msdk.video.dynview.moffer.a.a()     // Catch: java.lang.Exception -> L18e
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r12.q     // Catch: java.lang.Exception -> L18e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L18e
            r1.<init>()     // Catch: java.lang.Exception -> L18e
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r12.b     // Catch: java.lang.Exception -> L18e
            java.lang.String r3 = r3.getRequestId()     // Catch: java.lang.Exception -> L18e
            r1.append(r3)     // Catch: java.lang.Exception -> L18e
            r1.append(r4)     // Catch: java.lang.Exception -> L18e
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r12.b     // Catch: java.lang.Exception -> L18e
            java.lang.String r3 = r3.getId()     // Catch: java.lang.Exception -> L18e
            r1.append(r3)     // Catch: java.lang.Exception -> L18e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L18e
            com.mbridge.msdk.video.module.a.a.h r3 = new com.mbridge.msdk.video.module.a.a.h     // Catch: java.lang.Exception -> L18e
            com.mbridge.msdk.video.module.a.a r4 = r12.e     // Catch: java.lang.Exception -> L18e
            r3.<init>(r4)     // Catch: java.lang.Exception -> L18e
            r14.a(r0, r1, r3)     // Catch: java.lang.Exception -> L18e
            goto L1ca
        L18e:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
            goto L1ca
        L197:
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b     // Catch: java.lang.Exception -> L1c2
            java.lang.String r14 = r14.getendcard_url()     // Catch: java.lang.Exception -> L1c2
            java.lang.String r1 = "mof"
            java.lang.String r14 = com.mbridge.msdk.foundation.tools.ak.a(r14, r1)     // Catch: java.lang.Exception -> L1c2
            boolean r1 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Exception -> L1c2
            if (r1 != 0) goto L1ca
            int r14 = java.lang.Integer.parseInt(r14)     // Catch: java.lang.Exception -> L1c2
            if (r14 != r0) goto L1ca
            com.mbridge.msdk.video.dynview.moffer.a r14 = com.mbridge.msdk.video.dynview.moffer.a.a()     // Catch: java.lang.Exception -> L1c2
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b     // Catch: java.lang.Exception -> L1c2
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r1 = r12.q     // Catch: java.lang.Exception -> L1c2
            com.mbridge.msdk.video.module.a.a.h r4 = new com.mbridge.msdk.video.module.a.a.h     // Catch: java.lang.Exception -> L1c2
            com.mbridge.msdk.video.module.a.a r5 = r12.e     // Catch: java.lang.Exception -> L1c2
            r4.<init>(r5)     // Catch: java.lang.Exception -> L1c2
            r14.a(r0, r1, r4, r3)     // Catch: java.lang.Exception -> L1c2
            goto L1ca
        L1c2:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L1ca:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = r12.q
            java.lang.String r0 = r12.w
            r14.setUnitId(r0)
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = r12.q
            int r0 = r12.z
            r14.setCloseBtnDelay(r0)
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = r12.q
            com.mbridge.msdk.video.module.a.a.h r0 = new com.mbridge.msdk.video.module.a.a.h
            com.mbridge.msdk.video.module.a.a r1 = r12.e
            r0.<init>(r1)
            r14.setNotifyListener(r0)
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r14 = r12.q
            r14.preLoadData(r13)
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r13 = r12.q
            int r14 = r12.K
            int r0 = r12.L
            int r1 = r12.M
            int r2 = r12.N
            r13.setNotchPadding(r14, r0, r1, r2)
            goto L23d
        L1f7:
            com.mbridge.msdk.video.module.MBridgeLandingPageView r13 = r12.u
            if (r13 != 0) goto L204
            com.mbridge.msdk.video.module.MBridgeLandingPageView r13 = new com.mbridge.msdk.video.module.MBridgeLandingPageView
            android.content.Context r14 = r12.a
            r13.<init>(r14)
            r12.u = r13
        L204:
            com.mbridge.msdk.video.module.MBridgeLandingPageView r13 = r12.u
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r12.b
            r13.setCampaign(r14)
            com.mbridge.msdk.video.module.MBridgeLandingPageView r13 = r12.u
            com.mbridge.msdk.video.module.a.a.h r14 = new com.mbridge.msdk.video.module.a.a.h
            com.mbridge.msdk.video.module.a.a r0 = r12.e
            r14.<init>(r0)
            r13.setNotifyListener(r14)
            goto L23d
        L218:
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r14 = r12.t
            if (r14 != 0) goto L225
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r14 = new com.mbridge.msdk.video.module.MBridgeVastEndCardView
            android.content.Context r0 = r12.a
            r14.<init>(r0)
            r12.t = r14
        L225:
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r14 = r12.t
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b
            r14.setCampaign(r0)
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r14 = r12.t
            com.mbridge.msdk.video.module.a.a.k r0 = new com.mbridge.msdk.video.module.a.a.k
            com.mbridge.msdk.video.module.a.a r1 = r12.e
            r0.<init>(r1)
            r14.setNotifyListener(r0)
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r14 = r12.t
            r14.preLoadData(r13)
        L23d:
            return
    }

    static void a(com.mbridge.msdk.video.module.MBridgeContainerView r0, com.mbridge.msdk.video.js.factory.b r1, java.lang.Integer r2) {
            r0.a(r1, r2)
            return
    }

    private void b() {
            r7 = this;
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            if (r0 != 0) goto Le
            com.mbridge.msdk.video.js.factory.b r0 = r7.Q
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r7.a(r0, r1)
        Le:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            r1 = 1
            if (r0 == 0) goto L7a
            boolean r0 = r0.isLoadSuccess()
            if (r0 == 0) goto L7a
            r7.I = r1
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            r7.addView(r0)
            r7.webviewshow()
            android.content.res.Resources r0 = r7.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            r7.onConfigurationChanged(r0)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            r0.excuteTask()
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r7.r
            java.lang.String r2 = r7.P
            int r3 = r7.K
            int r4 = r7.L
            int r5 = r7.M
            int r6 = r7.N
            r1.setNotchValue(r2, r3, r4, r5, r6)
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            java.lang.String r1 = r1.getRequestId()
            r0.k(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            java.lang.String r1 = r1.getRequestIdNotice()
            r0.l(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            java.lang.String r1 = r1.getId()
            r0.n(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            boolean r1 = r1.isMraid()
            if (r1 == 0) goto L6d
            int r1 = com.mbridge.msdk.foundation.entity.p.a
            goto L6f
        L6d:
            int r1 = com.mbridge.msdk.foundation.entity.p.b
        L6f:
            r0.a(r1)
            android.content.Context r1 = r7.a
            java.lang.String r2 = r7.w
            com.mbridge.msdk.foundation.same.report.c.a(r0, r1, r2)
            goto L8c
        L7a:
            r7.e()
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            if (r0 == 0) goto L8c
            r2 = 3
            java.lang.String r3 = "timeout"
            r0.reportRenderResult(r3, r2)
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            r0.setError(r1)
        L8c:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r7.r
            if (r0 == 0) goto L95
            java.lang.String r1 = r7.w
            r0.setUnitId(r1)
        L95:
            return
    }

    private void b(int r3) {
            r2 = this;
            r0 = -3
            if (r3 == r0) goto L72
            r0 = -2
            if (r3 == r0) goto L35
            com.mbridge.msdk.video.module.MBridgeClickCTAView r3 = r2.o
            if (r3 != 0) goto L13
            com.mbridge.msdk.video.module.MBridgeClickCTAView r3 = new com.mbridge.msdk.video.module.MBridgeClickCTAView
            android.content.Context r0 = r2.a
            r3.<init>(r0)
            r2.o = r3
        L13:
            com.mbridge.msdk.video.module.MBridgeClickCTAView r3 = r2.o
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            r3.setCampaign(r0)
            com.mbridge.msdk.video.module.MBridgeClickCTAView r3 = r2.o
            java.lang.String r0 = r2.w
            r3.setUnitId(r0)
            com.mbridge.msdk.video.module.MBridgeClickCTAView r3 = r2.o
            com.mbridge.msdk.video.module.a.a.h r0 = new com.mbridge.msdk.video.module.a.a.h
            com.mbridge.msdk.video.module.a.a r1 = r2.e
            r0.<init>(r1)
            r3.setNotifyListener(r0)
            com.mbridge.msdk.video.module.MBridgeClickCTAView r3 = r2.o
            com.mbridge.msdk.video.js.factory.b r0 = r2.Q
            r3.preLoadData(r0)
            goto L72
        L35:
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.b
            if (r3 == 0) goto L72
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.b
            int r3 = r3.getVideo_end_type()
            r0 = 2
            if (r3 != r0) goto L72
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = r2.p
            if (r3 != 0) goto L4f
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = new com.mbridge.msdk.video.module.MBridgeClickMiniCardView
            android.content.Context r0 = r2.a
            r3.<init>(r0)
            r2.p = r3
        L4f:
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = r2.p
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            r3.setCampaign(r0)
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = r2.p
            com.mbridge.msdk.video.module.a.a.f r0 = new com.mbridge.msdk.video.module.a.a.f
            com.mbridge.msdk.video.module.a.a r1 = r2.e
            r0.<init>(r3, r1)
            r3.setNotifyListener(r0)
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = r2.p
            com.mbridge.msdk.video.js.factory.b r0 = r2.Q
            r3.preLoadData(r0)
            r2.setMatchParent()
            r2.f()
            r2.h()
        L72:
            return
    }

    private void e() {
            r3 = this;
            r0 = 1
            r3.y = r0
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r1 = r3.q
            if (r1 != 0) goto L11
            com.mbridge.msdk.video.js.factory.b r1 = r3.Q
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.a(r1, r2)
        L11:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r1 = r3.q
            r3.addView(r1)
            android.content.res.Resources r1 = r3.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            r3.onConfigurationChanged(r1)
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r1 = r3.q
            r1.notifyShowListener()
            r3.T = r0
            r3.bringToFront()
            return
    }

    private void f() {
            r3 = this;
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r3.p
            if (r0 != 0) goto L8
            r0 = -2
            r3.b(r0)
        L8:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2 = 13
            r0.addRule(r2, r1)
            boolean r1 = r3.D
            if (r1 == 0) goto L23
            boolean r1 = r3.F
            if (r1 == 0) goto L23
            r1 = 0
            r3.F = r1
            r1 = 1
            r0.width = r1
            r0.height = r1
        L23:
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r1 = r3.p
            r3.addView(r1, r0)
            return
    }

    private void g() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r2.v
            if (r0 != 0) goto L19
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = new com.mbridge.msdk.video.module.MBridgeAlertWebview
            android.content.Context r1 = r2.a
            r0.<init>(r1)
            r2.v = r0
            java.lang.String r1 = r2.w
            r0.setUnitId(r1)
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r2.v
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            r0.setCampaign(r1)
        L19:
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r2.v
            com.mbridge.msdk.video.js.factory.b r1 = r2.Q
            r0.preLoadData(r1)
            return
    }

    private void h() {
            r5 = this;
            r0 = 0
            r5.C = r0
            r5.T = r0
            android.view.ViewParent r1 = r5.getParent()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            if (r1 == 0) goto L25
            r2 = r0
        Le:
            int r3 = r1.getChildCount()
            if (r0 >= r3) goto L25
            android.view.View r3 = r1.getChildAt(r2)
            boolean r4 = r3 instanceof com.mbridge.msdk.video.module.MBridgeContainerView
            if (r4 != 0) goto L20
            r1.bringChildToFront(r3)
            goto L22
        L20:
            int r2 = r2 + 1
        L22:
            int r0 = r0 + 1
            goto Le
        L25:
            return
    }

    private void i() {
            r11 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b
            java.lang.String r0 = r0.getendcard_url()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 404(0x194, float:5.66E-43)
            if (r1 != 0) goto L28
            java.lang.String r1 = "ecid"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)     // Catch: java.lang.Throwable -> L1e
            int r2 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L1e
            goto L28
        L1e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L28:
            r7 = r2
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView
            android.content.Context r4 = r11.a
            r5 = 0
            r6 = 1
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.b
            int r1 = r1.getAdSpaceT()
            r2 = 2
            if (r1 != r2) goto L3a
            r1 = 1
            goto L3b
        L3a:
            r1 = 0
        L3b:
            r8 = r1
            int r9 = r11.l
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.b
            int r10 = r1.getMof_tplid()
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            r11.q = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.b
            int r0 = r0.getDynamicTempCode()
            r1 = 5
            if (r0 != r1) goto L6e
            com.mbridge.msdk.video.module.a.a r0 = r11.e
            if (r0 == 0) goto L66
            com.mbridge.msdk.video.module.a.a r0 = r11.e
            boolean r0 = r0 instanceof com.mbridge.msdk.video.module.a.a.j
            if (r0 == 0) goto L66
            com.mbridge.msdk.video.module.a.a r0 = r11.e
            com.mbridge.msdk.video.module.a.a.j r0 = (com.mbridge.msdk.video.module.a.a.j) r0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.b
            r0.a(r1)
        L66:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r11.q
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.b
            r0.setCampaign(r1)
            goto L75
        L6e:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r11.q
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.b
            r0.setCampaign(r1)
        L75:
            return
    }

    public void addOrderViewData(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.U = r1
            return
    }

    @Override
    public void addView(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L9
            r1.a(r2)
            super.addView(r2)
            goto L10
        L9:
            java.lang.String r2 = "MBridgeBaseView"
            java.lang.String r0 = "view is null"
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        L10:
            return
    }

    @Override
    public void addView(android.view.View r1, android.view.ViewGroup.LayoutParams r2) {
            r0 = this;
            if (r1 == 0) goto L9
            r0.a(r1)
            super.addView(r1, r2)
            goto L10
        L9:
            java.lang.String r1 = "MBridgeBaseView"
            java.lang.String r2 = "view is null"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
        L10:
            return
    }

    public boolean canBackPress() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r2.q
            r1 = 0
            if (r0 == 0) goto L6
            goto L20
        L6:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.r
            if (r0 == 0) goto Lf
            boolean r1 = r0.canBackPress()
            goto L20
        Lf:
            com.mbridge.msdk.video.module.MBridgeLandingPageView r0 = r2.u
            if (r0 == 0) goto L18
            boolean r1 = r0.canBackPress()
            goto L20
        L18:
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r2.n
            if (r0 == 0) goto L20
            boolean r1 = r0.canBackPress()
        L20:
            return r1
    }

    @Override
    public void configurationChanged(int r1, int r2, int r3) {
            r0 = this;
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = r0.p
            if (r3 == 0) goto Lf
            int r3 = r3.getVisibility()
            if (r3 != 0) goto Lf
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r3 = r0.p
            r3.resizeMiniCard(r1, r2)
        Lf:
            return
    }

    @Override
    public void defaultShow() {
            r0 = this;
            super.defaultShow()
            return
    }

    @Override
    public boolean endCardShowing() {
            r1 = this;
            boolean r0 = r1.B
            return r0
    }

    public boolean endcardIsPlayable() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r1.r
            if (r0 == 0) goto Lc
            boolean r0 = r0.isPlayable()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public com.mbridge.msdk.video.module.MBridgeH5EndCardView getH5EndCardView() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r1.r
            if (r0 != 0) goto L6
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r1.n
        L6:
            return r0
    }

    public com.mbridge.msdk.foundation.entity.CampaignEx getReSetCampaign() {
            r6 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.b
            boolean r0 = r0.isDynamicView()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.b
            java.lang.String r0 = r0.getendcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            return r1
        L17:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r6.U
            int r0 = r0.size()
            r2 = 0
            r3 = r2
        L1f:
            if (r3 >= r0) goto L43
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r6.U
            java.lang.Object r4 = r4.get(r3)
            if (r4 == 0) goto L40
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r6.U
            java.lang.Object r4 = r4.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            java.lang.String r4 = r4.getId()
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r6.b
            java.lang.String r5 = r5.getId()
            if (r4 != r5) goto L40
            int r2 = r3 + (-1)
            goto L43
        L40:
            int r3 = r3 + 1
            goto L1f
        L43:
            if (r2 < 0) goto L58
            if (r2 >= r0) goto L58
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r6.U
            java.lang.Object r0 = r0.get(r2)
            if (r0 == 0) goto L58
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r6.U
            java.lang.Object r0 = r0.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            return r0
        L58:
            return r1
    }

    public boolean getShowingTransparent() {
            r1 = this;
            boolean r0 = r1.D
            return r0
    }

    public java.lang.String getUnitID() {
            r1 = this;
            java.lang.String r0 = r1.w
            return r0
    }

    public int getVideoInteractiveType() {
            r1 = this;
            int r0 = r1.x
            return r0
    }

    public int getVideoSkipTime() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    public void handlerPlayableException(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r1.r
            if (r0 == 0) goto Lb
            r0.handlerPlayableException(r2)
            boolean r2 = r1.I
            if (r2 == 0) goto Le
        Lb:
            r1.a()
        Le:
            return
    }

    @Override
    public void hideAlertWebview() {
            r3 = this;
            boolean r0 = r3.isLast()
            if (r0 != 0) goto L40
            boolean r0 = r3.S
            if (r0 == 0) goto L14
            boolean r0 = r3.T
            if (r0 != 0) goto L14
            r3.h()
            r0 = 0
            r3.S = r0
        L14:
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r3.v
            if (r0 == 0) goto L40
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L40
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r3.v
            r3.removeView(r0)
            com.mbridge.msdk.video.module.MBridgeClickCTAView r0 = r3.o
            if (r0 == 0) goto L40
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L40
            r3.setWrapContent()
            android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.RelativeLayout.LayoutParams
            if (r1 == 0) goto L40
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r1 = 12
            r2 = -1
            r0.addRule(r1, r2)
        L40:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    public void install(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r2 = this;
            com.mbridge.msdk.video.module.a.a r0 = r2.e
            r1 = 105(0x69, float:1.47E-43)
            r0.a(r1, r3)
            return
    }

    public boolean isLast() {
            r2 = this;
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1 = 0
            if (r0 == 0) goto L11
            int r0 = r0.indexOfChild(r2)
            if (r0 != 0) goto L11
            r0 = 1
            r1 = r0
        L11:
            return r1
    }

    @Override
    public void ivRewardAdsWithoutVideo(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.video.module.a.a r0 = r2.e
            r1 = 103(0x67, float:1.44E-43)
            r0.a(r1, r3)
            return
    }

    public boolean miniCardLoaded() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r1.p
            if (r0 == 0) goto Lc
            boolean r0 = r0.isLoadSuccess()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public boolean miniCardShowing() {
            r1 = this;
            boolean r0 = r1.C
            return r0
    }

    @Override
    public void notifyCloseBtn(int r2) {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r1.n
            if (r0 == 0) goto L7
            r0.notifyCloseBtn(r2)
        L7:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r1.r
            if (r0 == 0) goto Le
            r0.notifyCloseBtn(r2)
        Le:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r6) {
            r5 = this;
            super.onConfigurationChanged(r6)
            r0 = 8
            com.mbridge.msdk.video.module.MBridgeBaseView[] r1 = new com.mbridge.msdk.video.module.MBridgeBaseView[r0]
            com.mbridge.msdk.video.module.MBridgePlayableView r2 = r5.n
            r3 = 0
            r1[r3] = r2
            com.mbridge.msdk.video.module.MBridgeClickCTAView r2 = r5.o
            r4 = 1
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r5.p
            r4 = 2
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r2 = r5.q
            r4 = 3
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r5.r
            r4 = 4
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r2 = r5.t
            r4 = 5
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeLandingPageView r2 = r5.u
            r4 = 6
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r2 = r5.s
            r4 = 7
            r1[r4] = r2
        L2f:
            if (r3 >= r0) goto L57
            r2 = r1[r3]
            if (r2 == 0) goto L3d
            boolean r4 = r2 instanceof com.mbridge.msdk.video.module.MBridgeClickMiniCardView
            if (r4 == 0) goto L3d
            r2.onSelfConfigurationChanged(r6)
            goto L54
        L3d:
            if (r2 == 0) goto L54
            int r4 = r2.getVisibility()
            if (r4 != 0) goto L54
            android.view.ViewParent r4 = r2.getParent()
            if (r4 == 0) goto L54
            boolean r4 = r5.isLast()
            if (r4 != 0) goto L54
            r2.onSelfConfigurationChanged(r6)
        L54:
            int r3 = r3 + 1
            goto L2f
        L57:
            return
    }

    public void onEndcardBackPress() {
            r3 = this;
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r3.q
            java.lang.String r1 = ""
            if (r0 != 0) goto L1f
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r0 = r3.t
            if (r0 == 0) goto Lb
            goto L1f
        Lb:
            com.mbridge.msdk.video.module.MBridgeLandingPageView r0 = r3.u
            if (r0 == 0) goto L17
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r2 = 103(0x67, float:1.44E-43)
            r0.a(r2, r1)
            return
        L17:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r3.r
            if (r0 == 0) goto L1e
            r0.onBackPress()
        L1e:
            return
        L1f:
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r2 = 104(0x68, float:1.46E-43)
            r0.a(r2, r1)
            return
    }

    public void onMiniEndcardBackPress() {
            r3 = this;
            boolean r0 = r3.C
            if (r0 == 0) goto Ld
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r1 = 107(0x6b, float:1.5E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        Ld:
            return
    }

    public void onPlayableBackPress() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r1.n
            if (r0 == 0) goto L7
            r0.onBackPress()
        L7:
            return
    }

    public void orientation(android.content.res.Configuration r5) {
            r4 = this;
            r5 = 4
            com.mbridge.msdk.video.module.MBridgeH5EndCardView[] r0 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView[r5]
            com.mbridge.msdk.video.module.MBridgePlayableView r1 = r4.n
            r2 = 0
            r0[r2] = r1
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r1 = r4.p
            r3 = 1
            r0[r3] = r1
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r4.r
            r3 = 2
            r0[r3] = r1
            com.mbridge.msdk.video.module.MBridgeAlertWebview r1 = r4.v
            r3 = 3
            r0[r3] = r1
        L17:
            if (r2 >= r5) goto L31
            r1 = r0[r2]
            if (r1 == 0) goto L2e
            int r3 = r1.getVisibility()
            if (r3 != 0) goto L2e
            android.content.res.Resources r3 = r4.getResources()
            android.content.res.Configuration r3 = r3.getConfiguration()
            r1.orientation(r3)
        L2e:
            int r2 = r2 + 1
            goto L17
        L31:
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r5) {
            r4 = this;
            java.lang.String r0 = "MBridgeBaseView"
            r4.Q = r5
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            if (r1 == 0) goto Lcb
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            int r1 = r1.getPlayable_ads_without_video()
            r2 = 2
            if (r1 != r2) goto L46
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r4.n
            if (r0 != 0) goto L1e
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = new com.mbridge.msdk.video.module.MBridgePlayableView
            android.content.Context r1 = r4.a
            r0.<init>(r1)
            r4.n = r0
        L1e:
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r4.n
            int r1 = r4.z
            r0.setCloseDelayShowTime(r1)
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r4.n
            int r1 = r4.A
            r0.setPlayCloseBtnTm(r1)
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r4.n
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            r0.setCampaign(r1)
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r4.n
            com.mbridge.msdk.video.module.MBridgeContainerView$4 r1 = new com.mbridge.msdk.video.module.MBridgeContainerView$4
            com.mbridge.msdk.video.module.a.a r2 = r4.e
            r1.<init>(r4, r2)
            r0.setNotifyListener(r1)
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r4.n
            r0.preLoadData(r5)
            goto Lc8
        L46:
            int r1 = r4.x
            r4.b(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            boolean r1 = r1.isDynamicView()
            if (r1 == 0) goto Lb2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b     // Catch: java.lang.Throwable -> L61
            int r1 = r1.getVideo_end_type()     // Catch: java.lang.Throwable -> L61
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L61
            r4.a(r5, r1)     // Catch: java.lang.Throwable -> L61
            goto L7a
        L61:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r1.<init>(r3)
            com.mbridge.msdk.video.module.MBridgeContainerView$1 r3 = new com.mbridge.msdk.video.module.MBridgeContainerView$1
            r3.<init>(r4, r5)
            r1.postAtFrontOfQueue(r3)
        L7a:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b
            java.lang.String r5 = r5.getendcard_url()
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.j(r5)
            if (r5 != 0) goto Lc8
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b     // Catch: java.lang.Exception -> La9
            java.lang.String r5 = r5.getendcard_url()     // Catch: java.lang.Exception -> La9
            java.lang.String r1 = "mof"
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ak.a(r5, r1)     // Catch: java.lang.Exception -> La9
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> La9
            if (r1 != 0) goto Lc8
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> La9
            r1 = 1
            if (r5 != r1) goto Lc8
            com.mbridge.msdk.video.dynview.moffer.a r5 = com.mbridge.msdk.video.dynview.moffer.a.a()     // Catch: java.lang.Exception -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b     // Catch: java.lang.Exception -> La9
            r5.a(r1, r2)     // Catch: java.lang.Exception -> La9
            goto Lc8
        La9:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            goto Lc8
        Lb2:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.mbridge.msdk.video.module.MBridgeContainerView$2 r1 = new com.mbridge.msdk.video.module.MBridgeContainerView$2
            r1.<init>(r4, r5)
            int r5 = r4.getVideoSkipTime()
            long r2 = (long) r5
            r0.postDelayed(r1, r2)
        Lc8:
            r4.g()
        Lcb:
            return
    }

    @Override
    public void readyStatus(int r2) {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r1.r
            if (r0 == 0) goto L7
            r0.readyStatus(r2)
        L7:
            return
    }

    public void release() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.r
            r1 = 0
            if (r0 == 0) goto La
            r0.release()
            r2.r = r1
        La:
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r2.n
            if (r0 == 0) goto L11
            r0.release()
        L11:
            com.mbridge.msdk.video.module.MBridgeLandingPageView r0 = r2.u
            if (r0 == 0) goto L18
            r0.release()
        L18:
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r2.q
            if (r0 == 0) goto L24
            r0.clearMoreOfferBitmap()
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r2.q
            r0.release()
        L24:
            com.mbridge.msdk.video.module.a.a r0 = r2.e
            if (r0 == 0) goto L2a
            r2.e = r1
        L2a:
            return
    }

    @Override
    public void resizeMiniCard(int r2, int r3, int r4) {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r1.p
            if (r0 == 0) goto L1b
            r0.resizeMiniCard(r2, r3)
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r1.p
            r2.setRadius(r4)
            r1.removeAllViews()
            r1.setMatchParent()
            r2 = 1
            r1.T = r2
            r1.bringToFront()
            r1.f()
        L1b:
            return
    }

    public void setCloseDelayTime(int r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setEndscreenType(int r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setJSFactory(com.mbridge.msdk.video.js.factory.b r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    public void setMBridgeClickMiniCardViewTransparent() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r2.p
            if (r0 == 0) goto Ld
            r0.setMBridgeClickMiniCardViewTransparent()
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r2.p
            r1 = 0
            r0.setMBridgeClickMiniCardViewClickable(r1)
        Ld:
            return
    }

    public void setNotchPadding(int r11, int r12, int r13, int r14, int r15) {
            r10 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NOTCH ContainerView "
            r0.append(r1)
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r12)
            r3 = 0
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)
            r4 = 1
            r1[r4] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r14)
            r4 = 2
            r1[r4] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r15)
            r4 = 3
            r1[r4] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r11)
            r4 = 4
            r1[r4] = r2
            java.lang.String r2 = "%1s-%2s-%3s-%4s-%5s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r10.O = r11
            r10.K = r12
            r10.L = r13
            r10.M = r14
            r10.N = r15
            java.lang.String r11 = com.mbridge.msdk.foundation.tools.m.a(r11, r12, r13, r14, r15)
            r10.P = r11
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r11 = r10.q
            if (r11 == 0) goto L59
            r11.setNotchPadding(r12, r13, r14, r15)
        L59:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r11 = r10.r
            java.lang.String r0 = "oncutoutfetched"
            if (r11 == 0) goto L83
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r11 = r11.q
            if (r11 == 0) goto L83
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r10.r
            java.lang.String r5 = r10.P
            r6 = r12
            r7 = r13
            r8 = r14
            r9 = r15
            r4.setNotchValue(r5, r6, r7, r8, r9)
            com.mbridge.msdk.mbjscommon.windvane.h r11 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r10.r
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.q
            java.lang.String r2 = r10.P
            byte[] r2 = r2.getBytes()
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)
            r11.a(r1, r0, r2)
        L83:
            com.mbridge.msdk.video.module.MBridgePlayableView r11 = r10.n
            if (r11 == 0) goto Lab
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r11 = r11.q
            if (r11 == 0) goto Lab
            com.mbridge.msdk.video.module.MBridgePlayableView r4 = r10.n
            java.lang.String r5 = r10.P
            r6 = r12
            r7 = r13
            r8 = r14
            r9 = r15
            r4.setNotchValue(r5, r6, r7, r8, r9)
            com.mbridge.msdk.mbjscommon.windvane.h r11 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            com.mbridge.msdk.video.module.MBridgePlayableView r1 = r10.n
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.q
            java.lang.String r2 = r10.P
            byte[] r2 = r2.getBytes()
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)
            r11.a(r1, r0, r2)
        Lab:
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r11 = r10.R
            if (r11 == 0) goto Lb2
            r11.setNotchPadding(r12, r13, r14, r15)
        Lb2:
            return
    }

    @Override
    public void setNotifyListener(com.mbridge.msdk.video.module.a.a r7) {
            r6 = this;
            super.setNotifyListener(r7)
            r0 = 8
            com.mbridge.msdk.video.module.MBridgeBaseView[] r1 = new com.mbridge.msdk.video.module.MBridgeBaseView[r0]
            com.mbridge.msdk.video.module.MBridgePlayableView r2 = r6.n
            r3 = 0
            r1[r3] = r2
            com.mbridge.msdk.video.module.MBridgeClickCTAView r2 = r6.o
            r4 = 1
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r6.p
            r4 = 2
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r2 = r6.q
            r4 = 3
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r6.r
            r4 = 4
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r2 = r6.t
            r4 = 5
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeLandingPageView r2 = r6.u
            r4 = 6
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r2 = r6.s
            r4 = 7
            r1[r4] = r2
        L2f:
            if (r3 >= r0) goto L4f
            r2 = r1[r3]
            if (r2 == 0) goto L4c
            boolean r4 = r2 instanceof com.mbridge.msdk.video.module.MBridgeClickMiniCardView
            if (r4 == 0) goto L44
            com.mbridge.msdk.video.module.a.a.f r4 = new com.mbridge.msdk.video.module.a.a.f
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r5 = r6.p
            r4.<init>(r5, r7)
            r2.setNotifyListener(r4)
            goto L4c
        L44:
            com.mbridge.msdk.video.module.a.a.h r4 = new com.mbridge.msdk.video.module.a.a.h
            r4.<init>(r7)
            r2.setNotifyListener(r4)
        L4c:
            int r3 = r3 + 1
            goto L2f
        L4f:
            return
    }

    public void setOnPause() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r1.q
            if (r0 == 0) goto L7
            r0.setOnPause()
        L7:
            return
    }

    public void setOnResume() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = r1.q
            if (r0 == 0) goto L7
            r0.setOnResume()
        L7:
            return
    }

    public void setPlayCloseBtnTm(int r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public void setRewardStatus(boolean r1) {
            r0 = this;
            r0.J = r1
            return
    }

    public void setShowingTransparent(boolean r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public void setUnitID(java.lang.String r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setVideoInteractiveType(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            int r0 = com.mbridge.msdk.video.dynview.i.b.a(r0)
            r1 = 100
            if (r0 != r1) goto L19
            r2.x = r3
            goto L1b
        L19:
            r2.x = r0
        L1b:
            return
        L1c:
            r2.x = r3
            return
    }

    public void setVideoSkipTime(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    @Override
    public boolean showAlertWebView() {
            r4 = this;
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r4.v
            r1 = 0
            if (r0 == 0) goto L60
            boolean r0 = r0.isLoadSuccess()
            if (r0 == 0) goto L60
            r4.setMatchParent()
            android.view.ViewParent r0 = r4.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r2 = r0.getChildCount()
            int r0 = r0.indexOfChild(r4)
            r3 = 1
            int r2 = r2 - r3
            if (r0 != r2) goto L22
            r0 = r3
            goto L23
        L22:
            r0 = r1
        L23:
            if (r0 != 0) goto L31
            boolean r0 = r4.T
            if (r0 != 0) goto L31
            r4.removeAllViews()
            r4.bringToFront()
            r4.S = r3
        L31:
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r4.p
            if (r0 == 0) goto L3c
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L3c
            return r1
        L3c:
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r4.v
            if (r0 != 0) goto L43
            r4.g()
        L43:
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r4.v
            if (r0 == 0) goto L52
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L52
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r4.v
            r4.removeView(r0)
        L52:
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r4.v
            r4.addView(r0)
            r4.setBackgroundColor(r1)
            com.mbridge.msdk.video.module.MBridgeAlertWebview r0 = r4.v
            r0.webviewshow()
            return r3
        L60:
            return r1
    }

    @Override
    public void showEndcard(int r5) {
            r4 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            r1 = 1
            if (r0 == 0) goto Lbc
            java.lang.String r0 = ""
            if (r5 == r1) goto Lb5
            r2 = 100
            if (r5 == r2) goto L97
            r2 = 3
            if (r5 == r2) goto L69
            r2 = 4
            if (r5 == r2) goto L36
            r2 = 5
            if (r5 == r2) goto L2d
            r4.removeAllViews()
            r4.setMatchParent()
            r4.T = r1
            r4.bringToFront()
            r4.a()
            com.mbridge.msdk.video.module.a.a r5 = r4.e
            r2 = 117(0x75, float:1.64E-43)
            r5.a(r2, r0)
            goto Lbc
        L2d:
            com.mbridge.msdk.video.module.a.a r5 = r4.e
            r2 = 106(0x6a, float:1.49E-43)
            r5.a(r2, r0)
            goto Lbc
        L36:
            com.mbridge.msdk.video.module.a.a r5 = r4.e
            r3 = 113(0x71, float:1.58E-43)
            r5.a(r3, r0)
            r4.removeAllViews()
            r4.setMatchParent()
            com.mbridge.msdk.video.module.MBridgeLandingPageView r5 = r4.u
            if (r5 != 0) goto L50
            com.mbridge.msdk.video.js.factory.b r5 = r4.Q
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            r4.a(r5, r0)
        L50:
            com.mbridge.msdk.video.module.MBridgeLandingPageView r5 = r4.u
            java.lang.String r0 = r4.w
            r5.setUnitId(r0)
            com.mbridge.msdk.video.module.MBridgeLandingPageView r5 = r4.u
            com.mbridge.msdk.video.js.factory.b r0 = r4.Q
            r5.preLoadData(r0)
            com.mbridge.msdk.video.module.MBridgeLandingPageView r5 = r4.u
            r4.addView(r5)
            r4.T = r1
            r4.bringToFront()
            goto Lbc
        L69:
            r4.removeAllViews()
            r4.setMatchParent()
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r5 = r4.t
            if (r5 != 0) goto L7c
            com.mbridge.msdk.video.js.factory.b r5 = r4.Q
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            r4.a(r5, r0)
        L7c:
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r5.<init>(r0, r0)
            r2 = 13
            r5.addRule(r2, r0)
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r0 = r4.t
            r4.addView(r0, r5)
            com.mbridge.msdk.video.module.MBridgeVastEndCardView r5 = r4.t
            r5.notifyShowListener()
            r4.T = r1
            r4.bringToFront()
            goto Lbc
        L97:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b
            int r5 = r5.getPlayable_ads_without_video()
            r0 = 2
            if (r5 != r0) goto La2
            r4.E = r1
        La2:
            com.mbridge.msdk.video.module.MBridgePlayableView r5 = r4.n
            r4.a(r5)
            r4.setMatchParent()
            r4.e()
            java.lang.String r5 = "MBridgeBaseView"
            java.lang.String r0 = "showEndcard addNativeEndcard"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
            goto Lbc
        Lb5:
            com.mbridge.msdk.video.module.a.a r5 = r4.e
            r2 = 104(0x68, float:1.46E-43)
            r5.a(r2, r0)
        Lbc:
            r4.B = r1
            return
    }

    @Override
    public void showMiniCard(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r0 = r1.p
            if (r0 == 0) goto L3e
            r0.setMiniCardLocation(r2, r3, r4, r5)
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r1.p
            r2.setRadius(r6)
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r1.p
            r3 = 8
            r2.setCloseVisible(r3)
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r1.p
            r3 = 0
            r2.setClickable(r3)
            r1.removeAllViews()
            r1.setMatchParent()
            r2 = 1
            r1.T = r2
            r1.bringToFront()
            r1.f()
            boolean r3 = r1.G
            if (r3 != 0) goto L3e
            r1.G = r2
            com.mbridge.msdk.video.module.a.a r2 = r1.e
            r3 = 109(0x6d, float:1.53E-43)
            java.lang.String r4 = ""
            r2.a(r3, r4)
            com.mbridge.msdk.video.module.a.a r2 = r1.e
            r3 = 117(0x75, float:1.64E-43)
            r2.a(r3, r4)
        L3e:
            return
    }

    public void showOrderCampView() {
            r5 = this;
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = new com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView
            android.content.Context r1 = r5.a
            r0.<init>(r1)
            r5.R = r0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.U
            r0.setCampaignExes(r1)
            com.mbridge.msdk.video.module.a.a r0 = r5.e
            if (r0 == 0) goto L21
            com.mbridge.msdk.video.module.a.a r0 = r5.e
            boolean r0 = r0 instanceof com.mbridge.msdk.video.module.a.a.j
            if (r0 == 0) goto L21
            com.mbridge.msdk.video.module.a.a r0 = r5.e
            com.mbridge.msdk.video.module.a.a.j r0 = (com.mbridge.msdk.video.module.a.a.j) r0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.U
            r0.a(r1)
        L21:
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r5.R
            com.mbridge.msdk.video.module.a.a.h r1 = new com.mbridge.msdk.video.module.a.a.h
            com.mbridge.msdk.video.module.a.a r2 = r5.e
            r1.<init>(r2)
            r0.setNotifyListener(r1)
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r5.R
            boolean r1 = r5.J
            r0.setRewarded(r1)
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r5.R
            int r1 = r5.K
            int r2 = r5.L
            int r3 = r5.M
            int r4 = r5.N
            r0.setNotchPadding(r1, r2, r3, r4)
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r5.R
            com.mbridge.msdk.video.module.MBridgeContainerView$3 r1 = new com.mbridge.msdk.video.module.MBridgeContainerView$3
            r1.<init>(r5)
            r0.setCampOrderViewBuildCallback(r1)
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r5.R
            r0.createView(r5)
            return
    }

    public void showPlayableView() {
            r8 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b
            if (r0 == 0) goto L55
            boolean r0 = r8.E
            if (r0 != 0) goto L55
            r8.removeAllViews()
            r8.setMatchParent()
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r8.n
            if (r0 != 0) goto L17
            com.mbridge.msdk.video.js.factory.b r0 = r8.Q
            r8.preLoadData(r0)
        L17:
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r8.n
            r8.addView(r0)
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r8.n
            if (r0 == 0) goto L4f
            java.lang.String r1 = r8.w
            r0.setUnitId(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b
            if (r0 == 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b
            int r0 = r0.getPlayable_ads_without_video()
            r1 = 2
            if (r0 != r1) goto L40
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r8.n
            r1 = 0
            r0.setCloseVisible(r1)
        L40:
            com.mbridge.msdk.video.module.MBridgePlayableView r2 = r8.n
            java.lang.String r3 = r8.P
            int r4 = r8.K
            int r5 = r8.L
            int r6 = r8.M
            int r7 = r8.N
            r2.setNotchValue(r3, r4, r5, r6, r7)
        L4f:
            r0 = 1
            r8.T = r0
            r8.bringToFront()
        L55:
            return
    }

    @Override
    public void showVideoClickView(int r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            if (r0 == 0) goto L12a
            r0 = -1
            if (r4 == r0) goto L11b
            r1 = 1
            if (r4 == r1) goto La8
            r0 = 2
            if (r4 == r0) goto Lf
            goto L12a
        Lf:
            com.mbridge.msdk.video.module.MBridgeClickCTAView r4 = r3.o
            if (r4 == 0) goto L1e
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto L1e
            com.mbridge.msdk.video.module.MBridgeClickCTAView r4 = r3.o
            r3.removeView(r4)
        L1e:
            com.mbridge.msdk.video.module.MBridgeAlertWebview r4 = r3.v
            if (r4 == 0) goto L29
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto L29
            return
        L29:
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r4 = r3.p
            if (r4 == 0) goto L33
            android.view.ViewParent r4 = r4.getParent()
            if (r4 != 0) goto L4a
        L33:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L46
            if (r4 == 0) goto L4a
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L46
            int r4 = r4.getPlayable_ads_without_video()     // Catch: java.lang.Exception -> L46
            if (r4 != r1) goto L4a
            r3.setMatchParent()     // Catch: java.lang.Exception -> L46
            r3.f()     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r4 = move-exception
            r4.printStackTrace()
        L4a:
            boolean r4 = r3.miniCardLoaded()
            if (r4 == 0) goto La3
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r3.r
            if (r4 == 0) goto L5f
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto L5f
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r3.r
            r3.removeView(r4)
        L5f:
            com.mbridge.msdk.video.module.a.a r4 = r3.e
            r0 = 112(0x70, float:1.57E-43)
            java.lang.String r2 = ""
            r4.a(r0, r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            if (r4 == 0) goto L80
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            boolean r4 = r4.isHasReportAdTrackPause()
            if (r4 != 0) goto L80
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            r4.setHasReportAdTrackPause(r1)
            android.content.Context r4 = r3.a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            com.mbridge.msdk.video.module.b.b.f(r4, r0)
        L80:
            boolean r4 = r3.D
            if (r4 == 0) goto L8c
            com.mbridge.msdk.video.module.a.a r4 = r3.e
            r0 = 115(0x73, float:1.61E-43)
            r4.a(r0, r2)
            goto L9f
        L8c:
            r3.T = r1
            r3.bringToFront()
            r3.webviewshow()
            android.content.res.Resources r4 = r3.getResources()
            android.content.res.Configuration r4 = r4.getConfiguration()
            r3.onConfigurationChanged(r4)
        L9f:
            r3.C = r1
            goto L12a
        La3:
            r3.h()
            goto L12a
        La8:
            boolean r4 = r3.B
            if (r4 == 0) goto Lad
            return
        Lad:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r3.r
            if (r4 == 0) goto Lbc
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto Lbc
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r3.r
            r3.removeView(r4)
        Lbc:
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r4 = r3.p
            if (r4 == 0) goto Lcb
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto Lcb
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r4 = r3.p
            r3.removeView(r4)
        Lcb:
            com.mbridge.msdk.video.module.MBridgeClickCTAView r4 = r3.o
            if (r4 == 0) goto Ld5
            android.view.ViewParent r4 = r4.getParent()
            if (r4 != 0) goto L111
        Ld5:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L10d
            if (r4 == 0) goto L111
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L10d
            int r4 = r4.getPlayable_ads_without_video()     // Catch: java.lang.Exception -> L10d
            if (r4 != r1) goto L111
            r3.T = r1     // Catch: java.lang.Exception -> L10d
            com.mbridge.msdk.video.module.MBridgeClickCTAView r4 = r3.o     // Catch: java.lang.Exception -> L10d
            if (r4 != 0) goto Lea
            r3.b(r0)     // Catch: java.lang.Exception -> L10d
        Lea:
            com.mbridge.msdk.video.module.MBridgeClickCTAView r4 = r3.o     // Catch: java.lang.Exception -> L10d
            if (r4 == 0) goto L111
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L10d
            if (r4 == 0) goto Lfb
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L10d
            boolean r4 = r4.isDynamicView()     // Catch: java.lang.Exception -> L10d
            if (r4 == 0) goto Lfb
            goto L111
        Lfb:
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L10d
            r1 = -2
            r4.<init>(r1, r1)     // Catch: java.lang.Exception -> L10d
            r1 = 12
            r4.addRule(r1, r0)     // Catch: java.lang.Exception -> L10d
            com.mbridge.msdk.video.module.MBridgeClickCTAView r0 = r3.o     // Catch: java.lang.Exception -> L10d
            r1 = 0
            r3.addView(r0, r1, r4)     // Catch: java.lang.Exception -> L10d
            goto L111
        L10d:
            r4 = move-exception
            r4.printStackTrace()
        L111:
            boolean r4 = r3.isLast()
            if (r4 == 0) goto L12a
            r3.bringToFront()
            goto L12a
        L11b:
            boolean r4 = r3.isLast()
            if (r4 != 0) goto L12a
            boolean r4 = r3.endCardShowing()
            if (r4 != 0) goto L12a
            r3.h()
        L12a:
            return
    }

    @Override
    public void showVideoEndCover() {
            r4 = this;
            r4.removeAllViews()
            r4.setMatchParent()
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r0 = r4.s
            if (r0 != 0) goto L2f
            com.mbridge.msdk.video.js.factory.b r1 = r4.Q
            r4.Q = r1
            if (r0 != 0) goto L2f
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r0 = new com.mbridge.msdk.video.module.MBridgeVideoEndCoverView
            android.content.Context r2 = r4.a
            r0.<init>(r2)
            r4.s = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b
            r0.setCampaign(r2)
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r0 = r4.s
            com.mbridge.msdk.video.module.a.a.h r2 = new com.mbridge.msdk.video.module.a.a.h
            com.mbridge.msdk.video.module.a.a r3 = r4.e
            r2.<init>(r3)
            r0.setNotifyListener(r2)
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r0 = r4.s
            r0.preLoadData(r1)
        L2f:
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView r0 = r4.s
            r4.addView(r0)
            android.content.res.Resources r0 = r4.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            r4.onConfigurationChanged(r0)
            r0 = 1
            r4.T = r0
            r4.bringToFront()
            return
    }

    @Override
    public void toggleCloseBtn(int r2) {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgePlayableView r0 = r1.n
            if (r0 == 0) goto L7
            r0.toggleCloseBtn(r2)
        L7:
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r1.r
            if (r0 == 0) goto Le
            r0.toggleCloseBtn(r2)
        Le:
            return
    }

    public void triggerCloseBtn(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.b
            if (r3 == 0) goto L14
            com.mbridge.msdk.video.module.a.a r3 = r2.e
            r0 = 122(0x7a, float:1.71E-43)
            java.lang.String r1 = ""
            r3.a(r0, r1)
            com.mbridge.msdk.video.module.a.a r3 = r2.e
            r0 = 104(0x68, float:1.46E-43)
            r3.a(r0, r1)
        L14:
            return
    }

    public void webviewshow() {
            r5 = this;
            r0 = 4
            com.mbridge.msdk.video.module.MBridgeH5EndCardView[] r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView[r0]
            com.mbridge.msdk.video.module.MBridgePlayableView r2 = r5.n
            r3 = 0
            r1[r3] = r2
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView r2 = r5.p
            r4 = 1
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r5.r
            r4 = 2
            r1[r4] = r2
            com.mbridge.msdk.video.module.MBridgeAlertWebview r2 = r5.v
            r4 = 3
            r1[r4] = r2
        L17:
            if (r3 >= r0) goto L35
            r2 = r1[r3]
            if (r2 == 0) goto L32
            int r4 = r2.getVisibility()
            if (r4 != 0) goto L32
            android.view.ViewParent r4 = r2.getParent()
            if (r4 == 0) goto L32
            boolean r4 = r5.isLast()
            if (r4 != 0) goto L32
            r2.webviewshow()
        L32:
            int r3 = r3 + 1
            goto L17
        L35:
            return
    }
}
