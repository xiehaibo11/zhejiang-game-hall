package com.tkay.basead.d;

public class h {
    android.content.Context a;
    com.tkay.basead.e.a b;
    com.tkay.core.common.l.a.c c;
    com.tkay.basead.a.c d;
    android.view.View e;
    volatile boolean f;
    com.tkay.core.common.f.z g;
    com.tkay.core.common.f.i h;
    boolean i;
    java.lang.String j;
    com.tkay.expressad.advanced.d.c k;
    com.tkay.basead.ui.BaseMediaATView l;
    android.view.View.OnClickListener m;
    int n;
    int o;
    com.tkay.basead.a.a p;
    com.tkay.basead.ui.OwnNativeATView q;
    private final java.lang.String r;







    private static class a implements com.tkay.basead.ui.BaseMediaATView.a {
        private final com.tkay.basead.ui.BaseMediaATView.a a;

        public a(com.tkay.basead.ui.BaseMediaATView.a r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public final void onClickCloseView() {
                r1 = this;
                com.tkay.basead.ui.BaseMediaATView$a r0 = r1.a
                if (r0 == 0) goto L7
                r0.onClickCloseView()
            L7:
                return
        }
    }

    public h(android.content.Context r2, com.tkay.core.common.f.z r3, com.tkay.core.common.f.i r4, com.tkay.core.common.a.g r5) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.r = r0
            com.tkay.basead.d.h$1 r0 = new com.tkay.basead.d.h$1
            r0.<init>(r1)
            r1.m = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
            r1.g = r3
            r1.h = r4
            boolean r2 = r5 instanceof com.tkay.expressad.advanced.d.c
            if (r2 == 0) goto L2e
            com.tkay.expressad.advanced.d.c r5 = (com.tkay.expressad.advanced.d.c) r5
            r1.k = r5
            com.tkay.basead.d.h$3 r2 = new com.tkay.basead.d.h$3
            r2.<init>(r1)
            r5.a(r2)
        L2e:
            return
    }

