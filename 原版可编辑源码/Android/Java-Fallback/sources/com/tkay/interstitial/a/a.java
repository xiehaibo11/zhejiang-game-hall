package com.tkay.interstitial.a;

public class a extends com.tkay.core.common.f<com.tkay.interstitial.a.e> {
    public static final java.lang.String a = null;
    java.lang.Runnable m;
    private android.view.View n;
    private java.util.concurrent.atomic.AtomicBoolean o;


    final class 2 implements android.view.View.OnTouchListener {
        final com.tkay.interstitial.a.a a;

        2(com.tkay.interstitial.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean onTouch(android.view.View r1, android.view.MotionEvent r2) {
                r0 = this;
                r1 = 1
                return r1
        }
    }

    final class 3 implements com.tkay.core.common.res.b.a {
        final java.lang.ref.WeakReference a;
        final java.lang.String b;
        final int c;
        final com.tkay.interstitial.a.a d;

        3(com.tkay.interstitial.a.a r1, java.lang.ref.WeakReference r2, java.lang.String r3, int r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void onFail(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r0 = com.tkay.interstitial.a.a.a
                java.lang.String r4 = java.lang.String.valueOf(r4)
                java.lang.String r1 = "load: image load fail:"
                java.lang.String r4 = r1.concat(r4)
                android.util.Log.e(r0, r4)
                java.lang.ref.WeakReference r4 = r2.a
                java.lang.Object r4 = r4.get()
                android.widget.ImageView r4 = (android.widget.ImageView) r4
                java.lang.String r0 = r2.b
                boolean r3 = android.text.TextUtils.equals(r0, r3)
                if (r3 == 0) goto L26
                if (r4 == 0) goto L26
                int r3 = r2.c
                r4.setImageResource(r3)
            L26:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r3, android.graphics.Bitmap r4) {
                r2 = this;
                java.lang.ref.WeakReference r0 = r2.a
                java.lang.Object r0 = r0.get()
                android.widget.ImageView r0 = (android.widget.ImageView) r0
                java.lang.String r1 = r2.b
                boolean r3 = android.text.TextUtils.equals(r1, r3)
                if (r3 == 0) goto L15
                if (r0 == 0) goto L15
                r0.setImageBitmap(r4)
            L15:
                return
        }
    }


    final class 5 implements com.tkay.basead.e.b.b {
        final com.tkay.interstitial.a.d a;
        final java.lang.String b;
        final com.tkay.interstitial.a.a c;

        5(com.tkay.interstitial.a.a r1, com.tkay.interstitial.a.d r2, java.lang.String r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.tkay.interstitial.a.d r0 = r1.a
                if (r0 == 0) goto L7
                r0.onInterstitialAdShow()
            L7:
                return
        }

        @Override
        public final void a(int r1) {
                r0 = this;
                com.tkay.interstitial.a.d r1 = r0.a
                if (r1 == 0) goto L7
                r1.onInterstitialAdClicked()
            L7:
                return
        }

        @Override
        public final void a(com.tkay.basead.c.e r3) {
                r2 = this;
                com.tkay.interstitial.a.d r0 = r2.a
                if (r0 == 0) goto Lf
                java.lang.String r1 = r3.a()
                java.lang.String r3 = r3.b()
                r0.onInterstitialAdVideoError(r1, r3)
            Lf:
                return
        }

        @Override
        public final void a(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public final void b() {
                r1 = this;
                com.tkay.interstitial.a.d r0 = r1.a
                if (r0 == 0) goto L7
                r0.onInterstitialAdVideoStart()
            L7:
                return
        }

        @Override
        public final void c() {
                r1 = this;
                com.tkay.interstitial.a.d r0 = r1.a
                if (r0 == 0) goto L7
                r0.onInterstitialAdVideoEnd()
            L7:
                return
        }

        @Override
        public final void d() {
                r0 = this;
                return
        }

        @Override
        public final void e() {
                r2 = this;
                com.tkay.basead.e.b r0 = com.tkay.basead.e.b.a()
                java.lang.String r1 = r2.b
                r0.b(r1)
                com.tkay.interstitial.a.d r0 = r2.a
                if (r0 == 0) goto L10
                r0.onInterstitialAdClose()
            L10:
                return
        }
    }

