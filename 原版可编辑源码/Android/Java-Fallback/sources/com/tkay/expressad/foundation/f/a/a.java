package com.tkay.expressad.foundation.f.a;

public final class a {
    private static int n = -1;
    private static java.lang.String s;
    private java.lang.String a;
    private com.tkay.expressad.foundation.d.c b;
    private com.tkay.expressad.widget.FeedBackButton c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private java.lang.String j;
    private java.lang.String k;
    private float l;
    private int m;
    private int o;
    private com.tkay.expressad.widget.a.a p;
    private java.util.List<com.tkay.expressad.foundation.f.a.a.a> q;
    private com.tkay.expressad.widget.a.c r;






    public static class a implements com.tkay.expressad.widget.a.c {
        private com.tkay.expressad.foundation.f.a a;
        private java.lang.String b;

        public a(java.lang.String r1, com.tkay.expressad.foundation.f.a r2) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.b = r1
                return
        }

        @Override
        public final void a() {
                r1 = this;
                r0 = 0
                com.tkay.expressad.foundation.f.b.c = r0
                com.tkay.expressad.foundation.f.a r0 = r1.a
                if (r0 == 0) goto Ld
                com.tkay.expressad.foundation.f.a.a.f()
                r0.c()
            Ld:
                return
        }

        public final void a(boolean r2) {
                r1 = this;
                r0 = 1
                com.tkay.expressad.foundation.f.b.c = r0
                com.tkay.expressad.foundation.f.a r0 = r1.a
                if (r0 == 0) goto Lc
                if (r2 == 0) goto Lc
                r0.a()
            Lc:
                return
        }

