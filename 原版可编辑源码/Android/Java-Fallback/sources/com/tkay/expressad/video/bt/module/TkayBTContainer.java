package com.tkay.expressad.video.bt.module;

public class TkayBTContainer extends com.tkay.expressad.video.signal.container.AbstractJSContainer implements com.tkay.expressad.video.signal.b {
    private static final java.lang.String d = null;
    private android.content.Context A;
    private android.widget.TextView B;
    private boolean C;
    private boolean D;
    private java.lang.String E;
    private boolean F;
    private java.util.List<com.tkay.expressad.foundation.d.c> G;
    private java.util.List<com.tkay.expressad.videocommon.b.a> H;
    private com.tkay.expressad.video.bt.module.a.a I;
    private com.tkay.expressad.video.bt.module.b.h J;
    private com.tkay.expressad.video.bt.module.b.h K;
    private com.tkay.expressad.video.bt.module.a.b L;
    private java.lang.String M;
    private java.lang.String N;
    private boolean O;
    private int P;
    private boolean Q;
    private int R;
    private java.lang.String S;
    private com.tkay.expressad.video.dynview.f.d T;
    com.tkay.expressad.foundation.d.c a;
    private int e;
    private int f;
    private android.widget.FrameLayout g;
    private com.tkay.expressad.video.bt.module.TkayBTLayout h;
    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView i;
    private android.view.LayoutInflater j;


    final class 2 implements com.tkay.expressad.video.dynview.f.h {
        final com.tkay.expressad.video.bt.module.TkayBTContainer a;