    static {
            java.lang.Class<com.tkay.interstitial.a.a> r0 = com.tkay.interstitial.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.interstitial.a.a.a = r0
            return
    }

    private a(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r2 = 0
            r1.<init>(r2)
            r0.o = r1
            com.tkay.interstitial.a.a$4 r1 = new com.tkay.interstitial.a.a$4
            r1.<init>(r0)
            r0.m = r1
            return
    }

    private static com.tkay.core.common.h a(com.tkay.interstitial.a.e r2) {
            com.tkay.interstitial.a.f r0 = new com.tkay.interstitial.a.f
            android.content.Context r1 = r2.a()
            r0.<init>(r1)
            int r2 = r2.d
            r0.a(r2)
            return r0
    }

    public static com.tkay.interstitial.a.a a(android.content.Context r3, java.lang.String r4) {
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = "3"
            com.tkay.core.common.f r0 = r0.a(r4, r1)
            if (r0 == 0) goto L10
            boolean r2 = r0 instanceof com.tkay.interstitial.a.a
            if (r2 != 0) goto L1c
        L10:
            com.tkay.interstitial.a.a r0 = new com.tkay.interstitial.a.a
            r0.<init>(r3, r4)
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r3.a(r4, r1, r0)
        L1c:
            com.tkay.interstitial.a.a r0 = (com.tkay.interstitial.a.a) r0
            return r0
    }

