package com.mbridge.msdk.splash.view;

public class MBSplashPopView extends android.widget.RelativeLayout {
    public static final int TYPE_POP_DEFAULT = 1;
    public static final int TYPE_POP_LARGE = 4;
    public static final int TYPE_POP_MEDIUM = 3;
    public static final int TYPE_POP_SMALL = 2;
    private static final java.util.concurrent.atomic.AtomicInteger c = null;
    android.view.View.OnClickListener a;
    android.view.View.OnClickListener b;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private com.mbridge.msdk.foundation.entity.CampaignEx g;
    private com.mbridge.msdk.splash.d.d h;
    private android.widget.ImageView i;
    private android.widget.ImageView j;
    private android.widget.ImageView k;
    private android.widget.ImageView l;
    private android.widget.TextView m;
    private android.widget.TextView n;
    private android.widget.TextView o;
    private int p;
    private android.os.Handler q;
    private boolean r;
    private com.mbridge.msdk.click.b s;
    private com.mbridge.msdk.click.h t;
    private java.lang.Runnable u;
    private java.lang.Runnable v;











    public static class a {
        private java.lang.String a;
        private java.lang.String b;
        private int c;
        private com.mbridge.msdk.foundation.entity.CampaignEx d;

        public a(java.lang.String r1, java.lang.String r2, int r3, com.mbridge.msdk.foundation.entity.CampaignEx r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        public final java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public final java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public final int c() {
                r1 = this;
                int r0 = r1.c
                return r0
        }

        public final com.mbridge.msdk.foundation.entity.CampaignEx d() {
                r1 = this;
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.d
                return r0
        }
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.mbridge.msdk.splash.view.MBSplashPopView.c = r0
            return
    }

