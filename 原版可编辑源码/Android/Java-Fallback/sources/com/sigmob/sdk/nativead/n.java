package com.sigmob.sdk.nativead;

public class n extends com.sigmob.sdk.nativead.o implements com.sigmob.sdk.nativead.h, com.sigmob.sdk.videoplayer.c {
    public static java.util.LinkedList<android.view.ViewGroup> e;
    public static long f;
    private com.sigmob.sdk.videoplayer.g h;
    private com.sigmob.sdk.nativead.k i;
    private com.sigmob.sdk.nativead.p j;
    private android.graphics.Bitmap k;
    private android.graphics.Bitmap l;
    private android.view.ViewGroup m;
    private long n;

    static class 1 {
        static final int[] a = null;

        static {
                com.sigmob.sdk.nativead.f[] r0 = com.sigmob.sdk.nativead.f.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.nativead.n.1.a = r0
                com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.sdk.nativead.n.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.sigmob.sdk.nativead.n.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.c     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    static {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            com.sigmob.sdk.nativead.n.e = r0
            r0 = 0
            com.sigmob.sdk.nativead.n.f = r0
            return
    }

    public n(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.k = r2
            r1.l = r2
            r1.m = r2
            com.sigmob.sdk.videoplayer.g r2 = r1.getVideoAdView()
            r2.setVideoAdViewListener(r1)
            android.widget.RelativeLayout r2 = new android.widget.RelativeLayout
            android.content.Context r0 = r1.getContext()
            r2.<init>(r0)
            r1.m = r2
            com.sigmob.sdk.videoplayer.g r2 = r1.getVideoAdView()
            r2.setVideoAdStatusListener(r1)
            android.content.Context r2 = r1.getContext()
            com.sigmob.sdk.base.blurkit.a.a(r2)
            return
    }

    private void a(android.app.Activity r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            if (r0 < r1) goto L11
            r0 = 5894(0x1706, float:8.259E-42)
            goto L12
        L11:
            r0 = 4
        L12:
            r3.setSystemUiVisibility(r0)
            return
    }

    private void a(android.view.ViewGroup r5) {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r5.getChildCount()
            if (r1 >= r2) goto L16
            android.view.View r2 = r5.getChildAt(r1)
            boolean r3 = r2 instanceof com.sigmob.sdk.nativead.j
            if (r3 == 0) goto L13
            com.sigmob.sdk.nativead.j r2 = (com.sigmob.sdk.nativead.j) r2
            r0 = r2
        L13:
            int r1 = r1 + 1
            goto L2
        L16:
            if (r0 == 0) goto L1b
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
        L1b:
            return
    }

    private void b(android.app.Activity r8) {
            r7 = this;
            android.content.Context r0 = r7.getContext()
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.czhj.sdk.common.utils.Dips.asIntPixels(r1, r0)
            android.content.Context r2 = r7.getContext()
            r3 = 1097859072(0x41700000, float:15.0)
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r3, r2)
            int r3 = com.sigmob.sdk.videoplayer.d.a(r8)
            com.sigmob.sdk.videoplayer.g r4 = r7.getVideoAdView()
            int r4 = r4.getVideoHeight()
            com.sigmob.sdk.videoplayer.g r5 = r7.getVideoAdView()
            int r5 = r5.getVideoWidth()
            r6 = 0
            if (r4 >= r5) goto L30
            r8.setRequestedOrientation(r6)
            int r0 = r0 + r3
            goto L31
        L30:
            int r2 = r2 + r3
        L31:
            com.sigmob.sdk.videoplayer.g r8 = r7.getVideoAdView()
            android.view.View r8 = r8.getBottomLayoutView()
            android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8
            if (r8 == 0) goto L57
            android.content.Context r3 = r7.getContext()
            int r3 = com.czhj.sdk.common.utils.Dips.asIntPixels(r1, r3)
            r8.setMargins(r3, r6, r0, r2)
            com.sigmob.sdk.videoplayer.g r2 = r7.getVideoAdView()
            android.view.View r2 = r2.getBottomLayoutView()
            r2.setLayoutParams(r8)
        L57:
            com.sigmob.sdk.videoplayer.g r8 = r7.getVideoAdView()
            android.view.View r8 = r8.getTopLayoutView()
            android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8
            if (r8 == 0) goto L87
            android.content.Context r2 = r7.getContext()
            int r1 = com.czhj.sdk.common.utils.Dips.asIntPixels(r1, r2)
            r2 = 1108082688(0x420c0000, float:35.0)
            android.content.Context r3 = r7.getContext()
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r3)
            r8.setMargins(r1, r2, r0, r6)
            com.sigmob.sdk.videoplayer.g r0 = r7.getVideoAdView()
            android.view.View r0 = r0.getTopLayoutView()
            r0.setLayoutParams(r8)
        L87:
            return
    }

