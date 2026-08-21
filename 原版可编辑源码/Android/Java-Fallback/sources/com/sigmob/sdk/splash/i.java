package com.sigmob.sdk.splash;

public final class i extends android.widget.RelativeLayout {
    private static float a = 25.0f;
    private static float b = 13.0f;
    private com.sigmob.sdk.splash.d c;
    private android.content.Context d;
    private android.widget.RelativeLayout e;
    private com.sigmob.sdk.base.models.BaseAdUnit f;
    private com.sigmob.sdk.splash.c g;
    private com.czhj.volley.toolbox.ImageLoader.ImageContainer h;
    private java.lang.String i;
    private boolean j;
    private android.widget.TextView k;
    private java.lang.String l;
    private android.widget.RelativeLayout m;
    private android.widget.RelativeLayout n;
    private android.view.View.OnTouchListener o;
    private float p;
    private com.sigmob.sdk.base.views.v q;
    private boolean r;
    private android.hardware.SensorManager s;
    private boolean t;
    private android.hardware.SensorEventListener u;
    private boolean v;







    static class 7 {
        static final int[] a = null;

        static {
                com.sigmob.sdk.base.common.af[] r0 = com.sigmob.sdk.base.common.af.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.splash.i.7.a = r0
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.sdk.splash.i.7.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.sigmob.sdk.splash.i.7.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.c     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.sigmob.sdk.splash.i.7.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.d     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.sigmob.sdk.splash.i.7.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.e     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.sigmob.sdk.splash.i.7.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.f     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.sigmob.sdk.splash.i.7.a     // Catch: java.lang.NoSuchFieldError -> L54
                com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.g     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                return
        }
    }

    static {
            return
    }

    public i(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 1065353216(0x3f800000, float:1.0)
            r1.p = r0
            com.sigmob.sdk.splash.i$1 r0 = new com.sigmob.sdk.splash.i$1
            r0.<init>(r1)
            r1.u = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.d = r2
            return
    }

    static com.sigmob.sdk.base.views.v a(com.sigmob.sdk.splash.i r0) {
            com.sigmob.sdk.base.views.v r0 = r0.q
            return r0
    }

    private void a(com.sigmob.sdk.base.models.BaseAdUnit r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "handleUrlAction: "
            com.czhj.sdk.logger.SigmobLog.i(r0)
            com.sigmob.sdk.base.common.ag$a r0 = new com.sigmob.sdk.base.common.ag$a
            r0.<init>()
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.a
            r2 = 5
            com.sigmob.sdk.base.common.af[] r2 = new com.sigmob.sdk.base.common.af[r2]
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.e
            r4 = 0
            r2[r4] = r3
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.d
            r4 = 1
            r2[r4] = r3
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.f
            r4 = 2
            r2[r4] = r3
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.c
            r4 = 3
            r2[r4] = r3
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.b
            r4 = 4
            r2[r4] = r3
            com.sigmob.sdk.base.common.ag$a r0 = r0.a(r1, r2)
            com.sigmob.sdk.splash.i$5 r1 = new com.sigmob.sdk.splash.i$5
            r1.<init>(r5, r6, r7)
            com.sigmob.sdk.base.common.ag$a r7 = r0.a(r1)
            boolean r0 = r6.isSkipSigmobBrowser()
            com.sigmob.sdk.base.common.ag$a r7 = r7.a(r0)
            com.sigmob.sdk.base.common.ag$a r7 = r7.a(r6)
            com.sigmob.sdk.base.models.rtb.Ad r6 = r6.getAd()
            java.lang.Boolean r6 = r6.forbiden_parse_landingpage
            boolean r6 = r6.booleanValue()
            com.sigmob.sdk.base.common.ag$a r6 = r7.b(r6)
            com.sigmob.sdk.base.common.ag r6 = r6.a()
            android.content.Context r7 = com.sigmob.sdk.b.b()
            r0 = 0
            r6.a(r7, r0)
            return
    }

    static void a(com.sigmob.sdk.splash.i r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "handleClick: "
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r0 = 1
            r1.r = r0
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.f
            r1.a(r0, r2)
            return
    }

    static boolean a(com.sigmob.sdk.splash.i r0, boolean r1) {
            r0.t = r1
            return r1
    }

