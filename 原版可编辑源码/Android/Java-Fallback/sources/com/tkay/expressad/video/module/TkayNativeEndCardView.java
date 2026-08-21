package com.tkay.expressad.video.module;

public class TkayNativeEndCardView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.video.signal.f {
    private static final java.lang.String n = "tkay_reward_endcard_native_hor";
    private static final java.lang.String o = "tkay_reward_endcard_native_land";
    private static final java.lang.String p = "tkay_reward_endcard_native_half_portrait";
    private static final java.lang.String q = "tkay_reward_endcard_native_half_landscape";
    private android.widget.ImageView A;
    private android.widget.TextView B;
    private android.widget.TextView C;
    private android.widget.TextView D;
    private android.widget.LinearLayout E;
    private com.tkay.expressad.widget.FeedBackButton F;
    private java.lang.Runnable G;
    private android.widget.RelativeLayout H;
    private com.tkay.expressad.video.signal.factory.b I;
    private boolean J;
    private boolean K;
    private int L;
    private boolean M;
    private boolean N;
    private boolean O;
    private android.view.animation.AlphaAnimation P;
    private int Q;
    private int R;
    private int S;
    private int T;
    private boolean U;
    private android.view.View V;
    private android.widget.TextView W;
    private boolean aa;
    private java.lang.String ab;
    private com.tkay.expressad.foundation.d.d ac;
    private com.tkay.expressad.shake.MBShakeView ad;
    private com.tkay.expressad.shake.b ae;
    private com.tkay.expressad.video.dynview.widget.TkayBaitClickView af;
    private int ag;
    private android.view.ViewGroup r;
    private android.view.ViewGroup s;
    private android.widget.RelativeLayout t;
    private android.widget.RelativeLayout u;
    private android.widget.ImageView v;
    private android.widget.ImageView w;
    private android.widget.ImageView x;
    private android.widget.ImageView y;
    private android.widget.ImageView z;


    final class 10 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        10(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r2, java.lang.String r3) {
                r1 = this;
                if (r2 == 0) goto L6a
                boolean r3 = r2.isRecycled()
                if (r3 != 0) goto L6a
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.d(r3)     // Catch: java.lang.Throwable -> L58
                r0 = 0
                if (r3 == 0) goto L29
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                boolean r3 = r3.i     // Catch: java.lang.Throwable -> L58
                if (r3 == 0) goto L20
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.d(r3)     // Catch: java.lang.Throwable -> L58
                r3.setBackgroundDrawable(r0)     // Catch: java.lang.Throwable -> L58
            L20:
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.d(r3)     // Catch: java.lang.Throwable -> L58
                r3.setImageBitmap(r2)     // Catch: java.lang.Throwable -> L58
            L29:
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.graphics.Bitmap r2 = r3.blurBitmap(r2)     // Catch: java.lang.Throwable -> L58
                if (r2 == 0) goto L57
                boolean r3 = r2.isRecycled()     // Catch: java.lang.Throwable -> L58
                if (r3 != 0) goto L57
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.e(r3)     // Catch: java.lang.Throwable -> L58
                if (r3 == 0) goto L57
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                boolean r3 = r3.i     // Catch: java.lang.Throwable -> L58
                if (r3 == 0) goto L4e
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.e(r3)     // Catch: java.lang.Throwable -> L58
                r3.setBackgroundDrawable(r0)     // Catch: java.lang.Throwable -> L58
            L4e:
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r1.a     // Catch: java.lang.Throwable -> L58
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.e(r3)     // Catch: java.lang.Throwable -> L58
                r3.setImageBitmap(r2)     // Catch: java.lang.Throwable -> L58
            L57:
                return
            L58:
                com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r1.a
                android.widget.ImageView r2 = com.tkay.expressad.video.module.TkayNativeEndCardView.e(r2)
                if (r2 == 0) goto L6a
                com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r1.a
                android.widget.ImageView r2 = com.tkay.expressad.video.module.TkayNativeEndCardView.e(r2)
                r3 = 4
                r2.setVisibility(r3)
            L6a:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    final class 11 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        11(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                if (r3 == 0) goto L57
                boolean r4 = r3.isRecycled()
                if (r4 != 0) goto L57
                if (r3 == 0) goto L57
                boolean r4 = r3.isRecycled()
                if (r4 != 0) goto L57
                int r4 = r3.getWidth()     // Catch: java.lang.Throwable -> L57
                float r4 = (float) r4     // Catch: java.lang.Throwable -> L57
                r0 = 1065353216(0x3f800000, float:1.0)
                float r4 = r4 * r0
                int r0 = r3.getHeight()     // Catch: java.lang.Throwable -> L57
                float r0 = (float) r0     // Catch: java.lang.Throwable -> L57
                float r4 = r4 / r0
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a     // Catch: java.lang.Throwable -> L57
                android.content.Context r0 = r0.a     // Catch: java.lang.Throwable -> L57
                r1 = 1094713344(0x41400000, float:12.0)
                int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)     // Catch: java.lang.Throwable -> L57
                float r1 = (float) r0     // Catch: java.lang.Throwable -> L57
                float r1 = r1 * r4
                int r4 = (int) r1     // Catch: java.lang.Throwable -> L57
                com.tkay.expressad.video.module.TkayNativeEndCardView r1 = r2.a     // Catch: java.lang.Throwable -> L57
                android.widget.ImageView r1 = com.tkay.expressad.video.module.TkayNativeEndCardView.f(r1)     // Catch: java.lang.Throwable -> L57
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()     // Catch: java.lang.Throwable -> L57
                r1.height = r0     // Catch: java.lang.Throwable -> L57
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a     // Catch: java.lang.Throwable -> L57
                android.widget.ImageView r0 = com.tkay.expressad.video.module.TkayNativeEndCardView.f(r0)     // Catch: java.lang.Throwable -> L57
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L57
                r0.width = r4     // Catch: java.lang.Throwable -> L57
                com.tkay.expressad.video.module.TkayNativeEndCardView r4 = r2.a     // Catch: java.lang.Throwable -> L57
                android.widget.ImageView r4 = com.tkay.expressad.video.module.TkayNativeEndCardView.f(r4)     // Catch: java.lang.Throwable -> L57
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L57
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r2.a     // Catch: java.lang.Throwable -> L57
                android.widget.ImageView r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.f(r3)     // Catch: java.lang.Throwable -> L57
                r4 = 1426063360(0x55000000, float:8.796093E12)
                r3.setBackgroundColor(r4)     // Catch: java.lang.Throwable -> L57
            L57:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    final class 12 implements android.view.View.OnClickListener {
        final java.lang.String a;
        final com.tkay.expressad.video.module.TkayNativeEndCardView b;

        12(com.tkay.expressad.video.module.TkayNativeEndCardView r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r1.b
                android.content.Context r2 = r2.a
                java.lang.String r0 = r1.a
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }







    final class 4 implements com.tkay.expressad.foundation.f.a {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        4(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                r1 = 1
                com.tkay.expressad.video.module.TkayNativeEndCardView.b(r0, r1)
                return
        }

        @Override
        public final void b() {
                r2 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                r1 = 0
                com.tkay.expressad.video.module.TkayNativeEndCardView.b(r0, r1)
                return
        }

        @Override
        public final void c() {
                r2 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                r1 = 0
                com.tkay.expressad.video.module.TkayNativeEndCardView.b(r0, r1)
                return
        }
    }

    final class 5 implements android.view.View.OnClickListener {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        5(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r1.a
                r0 = 0
                com.tkay.expressad.video.module.TkayNativeEndCardView.a(r2, r0)
                return
        }
    }

    final class 6 extends com.tkay.expressad.shake.b {
        final com.tkay.expressad.video.module.TkayNativeEndCardView h;

        6(com.tkay.expressad.video.module.TkayNativeEndCardView r1, int r2, int r3) {
                r0 = this;
                r0.h = r1
                r0.<init>(r2, r3)
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.h
                boolean r0 = com.tkay.expressad.video.module.TkayNativeEndCardView.p(r0)
                if (r0 == 0) goto L9
                return
            L9:
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.h
                boolean r0 = com.tkay.expressad.video.module.TkayNativeEndCardView.q(r0)
                if (r0 != 0) goto L12
                return
            L12:
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.h
                r1 = 4
                com.tkay.expressad.video.module.TkayNativeEndCardView.a(r0, r1)
                return
        }
    }

    final class 7 implements android.view.View.OnClickListener {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        7(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r1.a
                r0 = 0
                com.tkay.expressad.video.module.TkayNativeEndCardView.a(r2, r0)
                return
        }
    }

    final class 8 implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        8(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                r1 = 2
                com.tkay.expressad.video.module.TkayNativeEndCardView.a(r0, r1)
                return
        }
    }

