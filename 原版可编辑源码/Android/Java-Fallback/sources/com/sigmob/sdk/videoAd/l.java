package com.sigmob.sdk.videoAd;

public class l extends com.sigmob.sdk.videoAd.c implements com.sigmob.sdk.base.common.f.a, com.sigmob.sdk.base.common.x {
    static final java.lang.String f = "video_config";
    private static final java.lang.String h = "current_position";
    private static final java.lang.String i = "video_finished";
    private static final java.lang.String j = "companionAd_visable";
    private static final long k = 50;
    private static final int l = -1;
    private static final int m = 0;
    private static int n;
    private boolean A;
    private android.os.Handler B;
    private boolean C;
    private com.sigmob.sdk.base.views.d D;
    private java.lang.String E;
    private int F;
    private boolean G;
    private com.sigmob.sdk.videoAd.a H;
    private int I;
    private com.sigmob.sdk.videoAd.b J;
    private com.sigmob.sdk.base.models.BaseAdUnit K;
    private android.view.View L;
    private com.sigmob.sdk.base.common.r M;
    private com.sigmob.sdk.base.views.y N;
    private com.sigmob.sdk.base.views.x O;
    private com.sigmob.sdk.base.views.w P;
    private com.sigmob.sdk.base.views.a Q;
    private com.sigmob.sdk.videoAd.h R;
    private com.sigmob.sdk.videoAd.d S;
    private int T;
    private int U;
    private boolean V;
    private boolean W;
    private int X;
    private boolean Y;
    private android.widget.RelativeLayout Z;
    private boolean aa;
    private com.sigmob.sdk.base.views.x ab;
    private boolean ac;
    private boolean ad;
    private com.czhj.volley.toolbox.ImageLoader.ImageContainer ae;
    private com.sigmob.sdk.base.views.j af;
    private boolean ag;
    private boolean ah;
    private boolean ai;
    private int aj;
    private com.sigmob.sdk.base.views.t ak;
    private boolean al;
    private com.sigmob.sdk.base.views.q am;
    private boolean an;
    private boolean ao;
    java.lang.String g;
    private com.sigmob.sdk.base.views.b o;
    private com.sigmob.sdk.base.common.w p;
    private android.widget.ImageView q;
    private android.widget.RelativeLayout r;
    private int s;
    private boolean t;
    private int u;
    private java.lang.String v;
    private java.util.List<java.lang.String> w;
    private java.util.List<java.lang.String> x;
    private long y;
    private java.lang.String z;






    static class 14 {
        static final int[] a = null;

        static {
                com.sigmob.sdk.base.a[] r0 = com.sigmob.sdk.base.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.videoAd.l.14.a = r0
                com.sigmob.sdk.base.a r1 = com.sigmob.sdk.base.a.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.sdk.videoAd.l.14.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.base.a r1 = com.sigmob.sdk.base.a.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }
















    static class a {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @android.webkit.JavascriptInterface
        public int getInteractionType() {
                r1 = this;
                int r0 = com.sigmob.sdk.videoAd.l.y()
                return r0
        }

        @android.webkit.JavascriptInterface
        public java.lang.String getSdkVersion() {
                r1 = this;
                java.lang.String r0 = "4.9.0"
                return r0
        }
    }

    static {
            return
    }

    public l(android.app.Activity r4, com.sigmob.sdk.base.models.BaseAdUnit r5, android.os.Bundle r6, android.os.Bundle r7, java.lang.String r8, com.sigmob.sdk.base.common.j r9) throws java.lang.IllegalStateException {
            r3 = this;
            r3.<init>(r4, r8, r9)
            r8 = 0
            r3.s = r8
            r3.t = r8
            r3.u = r8
            java.lang.String r9 = "undone"
            r3.v = r9
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            r3.w = r9
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            r3.x = r9
            java.lang.String r9 = "none"
            r3.z = r9
            android.os.Handler r9 = new android.os.Handler
            r9.<init>()
            r3.B = r9
            r9 = 1
            r3.C = r9
            r0 = 0
            r3.K = r0
            r3.T = r8
            r3.Y = r8
            r3.aa = r8
            r3.ac = r8
            r3.ad = r8
            r3.ag = r8
            r3.al = r8
            r3.an = r8
            r3.K = r5
            com.sigmob.sdk.base.common.h r5 = r5.getAdConfig()
            com.sigmob.sdk.videoAd.a r5 = (com.sigmob.sdk.videoAd.a) r5
            r3.H = r5
            android.app.Activity r1 = r3.k()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.K
            r5.a(r1, r2, r0)
            com.sigmob.sdk.videoAd.a r5 = r3.H
            r5.a(r3)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.K
            java.lang.String r5 = r5.getAdslot_id()
            r3.E = r5
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.K
            int r5 = r5.getInteractionType()
            com.sigmob.sdk.videoAd.l.n = r5
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.K
            com.sigmob.sdk.base.models.rtb.Ad r5 = r5.getAd()
            java.lang.Integer r5 = r5.display_orientation
            int r5 = r5.intValue()
            if (r5 == r9) goto L80
            r0 = 2
            if (r5 == r0) goto L7e
            r5 = 3
            java.lang.String r0 = "REQUESTED_ORIENTATION"
            int r5 = r6.getInt(r0, r5)
            goto L81
        L7e:
            r5 = 6
            goto L81
        L80:
            r5 = 7
        L81:
            r3.I = r5
            com.sigmob.sdk.base.common.j r5 = r3.h()
            int r0 = r3.I
            r5.a(r0)
            android.app.Activity r5 = r3.k()
            r5.requestWindowFeature(r9)
            android.app.Activity r5 = r3.k()
            android.view.Window r5 = r5.getWindow()
            r0 = 1024(0x400, float:1.435E-42)
            r5.addFlags(r0)
            int r5 = r3.I
            r3.b(r4, r5, r6)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.K
            com.sigmob.sdk.base.models.SigMacroCommon r5 = r5.getMacroCommon()
            com.sigmob.sdk.base.models.SigMacroCommon r5 = (com.sigmob.sdk.base.models.SigMacroCommon) r5
            java.lang.String r6 = "_PLAYLASTFRAME_"
            java.lang.String r0 = "1"
            r5.addMarcoKey(r6, r0)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.K
            com.sigmob.sdk.base.models.rtb.MaterialMeta r5 = r5.getMaterial()
            java.lang.Integer r5 = r5.creative_type
            int r5 = r5.intValue()
            com.sigmob.sdk.base.common.l r6 = com.sigmob.sdk.base.common.l.e
            int r6 = r6.a()
            if (r5 == r6) goto Lca
            r5 = r9
            goto Lcb
        Lca:
            r5 = r8
        Lcb:
            r3.C = r5
            r5 = -1
            if (r7 == 0) goto Le8
            java.lang.String r6 = "current_position"
            int r6 = r7.getInt(r6, r5)
            r3.U = r6
            java.lang.String r6 = "video_finished"
            boolean r6 = r7.getBoolean(r6, r8)
            r3.V = r6
            java.lang.String r6 = "companionAd_visable"
            boolean r6 = r7.getBoolean(r6, r8)
            r3.Y = r6
        Le8:
            com.sigmob.sdk.videoAd.a r6 = r3.H
            java.lang.String r6 = r6.e()
            if (r6 == 0) goto L15f
            com.sigmob.sdk.base.common.e r6 = r3.e
            r7 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            if (r6 != 0) goto L10b
            int r6 = com.sigmob.sdk.base.d.b()
            if (r6 == 0) goto L103
            android.app.Activity r0 = r3.k()
            r0.setTheme(r6)
        L103:
            android.view.ViewGroup r6 = r3.j()
            r6.setBackgroundColor(r7)
            goto L112
        L10b:
            android.view.ViewGroup r6 = r3.j()
            r6.setBackgroundColor(r8)
        L112:
            android.widget.RelativeLayout r6 = new android.widget.RelativeLayout
            r6.<init>(r4)
            r3.r = r6
            r6.setBackgroundColor(r7)
            com.sigmob.sdk.videoAd.b r6 = r3.a(r4, r8)
            r3.J = r6
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r7 = -2
            r6.<init>(r5, r7)
            r7 = 13
            r6.addRule(r7)
            android.widget.RelativeLayout r7 = r3.r
            com.sigmob.sdk.videoAd.b r8 = r3.J
            r7.addView(r8, r6)
            android.view.ViewGroup r6 = r3.j()
            android.widget.RelativeLayout r7 = r3.r
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r5, r5)
            r6.addView(r7, r8)
            boolean r5 = r3.t
            if (r5 == 0) goto L14c
            r3.a(r4)
            r3.z()
        L14c:
            r3.m()
            android.widget.RelativeLayout r4 = r3.r
            r4.setClickable(r9)
            android.widget.RelativeLayout r4 = r3.r
            com.sigmob.sdk.videoAd.l$1 r5 = new com.sigmob.sdk.videoAd.l$1
            r5.<init>(r3)
            r4.setOnTouchListener(r5)
            return
        L15f:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "BaseVideoConfig does not have a video disk path"
            r4.<init>(r5)
            throw r4
    }

    static java.util.List A(com.sigmob.sdk.videoAd.l r0) {
            java.util.List<java.lang.String> r0 = r0.w
            return r0
    }

    private void A() {
            r7 = this;
            android.widget.RelativeLayout r0 = r7.Z
            if (r0 == 0) goto L51
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L51
            java.util.List<java.lang.String> r0 = r7.w
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r7.y
            long r3 = r3 - r5
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "%d"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            r0.add(r2)
            java.util.List<java.lang.String> r0 = r7.x
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r2 = r7.t()
            float r2 = (float) r2
            r3 = 1148846080(0x447a0000, float:1000.0)
            float r2 = r2 / r3
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r1[r4] = r2
            java.lang.String r2 = "%.2f"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.add(r1)
            java.lang.String r0 = "play"
            r7.z = r0
            android.os.Handler r0 = r7.B
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            android.widget.RelativeLayout r0 = r7.Z
            r1 = 4
            r0.setVisibility(r1)
        L51:
            return
    }

    static java.util.List B(com.sigmob.sdk.videoAd.l r0) {
            java.util.List<java.lang.String> r0 = r0.x
            return r0
    }

