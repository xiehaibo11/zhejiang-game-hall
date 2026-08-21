package com.mbridge.msdk.video.dynview.j;

public final class a {
    private static boolean j;
    public com.mbridge.msdk.video.dynview.d.a a;
    private com.mbridge.msdk.video.dynview.i.c.b b;
    private java.util.Map<java.lang.String, android.graphics.Bitmap> c;
    private volatile boolean d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private volatile long i;
    private com.mbridge.msdk.video.dynview.i.c.a k;
    private boolean l;
    private int m;











    private static final class a implements java.lang.Runnable {
        private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a;
        private int b;
        private long c;
        private int d;

        public a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1, int r2, long r3, int r5) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r5
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.a
                if (r0 == 0) goto L1d
                int r1 = r5.b     // Catch: java.lang.Exception -> L1d
                java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L1d
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L1d
                if (r0 == 0) goto L1d
                java.lang.String r1 = r0.getCampaignUnitId()     // Catch: java.lang.Exception -> L1d
                int r2 = r5.d     // Catch: java.lang.Exception -> L1d
                long r3 = r5.c     // Catch: java.lang.Exception -> L1d
                java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L1d
                com.mbridge.msdk.video.module.b.a.a(r1, r0, r2, r3)     // Catch: java.lang.Exception -> L1d
            L1d:
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
            r2.e = r0
            java.lang.String r0 = "#60000000"
            r2.f = r0
            java.lang.String r0 = "#FF5F5F5F"
            r2.g = r0
            java.lang.String r0 = "#90ECECEC"
            r2.h = r0
            r0 = 0
            r2.i = r0
            r0 = 0
            r2.k = r0
            r0 = 0
            r2.l = r0
            r2.m = r0
            com.mbridge.msdk.video.dynview.j.a$1 r0 = new com.mbridge.msdk.video.dynview.j.a$1
            r0.<init>(r2)
            r2.a = r0
            return
    }

    static int a(com.mbridge.msdk.video.dynview.j.a r0, int r1) {
            r0.m = r1
            return r1
    }

    private int a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    static long a(com.mbridge.msdk.video.dynview.j.a r0, long r1) {
            r0.i = r1
            return r1
    }

    private android.graphics.Bitmap a() {
            r3 = this;
            r0 = 0
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Exception -> L12
            r2 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r2, r2, r1)     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = r3.h     // Catch: java.lang.Exception -> L12
            int r1 = android.graphics.Color.parseColor(r1)     // Catch: java.lang.Exception -> L12
            r0.eraseColor(r1)     // Catch: java.lang.Exception -> L12
            goto L1a
        L12:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
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
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.video.dynview.j.a$10 r1 = new com.mbridge.msdk.video.dynview.j.a$10
            r1.<init>(r2, r5, r3)
            r0.a(r4, r1)
            return
    }

    private void a(com.mbridge.msdk.video.dynview.c r4, android.view.View r5) {
            r3 = this;
            com.mbridge.msdk.video.dynview.g.a$a r0 = com.mbridge.msdk.video.dynview.g.a.a()
            int r1 = r4.e()
            com.mbridge.msdk.video.dynview.g.a$b r1 = r0.a(r1)
            r2 = 1
            r1.a(r2)
            int r1 = r4.e()
            r2 = 2
            if (r1 != r2) goto L43
            float r1 = r4.d()
            float r2 = r4.c()
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 <= 0) goto L33
            float r1 = r4.d()
            com.mbridge.msdk.video.dynview.g.a$b r1 = r0.a(r1)
            float r4 = r4.c()
            r1.b(r4)
            goto L52
        L33:
            float r1 = r4.c()
            com.mbridge.msdk.video.dynview.g.a$b r1 = r0.a(r1)
            float r4 = r4.d()
            r1.b(r4)
            goto L52
        L43:
            float r1 = r4.d()
            com.mbridge.msdk.video.dynview.g.a$b r1 = r0.a(r1)
            float r4 = r4.c()
            r1.b(r4)
        L52:
            android.graphics.drawable.Drawable r4 = r5.getBackground()
            if (r4 != 0) goto L5f
            com.mbridge.msdk.video.dynview.g.a r4 = r0.a()
            r5.setBackground(r4)
        L5f:
            return
    }

    static void a(com.mbridge.msdk.video.dynview.j.a r2, com.mbridge.msdk.video.dynview.c r3, android.view.View r4) {
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r2.c
            if (r0 == 0) goto L1b
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L1b
            com.mbridge.msdk.video.dynview.h.b r0 = new com.mbridge.msdk.video.dynview.h.b
            r0.<init>()
            java.util.Map<java.lang.String, android.graphics.Bitmap> r2 = r2.c
            if (r4 == 0) goto L1b
            com.mbridge.msdk.video.dynview.i.a.a r0 = com.mbridge.msdk.video.dynview.i.a.a.a()
            r0.a(r2, r3, r4)
        L1b:
            return
    }

    static void a(com.mbridge.msdk.video.dynview.j.a r2, java.util.Map r3) {
            java.lang.String r0 = "choice_one_callback"
            if (r3 == 0) goto L29
            boolean r1 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L29
            java.lang.Object r1 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            boolean r1 = r1 instanceof com.mbridge.msdk.video.dynview.e.d     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L29
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            com.mbridge.msdk.video.dynview.e.d r3 = (com.mbridge.msdk.video.dynview.e.d) r3     // Catch: java.lang.Exception -> L1f
            r3.a()     // Catch: java.lang.Exception -> L1f
            r2.b()     // Catch: java.lang.Exception -> L1f
            goto L29
        L1f:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "DataEnergizeWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L29:
            return
    }

    static void a(com.mbridge.msdk.video.dynview.j.a r8, java.util.Map r9, java.util.List r10, int r11) {
            if (r9 == 0) goto L78
            if (r10 == 0) goto L78
            int r0 = r10.size()
            r1 = 1
            if (r0 <= r1) goto L78
            java.lang.String r0 = "choice_one_callback"
            boolean r1 = r9.containsKey(r0)
            if (r1 == 0) goto L42
            java.lang.Object r1 = r9.get(r0)
            boolean r1 = r1 instanceof com.mbridge.msdk.video.dynview.e.d
            if (r1 == 0) goto L42
            java.lang.Object r9 = r9.get(r0)
            com.mbridge.msdk.video.dynview.e.d r9 = (com.mbridge.msdk.video.dynview.e.d) r9
            if (r9 == 0) goto L3e
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b()     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.video.dynview.j.a$a r7 = new com.mbridge.msdk.video.dynview.j.a$a     // Catch: java.lang.Exception -> L35
            long r4 = r8.i     // Catch: java.lang.Exception -> L35
            r6 = 0
            r1 = r7
            r2 = r10
            r3 = r11
            r1.<init>(r2, r3, r4, r6)     // Catch: java.lang.Exception -> L35
            r0.execute(r7)     // Catch: java.lang.Exception -> L35
        L35:
            java.lang.Object r10 = r10.get(r11)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10
            r9.a(r10)
        L3e:
            r8.b()
            goto L78
        L42:
            java.lang.String r0 = "order_view_callback"
            boolean r1 = r9.containsKey(r0)
            if (r1 == 0) goto L78
            java.lang.Object r1 = r9.get(r0)
            boolean r1 = r1 instanceof com.mbridge.msdk.video.dynview.e.c
            if (r1 == 0) goto L78
            java.lang.Object r9 = r9.get(r0)
            com.mbridge.msdk.video.dynview.e.c r9 = (com.mbridge.msdk.video.dynview.e.c) r9
            if (r9 == 0) goto L75
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b()     // Catch: java.lang.Exception -> L6c
            com.mbridge.msdk.video.dynview.j.a$a r7 = new com.mbridge.msdk.video.dynview.j.a$a     // Catch: java.lang.Exception -> L6c
            long r4 = r8.i     // Catch: java.lang.Exception -> L6c
            r6 = 0
            r1 = r7
            r2 = r10
            r3 = r11
            r1.<init>(r2, r3, r4, r6)     // Catch: java.lang.Exception -> L6c
            r0.execute(r7)     // Catch: java.lang.Exception -> L6c
        L6c:
            java.lang.Object r10 = r10.get(r11)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10
            r9.a(r10, r11)
        L75:
            r8.b()
        L78:
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

    private void a(java.lang.String r9, android.widget.ImageView r10, com.mbridge.msdk.video.dynview.c r11, android.view.View r12) {
            r8 = this;
            android.content.Context r0 = r10.getContext()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.video.dynview.j.a$2 r7 = new com.mbridge.msdk.video.dynview.j.a$2
            r1 = r7
            r2 = r8
            r3 = r10
            r4 = r9
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r9, r7)
            android.graphics.Bitmap r9 = r8.a()     // Catch: java.lang.Exception -> L26
            if (r9 == 0) goto L30
            boolean r9 = r9.isRecycled()     // Catch: java.lang.Exception -> L26
            if (r9 != 0) goto L30
            r8.a(r11, r12)     // Catch: java.lang.Exception -> L26
            goto L30
        L26:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r10 = "DataEnergizeWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L30:
            return
    }

    static boolean a(com.mbridge.msdk.video.dynview.j.a r0) {
            boolean r0 = r0.l
            return r0
    }

    static boolean a(com.mbridge.msdk.video.dynview.j.a r0, boolean r1) {
            r0.l = r1
            return r1
    }

    private int b(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            int r2 = r2.hashCode()
            return r2
        Lb:
            r2 = -1
            return r2
    }

    static com.mbridge.msdk.video.dynview.i.c.b b(com.mbridge.msdk.video.dynview.j.a r0) {
            com.mbridge.msdk.video.dynview.i.c.b r0 = r0.b
            return r0
    }

    private void b() {
            r3 = this;
            com.mbridge.msdk.video.dynview.i.a.a r0 = com.mbridge.msdk.video.dynview.i.a.a.a()
            r0.b()
            com.mbridge.msdk.video.dynview.i.c.b r0 = r3.b
            r1 = 0
            if (r0 == 0) goto L11
            r0.b()
            r3.b = r1
        L11:
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.a()
            r0.a = r1
            com.mbridge.msdk.video.dynview.d.a r0 = r3.a
            if (r0 == 0) goto L1d
            r3.a = r1
        L1d:
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r3.c
            if (r0 == 0) goto L67
            java.util.Set r0 = r0.entrySet()
            if (r0 == 0) goto L62
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r3.c     // Catch: java.lang.Exception -> L5e
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
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r3.c
            r0.clear()
        L67:
            return
    }

    static void b(com.mbridge.msdk.video.dynview.j.a r2, java.util.Map r3) {
            java.lang.String r0 = "order_view_callback"
            if (r3 == 0) goto L29
            boolean r1 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L29
            java.lang.Object r1 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            boolean r1 = r1 instanceof com.mbridge.msdk.video.dynview.e.c     // Catch: java.lang.Exception -> L1f
            if (r1 == 0) goto L29
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L1f
            com.mbridge.msdk.video.dynview.e.c r3 = (com.mbridge.msdk.video.dynview.e.c) r3     // Catch: java.lang.Exception -> L1f
            r3.a()     // Catch: java.lang.Exception -> L1f
            r2.b()     // Catch: java.lang.Exception -> L1f
            goto L29
        L1f:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "DataEnergizeWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L29:
            return
    }

    static boolean b(com.mbridge.msdk.video.dynview.j.a r0, boolean r1) {
            r0.d = r1
            return r1
    }

    static int c(com.mbridge.msdk.video.dynview.j.a r0) {
            int r0 = r0.m
            return r0
    }

    static com.mbridge.msdk.video.dynview.i.c.a d(com.mbridge.msdk.video.dynview.j.a r0) {
            com.mbridge.msdk.video.dynview.i.c.a r0 = r0.k
            return r0
    }

    static boolean e(com.mbridge.msdk.video.dynview.j.a r0) {
            boolean r0 = r0.d
            return r0
    }

    static long f(com.mbridge.msdk.video.dynview.j.a r2) {
            long r0 = r2.i
            return r0
    }

    static java.lang.String g(com.mbridge.msdk.video.dynview.j.a r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static java.util.Map h(com.mbridge.msdk.video.dynview.j.a r0) {
            java.util.Map<java.lang.String, android.graphics.Bitmap> r0 = r0.c
            return r0
    }

    public final void a(com.mbridge.msdk.video.dynview.c r2, android.view.View r3, com.mbridge.msdk.video.dynview.e.e r4) {
            r1 = this;
            if (r4 != 0) goto L3
            return
        L3:
            if (r2 != 0) goto Lb
            com.mbridge.msdk.video.dynview.c.a r2 = com.mbridge.msdk.video.dynview.c.a.a
            r4.a(r2)
            return
        Lb:
            java.lang.String r2 = "mbridge_iv_adbanner_bg"
            int r2 = r1.a(r2)     // Catch: java.lang.Exception -> L42
            android.view.View r2 = r3.findViewById(r2)     // Catch: java.lang.Exception -> L42
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L22
            java.lang.String r0 = r1.h     // Catch: java.lang.Exception -> L42
            int r0 = android.graphics.Color.parseColor(r0)     // Catch: java.lang.Exception -> L42
            r2.setBackgroundColor(r0)     // Catch: java.lang.Exception -> L42
        L22:
            java.lang.String r2 = "mbridge_iv_adbanner"
            int r2 = r1.a(r2)     // Catch: java.lang.Exception -> L42
            android.view.View r2 = r3.findViewById(r2)     // Catch: java.lang.Exception -> L42
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L39
            java.lang.String r0 = r1.h     // Catch: java.lang.Exception -> L42
            int r0 = android.graphics.Color.parseColor(r0)     // Catch: java.lang.Exception -> L42
            r2.setBackgroundColor(r0)     // Catch: java.lang.Exception -> L42
        L39:
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L42
            r2.<init>()     // Catch: java.lang.Exception -> L42
            r4.a(r3, r2)     // Catch: java.lang.Exception -> L42
            goto L51
        L42:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "DataEnergizeWrapper"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            com.mbridge.msdk.video.dynview.c.a r2 = com.mbridge.msdk.video.dynview.c.a.a
            r4.a(r2)
        L51:
            return
    }

    public final void a(com.mbridge.msdk.video.dynview.c r32, android.view.View r33, java.util.Map r34, com.mbridge.msdk.video.dynview.e.e r35) {
            r31 = this;
            r0 = r31
            r1 = r32
            r2 = r33
            r3 = r34
            r4 = r35
            java.util.Map<java.lang.String, android.graphics.Bitmap> r5 = r0.c
            if (r5 != 0) goto L15
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r0.c = r5
        L15:
            java.util.List r5 = r32.g()
            if (r2 != 0) goto L21
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.f
            r4.a(r1)
            return
        L21:
            android.content.Context r6 = r33.getContext()
            if (r6 != 0) goto L2d
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.b
            r4.a(r1)
            return
        L2d:
            r7 = 1
            r9 = 0
            if (r5 == 0) goto L44
            int r10 = r5.size()
            if (r10 <= r7) goto L44
            java.lang.Object r10 = r5.get(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10
            java.lang.Object r11 = r5.get(r7)
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11
            goto L46
        L44:
            r10 = 0
            r11 = 0
        L46:
            if (r10 != 0) goto L50
            if (r4 == 0) goto L50
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.d
            r4.a(r1)
            return
        L50:
            if (r11 != 0) goto L5a
            if (r4 == 0) goto L5a
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.d
            r4.a(r1)
            return
        L5a:
            java.lang.String r12 = "is_dy_success"
            if (r3 == 0) goto L70
            boolean r13 = r3.containsKey(r12)
            if (r13 == 0) goto L70
            java.lang.Object r13 = r3.get(r12)
            java.lang.Boolean r13 = (java.lang.Boolean) r13
            boolean r13 = r13.booleanValue()
            com.mbridge.msdk.video.dynview.j.a.j = r13
        L70:
            boolean r13 = com.mbridge.msdk.video.dynview.j.a.j
            java.lang.String r14 = "mbridge_reward_choice_one_like_iv"
            java.lang.String r15 = "mbridge_bottom_title_tv"
            java.lang.String r8 = "mbridge_bottom_icon_iv"
            java.lang.String r9 = "mbridge_bottom_iv"
            java.lang.String r7 = "mbridge_bottom_ration"
            java.lang.String r4 = "mbridge_bottom_item_rl"
            r16 = r6
            java.lang.String r6 = "mbridge_top_title_tv"
            r17 = r12
            java.lang.String r12 = "mbridge_top_icon_iv"
            r18 = r11
            java.lang.String r11 = "mbridge_top_ration"
            java.lang.String r1 = "mbridge_top_iv"
            r19 = r10
            java.lang.String r10 = "mbridge_top_item_rl"
            if (r13 == 0) goto L10c
            int r10 = r0.b(r10)
            android.view.View r10 = r2.findViewById(r10)
            android.widget.RelativeLayout r10 = (android.widget.RelativeLayout) r10
            int r1 = r0.b(r1)
            android.view.View r1 = r2.findViewById(r1)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView) r1
            int r11 = r0.b(r11)
            android.view.View r11 = r2.findViewById(r11)
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r11 = (com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView) r11
            int r12 = r0.b(r12)
            android.view.View r12 = r2.findViewById(r12)
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r12 = (com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView) r12
            int r6 = r0.b(r6)
            android.view.View r6 = r2.findViewById(r6)
            android.widget.TextView r6 = (android.widget.TextView) r6
            int r4 = r0.b(r4)
            android.view.View r4 = r2.findViewById(r4)
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4
            int r7 = r0.b(r7)
            android.view.View r7 = r2.findViewById(r7)
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r7 = (com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView) r7
            int r9 = r0.b(r9)
            android.view.View r9 = r2.findViewById(r9)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r9 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView) r9
            int r8 = r0.b(r8)
            android.view.View r8 = r2.findViewById(r8)
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r8 = (com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView) r8
            int r13 = r0.b(r15)
            android.view.View r13 = r2.findViewById(r13)
            android.widget.TextView r13 = (android.widget.TextView) r13
            int r14 = r0.b(r14)
            android.view.View r14 = r2.findViewById(r14)
            android.widget.ImageView r14 = (android.widget.ImageView) r14
            r15 = r13
            r27 = r14
            r13 = 0
            r14 = r12
            r12 = r11
            r11 = r10
            r10 = r9
            r9 = r8
            r8 = 0
            goto L183
        L10c:
            int r10 = r0.a(r10)
            android.view.View r10 = r2.findViewById(r10)
            android.widget.RelativeLayout r10 = (android.widget.RelativeLayout) r10
            int r1 = r0.a(r1)
            android.view.View r1 = r2.findViewById(r1)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView) r1
            int r11 = r0.a(r11)
            android.view.View r11 = r2.findViewById(r11)
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r11 = (com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView) r11
            int r12 = r0.a(r12)
            android.view.View r12 = r2.findViewById(r12)
            com.mbridge.msdk.videocommon.view.RoundImageView r12 = (com.mbridge.msdk.videocommon.view.RoundImageView) r12
            int r6 = r0.a(r6)
            android.view.View r6 = r2.findViewById(r6)
            android.widget.TextView r6 = (android.widget.TextView) r6
            int r4 = r0.a(r4)
            android.view.View r4 = r2.findViewById(r4)
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4
            int r7 = r0.a(r7)
            android.view.View r7 = r2.findViewById(r7)
            com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView r7 = (com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView) r7
            int r9 = r0.a(r9)
            android.view.View r9 = r2.findViewById(r9)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView r9 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView) r9
            int r8 = r0.a(r8)
            android.view.View r8 = r2.findViewById(r8)
            com.mbridge.msdk.videocommon.view.RoundImageView r8 = (com.mbridge.msdk.videocommon.view.RoundImageView) r8
            int r13 = r0.a(r15)
            android.view.View r13 = r2.findViewById(r13)
            android.widget.TextView r13 = (android.widget.TextView) r13
            int r14 = r0.a(r14)
            android.view.View r14 = r2.findViewById(r14)
            android.widget.ImageView r14 = (android.widget.ImageView) r14
            r15 = r13
            r27 = r14
            r14 = 0
            r13 = r12
            r12 = r11
            r11 = r10
            r10 = r9
            r9 = 0
        L183:
            r28 = r15
            if (r11 == 0) goto L18f
            com.mbridge.msdk.video.dynview.j.a$3 r15 = new com.mbridge.msdk.video.dynview.j.a$3
            r15.<init>(r0, r3, r5)
            r11.setOnClickListener(r15)
        L18f:
            if (r1 == 0) goto L21f
            r21 = 20
            r22 = 20
            r23 = 0
            r24 = 0
            r25 = 10
            r26 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r20 = r1
            r20.setCustomBorder(r21, r22, r23, r24, r25, r26)
            java.lang.String r15 = r19.getImageUrl()
            r11 = r32
            r0.a(r15, r1, r11, r2)
            if (r12 == 0) goto L221
            boolean r1 = r19.getCanStart2C1Anim()
            if (r1 == 0) goto L20e
            java.lang.String r1 = r19.getIconUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1fd
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r15 = r32.a()
            r1.<init>(r15)
            android.widget.FrameLayout$LayoutParams r15 = new android.widget.FrameLayout$LayoutParams
            r29 = r9
            android.content.Context r9 = r32.a()
            r30 = r8
            r8 = 1128792064(0x43480000, float:200.0)
            int r9 = com.mbridge.msdk.foundation.tools.ae.b(r9, r8)
            r8 = -1
            r15.<init>(r8, r9)
            r1.setLayoutParams(r15)
            android.widget.ImageView$ScaleType r8 = android.widget.ImageView.ScaleType.CENTER_CROP
            r1.setScaleType(r8)
            r12.addView(r1)
            java.lang.String r8 = r19.getIconUrl()
            r0.a(r8, r1)
            r1 = 1055286886(0x3ee66666, float:0.45)
            r12.setWidthRatio(r1)
            r1 = 1063675494(0x3f666666, float:0.9)
            r12.setHeightRatio(r1)
            r1 = 1
            r12.setAutoscroll(r1)
            goto L225
        L1fd:
            r30 = r8
            r29 = r9
            r1 = 1065353216(0x3f800000, float:1.0)
            r12.setWidthRatio(r1)
            r12.setHeightRatio(r1)
            r8 = 0
            r12.setAutoscroll(r8)
            goto L226
        L20e:
            r30 = r8
            r29 = r9
            r1 = 1065353216(0x3f800000, float:1.0)
            r8 = 0
            r12.setWidthRatio(r1)
            r12.setHeightRatio(r1)
            r12.setAutoscroll(r8)
            goto L226
        L21f:
            r11 = r32
        L221:
            r30 = r8
            r29 = r9
        L225:
            r8 = 0
        L226:
            if (r13 == 0) goto L232
            r13.setType(r8)
            java.lang.String r1 = r19.getIconUrl()
            r0.a(r1, r13)
        L232:
            if (r14 == 0) goto L23b
            java.lang.String r1 = r19.getIconUrl()
            r0.a(r1, r14)
        L23b:
            if (r6 == 0) goto L254
            java.lang.String r1 = r19.getAppName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L24f
            java.lang.String r1 = r19.getAppName()
            r6.setText(r1)
            goto L254
        L24f:
            r1 = 8
            r6.setVisibility(r1)
        L254:
            if (r4 == 0) goto L25e
            com.mbridge.msdk.video.dynview.j.a$4 r1 = new com.mbridge.msdk.video.dynview.j.a$4
            r1.<init>(r0, r3, r5)
            r4.setOnClickListener(r1)
        L25e:
            if (r10 == 0) goto L2e0
            r21 = 20
            r22 = 20
            r23 = 0
            r24 = 0
            r25 = 10
            r26 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r20 = r10
            r20.setCustomBorder(r21, r22, r23, r24, r25, r26)
            java.lang.String r1 = r18.getImageUrl()
            r0.a(r1, r10, r11, r2)
            if (r7 == 0) goto L2e0
            boolean r1 = r18.getCanStart2C1Anim()
            if (r1 == 0) goto L2d3
            java.lang.String r1 = r18.getIconUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2c6
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r4 = r32.a()
            r1.<init>(r4)
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r5 = r32.a()
            r6 = 1128792064(0x43480000, float:200.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r6)
            r6 = -1
            r4.<init>(r6, r5)
            r1.setLayoutParams(r4)
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_CROP
            r1.setScaleType(r4)
            r7.addView(r1)
            java.lang.String r4 = r18.getIconUrl()
            r0.a(r4, r1)
            r1 = 1055286886(0x3ee66666, float:0.45)
            r7.setWidthRatio(r1)
            r1 = 1063675494(0x3f666666, float:0.9)
            r7.setHeightRatio(r1)
            r1 = 1
            r7.setAutoscroll(r1)
            goto L2e0
        L2c6:
            r1 = 1065353216(0x3f800000, float:1.0)
            r7.setWidthRatio(r1)
            r7.setHeightRatio(r1)
            r4 = 0
            r7.setAutoscroll(r4)
            goto L2e1
        L2d3:
            r1 = 1065353216(0x3f800000, float:1.0)
            r4 = 0
            r7.setWidthRatio(r1)
            r7.setHeightRatio(r1)
            r7.setAutoscroll(r4)
            goto L2e1
        L2e0:
            r4 = 0
        L2e1:
            if (r30 == 0) goto L2ef
            r8 = r30
            r8.setType(r4)
            java.lang.String r1 = r18.getIconUrl()
            r0.a(r1, r8)
        L2ef:
            if (r29 == 0) goto L2fa
            java.lang.String r1 = r18.getIconUrl()
            r8 = r29
            r0.a(r1, r8)
        L2fa:
            if (r28 == 0) goto L305
            java.lang.String r1 = r18.getAppName()
            r13 = r28
            r13.setText(r1)
        L305:
            java.lang.String r1 = r19.getCMPTEntryUrl()
            r32.e()
            java.lang.String r4 = "cltp"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r1, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            r5 = 0
            if (r4 != 0) goto L31f
            long r7 = java.lang.Long.parseLong(r1)
            goto L320
        L31f:
            r7 = r5
        L320:
            int r1 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r1 == 0) goto L3c6
            if (r3 == 0) goto L33a
            r1 = r17
            boolean r4 = r3.containsKey(r1)
            if (r4 == 0) goto L33a
            java.lang.Object r1 = r3.get(r1)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            com.mbridge.msdk.video.dynview.j.a.j = r1
        L33a:
            boolean r1 = com.mbridge.msdk.video.dynview.j.a.j
            java.lang.String r4 = "mbridge_choice_one_countdown_tv"
            if (r1 == 0) goto L34b
            int r1 = r0.b(r4)
            android.view.View r1 = r2.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            goto L355
        L34b:
            int r1 = r0.a(r4)
            android.view.View r1 = r2.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
        L355:
            r4 = 1093664768(0x41300000, float:11.0)
            r1.setTextSize(r4)
            java.lang.String r4 = r0.e
            int r4 = android.graphics.Color.parseColor(r4)
            r1.setTextColor(r4)
            r4 = 12
            java.lang.String r5 = r0.f
            if (r1 == 0) goto L396
            android.graphics.drawable.GradientDrawable r6 = new android.graphics.drawable.GradientDrawable
            r6.<init>()
            int r9 = android.graphics.Color.parseColor(r5)
            r6.setColor(r9)
            android.content.Context r9 = r1.getContext()
            float r4 = (float) r4
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r9, r4)
            float r4 = (float) r4
            r6.setCornerRadius(r4)
            android.content.Context r4 = r1.getContext()
            r9 = 1
            float r10 = (float) r9
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r10)
            int r5 = android.graphics.Color.parseColor(r5)
            r6.setStroke(r4, r5)
            r1.setBackground(r6)
        L396:
            if (r1 == 0) goto L3c6
            r4 = 0
            r1.setVisibility(r4)
            com.mbridge.msdk.video.dynview.j.a$5 r4 = new com.mbridge.msdk.video.dynview.j.a$5
            r4.<init>(r0, r3)
            r1.setOnClickListener(r4)
            com.mbridge.msdk.video.dynview.j.a$6 r4 = new com.mbridge.msdk.video.dynview.j.a$6
            r4.<init>(r0, r1, r3)
            r0.k = r4
            com.mbridge.msdk.video.dynview.i.c.b r1 = new com.mbridge.msdk.video.dynview.i.c.b
            r1.<init>()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r3
            com.mbridge.msdk.video.dynview.i.c.b r1 = r1.b(r7)
            com.mbridge.msdk.video.dynview.i.c.b r1 = r1.a(r3)
            com.mbridge.msdk.video.dynview.i.c.a r3 = r0.k
            com.mbridge.msdk.video.dynview.i.c.b r1 = r1.a(r3)
            r0.b = r1
            r1.a()
        L3c6:
            if (r11 == 0) goto L3fb
            r14 = r27
            if (r14 == 0) goto L3fb
            int r1 = r32.e()
            r3 = 1
            if (r1 != r3) goto L3e7
            r1 = r16
            java.lang.String r3 = com.mbridge.msdk.video.dynview.i.b.a(r1, r3)
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r4 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r4)
            r14.setImageResource(r1)
            goto L3fb
        L3e7:
            r1 = r16
            r3 = 2
            java.lang.String r3 = com.mbridge.msdk.video.dynview.i.b.a(r1, r3)
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r4 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r4)
            r14.setImageResource(r1)
        L3fb:
            r1 = r35
            if (r1 == 0) goto L403
            r3 = 0
            r1.a(r2, r3)
        L403:
            return
    }

    public final void b(com.mbridge.msdk.video.dynview.c r23, android.view.View r24, java.util.Map r25, com.mbridge.msdk.video.dynview.e.e r26) {
            r22 = this;
            r0 = r22
            r1 = r24
            r2 = r25
            r3 = r26
            if (r3 != 0) goto Lb
            return
        Lb:
            if (r23 != 0) goto L13
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.a
            r3.a(r1)
            return
        L13:
            if (r2 == 0) goto L29
            java.lang.String r4 = "is_dy_success"
            boolean r5 = r2.containsKey(r4)
            if (r5 == 0) goto L29
            java.lang.Object r2 = r2.get(r4)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            com.mbridge.msdk.video.dynview.j.a.j = r2
        L29:
            r2 = 0
            boolean r4 = com.mbridge.msdk.video.dynview.j.a.j
            java.lang.String r5 = "mbridge_reward_desc_tv"
            java.lang.String r6 = "mbridge_videoview_bg"
            java.lang.String r7 = "mbridge_reward_click_tv"
            java.lang.String r8 = "mbridge_reward_stars_mllv"
            java.lang.String r9 = "mbridge_reward_title_tv"
            java.lang.String r10 = "mbridge_reward_icon_riv"
            if (r4 == 0) goto L83
            int r2 = r0.b(r10)
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            int r4 = r0.b(r9)
            android.view.View r4 = r1.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            int r8 = r0.b(r8)
            android.view.View r8 = r1.findViewById(r8)
            android.widget.LinearLayout r8 = (android.widget.LinearLayout) r8
            java.lang.String r9 = "mbridge_reward_heat_mllv"
            int r9 = r0.b(r9)
            android.view.View r9 = r1.findViewById(r9)
            android.widget.LinearLayout r9 = (android.widget.LinearLayout) r9
            int r7 = r0.b(r7)
            android.view.View r7 = r1.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            int r6 = r0.b(r6)
            android.view.View r6 = r1.findViewById(r6)
            android.widget.ImageView r6 = (android.widget.ImageView) r6
            int r5 = r0.b(r5)
            android.view.View r5 = r1.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            goto Lc5
        L83:
            int r4 = r0.a(r10)
            android.view.View r4 = r1.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            int r9 = r0.a(r9)
            android.view.View r9 = r1.findViewById(r9)
            android.widget.TextView r9 = (android.widget.TextView) r9
            int r8 = r0.a(r8)
            android.view.View r8 = r1.findViewById(r8)
            android.widget.LinearLayout r8 = (android.widget.LinearLayout) r8
            int r7 = r0.a(r7)
            android.view.View r7 = r1.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            int r6 = r0.a(r6)
            android.view.View r6 = r1.findViewById(r6)
            android.widget.ImageView r6 = (android.widget.ImageView) r6
            int r5 = r0.a(r5)
            android.view.View r5 = r1.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            r21 = r9
            r9 = r2
            r2 = r4
            r4 = r21
        Lc5:
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.util.List r11 = r23.g()
            if (r11 == 0) goto L1a4
            int r12 = r11.size()
            if (r12 <= 0) goto L1a4
            r12 = 0
            java.lang.Object r11 = r11.get(r12)
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11
            if (r11 == 0) goto L19e
            if (r2 == 0) goto L10b
            boolean r13 = com.mbridge.msdk.video.dynview.j.a.j
            if (r13 == 0) goto Lfc
            boolean r13 = r2 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView
            if (r13 == 0) goto L104
            r14 = r2
            com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView r14 = (com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView) r14
            r15 = 30
            r16 = 30
            r17 = 30
            r18 = 30
            r19 = 10
            r20 = -1
            r14.setCustomBorder(r15, r16, r17, r18, r19, r20)
            goto L104
        Lfc:
            r13 = r2
            com.mbridge.msdk.videocommon.view.RoundImageView r13 = (com.mbridge.msdk.videocommon.view.RoundImageView) r13
            r14 = 10
            r13.setBorderRadius(r14)
        L104:
            java.lang.String r13 = r11.getIconUrl()
            r0.a(r13, r2)
        L10b:
            if (r4 == 0) goto L114
            java.lang.String r13 = r11.getAppName()
            r4.setText(r13)
        L114:
            if (r5 == 0) goto L11d
            java.lang.String r4 = r11.getAppDesc()
            r5.setText(r4)
        L11d:
            if (r8 == 0) goto L157
            double r4 = r11.getRating()
            r13 = 0
            int r13 = (r4 > r13 ? 1 : (r4 == r13 ? 0 : -1))
            if (r13 > 0) goto L12b
            r4 = 4617315517961601024(0x4014000000000000, double:5.0)
        L12b:
            boolean r13 = com.mbridge.msdk.video.dynview.j.a.j
            if (r13 == 0) goto L14e
            if (r8 == 0) goto L13e
            boolean r13 = r8 instanceof com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView
            if (r13 == 0) goto L13e
            com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView r8 = (com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView) r8
            int r4 = (int) r4
            r8.setRating(r4)
            r8.setOrientation(r12)
        L13e:
            if (r9 == 0) goto L157
            boolean r4 = r9 instanceof com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView
            if (r4 == 0) goto L157
            com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView r9 = (com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView) r9
            int r4 = r11.getNumberRating()
            r9.setHeatCount(r4)
            goto L157
        L14e:
            com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView r8 = (com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView) r8
            int r9 = r11.getNumberRating()
            r8.setRatingAndUser(r4, r9)
        L157:
            if (r7 == 0) goto L160
            java.lang.String r4 = r11.getAdCall()
            r7.setText(r4)
        L160:
            int r4 = r23.h()
            r5 = 102(0x66, float:1.43E-43)
            if (r4 == r5) goto L195
            r5 = 202(0xca, float:2.83E-43)
            if (r4 == r5) goto L195
            r5 = 302(0x12e, float:4.23E-43)
            if (r4 == r5) goto L195
            r5 = 802(0x322, float:1.124E-42)
            if (r4 == r5) goto L183
            r2 = 904(0x388, float:1.267E-42)
            if (r4 == r2) goto L179
            goto L19a
        L179:
            boolean r2 = r23.k()
            if (r2 == 0) goto L19a
            r10.add(r1)
            goto L19a
        L183:
            if (r2 == 0) goto L188
            r10.add(r2)
        L188:
            if (r7 == 0) goto L18d
            r10.add(r7)
        L18d:
            java.lang.String r2 = r11.getImageUrl()
            r0.a(r6, r2, r4)
            goto L19a
        L195:
            if (r7 == 0) goto L19a
            r10.add(r7)
        L19a:
            r3.a(r1, r10)
            goto L1a9
        L19e:
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.d
            r3.a(r1)
            goto L1a9
        L1a4:
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.d
            r3.a(r1)
        L1a9:
            return
    }

    public final void c(com.mbridge.msdk.video.dynview.c r10, android.view.View r11, java.util.Map r12, com.mbridge.msdk.video.dynview.e.e r13) {
            r9 = this;
            java.lang.String r0 = "is_dy_success"
            java.util.Map<java.lang.String, android.graphics.Bitmap> r1 = r9.c     // Catch: java.lang.Exception -> Le2
            if (r1 != 0) goto Ld
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> Le2
            r1.<init>()     // Catch: java.lang.Exception -> Le2
            r9.c = r1     // Catch: java.lang.Exception -> Le2
        Ld:
            java.util.List r1 = r10.g()     // Catch: java.lang.Exception -> Le2
            android.content.Context r2 = r11.getContext()     // Catch: java.lang.Exception -> Le2
            if (r2 != 0) goto L1d
            com.mbridge.msdk.video.dynview.c.a r10 = com.mbridge.msdk.video.dynview.c.a.b     // Catch: java.lang.Exception -> Le2
            r13.a(r10)     // Catch: java.lang.Exception -> Le2
            return
        L1d:
            if (r12 == 0) goto L31
            boolean r2 = r12.containsKey(r0)     // Catch: java.lang.Exception -> Le2
            if (r2 == 0) goto L31
            java.lang.Object r0 = r12.get(r0)     // Catch: java.lang.Exception -> Le2
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> Le2
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> Le2
            com.mbridge.msdk.video.dynview.j.a.j = r0     // Catch: java.lang.Exception -> Le2
        L31:
            boolean r0 = com.mbridge.msdk.video.dynview.j.a.j     // Catch: java.lang.Exception -> Le2
            java.lang.String r2 = "mbridge_order_view_iv_close"
            java.lang.String r3 = "mbridge_order_view_h_lv"
            java.lang.String r4 = "mbridge_order_view_lv"
            if (r0 == 0) goto L5a
            int r0 = r9.b(r4)     // Catch: java.lang.Exception -> Le2
            android.view.View r0 = r11.findViewById(r0)     // Catch: java.lang.Exception -> Le2
            android.widget.ListView r0 = (android.widget.ListView) r0     // Catch: java.lang.Exception -> Le2
            int r3 = r9.b(r3)     // Catch: java.lang.Exception -> Le2
            android.view.View r3 = r11.findViewById(r3)     // Catch: java.lang.Exception -> Le2
            android.widget.GridView r3 = (android.widget.GridView) r3     // Catch: java.lang.Exception -> Le2
            int r2 = r9.b(r2)     // Catch: java.lang.Exception -> Le2
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Exception -> Le2
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Exception -> Le2
            goto L78
        L5a:
            int r0 = r9.a(r4)     // Catch: java.lang.Exception -> Le2
            android.view.View r0 = r11.findViewById(r0)     // Catch: java.lang.Exception -> Le2
            android.widget.ListView r0 = (android.widget.ListView) r0     // Catch: java.lang.Exception -> Le2
            int r3 = r9.a(r3)     // Catch: java.lang.Exception -> Le2
            android.view.View r3 = r11.findViewById(r3)     // Catch: java.lang.Exception -> Le2
            android.widget.GridView r3 = (android.widget.GridView) r3     // Catch: java.lang.Exception -> Le2
            int r2 = r9.a(r2)     // Catch: java.lang.Exception -> Le2
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Exception -> Le2
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Exception -> Le2
        L78:
            com.mbridge.msdk.video.dynview.ordercamp.a.a r4 = new com.mbridge.msdk.video.dynview.ordercamp.a.a     // Catch: java.lang.Exception -> Le2
            r4.<init>(r1)     // Catch: java.lang.Exception -> Le2
            int r5 = r10.e()     // Catch: java.lang.Exception -> Le2
            r6 = 1
            if (r5 != r6) goto L92
            if (r0 == 0) goto Ld1
            r0.setAdapter(r4)     // Catch: java.lang.Exception -> Le2
            com.mbridge.msdk.video.dynview.j.a$7 r10 = new com.mbridge.msdk.video.dynview.j.a$7     // Catch: java.lang.Exception -> Le2
            r10.<init>(r9, r12, r1)     // Catch: java.lang.Exception -> Le2
            r0.setOnItemClickListener(r10)     // Catch: java.lang.Exception -> Le2
            goto Ld1
        L92:
            if (r3 == 0) goto Ld1
            float r10 = r10.d()     // Catch: java.lang.Exception -> Le2
            int r10 = (int) r10     // Catch: java.lang.Exception -> Le2
            int r0 = r1.size()     // Catch: java.lang.Exception -> Le2
            int r0 = r10 / r0
            int r5 = r0 / 9
            int r6 = r5 / 2
            android.view.ViewGroup$LayoutParams r7 = r3.getLayoutParams()     // Catch: java.lang.Exception -> Le2
            android.widget.LinearLayout$LayoutParams r7 = (android.widget.LinearLayout.LayoutParams) r7     // Catch: java.lang.Exception -> Le2
            int r8 = r5 * 2
            int r10 = r10 - r8
            r7.width = r10     // Catch: java.lang.Exception -> Le2
            r3.setLayoutParams(r7)     // Catch: java.lang.Exception -> Le2
            int r0 = r0 - r5
            int r10 = r6 / 2
            int r0 = r0 - r10
            r3.setColumnWidth(r0)     // Catch: java.lang.Exception -> Le2
            r3.setHorizontalSpacing(r6)     // Catch: java.lang.Exception -> Le2
            r10 = 0
            r3.setStretchMode(r10)     // Catch: java.lang.Exception -> Le2
            int r10 = r1.size()     // Catch: java.lang.Exception -> Le2
            r3.setNumColumns(r10)     // Catch: java.lang.Exception -> Le2
            r3.setAdapter(r4)     // Catch: java.lang.Exception -> Le2
            com.mbridge.msdk.video.dynview.j.a$8 r10 = new com.mbridge.msdk.video.dynview.j.a$8     // Catch: java.lang.Exception -> Le2
            r10.<init>(r9, r12, r1)     // Catch: java.lang.Exception -> Le2
            r3.setOnItemClickListener(r10)     // Catch: java.lang.Exception -> Le2
        Ld1:
            if (r2 == 0) goto Ldb
            com.mbridge.msdk.video.dynview.j.a$9 r10 = new com.mbridge.msdk.video.dynview.j.a$9     // Catch: java.lang.Exception -> Le2
            r10.<init>(r9, r12)     // Catch: java.lang.Exception -> Le2
            r2.setOnClickListener(r10)     // Catch: java.lang.Exception -> Le2
        Ldb:
            if (r13 == 0) goto Le9
            r10 = 0
            r13.a(r11, r10)     // Catch: java.lang.Exception -> Le2
            goto Le9
        Le2:
            if (r13 == 0) goto Le9
            com.mbridge.msdk.video.dynview.c.a r10 = com.mbridge.msdk.video.dynview.c.a.a
            r13.a(r10)
        Le9:
            return
    }
}
