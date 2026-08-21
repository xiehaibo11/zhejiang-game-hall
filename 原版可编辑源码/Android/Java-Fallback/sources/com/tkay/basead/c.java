package com.tkay.basead;

public final class c {
    public com.tkay.core.common.f.h a;
    public com.tkay.core.common.f.i b;
    private android.content.Context c;
    private android.app.Dialog d;
    private android.view.View e;
    private android.widget.EditText f;
    private android.widget.ImageView g;
    private android.widget.TextView h;
    private android.widget.TextView i;
    private android.widget.TextView j;
    private android.widget.TextView k;
    private android.widget.TextView l;
    private android.widget.TextView m;
    private android.widget.TextView n;
    private android.widget.TextView o;
    private android.widget.TextView p;
    private android.widget.TextView q;
    private boolean r;
    private com.tkay.basead.c.a s;
    private android.view.View.OnClickListener t;

    final class 1 implements android.content.DialogInterface.OnCancelListener {
        final com.tkay.basead.c a;

        1(com.tkay.basead.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onCancel(android.content.DialogInterface r1) {
                r0 = this;
                com.tkay.basead.c r1 = r0.a
                com.tkay.basead.c$a r1 = com.tkay.basead.c.a(r1)
                if (r1 == 0) goto L11
                com.tkay.basead.c r1 = r0.a
                com.tkay.basead.c$a r1 = com.tkay.basead.c.a(r1)
                r1.b()
            L11:
                return
        }
    }

    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.basead.c a;

        2(com.tkay.basead.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.basead.c r1 = r0.a
                com.tkay.basead.c.b(r1)
                return
        }
    }

    final class 3 implements android.view.View.OnClickListener {
        final com.tkay.basead.c a;


        3(com.tkay.basead.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r4) {
                r3 = this;
                com.tkay.basead.c r4 = r3.a
                android.widget.EditText r4 = com.tkay.basead.c.c(r4)
                if (r4 == 0) goto L8e
                com.tkay.basead.c r4 = r3.a
                android.widget.EditText r4 = com.tkay.basead.c.c(r4)
                android.text.Editable r4 = r4.getText()
                java.lang.String r4 = r4.toString()
                boolean r0 = android.text.TextUtils.isEmpty(r4)
                if (r0 == 0) goto L6b
                com.tkay.basead.c r4 = r3.a
                boolean r4 = com.tkay.basead.c.d(r4)
                if (r4 != 0) goto L8e
                com.tkay.basead.c r4 = r3.a
                r0 = 1
                com.tkay.basead.c.a(r4, r0)
                com.tkay.basead.c r4 = r3.a
                android.widget.EditText r4 = com.tkay.basead.c.c(r4)
                r0 = 0
                r4.setCursorVisible(r0)
                com.tkay.basead.c r4 = r3.a
                android.widget.EditText r4 = com.tkay.basead.c.c(r4)
                com.tkay.basead.c r0 = r3.a
                android.content.Context r0 = com.tkay.basead.c.e(r0)
                java.lang.String r1 = "myoffer_feedback_hint"
                java.lang.String r2 = "string"
                int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
                r4.setHint(r0)
                com.tkay.basead.c r4 = r3.a
                android.widget.EditText r4 = com.tkay.basead.c.c(r4)
                java.lang.String r0 = "#999999"
                int r0 = android.graphics.Color.parseColor(r0)
                r4.setHintTextColor(r0)
                com.tkay.basead.c r4 = r3.a
                android.widget.EditText r4 = com.tkay.basead.c.c(r4)
                com.tkay.basead.c$3$1 r0 = new com.tkay.basead.c$3$1
                r0.<init>(r3)
                r1 = 1500(0x5dc, double:7.41E-321)
                r4.postDelayed(r0, r1)
                return
            L6b:
                com.tkay.basead.c r0 = r3.a
                com.tkay.core.common.f.h r0 = r0.a
                com.tkay.basead.c r1 = r3.a
                com.tkay.core.common.f.i r1 = r1.b
                java.lang.String r2 = "0"
                com.tkay.core.common.k.c.a(r0, r1, r2, r4)
                com.tkay.basead.c r4 = r3.a
                com.tkay.basead.c.b(r4)
                com.tkay.basead.c r4 = r3.a
                com.tkay.basead.c$a r4 = com.tkay.basead.c.a(r4)
                if (r4 == 0) goto L8e
                com.tkay.basead.c r4 = r3.a
                com.tkay.basead.c$a r4 = com.tkay.basead.c.a(r4)
                r4.a()
            L8e:
                return
        }
    }