    private void B() {
            r3 = this;
            boolean r0 = r3.V     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L56
            r3.I()     // Catch: java.lang.Throwable -> L4e
            int r0 = r3.U     // Catch: java.lang.Throwable -> L4e
            if (r0 <= 0) goto L28
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4e
            r0.<init>()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r1 = "video seek to "
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e
            int r1 = r3.U     // Catch: java.lang.Throwable -> L4e
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L4e
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L4e
            com.sigmob.sdk.videoAd.b r0 = r3.J     // Catch: java.lang.Throwable -> L4e
            int r1 = r3.U     // Catch: java.lang.Throwable -> L4e
            r0.seekTo(r1)     // Catch: java.lang.Throwable -> L4e
        L28:
            com.sigmob.sdk.base.views.d r0 = r3.D     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L34
            com.sigmob.sdk.base.views.d r0 = r3.D     // Catch: java.lang.Throwable -> L4e
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L3d
        L34:
            boolean r0 = r3.an     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L3d
            com.sigmob.sdk.videoAd.b r0 = r3.J     // Catch: java.lang.Throwable -> L4e
            r0.start()     // Catch: java.lang.Throwable -> L4e
        L3d:
            int r0 = r3.U     // Catch: java.lang.Throwable -> L4e
            r1 = -1
            if (r0 == r1) goto L56
            com.sigmob.sdk.videoAd.a r0 = r3.H     // Catch: java.lang.Throwable -> L4e
            android.content.Context r1 = r3.i()     // Catch: java.lang.Throwable -> L4e
            int r2 = r3.U     // Catch: java.lang.Throwable -> L4e
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L4e
            goto L56
        L4e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L56:
            return
    }

    static java.lang.String C(com.sigmob.sdk.videoAd.l r0) {
            java.lang.String r0 = r0.z
            return r0
    }

    private void C() {
            r3 = this;
            boolean r0 = r3.V     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L38
            r3.J()     // Catch: java.lang.Throwable -> L30
            com.sigmob.sdk.videoAd.b r0 = r3.J     // Catch: java.lang.Throwable -> L30
            r0.pause()     // Catch: java.lang.Throwable -> L30
            java.lang.String r0 = "videoView.pause()"
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L30
            int r0 = r3.t()     // Catch: java.lang.Throwable -> L30
            r3.U = r0     // Catch: java.lang.Throwable -> L30
            com.sigmob.sdk.base.common.r r0 = r3.n()     // Catch: java.lang.Throwable -> L30
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.k     // Catch: java.lang.Throwable -> L30
            int r2 = r3.t()     // Catch: java.lang.Throwable -> L30
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L30
            com.sigmob.sdk.videoAd.a r0 = r3.H     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r3.i()     // Catch: java.lang.Throwable -> L30
            int r2 = r3.U     // Catch: java.lang.Throwable -> L30
            r0.b(r1, r2)     // Catch: java.lang.Throwable -> L30
            goto L38
        L30:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L38:
            return
    }

    private float D() {
            r2 = this;
            int r0 = r2.t()
            float r0 = (float) r0
            int r1 = r2.s()
            float r1 = (float) r1
            float r0 = r0 / r1
            return r0
    }

    static java.lang.String D(com.sigmob.sdk.videoAd.l r0) {
            java.lang.String r0 = r0.v
            return r0
    }

