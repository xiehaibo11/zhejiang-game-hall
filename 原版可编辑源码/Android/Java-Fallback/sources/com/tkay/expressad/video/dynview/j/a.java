package com.tkay.expressad.video.dynview.j;

public final class a {
    public static final java.lang.String a = "DataEnergizeWrapper";
    private static boolean k;
    public com.tkay.expressad.video.dynview.e.a b;
    private com.tkay.expressad.video.dynview.i.c.b c;
    private java.util.Map<java.lang.String, android.graphics.Bitmap> d;
    private volatile boolean e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private volatile long j;
    private com.tkay.expressad.video.dynview.i.c.a l;
    private boolean m;
    private int n;






    final class 5 extends com.tkay.expressad.widget.a {
        final java.util.Map a;
        final com.tkay.expressad.video.dynview.j.a b;

        5(com.tkay.expressad.video.dynview.j.a r1, java.util.Map r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        protected final void a(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.video.dynview.j.a r2 = r1.b
                boolean r2 = com.tkay.expressad.video.dynview.j.a.e(r2)
                if (r2 != 0) goto L14
                com.tkay.expressad.video.dynview.j.a r2 = r1.b
                com.tkay.expressad.video.dynview.j.a.f(r2)
                com.tkay.expressad.video.dynview.j.a r2 = r1.b
                java.util.Map r0 = r1.a
                com.tkay.expressad.video.dynview.j.a.a(r2, r0)
            L14:
                return
        }
    }

    final class 6 implements com.tkay.expressad.video.dynview.i.c.a {
        final android.widget.TextView a;
        final java.util.Map b;
        final com.tkay.expressad.video.dynview.j.a c;

        6(com.tkay.expressad.video.dynview.j.a r1, android.widget.TextView r2, java.util.Map r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.expressad.video.dynview.j.a r0 = r2.c
                java.util.Map r1 = r2.b
                com.tkay.expressad.video.dynview.j.a.a(r0, r1)
                return
        }

        @Override
        public final void a(long r5) {
                r4 = this;
                com.tkay.expressad.video.dynview.j.a r0 = r4.c
                r1 = 1000(0x3e8, double:4.94E-321)
                long r5 = r5 / r1
                int r5 = (int) r5
                com.tkay.expressad.video.dynview.j.a.a(r0, r5)
                com.tkay.expressad.video.dynview.j.a r5 = r4.c
                int r5 = com.tkay.expressad.video.dynview.j.a.c(r5)
                long r5 = (long) r5
                android.widget.TextView r0 = r4.a
                android.content.Context r0 = r0.getContext()
                java.lang.String r1 = com.tkay.core.common.l.d.f(r0)
                java.lang.String r2 = "zh"
                boolean r2 = r1.startsWith(r2)
                if (r2 != 0) goto Lcc
                java.lang.String r2 = "ja"
                boolean r2 = r1.startsWith(r2)
                if (r2 == 0) goto L2c
                goto Lcc
            L2c:
                java.lang.String r0 = "de"
                boolean r0 = r1.startsWith(r0)
                if (r0 == 0) goto L49
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Automatische Wiedergabe nach "
                r0.<init>(r1)
                r0.append(r5)
                java.lang.String r5 = " Sekunden"
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                goto Lec
            L49:
                java.lang.String r0 = "ko"
                boolean r0 = r1.startsWith(r0)
                if (r0 == 0) goto L64
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r5)
                java.lang.String r5 = " 초 후 자동 재생 "
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                goto Lec
            L64:
                java.lang.String r0 = "fr"
                boolean r0 = r1.startsWith(r0)
                if (r0 == 0) goto L80
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Lecture de vidéo dans "
                r0.<init>(r1)
                r0.append(r5)
                java.lang.String r5 = " secondes"
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                goto Lec
            L80:
                java.lang.String r0 = "ar"
                boolean r0 = r1.startsWith(r0)
                if (r0 == 0) goto L9c
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = " ثوان"
                r0.<init>(r1)
                r0.append(r5)
                java.lang.String r5 = "لعب تلقائيا بعد "
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                goto Lec
            L9c:
                java.lang.String r0 = "ru"
                boolean r0 = r1.startsWith(r0)
                if (r0 == 0) goto Lb8
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Автовоспроизведение через "
                r0.<init>(r1)
                r0.append(r5)
                java.lang.String r5 = " секунд"
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                goto Lec
            Lb8:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Auto play after "
                r0.<init>(r1)
                r0.append(r5)
                java.lang.String r5 = " s"
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                goto Lec
            Lcc:
                java.lang.String r1 = "tkay_cm_video_auto_play_after"
                java.lang.String r2 = "string"
                int r1 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
                java.lang.String r0 = r0.getString(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r5 = " "
                r1.append(r5)
                r1.append(r0)
                java.lang.String r5 = r1.toString()
            Lec:
                android.widget.TextView r6 = r4.a
                r6.setText(r5)
                com.tkay.expressad.video.dynview.j.a r5 = r4.c
                long r0 = com.tkay.expressad.video.dynview.j.a.g(r5)
                r2 = 1
                long r0 = r0 + r2
                com.tkay.expressad.video.dynview.j.a.a(r5, r0)
                return
        }
    }




    static {
            return
    }

    public a() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "#FFFFFFFF"
            r2.f = r0
            java.lang.String r0 = "#60000000"
            r2.g = r0
            java.lang.String r0 = "#FF5F5F5F"
            r2.h = r0
            java.lang.String r0 = "#90ECECEC"
            r2.i = r0
            r0 = 0
            r2.j = r0
            r0 = 0
            r2.l = r0
            r0 = 0
            r2.m = r0
            r2.n = r0
            com.tkay.expressad.video.dynview.j.a$1 r0 = new com.tkay.expressad.video.dynview.j.a$1
            r0.<init>(r2)
            r2.b = r0
            return
    }

    static int a(com.tkay.expressad.video.dynview.j.a r0, int r1) {
            r0.n = r1
            return r1
    }

    private static int a(java.lang.String r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = "id"
            int r2 = com.tkay.expressad.foundation.h.i.a(r0, r2, r1)
            return r2
    }