    private void k() {
            r7 = this;
            com.sigmob.sdk.videoplayer.g r0 = r7.getVideoAdView()
            android.view.View r0 = r0.getBottomLayoutView()
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r1 = 1097859072(0x41700000, float:15.0)
            r2 = 1092616192(0x41200000, float:10.0)
            if (r0 == 0) goto L43
            android.content.Context r3 = r7.getContext()
            int r3 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r3)
            r4 = 0
            android.content.Context r5 = r7.getContext()
            int r4 = com.czhj.sdk.common.utils.Dips.asIntPixels(r4, r5)
            android.content.Context r5 = r7.getContext()
            int r5 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r5)
            android.content.Context r6 = r7.getContext()
            int r6 = com.czhj.sdk.common.utils.Dips.asIntPixels(r1, r6)
            r0.setMargins(r3, r4, r5, r6)
            com.sigmob.sdk.videoplayer.g r3 = r7.getVideoAdView()
            android.view.View r3 = r3.getBottomLayoutView()
            r3.setLayoutParams(r0)
        L43:
            com.sigmob.sdk.videoplayer.g r0 = r7.getVideoAdView()
            android.view.View r0 = r0.getTopLayoutView()
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            if (r0 == 0) goto L7a
            android.content.Context r3 = r7.getContext()
            int r3 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r3)
            android.content.Context r4 = r7.getContext()
            int r1 = com.czhj.sdk.common.utils.Dips.asIntPixels(r1, r4)
            android.content.Context r4 = r7.getContext()
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r4)
            r4 = 0
            r0.setMargins(r3, r1, r2, r4)
            com.sigmob.sdk.videoplayer.g r1 = r7.getVideoAdView()
            android.view.View r1 = r1.getTopLayoutView()
            r1.setLayoutParams(r0)
        L7a:
            return
    }

    private void l() {
            r3 = this;
            com.sigmob.sdk.nativead.k r0 = r3.i
            if (r0 == 0) goto L1c
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            android.view.ViewGroup r0 = r0.getAppContainer()
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r2 = 13
            r1.addRule(r2)
            com.sigmob.sdk.nativead.k r2 = r3.i
            r0.addView(r2, r1)
        L1c:
            return
    }

    private void m() {
            r4 = this;
            com.sigmob.sdk.videoplayer.g r0 = r4.getVideoAdView()
            if (r0 == 0) goto L35
            com.sigmob.sdk.videoplayer.g r0 = r4.getVideoAdView()
            android.graphics.Bitmap r0 = r0.getTextureBitmap()
            if (r0 == 0) goto L35
            com.sigmob.sdk.base.blurkit.a r1 = com.sigmob.sdk.base.blurkit.a.a()
            r2 = 25
            android.graphics.Bitmap r1 = r1.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r2 = r4.getVideoAdView()
            android.widget.ImageView r2 = r2.getBlurImageView()
            r2.setImageBitmap(r1)
            com.sigmob.sdk.videoplayer.g r2 = r4.getVideoAdView()
            android.view.ViewGroup r2 = r2.getAppContainer()
            r3 = 0
            r2.setVisibility(r3)
            r4.k = r0
            r4.l = r1
        L35:
            return
    }

    private void n() {
            r4 = this;
            com.sigmob.sdk.nativead.j r0 = r4.getAppInfoView()
            if (r0 == 0) goto L26
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r3 = -2
            r1.<init>(r2, r3)
            r2 = 1084227584(0x40a00000, float:5.0)
            android.content.Context r3 = r4.getContext()
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r3)
            r3 = 0
            r1.setMargins(r3, r3, r3, r2)
            r2 = 12
            r1.addRule(r2)
            r4.addView(r0, r1)
        L26:
            return
    }

    public int a(int r6) {
            r5 = this;
            com.sigmob.sdk.videoplayer.g r0 = r5.getVideoAdView()
            int r0 = r0.getVideoWidth()
            if (r0 != 0) goto L13
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.getAdUnit()
            double r0 = r0.getAdPercent()
            goto L2a
        L13:
            com.sigmob.sdk.videoplayer.g r0 = r5.getVideoAdView()
            int r0 = r0.getVideoWidth()
            float r0 = (float) r0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            com.sigmob.sdk.videoplayer.g r1 = r5.getVideoAdView()
            int r1 = r1.getVideoHeight()
            float r1 = (float) r1
            float r0 = r0 / r1
            double r0 = (double) r0
        L2a:
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.heightPixels
            int r2 = r2 / 2
            double r3 = (double) r6
            double r3 = r3 / r0
            int r6 = (int) r3
            if (r6 <= r2) goto L3c
            return r2
        L3c:
            return r6
    }

    @Override
    public void a() {
            r1 = this;
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            r0.a()
        Ld:
            return
    }

    @Override
    public void a(long r3, long r5) {
            r2 = this;
            com.sigmob.sdk.nativead.h r0 = r2.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r2.getSigAdVideoStatusListener()
            r0.a(r3, r5)
        Ld:
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 <= 0) goto L15
            r2.n = r5
        L15:
            return
    }

    @Override
    public void a(com.sigmob.sdk.nativead.x r4) {
            r3 = this;
            super.a(r4)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r3.getAdUnit()
            if (r4 == 0) goto L84
            r3.a(r3)
            java.io.File r0 = r4.getVideoProxyFile()
            if (r0 == 0) goto L24
            boolean r1 = r0.exists()
            if (r1 == 0) goto L24
            com.sigmob.sdk.videoplayer.g r1 = r3.getVideoAdView()
            java.lang.String r0 = r0.getAbsolutePath()
            r1.setUp(r0)
            goto L2f
        L24:
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            java.lang.String r1 = r4.getProxyVideoUrl()
            r0.setUp(r1)
        L2f:
            com.sigmob.sdk.nativead.f r0 = com.sigmob.sdk.nativead.f.a
            r3.setUIStyle(r0)
            java.lang.String r0 = r4.getVideoThumbUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L47
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            r1 = 1
            r0.b(r1)
            goto L62
        L47:
            android.content.Context r0 = r3.getContext()
            com.czhj.sdk.common.utils.ImageManager r0 = com.czhj.sdk.common.utils.ImageManager.with(r0)
            java.lang.String r1 = r4.getVideoThumbUrl()
            com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable r0 = r0.load(r1)
            com.sigmob.sdk.videoplayer.g r1 = r3.getVideoAdView()
            android.widget.ImageView r1 = r1.getThumbView()
            r0.into(r1)
        L62:
            com.sigmob.sdk.nativead.k r0 = r3.getAppView()
            java.lang.String r1 = r4.getIconUrl()
            java.lang.String r2 = r4.getTitle()
            java.lang.String r4 = r4.getCTAText()
            r0.a(r1, r2, r4)
            com.sigmob.sdk.videoplayer.g r4 = r3.getVideoAdView()
            com.sigmob.sdk.nativead.b r0 = r3.getAdConfig()
            boolean r0 = r0.n()
            r4.setSoundChange(r0)
        L84:
            return
    }

    @Override
    public boolean a(android.view.MotionEvent r2) {
            r1 = this;
            com.sigmob.sdk.nativead.k r0 = r1.i
            if (r0 == 0) goto L1d
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L1d
            com.sigmob.sdk.nativead.k r0 = r1.i
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L1d
            com.sigmob.sdk.nativead.k r0 = r1.i
            android.view.View r0 = r0.getCtaView()
            boolean r2 = com.czhj.sdk.common.utils.ViewUtil.isPointInView(r0, r2)
            return r2
        L1d:
            r2 = 0
            return r2
    }

    @Override
    public boolean b() {
            r2 = this;
            java.util.LinkedList<android.view.ViewGroup> r0 = com.sigmob.sdk.nativead.n.e
            int r0 = r0.size()
            r1 = 1
            if (r0 == 0) goto L17
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            if (r0 == 0) goto L17
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            r0.u()
            return r1
        L17:
            java.util.LinkedList<android.view.ViewGroup> r0 = com.sigmob.sdk.nativead.n.e
            int r0 = r0.size()
            if (r0 != 0) goto L35
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            if (r0 == 0) goto L35
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            int r0 = r0.x
            if (r0 == 0) goto L35
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            r0.m()
            return r1
        L35:
            r0 = 0
            return r0
    }

    @Override
    public void c() {
            r2 = this;
            super.c()
            android.graphics.Bitmap r0 = r2.k
            com.czhj.sdk.common.utils.ImageUtils.recycleBitmap(r0)
            android.graphics.Bitmap r0 = r2.l
            com.czhj.sdk.common.utils.ImageUtils.recycleBitmap(r0)
            com.sigmob.sdk.nativead.p r0 = r2.getSigVideoAdController()
            if (r0 == 0) goto L16
            r0.i()
        L16:
            com.sigmob.sdk.videoplayer.g r0 = r2.h
            if (r0 == 0) goto L2f
            r1 = 0
            r0.setVideoAdViewListener(r1)
            com.sigmob.sdk.videoplayer.g r0 = r2.h
            r0.setVideoAdStatusListener(r1)
            com.sigmob.sdk.videoplayer.g r0 = r2.h
            r0.setBackClickListener(r1)
            com.sigmob.sdk.videoplayer.g r0 = r2.h
            r0.a()
            r2.h = r1
        L2f:
            return
    }

    @Override
    public void d() {
            r1 = this;
            super.d()
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            if (r0 == 0) goto L10
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            r0.E()
        L10:
            return
    }

    @Override
    public void e() {
            r1 = this;
            super.e()
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            if (r0 == 0) goto L10
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            r0.C()
        L10:
            return
    }

    @Override
    public void f() {
            r4 = this;
            android.view.ViewGroup r0 = r4.m
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto Lf
            android.view.ViewGroup r1 = r4.m
            r0.removeView(r1)
        Lf:
            java.util.LinkedList<android.view.ViewGroup> r0 = com.sigmob.sdk.nativead.n.e
            java.lang.Object r0 = r0.getLast()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.content.Context r0 = r0.getContext()
            android.app.Activity r0 = com.sigmob.sdk.videoplayer.d.b(r0)
            if (r0 == 0) goto L2d
            android.view.Window r1 = r0.getWindow()
            android.view.View r1 = r1.getDecorView()
            r2 = 0
            r1.setSystemUiVisibility(r2)
        L2d:
            com.sigmob.sdk.videoplayer.g r1 = r4.getVideoAdView()
            int r1 = r1.getVideoHeight()
            com.sigmob.sdk.videoplayer.g r2 = r4.getVideoAdView()
            int r2 = r2.getVideoWidth()
            if (r1 >= r2) goto L45
            if (r0 == 0) goto L45
            r1 = 1
            r0.setRequestedOrientation(r1)
        L45:
            java.util.LinkedList<android.view.ViewGroup> r0 = com.sigmob.sdk.nativead.n.e
            java.lang.Object r0 = r0.getLast()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeAllViews()
            java.util.LinkedList<android.view.ViewGroup> r0 = com.sigmob.sdk.nativead.n.e
            java.lang.Object r0 = r0.getLast()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.ViewGroup r1 = r4.m
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r0.addView(r1, r2)
            java.util.LinkedList<android.view.ViewGroup> r0 = com.sigmob.sdk.nativead.n.e
            r0.pop()
            return
    }

    @Override
    public void g() {
            r5 = this;
            android.view.ViewGroup r0 = r5.m
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.ViewGroup r1 = r5.m
            r0.removeView(r1)
            java.util.LinkedList<android.view.ViewGroup> r1 = com.sigmob.sdk.nativead.n.e
            r1.add(r0)
            android.content.Context r0 = r0.getContext()
            android.app.Activity r0 = com.sigmob.sdk.videoplayer.d.b(r0)
            if (r0 == 0) goto L46
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r1 = r0.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            android.view.ViewGroup r2 = r5.m
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r4 = -1
            r3.<init>(r4, r4)
            r1.addView(r2, r3)
            com.sigmob.sdk.videoplayer.g r1 = r5.getVideoAdView()
            int r1 = r1.getVideoHeight()
            com.sigmob.sdk.videoplayer.g r2 = r5.getVideoAdView()
            int r2 = r2.getVideoWidth()
            if (r1 >= r2) goto L46
            r1 = 6
            r0.setRequestedOrientation(r1)
        L46:
            return
    }

    public com.sigmob.sdk.nativead.k getAppView() {
            r2 = this;
            com.sigmob.sdk.nativead.k r0 = r2.i
            if (r0 != 0) goto Lf
            com.sigmob.sdk.nativead.k r0 = new com.sigmob.sdk.nativead.k
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.i = r0
        Lf:
            com.sigmob.sdk.nativead.k r0 = r2.i
            return r0
    }

    public com.sigmob.sdk.nativead.h getSigAdVideoStatusListener() {
            r1 = this;
            com.sigmob.sdk.nativead.p r0 = r1.j
            if (r0 == 0) goto L9
            com.sigmob.sdk.nativead.h r0 = r0.g()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public com.sigmob.sdk.nativead.p getSigVideoAdController() {
            r2 = this;
            com.sigmob.sdk.nativead.p r0 = r2.j
            if (r0 != 0) goto Lf
            com.sigmob.sdk.nativead.q r0 = new com.sigmob.sdk.nativead.q
            com.sigmob.sdk.videoplayer.g r1 = r2.getVideoAdView()
            r0.<init>(r1)
            r2.j = r0
        Lf:
            com.sigmob.sdk.nativead.p r0 = r2.j
            return r0
    }

    public com.sigmob.sdk.videoplayer.g getVideoAdView() {
            r2 = this;
            com.sigmob.sdk.videoplayer.g r0 = r2.h
            if (r0 != 0) goto Lf
            com.sigmob.sdk.videoplayer.g r0 = new com.sigmob.sdk.videoplayer.g
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.h = r0
        Lf:
            com.sigmob.sdk.videoplayer.g r0 = r2.h
            return r0
    }

    public android.view.ViewGroup getVideoContainer() {
            r1 = this;
            android.view.ViewGroup r0 = r1.m
            return r0
    }

    @Override
    public double getVideoDuration() {
            r2 = this;
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            if (r0 == 0) goto L14
            com.sigmob.sdk.videoplayer.g r0 = r2.getVideoAdView()
            long r0 = r0.getDuration()
            float r0 = (float) r0
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r1
            double r0 = (double) r0
            return r0
        L14:
            double r0 = super.getVideoDuration()
            return r0
    }

    @Override
    public double getVideoProgress() {
            r3 = this;
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            if (r0 == 0) goto L21
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            long r0 = r0.getCurrentPositionWhenPlaying()
            float r0 = (float) r0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            com.sigmob.sdk.videoplayer.g r1 = r3.getVideoAdView()
            long r1 = r1.getDuration()
            float r1 = (float) r1
            float r0 = r0 / r1
            r1 = 1120403456(0x42c80000, float:100.0)
            float r0 = r0 / r1
            double r0 = (double) r0
            return r0
        L21:
            double r0 = super.getVideoProgress()
            return r0
    }

    public int getVideoSurferViewHeight() {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            if (r0 == 0) goto Lf
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            int r0 = r0.getVideoSurferViewHeight()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public void h() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.sigmob.sdk.nativead.n.f
            long r0 = r0 - r2
            r2 = 2000(0x7d0, double:9.88E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L28
            com.sigmob.sdk.videoplayer.g r0 = r4.getVideoAdView()
            int r0 = r0.w
            r1 = 4
            if (r0 != r1) goto L28
            com.sigmob.sdk.videoplayer.g r0 = r4.getVideoAdView()
            int r0 = r0.x
            r1 = 1
            if (r0 != r1) goto L28
            long r0 = java.lang.System.currentTimeMillis()
            com.sigmob.sdk.nativead.n.f = r0
            r4.b()
        L28:
            return
    }

    @Override
    public void i() {
            r0 = this;
            super.i()
            return
    }

    @Override
    public void j() {
            r1 = this;
            super.j()
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            if (r0 == 0) goto L10
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            r0.D()
        L10:
            return
    }

    @Override
    public void onVideoCompleted() {
            r3 = this;
            com.sigmob.sdk.nativead.h r0 = r3.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r3.getSigAdVideoStatusListener()
            r0.onVideoCompleted()
        Ld:
            r3.m()
            com.sigmob.sdk.nativead.f r0 = r3.d
            com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.a
            if (r0 != r1) goto L36
            com.sigmob.sdk.nativead.k r0 = r3.getAppView()
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L23
            r3.l()
        L23:
            com.sigmob.sdk.nativead.k r0 = r3.getAppView()
            r1 = 0
            r0.setVisibility(r1)
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r1 = com.sigmob.sdk.videoplayer.f.b
            r2 = 1
            r0.a(r1, r2)
            goto L41
        L36:
            com.sigmob.sdk.nativead.f r0 = r3.d
            com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.b
            if (r0 != r1) goto L41
            com.sigmob.sdk.nativead.f r0 = com.sigmob.sdk.nativead.f.c
            r3.setUIStyle(r0)
        L41:
            return
    }

    @Override
    public void onVideoError(com.sigmob.windad.WindAdError r2) {
            r1 = this;
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            r0.onVideoError(r2)
        Ld:
            return
    }

    @Override
    public void onVideoLoad() {
            r1 = this;
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            r0.onVideoLoad()
        Ld:
            return
    }

    @Override
    public void onVideoPause() {
            r1 = this;
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            r0.onVideoPause()
        Ld:
            return
    }

    @Override
    public void onVideoResume() {
            r1 = this;
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.h r0 = r1.getSigAdVideoStatusListener()
            r0.onVideoResume()
        Ld:
            return
    }

    @Override
    public void onVideoStart() {
            r3 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.getAdUnit()
            if (r0 != 0) goto L7
            return
        L7:
            com.sigmob.sdk.nativead.k r0 = r3.i
            if (r0 == 0) goto L1a
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            com.sigmob.sdk.videoplayer.g r0 = r3.getVideoAdView()
            android.view.ViewGroup r0 = r0.getAppContainer()
            r1 = 4
            r0.setVisibility(r1)
        L1a:
            android.graphics.Bitmap r0 = r3.k
            com.czhj.sdk.common.utils.ImageUtils.recycleBitmap(r0)
            android.graphics.Bitmap r0 = r3.l
            com.czhj.sdk.common.utils.ImageUtils.recycleBitmap(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.getAdUnit()
            if (r0 == 0) goto L44
            com.sigmob.sdk.videoplayer.g r1 = r3.getVideoAdView()
            int r1 = r1.getVideoWidth()
            float r1 = (float) r1
            r2 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 * r2
            com.sigmob.sdk.videoplayer.g r2 = r3.getVideoAdView()
            int r2 = r2.getVideoHeight()
            float r2 = (float) r2
            float r1 = r1 / r2
            double r1 = (double) r1
            r0.updateRealAdPercent(r1)
        L44:
            com.sigmob.sdk.nativead.f r0 = r3.d
            com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.c
            if (r0 != r1) goto L4d
            com.sigmob.sdk.nativead.f r0 = com.sigmob.sdk.nativead.f.b
            goto L4f
        L4d:
            com.sigmob.sdk.nativead.f r0 = r3.d
        L4f:
            r3.setUIStyle(r0)
            com.sigmob.sdk.nativead.h r0 = r3.getSigAdVideoStatusListener()
            if (r0 == 0) goto L5f
            com.sigmob.sdk.nativead.h r0 = r3.getSigAdVideoStatusListener()
            r0.onVideoStart()
        L5f:
            return
    }

    public void setBackClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.videoplayer.g r0 = r1.getVideoAdView()
            r0.setBackClickListener(r2)
        Ld:
            return
    }

    @Override
    public void setUIStyle(com.sigmob.sdk.nativead.f r6) {
            r5 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.getAdUnit()
            if (r0 != 0) goto L7
            return
        L7:
            super.setUIStyle(r6)
            int[] r0 = com.sigmob.sdk.nativead.n.1.a
            int r6 = r6.ordinal()
            r6 = r0[r6]
            r0 = -1
            r1 = 1
            r2 = 0
            if (r6 == r1) goto Lde
            r3 = 2
            r4 = 4
            if (r6 == r3) goto L65
            r0 = 3
            if (r6 == r0) goto L20
            goto L184
        L20:
            com.sigmob.sdk.nativead.k r6 = r5.i
            android.view.ViewParent r6 = r6.getParent()
            if (r6 == 0) goto L2d
            com.sigmob.sdk.nativead.k r6 = r5.i
            r6.setVisibility(r4)
        L2d:
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.a
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.c
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.d
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.b
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.e
            r6.a(r0, r1)
        L5a:
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.f
            r6.a(r0, r1)
            goto L184
        L65:
            com.sigmob.sdk.nativead.k r6 = r5.i
            android.view.ViewParent r6 = r6.getParent()
            if (r6 == 0) goto L72
            com.sigmob.sdk.nativead.k r6 = r5.i
            r6.setVisibility(r4)
        L72:
            android.view.ViewGroup r6 = r5.m
            int r6 = r6.getChildCount()
            if (r6 <= 0) goto L7f
            android.view.ViewGroup r6 = r5.m
            r6.removeAllViews()
        L7f:
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            r5.removeView(r6)
            android.view.ViewGroup r6 = r5.m
            com.sigmob.sdk.videoplayer.g r3 = r5.getVideoAdView()
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r0, r0)
            r6.addView(r3, r4)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.nativead.b r0 = r5.getAdConfig()
            boolean r0 = r0.o()
            if (r0 != 0) goto Lab
            boolean r0 = com.sigmob.sdk.b.c()
            if (r0 == 0) goto La9
            goto Lab
        La9:
            r0 = r2
            goto Lac
        Lab:
            r0 = r1
        Lac:
            r6.setSoundChange(r0)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.a
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.c
            r6.a(r0, r1)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.d
            r6.a(r0, r1)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.e
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.b
            r6.a(r0, r2)
            goto L5a
        Lde:
            android.view.ViewGroup r6 = r5.m
            r6.removeAllViews()
            android.view.ViewGroup r6 = r5.m
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r6)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r6)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r0, r0)
            r5.addView(r6, r3)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            int r6 = r6.w
            if (r6 != 0) goto L10d
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.a
            r6.a(r0, r1)
            goto L116
        L10d:
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.a
            r6.a(r0, r2)
        L116:
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.c
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.d
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.e
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.b
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.f
            r6.a(r0, r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.nativead.b r0 = r5.getAdConfig()
            boolean r0 = r0.n()
            r6.setSoundChange(r0)
            com.sigmob.sdk.nativead.k r6 = r5.i
            if (r6 == 0) goto L181
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            int r6 = r6.w
            r0 = 6
            if (r6 == r0) goto L168
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            int r6 = r6.w
            r0 = 7
            if (r6 != r0) goto L181
        L168:
            com.sigmob.sdk.nativead.k r6 = r5.i
            android.view.ViewParent r6 = r6.getParent()
            if (r6 != 0) goto L173
            r5.l()
        L173:
            com.sigmob.sdk.nativead.k r6 = r5.i
            r6.setVisibility(r2)
            com.sigmob.sdk.videoplayer.g r6 = r5.getVideoAdView()
            com.sigmob.sdk.videoplayer.f r0 = com.sigmob.sdk.videoplayer.f.b
            r6.a(r0, r1)
        L181:
            r5.n()
        L184:
            return
    }
}