    static android.content.Context E(com.sigmob.sdk.videoAd.l r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    private void E() {
            r2 = this;
            int r0 = r2.s()     // Catch: java.lang.Throwable -> Ld
            com.sigmob.sdk.videoAd.a r1 = r2.H     // Catch: java.lang.Throwable -> Ld
            int r0 = r1.j(r0)     // Catch: java.lang.Throwable -> Ld
            r2.T = r0     // Catch: java.lang.Throwable -> Ld
            goto L15
        Ld:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L15:
            return
    }

    static com.sigmob.sdk.base.common.j F(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    private void F() {
            r4 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.K
            com.sigmob.sdk.videoAd.l$18 r1 = new com.sigmob.sdk.videoAd.l$18
            r1.<init>(r4)
            java.lang.String r2 = "play_loading"
            r3 = 0
            com.sigmob.sdk.base.common.z.a(r2, r3, r0, r1)
            return
    }

    private void G() {
            r3 = this;
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.s()
            int r1 = r3.s()
            int r1 = r1 + (-2)
            r2 = 99999999(0x5f5e0ff, float:2.312234E-35)
            if (r0 != r2) goto L16
            r0 = 0
        L12:
            r3.a(r0)
            goto L24
        L16:
            r2 = -99999999(0xfffffffffa0a1f01, float:-1.7929145E35)
            if (r0 != r2) goto L1f
            r3.a(r1)
            goto L24
        L1f:
            if (r0 <= 0) goto L22
            goto L12
        L22:
            int r0 = r0 + r1
            goto L12
        L24:
            return
    }

    static boolean G(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.C
            return r0
    }

    static com.sigmob.sdk.base.common.r H(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.common.r r0 = r0.M
            return r0
    }

    private void H() {
            r5 = this;
            r5.u()
            boolean r0 = r5.C
            r1 = 0
            if (r0 != 0) goto L26
            android.widget.ImageView r0 = r5.q
            if (r0 == 0) goto L26
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L1d
            boolean r2 = r0 instanceof android.view.ViewGroup
            if (r2 == 0) goto L1d
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.widget.ImageView r2 = r5.q
            r0.removeView(r2)
        L1d:
            android.view.ViewGroup r0 = r5.j()
            android.widget.ImageView r2 = r5.q
            r0.addView(r2, r1)
        L26:
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            r0.b(r5)
            com.sigmob.sdk.base.views.x r0 = r5.O
            if (r0 != 0) goto L39
            android.content.Context r0 = r5.i()
            r5.e(r0, r1)
            goto L3c
        L39:
            r0.setVisibility(r1)
        L3c:
            com.sigmob.sdk.base.views.b r0 = r5.o
            r2 = 8
            if (r0 == 0) goto L45
            r0.setVisibility(r2)
        L45:
            r5.F()
            r5.A()
            android.view.View r0 = r5.L
            if (r0 != 0) goto L7f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "endcard can't show "
            r0.append(r3)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r5.K
            java.lang.String r3 = r3.getEndCardIndexPath()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r3 = "error"
            java.lang.String r4 = "endcard can't show"
            r0.put(r3, r4)
            java.lang.String r3 = "com.sigmob.action.rewardedvideo.playFail"
            r5.a(r3, r0)
            com.sigmob.sdk.base.common.j r0 = r5.d
            r0.a()
        L7f:
            android.view.View r0 = r5.L
            if (r0 == 0) goto L8b
            r0.setVisibility(r1)
            android.view.View r0 = r5.L
            r0.bringToFront()
        L8b:
            android.widget.RelativeLayout r0 = r5.r
            if (r0 == 0) goto L98
            r1 = 4
            r0.setVisibility(r1)
            java.lang.String r0 = "com.sigmob.action.rewardedvideo.Close"
            r5.a(r0)
        L98:
            com.sigmob.sdk.base.views.w r0 = r5.P
            if (r0 == 0) goto L9f
            r0.setVisibility(r2)
        L9f:
            com.sigmob.sdk.base.views.x r0 = r5.ab
            if (r0 == 0) goto La6
            r0.setVisibility(r2)
        La6:
            boolean r0 = r5.ag
            if (r0 == 0) goto Laf
            com.sigmob.sdk.base.views.y r0 = r5.N
            r0.setVisibility(r2)
        Laf:
            com.sigmob.sdk.base.views.j r0 = r5.af
            if (r0 == 0) goto Lb6
            r0.setVisibility(r2)
        Lb6:
            r0 = 1
            r5.Y = r0
            return
    }

    static com.sigmob.sdk.base.views.t I(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.t r0 = r0.ak
            return r0
    }

    private void I() {
            r3 = this;
            com.sigmob.sdk.videoAd.d r0 = r3.S
            if (r0 == 0) goto L9
            r1 = 50
            r0.startRepeating(r1)
        L9:
            return
    }

    static android.content.Context J(com.sigmob.sdk.videoAd.l r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    private void J() {
            r1 = this;
            com.sigmob.sdk.videoAd.d r0 = r1.S
            if (r0 == 0) goto L7
            r0.stop()
        L7:
            return
    }

    static com.sigmob.sdk.base.common.j K(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    private void K() {
            r2 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.sigmob.sdk.videoAd.l$11 r1 = new com.sigmob.sdk.videoAd.l$11
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    static boolean L(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.ao
            return r0
    }

    static boolean M(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.al
            return r0
    }

    static android.content.Context N(com.sigmob.sdk.videoAd.l r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    static com.sigmob.sdk.base.common.j O(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    static com.sigmob.sdk.base.views.w P(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.w r0 = r0.P
            return r0
    }

    static boolean Q(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.ad
            return r0
    }

    static android.content.Context R(com.sigmob.sdk.videoAd.l r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static com.sigmob.sdk.base.views.a S(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.a r0 = r0.Q
            return r0
    }

    static com.sigmob.sdk.base.views.q T(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.q r0 = r0.am
            return r0
    }

    static com.sigmob.sdk.base.views.x U(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.x r0 = r0.O
            return r0
    }

    static boolean V(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.aa
            return r0
    }

    static boolean W(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.A
            return r0
    }

    static boolean X(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.ah
            return r0
    }

    static void Y(com.sigmob.sdk.videoAd.l r0) {
            r0.K()
            return
    }

    static int a(com.sigmob.sdk.videoAd.l r0, int r1) {
            r0.X = r1
            return r1
    }

    private android.view.View a(android.content.Context r6, com.sigmob.sdk.videoAd.h r7, int r8) {
            r5 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r6)
            if (r7 != 0) goto Lf
            android.view.View r7 = new android.view.View
            r7.<init>(r6)
            r6 = 4
            r7.setVisibility(r6)
            return r7
        Lf:
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r6)
            r1 = 17
            r0.setGravity(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            android.view.ViewGroup r3 = r5.j()
            r4 = 0
            r3.addView(r0, r4, r1)
            com.sigmob.sdk.base.views.l r7 = r5.a(r6, r7)
            r7.setVisibility(r8)
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams
            r8.<init>(r2, r2)
            r0.addView(r7, r8)
            com.sigmob.sdk.base.views.a r8 = r5.Q
            if (r8 != 0) goto L4d
            com.sigmob.sdk.base.views.a r8 = new com.sigmob.sdk.base.views.a
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.K
            java.lang.String r0 = r0.getRequestId()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r5.K
            java.lang.String r1 = r1.getAdslot_id()
            r8.<init>(r6, r0, r1)
            r5.Q = r8
        L4d:
            com.sigmob.sdk.videoAd.l$6 r6 = new com.sigmob.sdk.videoAd.l$6
            r6.<init>(r5)
            r7.setLogoClickListener(r6)
            return r7
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.K
            return r0
    }

    private com.sigmob.sdk.base.views.l a(android.content.Context r4, com.sigmob.sdk.videoAd.h r5) {
            r3 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r4)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r5)
            com.sigmob.sdk.base.views.k r0 = r5.a()
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.K
            java.lang.String r0 = r0.getAd_source_logo()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.K
            boolean r1 = r1.getInvisibleAdLabel()
            r2 = 0
            com.sigmob.sdk.base.views.l r4 = com.sigmob.sdk.base.views.l.a(r4, r0, r2, r1)
            com.sigmob.sdk.videoAd.l$a r0 = new com.sigmob.sdk.videoAd.l$a
            r0.<init>()
            java.lang.String r1 = "sigVersion"
            r4.addJavascriptInterface(r0, r1)
            com.sigmob.sdk.videoAd.l$8 r0 = new com.sigmob.sdk.videoAd.l$8
            r0.<init>(r3)
            r4.setWebViewClickListener(r0)
            com.sigmob.sdk.videoAd.l$9 r0 = new com.sigmob.sdk.videoAd.l$9
            r0.<init>(r3)
            r4.setDownloadListener(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.K
            r4.setAdUnit(r0)
            com.sigmob.sdk.videoAd.l$10 r0 = new com.sigmob.sdk.videoAd.l$10
            r0.<init>(r3)
            r4.setWebViewClient(r0)
            com.sigmob.sdk.base.views.k r5 = r5.a()
            r5.a(r4)
            r5 = 0
            r4.a(r5)
            return r4
    }

    static com.sigmob.sdk.base.views.q a(com.sigmob.sdk.videoAd.l r0, com.sigmob.sdk.base.views.q r1) {
            r0.am = r1
            return r1
    }

    private com.sigmob.sdk.videoAd.b a(android.content.Context r4, int r5) {
            r3 = this;
            com.sigmob.sdk.videoAd.a r0 = r3.H
            java.lang.String r0 = r0.e()
            if (r0 == 0) goto L70
            com.sigmob.sdk.videoAd.b r0 = new com.sigmob.sdk.videoAd.b
            r0.<init>(r4)
            com.sigmob.sdk.videoAd.l$15 r1 = new com.sigmob.sdk.videoAd.l$15
            r1.<init>(r3, r0)
            r0.setOnPreparedListener(r1)
            boolean r1 = r3.C     // Catch: java.lang.Throwable -> L2a
            if (r1 != 0) goto L2a
            android.media.MediaMetadataRetriever r1 = r0.a     // Catch: java.lang.Throwable -> L2a
            com.sigmob.sdk.videoAd.a r2 = r3.H     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = r2.e()     // Catch: java.lang.Throwable -> L2a
            r1.setDataSource(r2)     // Catch: java.lang.Throwable -> L2a
            android.widget.ImageView r4 = r3.b(r4)     // Catch: java.lang.Throwable -> L2a
            r3.q = r4     // Catch: java.lang.Throwable -> L2a
        L2a:
            com.sigmob.sdk.videoAd.l$16 r4 = new com.sigmob.sdk.videoAd.l$16
            r4.<init>(r3)
            r0.setOnCompletionListener(r4)
            com.sigmob.sdk.videoAd.l$17 r4 = new com.sigmob.sdk.videoAd.l$17
            r4.<init>(r3, r0)
            r0.setOnErrorListener(r4)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r3.K
            boolean r4 = r4.isVideoExist()
            if (r4 == 0) goto L52
            java.io.File r4 = new java.io.File
            com.sigmob.sdk.videoAd.a r1 = r3.H
            java.lang.String r1 = r1.e()
            r4.<init>(r1)
            android.net.Uri r4 = android.net.Uri.fromFile(r4)
            goto L69
        L52:
            r4 = 1
            r3.t = r4
            com.sigmob.sdk.base.common.f r4 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.K
            r2 = 0
            r4.a(r1, r2)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r3.K
            java.lang.String r4 = r4.getProxyVideoUrl()
            android.net.Uri r4 = android.net.Uri.parse(r4)
        L69:
            r0.setVideoURI(r4)
            r0.setVisibility(r5)
            return r0
        L70:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "BaseVideoConfig does not have a video disk path"
            r4.<init>(r5)
            throw r4
    }

    static java.lang.String a(com.sigmob.sdk.videoAd.l r0, java.lang.String r1) {
            r0.z = r1
            return r1
    }

    static java.lang.String a(com.sigmob.sdk.videoAd.l r0, java.util.List r1) {
            java.lang.String r0 = r0.a(r1)
            return r0
    }

    private java.lang.String a(java.util.List<java.lang.String> r4) {
            r3 = this;
            if (r4 == 0) goto L36
            int r0 = r4.size()
            if (r0 != 0) goto L9
            goto L36
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            r2 = 91
            r0.append(r2)
        L14:
            if (r1 == 0) goto L1b
            r2 = 44
            r0.append(r2)
        L1b:
            java.lang.Object r2 = r4.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            int r1 = r1 + 1
            int r2 = r4.size()
            if (r1 < r2) goto L14
            r4 = 93
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        L36:
            java.lang.String r4 = ""
            return r4
    }

    private void a(int r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L49
            r0.<init>()     // Catch: java.lang.RuntimeException -> L49
            java.lang.String r1 = "get video image begin"
            r0.append(r1)     // Catch: java.lang.RuntimeException -> L49
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.RuntimeException -> L49
            r0.append(r1)     // Catch: java.lang.RuntimeException -> L49
            java.lang.String r0 = r0.toString()     // Catch: java.lang.RuntimeException -> L49
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.RuntimeException -> L49
            com.sigmob.sdk.videoAd.b r0 = r3.J     // Catch: java.lang.RuntimeException -> L49
            android.media.MediaMetadataRetriever r0 = r0.a     // Catch: java.lang.RuntimeException -> L49
            int r4 = r4 * 1000
            long r1 = (long) r4     // Catch: java.lang.RuntimeException -> L49
            r4 = 2
            android.graphics.Bitmap r4 = r0.getFrameAtTime(r1, r4)     // Catch: java.lang.RuntimeException -> L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L49
            r0.<init>()     // Catch: java.lang.RuntimeException -> L49
            java.lang.String r1 = "get video image end"
            r0.append(r1)     // Catch: java.lang.RuntimeException -> L49
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.RuntimeException -> L49
            r0.append(r1)     // Catch: java.lang.RuntimeException -> L49
            java.lang.String r0 = r0.toString()     // Catch: java.lang.RuntimeException -> L49
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.RuntimeException -> L49
            android.widget.ImageView r0 = r3.q     // Catch: java.lang.RuntimeException -> L49
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.RuntimeException -> L49
            r0.setScaleType(r1)     // Catch: java.lang.RuntimeException -> L49
            android.widget.ImageView r0 = r3.q     // Catch: java.lang.RuntimeException -> L49
            r0.setImageBitmap(r4)     // Catch: java.lang.RuntimeException -> L49
            goto L51
        L49:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L51:
            return
    }

    private void a(int r3, android.widget.RelativeLayout.LayoutParams r4) {
            r2 = this;
            android.content.Context r0 = r2.b
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r0)
            r1 = 10
            r4.addRule(r1)
            com.sigmob.sdk.base.views.x r1 = r2.ab
            if (r1 == 0) goto L1f
            int r1 = r1.getId()
            r4.addRule(r3, r1)
            int r0 = r0 * 2
            r3 = 0
            r4.setMargins(r3, r0, r3, r3)
            goto L2b
        L1f:
            int r1 = r1.getId()
            r4.addRule(r3, r1)
            int r3 = r0 * 2
            r4.setMargins(r0, r3, r0, r0)
        L2b:
            return
    }

    private void a(int r2, boolean r3) {
            r1 = this;
            com.sigmob.sdk.base.views.w r0 = r1.P
            if (r0 == 0) goto L1f
            boolean r0 = r0.a()
            if (r0 != 0) goto L1f
            com.sigmob.sdk.base.views.w r0 = r1.P
            r0.b()
            com.sigmob.sdk.base.common.r r0 = r1.n()
            r0.a(r3, r2)
            com.sigmob.sdk.base.common.r r3 = r1.n()
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.L
            r3.a(r0, r2)
        L1f:
            return
    }

    private void a(android.view.MotionEvent r7, android.view.MotionEvent r8) {
            r6 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.K
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r0 = r0.getClickAreaSetting()
            java.lang.Float r1 = r0.left
            float r1 = r1.floatValue()
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.widthPixels
            float r2 = (float) r2
            float r1 = r1 * r2
            java.lang.Float r2 = r0.right
            float r2 = r2.floatValue()
            r3 = 1065353216(0x3f800000, float:1.0)
            float r2 = r3 - r2
            com.czhj.sdk.common.ClientMetadata r4 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            int r4 = r4.widthPixels
            float r4 = (float) r4
            float r2 = r2 * r4
            java.lang.Float r4 = r0.top
            float r4 = r4.floatValue()
            com.czhj.sdk.common.ClientMetadata r5 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r5 = r5.getDisplayMetrics()
            int r5 = r5.heightPixels
            float r5 = (float) r5
            float r4 = r4 * r5
            java.lang.Float r0 = r0.bottom
            float r0 = r0.floatValue()
            float r3 = r3 - r0
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.heightPixels
            float r0 = (float) r0
            float r3 = r3 * r0
            float r0 = r8.getRawX()
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            r1 = 0
            r5 = 1
            if (r0 >= 0) goto L117
            float r0 = r8.getRawX()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L117
            float r0 = r8.getRawY()
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 >= 0) goto L117
            float r0 = r8.getRawY()
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 >= 0) goto L117
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.K
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r0.getMacroCommon()
            boolean r2 = r0 instanceof com.sigmob.sdk.base.models.SigMacroCommon
            if (r2 == 0) goto Lcd
            com.sigmob.sdk.base.models.SigMacroCommon r0 = (com.sigmob.sdk.base.models.SigMacroCommon) r0
            int r2 = r6.t()
            int r2 = r2 * 100
            int r3 = r6.s()
            int r2 = r2 / r3
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "_PROGRESS_"
            r0.addMarcoKey(r3, r2)
            float r2 = r7.getRawX()
            int r2 = (int) r2
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "_DOWNX_"
            r0.addMarcoKey(r3, r2)
            float r2 = r7.getRawY()
            int r2 = (int) r2
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "_DOWNY_"
            r0.addMarcoKey(r3, r2)
            float r2 = r8.getRawX()
            int r2 = (int) r2
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "_UPX_"
            r0.addMarcoKey(r3, r2)
            float r2 = r8.getRawY()
            int r2 = (int) r2
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "_UPY_"
            r0.addMarcoKey(r3, r2)
        Lcd:
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            float r2 = r7.getRawX()
            int r2 = (int) r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            float r7 = r7.getRawY()
            int r7 = (int) r7
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r0[r5] = r7
            r7 = 2
            float r1 = r8.getRawX()
            int r1 = (int) r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r7] = r1
            r7 = 3
            float r1 = r8.getRawY()
            int r1 = (int) r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r7] = r1
            java.lang.String r7 = "%d,%d,%d,%d"
            java.lang.String r7 = java.lang.String.format(r7, r0)
            r6.g = r7
            com.sigmob.sdk.videoAd.h r7 = r6.R
            if (r7 != 0) goto L10d
            r6.u()
        L10d:
            com.sigmob.sdk.videoAd.a r7 = r6.H
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.c
            java.lang.String r1 = r6.g
            r7.a(r0, r1, r5)
            r1 = r5
        L117:
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r6.K
            java.lang.String r0 = "useless_video_click"
            com.sigmob.sdk.base.common.z.a(r7, r8, r0, r1)
            return
    }

    static void a(com.sigmob.sdk.videoAd.l r0, int r1, boolean r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.sigmob.sdk.videoAd.l r0, android.content.Context r1, int r2) {
            r0.c(r1, r2)
            return
    }

    static void a(com.sigmob.sdk.videoAd.l r0, android.view.MotionEvent r1, android.view.MotionEvent r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.sigmob.sdk.videoAd.l r0, java.lang.String r1, java.util.Map r2) {
            r0.a(r1, r2)
            return
    }

    static boolean a(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.ai = r1
            return r1
    }

    static int b(com.sigmob.sdk.videoAd.l r0, int r1) {
            r0.aj = r1
            return r1
    }

    private android.widget.ImageView b(android.content.Context r3) {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r3)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r3.<init>(r1, r1)
            r0.setLayoutParams(r3)
            return r0
    }