    final class 4 implements java.lang.Runnable {
        final com.tkay.basead.c a;

        4(com.tkay.basead.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.basead.c r0 = r1.a
                android.app.Dialog r0 = com.tkay.basead.c.f(r0)
                if (r0 == 0) goto L11
                com.tkay.basead.c r0 = r1.a
                android.app.Dialog r0 = com.tkay.basead.c.f(r0)
                r0.dismiss()
            L11:
                com.tkay.basead.c r0 = r1.a
                com.tkay.basead.c$a r0 = com.tkay.basead.c.a(r0)
                if (r0 == 0) goto L22
                com.tkay.basead.c r0 = r1.a
                com.tkay.basead.c$a r0 = com.tkay.basead.c.a(r0)
                r0.b()
            L22:
                return
        }
    }


    public interface a {
        void a();

        void b();
    }

    public c() {
            r1 = this;
            r1.<init>()
            com.tkay.basead.c$5 r0 = new com.tkay.basead.c$5
            r0.<init>(r1)
            r1.t = r0
            return
    }

    static com.tkay.basead.c.a a(com.tkay.basead.c r0) {
            com.tkay.basead.c$a r0 = r0.s
            return r0
    }

    private void a(int r5, int r6) {
            r4 = this;
            android.app.Dialog r0 = new android.app.Dialog
            android.content.Context r1 = r4.c
            java.lang.String r2 = "myoffer_feedback_dialog"
            java.lang.String r3 = "style"
            int r2 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.<init>(r1, r2)
            r4.d = r0
            android.view.View r1 = r4.e
            r0.setContentView(r1)
            android.app.Dialog r0 = r4.d
            r1 = 1
            r0.setCancelable(r1)
            android.app.Dialog r0 = r4.d
            com.tkay.basead.c$1 r1 = new com.tkay.basead.c$1
            r1.<init>(r4)
            r0.setOnCancelListener(r1)
            android.app.Dialog r0 = r4.d
            android.view.Window r0 = r0.getWindow()
            if (r0 == 0) goto L57
            if (r5 <= r6) goto L44
            android.content.Context r5 = r4.c
            r6 = 1133248512(0x438c0000, float:280.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r6)
            android.content.Context r6 = r4.c
            r1 = 1134559232(0x43a00000, float:320.0)
            int r6 = com.tkay.core.common.l.h.a(r6, r1)
            r0.setLayout(r5, r6)
            goto L57
        L44:
            android.content.Context r5 = r4.c
            r6 = 1133903872(0x43960000, float:300.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r6)
            android.content.Context r6 = r4.c
            r1 = 1138032640(0x43d50000, float:426.0)
            int r6 = com.tkay.core.common.l.h.a(r6, r1)
            r0.setLayout(r5, r6)
        L57:
            android.app.Dialog r5 = r4.d
            r5.show()
            return
    }

    static boolean a(com.tkay.basead.c r0, boolean r1) {
            r0.r = r1
            return r1
    }

    static void b(com.tkay.basead.c r4) {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.tkay.basead.c$4 r1 = new com.tkay.basead.c$4
            r1.<init>(r4)
            r2 = 30
            r0.postDelayed(r1, r2)
            return
    }

    static android.widget.EditText c(com.tkay.basead.c r0) {
            android.widget.EditText r0 = r0.f
            return r0
    }