    static long a(com.tkay.expressad.video.dynview.j.a r0, long r1) {
            r0.j = r1
            return r1
    }

    private android.graphics.Bitmap a() {
            r3 = this;
            r0 = 0
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Exception -> L12
            r2 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r2, r2, r1)     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = r3.i     // Catch: java.lang.Exception -> L12
            int r1 = android.graphics.Color.parseColor(r1)     // Catch: java.lang.Exception -> L12
            r0.eraseColor(r1)     // Catch: java.lang.Exception -> L12
            goto L1a
        L12:
            r1 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L1a
            r1.printStackTrace()
        L1a:
            return r0
    }

    private void a(android.widget.ImageView r3, java.lang.String r4, int r5) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            if (r3 != 0) goto La
            return
        La:
            android.content.Context r0 = r3.getContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.video.dynview.j.a$10 r1 = new com.tkay.expressad.video.dynview.j.a$10
            r1.<init>(r2, r5, r3)
            r0.a(r4, r1)
            return
    }

    private void a(com.tkay.expressad.video.dynview.c r3, android.view.View r4) {
            r2 = this;
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r2.d
            if (r0 == 0) goto L1b
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L1b
            com.tkay.expressad.video.dynview.h.b r0 = new com.tkay.expressad.video.dynview.h.b
            r0.<init>()
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r2.d
            if (r4 == 0) goto L1b
            com.tkay.expressad.video.dynview.i.a.a r1 = com.tkay.expressad.video.dynview.i.a.a.a()
            r1.a(r0, r3, r4)
        L1b:
            return
    }

    static void a(com.tkay.expressad.video.dynview.j.a r2, com.tkay.expressad.video.dynview.c r3, android.view.View r4) {
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r2.d
            if (r0 == 0) goto L1b
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L1b
            com.tkay.expressad.video.dynview.h.b r0 = new com.tkay.expressad.video.dynview.h.b
            r0.<init>()
            java.util.Map<java.lang.String, android.graphics.Bitmap> r2 = r2.d
            if (r4 == 0) goto L1b
            com.tkay.expressad.video.dynview.i.a.a r0 = com.tkay.expressad.video.dynview.i.a.a.a()
            r0.a(r2, r3, r4)
        L1b:
            return
    }

    static void a(com.tkay.expressad.video.dynview.j.a r2, java.util.Map r3) {
            java.lang.String r0 = "choice_one_callback"
            if (r3 == 0) goto L23
            boolean r1 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r1 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.d     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            com.tkay.expressad.video.dynview.f.d r3 = (com.tkay.expressad.video.dynview.f.d) r3     // Catch: java.lang.Exception -> L1f
            r3.a()     // Catch: java.lang.Exception -> L1f
            r2.b()     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.getMessage()
        L23:
            return
    }

    static void a(com.tkay.expressad.video.dynview.j.a r2, java.util.Map r3, java.util.List r4, int r5) {
            if (r3 == 0) goto L54
            if (r4 == 0) goto L54
            int r0 = r4.size()
            r1 = 1
            if (r0 <= r1) goto L54
            java.lang.String r0 = "choice_one_callback"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L30
            java.lang.Object r1 = r3.get(r0)
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.d
            if (r1 == 0) goto L30
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.video.dynview.f.d r3 = (com.tkay.expressad.video.dynview.f.d) r3
            if (r3 == 0) goto L2c
            java.lang.Object r4 = r4.get(r5)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            r3.a(r4)
        L2c:
            r2.b()
            return
        L30:
            java.lang.String r0 = "order_view_callback"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L54
            java.lang.Object r1 = r3.get(r0)
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.c
            if (r1 == 0) goto L54
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.video.dynview.f.c r3 = (com.tkay.expressad.video.dynview.f.c) r3
            if (r3 == 0) goto L51
            java.lang.Object r4 = r4.get(r5)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            r3.a(r4, r5)
        L51:
            r2.b()
        L54:
            return
    }

    private void a(java.lang.String r7, android.content.Context r8, android.view.View r9, int r10, java.util.Map r11) {
            r6 = this;
            java.lang.String r0 = "cltp"
            java.lang.String r7 = com.tkay.expressad.foundation.h.x.a(r7, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r1 = 0
            if (r0 != 0) goto L13
            long r3 = java.lang.Long.parseLong(r7)
            goto L14
        L13:
            r3 = r1
        L14:
            int r7 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r7 == 0) goto Lc4
            if (r11 == 0) goto L2e
            java.lang.String r7 = "is_dy_success"
            boolean r0 = r11.containsKey(r7)
            if (r0 == 0) goto L2e
            java.lang.Object r7 = r11.get(r7)
            java.lang.Boolean r7 = (java.lang.Boolean) r7
            boolean r7 = r7.booleanValue()
            com.tkay.expressad.video.dynview.j.a.k = r7
        L2e:
            r7 = 0
            com.tkay.expressad.video.dynview.j.a.k = r7
            java.lang.String r0 = "tkay_choice_one_countdown_tv"
            int r0 = a(r0)
            android.view.View r9 = r9.findViewById(r0)
            android.widget.TextView r9 = (android.widget.TextView) r9
            r0 = 1093664768(0x41300000, float:11.0)
            r9.setTextSize(r0)
            java.lang.String r0 = r6.f
            int r0 = android.graphics.Color.parseColor(r0)
            r9.setTextColor(r0)
            java.lang.String r0 = r6.g
            if (r9 == 0) goto L7d
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            int r2 = android.graphics.Color.parseColor(r0)
            r1.setColor(r2)
            android.content.Context r2 = r9.getContext()
            r5 = 1094713344(0x41400000, float:12.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            float r2 = (float) r2
            r1.setCornerRadius(r2)
            android.content.Context r2 = r9.getContext()
            r5 = 1065353216(0x3f800000, float:1.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setStroke(r2, r0)
            r9.setBackgroundDrawable(r1)
        L7d:
            r0 = 2
            if (r10 != r0) goto L95
            android.view.ViewGroup$LayoutParams r10 = r9.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r10 = (android.widget.FrameLayout.LayoutParams) r10
            if (r10 == 0) goto L95
            int r0 = com.tkay.expressad.foundation.h.t.d(r8)
            r1 = 1092616192(0x41200000, float:10.0)
            int r8 = com.tkay.expressad.foundation.h.t.b(r8, r1)
            r10.setMargins(r8, r8, r0, r8)
        L95:
            if (r9 == 0) goto Lc4
            r9.setVisibility(r7)
            com.tkay.expressad.video.dynview.j.a$5 r7 = new com.tkay.expressad.video.dynview.j.a$5
            r7.<init>(r6, r11)
            r9.setOnClickListener(r7)
            com.tkay.expressad.video.dynview.j.a$6 r7 = new com.tkay.expressad.video.dynview.j.a$6
            r7.<init>(r6, r9, r11)
            r6.l = r7
            com.tkay.expressad.video.dynview.i.c.b r7 = new com.tkay.expressad.video.dynview.i.c.b
            r7.<init>()
            r8 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r8
            com.tkay.expressad.video.dynview.i.c.b r7 = r7.a(r3)
            com.tkay.expressad.video.dynview.i.c.b r7 = r7.a()
            com.tkay.expressad.video.dynview.i.c.a r8 = r6.l
            com.tkay.expressad.video.dynview.i.c.b r7 = r7.a(r8)
            r6.c = r7
            r7.b()
        Lc4:
            return
    }

    private void a(java.lang.String r2, android.widget.ImageView r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            if (r3 != 0) goto La
            return
        La:
            r0 = -1
            r1.a(r3, r2, r0)
            return
    }

    private void a(java.lang.String r9, android.widget.ImageView r10, com.tkay.expressad.video.dynview.c r11, android.view.View r12) {
            r8 = this;
            android.content.Context r0 = r10.getContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.video.dynview.j.a$2 r7 = new com.tkay.expressad.video.dynview.j.a$2
            r1 = r7
            r2 = r8
            r3 = r10
            r4 = r9
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r9, r7)
            android.graphics.Bitmap r9 = r8.a()
            if (r9 == 0) goto L1f
            b(r11, r12)
        L1f:
            return
    }

    private void a(java.util.Map r3) {
            r2 = this;
            java.lang.String r0 = "choice_one_callback"
            if (r3 == 0) goto L23
            boolean r1 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r1 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.d     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            com.tkay.expressad.video.dynview.f.d r3 = (com.tkay.expressad.video.dynview.f.d) r3     // Catch: java.lang.Exception -> L1f
            r3.a()     // Catch: java.lang.Exception -> L1f
            r2.b()     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r3 = move-exception
            r3.getMessage()
        L23:
            return
    }

    private void a(java.util.Map r3, java.util.List<com.tkay.expressad.foundation.d.c> r4, int r5) {
            r2 = this;
            if (r3 == 0) goto L54
            if (r4 == 0) goto L54
            int r0 = r4.size()
            r1 = 1
            if (r0 <= r1) goto L54
            java.lang.String r0 = "choice_one_callback"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L30
            java.lang.Object r1 = r3.get(r0)
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.d
            if (r1 == 0) goto L30
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.video.dynview.f.d r3 = (com.tkay.expressad.video.dynview.f.d) r3
            if (r3 == 0) goto L2c
            java.lang.Object r4 = r4.get(r5)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            r3.a(r4)
        L2c:
            r2.b()
            return
        L30:
            java.lang.String r0 = "order_view_callback"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L54
            java.lang.Object r1 = r3.get(r0)
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.c
            if (r1 == 0) goto L54
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.video.dynview.f.c r3 = (com.tkay.expressad.video.dynview.f.c) r3
            if (r3 == 0) goto L51
            java.lang.Object r4 = r4.get(r5)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            r3.a(r4, r5)
        L51:
            r2.b()
        L54:
            return
    }

    static boolean a(com.tkay.expressad.video.dynview.j.a r0) {
            boolean r0 = r0.m
            return r0
    }

    static boolean a(com.tkay.expressad.video.dynview.j.a r0, boolean r1) {
            r0.m = r1
            return r1
    }

    private static int b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lb
            int r1 = r1.hashCode()
            return r1
        Lb:
            r1 = -1
            return r1
    }

    static com.tkay.expressad.video.dynview.i.c.b b(com.tkay.expressad.video.dynview.j.a r0) {
            com.tkay.expressad.video.dynview.i.c.b r0 = r0.c
            return r0
    }

    private void b() {
            r3 = this;
            com.tkay.expressad.video.dynview.i.a.a r0 = com.tkay.expressad.video.dynview.i.a.a.a()
            r0.b()
            com.tkay.expressad.video.dynview.i.c.b r0 = r3.c
            r1 = 0
            if (r0 == 0) goto L11
            r0.c()
            r3.c = r1
        L11:
            com.tkay.expressad.video.dynview.b.a r0 = com.tkay.expressad.video.dynview.b.a.a()
            r0.a = r1
            com.tkay.expressad.video.dynview.e.a r0 = r3.b
            if (r0 == 0) goto L1d
            r3.b = r1
        L1d:
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r3.d
            if (r0 == 0) goto L67
            java.util.Set r0 = r0.entrySet()
            if (r0 == 0) goto L62
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r3.d     // Catch: java.lang.Exception -> L5e
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Exception -> L5e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L5e
        L31:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L62
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L5e
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L5a
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Exception -> L5e
            if (r2 == 0) goto L5a
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Exception -> L5e
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2     // Catch: java.lang.Exception -> L5e
            boolean r2 = r2.isRecycled()     // Catch: java.lang.Exception -> L5e
            if (r2 != 0) goto L5a
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L5e
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1     // Catch: java.lang.Exception -> L5e
            r1.recycle()     // Catch: java.lang.Exception -> L5e
        L5a:
            r0.remove()     // Catch: java.lang.Exception -> L5e
            goto L31
        L5e:
            r0 = move-exception
            r0.printStackTrace()
        L62:
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r3.d
            r0.clear()
        L67:
            return
    }

    private static void b(com.tkay.expressad.video.dynview.c r3, android.view.View r4) {
            com.tkay.expressad.video.dynview.g.a$a r0 = com.tkay.expressad.video.dynview.g.a.a()
            int r1 = r3.e()
            com.tkay.expressad.video.dynview.g.a$b r1 = r0.a(r1)
            r1.a()
            int r1 = r3.e()
            r2 = 2
            if (r1 != r2) goto L42
            float r1 = r3.d()
            float r2 = r3.c()
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 <= 0) goto L32
            float r1 = r3.d()
            com.tkay.expressad.video.dynview.g.a$b r1 = r0.a(r1)
            float r3 = r3.c()
            r1.b(r3)
            goto L51
        L32:
            float r1 = r3.c()
            com.tkay.expressad.video.dynview.g.a$b r1 = r0.a(r1)
            float r3 = r3.d()
            r1.b(r3)
            goto L51
        L42:
            float r1 = r3.d()
            com.tkay.expressad.video.dynview.g.a$b r1 = r0.a(r1)
            float r3 = r3.c()
            r1.b(r3)
        L51:
            android.graphics.drawable.Drawable r3 = r4.getBackground()
            if (r3 != 0) goto L5e
            com.tkay.expressad.video.dynview.g.a r3 = r0.b()
            r4.setBackgroundDrawable(r3)
        L5e:
            return
    }

    static void b(com.tkay.expressad.video.dynview.j.a r2, java.util.Map r3) {
            java.lang.String r0 = "order_view_callback"
            if (r3 == 0) goto L23
            boolean r1 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r1 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.c     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            com.tkay.expressad.video.dynview.f.c r3 = (com.tkay.expressad.video.dynview.f.c) r3     // Catch: java.lang.Exception -> L1f
            r3.a()     // Catch: java.lang.Exception -> L1f
            r2.b()     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.getMessage()
        L23:
            return
    }

    private void b(java.util.Map r3) {
            r2 = this;
            java.lang.String r0 = "order_view_callback"
            if (r3 == 0) goto L23
            boolean r1 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r1 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.f.c     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L23
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            com.tkay.expressad.video.dynview.f.c r3 = (com.tkay.expressad.video.dynview.f.c) r3     // Catch: java.lang.Exception -> L1f
            r3.a()     // Catch: java.lang.Exception -> L1f
            r2.b()     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r3 = move-exception
            r3.getMessage()
        L23:
            return
    }

    static int c(com.tkay.expressad.video.dynview.j.a r0) {
            int r0 = r0.n
            return r0
    }

    static com.tkay.expressad.video.dynview.i.c.a d(com.tkay.expressad.video.dynview.j.a r0) {
            com.tkay.expressad.video.dynview.i.c.a r0 = r0.l
            return r0
    }

    static boolean e(com.tkay.expressad.video.dynview.j.a r0) {
            boolean r0 = r0.e
            return r0
    }

    static boolean f(com.tkay.expressad.video.dynview.j.a r1) {
            r0 = 1
            r1.e = r0
            return r0
    }

    static long g(com.tkay.expressad.video.dynview.j.a r2) {
            long r0 = r2.j
            return r0
    }

    static java.lang.String h(com.tkay.expressad.video.dynview.j.a r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    static java.util.Map i(com.tkay.expressad.video.dynview.j.a r0) {
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r0.d
            return r0
    }

    public final void a(com.tkay.expressad.video.dynview.c r2, android.view.View r3, com.tkay.expressad.video.dynview.f.e r4) {
            r1 = this;
            if (r4 != 0) goto L3
            return
        L3:
            if (r2 != 0) goto Lb
            com.tkay.expressad.video.dynview.c.b r2 = com.tkay.expressad.video.dynview.c.b.a
            r4.a(r2)
            return
        Lb:
            java.lang.String r2 = "tkay_iv_adbanner_bg"
            int r2 = a(r2)     // Catch: java.lang.Exception -> L42
            android.view.View r2 = r3.findViewById(r2)     // Catch: java.lang.Exception -> L42
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L22
            java.lang.String r0 = r1.i     // Catch: java.lang.Exception -> L42
            int r0 = android.graphics.Color.parseColor(r0)     // Catch: java.lang.Exception -> L42
            r2.setBackgroundColor(r0)     // Catch: java.lang.Exception -> L42
        L22:
            java.lang.String r2 = "tkay_iv_adbanner"
            int r2 = a(r2)     // Catch: java.lang.Exception -> L42
            android.view.View r2 = r3.findViewById(r2)     // Catch: java.lang.Exception -> L42
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L39
            java.lang.String r0 = r1.i     // Catch: java.lang.Exception -> L42
            int r0 = android.graphics.Color.parseColor(r0)     // Catch: java.lang.Exception -> L42
            r2.setBackgroundColor(r0)     // Catch: java.lang.Exception -> L42
        L39:
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L42
            r2.<init>()     // Catch: java.lang.Exception -> L42
            r4.a(r3, r2)     // Catch: java.lang.Exception -> L42
            return
        L42:
            r2 = move-exception
            r2.getMessage()
            com.tkay.expressad.video.dynview.c.b r2 = com.tkay.expressad.video.dynview.c.b.a
            r4.a(r2)
            return
    }

    public final void a(com.tkay.expressad.video.dynview.c r33, android.view.View r34, java.util.Map r35, com.tkay.expressad.video.dynview.f.e r36) {
            r32 = this;
            r0 = r32
            r1 = r33
            r2 = r34
            r3 = r35
            r4 = r36
            java.util.Map<java.lang.String, android.graphics.Bitmap> r5 = r0.d
            if (r5 != 0) goto L15
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r0.d = r5
        L15:
            java.util.List r5 = r33.g()
            if (r2 != 0) goto L21
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.f
            r4.a(r1)
            return
        L21:
            android.content.Context r6 = r34.getContext()
            if (r6 != 0) goto L2d
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.b
            r4.a(r1)
            return
        L2d:
            r8 = 1
            r9 = 0
            if (r5 == 0) goto L44
            int r10 = r5.size()
            if (r10 <= r8) goto L44
            java.lang.Object r10 = r5.get(r9)
            com.tkay.expressad.foundation.d.c r10 = (com.tkay.expressad.foundation.d.c) r10
            java.lang.Object r11 = r5.get(r8)
            com.tkay.expressad.foundation.d.c r11 = (com.tkay.expressad.foundation.d.c) r11
            goto L46
        L44:
            r10 = 0
            r11 = 0
        L46:
            if (r10 != 0) goto L50
            if (r4 == 0) goto L50
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.d
            r4.a(r1)
            return
        L50:
            if (r11 != 0) goto L5a
            if (r4 == 0) goto L5a
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.d
            r4.a(r1)
            return
        L5a:
            com.tkay.expressad.video.dynview.j.a.k = r9
            java.lang.String r12 = "tkay_top_item_rl"
            int r12 = a(r12)
            android.view.View r12 = r2.findViewById(r12)
            android.widget.RelativeLayout r12 = (android.widget.RelativeLayout) r12
            java.lang.String r13 = "tkay_top_iv"
            int r13 = a(r13)
            android.view.View r13 = r2.findViewById(r13)
            com.tkay.expressad.video.dynview.widget.TYImageView r13 = (com.tkay.expressad.video.dynview.widget.TYImageView) r13
            java.lang.String r14 = "tkay_top_ration"
            int r14 = a(r14)
            android.view.View r14 = r2.findViewById(r14)
            r15 = r14
            com.tkay.expressad.video.dynview.widget.ATRotationView r15 = (com.tkay.expressad.video.dynview.widget.ATRotationView) r15
            java.lang.String r21 = "tkay_top_icon_iv"
            int r14 = a(r21)
            r2.findViewById(r14)
            java.lang.String r14 = "tkay_top_title_tv"
            int r14 = a(r14)
            android.view.View r14 = r2.findViewById(r14)
            android.widget.TextView r14 = (android.widget.TextView) r14
            java.lang.String r16 = "tkay_bottom_item_rl"
            int r7 = a(r16)
            android.view.View r7 = r2.findViewById(r7)
            android.widget.RelativeLayout r7 = (android.widget.RelativeLayout) r7
            java.lang.String r16 = "tkay_bottom_ration"
            int r9 = a(r16)
            android.view.View r9 = r2.findViewById(r9)
            com.tkay.expressad.video.dynview.widget.ATRotationView r9 = (com.tkay.expressad.video.dynview.widget.ATRotationView) r9
            java.lang.String r16 = "tkay_bottom_iv"
            int r8 = a(r16)
            android.view.View r8 = r2.findViewById(r8)
            com.tkay.expressad.video.dynview.widget.TYImageView r8 = (com.tkay.expressad.video.dynview.widget.TYImageView) r8
            java.lang.String r16 = "tkay_bottom_icon_iv"
            r17 = r14
            int r14 = a(r16)
            android.view.View r14 = r2.findViewById(r14)
            com.tkay.expressad.videocommon.view.RoundImageView r14 = (com.tkay.expressad.videocommon.view.RoundImageView) r14
            java.lang.String r16 = "tkay_bottom_title_tv"
            r18 = r14
            int r14 = a(r16)
            android.view.View r14 = r2.findViewById(r14)
            android.widget.TextView r14 = (android.widget.TextView) r14
            java.lang.String r16 = "tkay_reward_choice_one_like_iv"
            r19 = r14
            int r14 = a(r16)
            r2.findViewById(r14)
            if (r12 == 0) goto Leb
            com.tkay.expressad.video.dynview.j.a$3 r14 = new com.tkay.expressad.video.dynview.j.a$3
            r14.<init>(r0, r3, r5)
            r12.setOnClickListener(r14)
        Leb:
            r14 = 1055286886(0x3ee66666, float:0.45)
            if (r13 == 0) goto L183
            r16 = 20
            r20 = 20
            r22 = 0
            r23 = 0
            r24 = 10
            r25 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r12 = r14
            r29 = r17
            r30 = r18
            r31 = r19
            r14 = r13
            r12 = r15
            r15 = r16
            r16 = r20
            r17 = r22
            r18 = r23
            r19 = r24
            r20 = r25
            r14.setCustomBorder(r15, r16, r17, r18, r19, r20)
            java.lang.String r14 = r10.be()
            r0.a(r14, r13, r1, r2)
            if (r12 == 0) goto L189
            boolean r13 = r10.aD()
            if (r13 == 0) goto L176
            java.lang.String r13 = r10.bd()
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto L169
            android.widget.ImageView r13 = new android.widget.ImageView
            android.content.Context r14 = r33.a()
            r13.<init>(r14)
            android.widget.FrameLayout$LayoutParams r14 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r15 = r33.a()
            r4 = 1128792064(0x43480000, float:200.0)
            int r15 = com.tkay.expressad.foundation.h.t.b(r15, r4)
            r4 = -1
            r14.<init>(r4, r15)
            r13.setLayoutParams(r14)
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_CROP
            r13.setScaleType(r4)
            r12.addView(r13)
            java.lang.String r4 = r10.bd()
            r0.a(r4, r13)
            r4 = 1055286886(0x3ee66666, float:0.45)
            r12.setWidthRatio(r4)
            r4 = 1063675494(0x3f666666, float:0.9)
            r12.setHeightRatio(r4)
            r4 = 1
            r12.setAutoscroll(r4)
            goto L189
        L169:
            r4 = 1065353216(0x3f800000, float:1.0)
            r12.setWidthRatio(r4)
            r12.setHeightRatio(r4)
            r13 = 0
            r12.setAutoscroll(r13)
            goto L18a
        L176:
            r4 = 1065353216(0x3f800000, float:1.0)
            r13 = 0
            r12.setWidthRatio(r4)
            r12.setHeightRatio(r4)
            r12.setAutoscroll(r13)
            goto L18a
        L183:
            r29 = r17
            r30 = r18
            r31 = r19
        L189:
            r13 = 0
        L18a:
            int r4 = a(r21)
            android.view.View r4 = r2.findViewById(r4)
            com.tkay.expressad.videocommon.view.RoundImageView r4 = (com.tkay.expressad.videocommon.view.RoundImageView) r4
            if (r4 == 0) goto L1a0
            r4.setType(r13)
            java.lang.String r12 = r10.bd()
            r0.a(r12, r4)
        L1a0:
            r14 = r29
            if (r14 == 0) goto L1bb
            java.lang.String r4 = r10.bb()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1b6
            java.lang.String r4 = r10.bb()
            r14.setText(r4)
            goto L1bb
        L1b6:
            r4 = 8
            r14.setVisibility(r4)
        L1bb:
            if (r7 == 0) goto L1c5
            com.tkay.expressad.video.dynview.j.a$4 r4 = new com.tkay.expressad.video.dynview.j.a$4
            r4.<init>(r0, r3, r5)
            r7.setOnClickListener(r4)
        L1c5:
            if (r8 == 0) goto L24a
            r23 = 20
            r24 = 20
            r25 = 0
            r26 = 0
            r27 = 10
            r28 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r22 = r8
            r22.setCustomBorder(r23, r24, r25, r26, r27, r28)
            java.lang.String r4 = r11.be()
            r0.a(r4, r8, r1, r2)
            if (r9 == 0) goto L24a
            boolean r4 = r11.aD()
            if (r4 == 0) goto L23d
            java.lang.String r4 = r11.bd()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L230
            android.widget.ImageView r4 = new android.widget.ImageView
            android.content.Context r5 = r33.a()
            r4.<init>(r5)
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r7 = r33.a()
            r8 = 1128792064(0x43480000, float:200.0)
            int r7 = com.tkay.expressad.foundation.h.t.b(r7, r8)
            r8 = -1
            r5.<init>(r8, r7)
            r4.setLayoutParams(r5)
            android.widget.ImageView$ScaleType r5 = android.widget.ImageView.ScaleType.CENTER_CROP
            r4.setScaleType(r5)
            r9.addView(r4)
            java.lang.String r5 = r11.bd()
            r0.a(r5, r4)
            r4 = 1055286886(0x3ee66666, float:0.45)
            r9.setWidthRatio(r4)
            r4 = 1063675494(0x3f666666, float:0.9)
            r9.setHeightRatio(r4)
            r4 = 1
            r9.setAutoscroll(r4)
            r14 = r30
            r5 = 0
            goto L24d
        L230:
            r4 = 1065353216(0x3f800000, float:1.0)
            r9.setWidthRatio(r4)
            r9.setHeightRatio(r4)
            r5 = 0
            r9.setAutoscroll(r5)
            goto L24b
        L23d:
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 0
            r9.setWidthRatio(r4)
            r9.setHeightRatio(r4)
            r9.setAutoscroll(r5)
            goto L24b
        L24a:
            r5 = 0
        L24b:
            r14 = r30
        L24d:
            if (r14 == 0) goto L259
            r14.setType(r5)
            java.lang.String r4 = r11.bd()
            r0.a(r4, r14)
        L259:
            r14 = r31
            if (r14 == 0) goto L264
            java.lang.String r4 = r11.bb()
            r14.setText(r4)
        L264:
            java.lang.String r4 = r10.ar()
            int r1 = r33.e()
            java.lang.String r5 = "cltp"
            java.lang.String r4 = com.tkay.expressad.foundation.h.x.a(r4, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            r7 = 0
            if (r5 != 0) goto L27f
            long r4 = java.lang.Long.parseLong(r4)
            goto L280
        L27f:
            r4 = r7
        L280:
            int r7 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r7 == 0) goto L331
            if (r3 == 0) goto L29a
            java.lang.String r7 = "is_dy_success"
            boolean r8 = r3.containsKey(r7)
            if (r8 == 0) goto L29a
            java.lang.Object r7 = r3.get(r7)
            java.lang.Boolean r7 = (java.lang.Boolean) r7
            boolean r7 = r7.booleanValue()
            com.tkay.expressad.video.dynview.j.a.k = r7
        L29a:
            r7 = 0
            com.tkay.expressad.video.dynview.j.a.k = r7
            java.lang.String r7 = "tkay_choice_one_countdown_tv"
            int r7 = a(r7)
            android.view.View r7 = r2.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            r8 = 1093664768(0x41300000, float:11.0)
            r7.setTextSize(r8)
            java.lang.String r8 = r0.f
            int r8 = android.graphics.Color.parseColor(r8)
            r7.setTextColor(r8)
            java.lang.String r8 = r0.g
            if (r7 == 0) goto L2e9
            android.graphics.drawable.GradientDrawable r9 = new android.graphics.drawable.GradientDrawable
            r9.<init>()
            int r10 = android.graphics.Color.parseColor(r8)
            r9.setColor(r10)
            android.content.Context r10 = r7.getContext()
            r11 = 1094713344(0x41400000, float:12.0)
            int r10 = com.tkay.expressad.foundation.h.t.b(r10, r11)
            float r10 = (float) r10
            r9.setCornerRadius(r10)
            android.content.Context r10 = r7.getContext()
            r11 = 1065353216(0x3f800000, float:1.0)
            int r10 = com.tkay.expressad.foundation.h.t.b(r10, r11)
            int r8 = android.graphics.Color.parseColor(r8)
            r9.setStroke(r10, r8)
            r7.setBackgroundDrawable(r9)
        L2e9:
            r8 = 2
            if (r1 != r8) goto L301
            android.view.ViewGroup$LayoutParams r1 = r7.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            if (r1 == 0) goto L301
            int r8 = com.tkay.expressad.foundation.h.t.d(r6)
            r9 = 1092616192(0x41200000, float:10.0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r6, r9)
            r1.setMargins(r6, r6, r8, r6)
        L301:
            if (r7 == 0) goto L331
            r1 = 0
            r7.setVisibility(r1)
            com.tkay.expressad.video.dynview.j.a$5 r1 = new com.tkay.expressad.video.dynview.j.a$5
            r1.<init>(r0, r3)
            r7.setOnClickListener(r1)
            com.tkay.expressad.video.dynview.j.a$6 r1 = new com.tkay.expressad.video.dynview.j.a$6
            r1.<init>(r0, r7, r3)
            r0.l = r1
            com.tkay.expressad.video.dynview.i.c.b r1 = new com.tkay.expressad.video.dynview.i.c.b
            r1.<init>()
            r6 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r6
            com.tkay.expressad.video.dynview.i.c.b r1 = r1.a(r4)
            com.tkay.expressad.video.dynview.i.c.b r1 = r1.a()
            com.tkay.expressad.video.dynview.i.c.a r3 = r0.l
            com.tkay.expressad.video.dynview.i.c.b r1 = r1.a(r3)
            r0.c = r1
            r1.b()
        L331:
            r1 = r36
            if (r1 == 0) goto L339
            r3 = 0
            r1.a(r2, r3)
        L339:
            return
    }

    public final void b(com.tkay.expressad.video.dynview.c r12, android.view.View r13, java.util.Map r14, com.tkay.expressad.video.dynview.f.e r15) {
            r11 = this;
            if (r15 != 0) goto L3
            return
        L3:
            if (r12 != 0) goto Lb
            com.tkay.expressad.video.dynview.c.b r12 = com.tkay.expressad.video.dynview.c.b.a
            r15.a(r12)
            return
        Lb:
            if (r14 == 0) goto L21
            java.lang.String r0 = "is_dy_success"
            boolean r1 = r14.containsKey(r0)
            if (r1 == 0) goto L21
            java.lang.Object r14 = r14.get(r0)
            java.lang.Boolean r14 = (java.lang.Boolean) r14
            boolean r14 = r14.booleanValue()
            com.tkay.expressad.video.dynview.j.a.k = r14
        L21:
            r14 = 0
            com.tkay.expressad.video.dynview.j.a.k = r14
            java.lang.String r0 = "tkay_reward_icon_riv"
            int r0 = a(r0)
            android.view.View r0 = r13.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            java.lang.String r1 = "tkay_reward_title_tv"
            int r1 = a(r1)
            android.view.View r1 = r13.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            java.lang.String r2 = "tkay_reward_stars_mllv"
            int r2 = a(r2)
            android.view.View r2 = r13.findViewById(r2)
            android.widget.LinearLayout r2 = (android.widget.LinearLayout) r2
            java.lang.String r3 = "tkay_reward_click_tv"
            int r3 = a(r3)
            android.view.View r3 = r13.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            java.lang.String r4 = "tkay_videoview_bg"
            int r4 = a(r4)
            android.view.View r4 = r13.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            java.lang.String r5 = "tkay_reward_desc_tv"
            int r5 = a(r5)
            android.view.View r5 = r13.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.List r7 = r12.g()
            if (r7 == 0) goto L10a
            int r8 = r7.size()
            if (r8 <= 0) goto L10a
            java.lang.Object r14 = r7.get(r14)
            com.tkay.expressad.foundation.d.c r14 = (com.tkay.expressad.foundation.d.c) r14
            if (r14 == 0) goto L104
            if (r0 == 0) goto L96
            r7 = r0
            com.tkay.expressad.videocommon.view.RoundImageView r7 = (com.tkay.expressad.videocommon.view.RoundImageView) r7
            r8 = 10
            r7.setBorderRadius(r8)
            java.lang.String r7 = r14.bd()
            r11.a(r7, r0)
        L96:
            if (r1 == 0) goto L9f
            java.lang.String r7 = r14.bb()
            r1.setText(r7)
        L9f:
            if (r5 == 0) goto La8
            java.lang.String r1 = r14.bc()
            r5.setText(r1)
        La8:
            if (r2 == 0) goto Lbf
            double r7 = r14.aX()
            r9 = 0
            int r1 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r1 > 0) goto Lb6
            r7 = 4617315517961601024(0x4014000000000000, double:5.0)
        Lb6:
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r2 = (com.tkay.expressad.video.dynview.widget.TYLevelLayoutView) r2
            int r1 = r14.aY()
            r2.setRatingAndUser(r7, r1)
        Lbf:
            if (r3 == 0) goto Lc6
            java.lang.String r1 = r14.cU
            r3.setText(r1)
        Lc6:
            int r1 = r12.h()
            r2 = 102(0x66, float:1.43E-43)
            if (r1 == r2) goto Lfb
            r2 = 202(0xca, float:2.83E-43)
            if (r1 == r2) goto Lfb
            r2 = 302(0x12e, float:4.23E-43)
            if (r1 == r2) goto Lfb
            r2 = 802(0x322, float:1.124E-42)
            if (r1 == r2) goto Le9
            r14 = 904(0x388, float:1.267E-42)
            if (r1 == r14) goto Ldf
            goto L100
        Ldf:
            boolean r12 = r12.k()
            if (r12 == 0) goto L100
            r6.add(r13)
            goto L100
        Le9:
            if (r0 == 0) goto Lee
            r6.add(r0)
        Lee:
            if (r3 == 0) goto Lf3
            r6.add(r3)
        Lf3:
            java.lang.String r12 = r14.be()
            r11.a(r4, r12, r1)
            goto L100
        Lfb:
            if (r3 == 0) goto L100
            r6.add(r3)
        L100:
            r15.a(r13, r6)
            return
        L104:
            com.tkay.expressad.video.dynview.c.b r12 = com.tkay.expressad.video.dynview.c.b.d
            r15.a(r12)
            return
        L10a:
            com.tkay.expressad.video.dynview.c.b r12 = com.tkay.expressad.video.dynview.c.b.d
            r15.a(r12)
            return
    }

    public final void c(com.tkay.expressad.video.dynview.c r11, android.view.View r12, java.util.Map r13, com.tkay.expressad.video.dynview.f.e r14) {
            r10 = this;
            java.lang.String r0 = "is_dy_success"
            java.util.Map<java.lang.String, android.graphics.Bitmap> r1 = r10.d     // Catch: java.lang.Exception -> Lc1
            if (r1 != 0) goto Ld
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> Lc1
            r1.<init>()     // Catch: java.lang.Exception -> Lc1
            r10.d = r1     // Catch: java.lang.Exception -> Lc1
        Ld:
            java.util.List r1 = r11.g()     // Catch: java.lang.Exception -> Lc1
            android.content.Context r2 = r12.getContext()     // Catch: java.lang.Exception -> Lc1
            if (r2 != 0) goto L1d
            com.tkay.expressad.video.dynview.c.b r11 = com.tkay.expressad.video.dynview.c.b.b     // Catch: java.lang.Exception -> Lc1
            r14.a(r11)     // Catch: java.lang.Exception -> Lc1
            return
        L1d:
            if (r13 == 0) goto L31
            boolean r2 = r13.containsKey(r0)     // Catch: java.lang.Exception -> Lc1
            if (r2 == 0) goto L31
            java.lang.Object r0 = r13.get(r0)     // Catch: java.lang.Exception -> Lc1
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> Lc1
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> Lc1
            com.tkay.expressad.video.dynview.j.a.k = r0     // Catch: java.lang.Exception -> Lc1
        L31:
            r0 = 0
            com.tkay.expressad.video.dynview.j.a.k = r0     // Catch: java.lang.Exception -> Lc1
            java.lang.String r2 = "tkay_order_view_lv"
            int r2 = a(r2)     // Catch: java.lang.Exception -> Lc1
            android.view.View r2 = r12.findViewById(r2)     // Catch: java.lang.Exception -> Lc1
            android.widget.ListView r2 = (android.widget.ListView) r2     // Catch: java.lang.Exception -> Lc1
            java.lang.String r3 = "tkay_order_view_h_lv"
            int r3 = a(r3)     // Catch: java.lang.Exception -> Lc1
            android.view.View r3 = r12.findViewById(r3)     // Catch: java.lang.Exception -> Lc1
            android.widget.GridView r3 = (android.widget.GridView) r3     // Catch: java.lang.Exception -> Lc1
            java.lang.String r4 = "tkay_order_view_iv_close"
            int r4 = a(r4)     // Catch: java.lang.Exception -> Lc1
            android.view.View r4 = r12.findViewById(r4)     // Catch: java.lang.Exception -> Lc1
            android.widget.ImageView r4 = (android.widget.ImageView) r4     // Catch: java.lang.Exception -> Lc1
            com.tkay.expressad.video.dynview.ordercamp.a.a r5 = new com.tkay.expressad.video.dynview.ordercamp.a.a     // Catch: java.lang.Exception -> Lc1
            r5.<init>(r1)     // Catch: java.lang.Exception -> Lc1
            int r6 = r11.e()     // Catch: java.lang.Exception -> Lc1
            r7 = 1
            if (r6 != r7) goto L72
            if (r2 == 0) goto Lb0
            r2.setAdapter(r5)     // Catch: java.lang.Exception -> Lc1
            com.tkay.expressad.video.dynview.j.a$7 r11 = new com.tkay.expressad.video.dynview.j.a$7     // Catch: java.lang.Exception -> Lc1
            r11.<init>(r10, r13, r1)     // Catch: java.lang.Exception -> Lc1
            r2.setOnItemClickListener(r11)     // Catch: java.lang.Exception -> Lc1
            goto Lb0
        L72:
            if (r3 == 0) goto Lb0
            float r11 = r11.d()     // Catch: java.lang.Exception -> Lc1
            int r11 = (int) r11     // Catch: java.lang.Exception -> Lc1
            int r2 = r1.size()     // Catch: java.lang.Exception -> Lc1
            int r2 = r11 / r2
            int r6 = r2 / 9
            int r7 = r6 / 2
            android.view.ViewGroup$LayoutParams r8 = r3.getLayoutParams()     // Catch: java.lang.Exception -> Lc1
            android.widget.LinearLayout$LayoutParams r8 = (android.widget.LinearLayout.LayoutParams) r8     // Catch: java.lang.Exception -> Lc1
            int r9 = r6 * 2
            int r11 = r11 - r9
            r8.width = r11     // Catch: java.lang.Exception -> Lc1
            r3.setLayoutParams(r8)     // Catch: java.lang.Exception -> Lc1
            int r2 = r2 - r6
            int r11 = r7 / 2
            int r2 = r2 - r11
            r3.setColumnWidth(r2)     // Catch: java.lang.Exception -> Lc1
            r3.setHorizontalSpacing(r7)     // Catch: java.lang.Exception -> Lc1
            r3.setStretchMode(r0)     // Catch: java.lang.Exception -> Lc1
            int r11 = r1.size()     // Catch: java.lang.Exception -> Lc1
            r3.setNumColumns(r11)     // Catch: java.lang.Exception -> Lc1
            r3.setAdapter(r5)     // Catch: java.lang.Exception -> Lc1
            com.tkay.expressad.video.dynview.j.a$8 r11 = new com.tkay.expressad.video.dynview.j.a$8     // Catch: java.lang.Exception -> Lc1
            r11.<init>(r10, r13, r1)     // Catch: java.lang.Exception -> Lc1
            r3.setOnItemClickListener(r11)     // Catch: java.lang.Exception -> Lc1
        Lb0:
            if (r4 == 0) goto Lba
            com.tkay.expressad.video.dynview.j.a$9 r11 = new com.tkay.expressad.video.dynview.j.a$9     // Catch: java.lang.Exception -> Lc1
            r11.<init>(r10, r13)     // Catch: java.lang.Exception -> Lc1
            r4.setOnClickListener(r11)     // Catch: java.lang.Exception -> Lc1
        Lba:
            if (r14 == 0) goto Lc0
            r11 = 0
            r14.a(r12, r11)     // Catch: java.lang.Exception -> Lc1
        Lc0:
            return
        Lc1:
            if (r14 == 0) goto Lc8
            com.tkay.expressad.video.dynview.c.b r11 = com.tkay.expressad.video.dynview.c.b.a
            r14.a(r11)
        Lc8:
            return
    }
}