        @Override
        public final void b() {
                r1 = this;
                r0 = 0
                com.tkay.expressad.foundation.f.b.c = r0
                com.tkay.expressad.foundation.f.a r0 = r1.a
                if (r0 == 0) goto La
                r0.b()
            La:
                return
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }
    }

    static {
            return
    }

    public a(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r2.i = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.l = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r2.m = r0
            int r0 = com.tkay.expressad.foundation.f.a.a.n
            r2.o = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.q = r0
            com.tkay.expressad.foundation.f.a.a$1 r0 = new com.tkay.expressad.foundation.f.a.a$1
            r0.<init>(r2)
            r2.r = r0
            r2.a = r3
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r3 = r2.q
            if (r3 != 0) goto L3f
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.q = r3
        L3f:
            r2.g()
            r2.n()
            r2.h()
            return
    }

    private static com.tkay.expressad.widget.FeedbackRadioGroup a(com.tkay.expressad.d.a.b r1) {
            org.json.JSONArray r1 = r1.d()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r1 == 0) goto L20
            int r1 = r1.length()
            if (r1 <= 0) goto L20
            if (r0 == 0) goto L20
            com.tkay.expressad.widget.FeedbackRadioGroup r1 = new com.tkay.expressad.widget.FeedbackRadioGroup
            r1.<init>(r0)
            r0 = 0
            r1.setOrientation(r0)
            goto L21
        L20:
            r1 = 0
        L21:
            return r1
    }

    static java.lang.String a(java.lang.String r0) {
            com.tkay.expressad.foundation.f.a.a.s = r0
            return r0
    }

    private void a(android.widget.RadioButton r2) {
            r1 = this;
            com.tkay.expressad.foundation.f.a.a$3 r0 = new com.tkay.expressad.foundation.f.a.a$3
            r0.<init>(r1)
            r2.setOnCheckedChangeListener(r0)
            return
    }

    static void a(com.tkay.expressad.foundation.f.a.a r1) {
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r1 = r1.q
            if (r1 == 0) goto L1a
            java.util.Iterator r1 = r1.iterator()
        L8:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r1.next()
            com.tkay.expressad.foundation.f.a.a$a r0 = (com.tkay.expressad.foundation.f.a.a.a) r0
            if (r0 == 0) goto L8
            r0.a()
            goto L8
        L1a:
            java.lang.String r1 = ""
            com.tkay.expressad.foundation.f.a.a.s = r1
            return
    }

    private void a(com.tkay.expressad.widget.FeedbackRadioGroup r12, com.tkay.expressad.d.a.b r13) {
            r11 = this;
            org.json.JSONArray r13 = r13.d()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r13 == 0) goto L7e
            int r1 = r13.length()
            if (r1 <= 0) goto L7e
            if (r0 == 0) goto L7e
            java.lang.String r1 = "tkay_cm_feedback_choice_btn_bg"
            java.lang.String r2 = "drawable"
            int r1 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            android.content.res.Resources r2 = com.tkay.expressad.foundation.h.i.a(r0)
            java.lang.String r3 = "tkay_cm_feedback_rb_text_color_color_list"
            java.lang.String r4 = "color"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r4)
            r4 = 0
            if (r2 == 0) goto L36
            android.content.res.ColorStateList r2 = r2.getColorStateList(r3)     // Catch: java.lang.Exception -> L32
            goto L37
        L32:
            r2 = move-exception
            r2.printStackTrace()
        L36:
            r2 = r4
        L37:
            r3 = 1096810496(0x41600000, float:14.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r0, r3)
            r5 = 1088421888(0x40e00000, float:7.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r0, r5)
            r6 = 1086324736(0x40c00000, float:6.0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r0, r6)
            r7 = 0
        L4a:
            int r8 = r13.length()
            if (r7 >= r8) goto L7e
            java.lang.String r8 = r13.optString(r7)
            android.widget.RadioButton r9 = new android.widget.RadioButton
            r9.<init>(r0)
            r9.setButtonDrawable(r4)
            r9.setBackgroundResource(r1)
            r9.setText(r8)
            if (r2 == 0) goto L67
            r9.setTextColor(r2)
        L67:
            r9.setPadding(r3, r5, r3, r5)
            android.widget.RadioGroup$LayoutParams r8 = new android.widget.RadioGroup$LayoutParams
            r10 = -2
            r8.<init>(r10, r10)
            int r10 = r6 / 4
            r8.setMargins(r6, r10, r6, r10)
            r11.a(r9)
            r12.addView(r9, r8)
            int r7 = r7 + 1
            goto L4a
        L7e:
            return
    }

    private void a(boolean r3) {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r2.q
            if (r0 == 0) goto L1a
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.foundation.f.a.a$a r1 = (com.tkay.expressad.foundation.f.a.a.a) r1
            if (r1 == 0) goto L8
            r1.a(r3)
            goto L8
        L1a:
            return
    }

    private void b(com.tkay.expressad.foundation.f.a.a.a r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r1.q
            if (r0 == 0) goto L7
            r0.remove(r2)
        L7:
            return
    }

    static void b(com.tkay.expressad.foundation.f.a.a r1) {
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r1 = r1.q
            if (r1 == 0) goto L1a
            java.util.Iterator r1 = r1.iterator()
        L8:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r1.next()
            com.tkay.expressad.foundation.f.a.a$a r0 = (com.tkay.expressad.foundation.f.a.a.a) r0
            if (r0 == 0) goto L8
            r0.b()
            goto L8
        L1a:
            java.lang.String r1 = ""
            com.tkay.expressad.foundation.f.a.a.s = r1
            return
    }

    static void c(com.tkay.expressad.foundation.f.a.a r1) {
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r1 = r1.q
            if (r1 == 0) goto L12
            java.util.Iterator r1 = r1.iterator()
        L8:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L12
            r1.next()
            goto L8
        L12:
            return
    }

    static com.tkay.expressad.widget.a.a d(com.tkay.expressad.foundation.f.a.a r0) {
            com.tkay.expressad.widget.a.a r0 = r0.p
            return r0
    }

    static java.lang.String f() {
            java.lang.String r0 = com.tkay.expressad.foundation.f.a.a.s
            return r0
    }

    private void g() {
            r1 = this;
            com.tkay.expressad.widget.a.c r0 = r1.r
            if (r0 != 0) goto Lb
            com.tkay.expressad.foundation.f.a.a$2 r0 = new com.tkay.expressad.foundation.f.a.a$2
            r0.<init>(r1)
            r1.r = r0
        Lb:
            return
    }

    private void h() {
            r4 = this;
            com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> L82
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L82
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L82
            android.app.Activity r0 = com.tkay.expressad.foundation.f.b.a(r0)     // Catch: java.lang.Exception -> L82
            if (r0 == 0) goto L81
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L82
            r0.e()     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Exception -> L82
            if (r0 != 0) goto L28
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.c()     // Catch: java.lang.Exception -> L82
        L28:
            com.tkay.expressad.d.a$b r0 = r0.L()     // Catch: java.lang.Exception -> L82
            if (r0 != 0) goto L2f
            return
        L2f:
            r4.g()     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.a r1 = new com.tkay.expressad.widget.a.a     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> L82
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L82
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L82
            android.app.Activity r2 = com.tkay.expressad.foundation.f.b.a(r2)     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.c r3 = r4.r     // Catch: java.lang.Exception -> L82
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L82
            r4.p = r1     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.FeedbackRadioGroup r1 = a(r0)     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.a r2 = r4.p     // Catch: java.lang.Exception -> L82
            java.lang.String r3 = r0.c()     // Catch: java.lang.Exception -> L82
            r2.c(r3)     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.a r2 = r4.p     // Catch: java.lang.Exception -> L82
            java.lang.String r3 = r0.b()     // Catch: java.lang.Exception -> L82
            r2.b(r3)     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.a r2 = r4.p     // Catch: java.lang.Exception -> L82
            java.lang.String r3 = r0.a()     // Catch: java.lang.Exception -> L82
            r2.a(r3)     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.a r2 = r4.p     // Catch: java.lang.Exception -> L82
            r2.a(r1)     // Catch: java.lang.Exception -> L82
            com.tkay.expressad.widget.a.a r2 = r4.p     // Catch: java.lang.Exception -> L82
            java.lang.String r3 = com.tkay.expressad.foundation.f.a.a.s     // Catch: java.lang.Exception -> L82
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L82
            if (r3 != 0) goto L7a
            r3 = 1
            goto L7b
        L7a:
            r3 = 0
        L7b:
            r2.a(r3)     // Catch: java.lang.Exception -> L82
            r4.a(r1, r0)     // Catch: java.lang.Exception -> L82
        L81:
            return
        L82:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private void i() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r2.q
            if (r0 == 0) goto L1a
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.foundation.f.a.a$a r1 = (com.tkay.expressad.foundation.f.a.a.a) r1
            if (r1 == 0) goto L8
            r1.b()
            goto L8
        L1a:
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.f.a.a.s = r0
            return
    }

    private void j() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r2.q
            if (r0 == 0) goto L1a
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.foundation.f.a.a$a r1 = (com.tkay.expressad.foundation.f.a.a.a) r1
            if (r1 == 0) goto L8
            r1.a()
            goto L8
        L1a:
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.f.a.a.s = r0
            return
    }

    private void k() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r2.q
            if (r0 == 0) goto L12
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L12
            r0.next()
            goto L8
        L12:
            return
    }

    private java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    private void m() {
            r3 = this;
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            if (r0 == 0) goto La0
            int r1 = r3.f
            if (r1 < 0) goto Lc
            float r1 = (float) r1
            r0.setX(r1)
        Lc:
            int r0 = r3.g
            if (r0 < 0) goto L16
            com.tkay.expressad.widget.FeedBackButton r1 = r3.c
            float r0 = (float) r0
            r1.setY(r0)
        L16:
            float r0 = r3.l
            r1 = 0
            int r2 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r2 < 0) goto L30
            com.tkay.expressad.widget.FeedBackButton r2 = r3.c
            r2.setAlpha(r0)
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            float r2 = r3.l
            int r1 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r1 == 0) goto L2c
            r1 = 1
            goto L2d
        L2c:
            r1 = 0
        L2d:
            r0.setEnabled(r1)
        L30:
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            int r1 = r3.h
            if (r1 <= 0) goto L45
            com.tkay.expressad.widget.FeedBackButton r2 = r3.c
            r2.setWidth(r1)
            if (r0 == 0) goto L45
            int r1 = r3.h
            r0.width = r1
        L45:
            int r1 = r3.i
            if (r1 <= 0) goto L54
            com.tkay.expressad.widget.FeedBackButton r2 = r3.c
            r2.setHeight(r1)
            if (r0 == 0) goto L54
            int r1 = r3.i
            r0.height = r1
        L54:
            if (r0 == 0) goto L5b
            com.tkay.expressad.widget.FeedBackButton r1 = r3.c
            r1.setLayoutParams(r0)
        L5b:
            java.lang.String r0 = r3.j     // Catch: java.lang.Exception -> L6f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L6f
            if (r0 != 0) goto L73
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c     // Catch: java.lang.Exception -> L6f
            java.lang.String r1 = r3.j     // Catch: java.lang.Exception -> L6f
            int r1 = android.graphics.Color.parseColor(r1)     // Catch: java.lang.Exception -> L6f
            r0.setTextColor(r1)     // Catch: java.lang.Exception -> L6f
            goto L73
        L6f:
            r0 = move-exception
            r0.printStackTrace()
        L73:
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            int r1 = r3.m
            if (r1 <= 0) goto L80
            float r1 = (float) r1
            r0.setCornerRadius(r1)
        L80:
            java.lang.String r1 = r3.k
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L92
            java.lang.String r1 = r3.k
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setColor(r1)
            goto L9b
        L92:
            java.lang.String r1 = com.tkay.expressad.widget.FeedBackButton.FEEDBACK_BTN_BACKGROUND_COLOR_STR
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setColor(r1)
        L9b:
            com.tkay.expressad.widget.FeedBackButton r1 = r3.c     // Catch: java.lang.Throwable -> La0
            r1.setBackgroundDrawable(r0)     // Catch: java.lang.Throwable -> La0
        La0:
            return
    }

    private void n() {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L2b
            com.tkay.expressad.widget.FeedBackButton r1 = new com.tkay.expressad.widget.FeedBackButton     // Catch: java.lang.Exception -> L27
            r1.<init>(r0)     // Catch: java.lang.Exception -> L27
            r3.c = r1     // Catch: java.lang.Exception -> L27
            int r0 = r3.o     // Catch: java.lang.Exception -> L27
            r2 = 8
            if (r0 != r2) goto L18
            goto L19
        L18:
            r2 = 0
        L19:
            r1.setVisibility(r2)     // Catch: java.lang.Exception -> L27
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c     // Catch: java.lang.Exception -> L27
            com.tkay.expressad.foundation.f.a.a$4 r1 = new com.tkay.expressad.foundation.f.a.a$4     // Catch: java.lang.Exception -> L27
            r1.<init>(r3)     // Catch: java.lang.Exception -> L27
            r0.setOnClickListener(r1)     // Catch: java.lang.Exception -> L27
            return
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            return
    }

    private int o() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    private int p() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public final void a() {
            r3 = this;
            com.tkay.expressad.foundation.f.b.a()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.app.Activity r0 = com.tkay.expressad.foundation.f.b.a(r0)
            com.tkay.expressad.widget.a.a r1 = r3.p
            if (r1 == 0) goto L19
            android.content.Context r1 = r1.getContext()
            if (r1 == r0) goto L1c
        L19:
            r3.h()
        L1c:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.widget.FeedBackButton r1 = r3.c
            if (r1 == 0) goto L2c
            android.content.Context r0 = r1.getContext()
        L2c:
            com.tkay.expressad.foundation.f.b.a()
            com.tkay.expressad.widget.a.a r1 = r3.p
            boolean r0 = com.tkay.expressad.foundation.f.b.a(r0, r1)
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r1 = r3.q
            if (r1 == 0) goto L4f
            java.util.Iterator r1 = r1.iterator()
        L3d:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L4f
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.foundation.f.a.a$a r2 = (com.tkay.expressad.foundation.f.a.a.a) r2
            if (r2 == 0) goto L3d
            r2.a(r0)
            goto L3d
        L4f:
            return
    }

    public final void a(int r2) {
            r1 = this;
            r1.o = r2
            com.tkay.expressad.widget.FeedBackButton r0 = r1.c
            if (r0 == 0) goto L9
            r0.setVisibility(r2)
        L9:
            return
    }

    public final void a(int r1, int r2, int r3, int r4, int r5, float r6, java.lang.String r7, java.lang.String r8) {
            r0 = this;
            r0.f = r1
            r0.g = r2
            r0.h = r3
            r0.i = r4
            r0.j = r7
            r0.k = r8
            r0.l = r6
            r0.m = r5
            r0.m()
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.f.a.a.a r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r1.q
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.q = r0
        Lb:
            java.util.List<com.tkay.expressad.foundation.f.a.a$a> r0 = r1.q
            r0.add(r2)
            return
    }

    public final void a(com.tkay.expressad.widget.FeedBackButton r4) {
            r3 = this;
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            r1 = 8
            if (r0 == 0) goto L9
            r0.setVisibility(r1)
        L9:
            if (r4 == 0) goto L3e
            float r0 = r3.l
            r4.setAlpha(r0)
            float r0 = r3.l
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r2 = 0
            if (r0 == 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = r2
        L1b:
            r4.setEnabled(r0)
            int r0 = r3.o
            if (r0 != r1) goto L23
            goto L24
        L23:
            r1 = r2
        L24:
            r4.setVisibility(r1)
            r3.c = r4
            com.tkay.expressad.foundation.d.c r0 = r3.b
            if (r0 == 0) goto L36
            boolean r0 = r0.j()
            if (r0 != 0) goto L36
            r3.m()
        L36:
            com.tkay.expressad.foundation.f.a.a$5 r0 = new com.tkay.expressad.foundation.f.a.a$5
            r0.<init>(r3)
            r4.setOnClickListener(r0)
        L3e:
            return
    }

    public final void b() {
            r1 = this;
            com.tkay.expressad.widget.a.a r0 = r1.p
            if (r0 == 0) goto Lf
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lf
            com.tkay.expressad.widget.a.a r0 = r1.p
            r0.cancel()
        Lf:
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final com.tkay.expressad.widget.FeedBackButton c() {
            r1 = this;
            com.tkay.expressad.widget.FeedBackButton r0 = r1.c
            if (r0 != 0) goto L7
            r1.n()
        L7:
            com.tkay.expressad.widget.FeedBackButton r0 = r1.c
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void d() {
            r3 = this;
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            r1 = 0
            if (r0 == 0) goto L1e
            r0.setOnClickListener(r1)
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            r2 = 8
            r0.setVisibility(r2)
            com.tkay.expressad.widget.FeedBackButton r0 = r3.c
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L1e
            com.tkay.expressad.widget.FeedBackButton r2 = r3.c
            r0.removeView(r2)
        L1e:
            com.tkay.expressad.widget.a.a r0 = r3.p
            if (r0 == 0) goto L25
            r0.a(r1)
        L25:
            r3.p = r1
            r3.q = r1
            r3.c = r1
            r3.r = r1
            return
    }

    public final com.tkay.expressad.foundation.d.c e() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.b
            return r0
    }
}