    final class 9 implements com.tkay.expressad.video.dynview.f.h {
        final com.tkay.expressad.video.module.TkayNativeEndCardView a;

        9(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.a r3) {
                r2 = this;
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                android.view.View r1 = r3.a()
                r0.addView(r1)
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                boolean r1 = r3.c()
                com.tkay.expressad.video.module.TkayNativeEndCardView.a(r0, r1)
                com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.a
                android.view.View r3 = r3.a()
                boolean r3 = com.tkay.expressad.video.module.TkayNativeEndCardView.a(r0, r3)
                r0.f = r3
                com.tkay.expressad.video.module.TkayNativeEndCardView r3 = r2.a
                com.tkay.expressad.video.module.TkayNativeEndCardView.c(r3)
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.c.b r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "errorMsg:"
                r0.<init>(r1)
                java.lang.String r3 = r3.b()
                r0.append(r3)
                return
        }
    }

    public TkayNativeEndCardView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.J = r1
            r0.K = r1
            r0.L = r1
            r0.M = r1
            r0.N = r1
            r0.O = r1
            r0.U = r1
            r1 = 1
            r0.ag = r1
            return
    }

    public TkayNativeEndCardView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.J = r1
            r0.K = r1
            r0.L = r1
            r0.M = r1
            r0.N = r1
            r0.O = r1
            r0.U = r1
            r1 = 1
            r0.ag = r1
            return
    }

    public TkayNativeEndCardView(android.content.Context r1, android.util.AttributeSet r2, boolean r3, int r4, boolean r5, int r6, int r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r1 = 0
            r0.J = r1
            r0.K = r1
            r0.L = r1
            r0.M = r1
            r0.N = r1
            r0.O = r1
            r0.U = r1
            r1 = 1
            r0.ag = r1
            return
    }

    private void a() {
            r3 = this;
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            android.content.Context r0 = r3.getContext()
            com.tkay.expressad.foundation.d.c r1 = r3.b
            int r2 = r3.j
            com.tkay.expressad.video.dynview.c r0 = com.tkay.expressad.video.dynview.j.c.a(r0, r1, r2)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayNativeEndCardView$9 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$9
            r1.<init>(r3)
            com.tkay.expressad.video.dynview.b.a(r0, r1)
            return
    }

    private void a(android.view.View r2) {
            r1 = this;
            if (r2 != 0) goto Lb
            r1.setLayout()
            com.tkay.expressad.video.signal.factory.b r2 = r1.I
            r1.preLoadData(r2)
            goto L23
        Lb:
            android.view.ViewParent r0 = r2.getParent()
            if (r0 == 0) goto L1a
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        L1a:
            r1.addView(r2)
            r1.b(r2)
            r1.c()
        L23:
            r1.h()
            return
    }

    static void a(com.tkay.expressad.video.module.TkayNativeEndCardView r2, int r3) {
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L22
            r1.<init>()     // Catch: org.json.JSONException -> L22
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L1f
            org.json.JSONObject r3 = r2.a(r3)     // Catch: org.json.JSONException -> L1f
            r1.put(r0, r3)     // Catch: org.json.JSONException -> L1f
            com.tkay.expressad.foundation.d.c r3 = r2.b     // Catch: org.json.JSONException -> L1f
            int r3 = r3.k()     // Catch: org.json.JSONException -> L1f
            r0 = 5
            if (r3 != r0) goto L27
            java.lang.String r3 = "camp_position"
            r0 = 0
            r1.put(r3, r0)     // Catch: org.json.JSONException -> L1f
            goto L27
        L1f:
            r3 = move-exception
            r0 = r1
            goto L23
        L22:
            r3 = move-exception
        L23:
            r3.printStackTrace()
            r1 = r0
        L27:
            com.tkay.expressad.video.module.a.a r2 = r2.e
            r3 = 105(0x69, float:1.47E-43)
            r2.a(r3, r1)
            return
    }

    static boolean a(com.tkay.expressad.video.module.TkayNativeEndCardView r1) {
            r0 = 1
            r1.K = r0
            return r0
    }

    static boolean a(com.tkay.expressad.video.module.TkayNativeEndCardView r0, android.view.View r1) {
            boolean r0 = r0.b(r1)
            return r0
    }

    static boolean a(com.tkay.expressad.video.module.TkayNativeEndCardView r0, boolean r1) {
            r0.U = r1
            return r1
    }

    static android.view.View b(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            android.view.View r0 = r0.V
            return r0
    }

    private void b() {
            r6 = this;
            int r0 = r6.ag
            java.lang.String r1 = "tkay_reward_endcard_native_half_landscape"
            java.lang.String r2 = "tkay_reward_endcard_native_land"
            java.lang.String r3 = "tkay_reward_endcard_native_half_portrait"
            java.lang.String r4 = "tkay_reward_endcard_native_hor"
            if (r0 != 0) goto L1d
            boolean r0 = r6.aa
            if (r0 == 0) goto L11
            goto L12
        L11:
            r3 = r4
        L12:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L1d:
            r5 = 1
            if (r0 != r5) goto L27
            boolean r0 = r6.aa
            if (r0 == 0) goto L25
            goto L2a
        L25:
            r3 = r4
            goto L2a
        L27:
            java.lang.String r0 = ""
            r3 = r0
        L2a:
            int r0 = r6.ag
            r4 = 2
            if (r0 != r4) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L34:
            r1 = r2
        L35:
            r3 = r1
        L36:
            int r0 = r6.findLayout(r3)
            if (r0 <= 0) goto L6f
            boolean r1 = r6.isLandscape()
            r2 = 0
            if (r1 == 0) goto L57
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.s = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.s
            boolean r0 = r6.b(r0)
            goto L6a
        L57:
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.r = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.r
            boolean r0 = r6.b(r0)
        L6a:
            r6.f = r0
            r6.e()
        L6f:
            return
    }

    private boolean b(int r3) {
            r2 = this;
            boolean r0 = r2.isLandscape()
            r1 = 0
            if (r0 == 0) goto L1b
            android.view.LayoutInflater r0 = r2.c
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.s = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.s
            boolean r3 = r2.b(r3)
            return r3
        L1b:
            android.view.LayoutInflater r0 = r2.c
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.r = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.r
            boolean r3 = r2.b(r3)
            return r3
    }

    private boolean b(android.view.View r10) {
            r9 = this;
            r0 = 0
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_native_ec_layout"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L170
            r9.t = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_native_ec_layer_layout"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L170
            r9.u = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_iv_adbanner"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L170
            r9.w = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_iv_icon"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L170
            r9.x = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_iv_flag"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L170
            r9.y = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_iv_link"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L170
            r9.z = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_tv_apptitle"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L170
            r9.B = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_sv_starlevel"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1     // Catch: java.lang.Throwable -> L170
            r9.E = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_iv_close"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            r9.V = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_tv_cta"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            if (r1 == 0) goto La5
            boolean r2 = r1 instanceof android.widget.TextView     // Catch: java.lang.Throwable -> L170
            if (r2 == 0) goto La5
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L170
            r9.W = r1     // Catch: java.lang.Throwable -> L170
        La5:
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_native_endcard_feed_btn"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            com.tkay.expressad.widget.FeedBackButton r1 = (com.tkay.expressad.widget.FeedBackButton) r1     // Catch: java.lang.Throwable -> L170
            r9.F = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_native_ec_controller"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L170
            r9.H = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r2 = "tkay_iv_adbanner_bg"
            int r1 = r9.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L170
            r9.v = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.i     // Catch: java.lang.Throwable -> L170
            r2 = 5
            r3 = 4
            r4 = 3
            r5 = 2
            r6 = 1
            r7 = 6
            if (r1 == 0) goto L122
            android.widget.ImageView r10 = r9.w     // Catch: java.lang.Throwable -> L170
            r1 = 10
            if (r10 == 0) goto Lf2
            android.widget.ImageView r10 = r9.w     // Catch: java.lang.Throwable -> L170
            boolean r10 = r10 instanceof com.tkay.expressad.videocommon.view.RoundImageView     // Catch: java.lang.Throwable -> L170
            if (r10 == 0) goto Lf2
            android.widget.ImageView r10 = r9.w     // Catch: java.lang.Throwable -> L170
            com.tkay.expressad.videocommon.view.RoundImageView r10 = (com.tkay.expressad.videocommon.view.RoundImageView) r10     // Catch: java.lang.Throwable -> L170
            r10.setBorderRadius(r1)     // Catch: java.lang.Throwable -> L170
        Lf2:
            android.widget.ImageView r10 = r9.x     // Catch: java.lang.Throwable -> L170
            if (r10 == 0) goto L103
            android.widget.ImageView r10 = r9.x     // Catch: java.lang.Throwable -> L170
            boolean r10 = r10 instanceof com.tkay.expressad.videocommon.view.RoundImageView     // Catch: java.lang.Throwable -> L170
            if (r10 == 0) goto L103
            android.widget.ImageView r10 = r9.x     // Catch: java.lang.Throwable -> L170
            com.tkay.expressad.videocommon.view.RoundImageView r10 = (com.tkay.expressad.videocommon.view.RoundImageView) r10     // Catch: java.lang.Throwable -> L170
            r10.setBorderRadius(r1)     // Catch: java.lang.Throwable -> L170
        L103:
            android.view.View[] r10 = new android.view.View[r7]     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = r9.v     // Catch: java.lang.Throwable -> L170
            r10[r0] = r1     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = r9.w     // Catch: java.lang.Throwable -> L170
            r10[r6] = r1     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r1 = r9.x     // Catch: java.lang.Throwable -> L170
            r10[r5] = r1     // Catch: java.lang.Throwable -> L170
            android.widget.TextView r1 = r9.B     // Catch: java.lang.Throwable -> L170
            r10[r4] = r1     // Catch: java.lang.Throwable -> L170
            android.widget.LinearLayout r1 = r9.E     // Catch: java.lang.Throwable -> L170
            r10[r3] = r1     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r9.V     // Catch: java.lang.Throwable -> L170
            r10[r2] = r1     // Catch: java.lang.Throwable -> L170
            boolean r10 = r9.isNotNULL(r10)     // Catch: java.lang.Throwable -> L170
            return r10
        L122:
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r8 = "tkay_tv_appdesc"
            int r1 = r9.filterFindViewId(r1, r8)     // Catch: java.lang.Throwable -> L170
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L170
            r9.C = r1     // Catch: java.lang.Throwable -> L170
            boolean r1 = r9.U     // Catch: java.lang.Throwable -> L170
            java.lang.String r8 = "tkay_tv_number"
            int r1 = r9.filterFindViewId(r1, r8)     // Catch: java.lang.Throwable -> L170
            android.view.View r10 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> L170
            android.widget.TextView r10 = (android.widget.TextView) r10     // Catch: java.lang.Throwable -> L170
            r9.D = r10     // Catch: java.lang.Throwable -> L170
            r1 = 9
            android.view.View[] r1 = new android.view.View[r1]     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r8 = r9.v     // Catch: java.lang.Throwable -> L170
            r1[r0] = r8     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r8 = r9.w     // Catch: java.lang.Throwable -> L170
            r1[r6] = r8     // Catch: java.lang.Throwable -> L170
            android.widget.ImageView r6 = r9.x     // Catch: java.lang.Throwable -> L170
            r1[r5] = r6     // Catch: java.lang.Throwable -> L170
            android.widget.TextView r5 = r9.B     // Catch: java.lang.Throwable -> L170
            r1[r4] = r5     // Catch: java.lang.Throwable -> L170
            android.widget.TextView r4 = r9.C     // Catch: java.lang.Throwable -> L170
            r1[r3] = r4     // Catch: java.lang.Throwable -> L170
            r1[r2] = r10     // Catch: java.lang.Throwable -> L170
            android.widget.LinearLayout r10 = r9.E     // Catch: java.lang.Throwable -> L170
            r1[r7] = r10     // Catch: java.lang.Throwable -> L170
            r10 = 7
            android.view.View r2 = r9.V     // Catch: java.lang.Throwable -> L170
            r1[r10] = r2     // Catch: java.lang.Throwable -> L170
            r10 = 8
            android.widget.TextView r2 = r9.W     // Catch: java.lang.Throwable -> L170
            r1[r10] = r2     // Catch: java.lang.Throwable -> L170
            boolean r10 = r9.isNotNULL(r1)     // Catch: java.lang.Throwable -> L170
            return r10
        L170:
            r10 = move-exception
            r10.getMessage()
            return r0
    }

    static boolean b(com.tkay.expressad.video.module.TkayNativeEndCardView r0, boolean r1) {
            r0.O = r1
            return r1
    }

    private void c(int r3) {
            r2 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L22
            r1.<init>()     // Catch: org.json.JSONException -> L22
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L1f
            org.json.JSONObject r3 = r2.a(r3)     // Catch: org.json.JSONException -> L1f
            r1.put(r0, r3)     // Catch: org.json.JSONException -> L1f
            com.tkay.expressad.foundation.d.c r3 = r2.b     // Catch: org.json.JSONException -> L1f
            int r3 = r3.k()     // Catch: org.json.JSONException -> L1f
            r0 = 5
            if (r3 != r0) goto L27
            java.lang.String r3 = "camp_position"
            r0 = 0
            r1.put(r3, r0)     // Catch: org.json.JSONException -> L1f
            goto L27
        L1f:
            r3 = move-exception
            r0 = r1
            goto L23
        L22:
            r3 = move-exception
        L23:
            r3.printStackTrace()
            r1 = r0
        L27:
            com.tkay.expressad.video.module.a.a r3 = r2.e
            r0 = 105(0x69, float:1.47E-43)
            r3.a(r0, r1)
            return
    }

    static void c(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            r0.e()
            return
    }

    static android.widget.ImageView d(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            android.widget.ImageView r0 = r0.w
            return r0
    }

    static android.widget.ImageView e(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            android.widget.ImageView r0 = r0.v
            return r0
    }

    private void e() {
            r3 = this;
            r3.c()
            boolean r0 = r3.f
            if (r0 != 0) goto L10
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 104(0x68, float:1.46E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        L10:
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1120403456(0x42c80000, float:100.0)
            r0.<init>(r1, r2)
            r3.P = r0
            r1 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r1)
            return
    }

    static android.widget.ImageView f(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            android.widget.ImageView r0 = r0.y
            return r0
    }

    private void f() {
            r4 = this;
            com.tkay.expressad.video.module.TkayNativeEndCardView$10 r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView$10
            r0.<init>(r4)
            android.content.Context r1 = r4.a
            android.content.Context r1 = r1.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)
            com.tkay.expressad.foundation.d.c r2 = r4.b
            java.lang.String r2 = r2.be()
            r1.a(r2, r0)
            com.tkay.expressad.video.module.a.a.j r0 = new com.tkay.expressad.video.module.a.a.j
            android.widget.ImageView r1 = r4.x
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r3 = 1090519040(0x41000000, float:8.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r0.<init>(r1, r2)
            android.content.Context r1 = r4.a
            android.content.Context r1 = r1.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)
            com.tkay.expressad.foundation.d.c r2 = r4.b
            java.lang.String r2 = r2.bd()
            r1.a(r2, r0)
            android.widget.TextView r0 = r4.B
            com.tkay.expressad.foundation.d.c r1 = r4.b
            java.lang.String r1 = r1.bb()
            r0.setText(r1)
            android.widget.TextView r0 = r4.W
            if (r0 == 0) goto L56
            com.tkay.expressad.foundation.d.c r1 = r4.b
            java.lang.String r1 = r1.cU
            r0.setText(r1)
        L56:
            android.widget.TextView r0 = r4.C
            if (r0 == 0) goto L63
            com.tkay.expressad.foundation.d.c r1 = r4.b
            java.lang.String r1 = r1.bc()
            r0.setText(r1)
        L63:
            android.widget.TextView r0 = r4.D
            if (r0 == 0) goto L81
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.tkay.expressad.foundation.d.c r2 = r4.b
            int r2 = r2.aY()
            r1.append(r2)
            java.lang.String r2 = ")"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.setText(r1)
        L81:
            android.widget.LinearLayout r0 = r4.E
            r0.removeAllViews()
            com.tkay.expressad.foundation.d.c r0 = r4.b
            double r0 = r0.aX()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L94
            r0 = 4617315517961601024(0x4014000000000000, double:5.0)
        L94:
            android.widget.LinearLayout r2 = r4.E
            boolean r3 = r2 instanceof com.tkay.expressad.videocommon.view.StarLevelView
            if (r3 == 0) goto L9f
            com.tkay.expressad.videocommon.view.StarLevelView r2 = (com.tkay.expressad.videocommon.view.StarLevelView) r2
            r2.initScore(r0)
        L9f:
            android.widget.LinearLayout r2 = r4.E
            boolean r3 = r2 instanceof com.tkay.expressad.video.dynview.widget.TYLevelLayoutView
            if (r3 == 0) goto Lb0
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r2 = (com.tkay.expressad.video.dynview.widget.TYLevelLayoutView) r2
            com.tkay.expressad.foundation.d.c r3 = r4.b
            int r3 = r3.aY()
            r2.setRatingAndUser(r0, r3)
        Lb0:
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r0 = r0.I()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lcd
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r0 = r0.I()
            java.lang.String r1 = "alecfc=1"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto Lcd
            r0 = 1
            r4.J = r0
        Lcd:
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r0 = r0.aE()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ldc
            java.lang.String r0 = "https://mores.toponad.com/image/default/mintegral_logo.png"
            goto Le2
        Ldc:
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r0 = r0.aE()
        Le2:
            android.content.Context r1 = r4.a
            android.content.Context r1 = r1.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)
            com.tkay.expressad.video.module.TkayNativeEndCardView$11 r2 = new com.tkay.expressad.video.module.TkayNativeEndCardView$11
            r2.<init>(r4)
            r1.a(r0, r2)
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            r1 = 8
            if (r0 == 0) goto L120
            java.lang.String r0 = r0.J()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L115
            android.widget.ImageView r2 = r4.z
            r2.setVisibility(r1)
        L115:
            android.widget.ImageView r2 = r4.z
            com.tkay.expressad.video.module.TkayNativeEndCardView$12 r3 = new com.tkay.expressad.video.module.TkayNativeEndCardView$12
            r3.<init>(r4, r0)
            r2.setOnClickListener(r3)
            goto L125
        L120:
            android.widget.ImageView r0 = r4.z
            r0.setVisibility(r1)
        L125:
            boolean r0 = r4.K
            if (r0 != 0) goto L12e
            android.view.View r0 = r4.V
            r0.setVisibility(r1)
        L12e:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r0 >= r2) goto L13b
            android.widget.ImageView r0 = r4.v
            if (r0 == 0) goto L13b
            r0.setVisibility(r1)
        L13b:
            return
    }

    private int g() {
            r6 = this;
            int r0 = r6.ag
            java.lang.String r1 = "tkay_reward_endcard_native_half_landscape"
            java.lang.String r2 = "tkay_reward_endcard_native_land"
            java.lang.String r3 = "tkay_reward_endcard_native_half_portrait"
            java.lang.String r4 = "tkay_reward_endcard_native_hor"
            if (r0 != 0) goto L1d
            boolean r0 = r6.aa
            if (r0 == 0) goto L11
            goto L12
        L11:
            r3 = r4
        L12:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L1d:
            r5 = 1
            if (r0 != r5) goto L27
            boolean r0 = r6.aa
            if (r0 == 0) goto L25
            goto L2a
        L25:
            r3 = r4
            goto L2a
        L27:
            java.lang.String r0 = ""
            r3 = r0
        L2a:
            int r0 = r6.ag
            r4 = 2
            if (r0 != r4) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L34:
            r1 = r2
        L35:
            r3 = r1
        L36:
            int r0 = r6.findLayout(r3)
            return r0
    }

    static boolean g(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            boolean r0 = r0.J
            return r0
    }

    static int h(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            int r0 = r0.Q
            return r0
    }

    private void h() {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L12
            android.widget.RelativeLayout r0 = r4.H
            if (r0 == 0) goto L12
            com.tkay.expressad.video.module.TkayNativeEndCardView$3 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$3
            r1.<init>(r4)
            r2 = 200(0xc8, double:9.9E-322)
            r0.postDelayed(r1, r2)
        L12:
            return
    }

    static int i(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            int r0 = r0.S
            return r0
    }

    private void i() {
            r4 = this;
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L9d
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r1 = r4.ab
            r0.l(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.ab
            r1.append(r2)
            java.lang.String r2 = "_2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.video.module.TkayNativeEndCardView$4 r3 = new com.tkay.expressad.video.module.TkayNativeEndCardView$4
            r3.<init>(r4)
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.foundation.d.c r3 = r4.b
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            java.lang.String r3 = "_1"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r3 = r4.F
            r0.a(r1, r3)
            com.tkay.expressad.widget.FeedBackButton r0 = r4.F
            if (r0 == 0) goto La6
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r2 = r4.F
            r0.a(r1, r2)
            return
        L9d:
            com.tkay.expressad.widget.FeedBackButton r0 = r4.F
            if (r0 == 0) goto La6
            r1 = 8
            r0.setVisibility(r1)
        La6:
            return
    }

    static int j(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            int r0 = r0.R
            return r0
    }

    private void j() {
            r6 = this;
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto Lf3
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Lf4
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> Lf4
            if (r0 != 0) goto Ld
            return
        Ld:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> Lf4
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf4
            if (r1 == 0) goto L1f
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> Lf4
        L1f:
            java.lang.String r1 = "shake_show"
            java.lang.String r1 = com.tkay.expressad.foundation.h.x.a(r0, r1)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r2 = "shake_strength"
            java.lang.String r2 = com.tkay.expressad.foundation.h.x.a(r0, r2)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = "shake_time"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r3)     // Catch: java.lang.Throwable -> Lf4
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lf4
            if (r3 != 0) goto Lf3
            java.lang.String r3 = "1"
            boolean r1 = r1.equals(r3)     // Catch: java.lang.Throwable -> Lf4
            if (r1 == 0) goto Lf3
            com.tkay.expressad.shake.MBShakeView r1 = r6.ad     // Catch: java.lang.Throwable -> Lf4
            if (r1 == 0) goto L44
            return
        L44:
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r6.af     // Catch: java.lang.Throwable -> Lf4
            if (r1 == 0) goto L4f
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r6.af     // Catch: java.lang.Throwable -> Lf4
            r3 = 8
            r1.setVisibility(r3)     // Catch: java.lang.Throwable -> Lf4
        L4f:
            com.tkay.expressad.shake.MBShakeView r1 = new com.tkay.expressad.shake.MBShakeView     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r3 = r6.getContext()     // Catch: java.lang.Throwable -> Lf4
            r1.<init>(r3)     // Catch: java.lang.Throwable -> Lf4
            r6.ad = r1     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r3 = r6.b     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = r3.cU     // Catch: java.lang.Throwable -> Lf4
            r4 = 1
            r1.initView(r3, r4)     // Catch: java.lang.Throwable -> Lf4
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> Lf4
            r3 = -2
            r1.<init>(r3, r3)     // Catch: java.lang.Throwable -> Lf4
            boolean r3 = r6.isLandscape()     // Catch: java.lang.Throwable -> Lf4
            if (r3 != 0) goto L8e
            java.lang.String r3 = "tkay_iv_logo"
            int r3 = r6.findID(r3)     // Catch: java.lang.Throwable -> Lf4
            r4 = 2
            r1.addRule(r4, r3)     // Catch: java.lang.Throwable -> Lf4
            r3 = 14
            r1.addRule(r3)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.shake.MBShakeView r3 = r6.ad     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r4 = r6.getContext()     // Catch: java.lang.Throwable -> Lf4
            r5 = 1101004800(0x41a00000, float:20.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r5)     // Catch: java.lang.Throwable -> Lf4
            r5 = 0
            r3.setPadding(r5, r5, r5, r4)     // Catch: java.lang.Throwable -> Lf4
            goto L93
        L8e:
            r3 = 13
            r1.addRule(r3)     // Catch: java.lang.Throwable -> Lf4
        L93:
            com.tkay.expressad.shake.MBShakeView r3 = r6.ad     // Catch: java.lang.Throwable -> Lf4
            r3.setLayoutParams(r1)     // Catch: java.lang.Throwable -> Lf4
            android.widget.RelativeLayout r1 = r6.t     // Catch: java.lang.Throwable -> Lf4
            if (r1 != 0) goto L9d
            return
        L9d:
            android.widget.RelativeLayout r1 = r6.t     // Catch: java.lang.Throwable -> Lf4
            boolean r1 = r1.isShown()     // Catch: java.lang.Throwable -> Lf4
            if (r1 != 0) goto La6
            return
        La6:
            android.widget.TextView r1 = r6.W     // Catch: java.lang.Throwable -> Lf4
            if (r1 == 0) goto Lb1
            android.widget.RelativeLayout r1 = r6.t     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.shake.MBShakeView r3 = r6.ad     // Catch: java.lang.Throwable -> Lf4
            r1.addView(r3)     // Catch: java.lang.Throwable -> Lf4
        Lb1:
            android.widget.TextView r1 = r6.W     // Catch: java.lang.Throwable -> Lf4
            r3 = 4
            r1.setVisibility(r3)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.shake.MBShakeView r1 = r6.ad     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.TkayNativeEndCardView$5 r3 = new com.tkay.expressad.video.module.TkayNativeEndCardView$5     // Catch: java.lang.Throwable -> Lf4
            r3.<init>(r6)     // Catch: java.lang.Throwable -> Lf4
            r1.setOnClickListener(r3)     // Catch: java.lang.Throwable -> Lf4
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            r3 = 10
            if (r1 != 0) goto Ld1
            int r1 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r1 >= 0) goto Ld0
            goto Ld1
        Ld0:
            r3 = r1
        Ld1:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf4
            r2 = 5000(0x1388, float:7.006E-42)
            if (r1 != 0) goto Le3
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> Lf4
            if (r0 > 0) goto Le0
            goto Le3
        Le0:
            int r0 = r0 * 1000
            r2 = r0
        Le3:
            com.tkay.expressad.video.module.TkayNativeEndCardView$6 r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView$6     // Catch: java.lang.Throwable -> Lf4
            r0.<init>(r6, r3, r2)     // Catch: java.lang.Throwable -> Lf4
            r6.ae = r0     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.shake.b r1 = r6.ae     // Catch: java.lang.Throwable -> Lf4
            r0.a(r1)     // Catch: java.lang.Throwable -> Lf4
        Lf3:
            return
        Lf4:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static int k(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            int r0 = r0.T
            return r0
    }

    private void k() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L72
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L73
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto Ld
            return
        Ld:
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L73
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L73
            if (r1 == 0) goto L1f
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> L73
        L1f:
            java.lang.String r1 = "bait_click"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r1)     // Catch: java.lang.Throwable -> L73
            r1 = 1
            int r1 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L2b
            goto L2f
        L2b:
            r2 = move-exception
            r2.getMessage()     // Catch: java.lang.Throwable -> L73
        L2f:
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L72
            if (r1 == 0) goto L72
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r3.af     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L3c
            return
        L3c:
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView     // Catch: java.lang.Throwable -> L73
            android.content.Context r2 = r3.getContext()     // Catch: java.lang.Throwable -> L73
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L73
            r3.af = r0     // Catch: java.lang.Throwable -> L73
            r2 = 1342177280(0x50000000, float:8.589935E9)
            r0.init(r2, r1)     // Catch: java.lang.Throwable -> L73
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L73
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> L73
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r3.af     // Catch: java.lang.Throwable -> L73
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L73
            android.widget.RelativeLayout r0 = r3.u     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L72
            android.widget.RelativeLayout r0 = r3.u     // Catch: java.lang.Throwable -> L73
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r3.af     // Catch: java.lang.Throwable -> L73
            r0.addView(r1)     // Catch: java.lang.Throwable -> L73
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r3.af     // Catch: java.lang.Throwable -> L73
            r0.startAnimation()     // Catch: java.lang.Throwable -> L73
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r3.af     // Catch: java.lang.Throwable -> L73
            com.tkay.expressad.video.module.TkayNativeEndCardView$7 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$7     // Catch: java.lang.Throwable -> L73
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L73
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L73
        L72:
            return
        L73:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static android.widget.RelativeLayout l(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            android.widget.RelativeLayout r0 = r0.H
            return r0
    }

    private void l() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto L3d
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto Ld
            return
        Ld:
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L3e
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L3e
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L1f
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L3e
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> L3e
        L1f:
            java.lang.String r1 = "alac"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r1)     // Catch: java.lang.Throwable -> L3e
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto L3d
            java.lang.String r1 = "1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto L3d
            com.tkay.expressad.video.module.TkayNativeEndCardView$8 r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView$8     // Catch: java.lang.Throwable -> L3e
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L3e
            r1 = 1000(0x3e8, double:4.94E-321)
            r3.postDelayed(r0, r1)     // Catch: java.lang.Throwable -> L3e
        L3d:
            return
        L3e:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static android.view.animation.AlphaAnimation m(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            android.view.animation.AlphaAnimation r0 = r0.P
            return r0
    }

    static boolean n(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            boolean r0 = r0.K
            return r0
    }

    static void o(com.tkay.expressad.video.module.TkayNativeEndCardView r4) {
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L9d
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r1 = r4.ab
            r0.l(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.ab
            r1.append(r2)
            java.lang.String r2 = "_2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.video.module.TkayNativeEndCardView$4 r3 = new com.tkay.expressad.video.module.TkayNativeEndCardView$4
            r3.<init>(r4)
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.foundation.d.c r3 = r4.b
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            java.lang.String r3 = "_1"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r3 = r4.F
            r0.a(r1, r3)
            com.tkay.expressad.widget.FeedBackButton r0 = r4.F
            if (r0 == 0) goto La6
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ab
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r4 = r4.F
            r0.a(r1, r4)
            return
        L9d:
            com.tkay.expressad.widget.FeedBackButton r4 = r4.F
            if (r4 == 0) goto La6
            r0 = 8
            r4.setVisibility(r0)
        La6:
            return
    }

    static boolean p(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            boolean r0 = r0.O
            return r0
    }

    static boolean q(com.tkay.expressad.video.module.TkayNativeEndCardView r0) {
            boolean r0 = r0.N
            return r0
    }

    public android.graphics.Bitmap blurBitmap(android.graphics.Bitmap r6) {
            r5 = this;
            int r0 = r6.getWidth()     // Catch: java.lang.Throwable -> L3a
            int r1 = r6.getHeight()     // Catch: java.lang.Throwable -> L3a
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L3a
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r5.a     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L3a
            android.renderscript.RenderScript r1 = android.renderscript.RenderScript.create(r1)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.Element r2 = android.renderscript.Element.U8_4(r1)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r1, r2)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.Allocation r6 = android.renderscript.Allocation.createFromBitmap(r1, r6)     // Catch: java.lang.Throwable -> L3a
            android.renderscript.Allocation r3 = android.renderscript.Allocation.createFromBitmap(r1, r0)     // Catch: java.lang.Throwable -> L3a
            r4 = 1103626240(0x41c80000, float:25.0)
            r2.setRadius(r4)     // Catch: java.lang.Throwable -> L3a
            r2.setInput(r6)     // Catch: java.lang.Throwable -> L3a
            r2.forEach(r3)     // Catch: java.lang.Throwable -> L3a
            r3.copyTo(r0)     // Catch: java.lang.Throwable -> L3a
            r1.destroy()     // Catch: java.lang.Throwable -> L3a
            return r0
        L3a:
            r6 = 0
            return r6
    }

    @Override
    protected final void c() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L38
            android.widget.RelativeLayout r0 = r2.t
            com.tkay.expressad.video.module.TkayNativeEndCardView$13 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$13
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.V
            com.tkay.expressad.video.module.TkayNativeEndCardView$14 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$14
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.W
            if (r0 == 0) goto L24
            com.tkay.expressad.video.module.TkayNativeEndCardView$15 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$15
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L24:
            android.widget.ImageView r0 = r2.x
            com.tkay.expressad.video.module.TkayNativeEndCardView$16 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$16
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.w
            com.tkay.expressad.video.module.TkayNativeEndCardView$2 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L38:
            return
    }

    public boolean canBackPress() {
            r1 = this;
            android.view.View r0 = r1.V
            if (r0 == 0) goto Lc
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public void clearMoreOfferBitmap() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b
            if (r0 == 0) goto L50
            com.tkay.expressad.foundation.d.c r0 = r3.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L50
            com.tkay.expressad.foundation.d.d r0 = r3.ac
            if (r0 == 0) goto L50
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
            if (r0 == 0) goto L50
            com.tkay.expressad.foundation.d.d r0 = r3.ac
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
            int r0 = r0.size()
            if (r0 <= 0) goto L50
            com.tkay.expressad.foundation.d.d r0 = r3.ac
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
            java.util.Iterator r0 = r0.iterator()
        L26:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L50
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            java.lang.String r2 = r1.bd()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L26
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            java.lang.String r1 = r1.bd()
            r2.c(r1)
            goto L26
        L50:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    public boolean isDyXmlSuccess() {
            r1 = this;
            boolean r0 = r1.U
            return r0
    }

    public void notifyShowListener() {
            r3 = this;
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 110(0x6e, float:1.54E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r6 = this;
            super.onAttachedToWindow()
            java.lang.Runnable r0 = r6.G
            if (r0 != 0) goto Le
            com.tkay.expressad.video.module.TkayNativeEndCardView$1 r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView$1
            r0.<init>(r6)
            r6.G = r0
        Le:
            java.lang.Runnable r0 = r6.G
            java.lang.String r1 = "1"
            r2 = 1
            if (r0 == 0) goto L63
            int r3 = r6.L
            int r3 = r3 * 1000
            long r3 = (long) r3
            r6.postDelayed(r0, r3)
            boolean r0 = r6.N
            if (r0 != 0) goto L23
            r6.N = r2
        L23:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L5f
            if (r0 == 0) goto L63
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L5f
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L5f
            if (r0 != 0) goto L30
            goto L63
        L30:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L5f
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L5f
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L5f
            if (r3 == 0) goto L42
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L5f
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> L5f
        L42:
            java.lang.String r3 = "alac"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r3)     // Catch: java.lang.Throwable -> L5f
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L5f
            if (r3 != 0) goto L63
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5f
            if (r0 == 0) goto L63
            com.tkay.expressad.video.module.TkayNativeEndCardView$8 r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView$8     // Catch: java.lang.Throwable -> L5f
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L5f
            r3 = 1000(0x3e8, double:4.94E-321)
            r6.postDelayed(r0, r3)     // Catch: java.lang.Throwable -> L5f
            goto L63
        L5f:
            r0 = move-exception
            r0.getMessage()
        L63:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Ld5
            if (r0 == 0) goto Ld9
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Ld5
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> Ld5
            if (r0 != 0) goto L70
            goto Ld9
        L70:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> Ld5
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld5
            if (r3 == 0) goto L82
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> Ld5
        L82:
            java.lang.String r3 = "bait_click"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r3)     // Catch: java.lang.Throwable -> Ld5
            int r3 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L8d
            goto L92
        L8d:
            r3 = move-exception
            r3.getMessage()     // Catch: java.lang.Throwable -> Ld5
            r3 = r2
        L92:
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld5
            if (r0 != 0) goto Ld9
            if (r3 == 0) goto Ld9
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r6.af     // Catch: java.lang.Throwable -> Ld5
            if (r0 == 0) goto L9f
            goto Ld9
        L9f:
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView     // Catch: java.lang.Throwable -> Ld5
            android.content.Context r4 = r6.getContext()     // Catch: java.lang.Throwable -> Ld5
            r0.<init>(r4)     // Catch: java.lang.Throwable -> Ld5
            r6.af = r0     // Catch: java.lang.Throwable -> Ld5
            r4 = 1342177280(0x50000000, float:8.589935E9)
            r0.init(r4, r3)     // Catch: java.lang.Throwable -> Ld5
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> Ld5
            r3 = -1
            r0.<init>(r3, r3)     // Catch: java.lang.Throwable -> Ld5
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r3 = r6.af     // Catch: java.lang.Throwable -> Ld5
            r3.setLayoutParams(r0)     // Catch: java.lang.Throwable -> Ld5
            android.widget.RelativeLayout r0 = r6.u     // Catch: java.lang.Throwable -> Ld5
            if (r0 == 0) goto Ld9
            android.widget.RelativeLayout r0 = r6.u     // Catch: java.lang.Throwable -> Ld5
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r3 = r6.af     // Catch: java.lang.Throwable -> Ld5
            r0.addView(r3)     // Catch: java.lang.Throwable -> Ld5
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r6.af     // Catch: java.lang.Throwable -> Ld5
            r0.startAnimation()     // Catch: java.lang.Throwable -> Ld5
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r6.af     // Catch: java.lang.Throwable -> Ld5
            com.tkay.expressad.video.module.TkayNativeEndCardView$7 r3 = new com.tkay.expressad.video.module.TkayNativeEndCardView$7     // Catch: java.lang.Throwable -> Ld5
            r3.<init>(r6)     // Catch: java.lang.Throwable -> Ld5
            r0.setOnClickListener(r3)     // Catch: java.lang.Throwable -> Ld5
            goto Ld9
        Ld5:
            r0 = move-exception
            r0.getMessage()
        Ld9:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L1ca
            if (r0 == 0) goto L1c9
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L1ca
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L1ca
            if (r0 != 0) goto Le6
            return
        Le6:
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L1ca
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L1ca
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1ca
            if (r3 == 0) goto Lf8
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> L1ca
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> L1ca
        Lf8:
            java.lang.String r3 = "shake_show"
            java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r0, r3)     // Catch: java.lang.Throwable -> L1ca
            java.lang.String r4 = "shake_strength"
            java.lang.String r4 = com.tkay.expressad.foundation.h.x.a(r0, r4)     // Catch: java.lang.Throwable -> L1ca
            java.lang.String r5 = "shake_time"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r5)     // Catch: java.lang.Throwable -> L1ca
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1ca
            if (r5 != 0) goto L1c9
            boolean r1 = r3.equals(r1)     // Catch: java.lang.Throwable -> L1ca
            if (r1 == 0) goto L1c9
            com.tkay.expressad.shake.MBShakeView r1 = r6.ad     // Catch: java.lang.Throwable -> L1ca
            if (r1 == 0) goto L11b
            return
        L11b:
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r6.af     // Catch: java.lang.Throwable -> L1ca
            if (r1 == 0) goto L126
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r6.af     // Catch: java.lang.Throwable -> L1ca
            r3 = 8
            r1.setVisibility(r3)     // Catch: java.lang.Throwable -> L1ca
        L126:
            com.tkay.expressad.shake.MBShakeView r1 = new com.tkay.expressad.shake.MBShakeView     // Catch: java.lang.Throwable -> L1ca
            android.content.Context r3 = r6.getContext()     // Catch: java.lang.Throwable -> L1ca
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1ca
            r6.ad = r1     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.foundation.d.c r3 = r6.b     // Catch: java.lang.Throwable -> L1ca
            java.lang.String r3 = r3.cU     // Catch: java.lang.Throwable -> L1ca
            r1.initView(r3, r2)     // Catch: java.lang.Throwable -> L1ca
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L1ca
            r2 = -2
            r1.<init>(r2, r2)     // Catch: java.lang.Throwable -> L1ca
            boolean r2 = r6.isLandscape()     // Catch: java.lang.Throwable -> L1ca
            if (r2 != 0) goto L164
            java.lang.String r2 = "tkay_iv_logo"
            int r2 = r6.findID(r2)     // Catch: java.lang.Throwable -> L1ca
            r3 = 2
            r1.addRule(r3, r2)     // Catch: java.lang.Throwable -> L1ca
            r2 = 14
            r1.addRule(r2)     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.shake.MBShakeView r2 = r6.ad     // Catch: java.lang.Throwable -> L1ca
            android.content.Context r3 = r6.getContext()     // Catch: java.lang.Throwable -> L1ca
            r5 = 1101004800(0x41a00000, float:20.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r5)     // Catch: java.lang.Throwable -> L1ca
            r5 = 0
            r2.setPadding(r5, r5, r5, r3)     // Catch: java.lang.Throwable -> L1ca
            goto L169
        L164:
            r2 = 13
            r1.addRule(r2)     // Catch: java.lang.Throwable -> L1ca
        L169:
            com.tkay.expressad.shake.MBShakeView r2 = r6.ad     // Catch: java.lang.Throwable -> L1ca
            r2.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L1ca
            android.widget.RelativeLayout r1 = r6.t     // Catch: java.lang.Throwable -> L1ca
            if (r1 != 0) goto L173
            return
        L173:
            android.widget.RelativeLayout r1 = r6.t     // Catch: java.lang.Throwable -> L1ca
            boolean r1 = r1.isShown()     // Catch: java.lang.Throwable -> L1ca
            if (r1 != 0) goto L17c
            return
        L17c:
            android.widget.TextView r1 = r6.W     // Catch: java.lang.Throwable -> L1ca
            if (r1 == 0) goto L187
            android.widget.RelativeLayout r1 = r6.t     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.shake.MBShakeView r2 = r6.ad     // Catch: java.lang.Throwable -> L1ca
            r1.addView(r2)     // Catch: java.lang.Throwable -> L1ca
        L187:
            android.widget.TextView r1 = r6.W     // Catch: java.lang.Throwable -> L1ca
            r2 = 4
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.shake.MBShakeView r1 = r6.ad     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.video.module.TkayNativeEndCardView$5 r2 = new com.tkay.expressad.video.module.TkayNativeEndCardView$5     // Catch: java.lang.Throwable -> L1ca
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L1ca
            r1.setOnClickListener(r2)     // Catch: java.lang.Throwable -> L1ca
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L1ca
            r2 = 10
            if (r1 != 0) goto L1a7
            int r1 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L1ca
            if (r1 >= 0) goto L1a6
            goto L1a7
        L1a6:
            r2 = r1
        L1a7:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1ca
            r3 = 5000(0x1388, float:7.006E-42)
            if (r1 != 0) goto L1b9
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L1ca
            if (r0 > 0) goto L1b6
            goto L1b9
        L1b6:
            int r0 = r0 * 1000
            r3 = r0
        L1b9:
            com.tkay.expressad.video.module.TkayNativeEndCardView$6 r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView$6     // Catch: java.lang.Throwable -> L1ca
            r0.<init>(r6, r2, r3)     // Catch: java.lang.Throwable -> L1ca
            r6.ae = r0     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()     // Catch: java.lang.Throwable -> L1ca
            com.tkay.expressad.shake.b r1 = r6.ae     // Catch: java.lang.Throwable -> L1ca
            r0.a(r1)     // Catch: java.lang.Throwable -> L1ca
        L1c9:
            return
        L1ca:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r2.G
            if (r0 == 0) goto La
            r2.removeCallbacks(r0)
        La:
            com.tkay.expressad.shake.b r0 = r2.ae
            if (r0 == 0) goto L1a
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()
            com.tkay.expressad.shake.b r1 = r2.ae
            r0.b(r1)
            r0 = 0
            r2.ae = r0
        L1a:
            return
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            super.onSelfConfigurationChanged(r3)
            com.tkay.expressad.foundation.d.c r0 = r2.b
            if (r0 == 0) goto L10
            com.tkay.expressad.foundation.d.c r0 = r2.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L10
            return
        L10:
            android.widget.RelativeLayout r0 = r2.H
            if (r0 == 0) goto L18
            r1 = 4
            r0.setVisibility(r1)
        L18:
            int r3 = r3.orientation
            r2.d = r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = " native onSelfConfigurationChanged:"
            r3.<init>(r0)
            int r0 = r2.d
            r3.append(r0)
            int r3 = r2.d
            r0 = 2
            if (r3 != r0) goto L38
            android.view.ViewGroup r3 = r2.r
            r2.removeView(r3)
            android.view.ViewGroup r3 = r2.s
            r2.a(r3)
            return
        L38:
            android.view.ViewGroup r3 = r2.s
            r2.removeView(r3)
            android.view.ViewGroup r3 = r2.r
            r2.a(r3)
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r5) {
            r4 = this;
            r4.I = r5
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto L151
            boolean r5 = r4.f     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto L151
            com.tkay.expressad.video.module.TkayNativeEndCardView$10 r5 = new com.tkay.expressad.video.module.TkayNativeEndCardView$10     // Catch: java.lang.Throwable -> L152
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L152
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L152
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r1 = r1.be()     // Catch: java.lang.Throwable -> L152
            r0.a(r1, r5)     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.video.module.a.a.j r5 = new com.tkay.expressad.video.module.a.a.j     // Catch: java.lang.Throwable -> L152
            android.widget.ImageView r0 = r4.x     // Catch: java.lang.Throwable -> L152
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L152
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L152
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)     // Catch: java.lang.Throwable -> L152
            r5.<init>(r0, r1)     // Catch: java.lang.Throwable -> L152
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L152
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r1 = r1.bd()     // Catch: java.lang.Throwable -> L152
            r0.a(r1, r5)     // Catch: java.lang.Throwable -> L152
            android.widget.TextView r5 = r4.B     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = r0.bb()     // Catch: java.lang.Throwable -> L152
            r5.setText(r0)     // Catch: java.lang.Throwable -> L152
            android.widget.TextView r5 = r4.W     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto L62
            android.widget.TextView r5 = r4.W     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = r0.cU     // Catch: java.lang.Throwable -> L152
            r5.setText(r0)     // Catch: java.lang.Throwable -> L152
        L62:
            android.widget.TextView r5 = r4.C     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto L71
            android.widget.TextView r5 = r4.C     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = r0.bc()     // Catch: java.lang.Throwable -> L152
            r5.setText(r0)     // Catch: java.lang.Throwable -> L152
        L71:
            android.widget.TextView r5 = r4.D     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto L91
            android.widget.TextView r5 = r4.D     // Catch: java.lang.Throwable -> L152
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L152
            r0.<init>()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L152
            int r1 = r1.aY()     // Catch: java.lang.Throwable -> L152
            r0.append(r1)     // Catch: java.lang.Throwable -> L152
            java.lang.String r1 = ")"
            r0.append(r1)     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L152
            r5.setText(r0)     // Catch: java.lang.Throwable -> L152
        L91:
            android.widget.LinearLayout r5 = r4.E     // Catch: java.lang.Throwable -> L152
            r5.removeAllViews()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L152
            double r0 = r5.aX()     // Catch: java.lang.Throwable -> L152
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 > 0) goto La4
            r0 = 4617315517961601024(0x4014000000000000, double:5.0)
        La4:
            android.widget.LinearLayout r5 = r4.E     // Catch: java.lang.Throwable -> L152
            boolean r5 = r5 instanceof com.tkay.expressad.videocommon.view.StarLevelView     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto Lb1
            android.widget.LinearLayout r5 = r4.E     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.videocommon.view.StarLevelView r5 = (com.tkay.expressad.videocommon.view.StarLevelView) r5     // Catch: java.lang.Throwable -> L152
            r5.initScore(r0)     // Catch: java.lang.Throwable -> L152
        Lb1:
            android.widget.LinearLayout r5 = r4.E     // Catch: java.lang.Throwable -> L152
            boolean r5 = r5 instanceof com.tkay.expressad.video.dynview.widget.TYLevelLayoutView     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto Lc4
            android.widget.LinearLayout r5 = r4.E     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r5 = (com.tkay.expressad.video.dynview.widget.TYLevelLayoutView) r5     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.d.c r2 = r4.b     // Catch: java.lang.Throwable -> L152
            int r2 = r2.aY()     // Catch: java.lang.Throwable -> L152
            r5.setRatingAndUser(r0, r2)     // Catch: java.lang.Throwable -> L152
        Lc4:
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r5 = r5.I()     // Catch: java.lang.Throwable -> L152
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L152
            if (r5 != 0) goto Le1
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r5 = r5.I()     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = "alecfc=1"
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto Le1
            r5 = 1
            r4.J = r5     // Catch: java.lang.Throwable -> L152
        Le1:
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r5 = r5.aE()     // Catch: java.lang.Throwable -> L152
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto Lf0
            java.lang.String r5 = "https://mores.toponad.com/image/default/mintegral_logo.png"
            goto Lf6
        Lf0:
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L152
            java.lang.String r5 = r5.aE()     // Catch: java.lang.Throwable -> L152
        Lf6:
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L152
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.video.module.TkayNativeEndCardView$11 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$11     // Catch: java.lang.Throwable -> L152
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L152
            r0.a(r5, r1)     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L152
            r5.e()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.d.a r5 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Throwable -> L152
            r0 = 8
            if (r5 == 0) goto L134
            java.lang.String r5 = r5.J()     // Catch: java.lang.Throwable -> L152
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L152
            if (r1 == 0) goto L129
            android.widget.ImageView r1 = r4.z     // Catch: java.lang.Throwable -> L152
            r1.setVisibility(r0)     // Catch: java.lang.Throwable -> L152
        L129:
            android.widget.ImageView r1 = r4.z     // Catch: java.lang.Throwable -> L152
            com.tkay.expressad.video.module.TkayNativeEndCardView$12 r2 = new com.tkay.expressad.video.module.TkayNativeEndCardView$12     // Catch: java.lang.Throwable -> L152
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L152
            r1.setOnClickListener(r2)     // Catch: java.lang.Throwable -> L152
            goto L139
        L134:
            android.widget.ImageView r5 = r4.z     // Catch: java.lang.Throwable -> L152
            r5.setVisibility(r0)     // Catch: java.lang.Throwable -> L152
        L139:
            boolean r5 = r4.K     // Catch: java.lang.Throwable -> L152
            if (r5 != 0) goto L142
            android.view.View r5 = r4.V     // Catch: java.lang.Throwable -> L152
            r5.setVisibility(r0)     // Catch: java.lang.Throwable -> L152
        L142:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L152
            r1 = 17
            if (r5 >= r1) goto L151
            android.widget.ImageView r5 = r4.v     // Catch: java.lang.Throwable -> L152
            if (r5 == 0) goto L151
            android.widget.ImageView r5 = r4.v     // Catch: java.lang.Throwable -> L152
            r5.setVisibility(r0)     // Catch: java.lang.Throwable -> L152
        L151:
            return
        L152:
            r5 = move-exception
            r5.getMessage()
            return
    }

    public void release() {
            r1 = this;
            r1.removeAllViews()     // Catch: java.lang.Exception -> L12
            android.view.animation.AlphaAnimation r0 = r1.P     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto Lc
            android.view.animation.AlphaAnimation r0 = r1.P     // Catch: java.lang.Exception -> L12
            r0.cancel()     // Catch: java.lang.Exception -> L12
        Lc:
            r0 = 0
            r1.ae = r0     // Catch: java.lang.Exception -> L12
            r1.G = r0     // Catch: java.lang.Exception -> L12
            return
        L12:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setCloseBtnDelay(int r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public void setLayout() {
            r6 = this;
            boolean r0 = r6.i
            if (r0 == 0) goto L21
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            android.content.Context r0 = r6.getContext()
            com.tkay.expressad.foundation.d.c r1 = r6.b
            int r2 = r6.j
            com.tkay.expressad.video.dynview.c r0 = com.tkay.expressad.video.dynview.j.c.a(r0, r1, r2)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayNativeEndCardView$9 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$9
            r1.<init>(r6)
            com.tkay.expressad.video.dynview.b.a(r0, r1)
            return
        L21:
            int r0 = r6.ag
            java.lang.String r1 = "tkay_reward_endcard_native_half_landscape"
            java.lang.String r2 = "tkay_reward_endcard_native_land"
            java.lang.String r3 = "tkay_reward_endcard_native_half_portrait"
            java.lang.String r4 = "tkay_reward_endcard_native_hor"
            if (r0 != 0) goto L3e
            boolean r0 = r6.aa
            if (r0 == 0) goto L32
            goto L33
        L32:
            r3 = r4
        L33:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L57
            boolean r0 = r6.aa
            if (r0 == 0) goto L55
            goto L56
        L3e:
            r5 = 1
            if (r0 != r5) goto L48
            boolean r0 = r6.aa
            if (r0 == 0) goto L46
            goto L4b
        L46:
            r3 = r4
            goto L4b
        L48:
            java.lang.String r0 = ""
            r3 = r0
        L4b:
            int r0 = r6.ag
            r4 = 2
            if (r0 != r4) goto L57
            boolean r0 = r6.aa
            if (r0 == 0) goto L55
            goto L56
        L55:
            r1 = r2
        L56:
            r3 = r1
        L57:
            int r0 = r6.findLayout(r3)
            if (r0 <= 0) goto L90
            boolean r1 = r6.isLandscape()
            r2 = 0
            if (r1 == 0) goto L78
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.s = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.s
            boolean r0 = r6.b(r0)
            goto L8b
        L78:
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.r = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.r
            boolean r0 = r6.b(r0)
        L8b:
            r6.f = r0
            r6.e()
        L90:
            return
    }

    public void setMoreOfferCampaignUnit(com.tkay.expressad.foundation.d.d r3) {
            r2 = this;
            com.tkay.expressad.foundation.d.c r0 = r2.b
            if (r0 == 0) goto L31
            com.tkay.expressad.foundation.d.c r0 = r2.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L31
            r2.ac = r3
            if (r3 == 0) goto L31
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r3.J
            if (r3 == 0) goto L31
            com.tkay.expressad.foundation.d.d r3 = r2.ac
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r3.J
            int r3 = r3.size()
            r0 = 5
            if (r3 <= r0) goto L31
            com.tkay.expressad.shake.MBShakeView r3 = r2.ad
            if (r3 == 0) goto L31
            android.content.Context r0 = r2.getContext()
            r1 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r1 = 0
            r3.setPadding(r1, r1, r1, r0)
        L31:
            return
    }

    public void setNotchPadding(int r5, int r6, int r7, int r8) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "NOTCH NativeEndCard "
            r0.<init>(r1)
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r5)
            r3 = 0
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r6)
            r3 = 1
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)
            r3 = 2
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r8)
            r3 = 3
            r1[r3] = r2
            java.lang.String r2 = "%1s-%2s-%3s-%4s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            r4.Q = r5
            r4.R = r6
            r4.S = r7
            r4.T = r8
            r4.h()
            return
    }

    public void setOnPause() {
            r1 = this;
            r0 = 0
            r1.N = r0
            return
    }

    public void setOnResume() {
            r1 = this;
            r0 = 1
            r1.N = r0
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.ab = r1
            return
    }
}
