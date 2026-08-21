package com.tkay.expressad.splash.view;

public class TYSplashPopView extends android.widget.RelativeLayout {
    public static final int TYPE_POP_DEFAULT = 1;
    public static final int TYPE_POP_LARGE = 4;
    public static final int TYPE_POP_MEDIUM = 3;
    public static final int TYPE_POP_SMALL = 2;
    private static final java.lang.String c = "TYSplashPopView";
    private static final java.util.concurrent.atomic.AtomicInteger d = null;
    android.view.View.OnClickListener a;
    android.view.View.OnClickListener b;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private com.tkay.expressad.foundation.d.c h;
    private com.tkay.expressad.splash.d.d i;
    private android.widget.ImageView j;
    private android.widget.ImageView k;
    private android.widget.ImageView l;
    private android.widget.ImageView m;
    private android.widget.TextView n;
    private android.widget.TextView o;
    private android.widget.TextView p;
    private int q;
    private android.os.Handler r;
    private boolean s;
    private com.tkay.expressad.a.a t;
    private java.lang.Runnable u;







    public static class a {
        private java.lang.String a;
        private java.lang.String b;
        private int c;
        private com.tkay.expressad.foundation.d.c d;

        public a(java.lang.String r1, java.lang.String r2, int r3, com.tkay.expressad.foundation.d.c r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        private void a(int r1) {
                r0 = this;
                r0.c = r1
                return
        }

        private void a(com.tkay.expressad.foundation.d.c r1) {
                r0 = this;
                r0.d = r1
                return
        }

        private void a(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }

        private void b(java.lang.String r1) {
                r0 = this;
                r0.b = r1
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

        public final com.tkay.expressad.foundation.d.c d() {
                r1 = this;
                com.tkay.expressad.foundation.d.c r0 = r1.d
                return r0
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface b {
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.tkay.expressad.splash.view.TYSplashPopView.d = r0
            return
    }

    public TYSplashPopView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 1
            r1.g = r2
            r0 = -1
            r1.q = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r1.r = r0
            r0 = 0
            r1.s = r0
            com.tkay.expressad.splash.view.TYSplashPopView$4 r0 = new com.tkay.expressad.splash.view.TYSplashPopView$4
            r0.<init>(r1)
            r1.u = r0
            com.tkay.expressad.splash.view.TYSplashPopView$5 r0 = new com.tkay.expressad.splash.view.TYSplashPopView$5
            r0.<init>(r1)
            r1.a = r0
            com.tkay.expressad.splash.view.TYSplashPopView$6 r0 = new com.tkay.expressad.splash.view.TYSplashPopView$6
            r0.<init>(r1)
            r1.b = r0
            r1.g = r2
            return
    }

    public TYSplashPopView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1
            r0.g = r1
            r2 = -1
            r0.q = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r0.r = r2
            r2 = 0
            r0.s = r2
            com.tkay.expressad.splash.view.TYSplashPopView$4 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$4
            r2.<init>(r0)
            r0.u = r2
            com.tkay.expressad.splash.view.TYSplashPopView$5 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$5
            r2.<init>(r0)
            r0.a = r2
            com.tkay.expressad.splash.view.TYSplashPopView$6 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$6
            r2.<init>(r0)
            r0.b = r2
            r0.g = r1
            return
    }

    public TYSplashPopView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 1
            r0.g = r1
            r2 = -1
            r0.q = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r0.r = r2
            r2 = 0
            r0.s = r2
            com.tkay.expressad.splash.view.TYSplashPopView$4 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$4
            r2.<init>(r0)
            r0.u = r2
            com.tkay.expressad.splash.view.TYSplashPopView$5 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$5
            r2.<init>(r0)
            r0.a = r2
            com.tkay.expressad.splash.view.TYSplashPopView$6 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$6
            r2.<init>(r0)
            r0.b = r2
            r0.g = r1
            return
    }

