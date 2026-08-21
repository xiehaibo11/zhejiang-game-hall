package com.mbridge.msdk.foundation.b.a;

public final class a {
    private static int t = -1;
    private static java.lang.String y;
    private java.lang.String a;
    private com.mbridge.msdk.foundation.entity.CampaignEx b;
    private com.mbridge.msdk.widget.FeedBackButton c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private float j;
    private org.json.JSONArray k;
    private int l;
    private int m;
    private int n;
    private int o;
    private java.lang.String p;
    private java.lang.String q;
    private float r;
    private int s;
    private int u;
    private com.mbridge.msdk.widget.dialog.MBFeedBackDialog v;
    private java.util.List<com.mbridge.msdk.foundation.b.a.a.a> w;
    private com.mbridge.msdk.widget.dialog.a x;






    public static class a implements com.mbridge.msdk.widget.dialog.a {
        private com.mbridge.msdk.foundation.b.a a;
        private java.lang.String b;

        public a(java.lang.String r1, com.mbridge.msdk.foundation.b.a r2) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.b = r1
                return
        }

        @Override
        public final void a() {
                r2 = this;
                r0 = 0
                com.mbridge.msdk.foundation.b.b.c = r0
                com.mbridge.msdk.foundation.b.a r0 = r2.a
                if (r0 == 0) goto Le
                java.lang.String r1 = com.mbridge.msdk.foundation.b.a.a.h()
                r0.a(r1)
            Le:
                return
        }

        public final void a(int r3) {
                r2 = this;
                r0 = 1
                com.mbridge.msdk.foundation.b.b.c = r0
                com.mbridge.msdk.foundation.b.a r0 = r2.a
                if (r0 == 0) goto Ld
                r1 = 2
                if (r3 != r1) goto Ld
                r0.a()
            Ld:
                return
        }

        @Override
        public final void b() {
                r1 = this;
                r0 = 0
                com.mbridge.msdk.foundation.b.b.c = r0
                com.mbridge.msdk.foundation.b.a r0 = r1.a
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
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.j = r1
            r2.l = r0
            r2.m = r0
            r2.n = r0
            r2.o = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.r = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r2.s = r0
            int r0 = com.mbridge.msdk.foundation.b.a.a.t
            r2.u = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.w = r0
            com.mbridge.msdk.foundation.b.a.a$1 r0 = new com.mbridge.msdk.foundation.b.a.a$1
            r0.<init>(r2)
            r2.x = r0
            r2.a = r3
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r3 = r2.w
            if (r3 != 0) goto L4b
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.w = r3
        L4b:
            r2.i()
            r2.l()
            r2.j()
            return
    }