    private static int a(int r5) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            if (r5 <= 0) goto L1f
            double r1 = (double) r5
            r3 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            double r3 = r3 * r1
            int r5 = (int) r3
            r3 = 4606281698874543309(0x3feccccccccccccd, double:0.9)
            double r1 = r1 * r3
            int r1 = (int) r1
            int r1 = r1 - r5
            int r1 = r1 + 1
            int r0 = r0.nextInt(r1)
            int r0 = r0 + r5
            return r0
        L1f:
            r5 = 0
            return r5
    }

    private void a(android.view.View r3, android.view.View.OnClickListener r4) {
            r2 = this;
            boolean r0 = r3 instanceof android.view.ViewGroup
            if (r0 == 0) goto L18
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r0 = 0
        L7:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L17
            android.view.View r1 = r3.getChildAt(r0)
            r2.a(r1, r4)
            int r0 = r0 + 1
            goto L7
        L17:
            return
        L18:
            r3.setOnClickListener(r4)
            return
    }

    private void a(android.view.View r4, android.view.View[] r5) {
            r3 = this;
            boolean r0 = r4 instanceof android.view.ViewGroup
            r1 = 0
            if (r0 == 0) goto L18
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
        L7:
            int r0 = r4.getChildCount()
            if (r1 >= r0) goto L17
            android.view.View r0 = r4.getChildAt(r1)
            r3.a(r0, r5)
            int r1 = r1 + 1
            goto L7
        L17:
            return
        L18:
            boolean r0 = r4 instanceof android.widget.Button
            if (r0 != 0) goto L20
            boolean r0 = r4 instanceof android.widget.TextView
            if (r0 == 0) goto L39
        L20:
            r0 = r4
            android.widget.TextView r0 = (android.widget.TextView) r0
            java.lang.CharSequence r0 = r0.getText()
            java.lang.String r0 = r0.toString()
            com.tkay.core.common.f.z r2 = r3.g
            java.lang.String r2 = r2.w()
            boolean r0 = android.text.TextUtils.equals(r0, r2)
            if (r0 == 0) goto L39
            r5[r1] = r4
        L39:
            return
    }

    static void a(com.tkay.basead.d.h r0) {
            r0.o()
            return
    }

    private void a(com.tkay.basead.ui.OwnNativeATView[] r3, android.view.View r4) {
            r2 = this;
            boolean r0 = r4 instanceof android.view.ViewGroup
            if (r0 == 0) goto L20
            boolean r0 = r4 instanceof com.tkay.basead.ui.OwnNativeATView
            r1 = 0
            if (r0 == 0) goto Le
            r0 = r4
            com.tkay.basead.ui.OwnNativeATView r0 = (com.tkay.basead.ui.OwnNativeATView) r0
            r3[r1] = r0
        Le:
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
        L10:
            int r0 = r4.getChildCount()
            if (r1 >= r0) goto L20
            android.view.View r0 = r4.getChildAt(r1)
            r2.a(r3, r0)
            int r1 = r1 + 1
            goto L10
        L20:
            return
    }

    private android.view.View b(android.content.Context r8, boolean r9, boolean r10, com.tkay.basead.ui.BaseMediaATView.a r11) {
            r7 = this;
            com.tkay.basead.d.h$a r5 = new com.tkay.basead.d.h$a
            r5.<init>(r11)
            com.tkay.basead.ui.OwnNativeATView r11 = new com.tkay.basead.ui.OwnNativeATView
            android.content.Context r0 = r7.a
            r11.<init>(r0)
            if (r9 == 0) goto L29
            r7.q = r11
            com.tkay.basead.ui.MraidMediaView r6 = new com.tkay.basead.ui.MraidMediaView
            com.tkay.core.common.f.z r2 = r7.g
            com.tkay.core.common.f.i r3 = r7.h
            r0 = r6
            r1 = r8
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r7.l = r6
            com.tkay.basead.ui.MraidMediaView r6 = (com.tkay.basead.ui.MraidMediaView) r6
            com.tkay.basead.d.h$4 r8 = new com.tkay.basead.d.h$4
            r8.<init>(r7)
            r6.setMraidWebViewListener(r8)
            goto L37
        L29:
            com.tkay.basead.ui.MediaATView r6 = new com.tkay.basead.ui.MediaATView
            com.tkay.core.common.f.z r2 = r7.g
            com.tkay.core.common.f.i r3 = r7.h
            r0 = r6
            r1 = r8
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r7.l = r6
        L37:
            com.tkay.basead.ui.BaseMediaATView r8 = r7.l
            int r10 = r7.n
            int r0 = r7.o
            r8.init(r10, r0)
            com.tkay.basead.ui.BaseMediaATView r8 = r7.l
            android.widget.FrameLayout$LayoutParams r10 = new android.widget.FrameLayout$LayoutParams
            com.tkay.basead.ui.BaseMediaATView r0 = r7.l
            int r0 = r0.getMediaViewWidth()
            com.tkay.basead.ui.BaseMediaATView r1 = r7.l
            int r1 = r1.getMediaViewHeight()
            r10.<init>(r0, r1)
            r11.addView(r8, r10)
            if (r9 == 0) goto L5c
            r7.q()
            goto L65
        L5c:
            com.tkay.basead.ui.BaseMediaATView r8 = r7.l
            java.util.List r8 = r8.getClickViews()
            r7.a(r11, r8)
        L65:
            return r11
    }

    private static com.tkay.basead.c.a c(android.view.View r8) {
            if (r8 != 0) goto L4
            r8 = 0
            return r8
        L4:
            r0 = 2
            int[] r0 = new int[r0]
            r8.getLocationInWindow(r0)
            r1 = 0
            r1 = r0[r1]
            r2 = 1
            r0 = r0[r2]
            int r2 = r8.getWidth()
            int r8 = r8.getHeight()
            int r2 = a(r2)
            int r8 = a(r8)
            com.tkay.basead.c.a r3 = new com.tkay.basead.c.a
            r3.<init>()
            int r4 = r1 + r2
            r3.a = r4
            int r4 = r0 + r8
            r3.b = r4
            r3.e = r2
            r3.f = r8
            int r8 = r3.a
            double r4 = java.lang.Math.random()
            r6 = 4624633867356078080(0x402e000000000000, double:15.0)
            double r4 = r4 * r6
            int r2 = (int) r4
            int r8 = r8 + r2
            r3.c = r8
            int r8 = r3.b
            double r4 = java.lang.Math.random()
            double r4 = r4 * r6
            int r2 = (int) r4
            int r8 = r8 + r2
            r3.d = r8
            int r8 = r3.c
            int r8 = r8 - r1
            r3.g = r8
            int r8 = r3.d
            int r8 = r8 - r0
            r3.h = r8
            return r3
    }

    private boolean d(android.view.View r5) {
            r4 = this;
            r0 = 1
            com.tkay.basead.ui.OwnNativeATView[] r1 = new com.tkay.basead.ui.OwnNativeATView[r0]
            r4.a(r1, r5)
            r5 = 0
            r2 = r1[r5]
            java.lang.String r3 = "tkay"
            if (r2 != 0) goto L13
            java.lang.String r0 = "Register View don't contain OwnNativeAdView."
            android.util.Log.i(r3, r0)
            return r5
        L13:
            r2 = r1[r5]
            int r2 = r2.getChildCount()
            if (r2 != 0) goto L21
            java.lang.String r0 = "OwnNativeAdView View don't contain any child views."
            android.util.Log.i(r3, r0)
            return r5
        L21:
            r5 = r1[r5]
            r4.q = r5
            r4.q()
            return r0
    }

    private void m() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.p
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    private void n() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.p
            if (r0 == 0) goto La
            r0.b()
            r0 = 0
            r1.p = r0
        La:
            return
    }

    private void o() {
            r5 = this;
            boolean r0 = r5.f
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.f = r0
            boolean r0 = r5.i
            if (r0 == 0) goto L21
            com.tkay.core.common.f.z r0 = r5.g
            boolean r0 = r0.g()
            if (r0 == 0) goto L21
            com.tkay.basead.ui.BaseMediaATView r0 = r5.l
            boolean r1 = r0 instanceof com.tkay.basead.ui.MraidMediaView
            if (r1 == 0) goto L21
            com.tkay.basead.ui.MraidMediaView r0 = (com.tkay.basead.ui.MraidMediaView) r0
            boolean r1 = r5.i
            r0.fireAudioVolumeChange(r1)
        L21:
            com.tkay.core.common.f.z r0 = r5.g
            boolean r0 = r0 instanceof com.tkay.core.common.f.y
            if (r0 == 0) goto L42
            com.tkay.basead.d.c.c r0 = com.tkay.basead.d.c.c.a()
            android.content.Context r1 = r5.a
            com.tkay.core.common.f.i r2 = r5.h
            java.lang.String r2 = r2.b
            com.tkay.core.common.f.i r3 = r5.h
            java.lang.String r3 = r3.c
            java.lang.String r2 = com.tkay.basead.d.c.c.a(r2, r3)
            com.tkay.core.common.f.z r3 = r5.g
            com.tkay.core.common.f.i r4 = r5.h
            com.tkay.core.common.f.j r4 = r4.m
            r0.a(r1, r2, r3, r4)
        L42:
            com.tkay.expressad.advanced.d.c r0 = r5.k
            if (r0 == 0) goto L4b
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r0.c()
            goto L4d
        L4b:
            com.tkay.basead.ui.OwnNativeATView r0 = r5.q
        L4d:
            com.tkay.core.common.f.z r1 = r5.g
            boolean r1 = r1.g()
            if (r1 == 0) goto L57
            com.tkay.basead.ui.BaseMediaATView r0 = r5.l
        L57:
            if (r0 == 0) goto L7e
            com.tkay.basead.c.i r1 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r2 = r5.h
            java.lang.String r2 = r2.d
            java.lang.String r3 = ""
            r1.<init>(r2, r3)
            int r2 = r0.getHeight()
            r1.f = r2
            int r0 = r0.getWidth()
            r1.e = r0
            r0 = 8
            com.tkay.core.common.f.z r2 = r5.g
            com.tkay.basead.a.b.a(r0, r2, r1)
            com.tkay.basead.e.a r0 = r5.b
            if (r0 == 0) goto L7e
            r0.onAdShow()
        L7e:
            r5.m()
            return
    }

    private android.view.View p() {
            r3 = this;
            com.tkay.basead.ui.BaseMediaATView r0 = r3.l
            if (r0 == 0) goto Lb
            android.view.View r0 = r0.getMonitorClickView()
            if (r0 == 0) goto Lb
            return r0
        Lb:
            r0 = 1
            android.view.View[] r0 = new android.view.View[r0]
            com.tkay.basead.ui.OwnNativeATView r1 = r3.q
            r3.a(r1, r0)
            r1 = 0
            r2 = r0[r1]
            if (r2 == 0) goto L1b
            r0 = r0[r1]
            return r0
        L1b:
            com.tkay.basead.ui.OwnNativeATView r0 = r3.q
            return r0
    }

    private void q() {
            r4 = this;
            com.tkay.core.common.f.i r0 = r4.h
            if (r0 == 0) goto L26
            com.tkay.core.common.f.j r0 = r0.m
            if (r0 != 0) goto L9
            goto L26
        L9:
            com.tkay.core.common.f.i r0 = r4.h
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.F()
            r1 = 2
            if (r0 != r1) goto L26
            android.view.View r0 = r4.p()
            com.tkay.basead.a.a r1 = new com.tkay.basead.a.a
            com.tkay.core.common.f.i r2 = r4.h
            com.tkay.basead.d.h$6 r3 = new com.tkay.basead.d.h$6
            r3.<init>(r4, r0)
            r1.<init>(r0, r2, r3)
            r4.p = r1
        L26:
            return
    }

    public final android.view.View a(android.content.Context r3, boolean r4, boolean r5, com.tkay.basead.ui.BaseMediaATView.a r6) {
            r2 = this;
            com.tkay.core.common.f.z r0 = r2.g
            if (r0 == 0) goto L12
            boolean r0 = r0.g()
            if (r0 == 0) goto L12
            if (r4 == 0) goto L12
            r4 = 1
            android.view.View r3 = r2.b(r3, r4, r5, r6)
            return r3
        L12:
            com.tkay.expressad.advanced.d.c r0 = r2.k
            if (r0 == 0) goto L20
            r0.a(r5)
            com.tkay.expressad.advanced.d.c r3 = r2.k
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r3 = r3.c()
            return r3
        L20:
            com.tkay.core.common.f.z r0 = r2.g
            r1 = 0
            if (r0 != 0) goto L26
            return r1
        L26:
            java.lang.String r0 = r0.u()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            return r1
        L31:
            if (r4 == 0) goto L3f
            com.tkay.core.common.f.z r4 = r2.g
            boolean r4 = r4 instanceof com.tkay.core.common.f.f
            if (r4 == 0) goto L3f
            r4 = 0
            android.view.View r3 = r2.b(r3, r4, r5, r6)
            return r3
        L3f:
            return r1
    }

    public final com.tkay.core.common.f.h a() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            return r0
    }

    public final void a(int r2, int r3) {
            r1 = this;
            r1.n = r2
            r1.o = r3
            com.tkay.expressad.advanced.d.c r0 = r1.k
            if (r0 == 0) goto Lb
            r0.a(r3, r2)
        Lb:
            return
    }

    public final void a(android.view.View r2) {
            r1 = this;
            boolean r0 = r1.d(r2)
            if (r0 != 0) goto L7
            return
        L7:
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L14
            boolean r0 = r0.g()
            if (r0 != 0) goto L14
            r1.b(r2)
        L14:
            android.view.View$OnClickListener r0 = r1.m
            r1.a(r2, r0)
            return
    }

    final void a(android.view.View r9, int r10) {
            r8 = this;
            com.tkay.basead.ui.OwnNativeATView r0 = r8.q
            if (r0 == 0) goto Lb3
            r8.n()
            r8.o()
            com.tkay.basead.a.c r0 = r8.d
            if (r0 != 0) goto L21
            com.tkay.basead.a.c r0 = new com.tkay.basead.a.c
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.f.i r2 = r8.h
            com.tkay.core.common.f.z r3 = r8.g
            r0.<init>(r1, r2, r3)
            r8.d = r0
        L21:
            com.tkay.basead.a.c r0 = r8.d
            boolean r0 = r0.a()
            if (r0 == 0) goto L2a
            return
        L2a:
            com.tkay.basead.a.c r0 = r8.d
            com.tkay.basead.d.h$2 r1 = new com.tkay.basead.d.h$2
            r1.<init>(r8, r10)
            r0.a(r1)
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r1 = r8.h
            java.lang.String r1 = r1.d
            java.lang.String r2 = ""
            r0.<init>(r1, r2)
            com.tkay.basead.ui.OwnNativeATView r1 = r8.q
            int r1 = r1.getHeight()
            r0.f = r1
            com.tkay.basead.ui.OwnNativeATView r1 = r8.q
            int r1 = r1.getWidth()
            r0.e = r1
            r1 = 2
            if (r10 != r1) goto La6
            if (r9 != 0) goto L56
            r9 = 0
            goto Lac
        L56:
            int[] r10 = new int[r1]
            r9.getLocationInWindow(r10)
            r1 = 0
            r1 = r10[r1]
            r2 = 1
            r10 = r10[r2]
            int r2 = r9.getWidth()
            int r9 = r9.getHeight()
            int r2 = a(r2)
            int r9 = a(r9)
            com.tkay.basead.c.a r3 = new com.tkay.basead.c.a
            r3.<init>()
            int r4 = r1 + r2
            r3.a = r4
            int r4 = r10 + r9
            r3.b = r4
            r3.e = r2
            r3.f = r9
            int r9 = r3.a
            double r4 = java.lang.Math.random()
            r6 = 4624633867356078080(0x402e000000000000, double:15.0)
            double r4 = r4 * r6
            int r2 = (int) r4
            int r9 = r9 + r2
            r3.c = r9
            int r9 = r3.b
            double r4 = java.lang.Math.random()
            double r4 = r4 * r6
            int r2 = (int) r4
            int r9 = r9 + r2
            r3.d = r9
            int r9 = r3.c
            int r9 = r9 - r1
            r3.g = r9
            int r9 = r3.d
            int r9 = r9 - r10
            r3.h = r9
            r9 = r3
            goto Lac
        La6:
            com.tkay.basead.ui.OwnNativeATView r9 = r8.q
            com.tkay.basead.c.a r9 = r9.getAdClickRecord()
        Lac:
            r0.g = r9
            com.tkay.basead.a.c r9 = r8.d
            r9.a(r0)
        Lb3:
            return
    }

    public final void a(android.view.View r2, java.util.List<android.view.View> r3) {
            r1 = this;
            boolean r0 = r1.d(r2)
            if (r0 != 0) goto L7
            return
        L7:
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L14
            boolean r0 = r0.g()
            if (r0 != 0) goto L14
            r1.b(r2)
        L14:
            if (r3 == 0) goto L2f
            java.util.Iterator r2 = r3.iterator()
        L1a:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L2e
            java.lang.Object r3 = r2.next()
            android.view.View r3 = (android.view.View) r3
            if (r3 == 0) goto L1a
            android.view.View$OnClickListener r0 = r1.m
            r3.setOnClickListener(r0)
            goto L1a
        L2e:
            return
        L2f:
            android.view.View$OnClickListener r3 = r1.m
            r2.setOnClickListener(r3)
            return
    }

    public final void a(com.tkay.basead.e.a r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.String r6) {
            r5 = this;
            r5.j = r6
            com.tkay.expressad.advanced.d.c r0 = r5.k
            if (r0 == 0) goto L55
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            r0 = 3
            if (r6 != 0) goto L50
            java.lang.String r6 = r5.j
            r1 = -1
            int r2 = r6.hashCode()
            r3 = 2
            r4 = 1
            switch(r2) {
                case 49: goto L2e;
                case 50: goto L24;
                case 51: goto L1a;
                default: goto L19;
            }
        L19:
            goto L37
        L1a:
            java.lang.String r2 = "3"
            boolean r6 = r6.equals(r2)
            if (r6 == 0) goto L37
            r1 = r3
            goto L37
        L24:
            java.lang.String r2 = "2"
            boolean r6 = r6.equals(r2)
            if (r6 == 0) goto L37
            r1 = r4
            goto L37
        L2e:
            java.lang.String r2 = "1"
            boolean r6 = r6.equals(r2)
            if (r6 == 0) goto L37
            r1 = 0
        L37:
            if (r1 == 0) goto L4a
            if (r1 == r4) goto L44
            if (r1 == r3) goto L3e
            goto L43
        L3e:
            com.tkay.expressad.advanced.d.c r6 = r5.k
            r6.c(r3)
        L43:
            return
        L44:
            com.tkay.expressad.advanced.d.c r6 = r5.k
            r6.c(r4)
            return
        L4a:
            com.tkay.expressad.advanced.d.c r6 = r5.k
            r6.c(r0)
            return
        L50:
            com.tkay.expressad.advanced.d.c r6 = r5.k
            r6.c(r0)
        L55:
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            r1.i = r2
            com.tkay.expressad.advanced.d.c r0 = r1.k
            if (r0 == 0) goto Le
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 2
        Lb:
            r0.b(r2)
        Le:
            return
    }

    public final boolean a(boolean r3, boolean r4) {
            r2 = this;
            com.tkay.core.common.f.z r0 = r2.g
            int r0 = r0.n()
            r1 = 67
            if (r0 == r1) goto Lc
            r3 = 0
            return r3
        Lc:
            com.tkay.core.common.f.z r0 = r2.g
            boolean r3 = r0.a(r3, r4)
            return r3
    }

    public final java.lang.String b() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.r()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public final void b(android.view.View r4) {
            r3 = this;
            r3.e = r4
            com.tkay.basead.d.h$5 r0 = new com.tkay.basead.d.h$5
            r0.<init>(r3)
            com.tkay.core.common.l.a.c r1 = r3.c
            if (r1 != 0) goto L2a
            com.tkay.core.common.l.a.c r1 = new com.tkay.core.common.l.a.c
            r4.getContext()
            com.tkay.core.common.f.i r2 = r3.h
            com.tkay.core.common.f.j r2 = r2.m
            int r2 = r2.R()
            if (r2 > 0) goto L1d
            r2 = 100
            goto L25
        L1d:
            com.tkay.core.common.f.i r2 = r3.h
            com.tkay.core.common.f.j r2 = r2.m
            int r2 = r2.R()
        L25:
            r1.<init>(r2)
            r3.c = r1
        L2a:
            com.tkay.core.common.l.a.c r1 = r3.c
            r1.a(r4, r0)
            return
    }

    public final java.lang.String c() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.s()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String d() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.w()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.t()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.u()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String g() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.g
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.v()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public final boolean h() {
            r1 = this;
            com.tkay.expressad.advanced.d.c r0 = r1.k
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final void i() {
            r1 = this;
            com.tkay.core.common.l.a.c r0 = r1.c
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    public final void j() {
            r2 = this;
            r2.i()
            r2.n()
            r0 = 0
            r2.e = r0
            r2.q = r0
            r2.b = r0
            com.tkay.expressad.advanced.d.c r1 = r2.k     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto L1b
            com.tkay.expressad.advanced.d.c r1 = r2.k     // Catch: java.lang.Throwable -> L17
            r1.e()     // Catch: java.lang.Throwable -> L17
            goto L1b
        L17:
            r1 = move-exception
            r1.printStackTrace()
        L1b:
            com.tkay.basead.a.c r1 = r2.d
            if (r1 == 0) goto L24
            r1.d()
            r2.d = r0
        L24:
            com.tkay.core.common.l.a.c r1 = r2.c
            if (r1 == 0) goto L2d
            r1.b()
            r2.c = r0
        L2d:
            com.tkay.basead.ui.BaseMediaATView r0 = r2.l
            if (r0 == 0) goto L34
            r0.destroy()
        L34:
            return
    }

    public final void k() {
            r2 = this;
            com.tkay.expressad.advanced.d.c r0 = r2.k
            if (r0 == 0) goto L8
            r1 = 3
            r0.d(r1)
        L8:
            return
    }

    public final void l() {
            r2 = this;
            com.tkay.expressad.advanced.d.c r0 = r2.k
            if (r0 == 0) goto L8
            r1 = 3
            r0.e(r1)
        L8:
            return
    }
}