    static com.sigmob.sdk.base.views.d b(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.d r0 = r0.D
            return r0
    }

    static java.lang.String b(com.sigmob.sdk.videoAd.l r0, java.lang.String r1) {
            r0.v = r1
            return r1
    }

    private void b(int r4) {
            r3 = this;
            com.sigmob.sdk.base.views.q r0 = r3.am
            if (r0 != 0) goto L19
            com.sigmob.sdk.base.views.q r0 = new com.sigmob.sdk.base.views.q
            android.app.Activity r1 = r3.k()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.K
            r0.<init>(r1, r2)
            r3.am = r0
            com.sigmob.sdk.videoAd.l$7 r1 = new com.sigmob.sdk.videoAd.l$7
            r1.<init>(r3, r4)
            r0.a(r1)
        L19:
            com.sigmob.sdk.base.views.q r4 = r3.am
            if (r4 == 0) goto L2f
            boolean r4 = r4.a()
            if (r4 == 0) goto L2f
            boolean r4 = r3.an
            if (r4 != 0) goto L2f
            com.sigmob.sdk.base.views.q r4 = r3.am
            r4.show()
            r4 = 1
            r3.an = r4
        L2f:
            return
    }

    private void b(int r4, android.widget.RelativeLayout.LayoutParams r5) {
            r3 = this;
            android.content.Context r0 = r3.b
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r0)
            r1 = 1
            r2 = 10
            if (r4 == r1) goto L1d
            r1 = 2
            if (r4 == r1) goto L1d
            r1 = 3
            if (r4 == r1) goto L17
            r1 = 4
            if (r4 == r1) goto L17
            goto L2a
        L17:
            r5.addRule(r2)
            r4 = 11
            goto L22
        L1d:
            r5.addRule(r2)
            r4 = 9
        L22:
            r5.addRule(r4)
            int r4 = r0 * 2
            r5.setMargins(r0, r4, r0, r0)
        L2a:
            return
    }

    private void b(android.content.Context r2, int r3) {
            r1 = this;
            com.sigmob.sdk.base.views.y r0 = new com.sigmob.sdk.base.views.y
            r0.<init>(r2)
            r1.N = r0
            com.sigmob.sdk.videoAd.b r2 = r1.J
            int r2 = r2.getId()
            r0.setAnchorId(r2)
            com.sigmob.sdk.base.views.y r2 = r1.N
            r2.setVisibility(r3)
            android.view.ViewGroup r2 = r1.j()
            com.sigmob.sdk.base.views.y r3 = r1.N
            r2.addView(r3)
            return
    }

    static boolean b(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.W = r1
            return r1
    }

    static com.sigmob.sdk.base.views.j c(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.j r0 = r0.af
            return r0
    }

    private void c(android.content.Context r3, int r4) {
            r2 = this;
            com.sigmob.sdk.base.views.d r0 = r2.D
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.views.d r0 = new com.sigmob.sdk.base.views.d
            com.sigmob.sdk.videoAd.a r1 = r2.H
            com.sigmob.sdk.videoAd.e r1 = r1.u()
            r0.<init>(r3, r1)
            r2.D = r0
            r0.setVisibility(r4)
            android.view.ViewGroup r3 = r2.j()
            com.sigmob.sdk.base.views.d r4 = r2.D
            r3.addView(r4)
            com.sigmob.sdk.base.views.d r3 = r2.D
            com.sigmob.sdk.videoAd.l$19 r4 = new com.sigmob.sdk.videoAd.l$19
            r4.<init>(r2)
            r3.setDialogListener(r4)
            return
    }

    static void c(com.sigmob.sdk.videoAd.l r0, int r1) {
            r0.a(r1)
            return
    }

    static void c(com.sigmob.sdk.videoAd.l r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean c(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.V = r1
            return r1
    }

    static android.os.Handler d(com.sigmob.sdk.videoAd.l r0) {
            android.os.Handler r0 = r0.B
            return r0
    }

    private void d(android.content.Context r23, int r24) {
            r22 = this;
            r0 = r22
            r15 = r23
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r0.K
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r1.getMaterial()
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r1.companion
            if (r1 == 0) goto L1f3
            java.lang.String r2 = r1.icon_url
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f3
            java.lang.String r2 = r1.title
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f3
            java.lang.String r2 = r1.desc
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L34
            java.lang.Float r2 = r1.score
            float r2 = r2.floatValue()
            r3 = 1065353216(0x3f800000, float:1.0)
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 >= 0) goto L34
            goto L1f3
        L34:
            int r2 = com.sigmob.sdk.base.views.n.a
            r3 = 229(0xe5, float:3.21E-43)
            r4 = -1
            com.sigmob.sdk.base.models.rtb.Color r5 = r1.button_color     // Catch: java.lang.Throwable -> Le8
            r6 = 1132396544(0x437f0000, float:255.0)
            r7 = 4576918229304087675(0x3f847ae147ae147b, double:0.01)
            if (r5 == 0) goto L77
            com.sigmob.sdk.base.models.rtb.Color r5 = r1.button_color     // Catch: java.lang.Throwable -> Le8
            java.lang.Float r5 = r5.alpha     // Catch: java.lang.Throwable -> Le8
            float r5 = r5.floatValue()     // Catch: java.lang.Throwable -> Le8
            double r9 = (double) r5
            int r5 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r5 <= 0) goto L77
            com.sigmob.sdk.base.models.rtb.Color r5 = r1.button_color     // Catch: java.lang.Throwable -> L77
            java.lang.Float r5 = r5.alpha     // Catch: java.lang.Throwable -> L77
            float r5 = r5.floatValue()     // Catch: java.lang.Throwable -> L77
            float r5 = r5 * r6
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L77
            com.sigmob.sdk.base.models.rtb.Color r9 = r1.button_color     // Catch: java.lang.Throwable -> L77
            java.lang.Integer r9 = r9.red     // Catch: java.lang.Throwable -> L77
            int r9 = r9.intValue()     // Catch: java.lang.Throwable -> L77
            com.sigmob.sdk.base.models.rtb.Color r10 = r1.button_color     // Catch: java.lang.Throwable -> L77
            java.lang.Integer r10 = r10.green     // Catch: java.lang.Throwable -> L77
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> L77
            com.sigmob.sdk.base.models.rtb.Color r11 = r1.button_color     // Catch: java.lang.Throwable -> L77
            java.lang.Integer r11 = r11.blue     // Catch: java.lang.Throwable -> L77
            int r11 = r11.intValue()     // Catch: java.lang.Throwable -> L77
            int r2 = android.graphics.Color.argb(r5, r9, r10, r11)     // Catch: java.lang.Throwable -> L77
        L77:
            com.sigmob.sdk.base.models.rtb.Color r5 = r1.button_text_color     // Catch: java.lang.Throwable -> Le8
            if (r5 == 0) goto Laf
            com.sigmob.sdk.base.models.rtb.Color r5 = r1.button_text_color     // Catch: java.lang.Throwable -> Le8
            java.lang.Float r5 = r5.alpha     // Catch: java.lang.Throwable -> Le8
            float r5 = r5.floatValue()     // Catch: java.lang.Throwable -> Le8
            double r9 = (double) r5
            int r5 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r5 <= 0) goto Laf
            com.sigmob.sdk.base.models.rtb.Color r5 = r1.button_text_color     // Catch: java.lang.Throwable -> Laf
            java.lang.Float r5 = r5.alpha     // Catch: java.lang.Throwable -> Laf
            float r5 = r5.floatValue()     // Catch: java.lang.Throwable -> Laf
            float r5 = r5 * r6
            int r5 = (int) r5     // Catch: java.lang.Throwable -> Laf
            com.sigmob.sdk.base.models.rtb.Color r9 = r1.button_text_color     // Catch: java.lang.Throwable -> Laf
            java.lang.Integer r9 = r9.red     // Catch: java.lang.Throwable -> Laf
            int r9 = r9.intValue()     // Catch: java.lang.Throwable -> Laf
            com.sigmob.sdk.base.models.rtb.Color r10 = r1.button_text_color     // Catch: java.lang.Throwable -> Laf
            java.lang.Integer r10 = r10.green     // Catch: java.lang.Throwable -> Laf
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> Laf
            com.sigmob.sdk.base.models.rtb.Color r11 = r1.button_text_color     // Catch: java.lang.Throwable -> Laf
            java.lang.Integer r11 = r11.blue     // Catch: java.lang.Throwable -> Laf
            int r11 = r11.intValue()     // Catch: java.lang.Throwable -> Laf
            int r5 = android.graphics.Color.argb(r5, r9, r10, r11)     // Catch: java.lang.Throwable -> Laf
            goto Lb0
        Laf:
            r5 = r4
        Lb0:
            com.sigmob.sdk.base.models.rtb.Color r9 = r1.bar_color     // Catch: java.lang.Throwable -> Le9
            if (r9 == 0) goto Le9
            com.sigmob.sdk.base.models.rtb.Color r9 = r1.bar_color     // Catch: java.lang.Throwable -> Le9
            java.lang.Float r9 = r9.alpha     // Catch: java.lang.Throwable -> Le9
            float r9 = r9.floatValue()     // Catch: java.lang.Throwable -> Le9
            double r9 = (double) r9     // Catch: java.lang.Throwable -> Le9
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 <= 0) goto Le9
            com.sigmob.sdk.base.models.rtb.Color r7 = r1.bar_color     // Catch: java.lang.Throwable -> Le9
            java.lang.Float r7 = r7.alpha     // Catch: java.lang.Throwable -> Le9
            float r3 = r7.floatValue()     // Catch: java.lang.Throwable -> Le9
            float r3 = r3 * r6
            int r3 = (int) r3     // Catch: java.lang.Throwable -> Le9
            com.sigmob.sdk.base.models.rtb.Color r6 = r1.button_text_color     // Catch: java.lang.Throwable -> Le9
            java.lang.Integer r6 = r6.red     // Catch: java.lang.Throwable -> Le9
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> Le9
            com.sigmob.sdk.base.models.rtb.Color r7 = r1.button_text_color     // Catch: java.lang.Throwable -> Le9
            java.lang.Integer r7 = r7.green     // Catch: java.lang.Throwable -> Le9
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> Le9
            com.sigmob.sdk.base.models.rtb.Color r8 = r1.button_text_color     // Catch: java.lang.Throwable -> Le9
            java.lang.Integer r8 = r8.blue     // Catch: java.lang.Throwable -> Le9
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> Le9
            int r4 = android.graphics.Color.rgb(r6, r7, r8)     // Catch: java.lang.Throwable -> Le9
            goto Le9
        Le8:
            r5 = r4
        Le9:
            r11 = r2
            r16 = r3
            r14 = r4
            r12 = r5
            r13 = 0
            java.lang.Integer r2 = r1.click_type     // Catch: java.lang.Throwable -> Lfe
            if (r2 == 0) goto Lfa
            java.lang.Integer r2 = r1.click_type     // Catch: java.lang.Throwable -> Lfe
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> Lfe
            goto Lfb
        Lfa:
            r2 = r13
        Lfb:
            r17 = r2
            goto L100
        Lfe:
            r17 = r13
        L100:
            r10 = 1116471296(0x428c0000, float:70.0)
            java.lang.String r2 = r1.button_text
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r9 = 2
            if (r3 != 0) goto L115
            int r3 = r2.length()
            r4 = 4
            if (r3 <= r4) goto L113
            goto L115
        L113:
            r5 = r2
            goto L125
        L115:
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r22.a()
            int r2 = r2.getInteractionType()
            if (r2 != r9) goto L122
            java.lang.String r2 = "下载"
            goto L113
        L122:
            java.lang.String r2 = "详情"
            goto L113
        L125:
            com.sigmob.sdk.base.views.j r8 = new com.sigmob.sdk.base.views.j
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r0.K
            java.lang.String r4 = r1.title
            java.lang.Float r2 = r1.score
            float r6 = r2.floatValue()
            java.lang.String r7 = r1.desc
            java.lang.Integer r2 = r1.animate_type
            int r18 = r2.intValue()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r0.K
            com.sigmob.sdk.base.models.rtb.MaterialMeta r2 = r2.getMaterial()
            java.lang.Integer r2 = r2.template_type
            int r19 = r2.intValue()
            java.lang.String r2 = r1.icon_url
            r20 = 1116471296(0x428c0000, float:70.0)
            r1 = r8
            r21 = r2
            r2 = r23
            r0 = r8
            r8 = r18
            r24 = r0
            r0 = r9
            r9 = r19
            r0 = r10
            r10 = r21
            r13 = r17
            r0 = r15
            r15 = r16
            r16 = r20
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            r1 = r22
            r2 = r24
            r1.af = r2
            int r3 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r2.setId(r3)
            com.sigmob.sdk.base.views.j r2 = r1.af
            android.widget.LinearLayout r2 = r2.getFourElementsLayout()
            r3 = 1
            if (r2 == 0) goto L184
            r2.setClickable(r3)
            com.sigmob.sdk.videoAd.l$20 r4 = new com.sigmob.sdk.videoAd.l$20
            r4.<init>(r1)
            r2.setOnClickListener(r4)
        L184:
            android.content.res.Resources r2 = r23.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.widthPixels
            android.content.res.Resources r4 = r23.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            int r4 = r4.heightPixels
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            int r2 = java.lang.Math.max(r2, r4)
            int r2 = r2 * 3
            int r2 = r2 / 5
            r4 = 1116471296(0x428c0000, float:70.0)
            int r4 = com.czhj.sdk.common.utils.Dips.asIntPixels(r4, r0)
            r5.<init>(r2, r4)
            r2 = 1090519040(0x41000000, float:8.0)
            int r0 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r0)
            com.sigmob.sdk.base.views.b r2 = r1.o
            r4 = 11
            if (r2 == 0) goto L1c9
            r2 = 0
            r5.setMargins(r0, r2, r0, r2)
            r5.addRule(r4)
            com.sigmob.sdk.base.views.b r0 = r1.o
            int r0 = r0.getId()
            r4 = 2
            r5.addRule(r4, r0)
            goto L1d8
        L1c9:
            r2 = 0
            int r6 = r1.s
            int r6 = r6 + r0
            r5.setMargins(r0, r2, r0, r6)
            r5.addRule(r4)
            r0 = 12
            r5.addRule(r0)
        L1d8:
            android.view.ViewGroup r0 = r22.j()
            com.sigmob.sdk.base.views.j r4 = r1.af
            r0.addView(r4, r5)
            r1.G = r2
            com.sigmob.sdk.base.views.j r0 = r1.af
            r0.setClickable(r3)
            com.sigmob.sdk.base.views.j r0 = r1.af
            com.sigmob.sdk.videoAd.l$21 r2 = new com.sigmob.sdk.videoAd.l$21
            r2.<init>(r1)
            r0.setOnTouchListener(r2)
            return
        L1f3:
            r1 = r0
            java.lang.String r0 = "ompanionEnd lose informations of UI Display"
            com.czhj.sdk.logger.SigmobLog.e(r0)
            return
    }

    static void d(com.sigmob.sdk.videoAd.l r0, int r1) {
            r0.b(r1)
            return
    }

    static boolean d(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.aa = r1
            return r1
    }

    static com.sigmob.sdk.videoAd.h e(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.videoAd.h r0 = r0.R
            return r0
    }

    private void e(android.content.Context r3, int r4) {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = r2.O
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.views.x r0 = new com.sigmob.sdk.base.views.x
            com.sigmob.sdk.videoAd.a r1 = r2.H
            int r1 = r1.n()
            r0.<init>(r3, r1)
            r2.O = r0
            r0.setVisibility(r4)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r0 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r3)
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r3)
            r4.<init>(r1, r3)
            com.sigmob.sdk.videoAd.a r3 = r2.H
            int r3 = r3.n()
            r2.b(r3, r4)
            android.view.ViewGroup r3 = r2.j()
            com.sigmob.sdk.base.views.x r0 = r2.O
            r3.addView(r0, r4)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r2.K
            if (r3 == 0) goto L5f
            java.lang.String r3 = r3.getCloseCardHtmlData()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L5f
            boolean r3 = r2.ao
            if (r3 != 0) goto L5f
            com.sigmob.sdk.base.views.t r3 = new com.sigmob.sdk.base.views.t
            android.app.Activity r4 = r2.k()
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.K
            com.sigmob.sdk.videoAd.a r1 = r2.H
            r3.<init>(r4, r0, r1)
            r2.ak = r3
            com.sigmob.sdk.videoAd.l$2 r4 = new com.sigmob.sdk.videoAd.l$2
            r4.<init>(r2)
            r3.a(r4)
        L5f:
            com.sigmob.sdk.videoAd.l$3 r3 = new com.sigmob.sdk.videoAd.l$3
            r3.<init>(r2)
            com.sigmob.sdk.base.views.x r4 = r2.O
            r4.setOnTouchListener(r3)
            com.sigmob.sdk.base.views.x r3 = r2.O
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r2.K
            r3.a(r4)
            com.sigmob.sdk.videoAd.a r3 = r2.H
            java.lang.String r3 = r3.h()
            if (r3 == 0) goto L7d
            com.sigmob.sdk.base.views.x r4 = r2.O
            r4.a(r3)
        L7d:
            return
    }

    static boolean e(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.al = r1
            return r1
    }

    static int f(com.sigmob.sdk.videoAd.l r0) {
            int r0 = r0.X
            return r0
    }

    private void f(android.content.Context r4, int r5) {
            r3 = this;
            com.sigmob.sdk.base.views.w r0 = new com.sigmob.sdk.base.views.w
            r0.<init>(r4)
            r3.P = r0
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            com.sigmob.sdk.base.views.w r0 = r3.P
            r0.setVisibility(r5)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r0 = -2
            r5.<init>(r0, r0)
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.p()
            r1 = 0
            r2 = 2
            if (r0 > r2) goto L30
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.o()
            if (r0 > r2) goto L3c
            r0 = 1
            r3.a(r0, r5)
            goto L45
        L30:
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.o()
            if (r0 <= r2) goto L3c
            r3.a(r1, r5)
            goto L45
        L3c:
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.o()
            r3.b(r0, r5)
        L45:
            android.view.ViewGroup r0 = r3.j()
            com.sigmob.sdk.base.views.w r2 = r3.P
            r0.addView(r2, r5)
            com.sigmob.sdk.base.views.w r5 = r3.P
            com.sigmob.sdk.videoAd.l$4 r0 = new com.sigmob.sdk.videoAd.l$4
            r0.<init>(r3, r4)
            r5.setOnClickListener(r0)
            com.sigmob.sdk.videoAd.a r4 = r3.H
            int r4 = r4.w()
            if (r4 != 0) goto L68
            com.sigmob.sdk.videoAd.a r4 = r3.H
            int r4 = r4.y()
            if (r4 < 0) goto L70
        L68:
            com.sigmob.sdk.videoAd.a r4 = r3.H
            int r4 = r4.y()
            if (r4 != 0) goto L73
        L70:
            r3.a(r1, r1)
        L73:
            return
    }

    static boolean f(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.ac = r1
            return r1
    }

    private void g(android.content.Context r3, int r4) {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = new com.sigmob.sdk.base.views.x
            com.sigmob.sdk.videoAd.a r1 = r2.H
            int r1 = r1.p()
            r0.<init>(r3, r1)
            r2.ab = r0
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            com.sigmob.sdk.base.views.x r0 = r2.ab
            r0.setVisibility(r4)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r0 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r3)
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r3)
            r4.<init>(r1, r3)
            com.sigmob.sdk.videoAd.a r3 = r2.H
            int r3 = r3.p()
            r2.b(r3, r4)
            android.view.ViewGroup r3 = r2.j()
            com.sigmob.sdk.base.views.x r0 = r2.ab
            r3.addView(r0, r4)
            com.sigmob.sdk.videoAd.l$5 r3 = new com.sigmob.sdk.videoAd.l$5
            r3.<init>(r2)
            com.sigmob.sdk.base.views.x r4 = r2.ab
            r4.setOnTouchListener(r3)
            com.sigmob.sdk.videoAd.a r3 = r2.H
            int r3 = r3.r()
            if (r3 == 0) goto L61
            com.sigmob.sdk.base.views.x r3 = r2.ab
            com.sigmob.sdk.base.views.o r4 = com.sigmob.sdk.base.views.o.b
            android.graphics.Bitmap r4 = r4.a()
            r3.a(r4)
            com.sigmob.sdk.videoAd.b r3 = r2.J
            r4 = 0
            r3.setVolume(r4)
            r3 = 1
            r2.ac = r3
            goto L6c
        L61:
            com.sigmob.sdk.base.views.x r3 = r2.ab
            com.sigmob.sdk.base.views.o r4 = com.sigmob.sdk.base.views.o.c
            android.graphics.Bitmap r4 = r4.a()
            r3.a(r4)
        L6c:
            return
    }

    static boolean g(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.V
            return r0
    }

    static boolean g(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.an = r1
            return r1
    }

    static boolean h(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.an
            return r0
    }

    static boolean h(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.A = r1
            return r1
    }

    static void i(com.sigmob.sdk.videoAd.l r0) {
            r0.A()
            return
    }

    static boolean i(com.sigmob.sdk.videoAd.l r0, boolean r1) {
            r0.ah = r1
            return r1
    }

    static void j(com.sigmob.sdk.videoAd.l r0) {
            r0.I()
            return
    }

    static int k(com.sigmob.sdk.videoAd.l r0) {
            int r0 = r0.aj
            return r0
    }

    public static int l() {
            r0 = 0
            return r0
    }

    static boolean l(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.ac
            return r0
    }

    static com.sigmob.sdk.base.views.x m(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.x r0 = r0.ab
            return r0
    }

    static com.sigmob.sdk.videoAd.b n(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.videoAd.b r0 = r0.J
            return r0
    }

    static com.sigmob.sdk.videoAd.a o(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.videoAd.a r0 = r0.H
            return r0
    }

    static int p(com.sigmob.sdk.videoAd.l r0) {
            int r0 = r0.U
            return r0
    }

    static void q(com.sigmob.sdk.videoAd.l r0) {
            r0.E()
            return
    }

    static boolean r(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.ag
            return r0
    }

    static com.sigmob.sdk.base.views.y s(com.sigmob.sdk.videoAd.l r0) {
            com.sigmob.sdk.base.views.y r0 = r0.N
            return r0
    }

    static boolean t(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.t
            return r0
    }

    static boolean u(com.sigmob.sdk.videoAd.l r0) {
            boolean r0 = r0.ai
            return r0
    }

    static void v(com.sigmob.sdk.videoAd.l r0) {
            r0.z()
            return
    }

    static void w(com.sigmob.sdk.videoAd.l r0) {
            r0.J()
            return
    }

    static float x(com.sigmob.sdk.videoAd.l r0) {
            float r0 = r0.D()
            return r0
    }

    static int y() {
            int r0 = com.sigmob.sdk.videoAd.l.n
            return r0
    }

    static android.content.Context y(com.sigmob.sdk.videoAd.l r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    private void z() {
            r4 = this;
            android.widget.RelativeLayout r0 = r4.Z
            if (r0 == 0) goto L38
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lb
            goto L38
        Lb:
            long r0 = java.lang.System.currentTimeMillis()
            r4.y = r0
            android.widget.RelativeLayout r0 = r4.Z
            r1 = 0
            r0.setVisibility(r1)
            java.lang.String r0 = "loading"
            r4.z = r0
            int r0 = r4.u
            r1 = 1
            int r0 = r0 + r1
            r4.u = r0
            r2 = 2
            if (r0 <= r2) goto L2c
            int r0 = r4.t()
            r4.a(r0, r1)
            goto L38
        L2c:
            android.os.Handler r0 = r4.B
            com.sigmob.sdk.videoAd.l$12 r1 = new com.sigmob.sdk.videoAd.l$12
            r1.<init>(r4)
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r1, r2)
        L38:
            return
    }

    static void z(com.sigmob.sdk.videoAd.l r0) {
            r0.H()
            return
    }

    @Override
    public com.sigmob.sdk.base.models.BaseAdUnit a() {
            r1 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.K
            return r0
    }

    @Override
    public void a(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            r1 = -1
            if (r2 != r1) goto La
            com.sigmob.sdk.base.common.j r1 = r0.h()
            r1.a()
        La:
            return
    }

    public void a(android.content.Context r9) {
            r8 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r9)
            r8.Z = r0
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r9)
            com.sigmob.sdk.base.views.o r9 = com.sigmob.sdk.base.views.o.a
            android.graphics.Bitmap r9 = r9.a()
            r0.setImageBitmap(r9)
            int r9 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r9)
            android.view.animation.RotateAnimation r9 = new android.view.animation.RotateAnimation
            r1 = 3600000(0x36ee80, float:5.044674E-39)
            float r3 = (float) r1
            r2 = 0
            r4 = 1
            r5 = 1056964608(0x3f000000, float:0.5)
            r6 = 1
            r7 = 1056964608(0x3f000000, float:0.5)
            r1 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r1 = 8000000(0x7a1200, float:1.1210388E-38)
            long r1 = (long) r1
            r9.setDuration(r1)
            android.view.animation.LinearInterpolator r1 = new android.view.animation.LinearInterpolator
            r1.<init>()
            r9.setInterpolator(r1)
            r1 = -1
            r9.setRepeatCount(r1)
            r1 = 1
            r9.setRepeatMode(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r2)
            r3 = 13
            r1.addRule(r3)
            r0.setAnimation(r9)
            android.widget.RelativeLayout r9 = r8.Z
            r9.addView(r0, r1)
            android.widget.RelativeLayout r9 = r8.Z
            r0 = 4
            r9.setVisibility(r0)
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            r9.<init>(r2, r2)
            r9.addRule(r3)
            android.view.ViewGroup r0 = r8.j()
            android.widget.RelativeLayout r1 = r8.Z
            r0.addView(r1, r9)
            return
    }

    @Override
    public void a(android.content.res.Configuration r3) {
            r2 = this;
            com.sigmob.sdk.videoAd.a r3 = r2.H
            if (r3 == 0) goto L15
            com.sigmob.sdk.videoAd.h r3 = r2.R
            if (r3 != 0) goto L15
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r2.K
            com.sigmob.sdk.videoAd.h r3 = com.sigmob.sdk.videoAd.a.g(r3)
            r2.R = r3
            com.sigmob.sdk.videoAd.a r0 = r2.H
            r3.a(r0)
        L15:
            com.sigmob.sdk.base.common.r r3 = r2.n()
            if (r3 == 0) goto L28
            com.sigmob.sdk.base.common.r r3 = r2.n()
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.D
            int r1 = r2.t()
            r3.a(r0, r1)
        L28:
            return
    }

    @Override
    public void a(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = "video_finished"
            boolean r1 = r2.V     // Catch: java.lang.Throwable -> L16
            r3.putBoolean(r0, r1)     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "current_position"
            int r1 = r2.U     // Catch: java.lang.Throwable -> L16
            r3.putInt(r0, r1)     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "companionAd_visable"
            boolean r1 = r2.Y     // Catch: java.lang.Throwable -> L16
            r3.putBoolean(r0, r1)     // Catch: java.lang.Throwable -> L16
            goto L1e
        L16:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L1e:
            return
    }

    void a(com.sigmob.sdk.base.common.a r3) {
            r2 = this;
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.a
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L12
            java.lang.String r0 = "com.sigmob.action.interstitial.show"
            r2.a(r0)
            java.lang.String r0 = "com.sigmob.action.rewardedvideo.play"
            r2.a(r0)
        L12:
            com.sigmob.sdk.base.common.r r0 = r2.n()
            if (r0 == 0) goto L23
            com.sigmob.sdk.base.common.r r0 = r2.n()
            int r1 = r2.t()
            r0.a(r3, r1)
        L23:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            java.lang.String r0 = r3.getUuid()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.K
            java.lang.String r1 = r1.getUuid()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L11
            return
        L11:
            boolean r3 = r3.isEndCardIndexExist()
            if (r3 == 0) goto L28
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r3.<init>(r0)
            com.sigmob.sdk.videoAd.l$13 r0 = new com.sigmob.sdk.videoAd.l$13
            r0.<init>(r2)
            r3.post(r0)
        L28:
            return
    }

    @Override
    public void a(boolean r9, com.sigmob.sdk.base.a r10) {
            r8 = this;
            r0 = 1
            r8.ao = r0
            r8.K()
            if (r9 != 0) goto L9
            return
        L9:
            int[] r9 = com.sigmob.sdk.videoAd.l.14.a
            int r10 = r10.ordinal()
            r9 = r9[r10]
            if (r9 == r0) goto L54
            r10 = 2
            if (r9 == r10) goto L35
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r8.K
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.b
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.K
            java.lang.String r3 = r9.isDeeplink
            java.lang.String r4 = r9.clickUrl
            java.lang.String r5 = r9.clickCoordinate
            int r9 = r8.X
            long r6 = (long) r9
            java.lang.String r1 = "click"
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.r r9 = r8.n()
            com.sigmob.sdk.base.common.a r10 = com.sigmob.sdk.base.common.a.c
            goto L72
        L35:
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r8.K
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.c
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.K
            java.lang.String r3 = r9.isDeeplink
            java.lang.String r4 = r9.clickUrl
            java.lang.String r5 = r9.clickCoordinate
            int r9 = r8.X
            long r6 = (long) r9
            java.lang.String r1 = "click"
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.r r9 = r8.n()
            com.sigmob.sdk.base.common.a r10 = com.sigmob.sdk.base.common.a.v
            goto L72
        L54:
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r8.K
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.a
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.K
            java.lang.String r3 = r9.isDeeplink
            java.lang.String r4 = r9.clickUrl
            java.lang.String r5 = r9.clickCoordinate
            int r9 = r8.X
            long r6 = (long) r9
            java.lang.String r1 = "click"
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.r r9 = r8.n()
            com.sigmob.sdk.base.common.a r10 = com.sigmob.sdk.base.common.a.u
        L72:
            int r0 = r8.t()
            r9.a(r10, r0)
            return
    }

    @Override
    public void b() {
            r3 = this;
            super.b()
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.K
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r1 = r1.getInsetBottom()
            r3.s = r1
            boolean r1 = r3.Y
            if (r1 != 0) goto L77
            com.sigmob.sdk.videoAd.a r1 = r3.H
            if (r1 == 0) goto L6f
            boolean r1 = r3.ag
            r2 = 4
            if (r1 == 0) goto L27
            android.content.Context r1 = r3.i()
            r3.b(r1, r2)
        L27:
            java.lang.Boolean r1 = r0.has_companion_endcard
            if (r1 == 0) goto L48
            java.lang.Boolean r1 = r0.has_companion_endcard
            boolean r1 = r1.booleanValue()
            if (r1 == 0) goto L48
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r0.companion
            if (r1 == 0) goto L48
            android.content.Context r1 = r3.i()
            r3.d(r1, r2)
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r0 = r0.companion
            java.lang.Integer r0 = r0.show_delay_secs
            int r0 = r0.intValue()
            r3.F = r0
        L48:
            android.content.Context r0 = r3.i()
            r1 = 0
            r3.g(r0, r1)
            android.content.Context r0 = r3.i()
            r3.f(r0, r1)
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.sigmob.sdk.videoAd.d r1 = new com.sigmob.sdk.videoAd.d
            com.sigmob.sdk.videoAd.a r2 = r3.H
            r1.<init>(r3, r2, r0)
            r3.S = r1
            java.lang.String r0 = "com.sigmob.action.interstitial.vopen"
            r3.a(r0)
            goto L7a
        L6f:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "BaseVideoConfig does not have a video disk path"
            r0.<init>(r1)
            throw r0
        L77:
            r3.H()
        L7a:
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            return
    }

    public void b(boolean r5) {
            r4 = this;
            boolean r0 = r4.ad
            if (r0 != 0) goto L7
            r4.c(r5)
        L7:
            boolean r0 = r4.ad
            if (r0 != 0) goto L1b
            com.sigmob.sdk.videoAd.a r0 = r4.H
            boolean r0 = r0.m()
            if (r0 == 0) goto L1b
            com.sigmob.sdk.base.common.j r5 = r4.h()
            r5.a()
            return
        L1b:
            boolean r0 = r4.C
            if (r0 != 0) goto L2c
            if (r5 == 0) goto L25
            r4.G()
            goto L2c
        L25:
            int r0 = r4.t()
            r4.a(r0)
        L2c:
            com.sigmob.sdk.videoAd.b r0 = r4.J
            r0.stopPlayback()
            r4.J()
            if (r5 == 0) goto L67
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r4.K
            com.sigmob.sdk.base.models.SigMacroCommon r5 = r5.getMacroCommon()
            com.sigmob.sdk.base.models.SigMacroCommon r5 = (com.sigmob.sdk.base.models.SigMacroCommon) r5
            java.lang.String r0 = "_PLAYLASTFRAME_"
            java.lang.String r1 = "1"
            r5.addMarcoKey(r0, r1)
            com.sigmob.sdk.videoAd.a r5 = r4.H
            android.content.Context r0 = r4.b
            int r1 = r4.t()
            int r2 = r4.s()
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.K
            r5.a(r0, r1, r2, r3)
            boolean r5 = r4.W
            if (r5 != 0) goto L67
            com.sigmob.sdk.base.common.r r5 = r4.n()
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.r
            int r1 = r4.t()
            r5.a(r0, r1)
        L67:
            r4.H()
            r5 = 1
            r4.V = r5
            com.sigmob.sdk.base.common.r r5 = r4.M
            if (r5 == 0) goto L77
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.h
            r1 = 0
            r5.a(r0, r1)
        L77:
            return
    }

    @Override
    public void c() {
            r1 = this;
            boolean r0 = r1.aa
            if (r0 == 0) goto La
            java.lang.String r0 = "com.sigmob.action.interstitial.dismiss"
            r1.a(r0)
            return
        La:
            boolean r0 = r1.Y
            if (r0 != 0) goto L11
            r1.C()
        L11:
            return
    }

    void c(boolean r5) {
            r4 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.K
            int r0 = r0.getAd_type()
            r1 = 4
            if (r0 != r1) goto La
            return
        La:
            r0 = 1
            r4.ad = r0
            if (r5 == 0) goto L14
            int r5 = r4.s()
            goto L18
        L14:
            int r5 = r4.t()
        L18:
            java.lang.String r0 = "com.sigmob.action.rewardedvideo.complete"
            r4.a(r0)
            com.sigmob.sdk.base.common.r r0 = r4.n()
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.b
            r0.a(r1, r5)
            com.sigmob.sdk.videoAd.a r0 = r4.H
            android.content.Context r1 = r4.i()
            android.content.Context r1 = r1.getApplicationContext()
            int r2 = r4.s()
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.a()
            r0.c(r1, r5, r2, r3)
            return
    }

    @Override
    public void d() {
            r2 = this;
            boolean r0 = r2.Y
            if (r0 != 0) goto L7
            r2.B()
        L7:
            android.view.View r0 = r2.L
            if (r0 == 0) goto L14
            boolean r1 = r0 instanceof com.sigmob.sdk.base.views.l
            if (r1 == 0) goto L14
            com.sigmob.sdk.base.views.l r0 = (com.sigmob.sdk.base.views.l) r0
            r0.resumeTimers()
        L14:
            return
    }

    @Override
    public void e() {
            r4 = this;
            java.lang.String r0 = "VideoViewController onDestroy() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L98
            r4.J()     // Catch: java.lang.Throwable -> L98
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()     // Catch: java.lang.Throwable -> L98
            r0.b(r4)     // Catch: java.lang.Throwable -> L98
            boolean r0 = r4.aa     // Catch: java.lang.Throwable -> L98
            if (r0 != 0) goto L18
            java.lang.String r0 = "com.sigmob.action.interstitial.dismiss"
            r4.a(r0)     // Catch: java.lang.Throwable -> L98
        L18:
            com.sigmob.sdk.videoAd.a r0 = r4.H     // Catch: java.lang.Throwable -> L98
            r0.k()     // Catch: java.lang.Throwable -> L98
            com.sigmob.sdk.base.views.a r0 = r4.Q     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L26
            com.sigmob.sdk.base.views.a r0 = r4.Q     // Catch: java.lang.Throwable -> L98
            r0.a()     // Catch: java.lang.Throwable -> L98
        L26:
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r0 = r4.ae     // Catch: java.lang.Throwable -> L98
            r1 = 0
            if (r0 == 0) goto L32
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r0 = r4.ae     // Catch: java.lang.Throwable -> L98
            r0.cancelRequest()     // Catch: java.lang.Throwable -> L98
            r4.ae = r1     // Catch: java.lang.Throwable -> L98
        L32:
            com.sigmob.sdk.base.common.r r0 = r4.M     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L45
            com.sigmob.sdk.base.common.r r0 = r4.M     // Catch: java.lang.Throwable -> L98
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.x     // Catch: java.lang.Throwable -> L98
            r3 = 0
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L98
            com.sigmob.sdk.base.common.r r0 = r4.M     // Catch: java.lang.Throwable -> L98
            r0.a()     // Catch: java.lang.Throwable -> L98
            r4.M = r1     // Catch: java.lang.Throwable -> L98
        L45:
            com.sigmob.sdk.videoAd.h r0 = r4.R     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L4e
            com.sigmob.sdk.videoAd.h r0 = r4.R     // Catch: java.lang.Throwable -> L98
            r0.a(r1)     // Catch: java.lang.Throwable -> L98
        L4e:
            com.sigmob.sdk.videoAd.b r0 = r4.J     // Catch: java.lang.Throwable -> L98
            android.media.MediaMetadataRetriever r0 = r0.a     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L5b
            com.sigmob.sdk.videoAd.b r0 = r4.J     // Catch: java.lang.Throwable -> L98
            android.media.MediaMetadataRetriever r0 = r0.a     // Catch: java.lang.Throwable -> L98
            r0.release()     // Catch: java.lang.Throwable -> L98
        L5b:
            com.sigmob.sdk.base.views.x r0 = r4.O     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L64
            com.sigmob.sdk.base.views.x r0 = r4.O     // Catch: java.lang.Throwable -> L98
            r0.setOnTouchListener(r1)     // Catch: java.lang.Throwable -> L98
        L64:
            com.sigmob.sdk.base.views.w r0 = r4.P     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L6d
            com.sigmob.sdk.base.views.w r0 = r4.P     // Catch: java.lang.Throwable -> L98
            r0.setOnTouchListener(r1)     // Catch: java.lang.Throwable -> L98
        L6d:
            com.sigmob.sdk.base.views.x r0 = r4.ab     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L76
            com.sigmob.sdk.base.views.x r0 = r4.ab     // Catch: java.lang.Throwable -> L98
            r0.setOnTouchListener(r1)     // Catch: java.lang.Throwable -> L98
        L76:
            com.sigmob.sdk.videoAd.b r0 = r4.J     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L7f
            com.sigmob.sdk.videoAd.b r0 = r4.J     // Catch: java.lang.Throwable -> L98
            r0.a()     // Catch: java.lang.Throwable -> L98
        L7f:
            android.view.View r0 = r4.L     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L90
            android.view.View r0 = r4.L     // Catch: java.lang.Throwable -> L98
            boolean r0 = r0 instanceof com.sigmob.sdk.base.views.l     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L90
            android.view.View r0 = r4.L     // Catch: java.lang.Throwable -> L98
            com.sigmob.sdk.base.views.l r0 = (com.sigmob.sdk.base.views.l) r0     // Catch: java.lang.Throwable -> L98
            r0.setWebViewClickListener(r1)     // Catch: java.lang.Throwable -> L98
        L90:
            r4.L = r1     // Catch: java.lang.Throwable -> L98
            r4.N = r1     // Catch: java.lang.Throwable -> L98
            super.e()     // Catch: java.lang.Throwable -> L98
            goto La0
        L98:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        La0:
            return
    }

    @Override
    public void f() {
            r0 = this;
            return
    }

    @Override
    public boolean g() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void m() {
            r4 = this;
            com.sigmob.sdk.base.views.b r0 = new com.sigmob.sdk.base.views.b
            android.content.Context r1 = r4.i()
            r2 = 0
            r0.<init>(r1, r2)
            r4.o = r0
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r4.i()
            r3 = 1098907648(0x41800000, float:16.0)
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r1)
            r3 = -2
            r0.<init>(r3, r1)
            android.content.Context r1 = r4.b
            r3 = 1092616192(0x41200000, float:10.0)
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r1)
            com.sigmob.sdk.base.views.j r3 = r4.af
            if (r3 == 0) goto L39
            r1 = 8
            int r2 = r3.getId()
            r0.addRule(r1, r2)
            goto L41
        L39:
            r3 = 12
            r0.addRule(r3)
            r0.setMargins(r2, r2, r2, r1)
        L41:
            com.sigmob.sdk.base.views.b r1 = r4.o     // Catch: java.lang.Throwable -> L5d
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.K     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = r2.getAd_source_logo()     // Catch: java.lang.Throwable -> L5d
            r1.a(r2)     // Catch: java.lang.Throwable -> L5d
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.K     // Catch: java.lang.Throwable -> L5d
            boolean r1 = r1.getInvisibleAdLabel()     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L5d
            com.sigmob.sdk.base.views.b r1 = r4.o     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = com.sigmob.sdk.base.d.g()     // Catch: java.lang.Throwable -> L5d
            r1.b(r2)     // Catch: java.lang.Throwable -> L5d
        L5d:
            android.view.ViewGroup r1 = r4.j()
            com.sigmob.sdk.base.views.b r2 = r4.o
            r1.addView(r2, r0)
            return
    }

    public com.sigmob.sdk.base.common.r n() {
            r2 = this;
            com.sigmob.sdk.base.common.r r0 = r2.M
            if (r0 != 0) goto L12
            com.sigmob.sdk.base.common.r r0 = new com.sigmob.sdk.base.common.r
            r0.<init>()
            r2.M = r0
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.a()
            r0.a(r1)
        L12:
            com.sigmob.sdk.base.common.r r0 = r2.M
            return r0
    }

    public java.lang.String o() {
            r1 = this;
            java.lang.String r0 = r1.E
            return r0
    }

    public boolean p() {
            r7 = this;
            r0 = 1
            int r1 = r7.t()     // Catch: java.lang.Throwable -> L31
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L31
            com.sigmob.sdk.videoAd.a r3 = r7.H     // Catch: java.lang.Throwable -> L31
            int r3 = r3.y()     // Catch: java.lang.Throwable -> L31
            r4 = -1
            r5 = 0
            r6 = 1148846080(0x447a0000, float:1000.0)
            if (r3 <= r4) goto L26
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L31
            float r1 = r1 / r6
            r2 = 1050253722(0x3e99999a, float:0.3)
            float r1 = r1 + r2
            com.sigmob.sdk.videoAd.a r2 = r7.H     // Catch: java.lang.Throwable -> L31
            int r2 = r2.y()     // Catch: java.lang.Throwable -> L31
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L31
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 < 0) goto L24
            goto L30
        L24:
            r0 = r5
            goto L30
        L26:
            int r3 = r7.T     // Catch: java.lang.Throwable -> L31
            float r3 = (float) r3
            float r3 = r3 / r6
            float r1 = (float) r1
            float r1 = r1 / r6
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 >= 0) goto L24
        L30:
            return r0
        L31:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            return r0
    }

    public boolean q() {
            r6 = this;
            com.sigmob.sdk.base.views.j r0 = r6.af
            r1 = 1
            if (r0 == 0) goto Lc
            boolean r0 = r0.a()
            if (r0 == 0) goto Lc
            return r1
        Lc:
            int r0 = r6.t()     // Catch: java.lang.Throwable -> L26
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L26
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            int r0 = r6.F     // Catch: java.lang.Throwable -> L26
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L26
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L1d
            r0 = r1
            goto L1e
        L1d:
            r0 = 0
        L1e:
            if (r0 == 0) goto L25
            java.lang.String r2 = "showAble CompanionAds"
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Throwable -> L26
        L25:
            return r0
        L26:
            r0 = move-exception
            java.lang.String r2 = "shouldBeShowCompanionAds"
            com.czhj.sdk.logger.SigmobLog.e(r2, r0)
            return r1
    }

    public void r() {
            r2 = this;
            boolean r0 = r2.G
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.views.j r0 = r2.af
            if (r0 == 0) goto L15
            r0.bringToFront()
            com.sigmob.sdk.base.views.j r0 = r2.af
            r1 = 0
            r0.setVisibility(r1)
            r0 = 1
            r2.G = r0
        L15:
            return
    }

    int s() {
            r2 = this;
            com.sigmob.sdk.videoAd.b r0 = r2.J
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r1 = r2.X
            if (r1 <= 0) goto L11
            com.sigmob.sdk.videoAd.a r0 = r2.H
            int r0 = r0.b(r1)
            return r0
        L11:
            com.sigmob.sdk.videoAd.a r1 = r2.H
            int r0 = r0.getDuration()
            int r0 = r1.b(r0)
            return r0
    }

    int t() {
            r1 = this;
            com.sigmob.sdk.videoAd.b r0 = r1.J
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.getCurrentPosition()
            return r0
    }

    void u() {
            r3 = this;
            android.view.View r0 = r3.L
            if (r0 != 0) goto L59
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.K
            boolean r0 = r0.isEndCardIndexExist()
            if (r0 != 0) goto Ld
            goto L59
        Ld:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.K     // Catch: java.lang.Throwable -> L36
            com.sigmob.sdk.videoAd.h r0 = com.sigmob.sdk.videoAd.a.g(r0)     // Catch: java.lang.Throwable -> L36
            r3.R = r0     // Catch: java.lang.Throwable -> L36
            com.sigmob.sdk.videoAd.a r1 = r3.H     // Catch: java.lang.Throwable -> L36
            r0.a(r1)     // Catch: java.lang.Throwable -> L36
            android.app.Activity r0 = r3.k()     // Catch: java.lang.Throwable -> L36
            com.sigmob.sdk.videoAd.h r1 = r3.R     // Catch: java.lang.Throwable -> L36
            r2 = 4
            android.view.View r0 = r3.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L36
            r3.L = r0     // Catch: java.lang.Throwable -> L36
            com.sigmob.sdk.videoAd.h r0 = r3.R     // Catch: java.lang.Throwable -> L36
            int r1 = r3.X     // Catch: java.lang.Throwable -> L36
            r0.a(r1)     // Catch: java.lang.Throwable -> L36
            android.content.Context r0 = r3.i()     // Catch: java.lang.Throwable -> L36
            r3.e(r0, r2)     // Catch: java.lang.Throwable -> L36
            goto L59
        L36:
            r0 = move-exception
            r1 = 0
            r3.R = r1
            java.lang.String r1 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "error"
            r1.put(r2, r0)
            java.lang.String r0 = "com.sigmob.action.rewardedvideo.playFail"
            r3.a(r0, r1)
            com.sigmob.sdk.base.common.j r0 = r3.d
            r0.a()
        L59:
            return
    }

    void v() {
            r2 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.K
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
            java.lang.Boolean r0 = r0.disable_auto_deeplink
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L11
            r2.u()
        L11:
            int r0 = r2.t()
            r1 = 0
            r2.a(r0, r1)
            int r0 = r2.s()
            int r1 = r2.t()
            int r0 = r0 - r1
            float r0 = (float) r0
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r1
            int r0 = (int) r0
            com.sigmob.sdk.base.views.w r1 = r2.P
            r1.a(r0)
            com.sigmob.sdk.base.views.d r1 = r2.D
            if (r1 == 0) goto L36
            r1.setduration(r0)
        L36:
            return
    }

    boolean w() {
            r2 = this;
            boolean r0 = r2.ad
            if (r0 != 0) goto L14
            float r0 = r2.D()
            com.sigmob.sdk.videoAd.a r1 = r2.H
            float r1 = r1.q()
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    void x() {
            r2 = this;
            int r0 = r2.s()
            int r1 = r2.t()
            int r0 = r0 - r1
            float r0 = (float) r0
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r1
            int r0 = (int) r0
            com.sigmob.sdk.base.views.w r1 = r2.P
            r1.a(r0)
            com.sigmob.sdk.base.views.d r1 = r2.D
            if (r1 == 0) goto L1d
            r1.setduration(r0)
        L1d:
            boolean r0 = r2.ag
            if (r0 == 0) goto L2a
            int r0 = r2.t()
            com.sigmob.sdk.base.views.y r1 = r2.N
            r1.a(r0)
        L2a:
            return
    }
}