    public TYSplashPopView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 1
            r0.g = r1
            r2 = -1
            r0.q = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r0.r = r2
            r2 = 0
            r0.s = r2
            com.tkay.expressad.splash.view.TYSplashPopView$4 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$4
            r2.<init>(r0)
            r0.u = r2
            com.tkay.expressad.splash.view.TYSplashPopView$5 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$5
            r2.<init>(r0)
            r0.a = r2
            com.tkay.expressad.splash.view.TYSplashPopView$6 r2 = new com.tkay.expressad.splash.view.TYSplashPopView$6
            r2.<init>(r0)
            r0.b = r2
            r0.g = r1
            return
    }

    public TYSplashPopView(android.content.Context r1, com.tkay.expressad.splash.view.TYSplashPopView.a r2, com.tkay.expressad.splash.d.d r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.g = r1
            r1 = -1
            r0.q = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            r0.r = r1
            r1 = 0
            r0.s = r1
            com.tkay.expressad.splash.view.TYSplashPopView$4 r1 = new com.tkay.expressad.splash.view.TYSplashPopView$4
            r1.<init>(r0)
            r0.u = r1
            com.tkay.expressad.splash.view.TYSplashPopView$5 r1 = new com.tkay.expressad.splash.view.TYSplashPopView$5
            r1.<init>(r0)
            r0.a = r1
            com.tkay.expressad.splash.view.TYSplashPopView$6 r1 = new com.tkay.expressad.splash.view.TYSplashPopView$6
            r1.<init>(r0)
            r0.b = r1
            if (r2 == 0) goto L48
            java.lang.String r1 = r2.b()
            r0.f = r1
            java.lang.String r1 = r2.a()
            r0.e = r1
            int r1 = r2.c()
            r0.g = r1
            com.tkay.expressad.foundation.d.c r1 = r2.d()
            r0.h = r1
            r0.i = r3
            r0.a()
            return
        L48:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Parameters is NULL, can't gen view."
            r1.<init>(r2)
            throw r1
    }

    static android.widget.ImageView a(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            android.widget.ImageView r0 = r0.j
            return r0
    }