    private void b(android.content.Context r7) {
            r6 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.f
            com.sigmob.sdk.splash.d r0 = com.sigmob.sdk.splash.d.a(r7, r0)
            r6.c = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.sigmob.sdk.splash.d r2 = r6.c
            r6.addView(r2, r0)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r7)
            r6.n = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r1, r1)
            float r1 = com.sigmob.sdk.splash.i.a
            android.content.Context r2 = r6.d
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r2)
            double r2 = (double) r1
            r4 = 4612811918334230528(0x4004000000000000, double:2.5)
            double r2 = r2 * r4
            int r2 = (int) r2
            r0.setMargins(r1, r2, r1, r1)
            android.widget.RelativeLayout r1 = r6.n
            r2 = 1
            r1.setClickable(r2)
            android.widget.RelativeLayout r1 = r6.n
            r6.addView(r1, r0)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r7)
            r6.e = r0
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            android.widget.RelativeLayout r0 = r6.e
            com.sigmob.sdk.splash.i$3 r1 = new com.sigmob.sdk.splash.i$3
            r1.<init>(r6, r7)
            r0.setOnTouchListener(r1)
            com.sigmob.sdk.splash.i$4 r7 = new com.sigmob.sdk.splash.i$4
            r7.<init>(r6)
            r6.o = r7
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r6.f
            boolean r7 = r7.enable_full_click()
            if (r7 == 0) goto L68
            android.widget.RelativeLayout r7 = r6.n
            android.view.View$OnTouchListener r0 = r6.o
            r7.setOnTouchListener(r0)
        L68:
            return
    }

    static boolean b(com.sigmob.sdk.splash.i r0) {
            boolean r0 = r0.r
            return r0
    }

    private android.view.View c(android.content.Context r4) {
            r3 = this;
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r4)
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            java.lang.String r1 = com.sigmob.sdk.base.d.g()
            r0.setText(r1)
            r1 = 1
            r2 = 1092616192(0x41200000, float:10.0)
            r0.setTextSize(r1, r2)
            java.lang.String r1 = "#dadada"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setTextColor(r1)
            r1 = 17
            r0.setGravity(r1)
            r1 = 1084227584(0x40a00000, float:5.0)
            int r4 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r4)
            r1 = 0
            r0.setPadding(r4, r1, r4, r1)
            java.lang.String r4 = "#B3505050"
            int r4 = android.graphics.Color.parseColor(r4)
            r0.setBackgroundColor(r4)
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit c(com.sigmob.sdk.splash.i r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.f
            return r0
    }

    private void d(android.content.Context r6) {
            r5 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r6)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = 1097859072(0x41700000, float:15.0)
            int r2 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r2, r6)
            r3 = -2
            r1.<init>(r3, r2)
            android.widget.RelativeLayout r2 = r5.m
            r3 = 0
            if (r2 == 0) goto L34
            r2 = 4
            android.widget.RelativeLayout r4 = r5.e
            int r4 = r4.getId()
            r1.addRule(r2, r4)
            r2 = 9
            r1.addRule(r2)
            float r2 = com.sigmob.sdk.splash.i.a
            float r4 = r5.p
            float r2 = r2 * r4
            int r2 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r2, r6)
            int r2 = r2 / 2
            r1.setMargins(r2, r3, r3, r3)
            goto L4d
        L34:
            r2 = 12
            r1.addRule(r2)
            r2 = 11
            r1.addRule(r2)
            boolean r2 = r5.j
            if (r2 != 0) goto L4d
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r2 = r2.getInsetBottom()
            r1.setMargins(r3, r3, r3, r2)
        L4d:
            android.view.View r6 = r5.c(r6)
            r0.addView(r6)
            r5.addView(r0, r1)
            return
    }

    static boolean d(com.sigmob.sdk.splash.i r0) {
            boolean r0 = r0.v
            return r0
    }

    static android.content.Context e(com.sigmob.sdk.splash.i r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    private void e(android.content.Context r8) {
            r7 = this;
            float r0 = r7.p
            r1 = 1106247680(0x41f00000, float:30.0)
            float r0 = r0 * r1
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r8)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r0)
            r3 = 11
            r1.addRule(r3)
            r3 = 10
            r1.addRule(r3)
            int r0 = r0 / 2
            java.lang.String r3 = "#B3505050"
            int r3 = android.graphics.Color.parseColor(r3)
            r4 = 0
            r1.setMargins(r4, r0, r0, r4)
            android.graphics.drawable.GradientDrawable r5 = new android.graphics.drawable.GradientDrawable
            r5.<init>()
            r5.setColor(r3)
            float r3 = (float) r0
            r5.setCornerRadius(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            r6 = 16
            if (r3 < r6) goto L3d
            android.widget.RelativeLayout r3 = r7.e
            r3.setBackground(r5)
            goto L42
        L3d:
            android.widget.RelativeLayout r3 = r7.e
            r3.setBackgroundDrawable(r5)
        L42:
            android.widget.RelativeLayout r3 = r7.e
            r3.setPadding(r0, r4, r0, r4)
            android.widget.RelativeLayout r0 = r7.e
            r7.addView(r0, r1)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r8)
            r7.k = r0
            int r8 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r8)
            android.widget.TextView r8 = r7.k
            r0 = 1
            float r1 = com.sigmob.sdk.splash.i.b
            int r1 = (int) r1
            float r1 = (float) r1
            r8.setTextSize(r0, r1)
            android.widget.TextView r8 = r7.k
            java.lang.String r0 = "#dadada"
            int r0 = android.graphics.Color.parseColor(r0)
            r8.setTextColor(r0)
            android.widget.TextView r8 = r7.k
            r0 = 17
            r8.setGravity(r0)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r8.<init>(r2, r0)
            r0 = 15
            r8.addRule(r0)
            android.widget.RelativeLayout r0 = r7.e
            android.widget.TextView r1 = r7.k
            r0.addView(r1, r8)
            return
    }

    static com.sigmob.sdk.splash.c f(com.sigmob.sdk.splash.i r0) {
            com.sigmob.sdk.splash.c r0 = r0.g
            return r0
    }

    private void f(android.content.Context r5) {
            r4 = this;
            com.sigmob.sdk.base.views.v r0 = new com.sigmob.sdk.base.views.v
            r0.<init>(r5)
            r4.q = r0
            r1 = 1
            r0.a(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r2, r2)
            android.content.Context r2 = r4.getContext()
            r3 = 1109393408(0x42200000, float:40.0)
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r3, r2)
            r3 = 0
            r0.setMargins(r3, r3, r3, r2)
            r2 = 12
            r0.addRule(r2)
            r2 = 14
            r0.addRule(r2)
            com.sigmob.sdk.base.views.v r2 = r4.q
            r4.addView(r2, r0)
            java.lang.String r0 = "sensor"
            java.lang.Object r5 = r5.getSystemService(r0)
            android.hardware.SensorManager r5 = (android.hardware.SensorManager) r5
            r4.s = r5
            if (r5 == 0) goto L44
            android.hardware.SensorEventListener r0 = r4.u
            android.hardware.Sensor r1 = r5.getDefaultSensor(r1)
            r2 = 3
            r5.registerListener(r0, r1, r2)
        L44:
            return
    }

    private android.view.View g(android.content.Context r4) {
            r3 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r4)
            r4 = 0
            int r4 = android.graphics.Color.alpha(r4)
            r0.setBackgroundColor(r4)
            int r4 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r4)
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.FIT_XY
            r0.setScaleType(r4)
            com.czhj.volley.toolbox.ImageLoader r4 = com.czhj.sdk.common.network.Networking.getImageLoader()
            if (r4 == 0) goto L30
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.f
            java.lang.String r1 = r1.getAd_source_logo()
            com.sigmob.sdk.splash.i$6 r2 = new com.sigmob.sdk.splash.i$6
            r2.<init>(r3, r0)
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r4 = r4.get(r1, r2)
            r3.h = r4
        L30:
            return r0
    }

    private void h(android.content.Context r6) {
            r5 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.f
            java.lang.String r0 = r0.getAd_source_logo()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            return
        Ld:
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r6)
            android.view.View r1 = r5.g(r6)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = 1095761920(0x41500000, float:13.0)
            int r4 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r6)
            int r6 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r6)
            r2.<init>(r4, r6)
            boolean r6 = r5.j
            if (r6 != 0) goto L35
            com.czhj.sdk.common.ClientMetadata r6 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r6 = r6.getInsetBottom()
            r3 = 0
            r2.setMargins(r3, r3, r3, r6)
        L35:
            r6 = 12
            r2.addRule(r6)
            r6 = 11
            r2.addRule(r6)
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r3 = -1
            r6.<init>(r3, r3)
            r0.addView(r1, r6)
            android.widget.RelativeLayout r6 = r5.m
            if (r6 == 0) goto L54
            r1 = 2
            int r6 = r6.getId()
            r2.addRule(r1, r6)
        L54:
            r5.addView(r0, r2)
            return
    }

    private void i(android.content.Context r5) {
            r4 = this;
            com.sigmob.sdk.base.views.b r0 = new com.sigmob.sdk.base.views.b
            android.content.Context r1 = r4.getContext()
            r2 = 0
            r0.<init>(r1, r2)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.f
            java.lang.String r1 = r1.getAd_source_logo()
            r0.a(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.f
            boolean r1 = r1.getInvisibleAdLabel()
            if (r1 != 0) goto L22
            java.lang.String r1 = com.sigmob.sdk.base.d.g()
            r0.b(r1)
        L22:
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r3 = -2
            r1.<init>(r3, r3)
            r3 = 1084227584(0x40a00000, float:5.0)
            int r5 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r5)
            r3 = 12
            r1.addRule(r3)
            r3 = 9
            r1.addRule(r3)
            r1.setMargins(r5, r2, r2, r5)
            r4.addView(r0, r1)
            return
    }

    protected void a() {
            r2 = this;
            r0 = 8
            super.setVisibility(r0)
            com.sigmob.sdk.splash.d r1 = r2.c
            if (r1 == 0) goto Lc
            r1.setVisibility(r0)
        Lc:
            return
    }

    public void a(android.content.Context r9) {
            r8 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r8.f
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
            r1 = 1
            if (r0 == 0) goto L26
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r8.f
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
            java.lang.Integer r0 = r0.template_type
            int r0 = r0.intValue()
            r2 = 5
            if (r0 == r2) goto L26
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r8.f
            int r0 = r0.getInteractionType()
            if (r0 != r1) goto L23
            java.lang.String r0 = "点击查看详情"
            goto L28
        L23:
            java.lang.String r0 = "点击跳转第三方应用"
            goto L28
        L26:
            java.lang.String r0 = ""
        L28:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L2f
            return
        L2f:
            r2 = 1116471296(0x428c0000, float:70.0)
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r9)
            android.widget.RelativeLayout r3 = new android.widget.RelativeLayout
            r3.<init>(r9)
            r8.m = r3
            android.view.View$OnTouchListener r4 = r8.o
            r3.setOnTouchListener(r4)
            android.widget.RelativeLayout r3 = r8.m
            r3.setClickable(r1)
            android.widget.RelativeLayout r3 = r8.m
            int r4 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r3.setId(r4)
            android.widget.RelativeLayout r3 = r8.m
            int r4 = r2 / 2
            r5 = 0
            r3.setPadding(r4, r5, r4, r5)
            android.widget.RelativeLayout r3 = r8.m
            r6 = 16
            r3.setGravity(r6)
            android.graphics.drawable.GradientDrawable r3 = new android.graphics.drawable.GradientDrawable
            r3.<init>()
            r7 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3.setColor(r7)
            r7 = 102(0x66, float:1.43E-43)
            r3.setAlpha(r7)
            float r4 = (float) r4
            r3.setCornerRadius(r4)
            int r4 = android.os.Build.VERSION.SDK_INT
            if (r4 < r6) goto L7b
            android.widget.RelativeLayout r4 = r8.m
            r4.setBackground(r3)
            goto L80
        L7b:
            android.widget.RelativeLayout r4 = r8.m
            r4.setBackgroundDrawable(r3)
        L80:
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r4 = -1
            r3.<init>(r4, r2)
            r6 = 12
            r3.addRule(r6)
            r6 = 14
            r3.addRule(r6)
            int r7 = r2 * 2
            int r7 = r7 / 7
            r3.setMargins(r7, r5, r7, r2)
            android.widget.RelativeLayout r7 = r8.m
            r8.addView(r7, r3)
            android.widget.TextView r3 = new android.widget.TextView
            r3.<init>(r9)
            int r7 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r3.setId(r7)
            r3.setTextColor(r4)
            r3.setSingleLine()
            r4 = 17
            r3.setGravity(r4)
            r3.setText(r0)
            r0 = 1101004800(0x41a00000, float:20.0)
            r3.setTextSize(r1, r0)
            android.text.TextPaint r0 = r3.getPaint()
            r0.setFakeBoldText(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r4 = -2
            r0.<init>(r4, r4)
            r4 = 13
            r0.addRule(r4)
            android.widget.RelativeLayout r4 = r8.m
            r4.addView(r3, r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r9)
            android.widget.ImageView$ScaleType r9 = android.widget.ImageView.ScaleType.CENTER
            r0.setScaleType(r9)
            com.sigmob.sdk.base.views.o r9 = com.sigmob.sdk.base.views.o.i
            android.graphics.Bitmap r9 = r9.a()
            r0.setImageBitmap(r9)
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            int r4 = r2 / 7
            int r2 = r2 * 3
            int r2 = r2 / r6
            r9.<init>(r4, r2)
            int r2 = r3.getId()
            r9.addRule(r1, r2)
            r1 = 15
            r9.addRule(r1)
            r9.setMargins(r4, r5, r5, r5)
            android.widget.RelativeLayout r1 = r8.m
            r1.addView(r0, r9)
            return
    }

    void a(boolean r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L1a
            android.content.Context r4 = r3.d
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.f
            java.lang.String r1 = r1.getUuid()
            java.lang.String r2 = "com.sigmob.action.interstitial.dismiss"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r4, r1, r2)
            android.widget.RelativeLayout r4 = r3.e
            r4.setOnTouchListener(r0)
            com.sigmob.sdk.splash.c r4 = r3.g
            r4.k()
        L1a:
            android.hardware.SensorManager r4 = r3.s
            if (r4 == 0) goto L23
            android.hardware.SensorEventListener r1 = r3.u
            r4.unregisterListener(r1)
        L23:
            com.sigmob.sdk.splash.d r4 = r3.c
            r4.setOnTouchListener(r0)
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r4 = r3.h
            if (r4 == 0) goto L31
            r4.cancelRequest()
            r3.h = r0
        L31:
            return
    }

    public boolean a(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            r1.f = r2     // Catch: java.lang.Throwable -> L57
            com.sigmob.sdk.base.common.h r2 = r2.getAdConfig()     // Catch: java.lang.Throwable -> L57
            com.sigmob.sdk.splash.c r2 = (com.sigmob.sdk.splash.c) r2     // Catch: java.lang.Throwable -> L57
            r1.g = r2     // Catch: java.lang.Throwable -> L57
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.b(r2)     // Catch: java.lang.Throwable -> L57
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r1.f     // Catch: java.lang.Throwable -> L57
            boolean r2 = r2.isUse_floating_btn()     // Catch: java.lang.Throwable -> L57
            if (r2 == 0) goto L1c
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.a(r2)     // Catch: java.lang.Throwable -> L57
        L1c:
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r1.f     // Catch: java.lang.Throwable -> L57
            com.sigmob.sdk.base.models.rtb.MaterialMeta r2 = r2.getMaterial()     // Catch: java.lang.Throwable -> L57
            java.lang.Integer r2 = r2.template_type     // Catch: java.lang.Throwable -> L57
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L57
            r0 = 2
            if (r2 == r0) goto L4b
            r0 = 3
            if (r2 == r0) goto L4b
            r0 = 4
            if (r2 == r0) goto L45
            r0 = 5
            if (r2 == r0) goto L3a
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.h(r2)     // Catch: java.lang.Throwable -> L57
            goto L50
        L3a:
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.i(r2)     // Catch: java.lang.Throwable -> L57
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.f(r2)     // Catch: java.lang.Throwable -> L57
            goto L50
        L45:
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.i(r2)     // Catch: java.lang.Throwable -> L57
            goto L50
        L4b:
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.d(r2)     // Catch: java.lang.Throwable -> L57
        L50:
            android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L57
            r1.e(r2)     // Catch: java.lang.Throwable -> L57
            r2 = 1
            return r2
        L57:
            r2 = move-exception
            java.lang.String r0 = "setupAd error"
            com.czhj.sdk.logger.SigmobLog.e(r0, r2)
            r2 = 0
            return r2
    }

    protected void b() {
            r1 = this;
            r0 = 4
            super.setVisibility(r0)
            return
    }

    public boolean c() {
            r2 = this;
            com.sigmob.sdk.splash.d r0 = r2.c
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.f
            boolean r0 = r0.a(r1)
            return r0
    }

    public void d() {
            r4 = this;
            boolean r0 = r4.r     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.f     // Catch: java.lang.Throwable -> L21
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r0.getMacroCommon()     // Catch: java.lang.Throwable -> L21
            boolean r1 = r0 instanceof com.sigmob.sdk.base.models.SigMacroCommon     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L3a
            com.sigmob.sdk.base.models.SigMacroCommon r0 = (com.sigmob.sdk.base.models.SigMacroCommon) r0     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = "_AUTOCLICK_"
            com.sigmob.sdk.splash.c r2 = r4.g     // Catch: java.lang.Throwable -> L21
            int r2 = r2.n()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L21
            r0.addMarcoKey(r1, r2)     // Catch: java.lang.Throwable -> L21
            goto L3a
        L21:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "splash click macro set "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L3a:
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            r0[r1] = r2
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            r0[r2] = r3
            r2 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            r0[r2] = r3
            r2 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r2] = r1
            java.lang.String r1 = "%d,%d,%d,%d"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r4.a(r0)
            return
    }

    public void e() {
            r1 = this;
            com.sigmob.sdk.splash.d r0 = r1.c
            r0.b()
            return
    }

    public void f() {
            r1 = this;
            com.sigmob.sdk.splash.d r0 = r1.c
            r0.c()
            return
    }

    public int getDuration() {
            r1 = this;
            com.sigmob.sdk.splash.d r0 = r1.c
            int r0 = r0.getDuration()
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r4 = this;
            super.onAttachedToWindow()
            com.sigmob.sdk.splash.c r0 = r4.g
            android.app.Activity r1 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r4)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.f
            com.sigmob.sdk.splash.i$2 r3 = new com.sigmob.sdk.splash.i$2
            r3.<init>(r4)
            r0.a(r1, r2, r3)
            return
    }

    public void setDuration(int r5) {
            r4 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.f
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 1
            if (r5 <= 0) goto L5e
            android.widget.TextView r1 = r4.k
            if (r1 == 0) goto L5e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "duration "
            r1.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r5)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.f
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r1.getMaterial()
            java.lang.Integer r1 = r1.template_type
            int r1 = r1.intValue()
            r2 = 2
            r3 = 0
            if (r1 == r2) goto L4c
            r2 = 3
            if (r1 == r2) goto L4c
            r2 = 4
            if (r1 == r2) goto L4c
            r2 = 5
            if (r1 == r2) goto L4c
            android.widget.TextView r1 = r4.k
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r0[r3] = r5
            java.lang.String r5 = com.sigmob.sdk.base.d.c(r0)
            goto L5a
        L4c:
            android.widget.TextView r1 = r4.k
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r0[r3] = r5
            java.lang.String r5 = com.sigmob.sdk.base.d.a(r0)
        L5a:
            r1.setText(r5)
            goto L67
        L5e:
            r4.v = r0
            boolean r5 = r4.t
            if (r5 != 0) goto L67
            r4.a(r0)
        L67:
            return
    }

    @Override
    public void setOnTouchListener(android.view.View.OnTouchListener r2) {
            r1 = this;
            com.sigmob.sdk.splash.d r0 = r1.c
            if (r0 == 0) goto L7
            r0.setOnTouchListener(r2)
        L7:
            return
    }

    public void setShowAppLogo(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    @Override
    public void setVisibility(int r5) {
            r4 = this;
            if (r5 != 0) goto L1a
            android.widget.RelativeLayout r0 = r4.e
            r1 = 0
            r0.setVisibility(r1)
            com.sigmob.sdk.splash.d r0 = r4.c
            r0.a()
            com.sigmob.sdk.splash.c r0 = r4.g
            android.content.Context r2 = r4.d
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.f
            r0.a(r2, r1, r3)
            super.setVisibility(r5)
            goto L4c
        L1a:
            java.lang.String r5 = "splashAdBlock"
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SPLASH_ADBLOCK     // Catch: java.lang.Throwable -> L44
            int r0 = r0.getErrorCode()     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = com.czhj.sdk.common.utils.Preconditions.NoThrow.getLineInfo()     // Catch: java.lang.Throwable -> L44
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.f     // Catch: java.lang.Throwable -> L44
            com.sigmob.sdk.base.common.z.a(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L44
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L44
            r5.<init>()     // Catch: java.lang.Throwable -> L44
            java.lang.String r0 = "debug "
            r5.append(r0)     // Catch: java.lang.Throwable -> L44
            java.lang.String r0 = com.czhj.sdk.common.utils.Preconditions.NoThrow.getLineInfo()     // Catch: java.lang.Throwable -> L44
            r5.append(r0)     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L44
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L44
            goto L4c
        L44:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
        L4c:
            return
    }
}