    private com.mbridge.msdk.widget.FeedbackRadioGroup a(com.mbridge.msdk.c.a.b r2) {
            r1 = this;
            org.json.JSONArray r2 = r2.d()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r2 == 0) goto L20
            int r2 = r2.length()
            if (r2 <= 0) goto L20
            if (r0 == 0) goto L20
            com.mbridge.msdk.widget.FeedbackRadioGroup r2 = new com.mbridge.msdk.widget.FeedbackRadioGroup
            r2.<init>(r0)
            r0 = 0
            r2.setOrientation(r0)
            goto L21
        L20:
            r2 = 0
        L21:
            return r2
    }

    static java.lang.String a(java.lang.String r0) {
            com.mbridge.msdk.foundation.b.a.a.y = r0
            return r0
    }

    private void a(android.widget.RadioButton r2) {
            r1 = this;
            if (r2 == 0) goto La
            com.mbridge.msdk.foundation.b.a.a$3 r0 = new com.mbridge.msdk.foundation.b.a.a$3
            r0.<init>(r1)
            r2.setOnCheckedChangeListener(r0)
        La:
            return
    }

    static void a(com.mbridge.msdk.foundation.b.a.a r5) {
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r5.a
            java.lang.String r2 = com.mbridge.msdk.foundation.b.a.a.y
            r3 = 1
            r4 = 4
            r0.a(r1, r3, r4, r2)
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r5 = r5.w
            if (r5 == 0) goto L27
            java.util.Iterator r5 = r5.iterator()
        L15:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r5.next()
            com.mbridge.msdk.foundation.b.a.a$a r0 = (com.mbridge.msdk.foundation.b.a.a.a) r0
            if (r0 == 0) goto L15
            r0.a()
            goto L15
        L27:
            java.lang.String r5 = ""
            com.mbridge.msdk.foundation.b.a.a.y = r5
            return
    }

    private void a(com.mbridge.msdk.widget.FeedbackRadioGroup r12, com.mbridge.msdk.c.a.b r13) {
            r11 = this;
            org.json.JSONArray r13 = r13.d()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r13 == 0) goto L7e
            int r1 = r13.length()
            if (r1 <= 0) goto L7e
            if (r0 == 0) goto L7e
            java.lang.String r1 = "mbridge_cm_feedback_choice_btn_bg"
            java.lang.String r2 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            android.content.res.Resources r2 = com.mbridge.msdk.foundation.tools.s.a(r0)
            java.lang.String r3 = "mbridge_cm_feedback_rb_text_color_color_list"
            java.lang.String r4 = "color"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r4)
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
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r0, r3)
            r5 = 1088421888(0x40e00000, float:7.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r0, r5)
            r6 = 1086324736(0x40c00000, float:6.0)
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r0, r6)
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

    static void b(com.mbridge.msdk.foundation.b.a.a r5) {
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r5.a
            java.lang.String r2 = com.mbridge.msdk.foundation.b.a.a.y
            r3 = 0
            r4 = 4
            r0.a(r1, r3, r4, r2)
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r5 = r5.w
            if (r5 == 0) goto L27
            java.util.Iterator r5 = r5.iterator()
        L15:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r5.next()
            com.mbridge.msdk.foundation.b.a.a$a r0 = (com.mbridge.msdk.foundation.b.a.a.a) r0
            if (r0 == 0) goto L15
            r0.b()
            goto L15
        L27:
            java.lang.String r5 = ""
            com.mbridge.msdk.foundation.b.a.a.y = r5
            return
    }

    static void c(com.mbridge.msdk.foundation.b.a.a r1) {
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r1 = r1.w
            if (r1 == 0) goto L1a
            java.util.Iterator r1 = r1.iterator()
        L8:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r1.next()
            com.mbridge.msdk.foundation.b.a.a$a r0 = (com.mbridge.msdk.foundation.b.a.a.a) r0
            if (r0 == 0) goto L8
            r0.c()
            goto L8
        L1a:
            return
    }

    static com.mbridge.msdk.widget.dialog.MBFeedBackDialog d(com.mbridge.msdk.foundation.b.a.a r0) {
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r0 = r0.v
            return r0
    }

    static java.lang.String h() {
            java.lang.String r0 = com.mbridge.msdk.foundation.b.a.a.y
            return r0
    }

    private void i() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.a r0 = r1.x
            if (r0 != 0) goto Lb
            com.mbridge.msdk.foundation.b.a.a$2 r0 = new com.mbridge.msdk.foundation.b.a.a$2
            r0.<init>(r1)
            r1.x = r0
        Lb:
            return
    }

    private void j() {
            r4 = this;
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L8e
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L8e
            android.app.Activity r0 = r0.a(r1)     // Catch: java.lang.Exception -> L8e
            if (r0 == 0) goto L92
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L8e
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Exception -> L8e
            if (r0 != 0) goto L2c
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> L8e
        L2c:
            com.mbridge.msdk.c.a$b r0 = r0.aJ()     // Catch: java.lang.Exception -> L8e
            if (r0 != 0) goto L3a
            java.lang.String r0 = ""
            java.lang.String r1 = "feedback fbk is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L8e
            return
        L3a:
            r4.i()     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r1 = new com.mbridge.msdk.widget.dialog.MBFeedBackDialog     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.foundation.b.b r2 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L8e
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L8e
            android.app.Activity r2 = r2.a(r3)     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.a r3 = r4.x     // Catch: java.lang.Exception -> L8e
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L8e
            r4.v = r1     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.FeedbackRadioGroup r1 = r4.a(r0)     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r2 = r4.v     // Catch: java.lang.Exception -> L8e
            java.lang.String r3 = r0.c()     // Catch: java.lang.Exception -> L8e
            r2.setCancelText(r3)     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r2 = r4.v     // Catch: java.lang.Exception -> L8e
            java.lang.String r3 = r0.b()     // Catch: java.lang.Exception -> L8e
            r2.setConfirmText(r3)     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r2 = r4.v     // Catch: java.lang.Exception -> L8e
            java.lang.String r3 = r0.a()     // Catch: java.lang.Exception -> L8e
            r2.setTitle(r3)     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r2 = r4.v     // Catch: java.lang.Exception -> L8e
            r2.setContent(r1)     // Catch: java.lang.Exception -> L8e
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r2 = r4.v     // Catch: java.lang.Exception -> L8e
            java.lang.String r3 = com.mbridge.msdk.foundation.b.a.a.y     // Catch: java.lang.Exception -> L8e
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L8e
            if (r3 != 0) goto L86
            r3 = 1
            goto L87
        L86:
            r3 = 0
        L87:
            r2.setCancelButtonClickable(r3)     // Catch: java.lang.Exception -> L8e
            r4.a(r1, r0)     // Catch: java.lang.Exception -> L8e
            goto L92
        L8e:
            r0 = move-exception
            r0.printStackTrace()
        L92:
            return
    }

    private void k() {
            r7 = this;
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.c
            if (r0 == 0) goto Lf4
            int r1 = r7.f
            r2 = -1
            if (r1 <= r2) goto Ld
            float r1 = (float) r1
            r0.setX(r1)
        Ld:
            int r0 = r7.g
            if (r0 <= r2) goto L17
            com.mbridge.msdk.widget.FeedBackButton r1 = r7.c
            float r0 = (float) r0
            r1.setY(r0)
        L17:
            float r0 = r7.r
            r1 = 0
            int r2 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 < 0) goto L33
            com.mbridge.msdk.widget.FeedBackButton r2 = r7.c
            r2.setAlpha(r0)
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.c
            float r2 = r7.r
            int r2 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r2 == 0) goto L2f
            r2 = r3
            goto L30
        L2f:
            r2 = r4
        L30:
            r0.setEnabled(r2)
        L33:
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.c
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            int r2 = r7.h
            if (r2 <= 0) goto L48
            com.mbridge.msdk.widget.FeedBackButton r5 = r7.c
            r5.setWidth(r2)
            if (r0 == 0) goto L48
            int r2 = r7.h
            r0.width = r2
        L48:
            int r2 = r7.i
            if (r2 <= 0) goto L57
            com.mbridge.msdk.widget.FeedBackButton r5 = r7.c
            r5.setHeight(r2)
            if (r0 == 0) goto L57
            int r2 = r7.i
            r0.height = r2
        L57:
            if (r0 == 0) goto L5e
            com.mbridge.msdk.widget.FeedBackButton r2 = r7.c
            r2.setLayoutParams(r0)
        L5e:
            java.lang.String r0 = r7.p     // Catch: java.lang.Exception -> L72
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L72
            if (r0 != 0) goto L76
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.c     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = r7.p     // Catch: java.lang.Exception -> L72
            int r2 = android.graphics.Color.parseColor(r2)     // Catch: java.lang.Exception -> L72
            r0.setTextColor(r2)     // Catch: java.lang.Exception -> L72
            goto L76
        L72:
            r0 = move-exception
            r0.printStackTrace()
        L76:
            float r0 = r7.j
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 <= 0) goto L81
            com.mbridge.msdk.widget.FeedBackButton r1 = r7.c
            r1.setTextSize(r0)
        L81:
            org.json.JSONArray r0 = r7.k
            if (r0 == 0) goto Lc7
            int r0 = r0.length()
            r1 = 4
            if (r0 != r1) goto Lc7
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.widget.FeedBackButton r1 = r7.c
            org.json.JSONArray r2 = r7.k
            double r4 = r2.optDouble(r4)
            float r2 = (float) r4
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)
            org.json.JSONArray r4 = r7.k
            double r3 = r4.optDouble(r3)
            float r3 = (float) r3
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r0, r3)
            org.json.JSONArray r4 = r7.k
            r5 = 2
            double r4 = r4.optDouble(r5)
            float r4 = (float) r4
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r0, r4)
            org.json.JSONArray r5 = r7.k
            r6 = 3
            double r5 = r5.optDouble(r6)
            float r5 = (float) r5
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r5)
            r1.setPadding(r2, r3, r4, r0)
        Lc7:
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            int r1 = r7.s
            if (r1 <= 0) goto Ld4
            float r1 = (float) r1
            r0.setCornerRadius(r1)
        Ld4:
            java.lang.String r1 = r7.q
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Le6
            java.lang.String r1 = r7.q
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setColor(r1)
            goto Lef
        Le6:
            java.lang.String r1 = com.mbridge.msdk.widget.FeedBackButton.FEEDBACK_BTN_BACKGROUND_COLOR_STR
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setColor(r1)
        Lef:
            com.mbridge.msdk.widget.FeedBackButton r1 = r7.c
            r1.setBackground(r0)
        Lf4:
            return
    }

    private void l() {
            r3 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.widget.FeedBackButton r1 = new com.mbridge.msdk.widget.FeedBackButton     // Catch: java.lang.Exception -> L27
            r1.<init>(r0)     // Catch: java.lang.Exception -> L27
            r3.c = r1     // Catch: java.lang.Exception -> L27
            int r0 = r3.u     // Catch: java.lang.Exception -> L27
            r2 = 8
            if (r0 != r2) goto L18
            goto L19
        L18:
            r2 = 0
        L19:
            r1.setVisibility(r2)     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.widget.FeedBackButton r0 = r3.c     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.b.a.a$4 r1 = new com.mbridge.msdk.foundation.b.a.a$4     // Catch: java.lang.Exception -> L27
            r1.<init>(r3)     // Catch: java.lang.Exception -> L27
            r0.setOnClickListener(r1)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            return
    }

    public final void a() {
            r6 = this;
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r6.a
            java.lang.String r2 = com.mbridge.msdk.foundation.b.a.a.y
            r3 = 0
            r4 = 1
            r0.a(r1, r3, r4, r2)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            android.app.Activity r0 = r0.a(r1)
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r1 = r6.v
            if (r1 == 0) goto L27
            android.content.Context r1 = r1.getContext()
            if (r1 == r0) goto L2a
        L27:
            r6.j()
        L2a:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.widget.FeedBackButton r1 = r6.c
            if (r1 == 0) goto L3a
            android.content.Context r0 = r1.getContext()
        L3a:
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r2 = r6.a
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r4 = r6.v
            boolean r0 = r1.a(r2, r0, r4)
            r1 = 3
            r2 = 2
            if (r0 == 0) goto L4c
            r0 = r2
            goto L4d
        L4c:
            r0 = r1
        L4d:
            if (r0 != r2) goto L5b
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r4 = r6.a
            java.lang.String r5 = com.mbridge.msdk.foundation.b.a.a.y
            r1.a(r4, r3, r2, r5)
            goto L66
        L5b:
            com.mbridge.msdk.foundation.b.b r2 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r4 = r6.a
            java.lang.String r5 = com.mbridge.msdk.foundation.b.a.a.y
            r2.a(r4, r3, r1, r5)
        L66:
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r1 = r6.w
            if (r1 == 0) goto L80
            java.util.Iterator r1 = r1.iterator()
        L6e:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L80
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.foundation.b.a.a$a r2 = (com.mbridge.msdk.foundation.b.a.a.a) r2
            if (r2 == 0) goto L6e
            r2.a(r0)
            goto L6e
        L80:
            return
    }

    public final void a(int r2) {
            r1 = this;
            r1.u = r2
            com.mbridge.msdk.widget.FeedBackButton r0 = r1.c
            if (r0 == 0) goto L9
            r0.setVisibility(r2)
        L9:
            return
    }

    public final void a(int r2, int r3, int r4, int r5, int r6, float r7, java.lang.String r8, java.lang.String r9, float r10, org.json.JSONArray r11) {
            r1 = this;
            r0 = -1
            if (r2 <= r0) goto L5
            r1.f = r2
        L5:
            if (r3 <= r0) goto L9
            r1.g = r3
        L9:
            if (r4 <= r0) goto Ld
            r1.h = r4
        Ld:
            if (r5 <= r0) goto L11
            r1.i = r5
        L11:
            r2 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r2 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r2 <= 0) goto L19
            r1.j = r10
        L19:
            if (r11 == 0) goto L1d
            r1.k = r11
        L1d:
            r1.p = r8
            r1.q = r9
            r1.r = r7
            r1.s = r6
            r1.k()
            return
    }

    public final void a(com.mbridge.msdk.foundation.b.a.a.a r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r0 = r1.w
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.w = r0
        Lb:
            java.util.List<com.mbridge.msdk.foundation.b.a.a$a> r0 = r1.w
            r0.add(r2)
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(com.mbridge.msdk.widget.FeedBackButton r4) {
            r3 = this;
            com.mbridge.msdk.widget.FeedBackButton r0 = r3.c
            r1 = 8
            if (r0 == 0) goto L9
            r0.setVisibility(r1)
        L9:
            if (r4 == 0) goto L3e
            float r0 = r3.r
            r4.setAlpha(r0)
            float r0 = r3.r
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
            int r0 = r3.u
            if (r0 != r1) goto L23
            goto L24
        L23:
            r1 = r2
        L24:
            r4.setVisibility(r1)
            r3.c = r4
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            if (r0 == 0) goto L36
            boolean r0 = r0.isDynamicView()
            if (r0 != 0) goto L36
            r3.k()
        L36:
            com.mbridge.msdk.foundation.b.a.a$5 r0 = new com.mbridge.msdk.foundation.b.a.a$5
            r0.<init>(r3)
            r4.setOnClickListener(r0)
        L3e:
            return
    }

    public final void b() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r0 = r1.v
            if (r0 == 0) goto Lf
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lf
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r0 = r1.v
            r0.cancel()
        Lf:
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final com.mbridge.msdk.widget.FeedBackButton c() {
            r1 = this;
            com.mbridge.msdk.widget.FeedBackButton r0 = r1.c
            if (r0 != 0) goto L7
            r1.l()
        L7:
            com.mbridge.msdk.widget.FeedBackButton r0 = r1.c
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void d() {
            r3 = this;
            com.mbridge.msdk.widget.FeedBackButton r0 = r3.c
            r1 = 0
            if (r0 == 0) goto L1e
            r0.setOnClickListener(r1)
            com.mbridge.msdk.widget.FeedBackButton r0 = r3.c
            r2 = 8
            r0.setVisibility(r2)
            com.mbridge.msdk.widget.FeedBackButton r0 = r3.c
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L1e
            com.mbridge.msdk.widget.FeedBackButton r2 = r3.c
            r0.removeView(r2)
        L1e:
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r0 = r3.v
            if (r0 == 0) goto L2a
            r0.cancel()
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog r0 = r3.v
            r0.setListener(r1)
        L2a:
            r3.v = r1
            r3.w = r1
            r3.c = r1
            r3.x = r1
            return
    }

    public final com.mbridge.msdk.foundation.entity.CampaignEx e() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            return r0
    }

    public final int f() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public final int g() {
            r1 = this;
            int r0 = r1.e
            return r0
    }
}
