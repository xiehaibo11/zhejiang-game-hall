package com.mbridge.msdk.video.module.a.a;

public final class l extends com.mbridge.msdk.video.module.a.a.n {
    private com.mbridge.msdk.video.module.MBridgeVideoView l;
    private com.mbridge.msdk.video.module.MBridgeContainerView m;
    private int n;
    private java.util.Timer o;
    private android.os.Handler p;
    private boolean q;
    private boolean r;
    private int s;
    private int t;


    public l(com.mbridge.msdk.video.module.MBridgeVideoView r13, com.mbridge.msdk.video.module.MBridgeContainerView r14, com.mbridge.msdk.foundation.entity.CampaignEx r15, com.mbridge.msdk.videocommon.b.d r16, com.mbridge.msdk.videocommon.download.a r17, java.lang.String r18, java.lang.String r19, int r20, int r21, com.mbridge.msdk.video.module.a.a r22, int r23, boolean r24, int r25) {
            r12 = this;
            r9 = r12
            r10 = r13
            r11 = r14
            r0 = r12
            r1 = r15
            r2 = r16
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r22
            r7 = r23
            r8 = r24
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r9.p = r0
            r0 = 0
            r9.q = r0
            r9.r = r0
            r1 = 1
            r9.s = r1
            r9.l = r10
            r9.m = r11
            r2 = r20
            r9.t = r2
            r2 = r21
            r9.n = r2
            r2 = r25
            r9.s = r2
            if (r10 == 0) goto L41
            int r2 = r13.getVideoSkipTime()
            if (r2 != 0) goto L3e
            goto L3f
        L3e:
            r1 = r0
        L3f:
            r9.q = r1
        L41:
            if (r10 == 0) goto L45
            if (r11 != 0) goto L47
        L45:
            r9.a = r0
        L47:
            return
    }

    static com.mbridge.msdk.video.module.MBridgeContainerView a(com.mbridge.msdk.video.module.a.a.l r0) {
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r0.m
            return r0
    }

    static com.mbridge.msdk.video.module.MBridgeVideoView b(com.mbridge.msdk.video.module.a.a.l r0) {
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r0.l
            return r0
    }

    static android.os.Handler c(com.mbridge.msdk.video.module.a.a.l r0) {
            android.os.Handler r0 = r0.p
            return r0
    }

    private void i() {
            r1 = this;
            java.util.Timer r0 = r1.o     // Catch: java.lang.Exception -> Ld
            if (r0 == 0) goto L11
            java.util.Timer r0 = r1.o     // Catch: java.lang.Exception -> Ld
            r0.cancel()     // Catch: java.lang.Exception -> Ld
            r0 = 0
            r1.o = r0     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r0 = move-exception
            r0.printStackTrace()
        L11:
            return
    }

    private void j() {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            if (r0 == 0) goto L71
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            int r0 = r0.getDynamicTempCode()
            r1 = 5
            if (r0 != r1) goto L71
            r0 = 0
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r5.l
            if (r1 == 0) goto L5e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r1.mCampOrderViewData
            if (r1 == 0) goto L5e
            r1 = 0
            r2 = r1
        L18:
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r5.l
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r3.mCampOrderViewData
            int r3 = r3.size()
            if (r2 >= r3) goto L48
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r5.l
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r3.mCampOrderViewData
            java.lang.Object r3 = r3.get(r2)
            if (r3 == 0) goto L45
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r5.l
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r3.mCampOrderViewData
            java.lang.Object r3 = r3.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            java.lang.String r3 = r3.getId()
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r5.b
            java.lang.String r4 = r4.getId()
            if (r3 != r4) goto L45
            int r1 = r2 + (-1)
            goto L48
        L45:
            int r2 = r2 + 1
            goto L18
        L48:
            if (r1 < 0) goto L5e
            com.mbridge.msdk.video.module.MBridgeVideoView r2 = r5.l
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r2.mCampOrderViewData
            java.lang.Object r2 = r2.get(r1)
            if (r2 == 0) goto L5e
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r5.l
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.mCampOrderViewData
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
        L5e:
            if (r0 == 0) goto L71
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r5.l
            if (r1 == 0) goto L67
            r1.setCampaign(r0)
        L67:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r5.m
            if (r1 == 0) goto L6e
            r1.setCampaign(r0)
        L6e:
            r5.a(r0)
        L71:
            return
    }