        2(com.tkay.expressad.video.bt.module.TkayBTContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.a r8) {
                r7 = this;
                com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r7.a
                android.widget.FrameLayout r0 = com.tkay.expressad.video.bt.module.TkayBTContainer.b(r0)
                if (r0 == 0) goto Lff
                android.view.View r0 = r8.a()
                if (r0 == 0) goto Lff
                com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r7.a
                android.widget.FrameLayout r0 = com.tkay.expressad.video.bt.module.TkayBTContainer.b(r0)
                r0.removeAllViews()
                com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r7.a
                android.widget.FrameLayout r0 = com.tkay.expressad.video.bt.module.TkayBTContainer.b(r0)
                android.view.View r8 = r8.a()
                r0.addView(r8)
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                java.lang.String r0 = "tkay_choice_one_countdown_tv"
                int r0 = r8.findID(r0)
                android.view.View r0 = r8.findViewById(r0)
                android.widget.TextView r0 = (android.widget.TextView) r0
                com.tkay.expressad.video.bt.module.TkayBTContainer.a(r8, r0)
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                com.tkay.expressad.video.bt.module.a.a r8 = com.tkay.expressad.video.bt.module.TkayBTContainer.c(r8)
                if (r8 == 0) goto L46
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                com.tkay.expressad.video.bt.module.a.a r8 = com.tkay.expressad.video.bt.module.TkayBTContainer.c(r8)
                r8.a()
            L46:
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                java.util.List r8 = com.tkay.expressad.video.bt.module.TkayBTContainer.d(r8)
                if (r8 == 0) goto L106
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                java.util.List r8 = com.tkay.expressad.video.bt.module.TkayBTContainer.d(r8)
                int r8 = r8.size()
                if (r8 <= 0) goto L106
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                java.util.List r8 = com.tkay.expressad.video.bt.module.TkayBTContainer.d(r8)
                r0 = 0
                java.lang.Object r8 = r8.get(r0)
                com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8
                if (r8 == 0) goto Lfe
                java.lang.String r0 = r8.ai()
                com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()
                com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
                java.lang.String r2 = r2.e()
                com.tkay.expressad.video.bt.module.TkayBTContainer r3 = r7.a
                java.lang.String r3 = com.tkay.expressad.video.bt.module.TkayBTContainer.e(r3)
                com.tkay.expressad.videocommon.e.d r1 = r1.a(r2, r3)
                r2 = 1
                if (r1 == 0) goto L8b
                int r1 = r1.M()
                goto L8c
            L8b:
                r1 = r2
            L8c:
                int r3 = r8.n()
                java.lang.String r4 = "&tmorl="
                if (r3 != r2) goto Lb3
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r0)
                java.lang.String r0 = "&to=1&cbt="
                r2.append(r0)
                int r0 = r8.az()
                r2.append(r0)
                r2.append(r4)
                r2.append(r1)
                java.lang.String r0 = r2.toString()
                goto Ld1
            Lb3:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r0)
                java.lang.String r0 = "&to=0&cbt="
                r2.append(r0)
                int r0 = r8.az()
                r2.append(r0)
                r2.append(r4)
                r2.append(r1)
                java.lang.String r0 = r2.toString()
            Ld1:
                r3 = r0
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                com.tkay.expressad.video.bt.module.TkayBTContainer r1 = r7.a
                java.lang.String r2 = com.tkay.expressad.video.bt.module.TkayBTContainer.f(r1)
                r4 = 0
                r5 = 1
                int r6 = com.tkay.expressad.a.a.a.j
                r1 = r8
                com.tkay.expressad.a.a.a(r0, r1, r2, r3, r4, r5, r6)
                java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h
                java.lang.String r1 = r8.ai()
                long r2 = java.lang.System.currentTimeMillis()
                java.lang.Long r2 = java.lang.Long.valueOf(r2)
                r0.put(r1, r2)
                com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r7.a
                r0.a(r8)
            Lfe:
                return
            Lff:
                com.tkay.expressad.video.bt.module.TkayBTContainer r8 = r7.a
                java.lang.String r0 = "nativeview is null"
                r8.a(r0)
            L106:
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.c.b r3) {
                r2 = this;
                if (r3 == 0) goto L21
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "errorCode:"
                r0.<init>(r1)
                int r1 = r3.a()
                r0.append(r1)
                java.lang.String r1 = "Msg:"
                r0.append(r1)
                java.lang.String r3 = r3.b()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                goto L23
            L21:
                java.lang.String r3 = ""
            L23:
                com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r2.a
                java.lang.String r3 = java.lang.String.valueOf(r3)
                java.lang.String r1 = "nativeview is null"
                java.lang.String r3 = r1.concat(r3)
                r0.a(r3)
                return
        }
    }


    private class a extends com.tkay.expressad.video.signal.a.c.a {
        final com.tkay.expressad.video.bt.module.TkayBTContainer a;

        private a(com.tkay.expressad.video.bt.module.TkayBTContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tkay.expressad.video.bt.module.TkayBTContainer r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r1, java.lang.String r2) {
                r0 = this;
                super.a(r1, r2)
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r1, java.lang.String r2) {
                r0 = this;
                super.a(r1, r2)
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r1, boolean r2) {
                r0 = this;
                super.a(r1, r2)
                com.tkay.expressad.video.bt.module.TkayBTContainer r2 = r0.a
                com.tkay.expressad.video.bt.module.b.h r2 = com.tkay.expressad.video.bt.module.TkayBTContainer.t(r2)
                r2.a(r1)
                return
        }

        @Override
        public final void a(com.tkay.expressad.out.d r3, java.lang.String r4) {
                r2 = this;
                super.a(r3, r4)
                if (r3 == 0) goto L5c
                boolean r4 = r3 instanceof com.tkay.expressad.foundation.d.c
                if (r4 == 0) goto L5c
                com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: org.json.JSONException -> L58
                com.tkay.expressad.video.bt.module.TkayBTContainer r4 = r2.a     // Catch: org.json.JSONException -> L58
                com.tkay.expressad.video.signal.j r4 = r4.getJSVideoModule()     // Catch: org.json.JSONException -> L58
                java.lang.String r4 = r4.getCurrentProgress()     // Catch: org.json.JSONException -> L58
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L58
                r0.<init>(r4)     // Catch: org.json.JSONException -> L58
                java.lang.String r4 = "progress"
                java.lang.String r1 = ""
                java.lang.String r4 = r0.optString(r4, r1)     // Catch: org.json.JSONException -> L58
                int r0 = r3.Q()     // Catch: org.json.JSONException -> L58
                r1 = 3
                if (r0 != r1) goto L57
                int r3 = r3.C()     // Catch: org.json.JSONException -> L58
                r0 = 2
                if (r3 != r0) goto L57
                java.lang.String r3 = "1.0"
                boolean r3 = r4.equals(r3)     // Catch: org.json.JSONException -> L58
                if (r3 == 0) goto L57
                com.tkay.expressad.video.bt.module.TkayBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L58
                android.app.Activity r3 = com.tkay.expressad.video.bt.module.TkayBTContainer.q(r3)     // Catch: org.json.JSONException -> L58
                if (r3 == 0) goto L57
                com.tkay.expressad.video.bt.module.TkayBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L58
                boolean r3 = com.tkay.expressad.video.bt.module.TkayBTContainer.r(r3)     // Catch: org.json.JSONException -> L58
                if (r3 == 0) goto L4e
                com.tkay.expressad.video.bt.module.TkayBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L58
                r3.onAdClose()     // Catch: org.json.JSONException -> L58
                return
            L4e:
                com.tkay.expressad.video.bt.module.TkayBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L58
                android.app.Activity r3 = com.tkay.expressad.video.bt.module.TkayBTContainer.s(r3)     // Catch: org.json.JSONException -> L58
                r3.finish()     // Catch: org.json.JSONException -> L58
            L57:
                return
            L58:
                r3 = move-exception
                r3.printStackTrace()
            L5c:
                return
        }

        @Override
        public final void b(com.tkay.expressad.out.d r1, java.lang.String r2) {
                r0 = this;
                super.b(r1, r2)
                return
        }

        @Override
        public final void c() {
                r0 = this;
                super.c()
                return
        }

        @Override
        public final void d() {
                r0 = this;
                super.d()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.video.bt.module.TkayBTContainer> r0 = com.tkay.expressad.video.bt.module.TkayBTContainer.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.video.bt.module.TkayBTContainer.d = r0
            return
    }

    public TkayBTContainer(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.e = r0
            r1 = 1
            r2.f = r1
            r2.C = r0
            r2.D = r1
            r2.F = r0
            r2.P = r1
            r2.init(r3)
            return
    }

    public TkayBTContainer(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 0
            r1.e = r3
            r0 = 1
            r1.f = r0
            r1.C = r3
            r1.D = r0
            r1.F = r3
            r1.P = r0
            r1.init(r2)
            return
    }

    static int a(com.tkay.expressad.video.bt.module.TkayBTContainer r0, int r1) {
            r0.R = r1
            return r1
    }

    static android.widget.TextView a(com.tkay.expressad.video.bt.module.TkayBTContainer r0, android.widget.TextView r1) {
            r0.B = r1
            return r1
    }

    static com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView a(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.i
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.video.bt.module.TkayBTContainer.d
            return r0
    }

    private void a(android.content.Context r4) {
            r3 = this;
            com.tkay.expressad.video.dynview.f.d r0 = r3.T
            if (r0 != 0) goto La
            java.lang.String r4 = "ChoiceOneCallback is null"
            r3.a(r4)
            return
        La:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.video.dynview.f.d r1 = r3.T
            java.lang.String r2 = "choice_one_callback"
            r0.put(r2, r1)
            com.tkay.expressad.video.dynview.b.a()
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r3.G
            com.tkay.expressad.video.bt.module.TkayBTContainer$2 r2 = new com.tkay.expressad.video.bt.module.TkayBTContainer$2
            r2.<init>(r3)
            com.tkay.expressad.video.dynview.b.a(r4, r1, r2, r0)
            return
    }

    static boolean a(com.tkay.expressad.video.bt.module.TkayBTContainer r0, boolean r1) {
            r0.Q = r1
            return r1
    }

    private boolean a(boolean r5) {
            r4 = this;
            r0 = 0
            com.tkay.expressad.videocommon.e.d r1 = r4.o     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L6
            return r0
        L6:
            com.tkay.expressad.videocommon.e.d r1 = r4.o     // Catch: java.lang.Throwable -> L26
            int r1 = r1.K()     // Catch: java.lang.Throwable -> L26
            r2 = 1
            if (r1 == r2) goto L25
            r3 = 2
            if (r1 == r3) goto L1b
            r5 = 3
            if (r1 == r5) goto L16
            goto L26
        L16:
            boolean r5 = r4.g()     // Catch: java.lang.Throwable -> L26
            return r5
        L1b:
            if (r5 == 0) goto L24
            boolean r5 = r4.g()     // Catch: java.lang.Throwable -> L26
            if (r5 == 0) goto L24
            return r2
        L24:
            return r0
        L25:
            return r5
        L26:
            return r0
    }

    static android.widget.FrameLayout b(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            android.widget.FrameLayout r0 = r0.g
            return r0
    }

    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView b(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.videocommon.a$a r3 = com.tkay.expressad.videocommon.a.a(r3)
            if (r3 == 0) goto L22
            java.lang.String r0 = r3.b()
            r2.E = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "get BT wraper.getTag = "
            r0.<init>(r1)
            java.lang.String r1 = r2.E
            r0.append(r1)
            java.lang.String r0 = ""
            r3.a(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a()
            return r3
        L22:
            r3 = 0
            return r3
    }

    static com.tkay.expressad.video.bt.module.a.a c(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            com.tkay.expressad.video.bt.module.a.a r0 = r0.I
            return r0
    }

    private com.tkay.expressad.video.bt.module.a.b c() {
            r1 = this;
            com.tkay.expressad.video.bt.module.a.b r0 = r1.L
            if (r0 != 0) goto Lb
            com.tkay.expressad.video.bt.module.TkayBTContainer$3 r0 = new com.tkay.expressad.video.bt.module.TkayBTContainer$3
            r0.<init>(r1)
            r1.L = r0
        Lb:
            com.tkay.expressad.video.bt.module.a.b r0 = r1.L
            return r0
    }

    private com.tkay.expressad.videocommon.b.a d(com.tkay.expressad.foundation.d.c r5) {
            r4 = this;
            java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r4.H
            if (r0 == 0) goto L29
            if (r5 == 0) goto L29
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.videocommon.b.a r1 = (com.tkay.expressad.videocommon.b.a) r1
            com.tkay.expressad.foundation.d.c r2 = r1.n()
            java.lang.String r2 = r2.aZ()
            java.lang.String r3 = r5.aZ()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto La
            return r1
        L29:
            r5 = 0
            return r5
    }

    static java.util.List d(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.G
            return r0
    }

    private static void d() {
            return
    }

    static java.lang.String e(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    private static boolean e() {
            r0 = 1
            return r0
    }

    private static int f() {
            r0 = 1
            return r0
    }

    static java.lang.String f(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    static java.lang.String g(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    private boolean g() {
            r5 = this;
            r0 = 0
            com.tkay.expressad.videocommon.e.d r1 = r5.o     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L6
            return r0
        L6:
            com.tkay.expressad.videocommon.e.d r1 = r5.o     // Catch: java.lang.Throwable -> L21
            double r1 = r1.L()     // Catch: java.lang.Throwable -> L21
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L13
            return r0
        L13:
            java.util.Random r3 = new java.util.Random     // Catch: java.lang.Throwable -> L21
            r3.<init>()     // Catch: java.lang.Throwable -> L21
            double r3 = r3.nextDouble()     // Catch: java.lang.Throwable -> L21
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 <= 0) goto L21
            r0 = 1
        L21:
            return r0
    }

    static java.lang.String h(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    static java.lang.String i(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static java.lang.String j(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    static java.lang.String k(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static java.lang.String l(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    static java.lang.String m(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static java.lang.String n(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    static java.lang.String o(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static java.lang.String p(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    static android.app.Activity q(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            android.app.Activity r0 = r0.l
            return r0
    }

    static boolean r(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            boolean r0 = r0.D
            return r0
    }

    static android.app.Activity s(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            android.app.Activity r0 = r0.l
            return r0
    }

    static com.tkay.expressad.video.bt.module.b.h t(com.tkay.expressad.video.bt.module.TkayBTContainer r0) {
            com.tkay.expressad.video.bt.module.b.h r0 = r0.K
            return r0
    }

    protected final void a(com.tkay.expressad.foundation.d.c r6) {
            r5 = this;
            if (r6 == 0) goto L31
            java.util.List r0 = r6.e()     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L2d
            if (r1 <= 0) goto L31
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2d
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2d
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r5.m     // Catch: java.lang.Throwable -> L2d
            r4 = 1
            com.tkay.expressad.a.a.a(r2, r6, r3, r1, r4)     // Catch: java.lang.Throwable -> L2d
            goto L12
        L2d:
            r6 = move-exception
            r6.getMessage()
        L31:
            return
    }

    @Override
    protected final void a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.video.bt.module.b.h r0 = r1.J
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            super.a(r2)
            return
    }

    public void appendSubView(com.tkay.expressad.video.bt.module.TkayBTContainer r8, com.tkay.expressad.video.bt.module.TYTempContainer r9, org.json.JSONObject r10) {
            r7 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> Lc5
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> Lc5
            if (r10 == 0) goto L6a
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lc5
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = "left"
            r3 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r10.optInt(r2, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r4 = "top"
            int r4 = r10.optInt(r4, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r5 = "right"
            int r5 = r10.optInt(r5, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r6 = "bottom"
            int r6 = r10.optInt(r6, r3)     // Catch: java.lang.Throwable -> Lc5
            if (r2 == r3) goto L35
            if (r1 == 0) goto L35
            float r2 = (float) r2     // Catch: java.lang.Throwable -> Lc5
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.leftMargin = r2     // Catch: java.lang.Throwable -> Lc5
        L35:
            if (r4 == r3) goto L40
            if (r1 == 0) goto L40
            float r2 = (float) r4     // Catch: java.lang.Throwable -> Lc5
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.topMargin = r2     // Catch: java.lang.Throwable -> Lc5
        L40:
            if (r5 == r3) goto L4b
            if (r1 == 0) goto L4b
            float r2 = (float) r5     // Catch: java.lang.Throwable -> Lc5
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.rightMargin = r2     // Catch: java.lang.Throwable -> Lc5
        L4b:
            if (r6 == r3) goto L56
            if (r1 == 0) goto L56
            float r2 = (float) r6     // Catch: java.lang.Throwable -> Lc5
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.bottomMargin = r1     // Catch: java.lang.Throwable -> Lc5
        L56:
            java.lang.String r1 = "width"
            int r1 = r10.optInt(r1)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = "height"
            int r10 = r10.optInt(r2)     // Catch: java.lang.Throwable -> Lc5
            if (r1 <= 0) goto L66
            r0.width = r1     // Catch: java.lang.Throwable -> Lc5
        L66:
            if (r10 <= 0) goto L6a
            r0.height = r10     // Catch: java.lang.Throwable -> Lc5
        L6a:
            r8.addView(r9, r0)     // Catch: java.lang.Throwable -> Lc5
            android.app.Activity r8 = r7.l     // Catch: java.lang.Throwable -> Lc5
            r9.setActivity(r8)     // Catch: java.lang.Throwable -> Lc5
            int r8 = r7.s     // Catch: java.lang.Throwable -> Lc5
            r9.setMute(r8)     // Catch: java.lang.Throwable -> Lc5
            boolean r8 = r7.C     // Catch: java.lang.Throwable -> Lc5
            r9.setBidCampaign(r8)     // Catch: java.lang.Throwable -> Lc5
            boolean r8 = r7.t     // Catch: java.lang.Throwable -> Lc5
            r9.setIV(r8)     // Catch: java.lang.Throwable -> Lc5
            boolean r8 = r7.D     // Catch: java.lang.Throwable -> Lc5
            r9.setBigOffer(r8)     // Catch: java.lang.Throwable -> Lc5
            int r8 = r7.v     // Catch: java.lang.Throwable -> Lc5
            int r10 = r7.w     // Catch: java.lang.Throwable -> Lc5
            int r0 = r7.x     // Catch: java.lang.Throwable -> Lc5
            r9.setIVRewardEnable(r8, r10, r0)     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.video.bt.module.b.h r8 = r7.K     // Catch: java.lang.Throwable -> Lc5
            r9.setShowRewardListener(r8)     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.foundation.d.c r8 = r9.getCampaign()     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.videocommon.b.a r8 = r7.d(r8)     // Catch: java.lang.Throwable -> Lc5
            r9.setCampaignDownLoadTask(r8)     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.video.bt.module.a.b r8 = r7.c()     // Catch: java.lang.Throwable -> Lc5
            r9.setTkayTempCallback(r8)     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.video.signal.c r8 = r7.getJSCommon()     // Catch: java.lang.Throwable -> Lc5
            int r8 = r8.e()     // Catch: java.lang.Throwable -> Lc5
            r9.setH5Cbp(r8)     // Catch: java.lang.Throwable -> Lc5
            com.tkay.expressad.video.signal.c r8 = r7.getJSCommon()     // Catch: java.lang.Throwable -> Lc5
            int r8 = r8.f()     // Catch: java.lang.Throwable -> Lc5
            r9.setWebViewFront(r8)     // Catch: java.lang.Throwable -> Lc5
            android.content.Context r8 = r7.A     // Catch: java.lang.Throwable -> Lc5
            r9.init(r8)     // Catch: java.lang.Throwable -> Lc5
            r9.onCreate()     // Catch: java.lang.Throwable -> Lc5
            return
        Lc5:
            r8 = move-exception
            r8.getMessage()
            return
    }

    public void broadcast(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r0 = "broadcast"
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r4.i
            if (r1 == 0) goto L43
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L39
            r1.<init>()     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "code"
            int r3 = r4.e     // Catch: java.lang.Exception -> L39
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.E     // Catch: java.lang.Exception -> L39
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "eventName"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L39
            java.lang.String r5 = "data"
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.i     // Catch: java.lang.Exception -> L39
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L39
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L39
            r1 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r1)     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r0, r6)     // Catch: java.lang.Exception -> L39
            return
        L39:
            com.tkay.expressad.video.bt.a.c.a()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.i
            java.lang.String r6 = r4.E
            com.tkay.expressad.video.bt.a.c.a(r5, r0, r6)
        L43:
            return
    }

    @Override
    public void click(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public int findID(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "id"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r1)
            return r3
    }

    public int findLayout(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "layout"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r1)
            return r3
    }

    @Override
    public void handlerH5Exception(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void init(android.content.Context r1) {
            r0 = this;
            r0.A = r1
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r0.j = r1
            return
    }

    public boolean isNativeKilledCallback(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            com.tkay.expressad.video.signal.c r0 = r3.getJSCommon()
            int r0 = r0.e()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto Ld
            return r1
        Ld:
            if (r4 == 0) goto L3f
            int r0 = r4.n()
            if (r0 != r2) goto L29
            com.tkay.expressad.videocommon.e.d r0 = r3.o
            if (r0 == 0) goto L3f
            com.tkay.expressad.videocommon.e.d r0 = r3.o
            int r0 = r0.M()
            if (r0 != r2) goto L25
            r4.m(r2)
            return r2
        L25:
            r4.m(r1)
            return r1
        L29:
            boolean r0 = r4.A()
            if (r0 == 0) goto L33
            r4.m(r1)
            return r1
        L33:
            com.tkay.expressad.videocommon.e.d r0 = r3.o
            int r0 = r0.a()
            r4.m(r0)
            if (r0 != r2) goto L3f
            return r2
        L3f:
            return r1
    }

    public void onAdClose() {
            r1 = this;
            android.app.Activity r0 = r1.l
            if (r0 == 0) goto L9
            android.app.Activity r0 = r1.l
            r0.finish()
        L9:
            return
    }

    public void onBackPressed() {
            r3 = this;
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L47
            java.lang.String r2 = r3.N     // Catch: java.lang.Throwable -> L47
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L46
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L47
            if (r1 <= 0) goto L46
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L47
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L47
        L1c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L47
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L47
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L32
            com.tkay.expressad.video.bt.module.TYTempContainer r1 = (com.tkay.expressad.video.bt.module.TYTempContainer) r1     // Catch: java.lang.Throwable -> L47
            r1.onBackPressed()     // Catch: java.lang.Throwable -> L47
            goto L1c
        L32:
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L3c
            com.tkay.expressad.video.bt.module.TkayBTWebView r1 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r1     // Catch: java.lang.Throwable -> L47
            r1.onBackPressed()     // Catch: java.lang.Throwable -> L47
            goto L1c
        L3c:
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTLayout     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L1c
            com.tkay.expressad.video.bt.module.TkayBTLayout r1 = (com.tkay.expressad.video.bt.module.TkayBTLayout) r1     // Catch: java.lang.Throwable -> L47
            r1.onBackPressed()     // Catch: java.lang.Throwable -> L47
            goto L1c
        L46:
            return
        L47:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r4) {
            r3 = this;
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L47
            java.lang.String r2 = r3.N     // Catch: java.lang.Throwable -> L47
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L46
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L47
            if (r1 <= 0) goto L46
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L47
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L47
        L1c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L47
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L47
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L32
            com.tkay.expressad.video.bt.module.TYTempContainer r1 = (com.tkay.expressad.video.bt.module.TYTempContainer) r1     // Catch: java.lang.Throwable -> L47
            r1.onConfigurationChanged(r4)     // Catch: java.lang.Throwable -> L47
            goto L1c
        L32:
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTWebView     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L3c
            com.tkay.expressad.video.bt.module.TkayBTWebView r1 = (com.tkay.expressad.video.bt.module.TkayBTWebView) r1     // Catch: java.lang.Throwable -> L47
            r1.onConfigurationChanged(r4)     // Catch: java.lang.Throwable -> L47
            goto L1c
        L3c:
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTLayout     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L1c
            com.tkay.expressad.video.bt.module.TkayBTLayout r1 = (com.tkay.expressad.video.bt.module.TkayBTLayout) r1     // Catch: java.lang.Throwable -> L47
            r1.onConfigurationChanged(r4)     // Catch: java.lang.Throwable -> L47
            goto L1c
        L46:
            return
        L47:
            r4 = move-exception
            r4.getMessage()
            return
    }

    public void onCreate() {
            r9 = this;
            java.lang.String r0 = "_1"
            java.lang.String r1 = ""
            java.lang.String r2 = "_"
            java.lang.String r3 = "tkay_bt_container"
            int r3 = r9.findLayout(r3)     // Catch: java.lang.Throwable -> L331
            if (r3 >= 0) goto L14
            java.lang.String r0 = "tkay_bt_container layout null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L331
            return
        L14:
            android.view.LayoutInflater r4 = r9.j     // Catch: java.lang.Throwable -> L331
            android.view.View r3 = r4.inflate(r3, r9)     // Catch: java.lang.Throwable -> L331
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3     // Catch: java.lang.Throwable -> L331
            r9.g = r3     // Catch: java.lang.Throwable -> L331
            if (r3 != 0) goto L26
            java.lang.String r0 = "ViewIds null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L331
            return
        L26:
            r9.N = r1     // Catch: java.lang.Throwable -> L331
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r9.G     // Catch: java.lang.Throwable -> L331
            r4 = 0
            if (r3 == 0) goto L48
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r9.G     // Catch: java.lang.Throwable -> L331
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L331
            if (r3 <= 0) goto L48
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r9.G     // Catch: java.lang.Throwable -> L331
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Throwable -> L331
            java.lang.String r5 = r3.ar()     // Catch: java.lang.Throwable -> L331
            java.lang.String r3 = r3.Z()     // Catch: java.lang.Throwable -> L331
            r9.N = r3     // Catch: java.lang.Throwable -> L331
            goto L49
        L48:
            r5 = r1
        L49:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            r3.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r6 = r9.m     // Catch: java.lang.Throwable -> L331
            r3.append(r6)     // Catch: java.lang.Throwable -> L331
            r3.append(r2)     // Catch: java.lang.Throwable -> L331
            java.lang.String r6 = r9.N     // Catch: java.lang.Throwable -> L331
            r3.append(r6)     // Catch: java.lang.Throwable -> L331
            r3.append(r2)     // Catch: java.lang.Throwable -> L331
            r3.append(r5)     // Catch: java.lang.Throwable -> L331
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.videocommon.a$a r3 = com.tkay.expressad.videocommon.a.a(r3)     // Catch: java.lang.Throwable -> L331
            r6 = 0
            if (r3 == 0) goto L86
            java.lang.String r7 = r3.b()     // Catch: java.lang.Throwable -> L331
            r9.E = r7     // Catch: java.lang.Throwable -> L331
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            java.lang.String r8 = "get BT wraper.getTag = "
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L331
            java.lang.String r8 = r9.E     // Catch: java.lang.Throwable -> L331
            r7.append(r8)     // Catch: java.lang.Throwable -> L331
            r3.a(r1)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a()     // Catch: java.lang.Throwable -> L331
            goto L87
        L86:
            r3 = r6
        L87:
            r9.i = r3     // Catch: java.lang.Throwable -> L331
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            r3.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r7 = r9.m     // Catch: java.lang.Throwable -> L331
            r3.append(r7)     // Catch: java.lang.Throwable -> L331
            r3.append(r2)     // Catch: java.lang.Throwable -> L331
            java.lang.String r7 = r9.N     // Catch: java.lang.Throwable -> L331
            r3.append(r7)     // Catch: java.lang.Throwable -> L331
            r3.append(r2)     // Catch: java.lang.Throwable -> L331
            r3.append(r5)     // Catch: java.lang.Throwable -> L331
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.videocommon.a.b(r3)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r9.i     // Catch: java.lang.Throwable -> L331
            if (r3 == 0) goto L2e9
            com.tkay.expressad.video.signal.factory.b r3 = new com.tkay.expressad.video.signal.factory.b     // Catch: java.lang.Throwable -> L331
            android.app.Activity r5 = r9.l     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r9.i     // Catch: java.lang.Throwable -> L331
            r3.<init>(r5, r9, r7)     // Catch: java.lang.Throwable -> L331
            r9.registerJsFactory(r3)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r9.i     // Catch: java.lang.Throwable -> L331
            r5.setApiManagerJSFactory(r3)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r9.i     // Catch: java.lang.Throwable -> L331
            android.view.ViewParent r5 = r5.getParent()     // Catch: java.lang.Throwable -> L331
            if (r5 == 0) goto Lcb
            java.lang.String r0 = "preload template webview is null or load error"
            r9.a(r0)     // Catch: java.lang.Throwable -> L331
            return
        Lcb:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r9.i     // Catch: java.lang.Throwable -> L331
            java.lang.Object r5 = r5.getObject()     // Catch: java.lang.Throwable -> L331
            boolean r5 = r5 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L331
            if (r5 == 0) goto L171
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r9.i     // Catch: java.lang.Throwable -> L331
            java.lang.Object r5 = r5.getObject()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.signal.a.j r5 = (com.tkay.expressad.video.signal.a.j) r5     // Catch: java.lang.Throwable -> L331
            r3.a(r5)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r9.i     // Catch: java.lang.Throwable -> L331
            if (r3 == 0) goto L166
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L331
            r3.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.ch     // Catch: java.lang.Throwable -> L331
            android.content.Context r7 = r9.getContext()     // Catch: java.lang.Throwable -> L331
            float r7 = com.tkay.expressad.foundation.h.t.c(r7)     // Catch: java.lang.Throwable -> L331
            double r7 = (double) r7     // Catch: java.lang.Throwable -> L331
            r3.put(r5, r7)     // Catch: java.lang.Throwable -> L331
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r5.<init>()     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r7 = "name"
            com.tkay.expressad.videocommon.c.c r8 = r9.q     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r8 = r8.a()     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r5.put(r7, r8)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r7 = "amount"
            com.tkay.expressad.videocommon.c.c r8 = r9.q     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            int r8 = r8.b()     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r5.put(r7, r8)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r7 = "id"
            java.lang.String r8 = r9.r     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r5.put(r7, r8)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r7 = "userId"
            java.lang.String r8 = r9.p     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r3.put(r7, r8)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r7 = "reward"
            r3.put(r7, r5)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r5 = "playVideoMute"
            int r7 = r9.s     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r3.put(r5, r7)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            java.lang.String r5 = "extra"
            java.lang.String r7 = r9.S     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            r3.put(r5, r7)     // Catch: java.lang.Exception -> L134 org.json.JSONException -> L139 java.lang.Throwable -> L331
            goto L13d
        L134:
            r5 = move-exception
            r5.getMessage()     // Catch: java.lang.Throwable -> L331
            goto L13d
        L139:
            r5 = move-exception
            r5.getMessage()     // Catch: java.lang.Throwable -> L331
        L13d:
            com.tkay.expressad.video.bt.module.b.d r5 = new com.tkay.expressad.video.bt.module.b.d     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.module.a.b r7 = r9.c()     // Catch: java.lang.Throwable -> L331
            r5.<init>(r7, r1)     // Catch: java.lang.Throwable -> L331
            r9.K = r5     // Catch: java.lang.Throwable -> L331
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.signal.g r3 = r9.getJSNotifyProxy()     // Catch: java.lang.Throwable -> L331
            r3.a(r1)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.signal.c r1 = r9.getJSCommon()     // Catch: java.lang.Throwable -> L331
            r1.h()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.signal.c r1 = r9.getJSCommon()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.module.TkayBTContainer$a r3 = new com.tkay.expressad.video.bt.module.TkayBTContainer$a     // Catch: java.lang.Throwable -> L331
            r3.<init>(r9, r4)     // Catch: java.lang.Throwable -> L331
            r1.a(r3)     // Catch: java.lang.Throwable -> L331
        L166:
            com.tkay.expressad.video.signal.c r1 = r9.getJSCommon()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.signal.a.c r1 = (com.tkay.expressad.video.signal.a.c) r1     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.signal.c$a r1 = r1.r     // Catch: java.lang.Throwable -> L331
            r1.c()     // Catch: java.lang.Throwable -> L331
        L171:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r9.i     // Catch: java.lang.Throwable -> L331
            r1.setBackgroundColor(r4)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c r1 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L331
            java.lang.String r3 = r9.m     // Catch: java.lang.Throwable -> L331
            java.lang.String r5 = r9.N     // Catch: java.lang.Throwable -> L331
            java.util.LinkedHashMap r1 = r1.b(r3, r5)     // Catch: java.lang.Throwable -> L331
            if (r1 == 0) goto L2e3
            java.lang.String r3 = r9.E     // Catch: java.lang.Throwable -> L331
            boolean r3 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L331
            if (r3 == 0) goto L2e3
            java.lang.String r3 = r9.E     // Catch: java.lang.Throwable -> L331
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L331
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L331
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTLayout     // Catch: java.lang.Throwable -> L331
            if (r5 == 0) goto L28d
            com.tkay.expressad.video.bt.module.TkayBTLayout r3 = (com.tkay.expressad.video.bt.module.TkayBTLayout) r3     // Catch: java.lang.Throwable -> L331
            r9.h = r3     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r9.i     // Catch: java.lang.Throwable -> L331
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L331
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L331
            r3.addView(r5, r4, r7)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.f.b r3 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L331
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            r5.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r7 = r9.m     // Catch: java.lang.Throwable -> L331
            r5.append(r7)     // Catch: java.lang.Throwable -> L331
            r5.append(r0)     // Catch: java.lang.Throwable -> L331
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.module.TkayBTContainer$1 r7 = new com.tkay.expressad.video.bt.module.TkayBTContainer$1     // Catch: java.lang.Throwable -> L331
            r7.<init>(r9)     // Catch: java.lang.Throwable -> L331
            r3.a(r5, r7)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.f.b r3 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L331
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            r5.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r7 = r9.m     // Catch: java.lang.Throwable -> L331
            r5.append(r7)     // Catch: java.lang.Throwable -> L331
            java.lang.String r7 = "_2"
            r5.append(r7)     // Catch: java.lang.Throwable -> L331
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L331
            r3.c(r5)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.f.b r3 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L331
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            r5.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r7 = r9.m     // Catch: java.lang.Throwable -> L331
            r5.append(r7)     // Catch: java.lang.Throwable -> L331
            r5.append(r0)     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.widget.FeedBackButton r0 = r3.b(r0)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.f.b r3 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L331
            boolean r3 = r3.b()     // Catch: java.lang.Throwable -> L331
            if (r3 == 0) goto L24b
            if (r0 == 0) goto L24b
            android.view.ViewGroup$LayoutParams r3 = r0.getLayoutParams()     // Catch: java.lang.Exception -> L20b java.lang.Throwable -> L331
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3     // Catch: java.lang.Exception -> L20b java.lang.Throwable -> L331
            r6 = r3
            goto L20f
        L20b:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L331
        L20f:
            if (r6 != 0) goto L21a
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L331
            int r3 = com.tkay.expressad.foundation.f.b.a     // Catch: java.lang.Throwable -> L331
            int r5 = com.tkay.expressad.foundation.f.b.b     // Catch: java.lang.Throwable -> L331
            r6.<init>(r3, r5)     // Catch: java.lang.Throwable -> L331
        L21a:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L331
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L331
            r5 = 1092616192(0x41200000, float:10.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r5)     // Catch: java.lang.Throwable -> L331
            r6.topMargin = r3     // Catch: java.lang.Throwable -> L331
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L331
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L331
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r5)     // Catch: java.lang.Throwable -> L331
            r6.leftMargin = r3     // Catch: java.lang.Throwable -> L331
            r0.setLayoutParams(r6)     // Catch: java.lang.Throwable -> L331
            android.view.ViewParent r3 = r0.getParent()     // Catch: java.lang.Throwable -> L331
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L331
            if (r3 == 0) goto L246
            r3.removeView(r0)     // Catch: java.lang.Throwable -> L331
        L246:
            com.tkay.expressad.video.bt.module.TkayBTLayout r3 = r9.h     // Catch: java.lang.Throwable -> L331
            r3.addView(r0)     // Catch: java.lang.Throwable -> L331
        L24b:
            com.tkay.expressad.video.bt.module.TkayBTLayout r0 = r9.h     // Catch: java.lang.Throwable -> L331
            java.lang.String r3 = r9.E     // Catch: java.lang.Throwable -> L331
            r0.setTag(r3)     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r9.E     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.module.TkayBTLayout r3 = r9.h     // Catch: java.lang.Throwable -> L331
            r1.put(r0, r3)     // Catch: java.lang.Throwable -> L331
            java.util.Collection r0 = r1.values()     // Catch: java.lang.Throwable -> L331
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L331
        L261:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L331
            if (r3 == 0) goto L283
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L331
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L331
            boolean r5 = r3 instanceof com.tkay.expressad.video.bt.module.TkayBTRootLayout     // Catch: java.lang.Throwable -> L331
            if (r5 == 0) goto L261
            com.tkay.expressad.video.bt.module.TkayBTRootLayout r3 = (com.tkay.expressad.video.bt.module.TkayBTRootLayout) r3     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r3.getInstanceId()     // Catch: java.lang.Throwable -> L331
            r9.M = r0     // Catch: java.lang.Throwable -> L331
            android.widget.FrameLayout r0 = r9.g     // Catch: java.lang.Throwable -> L331
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L331
            r5.<init>(r8, r8)     // Catch: java.lang.Throwable -> L331
            r0.addView(r3, r5)     // Catch: java.lang.Throwable -> L331
        L283:
            java.lang.String r0 = r9.M     // Catch: java.lang.Throwable -> L331
            r1.remove(r0)     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r9.M     // Catch: java.lang.Throwable -> L331
            r1.put(r0, r9)     // Catch: java.lang.Throwable -> L331
        L28d:
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r9.m     // Catch: java.lang.Throwable -> L331
            int r1 = r9.s     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a(r0, r1)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r9.E     // Catch: java.lang.Throwable -> L331
            java.lang.String r1 = r9.N     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a(r0, r1)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r9.M     // Catch: java.lang.Throwable -> L331
            java.lang.String r1 = r9.N     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a(r0, r1)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L331
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L331
            r0.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r1 = r9.m     // Catch: java.lang.Throwable -> L331
            r0.append(r1)     // Catch: java.lang.Throwable -> L331
            r0.append(r2)     // Catch: java.lang.Throwable -> L331
            java.lang.String r1 = r9.N     // Catch: java.lang.Throwable -> L331
            r0.append(r1)     // Catch: java.lang.Throwable -> L331
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L331
            android.app.Activity r1 = r9.l     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.a.c.a(r0, r1)     // Catch: java.lang.Throwable -> L331
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r9.G     // Catch: java.lang.Throwable -> L331
            if (r0 == 0) goto L2e2
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r9.G     // Catch: java.lang.Throwable -> L331
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L331
            if (r0 <= 0) goto L2e2
            com.tkay.expressad.videocommon.e.d r0 = r9.o     // Catch: java.lang.Throwable -> L331
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r9.G     // Catch: java.lang.Throwable -> L331
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Throwable -> L331
            r9.a(r0, r1)     // Catch: java.lang.Throwable -> L331
        L2e2:
            return
        L2e3:
            java.lang.String r0 = "big template webviewLayout is null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L331
            return
        L2e9:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r9.G     // Catch: java.lang.Throwable -> L331
            if (r0 == 0) goto L32b
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r9.G     // Catch: java.lang.Throwable -> L331
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L331
            if (r0 <= 0) goto L32b
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r9.G     // Catch: java.lang.Throwable -> L331
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Throwable -> L331
            if (r0 == 0) goto L32b
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L331
            if (r0 == 0) goto L32b
            android.content.Context r0 = r9.A     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.dynview.f.d r1 = r9.T     // Catch: java.lang.Throwable -> L331
            if (r1 != 0) goto L311
            java.lang.String r0 = "ChoiceOneCallback is null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L331
            return
        L311:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L331
            r1.<init>()     // Catch: java.lang.Throwable -> L331
            java.lang.String r2 = "choice_one_callback"
            com.tkay.expressad.video.dynview.f.d r3 = r9.T     // Catch: java.lang.Throwable -> L331
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.dynview.b.a()     // Catch: java.lang.Throwable -> L331
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r9.G     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.bt.module.TkayBTContainer$2 r3 = new com.tkay.expressad.video.bt.module.TkayBTContainer$2     // Catch: java.lang.Throwable -> L331
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L331
            com.tkay.expressad.video.dynview.b.a(r0, r2, r3, r1)     // Catch: java.lang.Throwable -> L331
            return
        L32b:
            java.lang.String r0 = "big template webview is null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L331
            return
        L331:
            r0 = move-exception
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "onCreate exception "
            java.lang.String r0 = r1.concat(r0)
            r9.a(r0)
            return
    }

    @Override
    public void onDestroy() {
            r5 = this;
            boolean r0 = r5.F
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.F = r0
            super.onDestroy()
            com.tkay.expressad.video.bt.a.c.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.m
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            java.lang.String r2 = r5.N
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.tkay.expressad.video.bt.a.c.d(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.i     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L44
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.i     // Catch: java.lang.Throwable -> Le9
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> Le9
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L3a
            r0.removeAllViews()     // Catch: java.lang.Throwable -> Le9
        L3a:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.i     // Catch: java.lang.Throwable -> Le9
            r0.clearWebView()     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.i     // Catch: java.lang.Throwable -> Le9
            r0.release()     // Catch: java.lang.Throwable -> Le9
        L44:
            com.tkay.expressad.video.bt.module.a.b r0 = r5.L     // Catch: java.lang.Throwable -> Le9
            r2 = 0
            if (r0 == 0) goto L4b
            r5.L = r2     // Catch: java.lang.Throwable -> Le9
        L4b:
            com.tkay.expressad.video.bt.module.a.a r0 = r5.I     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L51
            r5.I = r2     // Catch: java.lang.Throwable -> Le9
        L51:
            android.content.Context r0 = r5.A     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L57
            r5.A = r2     // Catch: java.lang.Throwable -> Le9
        L57:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.G     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto La7
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.G     // Catch: java.lang.Throwable -> Le9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Le9
            if (r0 <= 0) goto La7
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.G     // Catch: java.lang.Throwable -> Le9
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Le9
        L69:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> Le9
            if (r2 == 0) goto La7
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2     // Catch: java.lang.Throwable -> Le9
            if (r2 == 0) goto L69
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()     // Catch: java.lang.Throwable -> Le9
            if (r3 == 0) goto L69
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r3.<init>()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r4 = r5.m     // Catch: java.lang.Throwable -> Le9
            r3.append(r4)     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r4 = r2.Z()     // Catch: java.lang.Throwable -> Le9
            r3.append(r4)     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r2 = r2.e()     // Catch: java.lang.Throwable -> Le9
            r3.append(r2)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.videocommon.a.b(r2)     // Catch: java.lang.Throwable -> Le9
            goto L69
        La7:
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = r5.E     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.video.bt.a.c.f(r0)     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = r5.m     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.video.bt.a.c.g(r0)     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r5.m     // Catch: java.lang.Throwable -> Le9
            java.lang.String r2 = r5.N     // Catch: java.lang.Throwable -> Le9
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r5.E     // Catch: java.lang.Throwable -> Le9
            r0.remove(r1)     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r5.m     // Catch: java.lang.Throwable -> Le9
            java.lang.String r2 = r5.N     // Catch: java.lang.Throwable -> Le9
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r5.M     // Catch: java.lang.Throwable -> Le9
            r0.remove(r1)     // Catch: java.lang.Throwable -> Le9
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r5.m     // Catch: java.lang.Throwable -> Le9
            java.lang.String r2 = r5.N     // Catch: java.lang.Throwable -> Le9
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> Le9
            r0.clear()     // Catch: java.lang.Throwable -> Le9
            return
        Le9:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    @Override
    public void onPause() {
            r3 = this;
            super.onPause()
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.G
            if (r0 == 0) goto L21
            int r0 = r0.size()
            if (r0 <= 0) goto L21
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.G
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            if (r0 == 0) goto L21
            boolean r0 = r0.j()
            if (r0 == 0) goto L21
            com.tkay.expressad.video.dynview.b.a.a()
        L21:
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = r3.N     // Catch: java.lang.Throwable -> L54
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L53
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L54
            if (r1 <= 0) goto L53
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L54
        L3d:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L53
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L54
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L54
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L3d
            com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r1     // Catch: java.lang.Throwable -> L54
            r1.onPause()     // Catch: java.lang.Throwable -> L54
            goto L3d
        L53:
            return
        L54:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void onResume() {
            r3 = this;
            super.onResume()
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.G
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.G
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            if (r0 == 0) goto L2b
            boolean r0 = r0.j()
            if (r0 == 0) goto L2b
            com.tkay.expressad.video.dynview.b.a r0 = com.tkay.expressad.video.dynview.b.a.a()
            com.tkay.expressad.video.dynview.e.a r1 = r0.a
            if (r1 == 0) goto L2b
            com.tkay.expressad.video.dynview.e.a r0 = r0.a
            r0.a()
        L2b:
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 == 0) goto L30
            return
        L30:
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r3.N     // Catch: java.lang.Throwable -> L63
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L62
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L63
            if (r1 <= 0) goto L62
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L63
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L63
        L4c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L63
            if (r1 == 0) goto L62
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L63
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L63
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L63
            if (r2 == 0) goto L4c
            com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r1     // Catch: java.lang.Throwable -> L63
            r1.onResume()     // Catch: java.lang.Throwable -> L63
            goto L4c
        L62:
            return
        L63:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void onStop() {
            r3 = this;
            super.onStop()
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.G
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.G
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            if (r0 == 0) goto L2b
            boolean r0 = r0.j()
            if (r0 == 0) goto L2b
            com.tkay.expressad.video.dynview.b.a r0 = com.tkay.expressad.video.dynview.b.a.a()
            com.tkay.expressad.video.dynview.e.a r1 = r0.a
            if (r1 == 0) goto L2b
            com.tkay.expressad.video.dynview.e.a r0 = r0.a
            r0.c()
        L2b:
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = r3.N     // Catch: java.lang.Throwable -> L5e
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L5e
            if (r0 == 0) goto L5d
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L5e
            if (r1 <= 0) goto L5d
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L5e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L5e
        L47:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L5d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L5e
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L5e
            boolean r2 = r1 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> L5e
            if (r2 == 0) goto L47
            com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r1     // Catch: java.lang.Throwable -> L5e
            r1.onStop()     // Catch: java.lang.Throwable -> L5e
            goto L47
        L5d:
            return
        L5e:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void reactDeveloper(java.lang.Object r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "error"
            com.tkay.expressad.video.bt.module.a.a r1 = r8.I
            if (r1 == 0) goto L124
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 != 0) goto L124
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L118
            r1.<init>(r10)     // Catch: org.json.JSONException -> L118
            java.lang.String r10 = "type"
            int r10 = r1.optInt(r10)     // Catch: org.json.JSONException -> L118
            java.lang.String r2 = "hit"
            int r2 = r1.optInt(r2)     // Catch: org.json.JSONException -> L118
            java.lang.String r3 = "unitId"
            java.lang.String r4 = r8.getUnitId()     // Catch: org.json.JSONException -> L118
            java.lang.String r3 = r1.optString(r3, r4)     // Catch: org.json.JSONException -> L118
            java.lang.String r4 = com.tkay.expressad.b.y     // Catch: org.json.JSONException -> L118
            java.lang.String r5 = r8.getPlacementId()     // Catch: org.json.JSONException -> L118
            r1.optString(r4, r5)     // Catch: org.json.JSONException -> L118
            java.lang.String r4 = "data"
            org.json.JSONObject r1 = r1.optJSONObject(r4)     // Catch: org.json.JSONException -> L118
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r8.G     // Catch: org.json.JSONException -> L118
            r5 = 0
            java.lang.Object r4 = r4.get(r5)     // Catch: org.json.JSONException -> L118
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4     // Catch: org.json.JSONException -> L118
            r6 = 1
            if (r10 != r6) goto L59
            java.lang.String r7 = "expired"
            boolean r7 = r1.optBoolean(r7)     // Catch: org.json.JSONException -> L118
            if (r4 == 0) goto L53
            if (r7 == 0) goto L50
            r4.e(r6)     // Catch: org.json.JSONException -> L118
            goto L53
        L50:
            r4.e(r5)     // Catch: org.json.JSONException -> L118
        L53:
            boolean r7 = r8.isNativeKilledCallback(r4)     // Catch: org.json.JSONException -> L118
            r8.O = r7     // Catch: org.json.JSONException -> L118
        L59:
            switch(r10) {
                case 1: goto L10f;
                case 2: goto Le9;
                case 3: goto Le3;
                case 4: goto Ldd;
                case 5: goto Ld1;
                case 6: goto L5e;
                default: goto L5c;
            }     // Catch: org.json.JSONException -> L118
        L5c:
            goto L114
        L5e:
            java.lang.String r10 = "convert"
            int r10 = r1.optInt(r10)     // Catch: org.json.JSONException -> L118
            if (r10 != r6) goto L67
            goto L68
        L67:
            r6 = r5
        L68:
            java.lang.String r10 = "reward"
            org.json.JSONObject r10 = r1.optJSONObject(r10)     // Catch: org.json.JSONException -> L118
            java.lang.String r0 = "campaign"
            org.json.JSONObject r0 = r1.optJSONObject(r0)     // Catch: org.json.JSONException -> L118
            com.tkay.expressad.foundation.d.c r0 = com.tkay.expressad.foundation.d.c.b(r0)     // Catch: org.json.JSONException -> L118
            com.tkay.expressad.videocommon.c.c r10 = com.tkay.expressad.videocommon.c.c.a(r10)     // Catch: org.json.JSONException -> L118
            if (r10 != 0) goto L80
            com.tkay.expressad.videocommon.c.c r10 = r8.q     // Catch: org.json.JSONException -> L118
        L80:
            java.lang.String r7 = "extra"
            java.lang.String r1 = r1.optString(r7)     // Catch: org.json.JSONException -> L118
            boolean r7 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L118
            if (r7 != 0) goto L8e
            r8.S = r1     // Catch: org.json.JSONException -> L118
        L8e:
            boolean r1 = r8.O     // Catch: org.json.JSONException -> L118
            if (r1 != 0) goto L114
            int r1 = r8.P     // Catch: org.json.JSONException -> L118
            if (r2 == r1) goto L114
            boolean r1 = r8.t     // Catch: org.json.JSONException -> L118
            if (r1 == 0) goto Laf
            int r1 = r8.v     // Catch: org.json.JSONException -> L118
            int r2 = com.tkay.expressad.foundation.g.a.cr     // Catch: org.json.JSONException -> L118
            if (r1 == r2) goto La6
            int r1 = r8.v     // Catch: org.json.JSONException -> L118
            int r2 = com.tkay.expressad.foundation.g.a.cs     // Catch: org.json.JSONException -> L118
            if (r1 != r2) goto Laf
        La6:
            com.tkay.expressad.video.bt.module.a.a r1 = r8.I     // Catch: org.json.JSONException -> L118
            boolean r2 = r8.Q     // Catch: org.json.JSONException -> L118
            int r7 = r8.R     // Catch: org.json.JSONException -> L118
            r1.a(r2, r7)     // Catch: org.json.JSONException -> L118
        Laf:
            if (r6 != 0) goto Lb4
            r10.a(r5)     // Catch: org.json.JSONException -> L118
        Lb4:
            com.tkay.expressad.video.bt.module.a.a r1 = r8.I     // Catch: org.json.JSONException -> L118
            r1.a(r6, r10)     // Catch: org.json.JSONException -> L118
            boolean r1 = r8.t     // Catch: org.json.JSONException -> L118
            if (r1 != 0) goto L114
            if (r6 == 0) goto L114
            if (r0 == 0) goto Lc9
            java.lang.String r1 = r8.p     // Catch: org.json.JSONException -> L118
            java.lang.String r2 = r8.S     // Catch: org.json.JSONException -> L118
            com.tkay.expressad.video.module.b.a.a(r0, r10, r3, r1, r2)     // Catch: org.json.JSONException -> L118
            goto L114
        Lc9:
            java.lang.String r0 = r8.p     // Catch: org.json.JSONException -> L118
            java.lang.String r1 = r8.S     // Catch: org.json.JSONException -> L118
            com.tkay.expressad.video.module.b.a.a(r4, r10, r3, r0, r1)     // Catch: org.json.JSONException -> L118
            goto L114
        Ld1:
            com.tkay.expressad.video.bt.module.a.a r10 = r8.I     // Catch: org.json.JSONException -> L118
            com.tkay.expressad.foundation.d.c r0 = r8.a     // Catch: org.json.JSONException -> L118
            if (r0 == 0) goto Ld9
            com.tkay.expressad.foundation.d.c r4 = r8.a     // Catch: org.json.JSONException -> L118
        Ld9:
            r10.a(r4)     // Catch: org.json.JSONException -> L118
            goto L114
        Ldd:
            com.tkay.expressad.video.bt.module.a.a r10 = r8.I     // Catch: org.json.JSONException -> L118
            r10.c()     // Catch: org.json.JSONException -> L118
            goto L114
        Le3:
            com.tkay.expressad.video.bt.module.a.a r10 = r8.I     // Catch: org.json.JSONException -> L118
            r10.b()     // Catch: org.json.JSONException -> L118
            goto L114
        Le9:
            org.json.JSONObject r10 = r1.optJSONObject(r0)     // Catch: org.json.JSONException -> L118
            java.lang.String r3 = ""
            if (r10 == 0) goto Lf7
            java.lang.String r3 = "msg"
            java.lang.String r3 = r10.optString(r3)     // Catch: org.json.JSONException -> L118
        Lf7:
            boolean r10 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L118
            if (r10 == 0) goto L101
            java.lang.String r3 = r1.optString(r0)     // Catch: org.json.JSONException -> L118
        L101:
            boolean r10 = r8.O     // Catch: org.json.JSONException -> L118
            if (r10 != 0) goto L114
            int r10 = r8.P     // Catch: org.json.JSONException -> L118
            if (r2 == r10) goto L114
            com.tkay.expressad.video.bt.module.a.a r10 = r8.I     // Catch: org.json.JSONException -> L118
            r10.a(r3)     // Catch: org.json.JSONException -> L118
            goto L114
        L10f:
            com.tkay.expressad.video.bt.module.a.a r10 = r8.I     // Catch: org.json.JSONException -> L118
            r10.a()     // Catch: org.json.JSONException -> L118
        L114:
            r8.a(r9)     // Catch: org.json.JSONException -> L118
            return
        L118:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            a(r9, r0)
            r10.getMessage()
            return
        L124:
            java.lang.String r10 = "listener is null"
            a(r9, r10)
            return
    }

    public void setBTContainerCallback(com.tkay.expressad.video.bt.module.a.a r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public void setCampaignDownLoadTasks(java.util.List<com.tkay.expressad.videocommon.b.a> r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public void setCampaigns(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public void setChoiceOneCallback(com.tkay.expressad.video.dynview.f.d r1) {
            r0 = this;
            r0.T = r1
            return
    }

    public void setDeveloperExtraData(java.lang.String r1) {
            r0 = this;
            r0.S = r1
            return
    }

    public void setJSFactory(com.tkay.expressad.video.signal.factory.b r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setNotchPadding(int r17, int r18, int r19, int r20, int r21) {
            r16 = this;
            r1 = r16
            r8 = r18
            r9 = r19
            r10 = r20
            r11 = r21
            java.lang.String r12 = com.tkay.expressad.foundation.h.h.a(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.i     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r13 = "oncutoutfetched"
            r14 = 0
            if (r0 == 0) goto L40
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.i     // Catch: java.lang.Throwable -> Ldb
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> Ldb
            boolean r0 = r0 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> Ldb
            if (r0 == 0) goto L40
            boolean r0 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Ldb
            if (r0 != 0) goto L40
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.i     // Catch: java.lang.Throwable -> Ldb
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0     // Catch: java.lang.Throwable -> Ldb
            r0.b(r12)     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.i     // Catch: java.lang.Throwable -> Ldb
            byte[] r2 = r12.getBytes()     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r13, r2)     // Catch: java.lang.Throwable -> Ldb
        L40:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.G     // Catch: java.lang.Throwable -> Ldb
            if (r0 == 0) goto L73
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.G     // Catch: java.lang.Throwable -> Ldb
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Ldb
            if (r0 <= 0) goto L73
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.G     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            java.lang.Object r0 = r0.get(r14)     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            boolean r0 = r0.j()     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            if (r0 == 0) goto L73
            android.widget.TextView r0 = r1.B     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            if (r0 == 0) goto L73
            android.widget.TextView r0 = r1.B     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            r0.setMargins(r8, r10, r9, r11)     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            android.widget.TextView r2 = r1.B     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L6f java.lang.Throwable -> Ldb
            goto L73
        L6f:
            r0 = move-exception
            r0.getMessage()     // Catch: java.lang.Throwable -> Ldb
        L73:
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.video.bt.a.c.a(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> Ldb
            com.tkay.expressad.video.bt.a.c r0 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r2 = r1.m     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r3 = r1.N     // Catch: java.lang.Throwable -> Ldb
            java.util.LinkedHashMap r0 = r0.b(r2, r3)     // Catch: java.lang.Throwable -> Ldb
            if (r0 == 0) goto Lda
            int r2 = r0.size()     // Catch: java.lang.Throwable -> Ldb
            if (r2 <= 0) goto Lda
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> Ldb
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Ldb
        L95:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> Ldb
            if (r2 == 0) goto Lda
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> Ldb
            r15 = r2
            android.view.View r15 = (android.view.View) r15     // Catch: java.lang.Throwable -> Ldb
            boolean r2 = r15 instanceof com.tkay.expressad.video.bt.module.TkayBTVideoView     // Catch: java.lang.Throwable -> Ldb
            if (r2 == 0) goto Lac
            r2 = r15
            com.tkay.expressad.video.bt.module.TkayBTVideoView r2 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r2     // Catch: java.lang.Throwable -> Ldb
            r2.setNotchPadding(r8, r9, r10, r11)     // Catch: java.lang.Throwable -> Ldb
        Lac:
            boolean r2 = r15 instanceof com.tkay.expressad.video.bt.module.TYTempContainer     // Catch: java.lang.Throwable -> Ldb
            if (r2 == 0) goto Lc0
            r2 = r15
            com.tkay.expressad.video.bt.module.TYTempContainer r2 = (com.tkay.expressad.video.bt.module.TYTempContainer) r2     // Catch: java.lang.Throwable -> Ldb
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r2.setNotchPadding(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Ldb
        Lc0:
            boolean r2 = r15 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> Ldb
            if (r2 == 0) goto L95
            boolean r2 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Ldb
            if (r2 != 0) goto L95
            com.tkay.expressad.atsignalcommon.windvane.j r2 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> Ldb
            byte[] r3 = r12.getBytes()     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r14)     // Catch: java.lang.Throwable -> Ldb
            r2.a(r15, r13, r3)     // Catch: java.lang.Throwable -> Ldb
            goto L95
        Lda:
            return
        Ldb:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setShowRewardVideoListener(com.tkay.expressad.video.bt.module.b.h r1) {
            r0 = this;
            r0.J = r1
            return
    }
}
