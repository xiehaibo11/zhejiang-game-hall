package com.sigmob.sdk.nativead;

public class w implements android.view.View.OnClickListener, android.view.View.OnTouchListener, com.sigmob.sdk.nativead.c.a, com.sigmob.sdk.nativead.l.a, com.sigmob.sdk.nativead.x, com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback {
    private static final int d = 1;
    private static final int e = 2;
    private static final int f = 3;
    private static java.util.Map<java.lang.Integer, java.lang.Integer> g;
    private int A;
    private boolean B;
    private boolean C;
    private boolean D;
    private boolean E;
    private boolean F;
    private java.util.List<android.view.View> G;
    private long H;
    private java.util.List<android.view.View> I;
    private android.view.View J;
    private boolean K;
    private com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback L;
    protected com.sigmob.windad.natives.WindNativeAdData a;
    protected com.sigmob.sdk.base.models.BaseAdUnit b;
    protected com.sigmob.sdk.nativead.g c;
    private com.sigmob.sdk.nativead.n h;
    private com.sigmob.sdk.nativead.l i;
    private java.util.List<android.view.View> j;
    private java.util.HashSet<android.view.View> k;
    private com.sigmob.sdk.nativead.c l;
    private com.sigmob.sdk.nativead.j m;
    private android.view.MotionEvent n;
    private com.sigmob.sdk.nativead.b o;
    private com.sigmob.windad.natives.NativeADEventListener p;
    private boolean q;
    private boolean r;
    private android.view.ViewGroup s;
    private android.view.ViewGroup.LayoutParams t;
    private android.graphics.Bitmap u;
    private com.sigmob.sdk.base.views.q v;
    private boolean w;
    private com.sigmob.sdk.nativead.r x;
    private boolean y;
    private boolean z;








    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.sigmob.sdk.nativead.w.g = r0
            return
    }

    public w() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.k = r0
            r0 = 1
            r1.B = r0
            r0 = 0
            r1.C = r0
            return
    }

    static java.util.Map G() {
            java.util.Map<java.lang.Integer, java.lang.Integer> r0 = com.sigmob.sdk.nativead.w.g
            return r0
    }

    private android.content.Context H() {
            r1 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            return r0
    }

    private void I() {
            r3 = this;
            android.view.View r0 = r3.J()     // Catch: java.lang.Exception -> L46
            android.view.View r0 = com.czhj.sdk.common.utils.ViewUtil.getRootViewFromView(r0)     // Catch: java.lang.Exception -> L46
            com.sigmob.sdk.base.views.q r1 = r3.v     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L23
            if (r0 == 0) goto L23
            com.sigmob.sdk.base.views.q r1 = new com.sigmob.sdk.base.views.q     // Catch: java.lang.Exception -> L46
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.Exception -> L46
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b     // Catch: java.lang.Exception -> L46
            r1.<init>(r0, r2)     // Catch: java.lang.Exception -> L46
            r3.v = r1     // Catch: java.lang.Exception -> L46
            com.sigmob.sdk.nativead.w$7 r0 = new com.sigmob.sdk.nativead.w$7     // Catch: java.lang.Exception -> L46
            r0.<init>(r3)     // Catch: java.lang.Exception -> L46
            r1.a(r0)     // Catch: java.lang.Exception -> L46
        L23:
            com.sigmob.sdk.base.views.q r0 = r3.v     // Catch: java.lang.Exception -> L46
            if (r0 == 0) goto L5f
            com.sigmob.sdk.base.views.q r0 = r3.v     // Catch: java.lang.Exception -> L46
            boolean r0 = r0.a()     // Catch: java.lang.Exception -> L46
            if (r0 == 0) goto L5f
            boolean r0 = r3.w     // Catch: java.lang.Exception -> L46
            if (r0 != 0) goto L5f
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.b     // Catch: java.lang.Exception -> L46
            com.sigmob.sdk.base.models.ClickCommon r0 = r0.getClickCommon()     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "appinfo"
            r0.click_area = r1     // Catch: java.lang.Exception -> L46
            com.sigmob.sdk.base.views.q r0 = r3.v     // Catch: java.lang.Exception -> L46
            r0.show()     // Catch: java.lang.Exception -> L46
            r0 = 1
            r3.w = r0     // Catch: java.lang.Exception -> L46
            goto L5f
        L46:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "openFourElements fail:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L5f:
            return
    }

    private android.view.View J() {
            r1 = this;
            com.sigmob.sdk.nativead.l r0 = r1.i
            if (r0 == 0) goto Ld
            android.view.ViewParent r0 = r0.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto Ld
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private boolean K() {
            r4 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.b
            com.sigmob.sdk.base.models.rtb.Ad r0 = r0.getAd()
            java.lang.Integer r0 = r0.expired_time
            int r0 = r0.intValue()
            if (r0 == 0) goto L2a
            long r0 = java.lang.System.currentTimeMillis()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.b
            long r2 = r2.getCreate_time()
            long r0 = r0 - r2
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.b
            java.lang.Integer r2 = r2.getAdExpiredTime()
            int r2 = r2.intValue()
            long r2 = (long) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L2a
            r0 = 1
            goto L2b
        L2a:
            r0 = 0
        L2b:
            return r0
    }

    private boolean L() {
            r1 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.b
            java.lang.String r0 = r0.getHtmlData()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.b
            java.lang.String r0 = r0.getHtmlUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L19
            goto L1b
        L19:
            r0 = 0
            goto L1c
        L1b:
            r0 = 1
        L1c:
            return r0
    }

    static android.graphics.Bitmap a(com.sigmob.sdk.nativead.w r0, android.graphics.Bitmap r1) {
            r0.u = r1
            return r1
    }

    private android.view.View a(java.util.HashSet<android.view.View> r4, android.view.MotionEvent r5) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r4.next()
            android.view.View r1 = (android.view.View) r1
            boolean r2 = com.czhj.sdk.common.utils.ViewUtil.isPointInView(r1, r5)
            if (r2 == 0) goto L8
            return r1
        L1b:
            return r0
    }

    private android.view.View a(java.util.List<android.view.View> r4, android.view.MotionEvent r5) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r4.next()
            android.view.View r1 = (android.view.View) r1
            boolean r2 = com.czhj.sdk.common.utils.ViewUtil.isPointInView(r1, r5)
            if (r2 == 0) goto L8
            return r1
        L1b:
            return r0
    }

    static com.sigmob.sdk.base.views.q a(com.sigmob.sdk.nativead.w r0, com.sigmob.sdk.base.views.q r1) {
            r0.v = r1
            return r1
    }

    private com.sigmob.sdk.nativead.n a(android.view.ViewGroup r4) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r4.getChildAt(r0)
            boolean r2 = r1 instanceof com.sigmob.sdk.nativead.n
            if (r2 == 0) goto L12
            com.sigmob.sdk.nativead.n r1 = (com.sigmob.sdk.nativead.n) r1
            return r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            r4 = 0
            return r4
    }

    static com.sigmob.sdk.nativead.n a(com.sigmob.sdk.nativead.w r0) {
            com.sigmob.sdk.nativead.n r0 = r0.h
            return r0
    }

    private void a(int r8, android.view.MotionEvent r9) {
            r7 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r7.b
            com.sigmob.sdk.base.common.f.b(r0)
            android.view.View r0 = r7.J()
            com.czhj.sdk.common.utils.TouchLocation r4 = com.czhj.sdk.common.utils.TouchLocation.getTouchLocation(r0, r9)
            android.view.View r9 = r7.J()
            android.view.MotionEvent r0 = r7.n
            com.czhj.sdk.common.utils.TouchLocation r3 = com.czhj.sdk.common.utils.TouchLocation.getTouchLocation(r9, r0)
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            r9.down = r3
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            r9.up = r3
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            java.lang.String r0 = "preview"
            r9.click_scene = r0
            r9 = 1
            r0 = 0
            if (r8 == r9) goto Lad
            r1 = 2
            if (r8 == r1) goto L3e
            r2 = 3
            if (r8 == r2) goto L3c
            goto Lac
        L3c:
            r8 = r0
            goto L64
        L3e:
            boolean r8 = r7.L()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r2 = r2.getClickCommon()
            java.lang.String r5 = "material"
            r2.click_area = r5
            if (r8 == 0) goto L63
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r8 = r8.getClickCommon()
            r8.is_final_click = r0
            com.sigmob.sdk.base.common.ab r8 = r7.j()
            com.sigmob.sdk.base.common.a r9 = com.sigmob.sdk.base.common.a.c
            r8.a(r9, r0)
            r7.y()
            return
        L63:
            r8 = r9
        L64:
            if (r8 != 0) goto L70
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r8 = r8.getClickCommon()
            java.lang.String r2 = "btn"
            r8.click_area = r2
        L70:
            com.sigmob.windad.natives.WindNativeAdData r8 = r7.a
            int r8 = r8.getAdPatternType()
            if (r8 != r9) goto L90
        L78:
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r8 = r8.getClickCommon()
            r8.is_final_click = r9
            com.sigmob.sdk.nativead.b r1 = r7.x()
            android.content.Context r2 = r7.H()
            com.sigmob.sdk.base.a r5 = com.sigmob.sdk.base.a.e
            com.sigmob.sdk.base.models.BaseAdUnit r6 = r7.b
            r1.a(r2, r3, r4, r5, r6)
            goto Lac
        L90:
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            int r8 = r8.getInteractionType()
            if (r8 != r1) goto L78
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r8 = r8.getClickCommon()
            r8.is_final_click = r0
            com.sigmob.sdk.base.common.ab r8 = r7.j()
            com.sigmob.sdk.base.common.a r9 = com.sigmob.sdk.base.common.a.c
            r8.a(r9, r0)
            r7.I()
        Lac:
            return
        Lad:
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r8 = r8.getClickCommon()
            java.lang.String r9 = "appinfo"
            r8.click_area = r9
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r7.b
            com.sigmob.sdk.base.models.ClickCommon r8 = r8.getClickCommon()
            r8.is_final_click = r0
            com.sigmob.sdk.base.common.ab r8 = r7.j()
            com.sigmob.sdk.base.common.a r9 = com.sigmob.sdk.base.common.a.c
            r8.a(r9, r0)
            r7.I()
            return
    }

    public static void a(android.view.View r1, int r2, int r3) {
            android.view.ViewParent r0 = r1.getParent()
            boolean r0 = r0 instanceof android.widget.FrameLayout
            if (r0 == 0) goto L19
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.width = r2
            r0.height = r3
        L12:
            r1.setLayoutParams(r0)
            r1.requestLayout()
            goto L3f
        L19:
            android.view.ViewParent r0 = r1.getParent()
            boolean r0 = r0 instanceof android.widget.RelativeLayout
            if (r0 == 0) goto L2c
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r0.width = r2
            r0.height = r3
            goto L12
        L2c:
            android.view.ViewParent r0 = r1.getParent()
            boolean r0 = r0 instanceof android.widget.LinearLayout
            if (r0 == 0) goto L3f
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r0 = (android.widget.LinearLayout.LayoutParams) r0
            r0.width = r2
            r0.height = r3
            goto L12
        L3f:
            return
    }

    private boolean a(android.view.MotionEvent r2) {
            r1 = this;
            com.sigmob.sdk.nativead.n r0 = r1.h
            if (r0 == 0) goto L9
            boolean r2 = r0.a(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    static boolean a(com.sigmob.sdk.nativead.w r0, boolean r1) {
            r0.z = r1
            return r1
    }

    static android.view.View b(com.sigmob.sdk.nativead.w r0) {
            android.view.View r0 = r0.J()
            return r0
    }

    private com.sigmob.sdk.nativead.l b(android.view.ViewGroup r4) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r4.getChildAt(r0)
            boolean r2 = r1 instanceof com.sigmob.sdk.nativead.l
            if (r2 == 0) goto L12
            com.sigmob.sdk.nativead.l r1 = (com.sigmob.sdk.nativead.l) r1
            return r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            r4 = 0
            return r4
    }

    static boolean b(com.sigmob.sdk.nativead.w r0, boolean r1) {
            r0.C = r1
            return r1
    }

    static boolean c(com.sigmob.sdk.nativead.w r0) {
            boolean r0 = r0.r
            return r0
    }

    static boolean c(com.sigmob.sdk.nativead.w r0, boolean r1) {
            r0.B = r1
            return r1
    }

    static boolean d(com.sigmob.sdk.nativead.w r0) {
            boolean r0 = r0.B
            return r0
    }

    static boolean d(com.sigmob.sdk.nativead.w r0, boolean r1) {
            r0.w = r1
            return r1
    }

    static com.sigmob.sdk.nativead.r e(com.sigmob.sdk.nativead.w r0) {
            com.sigmob.sdk.nativead.r r0 = r0.x
            return r0
    }

    static com.sigmob.windad.natives.NativeADEventListener f(com.sigmob.sdk.nativead.w r0) {
            com.sigmob.windad.natives.NativeADEventListener r0 = r0.p
            return r0
    }

    static com.sigmob.sdk.base.views.q g(com.sigmob.sdk.nativead.w r0) {
            com.sigmob.sdk.base.views.q r0 = r0.v
            return r0
    }

    public android.graphics.Bitmap A() {
            r1 = this;
            android.graphics.Bitmap r0 = r1.u
            return r0
    }

    public void B() {
            r1 = this;
            boolean r0 = r1.r
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.nativead.p r0 = r1.r()
            if (r0 == 0) goto Le
            r0.c()
        Le:
            return
    }

    public void C() {
            r2 = this;
            boolean r0 = r2.r
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.nativead.p r0 = r2.r()
            if (r0 == 0) goto L11
            r1 = 1
            r2.z = r1
            r0.a()
        L11:
            return
    }

    public void D() {
            r3 = this;
            android.view.ViewGroup r0 = r3.s
            if (r0 == 0) goto L3e
            com.sigmob.sdk.nativead.n r0 = r3.h
            if (r0 == 0) goto L3e
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L15
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.sigmob.sdk.nativead.n r1 = r3.h
            r0.removeView(r1)
        L15:
            android.view.ViewGroup r0 = r3.s
            r0.removeAllViews()
            android.view.ViewGroup$LayoutParams r0 = r3.t
            if (r0 == 0) goto L26
            android.view.ViewGroup r1 = r3.s
            com.sigmob.sdk.nativead.n r2 = r3.h
            r1.addView(r2, r0)
            goto L2d
        L26:
            android.view.ViewGroup r0 = r3.s
            com.sigmob.sdk.nativead.n r1 = r3.h
            r0.addView(r1)
        L2d:
            java.util.HashSet<android.view.View> r0 = r3.k
            com.sigmob.sdk.nativead.n r1 = r3.h
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L3e
            java.util.HashSet<android.view.View> r0 = r3.k
            com.sigmob.sdk.nativead.n r1 = r3.h
            r0.add(r1)
        L3e:
            r0 = 0
            r3.s = r0
            r3.t = r0
            return
    }

    public void E() {
            r1 = this;
            boolean r0 = r1.r
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.nativead.p r0 = r1.r()
            if (r0 == 0) goto Le
            r0.b()
        Le:
            return
    }

    public void F() {
            r1 = this;
            boolean r0 = r1.r
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.nativead.p r0 = r1.r()
            if (r0 == 0) goto Le
            r0.d()
        Le:
            return
    }

    @Override
    public void a() {
            r3 = this;
            com.sigmob.sdk.nativead.b r0 = r3.x()
            if (r0 == 0) goto L13
            com.sigmob.sdk.nativead.b r0 = r3.x()
            android.content.Context r1 = r3.H()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r0.a(r1, r2)
        L13:
            return
    }

    public void a(android.view.View r4, java.util.List<android.view.View> r5, java.util.List<android.view.View> r6, android.view.View r7, com.sigmob.windad.natives.NativeADEventListener r8) {
            r3 = this;
            if (r4 != 0) goto La
            if (r8 == 0) goto L9
            com.sigmob.windad.WindAdError r4 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL
            r8.onAdError(r4)
        L9:
            return
        La:
            boolean r0 = r4 instanceof android.view.ViewGroup
            if (r0 != 0) goto L16
            if (r8 == 0) goto L15
            com.sigmob.windad.WindAdError r4 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP
            r8.onAdError(r4)
        L15:
            return
        L16:
            if (r7 == 0) goto L34
            com.sigmob.sdk.nativead.r r0 = r3.x
            if (r0 != 0) goto L2c
            com.sigmob.sdk.nativead.a r0 = new com.sigmob.sdk.nativead.a
            android.content.Context r1 = r7.getContext()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r0.<init>(r1, r2)
            r3.x = r0
            r0.a(r3)
        L2c:
            com.sigmob.sdk.nativead.w$4 r0 = new com.sigmob.sdk.nativead.w$4
            r0.<init>(r3)
            r7.setOnTouchListener(r0)
        L34:
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            com.sigmob.sdk.nativead.b r7 = r3.x()
            com.sigmob.sdk.nativead.w$5 r0 = new com.sigmob.sdk.nativead.w$5
            r0.<init>(r3)
            r7.a(r0)
            r3.j = r6
            java.util.List<android.view.View> r6 = r3.I
            if (r6 == 0) goto L4d
            java.util.HashSet<android.view.View> r7 = r3.k
            r7.removeAll(r6)
        L4d:
            r3.I = r5
            r3.p = r8
            com.sigmob.sdk.nativead.c r5 = r3.o()
            r6 = 0
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r3.b
            r5.a(r6, r7)
            com.sigmob.sdk.base.common.f r5 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r6 = r3.b
            com.sigmob.sdk.nativead.w$6 r7 = new com.sigmob.sdk.nativead.w$6
            r7.<init>(r3)
            r5.a(r6, r7)
            com.sigmob.sdk.nativead.l r5 = r3.i
            r6 = 0
            if (r5 == 0) goto L7c
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r5)
            com.sigmob.sdk.nativead.l r5 = r3.i
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams
            r7.<init>(r6, r6)
        L78:
            r4.addView(r5, r7)
            goto L95
        L7c:
            com.sigmob.sdk.nativead.l r5 = r3.b(r4)
            r3.i = r5
            if (r5 != 0) goto L95
            com.sigmob.sdk.nativead.l r5 = new com.sigmob.sdk.nativead.l
            android.content.Context r7 = r3.H()
            r5.<init>(r7)
            r3.i = r5
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams
            r7.<init>(r6, r6)
            goto L78
        L95:
            java.util.HashSet<android.view.View> r4 = r3.k
            java.util.List<android.view.View> r5 = r3.I
            r4.addAll(r5)
            com.sigmob.sdk.nativead.l r4 = r3.i
            r4.setAdVisibilityStatusChangeListener(r3)
            com.sigmob.sdk.nativead.l r4 = r3.i
            com.sigmob.sdk.nativead.b r5 = r3.x()
            int r5 = r5.s()
            com.sigmob.sdk.nativead.b r6 = r3.x()
            int r6 = r6.t()
            r4.a(r5, r6)
            return
    }

    public void a(android.view.ViewGroup r4, com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener r5) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            com.sigmob.sdk.nativead.n r0 = r3.a(r4)
            if (r0 == 0) goto Lc
            r3.h = r0
            goto L1c
        Lc:
            com.sigmob.sdk.nativead.n r1 = r3.h
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r1)
            com.sigmob.sdk.nativead.n r1 = new com.sigmob.sdk.nativead.n
            android.content.Context r2 = r4.getContext()
            r1.<init>(r2)
            r3.h = r1
        L1c:
            com.sigmob.sdk.nativead.w$2 r1 = new com.sigmob.sdk.nativead.w$2
            r1.<init>(r3, r4, r0)
            r4.post(r1)
            java.util.HashSet<android.view.View> r4 = r3.k
            com.sigmob.sdk.nativead.n r0 = r3.h
            boolean r4 = r4.contains(r0)
            if (r4 != 0) goto L35
            java.util.HashSet<android.view.View> r4 = r3.k
            com.sigmob.sdk.nativead.n r0 = r3.h
            r4.add(r0)
        L35:
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r3.b
            com.sigmob.sdk.nativead.n r0 = r3.h
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.getAdUnit()
            boolean r4 = r4.equals(r0)
            if (r4 != 0) goto L48
            com.sigmob.sdk.nativead.n r4 = r3.h
            r4.a(r3)
        L48:
            com.sigmob.sdk.nativead.n r4 = r3.h
            com.sigmob.sdk.nativead.p r4 = r4.getSigVideoAdController()
            if (r4 == 0) goto L58
            com.sigmob.sdk.nativead.w$3 r0 = new com.sigmob.sdk.nativead.w$3
            r0.<init>(r3, r5, r4)
            r4.a(r0)
        L58:
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r2, com.sigmob.windad.natives.WindNativeAdData r3) {
            r1 = this;
            r1.b = r2
            r1.a = r3
            com.czhj.sdk.common.utils.ImageManager r2 = com.sigmob.sdk.base.common.f.a()
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r1.k()
            java.lang.String r3 = r3.getAd_source_logo()
            com.sigmob.sdk.nativead.w$1 r0 = new com.sigmob.sdk.nativead.w$1
            r0.<init>(r1)
            r2.getBitmap(r3, r0)
            return
    }

    public void a(com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public void a(java.util.HashSet<android.view.View> r3, android.view.View.OnTouchListener r4) {
            r2 = this;
            if (r3 == 0) goto L1d
            java.util.Iterator r3 = r3.iterator()
        L6:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r3.next()
            android.view.View r0 = (android.view.View) r0
            r1 = 0
            r0.setOnClickListener(r1)
            r0.setOnTouchListener(r1)
            r0.setOnTouchListener(r4)
            goto L6
        L1d:
            return
    }

    public void a(java.util.List<android.widget.ImageView> r7, int r8) {
            r6 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.k()
            java.util.List r0 = r0.getImageUrlList()
            if (r7 == 0) goto L60
            if (r0 == 0) goto L60
            int r1 = r7.size()
            int r2 = r0.size()
            int r1 = java.lang.Math.min(r1, r2)
            r2 = 0
        L19:
            if (r2 >= r1) goto L60
            java.lang.Object r3 = r0.get(r2)
            com.sigmob.sdk.base.models.SigImage r3 = (com.sigmob.sdk.base.models.SigImage) r3
            java.lang.Object r4 = r7.get(r2)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            java.util.HashSet<android.view.View> r5 = r6.k
            boolean r5 = r5.contains(r4)
            if (r5 != 0) goto L34
            java.util.HashSet<android.view.View> r5 = r6.k
            r5.add(r4)
        L34:
            java.util.List<android.view.View> r5 = r6.G
            if (r5 != 0) goto L40
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r6.G = r5
            goto L43
        L40:
            r5.clear()
        L43:
            java.util.List<android.view.View> r5 = r6.G
            r5.add(r4)
            com.czhj.sdk.common.utils.ImageManager r5 = com.sigmob.sdk.base.common.f.a()
            java.lang.String r3 = r3.imageUrl
            com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable r3 = r5.load(r3)
            com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable r3 = r3.placeholder(r8)
            com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable r3 = r3.error(r8)
            r3.into(r4)
            int r2 = r2 + 1
            goto L19
        L60:
            return
    }

    public void a(java.util.List<android.view.View> r3, android.view.View.OnTouchListener r4) {
            r2 = this;
            if (r3 == 0) goto L1d
            java.util.Iterator r3 = r3.iterator()
        L6:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r3.next()
            android.view.View r0 = (android.view.View) r0
            r1 = 0
            r0.setOnClickListener(r1)
            r0.setOnTouchListener(r1)
            r0.setOnTouchListener(r4)
            goto L6
        L1d:
            return
    }

    @Override
    public void a(boolean r4) {
            r3 = this;
            boolean r0 = r3.y
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r3.r
            if (r0 != 0) goto L25
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.b
            r0.d(r1)
            if (r4 == 0) goto L25
            com.sigmob.windad.natives.NativeADEventListener r0 = r3.p
            if (r0 == 0) goto L1b
            r0.onAdExposed()
        L1b:
            com.sigmob.sdk.base.common.ab r0 = r3.j()
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.O
            r2 = 0
            r0.a(r1, r2)
        L25:
            r3.y = r4
            return
    }

    @Override
    public void b() {
            r3 = this;
            com.sigmob.sdk.nativead.b r0 = r3.x()
            if (r0 == 0) goto L13
            com.sigmob.sdk.nativead.b r0 = r3.x()
            android.content.Context r1 = r3.H()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r0.b(r1, r2)
        L13:
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            com.sigmob.sdk.nativead.n r3 = r2.h
            if (r3 == 0) goto L33
            android.view.ViewParent r3 = r3.getParent()
            android.view.View r3 = (android.view.View) r3
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "visibilityStatusChange() called with: isVisible = ["
            r0.append(r1)
            int r1 = r3.width
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r3 = r3.height
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
        L33:
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void b(boolean r2) {
            r1 = this;
            boolean r0 = r1.r
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.nativead.p r0 = r1.r()
            if (r0 == 0) goto Le
            r0.a(r2)
        Le:
            return
    }

    @Override
    public void c() {
            r3 = this;
            java.lang.String r0 = "----------onAdDetailShow----------"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.nativead.b r0 = r3.x()
            if (r0 == 0) goto L18
            com.sigmob.sdk.nativead.b r0 = r3.x()
            android.content.Context r1 = r3.H()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r0.c(r1, r2)
        L18:
            r0 = 1
            r3.r = r0
            com.sigmob.windad.natives.NativeADEventListener r0 = r3.p
            if (r0 == 0) goto L22
            r0.onAdDetailShow()
        L22:
            return
    }

    @Override
    public void c(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            return
    }

    @Override
    public void d() {
            r0 = this;
            return
    }

    @Override
    public void d(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            return
    }

    @Override
    public void e() {
            r4 = this;
            r0 = 0
            r4.r = r0
            com.sigmob.windad.natives.NativeADEventListener r1 = r4.p
            if (r1 == 0) goto La
            r1.onAdDetailDismiss()
        La:
            com.sigmob.sdk.nativead.b r1 = r4.x()
            if (r1 == 0) goto L1d
            com.sigmob.sdk.nativead.b r1 = r4.x()
            android.content.Context r2 = r4.H()
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.b
            r1.d(r2, r3)
        L1d:
            r4.D()
            com.sigmob.sdk.nativead.j r1 = r4.m
            if (r1 == 0) goto L27
            r1.setVisibility(r0)
        L27:
            com.sigmob.sdk.nativead.c r0 = r4.l
            if (r0 == 0) goto L30
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.b
            r0.b(r1)
        L30:
            return
    }

    @Override
    public void e(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            return
    }

    @Override
    public void f() {
            r1 = this;
            boolean r0 = r1.D
            if (r0 == 0) goto L13
            com.sigmob.sdk.nativead.p r0 = r1.r()
            r0.a()
            java.lang.String r0 = "-----------onAdViewPauseImpression---------"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r1.D = r0
        L13:
            return
    }

    @Override
    public void g() {
            r1 = this;
            com.sigmob.sdk.nativead.n r0 = r1.h
            if (r0 == 0) goto L2f
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L2f
            boolean r0 = r1.r
            if (r0 != 0) goto L2f
            boolean r0 = r1.D
            if (r0 != 0) goto L2f
            boolean r0 = r1.z
            if (r0 != 0) goto L2f
            com.sigmob.sdk.nativead.b r0 = r1.x()
            boolean r0 = r0.u()
            if (r0 == 0) goto L2f
            r0 = 1
            r1.D = r0
            com.sigmob.sdk.nativead.p r0 = r1.r()
            r0.c()
            java.lang.String r0 = "------------onAdViewStartImpression------------"
            com.czhj.sdk.logger.SigmobLog.d(r0)
        L2f:
            return
    }

    @Override
    public void h() {
            r3 = this;
            boolean r0 = r3.r
            if (r0 != 0) goto L61
            android.content.Context r0 = r3.H()
            if (r0 == 0) goto L61
            boolean r0 = r3.E
            if (r0 == 0) goto L61
            java.util.HashSet<android.view.View> r0 = r3.k
            if (r0 == 0) goto L15
            r0.clear()
        L15:
            r0 = 0
            r3.E = r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "------------onAdViewRemoved----------"
            r1.append(r2)
            int r2 = r3.hashCode()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            com.sigmob.sdk.nativead.p r1 = r3.r()
            if (r1 == 0) goto L39
            r1.a()
        L39:
            r3.D = r0
            com.sigmob.sdk.nativead.l r1 = r3.i
            if (r1 == 0) goto L47
            boolean r1 = r1.hasWindowFocus()
            if (r1 == 0) goto L47
            r3.y = r0
        L47:
            com.sigmob.sdk.base.common.ab r1 = r3.j()
            if (r1 == 0) goto L52
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.S
            r1.a(r2, r0)
        L52:
            boolean r2 = r3.B
            if (r2 != 0) goto L61
            boolean r2 = r3.C
            if (r2 != 0) goto L61
            if (r1 == 0) goto L61
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.T
            r1.a(r2, r0)
        L61:
            return
    }

    @Override
    public void i() {
            r6 = this;
            boolean r0 = r6.E
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r6.r
            if (r0 != 0) goto L9f
            r0 = 1
            r6.E = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "----------onAdViewShow------------"
            r0.append(r1)
            int r1 = r6.hashCode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r6.z = r0
            r6.D = r0
            android.view.View r1 = r6.J()
            if (r1 == 0) goto L40
            com.sigmob.sdk.nativead.b r2 = r6.x()
            android.app.Activity r3 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r6.b
            r5 = 0
            r2.a(r3, r4, r5)
            r1.setOnTouchListener(r6)
        L40:
            com.sigmob.sdk.nativead.n r1 = r6.h
            if (r1 == 0) goto L54
            java.util.HashSet<android.view.View> r2 = r6.k
            boolean r1 = r2.contains(r1)
            if (r1 != 0) goto L54
            java.util.HashSet<android.view.View> r1 = r6.k
            com.sigmob.sdk.nativead.n r2 = r6.h
            r1.add(r2)
            goto L88
        L54:
            java.util.List<android.view.View> r1 = r6.G
            if (r1 == 0) goto L88
            java.util.HashSet<android.view.View> r1 = r6.k
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L68
            java.util.HashSet<android.view.View> r1 = r6.k
            java.util.List<android.view.View> r2 = r6.G
            r1.addAll(r2)
            goto L88
        L68:
            java.util.List<android.view.View> r1 = r6.G
            java.util.Iterator r1 = r1.iterator()
        L6e:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L88
            java.lang.Object r2 = r1.next()
            android.view.View r2 = (android.view.View) r2
            java.util.HashSet<android.view.View> r3 = r6.k
            boolean r3 = r3.contains(r2)
            if (r3 != 0) goto L6e
            java.util.HashSet<android.view.View> r3 = r6.k
            r3.add(r2)
            goto L6e
        L88:
            java.util.HashSet<android.view.View> r1 = r6.k
            java.util.List<android.view.View> r2 = r6.I
            r1.addAll(r2)
            java.util.List<android.view.View> r1 = r6.j
            r6.a(r1, r6)
            com.sigmob.sdk.base.common.ab r1 = r6.j()
            if (r1 == 0) goto L9f
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.a
            r1.a(r2, r0)
        L9f:
            return
    }

    public com.sigmob.sdk.base.common.ab j() {
            r2 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.b
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.sigmob.sdk.base.common.ab r0 = r0.getSessionManager()
            if (r0 != 0) goto L16
            com.sigmob.sdk.nativead.e r0 = new com.sigmob.sdk.nativead.e
            r0.<init>()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.b
            r0.a(r1)
        L16:
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.BaseAdUnit k() {
            r1 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.b
            return r0
    }

    @Override
    public com.sigmob.windad.natives.WindNativeAdData l() {
            r1 = this;
            com.sigmob.windad.natives.WindNativeAdData r0 = r1.a
            return r0
    }

    @Override
    public com.sigmob.sdk.nativead.j m() {
            r3 = this;
            com.sigmob.sdk.nativead.j r0 = r3.m
            if (r0 != 0) goto L2b
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.b
            com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r0.getadPrivacy()
            if (r0 == 0) goto L2b
            com.sigmob.sdk.nativead.j r0 = new com.sigmob.sdk.nativead.j
            android.content.Context r1 = r3.H()
            r0.<init>(r1)
            r3.m = r0
            r0.setOnTouchListener(r3)
            com.sigmob.sdk.nativead.j r0 = r3.m
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.b
            java.lang.String r1 = r1.getAppVersion()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            java.lang.String r2 = r2.getCompanyName()
            r0.a(r1, r2)
        L2b:
            com.sigmob.sdk.nativead.j r0 = r3.m
            return r0
    }

    public boolean n() {
            r2 = this;
            com.sigmob.sdk.nativead.c r0 = r2.l
            if (r0 == 0) goto Lb
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.b
            boolean r0 = r0.a(r1)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.nativead.c o() {
            r1 = this;
            com.sigmob.sdk.nativead.c r0 = r1.l
            if (r0 != 0) goto Lb
            com.sigmob.sdk.nativead.c r0 = new com.sigmob.sdk.nativead.c
            r0.<init>(r1)
            r1.l = r0
        Lb:
            com.sigmob.sdk.nativead.c r0 = r1.l
            return r0
    }

    @Override
    public void onCancel() {
            r1 = this;
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r0 = r1.L
            if (r0 == 0) goto L7
            r0.onCancel()
        L7:
            return
    }

    @Override
    public void onClick(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void onSelected(int r2, java.lang.String r3, boolean r4) {
            r1 = this;
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r0 = r1.L
            if (r0 == 0) goto L7
            r0.onSelected(r2, r3, r4)
        L7:
            return
    }

    @Override
    public void onShow() {
            r1 = this;
            com.sigmob.windad.natives.WindNativeAdData$DislikeInteractionCallback r0 = r1.L
            if (r0 == 0) goto L7
            r0.onShow()
        L7:
            return
    }

    @Override
    public boolean onTouch(android.view.View r6, android.view.MotionEvent r7) {
            r5 = this;
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            int r1 = r7.getAction()
            if (r1 != 0) goto L20
            long r1 = r5.H
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L20
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.H
            long r1 = r1 - r3
            r3 = 500(0x1f4, double:2.47E-321)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L20
            return r0
        L20:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r5.b
            if (r1 == 0) goto Lb6
            int r1 = r7.getAction()
            r2 = 1
            if (r1 != r2) goto Lad
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r5.b
            com.sigmob.sdk.base.models.ClickCommon r1 = r1.getClickCommon()
            java.lang.String r3 = "preview"
            r1.click_scene = r3
            com.sigmob.sdk.nativead.j r1 = r5.m
            if (r6 != r1) goto L42
            java.lang.String r6 = "click mSigAppInfoView"
            com.czhj.sdk.logger.SigmobLog.d(r6)
            r5.a(r2, r7)
            return r2
        L42:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "click "
            r1.append(r4)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            java.util.List<android.view.View> r1 = r5.j
            boolean r1 = r1.contains(r6)
            if (r1 == 0) goto L60
            r1 = r6
            goto L66
        L60:
            java.util.List<android.view.View> r1 = r5.j
            android.view.View r1 = r5.a(r1, r7)
        L66:
            r4 = 3
            if (r1 == 0) goto L84
            java.lang.String r6 = "click ctaClickView"
            com.czhj.sdk.logger.SigmobLog.d(r6)
            com.sigmob.sdk.base.models.BaseAdUnit r6 = r5.b
            com.sigmob.sdk.base.models.ClickCommon r6 = r6.getClickCommon()
            r6.click_scene = r3
            com.sigmob.sdk.base.models.BaseAdUnit r6 = r5.b
            com.sigmob.sdk.base.models.ClickCommon r6 = r6.getClickCommon()
            java.lang.String r0 = "btn"
            r6.click_area = r0
            r5.a(r4, r7)
            return r2
        L84:
            java.util.HashSet<android.view.View> r1 = r5.k
            boolean r1 = r1.contains(r6)
            if (r1 == 0) goto L8d
            goto L93
        L8d:
            java.util.HashSet<android.view.View> r6 = r5.k
            android.view.View r6 = r5.a(r6, r7)
        L93:
            if (r6 == 0) goto Lb6
            java.lang.String r6 = "click mCreativeViews"
            com.czhj.sdk.logger.SigmobLog.d(r6)
            com.sigmob.sdk.nativead.n r6 = r5.h
            if (r6 == 0) goto La5
            boolean r6 = r6.a(r7)
            if (r6 == 0) goto La5
            r0 = r2
        La5:
            if (r0 == 0) goto La8
            goto La9
        La8:
            r4 = 2
        La9:
            r5.a(r4, r7)
            return r2
        Lad:
            long r0 = java.lang.System.currentTimeMillis()
            r5.H = r0
            r5.n = r7
            return r2
        Lb6:
            return r0
    }

    public int p() {
            r2 = this;
            android.view.View r0 = r2.J()
            com.sigmob.sdk.nativead.n r1 = r2.h
            if (r1 == 0) goto L11
            if (r0 == 0) goto L11
            int r0 = r0.getWidth()
            if (r0 <= 0) goto L11
            return r0
        L11:
            r0 = 1280(0x500, float:1.794E-42)
            return r0
    }

    public android.view.View q() {
            r1 = this;
            com.sigmob.sdk.nativead.n r0 = r1.h
            return r0
    }

    public com.sigmob.sdk.nativead.p r() {
            r1 = this;
            android.view.View r0 = r1.q()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.n r0 = r1.h
            com.sigmob.sdk.nativead.p r0 = r0.getSigVideoAdController()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public double s() {
            r2 = this;
            com.sigmob.sdk.nativead.p r0 = r2.r()
            if (r0 == 0) goto Lc
            int r0 = r0.e()
            double r0 = (double) r0
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public double t() {
            r2 = this;
            com.sigmob.sdk.nativead.p r0 = r2.r()
            if (r0 == 0) goto Lc
            int r0 = r0.f()
            double r0 = (double) r0
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public int u() {
            r4 = this;
            android.view.View r0 = r4.J()
            android.view.View r1 = r4.q()
            if (r1 == 0) goto L20
            if (r0 == 0) goto L20
            int r1 = r0.getWidth()
            if (r1 <= 0) goto L20
            int r0 = r0.getWidth()
            double r0 = (double) r0
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.b
            double r2 = r2.getAdPercent()
            double r0 = r0 / r2
            int r0 = (int) r0
            return r0
        L20:
            r0 = 720(0x2d0, float:1.009E-42)
            return r0
    }

    public void v() {
            r2 = this;
            java.util.HashSet<android.view.View> r0 = r2.k
            r1 = 0
            r2.a(r0, r1)
            java.util.List<android.view.View> r0 = r2.j
            r2.a(r0, r1)
            r2.k = r1
            r2.j = r1
            r2.I = r1
            r2.p = r1
            r2.c = r1
            return
    }

    public void w() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "destroy"
            r0.append(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.b
            java.lang.String r1 = r1.getRequestId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r4.v()
            com.sigmob.sdk.nativead.n r0 = r4.h
            r1 = 0
            if (r0 == 0) goto L2c
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            com.sigmob.sdk.nativead.n r0 = r4.h
            r0.c()
            r4.h = r1
        L2c:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.b
            if (r0 == 0) goto L47
            com.sigmob.sdk.base.common.ab r0 = r0.getSessionManager()
            if (r0 == 0) goto L47
            com.sigmob.sdk.base.common.ab r0 = r4.j()
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.S
            r3 = 0
            r0.a(r2, r3)
            com.sigmob.sdk.base.common.ab r0 = r4.j()
            r0.a()
        L47:
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.b
            r0.d(r2)
            com.sigmob.sdk.base.views.q r0 = r4.v
            if (r0 == 0) goto L5e
            r0.dismiss()
            com.sigmob.sdk.base.views.q r0 = r4.v
            r0.c()
            r4.v = r1
        L5e:
            com.sigmob.sdk.nativead.r r0 = r4.x
            if (r0 == 0) goto L6f
            boolean r2 = r0 instanceof com.sigmob.sdk.nativead.a
            if (r2 == 0) goto L6f
            com.sigmob.sdk.nativead.a r0 = (com.sigmob.sdk.nativead.a) r0
            r0.b()
            r4.x = r1
            r4.L = r1
        L6f:
            com.sigmob.sdk.nativead.l r0 = r4.i
            if (r0 == 0) goto L7d
            r0.setAdVisibilityStatusChangeListener(r1)
            com.sigmob.sdk.nativead.l r0 = r4.i
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            r4.i = r1
        L7d:
            com.sigmob.sdk.nativead.c r0 = r4.l
            if (r0 == 0) goto L88
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.b
            r0.b(r2)
            r4.l = r1
        L88:
            com.sigmob.sdk.nativead.b r0 = r4.x()
            r0.k()
            return
    }

    @Override
    public com.sigmob.sdk.nativead.b x() {
            r1 = this;
            com.sigmob.sdk.nativead.b r0 = r1.o
            if (r0 != 0) goto Le
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.b
            com.sigmob.sdk.base.common.h r0 = r0.getAdConfig()
            com.sigmob.sdk.nativead.b r0 = (com.sigmob.sdk.nativead.b) r0
            r1.o = r0
        Le:
            com.sigmob.sdk.nativead.b r0 = r1.o
            return r0
    }

    public void y() {
            r5 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            com.sigmob.sdk.nativead.n r1 = r5.h
            if (r1 == 0) goto L6b
            com.sigmob.sdk.nativead.b r1 = r5.x()
            boolean r1 = r1.l()
            if (r1 == 0) goto L6b
            com.sigmob.sdk.nativead.z r1 = new com.sigmob.sdk.nativead.z
            r1.<init>()
            r2 = 2
            int[] r2 = new int[r2]
            com.sigmob.sdk.nativead.n r3 = r5.h
            r3.getLocationOnScreen(r2)
            r3 = 0
            r3 = r2[r3]
            r1.a(r3)
            r3 = 1
            r2 = r2[r3]
            r1.b(r2)
            com.sigmob.sdk.nativead.n r2 = r5.h
            int r2 = r2.getMeasuredWidth()
            r1.c(r2)
            com.sigmob.sdk.nativead.n r2 = r5.h
            int r2 = r2.getMeasuredHeight()
            r1.d(r2)
            java.lang.String r2 = "attr"
            r0.putParcelable(r2, r1)
            com.sigmob.sdk.nativead.n r1 = r5.h
            android.view.ViewParent r1 = r1.getParent()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r5.s = r1
            com.sigmob.sdk.nativead.n r1 = r5.h
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            r5.t = r1
            com.sigmob.sdk.nativead.n r1 = r5.h
            com.sigmob.sdk.nativead.u.a(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r5.b
            com.sigmob.sdk.base.models.SigMacroCommon r1 = r1.getMacroCommon()
            if (r1 == 0) goto L69
            java.lang.String r2 = "_SCENE_"
            java.lang.String r4 = "3"
            r1.addMarcoKey(r2, r4)
        L69:
            r5.r = r3
        L6b:
            com.sigmob.sdk.nativead.j r1 = r5.m
            if (r1 == 0) goto L73
            r2 = 4
            r1.setVisibility(r2)
        L73:
            com.sigmob.sdk.nativead.c r1 = r5.o()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r5.b
            r1.a(r2, r0)
            return
    }

    public java.lang.String z() {
            r1 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r1.k()
            java.lang.String r0 = r0.getCTAText()
            return r0
    }
}