    @Override
    public final void a(int r8, java.lang.Object r9) {
            r7 = this;
            boolean r0 = r7.a
            r1 = 16
            if (r0 == 0) goto L2ea
            r0 = -1
            r2 = 0
            r3 = 1
            r4 = 2
            if (r8 == r3) goto L28d
            r5 = 3
            r6 = 5
            if (r8 == r4) goto L21e
            if (r8 == r6) goto L1fb
            r0 = 6
            if (r8 == r0) goto L21e
            r0 = 8
            if (r8 == r0) goto L1d6
            switch(r8) {
                case 10: goto L1c8;
                case 11: goto L163;
                case 12: goto Leb;
                case 13: goto Le4;
                case 14: goto Ld9;
                case 15: goto L1e;
                default: goto L1c;
            }
        L1c:
            goto L2ea
        L1e:
            if (r9 == 0) goto L2ea
            boolean r0 = r9 instanceof com.mbridge.msdk.video.module.MBridgeVideoView.a
            if (r0 == 0) goto L2ea
            r0 = r9
            com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = (com.mbridge.msdk.video.module.MBridgeVideoView.a) r0
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            int r1 = r1.getVideoInteractiveType()
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r7.b
            int r5 = r5.getAdSpaceT()
            if (r5 != r4) goto L3b
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            r1.showVideoClickView(r3)
            goto L4b
        L3b:
            if (r1 < 0) goto L4b
            int r5 = r0.a
            if (r5 < r1) goto L4b
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            r1.showVideoClickView(r3)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.soundOperate(r2, r3)
        L4b:
            boolean r1 = r0.c
            r7.q = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getDynamicTempCode()
            if (r1 != r6) goto La4
            int r1 = r0.a
            int r0 = r0.b
            boolean r5 = r7.q
            if (r5 == 0) goto L61
            goto L2ea
        L61:
            com.mbridge.msdk.video.module.MBridgeVideoView r5 = r7.l
            if (r5 == 0) goto L2ea
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r7.b
            if (r5 != 0) goto L6b
            goto L2ea
        L6b:
            int r5 = r7.n
            if (r5 < 0) goto L73
            if (r1 < r5) goto L73
            r5 = r4
            goto L74
        L73:
            r5 = r3
        L74:
            if (r5 == r4) goto L8e
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r7.b
            int r6 = r6.getVideoCompleteTime()
            if (r6 != 0) goto L85
            com.mbridge.msdk.video.module.MBridgeVideoView r6 = r7.l
            int r6 = r6.mCurrPlayNum
            if (r6 <= r3) goto L8e
            goto L8d
        L85:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r7.b
            int r6 = r6.getVideoCompleteTime()
            if (r1 <= r6) goto L8e
        L8d:
            r5 = r4
        L8e:
            if (r5 == r4) goto L99
            com.mbridge.msdk.video.module.MBridgeVideoView r6 = r7.l
            int r6 = r6.mCurrPlayNum
            if (r6 <= r3) goto L99
            if (r1 != r0) goto L99
            r5 = r4
        L99:
            if (r5 != r4) goto L2ea
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.closeVideoOperate(r2, r5)
            r7.q = r3
            goto L2ea
        La4:
            int r1 = r7.n
            if (r1 < 0) goto Lb4
            int r1 = r0.a
            int r5 = r7.n
            if (r1 >= r5) goto Lcc
            int r1 = r0.a
            int r5 = r0.b
            if (r1 == r5) goto Lcc
        Lb4:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getVideoCompleteTime()
            if (r1 <= 0) goto L2ea
            int r1 = r0.a
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r7.b
            int r5 = r5.getVideoCompleteTime()
            if (r1 > r5) goto Lcc
            int r1 = r0.a
            int r0 = r0.b
            if (r1 != r0) goto L2ea
        Lcc:
            boolean r0 = r7.q
            if (r0 != 0) goto L2ea
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.closeVideoOperate(r2, r4)
            r7.q = r3
            goto L2ea
        Ld9:
            boolean r0 = r7.q
            if (r0 != 0) goto L2ea
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.closeVideoOperate(r2, r3)
            goto L2ea
        Le4:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.closeVideoOperate(r2, r4)
            goto L2ea
        Leb:
            r7.h()
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.videoOperate(r5)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.dismissAllAlert()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getVideo_end_type()
            if (r1 == r5) goto L106
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.setVisibility(r0)
            goto L10b
        L106:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.setVisibility(r2)
        L10b:
            boolean r0 = r7.r
            if (r0 != 0) goto L115
            int r0 = r7.s
            if (r0 != 0) goto L115
            goto L2ea
        L115:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L136
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getDynamicTempCode()
            if (r0 != r6) goto L136
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r0 = r0.getendcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L136
            r7.j()
            r7.s = r2
        L136:
            boolean r0 = r7.r
            if (r0 != 0) goto L147
            int r0 = r7.s
            if (r0 != r3) goto L147
            r7.g()
            r7.f()
            r7.e()
        L147:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getAdSpaceT()
            if (r0 == r4) goto L15c
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getVideo_end_type()
            r0.showEndcard(r1)
            goto L2ea
        L15c:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.showVideoEndCover()
            goto L2ea
        L163:
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.videoOperate(r5)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.dismissAllAlert()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getVideo_end_type()
            if (r1 == r5) goto L183
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getAdSpaceT()
            if (r1 == r4) goto L188
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            r1.setVisibility(r0)
            goto L188
        L183:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.setVisibility(r2)
        L188:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            if (r0 == 0) goto L1ac
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getDynamicTempCode()
            if (r0 != r6) goto L1ac
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            int r0 = r0.mCurrPlayNum
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r7.l
            int r1 = r1.mCampaignSize
            if (r0 != r1) goto L1ac
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            if (r0 == 0) goto L2ea
            r0.setRewardStatus(r3)
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.showOrderCampView()
            goto L2ea
        L1ac:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getAdSpaceT()
            if (r0 != r4) goto L1bb
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.showVideoEndCover()
            goto L2ea
        L1bb:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getVideo_end_type()
            r0.showEndcard(r1)
            goto L2ea
        L1c8:
            r7.r = r3
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.soundOperate(r2, r4)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.progressOperate(r2, r4)
            goto L2ea
        L1d6:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            if (r0 == 0) goto L1f2
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto L1e9
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            if (r0 == 0) goto L2ea
            r0.showAlertView()
            goto L2ea
        L1e9:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            if (r0 == 0) goto L2ea
            r0.alertWebViewShowed()
            goto L2ea
        L1f2:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            if (r0 == 0) goto L2ea
            r0.showAlertView()
            goto L2ea
        L1fb:
            if (r9 == 0) goto L2ea
            boolean r1 = r9 instanceof java.lang.Integer
            if (r1 == 0) goto L2ea
            r1 = r9
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r1 != r3) goto L20f
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            goto L213
        L20f:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
        L213:
            com.mbridge.msdk.video.module.MBridgeVideoView r2 = r7.l
            int r1 = r1.intValue()
            r2.soundOperate(r1, r0)
            goto L2ea
        L21e:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.dismissAllAlert()
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.videoOperate(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            if (r0 == 0) goto L26a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L26a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getDynamicTempCode()
            if (r0 != r6) goto L26a
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            if (r0 == 0) goto L25f
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            int r0 = r0.mCurrPlayNum
            com.mbridge.msdk.video.module.MBridgeVideoView r2 = r7.l
            int r2 = r2.mCampaignSize
            if (r0 != r2) goto L25f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getAdSpaceT()
            if (r0 != r4) goto L253
            goto L28b
        L253:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.setRewardStatus(r3)
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.showOrderCampView()
            goto L2ea
        L25f:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r2 = r7.g
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r7.l
            int r3 = r3.mCurrentPlayProgressTime
            com.mbridge.msdk.video.bt.module.b.f.a(r0, r2, r3)
        L26a:
            int r0 = r7.t
            if (r0 != r4) goto L28b
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            boolean r0 = r0.endCardShowing()
            if (r0 != 0) goto L28b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getAdSpaceT()
            if (r0 != r4) goto L27f
            goto L28b
        L27f:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getVideo_end_type()
            r0.showEndcard(r1)
            goto L2ea
        L28b:
            r8 = r1
            goto L2ea
        L28d:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            boolean r1 = r1.endCardShowing()
            if (r1 != 0) goto L2ea
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            int r1 = r1.getVideoInteractiveType()
            r5 = -2
            if (r1 == r5) goto L2dd
            if (r1 == r0) goto L2a1
            goto L2ea
        L2a1:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            boolean r1 = r1.isLast()
            if (r1 == 0) goto L2cf
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.showVideoClickView(r3)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.soundOperate(r2, r3)
            r7.i()     // Catch: java.lang.Exception -> L2ca
            java.util.Timer r0 = new java.util.Timer     // Catch: java.lang.Exception -> L2ca
            r0.<init>()     // Catch: java.lang.Exception -> L2ca
            r7.o = r0     // Catch: java.lang.Exception -> L2ca
            com.mbridge.msdk.video.module.a.a.l$1 r0 = new com.mbridge.msdk.video.module.a.a.l$1     // Catch: java.lang.Exception -> L2ca
            r0.<init>(r7)     // Catch: java.lang.Exception -> L2ca
            java.util.Timer r1 = r7.o     // Catch: java.lang.Exception -> L2ca
            r2 = 3000(0xbb8, double:1.482E-320)
            r1.schedule(r0, r2)     // Catch: java.lang.Exception -> L2ca
            goto L2ea
        L2ca:
            r0 = move-exception
            r0.printStackTrace()
            goto L2ea
        L2cf:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.m
            r1.showVideoClickView(r0)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.l
            r0.soundOperate(r2, r4)
            r7.i()
            goto L2ea
        L2dd:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            boolean r0 = r0.miniCardLoaded()
            if (r0 == 0) goto L2ea
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r7.m
            r0.showVideoClickView(r4)
        L2ea:
            super.a(r8, r9)
            return
    }
}