    public MBSplashPopView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 1
            r1.f = r2
            r0 = -1
            r1.p = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r1.q = r0
            r0 = 0
            r1.r = r0
            com.mbridge.msdk.splash.view.MBSplashPopView$1 r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$1
            r0.<init>(r1)
            r1.t = r0
            com.mbridge.msdk.splash.view.MBSplashPopView$6 r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$6
            r0.<init>(r1)
            r1.u = r0
            com.mbridge.msdk.splash.view.MBSplashPopView$7 r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$7
            r0.<init>(r1)
            r1.v = r0
            com.mbridge.msdk.splash.view.MBSplashPopView$8 r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$8
            r0.<init>(r1)
            r1.a = r0
            com.mbridge.msdk.splash.view.MBSplashPopView$9 r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$9
            r0.<init>(r1)
            r1.b = r0
            r1.f = r2
            java.lang.String r2 = "MBSplashPopView"
            java.lang.String r0 = "Please call setPopViewType() to init."
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)
            return
    }

    public MBSplashPopView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1
            r0.f = r1
            r2 = -1
            r0.p = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r0.q = r2
            r2 = 0
            r0.r = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$1 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$1
            r2.<init>(r0)
            r0.t = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$6 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$6
            r2.<init>(r0)
            r0.u = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$7 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$7
            r2.<init>(r0)
            r0.v = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$8 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$8
            r2.<init>(r0)
            r0.a = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$9 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$9
            r2.<init>(r0)
            r0.b = r2
            r0.f = r1
            java.lang.String r1 = "MBSplashPopView"
            java.lang.String r2 = "Please call setPopViewType() to init."
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            return
    }

    public MBSplashPopView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 1
            r0.f = r1
            r2 = -1
            r0.p = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r0.q = r2
            r2 = 0
            r0.r = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$1 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$1
            r2.<init>(r0)
            r0.t = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$6 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$6
            r2.<init>(r0)
            r0.u = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$7 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$7
            r2.<init>(r0)
            r0.v = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$8 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$8
            r2.<init>(r0)
            r0.a = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$9 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$9
            r2.<init>(r0)
            r0.b = r2
            r0.f = r1
            java.lang.String r1 = "MBSplashPopView"
            java.lang.String r2 = "Please call setPopViewType() to init."
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            return
    }

    public MBSplashPopView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 1
            r0.f = r1
            r2 = -1
            r0.p = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r0.q = r2
            r2 = 0
            r0.r = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$1 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$1
            r2.<init>(r0)
            r0.t = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$6 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$6
            r2.<init>(r0)
            r0.u = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$7 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$7
            r2.<init>(r0)
            r0.v = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$8 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$8
            r2.<init>(r0)
            r0.a = r2
            com.mbridge.msdk.splash.view.MBSplashPopView$9 r2 = new com.mbridge.msdk.splash.view.MBSplashPopView$9
            r2.<init>(r0)
            r0.b = r2
            r0.f = r1
            java.lang.String r1 = "MBSplashPopView"
            java.lang.String r2 = "Please call setPopViewType() to init."
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            return
    }

    public MBSplashPopView(android.content.Context r1, com.mbridge.msdk.splash.view.MBSplashPopView.a r2, com.mbridge.msdk.splash.d.d r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.f = r1
            r1 = -1
            r0.p = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            r0.q = r1
            r1 = 0
            r0.r = r1
            com.mbridge.msdk.splash.view.MBSplashPopView$1 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$1
            r1.<init>(r0)
            r0.t = r1
            com.mbridge.msdk.splash.view.MBSplashPopView$6 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$6
            r1.<init>(r0)
            r0.u = r1
            com.mbridge.msdk.splash.view.MBSplashPopView$7 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$7
            r1.<init>(r0)
            r0.v = r1
            com.mbridge.msdk.splash.view.MBSplashPopView$8 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$8
            r1.<init>(r0)
            r0.a = r1
            com.mbridge.msdk.splash.view.MBSplashPopView$9 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$9
            r1.<init>(r0)
            r0.b = r1
            if (r2 == 0) goto L56
            java.lang.String r1 = r2.b()
            r0.e = r1
            java.lang.String r1 = r2.a()
            r0.d = r1
            int r1 = r2.c()
            r0.f = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.d()
            r0.g = r1
            r0.h = r3
            r0.a()
            return
        L56:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Parameters is NULL, can't gen view."
            r1.<init>(r2)
            throw r1
    }

    static int a(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            int r0 = r0.f
            return r0
    }

    static int a(com.mbridge.msdk.splash.view.MBSplashPopView r0, int r1) {
            r0.p = r1
            return r1
    }

    private void a() {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.g
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            r3.setLayoutParams(r0)
            int r0 = r3.f
            r1 = 1
            if (r0 == r1) goto L2a
            r1 = 2
            if (r0 == r1) goto L26
            r1 = 3
            if (r0 == r1) goto L22
            r1 = 4
            if (r0 == r1) goto L1e
            goto L2d
        L1e:
            r3.e()
            goto L2d
        L22:
            r3.d()
            goto L2d
        L26:
            r3.c()
            goto L2d
        L2a:
            r3.b()
        L2d:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            com.mbridge.msdk.click.b r0 = r3.s
            if (r0 != 0) goto L1a
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r3.e
            r0.<init>(r1, r2)
            r3.s = r0
            com.mbridge.msdk.click.h r1 = r3.t
            r0.a(r1)
        L1a:
            java.lang.String r0 = r3.e
            r4.setCampaignUnitId(r0)
            com.mbridge.msdk.click.b r0 = r3.s
            r0.c(r4)
            boolean r0 = r4.isReportClick()
            if (r0 != 0) goto L39
            r0 = 1
            r4.setReportClick(r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.splash.e.a.a(r0, r4)
        L39:
            com.mbridge.msdk.splash.d.d r4 = r3.h
            if (r4 == 0) goto L58
            com.mbridge.msdk.out.MBridgeIds r0 = new com.mbridge.msdk.out.MBridgeIds
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.e
            r0.<init>(r1, r2)
            r4.b(r0)
            com.mbridge.msdk.splash.d.d r4 = r3.h
            com.mbridge.msdk.out.MBridgeIds r0 = new com.mbridge.msdk.out.MBridgeIds
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.e
            r0.<init>(r1, r2)
            r1 = 6
            r4.a(r0, r1)
        L58:
            return
    }

    static void a(com.mbridge.msdk.splash.view.MBSplashPopView r4, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            java.lang.String r0 = r4.e     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.splash.e.a.b(r5, r0)     // Catch: java.lang.Throwable -> L44
            if (r5 == 0) goto L51
            boolean r0 = r5.needShowIDialog()     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L51
            com.mbridge.msdk.splash.view.MBSplashPopView$10 r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$10     // Catch: java.lang.Throwable -> L44
            r0.<init>(r4, r5)     // Catch: java.lang.Throwable -> L44
            boolean r1 = com.mbridge.msdk.click.c.a(r5)     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L51
            boolean r1 = r5.needShowIDialog()     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L51
            com.mbridge.msdk.click.b r1 = r4.s     // Catch: java.lang.Throwable -> L44
            if (r1 != 0) goto L33
            com.mbridge.msdk.click.b r1 = new com.mbridge.msdk.click.b     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L44
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L44
            java.lang.String r3 = r4.e     // Catch: java.lang.Throwable -> L44
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L44
            r4.s = r1     // Catch: java.lang.Throwable -> L44
        L33:
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L44
            android.os.Handler r2 = r4.getHandler()     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.splash.view.MBSplashPopView$2 r3 = new com.mbridge.msdk.splash.view.MBSplashPopView$2     // Catch: java.lang.Throwable -> L44
            r3.<init>(r4, r5, r1, r0)     // Catch: java.lang.Throwable -> L44
            r2.post(r3)     // Catch: java.lang.Throwable -> L44
            goto L54
        L44:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBSplashPopView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            r4.reStartCountDown()
        L51:
            r4.a(r5)
        L54:
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.splash.view.MBSplashPopView$4 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$4
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    private void a(java.lang.String r3, boolean r4) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.splash.view.MBSplashPopView$3 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$3
            r1.<init>(r2, r4)
            r0.a(r3, r1)
            return
    }

    static android.widget.ImageView b(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            android.widget.ImageView r0 = r0.i
            return r0
    }

    private void b() {
            r7 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r7.getContext()
            r0.<init>(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r7.getContext()
            r3 = 1117782016(0x42a00000, float:80.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            android.content.Context r4 = r7.getContext()
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r4, r3)
            r1.<init>(r2, r3)
            r2 = 9
            r1.addRule(r2)
            android.content.Context r2 = r7.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            r1.topMargin = r2
            int r2 = generateViewId()
            r0.setId(r2)
            r0.setLayoutParams(r1)
            android.content.res.Resources r1 = r7.getResources()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.d()
            java.lang.String r4 = "drawable"
            java.lang.String r5 = "mbridge_splash_popview_default"
            int r1 = r1.getIdentifier(r5, r4, r2)
            r0.setBackgroundResource(r1)
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r7.getContext()
            r1.<init>(r2)
            r7.i = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r7.getContext()
            r5 = 1114636288(0x42700000, float:60.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r5)
            android.content.Context r6 = r7.getContext()
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r6, r5)
            r1.<init>(r2, r5)
            int r2 = r0.getId()
            r5 = 6
            r1.addRule(r5, r2)
            android.content.Context r2 = r7.getContext()
            r5 = 1088421888(0x40e00000, float:7.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r5)
            r1.topMargin = r2
            android.content.Context r2 = r7.getContext()
            r5 = 1092616192(0x41200000, float:10.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r5)
            r1.leftMargin = r2
            android.widget.ImageView r2 = r7.i
            int r6 = generateViewId()
            r2.setId(r6)
            android.widget.ImageView r2 = r7.i
            r2.setLayoutParams(r1)
            android.widget.ImageView r1 = r7.i
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.g
            if (r1 == 0) goto Lc1
            java.lang.String r1 = r1.getIconUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc1
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.g
            java.lang.String r1 = r1.getIconUrl()
            r2 = 1
            r7.a(r1, r2)
        Lc1:
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r2 = r7.getContext()
            r1.<init>(r2)
            r7.o = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r2)
            r2 = 5
            int r6 = r0.getId()
            r1.addRule(r2, r6)
            r2 = 8
            int r6 = r0.getId()
            r1.addRule(r2, r6)
            android.content.Context r2 = r7.getContext()
            r6 = 1115160576(0x42780000, float:62.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r6)
            r1.leftMargin = r2
            android.content.Context r2 = r7.getContext()
            r6 = 1116471296(0x428c0000, float:70.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r6)
            r1.bottomMargin = r2
            android.widget.TextView r2 = r7.o
            int r6 = generateViewId()
            r2.setId(r6)
            android.widget.TextView r2 = r7.o
            r2.setTextSize(r5)
            android.widget.TextView r2 = r7.o
            r5 = -1
            r2.setTextColor(r5)
            android.widget.TextView r2 = r7.o
            r5 = 17
            r2.setGravity(r5)
            android.widget.TextView r2 = r7.o
            android.content.Context r5 = r7.getContext()
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r3)
            r2.setMinWidth(r5)
            android.widget.TextView r2 = r7.o
            android.content.Context r5 = r7.getContext()
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r5, r3)
            r2.setMaxHeight(r3)
            android.widget.TextView r2 = r7.o
            r2.setLayoutParams(r1)
            android.widget.TextView r1 = r7.o
            android.content.res.Resources r2 = r7.getResources()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.d()
            java.lang.String r5 = "mbridge_cm_circle_50black"
            int r2 = r2.getIdentifier(r5, r4, r3)
            r1.setBackgroundResource(r2)
            r7.addView(r0)
            android.widget.TextView r0 = r7.o
            r7.addView(r0)
            android.widget.ImageView r0 = r7.i
            r7.addView(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.g
            if (r0 == 0) goto L166
            int r0 = r0.getFlbSkipTime()
            if (r0 > 0) goto L166
            r7.g()
        L166:
            android.view.View$OnClickListener r0 = r7.a
            r7.setOnClickListener(r0)
            android.widget.TextView r0 = r7.o
            android.view.View$OnClickListener r1 = r7.b
            r0.setOnClickListener(r1)
            return
    }

    static void b(com.mbridge.msdk.splash.view.MBSplashPopView r0, com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0.a(r1)
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.splash.view.MBSplashPopView$5 r1 = new com.mbridge.msdk.splash.view.MBSplashPopView$5
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    static android.widget.ImageView c(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            android.widget.ImageView r0 = r0.k
            return r0
    }

    private void c() {
            r6 = this;
            android.content.Context r0 = r6.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r6.getContext()
            r2.<init>(r3)
            r6.i = r2
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r3 = r6.getContext()
            r4 = 1105199104(0x41e00000, float:28.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            android.content.Context r5 = r6.getContext()
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r5, r4)
            r2.<init>(r3, r4)
            r3 = 9
            r2.addRule(r3)
            android.widget.ImageView r3 = r6.i
            int r4 = generateViewId()
            r3.setId(r4)
            android.widget.ImageView r3 = r6.i
            r3.setLayoutParams(r2)
            android.widget.ImageView r2 = r6.i
            r2.setPadding(r0, r0, r0, r0)
            android.widget.ImageView r0 = r6.i
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r0.setScaleType(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.g
            java.lang.String r0 = r0.getIconUrl()
            r2 = 0
            r6.a(r0, r2)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r2 = r6.getContext()
            r0.<init>(r2)
            r6.m = r0
            int r2 = generateViewId()
            r0.setId(r2)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r2, r2)
            android.widget.ImageView r2 = r6.i
            int r2 = r2.getId()
            r3 = 1
            r0.addRule(r3, r2)
            android.widget.ImageView r2 = r6.i
            int r2 = r2.getId()
            r4 = 6
            r0.addRule(r4, r2)
            android.widget.ImageView r2 = r6.i
            int r2 = r2.getId()
            r4 = 8
            r0.addRule(r4, r2)
            android.content.Context r2 = r6.getContext()
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r2, r1)
            r0.leftMargin = r1
            android.content.Context r1 = r6.getContext()
            r2 = 1109393408(0x42200000, float:40.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.rightMargin = r1
            android.widget.TextView r1 = r6.m
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = r6.m
            r1 = 16
            r0.setGravity(r1)
            android.widget.TextView r0 = r6.m
            r1 = 1092616192(0x41200000, float:10.0)
            r0.setTextSize(r1)
            android.widget.TextView r0 = r6.m
            r0.setSelected(r3)
            android.widget.TextView r0 = r6.m
            android.text.TextUtils$TruncateAt r1 = android.text.TextUtils.TruncateAt.MARQUEE
            r0.setEllipsize(r1)
            android.widget.TextView r0 = r6.m
            r1 = -1
            r0.setMarqueeRepeatLimit(r1)
            android.widget.TextView r0 = r6.m
            r0.setSingleLine(r3)
            android.widget.TextView r0 = r6.m
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setTextColor(r1)
            android.widget.TextView r0 = r6.m
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.g
            java.lang.String r1 = r1.getAppName()
            r0.setText(r1)
            android.content.res.Resources r0 = r6.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r2 = "mbridge_shape_corners_bg"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            r6.setBackgroundResource(r0)
            android.widget.ImageView r0 = r6.i
            r6.addView(r0)
            android.widget.TextView r0 = r6.m
            r6.addView(r0)
            r6.f()
            android.view.View$OnClickListener r0 = r6.a
            r6.setOnClickListener(r0)
            return
    }

    static android.widget.ImageView d(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            android.widget.ImageView r0 = r0.j
            return r0
    }

    private void d() {
            r9 = this;
            android.content.Context r0 = r9.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r9.getContext()
            r2.<init>(r3)
            r9.i = r2
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r3 = r9.getContext()
            r4 = 1112014848(0x42480000, float:50.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            android.content.Context r5 = r9.getContext()
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r5, r4)
            r2.<init>(r3, r4)
            r3 = 9
            r2.addRule(r3)
            android.widget.ImageView r3 = r9.i
            int r4 = generateViewId()
            r3.setId(r4)
            android.widget.ImageView r3 = r9.i
            r3.setLayoutParams(r2)
            android.widget.ImageView r2 = r9.i
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r2.setScaleType(r3)
            android.widget.ImageView r2 = r9.i
            r2.setPadding(r0, r0, r0, r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.g
            java.lang.String r0 = r0.getIconUrl()
            r2 = 0
            r9.a(r0, r2)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r2 = r9.getContext()
            r0.<init>(r2)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = -1
            r4 = -2
            r2.<init>(r3, r4)
            android.widget.ImageView r5 = r9.i
            int r5 = r5.getId()
            r6 = 1
            r2.addRule(r6, r5)
            android.widget.ImageView r5 = r9.i
            int r5 = r5.getId()
            r7 = 6
            r2.addRule(r7, r5)
            android.widget.ImageView r5 = r9.i
            int r5 = r5.getId()
            r7 = 8
            r2.addRule(r7, r5)
            android.content.Context r5 = r9.getContext()
            r7 = 1090519040(0x41000000, float:8.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            r2.leftMargin = r5
            android.content.Context r5 = r9.getContext()
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            r2.rightMargin = r5
            r0.setLayoutParams(r2)
            r2 = 16
            r0.setGravity(r2)
            android.widget.TextView r5 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r5.<init>(r8)
            r9.m = r5
            int r8 = generateViewId()
            r5.setId(r8)
            android.widget.TextView r5 = r9.m
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r4, r4)
            r5.setLayoutParams(r8)
            android.widget.TextView r5 = r9.m
            r5.setGravity(r2)
            android.widget.TextView r5 = r9.m
            r8 = 1094713344(0x41400000, float:12.0)
            r5.setTextSize(r8)
            android.widget.TextView r5 = r9.m
            r5.setSelected(r6)
            android.widget.TextView r5 = r9.m
            android.text.TextUtils$TruncateAt r8 = android.text.TextUtils.TruncateAt.MARQUEE
            r5.setEllipsize(r8)
            android.widget.TextView r5 = r9.m
            r5.setMarqueeRepeatLimit(r3)
            android.widget.TextView r5 = r9.m
            r5.setSingleLine(r6)
            android.widget.TextView r5 = r9.m
            r8 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r5.setTextColor(r8)
            android.widget.TextView r5 = r9.m
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r9.g
            java.lang.String r8 = r8.getAppName()
            r5.setText(r8)
            android.widget.TextView r5 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r5.<init>(r8)
            r9.n = r5
            int r8 = generateViewId()
            r5.setId(r8)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r4, r4)
            android.widget.TextView r4 = r9.m
            int r4 = r4.getId()
            r8 = 5
            r5.addRule(r8, r4)
            android.widget.TextView r4 = r9.m
            int r4 = r4.getId()
            r8 = 3
            r5.addRule(r8, r4)
            android.content.Context r4 = r9.getContext()
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r4, r1)
            r5.topMargin = r1
            android.content.Context r1 = r9.getContext()
            r4 = 1108344832(0x42100000, float:36.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r4)
            r5.rightMargin = r1
            android.widget.TextView r1 = r9.n
            r1.setGravity(r2)
            android.widget.TextView r1 = r9.n
            r1.setLayoutParams(r5)
            android.widget.TextView r1 = r9.n
            r1.setTextSize(r7)
            android.widget.TextView r1 = r9.n
            r2 = -10066330(0xffffffffff666666, float:-3.0625412E38)
            r1.setTextColor(r2)
            android.widget.TextView r1 = r9.n
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.MARQUEE
            r1.setEllipsize(r2)
            android.widget.TextView r1 = r9.n
            r1.setMarqueeRepeatLimit(r3)
            android.widget.TextView r1 = r9.n
            r1.setSelected(r6)
            android.widget.TextView r1 = r9.n
            r1.setSingleLine(r6)
            android.widget.TextView r1 = r9.n
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.g
            java.lang.String r2 = r2.getAppDesc()
            r1.setText(r2)
            android.widget.TextView r1 = r9.m
            r0.addView(r1)
            android.widget.TextView r1 = r9.n
            r0.addView(r1)
            android.content.res.Resources r1 = r9.getResources()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.d()
            java.lang.String r3 = "mbridge_shape_corners_bg"
            java.lang.String r4 = "drawable"
            int r1 = r1.getIdentifier(r3, r4, r2)
            r9.setBackgroundResource(r1)
            android.widget.ImageView r1 = r9.i
            r9.addView(r1)
            r9.addView(r0)
            r9.f()
            android.view.View$OnClickListener r0 = r9.a
            r9.setOnClickListener(r0)
            return
    }

    static android.widget.TextView e(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            android.widget.TextView r0 = r0.o
            return r0
    }

    private void e() {
            r9 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            r9.k = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r9.getContext()
            r2 = 1124270080(0x43030000, float:131.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r3 = -1
            r0.<init>(r3, r1)
            r1 = 10
            r0.addRule(r1)
            r4 = 14
            r0.addRule(r4)
            android.widget.ImageView r5 = r9.k
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.FIT_XY
            r5.setScaleType(r6)
            android.widget.ImageView r5 = r9.k
            int r6 = generateViewId()
            r5.setId(r6)
            android.widget.ImageView r5 = r9.k
            r5.setLayoutParams(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.g
            java.lang.String r0 = r0.getImageUrl()
            r9.a(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r5 = r9.getContext()
            r0.<init>(r5)
            r9.j = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r5 = r9.getContext()
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r5, r2)
            r5 = -2
            r0.<init>(r5, r2)
            r0.addRule(r1)
            r0.addRule(r4)
            android.widget.ImageView r1 = r9.j
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r2)
            android.widget.ImageView r1 = r9.j
            int r2 = generateViewId()
            r1.setId(r2)
            android.widget.ImageView r1 = r9.j
            r1.setLayoutParams(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.g
            java.lang.String r0 = r0.getImageUrl()
            r9.b(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            r9.i = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r9.getContext()
            r2 = 1112014848(0x42480000, float:50.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            android.content.Context r4 = r9.getContext()
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r4, r2)
            r0.<init>(r1, r2)
            r1 = 9
            r0.addRule(r1)
            android.widget.ImageView r1 = r9.k
            int r1 = r1.getId()
            r2 = 3
            r0.addRule(r2, r1)
            r1 = 20
            r0.topMargin = r1
            android.widget.ImageView r1 = r9.i
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r1.setScaleType(r4)
            android.widget.ImageView r1 = r9.i
            int r4 = generateViewId()
            r1.setId(r4)
            android.widget.ImageView r1 = r9.i
            r1.setLayoutParams(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.g
            java.lang.String r0 = r0.getIconUrl()
            r1 = 0
            r9.a(r0, r1)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r3, r5)
            android.widget.ImageView r4 = r9.i
            int r4 = r4.getId()
            r6 = 1
            r1.addRule(r6, r4)
            android.widget.ImageView r4 = r9.i
            int r4 = r4.getId()
            r7 = 6
            r1.addRule(r7, r4)
            android.widget.ImageView r4 = r9.i
            int r4 = r4.getId()
            r7 = 8
            r1.addRule(r7, r4)
            android.content.Context r4 = r9.getContext()
            r7 = 1090519040(0x41000000, float:8.0)
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r7)
            r1.leftMargin = r4
            android.content.Context r4 = r9.getContext()
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r7)
            r1.rightMargin = r4
            r0.setLayoutParams(r1)
            r1 = 16
            r0.setGravity(r1)
            android.widget.TextView r4 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r4.<init>(r8)
            r9.m = r4
            int r8 = generateViewId()
            r4.setId(r8)
            android.widget.TextView r4 = r9.m
            r4.setGravity(r1)
            android.widget.TextView r4 = r9.m
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r5, r5)
            r4.setLayoutParams(r8)
            android.widget.TextView r4 = r9.m
            r8 = 1094713344(0x41400000, float:12.0)
            r4.setTextSize(r8)
            android.widget.TextView r4 = r9.m
            r8 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r4.setTextColor(r8)
            android.widget.TextView r4 = r9.m
            android.text.TextUtils$TruncateAt r8 = android.text.TextUtils.TruncateAt.MARQUEE
            r4.setEllipsize(r8)
            android.widget.TextView r4 = r9.m
            r4.setMarqueeRepeatLimit(r3)
            android.widget.TextView r4 = r9.m
            r4.setSelected(r6)
            android.widget.TextView r4 = r9.m
            r4.setSingleLine(r6)
            android.widget.TextView r4 = r9.m
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r9.g
            java.lang.String r8 = r8.getAppName()
            r4.setText(r8)
            android.widget.TextView r4 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r4.<init>(r8)
            r9.n = r4
            int r8 = generateViewId()
            r4.setId(r8)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r5, r5)
            android.widget.TextView r5 = r9.m
            int r5 = r5.getId()
            r8 = 5
            r4.addRule(r8, r5)
            android.widget.TextView r5 = r9.m
            int r5 = r5.getId()
            r4.addRule(r2, r5)
            android.content.Context r2 = r9.getContext()
            r5 = 1082130432(0x40800000, float:4.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r5)
            r4.topMargin = r2
            android.content.Context r2 = r9.getContext()
            r5 = 1108344832(0x42100000, float:36.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r5)
            r4.rightMargin = r2
            android.widget.TextView r2 = r9.n
            r2.setGravity(r1)
            android.widget.TextView r1 = r9.n
            r1.setLayoutParams(r4)
            android.widget.TextView r1 = r9.n
            r1.setTextSize(r7)
            android.widget.TextView r1 = r9.n
            r2 = -10066330(0xffffffffff666666, float:-3.0625412E38)
            r1.setTextColor(r2)
            android.widget.TextView r1 = r9.n
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.MARQUEE
            r1.setEllipsize(r2)
            android.widget.TextView r1 = r9.n
            r1.setMarqueeRepeatLimit(r3)
            android.widget.TextView r1 = r9.n
            r1.setSelected(r6)
            android.widget.TextView r1 = r9.n
            r1.setSingleLine(r6)
            android.widget.TextView r1 = r9.n
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.g
            java.lang.String r2 = r2.getAppDesc()
            r1.setText(r2)
            android.widget.TextView r1 = r9.m
            r0.addView(r1)
            android.widget.TextView r1 = r9.n
            r0.addView(r1)
            android.widget.ImageView r1 = r9.k
            r9.addView(r1)
            android.widget.ImageView r1 = r9.j
            r9.addView(r1)
            android.widget.ImageView r1 = r9.i
            r9.addView(r1)
            r9.addView(r0)
            r9.f()
            android.view.View$OnClickListener r0 = r9.a
            r9.setOnClickListener(r0)
            return
    }

    static int f(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            int r0 = r0.p
            return r0
    }

    private void f() {
            r5 = this;
            java.lang.String r0 = "ZH"
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r5.getContext()
            r1.<init>(r2)
            r5.l = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r5.getContext()
            r3 = 1107296256(0x42000000, float:32.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            android.content.Context r3 = r5.getContext()
            r4 = 1095761920(0x41500000, float:13.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            r1.<init>(r2, r3)
            r2 = 11
            r1.addRule(r2)
            android.widget.ImageView r2 = r5.i
            int r2 = r2.getId()
            r3 = 8
            r1.addRule(r3, r2)
            android.widget.ImageView r2 = r5.l
            r2.setLayoutParams(r1)
            android.content.res.Resources r1 = r5.getResources()     // Catch: java.lang.Throwable -> L4a
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> L4a
            java.util.Locale r1 = r1.locale     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r1.getLanguage()     // Catch: java.lang.Throwable -> L4a
            goto L55
        L4a:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBSplashPopView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            r1 = r0
        L55:
            java.lang.String r2 = r1.toUpperCase()
            java.lang.String r3 = "CN"
            boolean r2 = r2.equals(r3)
            java.lang.String r3 = "drawable"
            if (r2 != 0) goto L81
            java.lang.String r1 = r1.toUpperCase()
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L6e
            goto L81
        L6e:
            android.content.res.Resources r0 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r2 = "mbridge_splash_pop_ad_en"
            int r0 = r0.getIdentifier(r2, r3, r1)
            goto L93
        L81:
            android.content.res.Resources r0 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r2 = "mbridge_splash_pop_ad"
            int r0 = r0.getIdentifier(r2, r3, r1)
        L93:
            android.widget.ImageView r1 = r5.l
            r1.setBackgroundResource(r0)
            android.widget.ImageView r0 = r5.l
            r5.addView(r0)
            return
    }

    private void g() {
            r4 = this;
            android.widget.TextView r0 = r4.o
            if (r0 == 0) goto L49
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.content.Context r1 = r4.getContext()
            r2 = 1098907648(0x41800000, float:16.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.width = r1
            android.content.Context r1 = r4.getContext()
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.height = r1
            android.widget.TextView r1 = r4.o
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = r4.o
            java.lang.String r1 = ""
            r0.setText(r1)
            android.widget.TextView r0 = r4.o
            r1 = 1
            r0.setSelected(r1)
            android.content.res.Resources r0 = r4.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r2 = "mbridge_splash_popview_close"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            android.widget.TextView r1 = r4.o
            r1.setBackgroundResource(r0)
        L49:
            return
    }

    static void g(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            r0.g()
            return
    }

    public static int generateViewId() {
        L0:
            java.util.concurrent.atomic.AtomicInteger r0 = com.mbridge.msdk.splash.view.MBSplashPopView.c
            int r0 = r0.get()
            int r1 = r0 + 1
            r2 = 16777215(0xffffff, float:2.3509886E-38)
            if (r1 <= r2) goto Le
            r1 = 1
        Le:
            java.util.concurrent.atomic.AtomicInteger r2 = com.mbridge.msdk.splash.view.MBSplashPopView.c
            boolean r1 = r2.compareAndSet(r0, r1)
            if (r1 == 0) goto L0
            return r0
    }

    static java.lang.Runnable h(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            java.lang.Runnable r0 = r0.u
            return r0
    }

    static android.os.Handler i(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            android.os.Handler r0 = r0.q
            return r0
    }

    static com.mbridge.msdk.splash.d.d j(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            com.mbridge.msdk.splash.d.d r0 = r0.h
            return r0
    }

    static java.lang.String k(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            java.lang.String r0 = r0.d
            return r0
    }

    static java.lang.String l(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            java.lang.String r0 = r0.e
            return r0
    }

    static int m(com.mbridge.msdk.splash.view.MBSplashPopView r2) {
            int r0 = r2.p
            int r1 = r0 + (-1)
            r2.p = r1
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx n(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.g
            return r0
    }

    static com.mbridge.msdk.click.b o(com.mbridge.msdk.splash.view.MBSplashPopView r0) {
            com.mbridge.msdk.click.b r0 = r0.s
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r3 = this;
            super.onAttachedToWindow()
            com.mbridge.msdk.splash.d.d r0 = r3.h
            if (r0 == 0) goto Le
            java.lang.Runnable r0 = r3.v
            r1 = 500(0x1f4, double:2.47E-321)
            r3.postDelayed(r0, r1)
        Le:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.release()
            return
    }

    public void pauseCountDown() {
            r2 = this;
            r0 = 1
            r2.r = r0
            android.widget.TextView r0 = r2.o
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.q
            java.lang.Runnable r1 = r2.u
            r0.removeCallbacks(r1)
        Le:
            return
    }

    public void reStartCountDown() {
            r4 = this;
            boolean r0 = r4.r
            if (r0 == 0) goto L27
            r0 = 0
            r4.r = r0
            int r0 = r4.p
            r1 = -1
            if (r0 == r1) goto L24
            if (r0 != 0) goto Lf
            goto L24
        Lf:
            android.widget.TextView r1 = r4.o
            if (r1 == 0) goto L27
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.setText(r0)
            android.os.Handler r0 = r4.q
            java.lang.Runnable r1 = r4.u
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.postDelayed(r1, r2)
            goto L27
        L24:
            r4.g()
        L27:
            return
    }

    public void release() {
            r2 = this;
            android.os.Handler r0 = r2.q     // Catch: java.lang.Exception -> L19
            java.lang.Runnable r1 = r2.v     // Catch: java.lang.Exception -> L19
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> L19
            android.os.Handler r0 = r2.q     // Catch: java.lang.Exception -> L19
            java.lang.Runnable r1 = r2.u     // Catch: java.lang.Exception -> L19
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> L19
            r0 = 0
            r2.u = r0     // Catch: java.lang.Exception -> L19
            r2.detachAllViewsFromParent()     // Catch: java.lang.Exception -> L19
            r2.g = r0     // Catch: java.lang.Exception -> L19
            r2.h = r0     // Catch: java.lang.Exception -> L19
            goto L23
        L19:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBSplashPopView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L23:
            return
    }

    public void setPopViewType(com.mbridge.msdk.splash.view.MBSplashPopView.a r2, com.mbridge.msdk.splash.d.d r3) {
            r1 = this;
            if (r2 == 0) goto L20
            java.lang.String r0 = r2.b()
            r1.e = r0
            java.lang.String r0 = r2.a()
            r1.d = r0
            int r0 = r2.c()
            r1.f = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.d()
            r1.g = r2
            r1.h = r3
            r1.a()
            return
        L20:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Parameters is NULL, can't gen view."
            r2.<init>(r3)
            throw r2
    }

    public void startCountDown() {
            r4 = this;
            android.os.Handler r0 = r4.q
            java.lang.Runnable r1 = r4.u
            r0.removeCallbacks(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.g
            if (r0 == 0) goto L30
            int r1 = r4.f
            r2 = 1
            if (r1 != r2) goto L30
            int r0 = r0.getFlbSkipTime()
            if (r0 <= 0) goto L2d
            r4.p = r0
            android.widget.TextView r1 = r4.o
            if (r1 == 0) goto L30
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.setText(r0)
            android.os.Handler r0 = r4.q
            java.lang.Runnable r1 = r4.u
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.postDelayed(r1, r2)
            goto L30
        L2d:
            r4.g()
        L30:
            return
    }
}