    private void c() {
            r4 = this;
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r2 = "id"
            java.lang.String r3 = "myoffer_feedback_iv_close"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.g = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_et"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.EditText r0 = (android.widget.EditText) r0
            r4.f = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_commit"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.h = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_1"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.i = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_2"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.j = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_3"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.k = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_4"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.l = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_5"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.m = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_6"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.n = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_7"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.o = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_8"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.p = r0
            android.view.View r0 = r4.e
            android.content.Context r1 = r4.c
            java.lang.String r3 = "myoffer_feedback_tv_9"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.q = r0
            android.widget.ImageView r0 = r4.g
            com.tkay.basead.c$2 r1 = new com.tkay.basead.c$2
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.i
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.j
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.k
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.l
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.m
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.n
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.o
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.p
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.q
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r4.h
            com.tkay.basead.c$3 r1 = new com.tkay.basead.c$3
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            return
    }

    private void d() {
            r2 = this;
            android.widget.ImageView r0 = r2.g
            com.tkay.basead.c$2 r1 = new com.tkay.basead.c$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.i
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.j
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.k
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.l
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.m
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.n
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.o
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.p
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.q
            android.view.View$OnClickListener r1 = r2.t
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.h
            com.tkay.basead.c$3 r1 = new com.tkay.basead.c$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    static boolean d(com.tkay.basead.c r0) {
            boolean r0 = r0.r
            return r0
    }

    static android.content.Context e(com.tkay.basead.c r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    private void e() {
            r4 = this;
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.tkay.basead.c$4 r1 = new com.tkay.basead.c$4
            r1.<init>(r4)
            r2 = 30
            r0.postDelayed(r1, r2)
            return
    }

    static android.app.Dialog f(com.tkay.basead.c r0) {
            android.app.Dialog r0 = r0.d
            return r0
    }

    public final void a(android.content.Context r6, com.tkay.core.common.f.h r7, com.tkay.core.common.f.i r8, com.tkay.basead.c.a r9) {
            r5 = this;
            java.lang.String r0 = "id"
            r5.c = r6     // Catch: java.lang.Throwable -> L1cf
            r5.a = r7     // Catch: java.lang.Throwable -> L1cf
            r5.b = r8     // Catch: java.lang.Throwable -> L1cf
            r5.s = r9     // Catch: java.lang.Throwable -> L1cf
            android.content.res.Resources r7 = r6.getResources()     // Catch: java.lang.Throwable -> L1cf
            android.util.DisplayMetrics r7 = r7.getDisplayMetrics()     // Catch: java.lang.Throwable -> L1cf
            int r7 = r7.widthPixels     // Catch: java.lang.Throwable -> L1cf
            android.content.res.Resources r8 = r6.getResources()     // Catch: java.lang.Throwable -> L1cf
            android.util.DisplayMetrics r8 = r8.getDisplayMetrics()     // Catch: java.lang.Throwable -> L1cf
            int r8 = r8.heightPixels     // Catch: java.lang.Throwable -> L1cf
            r9 = 0
            r1 = 0
            java.lang.String r2 = "layout"
            if (r7 <= r8) goto L35
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r6)     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r4 = "myoffer_feedback_land"
            int r6 = com.tkay.core.common.l.h.a(r6, r4, r2)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r3.inflate(r6, r1, r9)     // Catch: java.lang.Throwable -> L1cf
            r5.e = r6     // Catch: java.lang.Throwable -> L1cf
            goto L45
        L35:
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r6)     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r4 = "myoffer_feedback"
            int r6 = com.tkay.core.common.l.h.a(r6, r4, r2)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r3.inflate(r6, r1, r9)     // Catch: java.lang.Throwable -> L1cf
            r5.e = r6     // Catch: java.lang.Throwable -> L1cf
        L45:
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_iv_close"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.ImageView r6 = (android.widget.ImageView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.g = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_et"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.EditText r6 = (android.widget.EditText) r6     // Catch: java.lang.Throwable -> L1cf
            r5.f = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_commit"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.h = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_1"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.i = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_2"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.j = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_3"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.k = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_4"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.l = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_5"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.m = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_6"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.n = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_7"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.o = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_8"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.p = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r5.e     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_tv_9"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r0)     // Catch: java.lang.Throwable -> L1cf
            android.view.View r6 = r6.findViewById(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L1cf
            r5.q = r6     // Catch: java.lang.Throwable -> L1cf
            android.widget.ImageView r6 = r5.g     // Catch: java.lang.Throwable -> L1cf
            com.tkay.basead.c$2 r9 = new com.tkay.basead.c$2     // Catch: java.lang.Throwable -> L1cf
            r9.<init>(r5)     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.i     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.j     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.k     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.l     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.m     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.n     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.o     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.p     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.q     // Catch: java.lang.Throwable -> L1cf
            android.view.View$OnClickListener r9 = r5.t     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.widget.TextView r6 = r5.h     // Catch: java.lang.Throwable -> L1cf
            com.tkay.basead.c$3 r9 = new com.tkay.basead.c$3     // Catch: java.lang.Throwable -> L1cf
            r9.<init>(r5)     // Catch: java.lang.Throwable -> L1cf
            r6.setOnClickListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.app.Dialog r6 = new android.app.Dialog     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r9 = r5.c     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r0 = r5.c     // Catch: java.lang.Throwable -> L1cf
            java.lang.String r1 = "myoffer_feedback_dialog"
            java.lang.String r2 = "style"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L1cf
            r6.<init>(r9, r0)     // Catch: java.lang.Throwable -> L1cf
            r5.d = r6     // Catch: java.lang.Throwable -> L1cf
            android.view.View r9 = r5.e     // Catch: java.lang.Throwable -> L1cf
            r6.setContentView(r9)     // Catch: java.lang.Throwable -> L1cf
            android.app.Dialog r6 = r5.d     // Catch: java.lang.Throwable -> L1cf
            r9 = 1
            r6.setCancelable(r9)     // Catch: java.lang.Throwable -> L1cf
            android.app.Dialog r6 = r5.d     // Catch: java.lang.Throwable -> L1cf
            com.tkay.basead.c$1 r9 = new com.tkay.basead.c$1     // Catch: java.lang.Throwable -> L1cf
            r9.<init>(r5)     // Catch: java.lang.Throwable -> L1cf
            r6.setOnCancelListener(r9)     // Catch: java.lang.Throwable -> L1cf
            android.app.Dialog r6 = r5.d     // Catch: java.lang.Throwable -> L1cf
            android.view.Window r6 = r6.getWindow()     // Catch: java.lang.Throwable -> L1cf
            if (r6 == 0) goto L1c9
            if (r7 <= r8) goto L1b6
            android.content.Context r7 = r5.c     // Catch: java.lang.Throwable -> L1cf
            r8 = 1133248512(0x438c0000, float:280.0)
            int r7 = com.tkay.core.common.l.h.a(r7, r8)     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r8 = r5.c     // Catch: java.lang.Throwable -> L1cf
            r9 = 1134559232(0x43a00000, float:320.0)
            int r8 = com.tkay.core.common.l.h.a(r8, r9)     // Catch: java.lang.Throwable -> L1cf
            r6.setLayout(r7, r8)     // Catch: java.lang.Throwable -> L1cf
            goto L1c9
        L1b6:
            android.content.Context r7 = r5.c     // Catch: java.lang.Throwable -> L1cf
            r8 = 1133903872(0x43960000, float:300.0)
            int r7 = com.tkay.core.common.l.h.a(r7, r8)     // Catch: java.lang.Throwable -> L1cf
            android.content.Context r8 = r5.c     // Catch: java.lang.Throwable -> L1cf
            r9 = 1138032640(0x43d50000, float:426.0)
            int r8 = com.tkay.core.common.l.h.a(r8, r9)     // Catch: java.lang.Throwable -> L1cf
            r6.setLayout(r7, r8)     // Catch: java.lang.Throwable -> L1cf
        L1c9:
            android.app.Dialog r6 = r5.d     // Catch: java.lang.Throwable -> L1cf
            r6.show()     // Catch: java.lang.Throwable -> L1cf
            return
        L1cf:
            r6 = move-exception
            r6.printStackTrace()
            return
    }

    public final boolean a() {
            r1 = this;
            android.app.Dialog r0 = r1.d
            if (r0 == 0) goto Lc
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public final void b() {
            r1 = this;
            r0 = 0
            r1.c = r0
            r1.a = r0
            r1.b = r0
            r1.s = r0
            return
    }
}