    private void a() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.h
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            r3.setLayoutParams(r0)
            int r0 = r3.g
            r1 = 1
            if (r0 == r1) goto L2a
            r1 = 2
            if (r0 == r1) goto L26
            r1 = 3
            if (r0 == r1) goto L22
            r1 = 4
            if (r0 == r1) goto L1e
            goto L21
        L1e:
            r3.e()
        L21:
            return
        L22:
            r3.d()
            return
        L26:
            r3.c()
            return
        L2a:
            r3.b()
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            com.tkay.expressad.splash.d.d r0 = r1.i
            if (r0 == 0) goto Lc
            r0.a(r2)
            com.tkay.expressad.splash.d.d r2 = r1.i
            r2.b()
        Lc:
            return
    }

    static void a(com.tkay.expressad.splash.view.TYSplashPopView r1, com.tkay.expressad.foundation.d.c r2) {
            com.tkay.expressad.splash.d.d r0 = r1.i
            if (r0 == 0) goto Lc
            r0.a(r2)
            com.tkay.expressad.splash.d.d r1 = r1.i
            r1.b()
        Lc:
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.splash.view.TYSplashPopView$2 r1 = new com.tkay.expressad.splash.view.TYSplashPopView$2
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    private void a(java.lang.String r3, boolean r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.splash.view.TYSplashPopView$1 r1 = new com.tkay.expressad.splash.view.TYSplashPopView$1
            r1.<init>(r2, r4)
            r0.a(r3, r1)
            return
    }

    static android.widget.ImageView b(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            android.widget.ImageView r0 = r0.k
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
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            android.content.Context r4 = r7.getContext()
            int r3 = com.tkay.expressad.foundation.h.t.b(r4, r3)
            r1.<init>(r2, r3)
            r2 = 9
            r1.addRule(r2)
            android.content.Context r2 = r7.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r1.topMargin = r2
            int r2 = generateViewId()
            r0.setId(r2)
            r0.setLayoutParams(r1)
            android.content.res.Resources r1 = r7.getResources()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            java.lang.String r4 = "drawable"
            java.lang.String r5 = "tkay_splash_popview_default"
            int r1 = r1.getIdentifier(r5, r4, r2)
            r0.setBackgroundResource(r1)
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r7.getContext()
            r1.<init>(r2)
            r7.j = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r7.getContext()
            r5 = 1114636288(0x42700000, float:60.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            android.content.Context r6 = r7.getContext()
            int r5 = com.tkay.expressad.foundation.h.t.b(r6, r5)
            r1.<init>(r2, r5)
            int r2 = r0.getId()
            r5 = 6
            r1.addRule(r5, r2)
            android.content.Context r2 = r7.getContext()
            r5 = 1088421888(0x40e00000, float:7.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            r1.topMargin = r2
            android.content.Context r2 = r7.getContext()
            r5 = 1092616192(0x41200000, float:10.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            r1.leftMargin = r2
            android.widget.ImageView r2 = r7.j
            int r6 = generateViewId()
            r2.setId(r6)
            android.widget.ImageView r2 = r7.j
            r2.setLayoutParams(r1)
            android.widget.ImageView r1 = r7.j
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r2)
            com.tkay.expressad.foundation.d.c r1 = r7.h
            if (r1 == 0) goto Lc1
            java.lang.String r1 = r1.bd()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc1
            com.tkay.expressad.foundation.d.c r1 = r7.h
            java.lang.String r1 = r1.bd()
            r2 = 1
            r7.a(r1, r2)
        Lc1:
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r2 = r7.getContext()
            r1.<init>(r2)
            r7.p = r1
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
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r6)
            r1.leftMargin = r2
            android.content.Context r2 = r7.getContext()
            r6 = 1116471296(0x428c0000, float:70.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r6)
            r1.bottomMargin = r2
            android.widget.TextView r2 = r7.p
            int r6 = generateViewId()
            r2.setId(r6)
            android.widget.TextView r2 = r7.p
            r2.setTextSize(r5)
            android.widget.TextView r2 = r7.p
            r5 = -1
            r2.setTextColor(r5)
            android.widget.TextView r2 = r7.p
            r5 = 17
            r2.setGravity(r5)
            android.widget.TextView r2 = r7.p
            android.content.Context r5 = r7.getContext()
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r3)
            r2.setMinWidth(r5)
            android.widget.TextView r2 = r7.p
            android.content.Context r5 = r7.getContext()
            int r3 = com.tkay.expressad.foundation.h.t.b(r5, r3)
            r2.setMaxHeight(r3)
            android.widget.TextView r2 = r7.p
            r2.setLayoutParams(r1)
            android.widget.TextView r1 = r7.p
            android.content.res.Resources r2 = r7.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tkay_cm_circle_50black"
            int r2 = r2.getIdentifier(r5, r4, r3)
            r1.setBackgroundResource(r2)
            r7.addView(r0)
            android.widget.TextView r0 = r7.p
            r7.addView(r0)
            android.widget.ImageView r0 = r7.j
            r7.addView(r0)
            com.tkay.expressad.foundation.d.c r0 = r7.h
            if (r0 == 0) goto L166
            int r0 = r0.u()
            if (r0 > 0) goto L166
            r7.g()
        L166:
            android.view.View$OnClickListener r0 = r7.a
            r7.setOnClickListener(r0)
            android.widget.TextView r0 = r7.p
            android.view.View$OnClickListener r1 = r7.b
            r0.setOnClickListener(r1)
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            com.tkay.expressad.splash.d.d r0 = r1.i
            if (r0 == 0) goto Lc
            r0.a(r2)
            com.tkay.expressad.splash.d.d r2 = r1.i
            r2.b()
        Lc:
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.splash.view.TYSplashPopView$3 r1 = new com.tkay.expressad.splash.view.TYSplashPopView$3
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    static android.widget.TextView c(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            android.widget.TextView r0 = r0.p
            return r0
    }

    private void c() {
            r6 = this;
            android.content.Context r0 = r6.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r6.getContext()
            r2.<init>(r3)
            r6.j = r2
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r3 = r6.getContext()
            r4 = 1105199104(0x41e00000, float:28.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
            android.content.Context r5 = r6.getContext()
            int r4 = com.tkay.expressad.foundation.h.t.b(r5, r4)
            r2.<init>(r3, r4)
            r3 = 9
            r2.addRule(r3)
            android.widget.ImageView r3 = r6.j
            int r4 = generateViewId()
            r3.setId(r4)
            android.widget.ImageView r3 = r6.j
            r3.setLayoutParams(r2)
            android.widget.ImageView r2 = r6.j
            r2.setPadding(r0, r0, r0, r0)
            android.widget.ImageView r0 = r6.j
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r0.setScaleType(r2)
            com.tkay.expressad.foundation.d.c r0 = r6.h
            java.lang.String r0 = r0.bd()
            r2 = 0
            r6.a(r0, r2)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r2 = r6.getContext()
            r0.<init>(r2)
            r6.n = r0
            int r2 = generateViewId()
            r0.setId(r2)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r2, r2)
            android.widget.ImageView r2 = r6.j
            int r2 = r2.getId()
            r3 = 1
            r0.addRule(r3, r2)
            android.widget.ImageView r2 = r6.j
            int r2 = r2.getId()
            r4 = 6
            r0.addRule(r4, r2)
            android.widget.ImageView r2 = r6.j
            int r2 = r2.getId()
            r4 = 8
            r0.addRule(r4, r2)
            android.content.Context r2 = r6.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r2, r1)
            r0.leftMargin = r1
            android.content.Context r1 = r6.getContext()
            r2 = 1109393408(0x42200000, float:40.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.rightMargin = r1
            android.widget.TextView r1 = r6.n
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = r6.n
            r1 = 16
            r0.setGravity(r1)
            android.widget.TextView r0 = r6.n
            r1 = 1092616192(0x41200000, float:10.0)
            r0.setTextSize(r1)
            android.widget.TextView r0 = r6.n
            r0.setSelected(r3)
            android.widget.TextView r0 = r6.n
            android.text.TextUtils$TruncateAt r1 = android.text.TextUtils.TruncateAt.MARQUEE
            r0.setEllipsize(r1)
            android.widget.TextView r0 = r6.n
            r1 = -1
            r0.setMarqueeRepeatLimit(r1)
            android.widget.TextView r0 = r6.n
            r0.setSingleLine(r3)
            android.widget.TextView r0 = r6.n
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setTextColor(r1)
            android.widget.TextView r0 = r6.n
            com.tkay.expressad.foundation.d.c r1 = r6.h
            java.lang.String r1 = r1.bb()
            r0.setText(r1)
            android.content.res.Resources r0 = r6.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_shape_corners_bg"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            r6.setBackgroundResource(r0)
            android.widget.ImageView r0 = r6.j
            r6.addView(r0)
            android.widget.TextView r0 = r6.n
            r6.addView(r0)
            r6.f()
            android.view.View$OnClickListener r0 = r6.a
            r6.setOnClickListener(r0)
            return
    }

    static int d(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            int r0 = r0.q
            return r0
    }

    private void d() {
            r9 = this;
            android.content.Context r0 = r9.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r9.getContext()
            r2.<init>(r3)
            r9.j = r2
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r3 = r9.getContext()
            r4 = 1112014848(0x42480000, float:50.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
            android.content.Context r5 = r9.getContext()
            int r4 = com.tkay.expressad.foundation.h.t.b(r5, r4)
            r2.<init>(r3, r4)
            r3 = 9
            r2.addRule(r3)
            android.widget.ImageView r3 = r9.j
            int r4 = generateViewId()
            r3.setId(r4)
            android.widget.ImageView r3 = r9.j
            r3.setLayoutParams(r2)
            android.widget.ImageView r2 = r9.j
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r2.setScaleType(r3)
            android.widget.ImageView r2 = r9.j
            r2.setPadding(r0, r0, r0, r0)
            com.tkay.expressad.foundation.d.c r0 = r9.h
            java.lang.String r0 = r0.bd()
            r2 = 0
            r9.a(r0, r2)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r2 = r9.getContext()
            r0.<init>(r2)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = -1
            r4 = -2
            r2.<init>(r3, r4)
            android.widget.ImageView r5 = r9.j
            int r5 = r5.getId()
            r6 = 1
            r2.addRule(r6, r5)
            android.widget.ImageView r5 = r9.j
            int r5 = r5.getId()
            r7 = 6
            r2.addRule(r7, r5)
            android.widget.ImageView r5 = r9.j
            int r5 = r5.getId()
            r7 = 8
            r2.addRule(r7, r5)
            android.content.Context r5 = r9.getContext()
            r7 = 1090519040(0x41000000, float:8.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r7)
            r2.leftMargin = r5
            android.content.Context r5 = r9.getContext()
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r7)
            r2.rightMargin = r5
            r0.setLayoutParams(r2)
            r2 = 16
            r0.setGravity(r2)
            android.widget.TextView r5 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r5.<init>(r8)
            r9.n = r5
            int r8 = generateViewId()
            r5.setId(r8)
            android.widget.TextView r5 = r9.n
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r4, r4)
            r5.setLayoutParams(r8)
            android.widget.TextView r5 = r9.n
            r5.setGravity(r2)
            android.widget.TextView r5 = r9.n
            r8 = 1094713344(0x41400000, float:12.0)
            r5.setTextSize(r8)
            android.widget.TextView r5 = r9.n
            r5.setSelected(r6)
            android.widget.TextView r5 = r9.n
            android.text.TextUtils$TruncateAt r8 = android.text.TextUtils.TruncateAt.MARQUEE
            r5.setEllipsize(r8)
            android.widget.TextView r5 = r9.n
            r5.setMarqueeRepeatLimit(r3)
            android.widget.TextView r5 = r9.n
            r5.setSingleLine(r6)
            android.widget.TextView r5 = r9.n
            r8 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r5.setTextColor(r8)
            android.widget.TextView r5 = r9.n
            com.tkay.expressad.foundation.d.c r8 = r9.h
            java.lang.String r8 = r8.bb()
            r5.setText(r8)
            android.widget.TextView r5 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r5.<init>(r8)
            r9.o = r5
            int r8 = generateViewId()
            r5.setId(r8)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r4, r4)
            android.widget.TextView r4 = r9.n
            int r4 = r4.getId()
            r8 = 5
            r5.addRule(r8, r4)
            android.widget.TextView r4 = r9.n
            int r4 = r4.getId()
            r8 = 3
            r5.addRule(r8, r4)
            android.content.Context r4 = r9.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r4, r1)
            r5.topMargin = r1
            android.content.Context r1 = r9.getContext()
            r4 = 1108344832(0x42100000, float:36.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r4)
            r5.rightMargin = r1
            android.widget.TextView r1 = r9.o
            r1.setGravity(r2)
            android.widget.TextView r1 = r9.o
            r1.setLayoutParams(r5)
            android.widget.TextView r1 = r9.o
            r1.setTextSize(r7)
            android.widget.TextView r1 = r9.o
            r2 = -10066330(0xffffffffff666666, float:-3.0625412E38)
            r1.setTextColor(r2)
            android.widget.TextView r1 = r9.o
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.MARQUEE
            r1.setEllipsize(r2)
            android.widget.TextView r1 = r9.o
            r1.setMarqueeRepeatLimit(r3)
            android.widget.TextView r1 = r9.o
            r1.setSelected(r6)
            android.widget.TextView r1 = r9.o
            r1.setSingleLine(r6)
            android.widget.TextView r1 = r9.o
            com.tkay.expressad.foundation.d.c r2 = r9.h
            java.lang.String r2 = r2.bc()
            r1.setText(r2)
            android.widget.TextView r1 = r9.n
            r0.addView(r1)
            android.widget.TextView r1 = r9.o
            r0.addView(r1)
            android.content.res.Resources r1 = r9.getResources()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            java.lang.String r3 = "tkay_shape_corners_bg"
            java.lang.String r4 = "drawable"
            int r1 = r1.getIdentifier(r3, r4, r2)
            r9.setBackgroundResource(r1)
            android.widget.ImageView r1 = r9.j
            r9.addView(r1)
            r9.addView(r0)
            r9.f()
            android.view.View$OnClickListener r0 = r9.a
            r9.setOnClickListener(r0)
            return
    }

    static int e(com.tkay.expressad.splash.view.TYSplashPopView r1) {
            r0 = -1
            r1.q = r0
            return r0
    }

    private void e() {
            r9 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            r9.l = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r9.getContext()
            r2 = 1124270080(0x43030000, float:131.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r3 = -1
            r0.<init>(r3, r1)
            r1 = 10
            r0.addRule(r1)
            r4 = 14
            r0.addRule(r4)
            android.widget.ImageView r5 = r9.l
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.FIT_XY
            r5.setScaleType(r6)
            android.widget.ImageView r5 = r9.l
            int r6 = generateViewId()
            r5.setId(r6)
            android.widget.ImageView r5 = r9.l
            r5.setLayoutParams(r0)
            com.tkay.expressad.foundation.d.c r0 = r9.h
            java.lang.String r0 = r0.be()
            r9.a(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r5 = r9.getContext()
            r0.<init>(r5)
            r9.k = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r5 = r9.getContext()
            int r2 = com.tkay.expressad.foundation.h.t.b(r5, r2)
            r5 = -2
            r0.<init>(r5, r2)
            r0.addRule(r1)
            r0.addRule(r4)
            android.widget.ImageView r1 = r9.k
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r2)
            android.widget.ImageView r1 = r9.k
            int r2 = generateViewId()
            r1.setId(r2)
            android.widget.ImageView r1 = r9.k
            r1.setLayoutParams(r0)
            com.tkay.expressad.foundation.d.c r0 = r9.h
            java.lang.String r0 = r0.be()
            r9.b(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            r9.j = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r9.getContext()
            r2 = 1112014848(0x42480000, float:50.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            android.content.Context r4 = r9.getContext()
            int r2 = com.tkay.expressad.foundation.h.t.b(r4, r2)
            r0.<init>(r1, r2)
            r1 = 9
            r0.addRule(r1)
            android.widget.ImageView r1 = r9.l
            int r1 = r1.getId()
            r2 = 3
            r0.addRule(r2, r1)
            r1 = 20
            r0.topMargin = r1
            android.widget.ImageView r1 = r9.j
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r1.setScaleType(r4)
            android.widget.ImageView r1 = r9.j
            int r4 = generateViewId()
            r1.setId(r4)
            android.widget.ImageView r1 = r9.j
            r1.setLayoutParams(r0)
            com.tkay.expressad.foundation.d.c r0 = r9.h
            java.lang.String r0 = r0.bd()
            r1 = 0
            r9.a(r0, r1)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r3, r5)
            android.widget.ImageView r4 = r9.j
            int r4 = r4.getId()
            r6 = 1
            r1.addRule(r6, r4)
            android.widget.ImageView r4 = r9.j
            int r4 = r4.getId()
            r7 = 6
            r1.addRule(r7, r4)
            android.widget.ImageView r4 = r9.j
            int r4 = r4.getId()
            r7 = 8
            r1.addRule(r7, r4)
            android.content.Context r4 = r9.getContext()
            r7 = 1090519040(0x41000000, float:8.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r7)
            r1.leftMargin = r4
            android.content.Context r4 = r9.getContext()
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r7)
            r1.rightMargin = r4
            r0.setLayoutParams(r1)
            r1 = 16
            r0.setGravity(r1)
            android.widget.TextView r4 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r4.<init>(r8)
            r9.n = r4
            int r8 = generateViewId()
            r4.setId(r8)
            android.widget.TextView r4 = r9.n
            r4.setGravity(r1)
            android.widget.TextView r4 = r9.n
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r5, r5)
            r4.setLayoutParams(r8)
            android.widget.TextView r4 = r9.n
            r8 = 1094713344(0x41400000, float:12.0)
            r4.setTextSize(r8)
            android.widget.TextView r4 = r9.n
            r8 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r4.setTextColor(r8)
            android.widget.TextView r4 = r9.n
            android.text.TextUtils$TruncateAt r8 = android.text.TextUtils.TruncateAt.MARQUEE
            r4.setEllipsize(r8)
            android.widget.TextView r4 = r9.n
            r4.setMarqueeRepeatLimit(r3)
            android.widget.TextView r4 = r9.n
            r4.setSelected(r6)
            android.widget.TextView r4 = r9.n
            r4.setSingleLine(r6)
            android.widget.TextView r4 = r9.n
            com.tkay.expressad.foundation.d.c r8 = r9.h
            java.lang.String r8 = r8.bb()
            r4.setText(r8)
            android.widget.TextView r4 = new android.widget.TextView
            android.content.Context r8 = r9.getContext()
            r4.<init>(r8)
            r9.o = r4
            int r8 = generateViewId()
            r4.setId(r8)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r5, r5)
            android.widget.TextView r5 = r9.n
            int r5 = r5.getId()
            r8 = 5
            r4.addRule(r8, r5)
            android.widget.TextView r5 = r9.n
            int r5 = r5.getId()
            r4.addRule(r2, r5)
            android.content.Context r2 = r9.getContext()
            r5 = 1082130432(0x40800000, float:4.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            r4.topMargin = r2
            android.content.Context r2 = r9.getContext()
            r5 = 1108344832(0x42100000, float:36.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            r4.rightMargin = r2
            android.widget.TextView r2 = r9.o
            r2.setGravity(r1)
            android.widget.TextView r1 = r9.o
            r1.setLayoutParams(r4)
            android.widget.TextView r1 = r9.o
            r1.setTextSize(r7)
            android.widget.TextView r1 = r9.o
            r2 = -10066330(0xffffffffff666666, float:-3.0625412E38)
            r1.setTextColor(r2)
            android.widget.TextView r1 = r9.o
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.MARQUEE
            r1.setEllipsize(r2)
            android.widget.TextView r1 = r9.o
            r1.setMarqueeRepeatLimit(r3)
            android.widget.TextView r1 = r9.o
            r1.setSelected(r6)
            android.widget.TextView r1 = r9.o
            r1.setSingleLine(r6)
            android.widget.TextView r1 = r9.o
            com.tkay.expressad.foundation.d.c r2 = r9.h
            java.lang.String r2 = r2.bc()
            r1.setText(r2)
            android.widget.TextView r1 = r9.n
            r0.addView(r1)
            android.widget.TextView r1 = r9.o
            r0.addView(r1)
            android.widget.ImageView r1 = r9.l
            r9.addView(r1)
            android.widget.ImageView r1 = r9.k
            r9.addView(r1)
            android.widget.ImageView r1 = r9.j
            r9.addView(r1)
            r9.addView(r0)
            r9.f()
            android.view.View$OnClickListener r0 = r9.a
            r9.setOnClickListener(r0)
            return
    }

    private void f() {
            r5 = this;
            java.lang.String r0 = "ZH"
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r5.getContext()
            r1.<init>(r2)
            r5.m = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r5.getContext()
            r3 = 1107296256(0x42000000, float:32.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            android.content.Context r3 = r5.getContext()
            r4 = 1095761920(0x41500000, float:13.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
            r1.<init>(r2, r3)
            r2 = 11
            r1.addRule(r2)
            android.widget.ImageView r2 = r5.j
            int r2 = r2.getId()
            r3 = 8
            r1.addRule(r3, r2)
            android.widget.ImageView r2 = r5.m
            r2.setLayoutParams(r1)
            android.content.res.Resources r1 = r5.getResources()     // Catch: java.lang.Throwable -> L4a
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> L4a
            java.util.Locale r1 = r1.locale     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r1.getLanguage()     // Catch: java.lang.Throwable -> L4a
            goto L4f
        L4a:
            r1 = move-exception
            r1.getMessage()
            r1 = r0
        L4f:
            java.lang.String r2 = r1.toUpperCase()
            java.lang.String r3 = "CN"
            boolean r2 = r2.equals(r3)
            java.lang.String r3 = "drawable"
            if (r2 != 0) goto L7b
            java.lang.String r1 = r1.toUpperCase()
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L68
            goto L7b
        L68:
            android.content.res.Resources r0 = r5.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_ad_en"
            int r0 = r0.getIdentifier(r2, r3, r1)
            goto L8d
        L7b:
            android.content.res.Resources r0 = r5.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_ad"
            int r0 = r0.getIdentifier(r2, r3, r1)
        L8d:
            android.widget.ImageView r1 = r5.m
            r1.setBackgroundResource(r0)
            android.widget.ImageView r0 = r5.m
            r5.addView(r0)
            return
    }

    static void f(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            r0.g()
            return
    }

    static java.lang.Runnable g(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            java.lang.Runnable r0 = r0.u
            return r0
    }

    private void g() {
            r4 = this;
            android.widget.TextView r0 = r4.p
            if (r0 == 0) goto L43
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.content.Context r1 = r4.getContext()
            r2 = 1098907648(0x41800000, float:16.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.width = r1
            android.content.Context r1 = r4.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.height = r1
            android.widget.TextView r1 = r4.p
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = r4.p
            java.lang.String r1 = ""
            r0.setText(r1)
            android.content.res.Resources r0 = r4.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_popview_close"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            android.widget.TextView r1 = r4.p
            r1.setBackgroundResource(r0)
        L43:
            return
    }

    public static int generateViewId() {
        L0:
            java.util.concurrent.atomic.AtomicInteger r0 = com.tkay.expressad.splash.view.TYSplashPopView.d
            int r0 = r0.get()
            int r1 = r0 + 1
            r2 = 16777215(0xffffff, float:2.3509886E-38)
            if (r1 <= r2) goto Le
            r1 = 1
        Le:
            java.util.concurrent.atomic.AtomicInteger r2 = com.tkay.expressad.splash.view.TYSplashPopView.d
            boolean r1 = r2.compareAndSet(r0, r1)
            if (r1 == 0) goto L0
            return r0
    }

    static android.os.Handler h(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            android.os.Handler r0 = r0.r
            return r0
    }

    static com.tkay.expressad.splash.d.d i(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            com.tkay.expressad.splash.d.d r0 = r0.i
            return r0
    }

    static int j(com.tkay.expressad.splash.view.TYSplashPopView r2) {
            int r0 = r2.q
            int r1 = r0 + (-1)
            r2.q = r1
            return r0
    }

    static com.tkay.expressad.foundation.d.c k(com.tkay.expressad.splash.view.TYSplashPopView r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.h
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            com.tkay.expressad.splash.d.d r0 = r1.i
            if (r0 == 0) goto Ld
            r1.getWidth()
            r1.getHeight()
        Ld:
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
            r2.s = r0
            android.widget.TextView r0 = r2.p
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.r
            java.lang.Runnable r1 = r2.u
            r0.removeCallbacks(r1)
        Le:
            return
    }

    public void reStartCountDown() {
            r4 = this;
            boolean r0 = r4.s
            if (r0 == 0) goto L27
            r0 = 0
            r4.s = r0
            int r0 = r4.q
            r1 = -1
            if (r0 == r1) goto L24
            if (r0 != 0) goto Lf
            goto L24
        Lf:
            android.widget.TextView r1 = r4.p
            if (r1 == 0) goto L27
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.setText(r0)
            android.os.Handler r0 = r4.r
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
            android.os.Handler r0 = r2.r     // Catch: java.lang.Exception -> L12
            java.lang.Runnable r1 = r2.u     // Catch: java.lang.Exception -> L12
            r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> L12
            r0 = 0
            r2.u = r0     // Catch: java.lang.Exception -> L12
            r2.detachAllViewsFromParent()     // Catch: java.lang.Exception -> L12
            r2.h = r0     // Catch: java.lang.Exception -> L12
            r2.i = r0     // Catch: java.lang.Exception -> L12
            return
        L12:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setPopViewType(com.tkay.expressad.splash.view.TYSplashPopView.a r2, com.tkay.expressad.splash.d.d r3) {
            r1 = this;
            if (r2 == 0) goto L20
            java.lang.String r0 = r2.b()
            r1.f = r0
            java.lang.String r0 = r2.a()
            r1.e = r0
            int r0 = r2.c()
            r1.g = r0
            com.tkay.expressad.foundation.d.c r2 = r2.d()
            r1.h = r2
            r1.i = r3
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
            android.os.Handler r0 = r4.r
            java.lang.Runnable r1 = r4.u
            r0.removeCallbacks(r1)
            com.tkay.expressad.foundation.d.c r0 = r4.h
            if (r0 == 0) goto L30
            int r1 = r4.g
            r2 = 1
            if (r1 != r2) goto L30
            int r0 = r0.u()
            if (r0 <= 0) goto L2d
            r4.q = r0
            android.widget.TextView r1 = r4.p
            if (r1 == 0) goto L30
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.setText(r0)
            android.os.Handler r0 = r4.r
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