    static java.lang.String a(com.tkay.interstitial.a.a r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    private void a(android.app.Activity r9) {
            r8 = this;
            if (r9 != 0) goto L3
            return
        L3:
            android.content.Context r0 = r8.b
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            java.lang.String r1 = r0.n()
            java.lang.String r0 = r0.m()
            android.view.View r2 = r8.n
            if (r2 != 0) goto L38
            android.content.Context r2 = r9.getApplicationContext()
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            java.lang.String r3 = "interstitial_loading_layout"
            java.lang.String r4 = "layout"
            int r3 = com.tkay.core.common.l.h.a(r9, r3, r4)
            r4 = 0
            android.view.View r2 = r2.inflate(r3, r4)
            r8.n = r2
        L38:
            android.view.View r2 = r8.n
            com.tkay.interstitial.a.a$2 r3 = new com.tkay.interstitial.a.a$2
            r3.<init>(r8)
            r2.setOnTouchListener(r3)
            android.view.View r2 = r8.n
            java.lang.String r3 = "id"
            java.lang.String r4 = "interstitial_iv_loading"
            int r4 = com.tkay.core.common.l.h.a(r9, r4, r3)
            android.view.View r2 = r2.findViewById(r4)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            android.view.View r4 = r8.n
            java.lang.String r5 = "interstitial_tv_loading"
            int r3 = com.tkay.core.common.l.h.a(r9, r5, r3)
            android.view.View r3 = r4.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r4 = 1106247680(0x41f00000, float:30.0)
            int r4 = com.tkay.core.common.l.h.a(r9, r4)
            r2.setMinimumWidth(r4)
            r2.setMinimumHeight(r4)
            r4 = 1119092736(0x42b40000, float:90.0)
            int r4 = com.tkay.core.common.l.h.a(r9, r4)
            r2.setMaxWidth(r4)
            r2.setMaxHeight(r4)
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r2.setScaleType(r4)
            java.lang.String r4 = "interstitial_loading_default"
            java.lang.String r5 = "drawable"
            int r4 = com.tkay.core.common.l.h.a(r9, r4, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 == 0) goto L8f
            r2.setImageResource(r4)
            goto Laa
        L8f:
            java.lang.ref.WeakReference r5 = new java.lang.ref.WeakReference
            r5.<init>(r2)
            android.content.Context r2 = r9.getApplicationContext()
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r6 = new com.tkay.core.common.res.e
            r7 = 3
            r6.<init>(r7, r1)
            com.tkay.interstitial.a.a$3 r7 = new com.tkay.interstitial.a.a$3
            r7.<init>(r8, r5, r1, r4)
            r2.a(r6, r7)
        Laa:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb4
            r3.setText(r0)
            goto Lbf
        Lb4:
            java.lang.String r0 = "interstitial_text_loading_default"
            java.lang.String r1 = "string"
            int r0 = com.tkay.core.common.l.h.a(r9, r0, r1)
            r3.setText(r0)
        Lbf:
            android.view.View r0 = r8.n
            if (r0 == 0) goto Ld6
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto Ld6
            android.view.View r0 = r8.n
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.View r1 = r8.n
            r0.removeView(r1)
        Ld6:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.view.Window r9 = r9.getWindow()
            android.view.View r9 = r9.getDecorView()
            android.view.ViewGroup r9 = (android.view.ViewGroup) r9
            android.view.View r1 = r8.n
            r9.addView(r1, r0)
            return
    }

    private void a(android.app.Activity r5, com.tkay.interstitial.a.d r6, com.tkay.core.api.BaseAd r7, com.tkay.core.common.f.d r8, java.lang.String r9) {
            r4 = this;
            if (r7 == 0) goto L4d
            boolean r0 = r7 instanceof com.tkay.core.common.f.a.e
            if (r0 == 0) goto L4d
            com.tkay.core.common.f.a.b r0 = new com.tkay.core.common.f.a.b
            r1 = r7
            com.tkay.core.common.f.a.e r1 = (com.tkay.core.common.f.a.e) r1
            r0.<init>(r1)
            com.tkay.core.common.f.a.c r1 = new com.tkay.core.common.f.a.c
            r2 = r7
            com.tkay.core.common.f.a.a r2 = (com.tkay.core.common.f.a.a) r2
            java.lang.String r3 = "3"
            int r3 = java.lang.Integer.parseInt(r3)
            r1.<init>(r2, r8, r3)
            java.lang.String r8 = a(r1)
            com.tkay.basead.e.b r2 = com.tkay.basead.e.b.a()
            com.tkay.interstitial.a.a$5 r3 = new com.tkay.interstitial.a.a$5
            r3.<init>(r4, r6, r8)
            r2.a(r8, r3)
            com.tkay.basead.d.i r6 = com.tkay.basead.d.i.a()
            r6.a(r8, r7)
            com.tkay.core.basead.b.a r6 = new com.tkay.core.basead.b.a
            r6.<init>()
            r6.c = r0
            r6.d = r8
            r7 = 3
            r6.a = r7
            r6.h = r1
            int r7 = com.tkay.core.common.l.d.g(r5)
            r6.e = r7
            r6.b = r9
            com.tkay.basead.ui.BaseATActivity.a(r5, r6)
            return
        L4d:
            java.lang.String r5 = "tkay"
            java.lang.String r7 = "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"
            android.util.Log.e(r5, r7)
            if (r6 == 0) goto L5d
            java.lang.String r5 = ""
            java.lang.String r7 = "showThirdPartyNativeInterstitial fail,AdCache return illegal type adObject"
            r6.onInterstitialAdVideoError(r5, r7)
        L5d:
            return
    }

    static void a(com.tkay.interstitial.a.a r8, android.app.Activity r9) {
            if (r9 == 0) goto Lea
            android.content.Context r0 = r8.b
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            java.lang.String r1 = r0.n()
            java.lang.String r0 = r0.m()
            android.view.View r2 = r8.n
            if (r2 != 0) goto L37
            android.content.Context r2 = r9.getApplicationContext()
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            java.lang.String r3 = "interstitial_loading_layout"
            java.lang.String r4 = "layout"
            int r3 = com.tkay.core.common.l.h.a(r9, r3, r4)
            r4 = 0
            android.view.View r2 = r2.inflate(r3, r4)
            r8.n = r2
        L37:
            android.view.View r2 = r8.n
            com.tkay.interstitial.a.a$2 r3 = new com.tkay.interstitial.a.a$2
            r3.<init>(r8)
            r2.setOnTouchListener(r3)
            android.view.View r2 = r8.n
            java.lang.String r3 = "id"
            java.lang.String r4 = "interstitial_iv_loading"
            int r4 = com.tkay.core.common.l.h.a(r9, r4, r3)
            android.view.View r2 = r2.findViewById(r4)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            android.view.View r4 = r8.n
            java.lang.String r5 = "interstitial_tv_loading"
            int r3 = com.tkay.core.common.l.h.a(r9, r5, r3)
            android.view.View r3 = r4.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r4 = 1106247680(0x41f00000, float:30.0)
            int r4 = com.tkay.core.common.l.h.a(r9, r4)
            r2.setMinimumWidth(r4)
            r2.setMinimumHeight(r4)
            r4 = 1119092736(0x42b40000, float:90.0)
            int r4 = com.tkay.core.common.l.h.a(r9, r4)
            r2.setMaxWidth(r4)
            r2.setMaxHeight(r4)
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r2.setScaleType(r4)
            java.lang.String r4 = "interstitial_loading_default"
            java.lang.String r5 = "drawable"
            int r4 = com.tkay.core.common.l.h.a(r9, r4, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 == 0) goto L8e
            r2.setImageResource(r4)
            goto La9
        L8e:
            java.lang.ref.WeakReference r5 = new java.lang.ref.WeakReference
            r5.<init>(r2)
            android.content.Context r2 = r9.getApplicationContext()
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r6 = new com.tkay.core.common.res.e
            r7 = 3
            r6.<init>(r7, r1)
            com.tkay.interstitial.a.a$3 r7 = new com.tkay.interstitial.a.a$3
            r7.<init>(r8, r5, r1, r4)
            r2.a(r6, r7)
        La9:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb3
            r3.setText(r0)
            goto Lbe
        Lb3:
            java.lang.String r0 = "interstitial_text_loading_default"
            java.lang.String r1 = "string"
            int r0 = com.tkay.core.common.l.h.a(r9, r0, r1)
            r3.setText(r0)
        Lbe:
            android.view.View r0 = r8.n
            if (r0 == 0) goto Ld5
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto Ld5
            android.view.View r0 = r8.n
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.View r1 = r8.n
            r0.removeView(r1)
        Ld5:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.view.Window r9 = r9.getWindow()
            android.view.View r9 = r9.getDecorView()
            android.view.ViewGroup r9 = (android.view.ViewGroup) r9
            android.view.View r8 = r8.n
            r9.addView(r8, r0)
        Lea:
            return
    }

    static void a(com.tkay.interstitial.a.a r4, android.app.Activity r5, com.tkay.interstitial.a.d r6, com.tkay.core.api.BaseAd r7, com.tkay.core.common.f.d r8, java.lang.String r9) {
            if (r7 == 0) goto L4d
            boolean r0 = r7 instanceof com.tkay.core.common.f.a.e
            if (r0 == 0) goto L4d
            com.tkay.core.common.f.a.b r0 = new com.tkay.core.common.f.a.b
            r1 = r7
            com.tkay.core.common.f.a.e r1 = (com.tkay.core.common.f.a.e) r1
            r0.<init>(r1)
            com.tkay.core.common.f.a.c r1 = new com.tkay.core.common.f.a.c
            r2 = r7
            com.tkay.core.common.f.a.a r2 = (com.tkay.core.common.f.a.a) r2
            java.lang.String r3 = "3"
            int r3 = java.lang.Integer.parseInt(r3)
            r1.<init>(r2, r8, r3)
            java.lang.String r8 = a(r1)
            com.tkay.basead.e.b r2 = com.tkay.basead.e.b.a()
            com.tkay.interstitial.a.a$5 r3 = new com.tkay.interstitial.a.a$5
            r3.<init>(r4, r6, r8)
            r2.a(r8, r3)
            com.tkay.basead.d.i r4 = com.tkay.basead.d.i.a()
            r4.a(r8, r7)
            com.tkay.core.basead.b.a r4 = new com.tkay.core.basead.b.a
            r4.<init>()
            r4.c = r0
            r4.d = r8
            r6 = 3
            r4.a = r6
            r4.h = r1
            int r6 = com.tkay.core.common.l.d.g(r5)
            r4.e = r6
            r4.b = r9
            com.tkay.basead.ui.BaseATActivity.a(r5, r4)
            return
        L4d:
            java.lang.String r4 = "tkay"
            java.lang.String r5 = "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"
            android.util.Log.e(r4, r5)
            java.lang.String r4 = ""
            java.lang.String r5 = "showThirdPartyNativeInterstitial fail,AdCache return illegal type adObject"
            r6.onInterstitialAdVideoError(r4, r5)
            return
    }

    static android.content.Context b(com.tkay.interstitial.a.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static android.content.Context c(com.tkay.interstitial.a.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static android.content.Context d(com.tkay.interstitial.a.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean e(com.tkay.interstitial.a.a r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.o
            return r0
    }

    static android.view.View f(com.tkay.interstitial.a.a r0) {
            android.view.View r0 = r0.n
            return r0
    }

    private static void m() {
            return
    }

    private static void n() {
            return
    }

    private static void o() {
            return
    }

    private void p() {
            r6 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r6.m
            int r2 = r6.h
            double r2 = (double) r2
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r2 = java.lang.Math.pow(r4, r2)
            long r2 = (long) r2
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r0.a(r1, r2)
            return
    }

    @Override
    public final com.tkay.core.api.TYAdStatusInfo a(android.content.Context r9, java.util.Map<java.lang.String, java.lang.Object> r10) {
            r8 = this;
            com.tkay.core.api.TYAdStatusInfo r0 = super.a(r9, r10)
            boolean r1 = r8.c()
            if (r1 != 0) goto L19
            boolean r1 = r8.a(r0)
            if (r1 == 0) goto L19
            r4 = 5
            r5 = 0
            r6 = 0
            r2 = r8
            r3 = r9
            r7 = r10
            r2.a(r3, r4, r5, r6, r7)
        L19:
            return r0
    }

    @Override
    public final com.tkay.core.common.h a(com.tkay.core.common.j r3) {
            r2 = this;
            com.tkay.interstitial.a.e r3 = (com.tkay.interstitial.a.e) r3
            com.tkay.interstitial.a.f r0 = new com.tkay.interstitial.a.f
            android.content.Context r1 = r3.a()
            r0.<init>(r1)
            int r3 = r3.d
            r0.a(r3)
            return r0
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "3"
            return r0
    }

    public final synchronized void a(android.app.Activity r13, java.lang.String r14, com.tkay.interstitial.api.TYInterstitialListener r15, com.tkay.core.api.TYEventInterface r16, java.util.Map<java.lang.String, java.lang.Object> r17) {
            r12 = this;
            r10 = r12
            monitor-enter(r12)
            java.util.concurrent.atomic.AtomicBoolean r0 = r10.o     // Catch: java.lang.Throwable -> L82
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L82
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = "The placementId("
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = r10.c     // Catch: java.lang.Throwable -> L82
            r0.append(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = ") is already in the process of being delayed."
            r0.append(r1)     // Catch: java.lang.Throwable -> L82
            monitor-exit(r12)
            return
        L1d:
            r0 = 0
            r1 = 1
            r4 = r13
            r6 = r17
            com.tkay.core.common.f.a r3 = r12.a(r13, r0, r1, r6)     // Catch: java.lang.Throwable -> L82
            if (r3 == 0) goto L68
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.e()     // Catch: java.lang.Throwable -> L82
            boolean r0 = r0 instanceof com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter     // Catch: java.lang.Throwable -> L82
            if (r0 == 0) goto L68
            r12.a(r3)     // Catch: java.lang.Throwable -> L82
            r12.f()     // Catch: java.lang.Throwable -> L82
            int r0 = r3.d()     // Catch: java.lang.Throwable -> L82
            int r0 = r0 + r1
            r3.a(r0)     // Catch: java.lang.Throwable -> L82
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.e()     // Catch: java.lang.Throwable -> L82
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()     // Catch: java.lang.Throwable -> L82
            int r7 = r0.ad()     // Catch: java.lang.Throwable -> L82
            if (r7 <= 0) goto L51
            java.util.concurrent.atomic.AtomicBoolean r0 = r10.o     // Catch: java.lang.Throwable -> L82
            r0.set(r1)     // Catch: java.lang.Throwable -> L82
        L51:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L82
            com.tkay.interstitial.a.a$1 r11 = new com.tkay.interstitial.a.a$1     // Catch: java.lang.Throwable -> L82
            r1 = r11
            r2 = r12
            r4 = r13
            r5 = r14
            r6 = r17
            r8 = r16
            r9 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L82
            r0.a(r11)     // Catch: java.lang.Throwable -> L82
            monitor-exit(r12)
            return
        L68:
            r0 = 0
            boolean r0 = r12.a(r0)     // Catch: java.lang.Throwable -> L82
            if (r0 == 0) goto L80
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L82
            android.content.Context r2 = r0.D()     // Catch: java.lang.Throwable -> L82
            r3 = 7
            r4 = 0
            r5 = 0
            r1 = r12
            r6 = r17
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L82
        L80:
            monitor-exit(r12)
            return
        L82:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
    }

    public final void a(android.content.Context r7, int r8, com.tkay.core.common.b.a r9, com.tkay.core.common.b.b r10, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r6 = this;
            com.tkay.interstitial.a.e r4 = new com.tkay.interstitial.a.e
            r4.<init>()
            r4.a(r7)
            r4.d = r8
            r4.e = r10
            r4.g = r11
            android.content.Context r1 = r6.b
            java.lang.String r3 = r6.c
            java.lang.String r2 = "3"
            r0 = r6
            r5 = r9
            super.a(r1, r2, r3, r4, r5)
            return
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r7) {
            r6 = this;
            super.b(r7)
            boolean r0 = r6.j()
            if (r0 == 0) goto L2c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r6.m
            r2 = 4611686018427387904(0x4000000000000000, double:2.0)
            int r4 = r6.h
            double r4 = (double) r4
            double r2 = java.lang.Math.pow(r2, r4)
            long r2 = (long) r2
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r0.a(r1, r2)
            com.tkay.interstitial.a.b r0 = com.tkay.interstitial.a.b.a()
            com.tkay.interstitial.api.TYInterstitialAutoLoadListener r0 = r0.b
            if (r0 == 0) goto L2c
            java.lang.String r1 = r6.c
            r0.onInterstitialAutoLoadFail(r1, r7)
        L2c:
            return
    }

    @Override
    protected final boolean j() {
            r2 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r2.c
            boolean r0 = r0.e(r1)
            return r0
    }

    @Override
    protected final void k() {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.m
            r0.c(r1)
            return
    }

    @Override
    protected final void l() {
            r2 = this;
            super.l()
            boolean r0 = r2.j()
            if (r0 == 0) goto L16
            com.tkay.interstitial.a.b r0 = com.tkay.interstitial.a.b.a()
            com.tkay.interstitial.api.TYInterstitialAutoLoadListener r0 = r0.b
            if (r0 == 0) goto L16
            java.lang.String r1 = r2.c
            r0.onInterstitialAutoLoaded(r1)
        L16:
            return
    }
}
