package com.tkay.expressad.video.dynview.widget;

public class TYOrderCampView extends com.tkay.expressad.video.module.TkayBaseView {
    private com.tkay.expressad.video.dynview.widget.TYOrderCampView n;
    private java.util.List<com.tkay.expressad.foundation.d.c> o;
    private int p;
    private int q;
    private int r;
    private int s;
    private java.lang.String t;
    private com.tkay.expressad.widget.FeedBackButton u;
    private android.widget.ImageView v;
    private boolean w;
    private com.tkay.expressad.video.dynview.f.c x;
    private com.tkay.expressad.video.dynview.f.b y;
    private boolean z;



    final class 3 implements com.tkay.expressad.foundation.f.a {
        final com.tkay.expressad.video.dynview.widget.TYOrderCampView a;

        3(com.tkay.expressad.video.dynview.widget.TYOrderCampView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r0 = this;
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }
    }

    final class 4 implements android.view.View.OnClickListener {
        final java.lang.String a;
        final com.tkay.expressad.video.dynview.widget.TYOrderCampView b;

        4(com.tkay.expressad.video.dynview.widget.TYOrderCampView r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                java.lang.String r1 = r0.a
                com.tkay.core.common.l.l.a(r1)
                return
        }
    }

    public TYOrderCampView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.w = r2
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$1 r0 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$1
            r0.<init>(r1)
            r1.x = r0
            r1.z = r2
            return
    }

    public TYOrderCampView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.w = r1
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$1 r2 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$1
            r2.<init>(r0)
            r0.x = r2
            r0.z = r1
            return
    }

    private void a() {
            r3 = this;
            com.tkay.expressad.video.module.a.a r0 = r3.e
            if (r0 == 0) goto Ld
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 104(0x68, float:1.46E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        Ld:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r2, int r3, int r4) {
            r1 = this;
            if (r2 == 0) goto L1f
            boolean r0 = r2.j()
            if (r0 == 0) goto L1f
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()     // Catch: java.lang.Exception -> L1b
            if (r2 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1b
            r0.<init>()     // Catch: java.lang.Exception -> L1b
            int r2 = r2.b()     // Catch: java.lang.Exception -> L1b
            r0.append(r2)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r2 = move-exception
            r2.getMessage()
        L1f:
            r2 = 0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L36
            r0.<init>()     // Catch: org.json.JSONException -> L36
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L34
            org.json.JSONObject r3 = r1.a(r3)     // Catch: org.json.JSONException -> L34
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L34
            java.lang.String r2 = "camp_position"
            r0.put(r2, r4)     // Catch: org.json.JSONException -> L34
            goto L3c
        L34:
            r2 = move-exception
            goto L39
        L36:
            r3 = move-exception
            r0 = r2
            r2 = r3
        L39:
            r2.printStackTrace()
        L3c:
            com.tkay.expressad.video.module.a.a r2 = r1.e
            if (r2 == 0) goto L47
            com.tkay.expressad.video.module.a.a r2 = r1.e
            r3 = 105(0x69, float:1.47E-43)
            r2.a(r3, r0)
        L47:
            return
    }

    static void a(com.tkay.expressad.video.dynview.widget.TYOrderCampView r2) {
            com.tkay.expressad.video.module.a.a r0 = r2.e
            if (r0 == 0) goto Ld
            com.tkay.expressad.video.module.a.a r2 = r2.e
            r0 = 104(0x68, float:1.46E-43)
            java.lang.String r1 = ""
            r2.a(r0, r1)
        Ld:
            return
    }

    static void a(com.tkay.expressad.video.dynview.widget.TYOrderCampView r2, com.tkay.expressad.foundation.d.c r3, int r4) {
            if (r3 == 0) goto L1f
            boolean r0 = r3.j()
            if (r0 == 0) goto L1f
            com.tkay.expressad.foundation.d.c$c r3 = r3.M()     // Catch: java.lang.Exception -> L1b
            if (r3 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1b
            r0.<init>()     // Catch: java.lang.Exception -> L1b
            int r3 = r3.b()     // Catch: java.lang.Exception -> L1b
            r0.append(r3)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r3 = move-exception
            r3.getMessage()
        L1f:
            r3 = 0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L37
            r0.<init>()     // Catch: org.json.JSONException -> L37
            java.lang.String r3 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L35
            r1 = 0
            org.json.JSONObject r1 = r2.a(r1)     // Catch: org.json.JSONException -> L35
            r0.put(r3, r1)     // Catch: org.json.JSONException -> L35
            java.lang.String r3 = "camp_position"
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L35
            goto L3d
        L35:
            r3 = move-exception
            goto L3a
        L37:
            r4 = move-exception
            r0 = r3
            r3 = r4
        L3a:
            r3.printStackTrace()
        L3d:
            com.tkay.expressad.video.module.a.a r3 = r2.e
            if (r3 == 0) goto L48
            com.tkay.expressad.video.module.a.a r2 = r2.e
            r3 = 105(0x69, float:1.47E-43)
            r2.a(r3, r0)
        L48:
            return
    }

    static boolean a(com.tkay.expressad.video.dynview.widget.TYOrderCampView r0, boolean r1) {
            r0.w = r1
            return r1
    }

    static com.tkay.expressad.video.dynview.widget.TYOrderCampView b(com.tkay.expressad.video.dynview.widget.TYOrderCampView r0) {
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r0.n
            return r0
    }

    private void b() {
            r10 = this;
            android.view.animation.ScaleAnimation r9 = new android.view.animation.ScaleAnimation
            r1 = 0
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 0
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 2
            r6 = 1056964608(0x3f000000, float:0.5)
            r7 = 2
            r8 = 1056964608(0x3f000000, float:0.5)
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 500(0x1f4, double:2.47E-321)
            r9.setDuration(r0)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r10.n
            r0.startAnimation(r9)
            return
    }

    static com.tkay.expressad.video.dynview.f.b c(com.tkay.expressad.video.dynview.widget.TYOrderCampView r0) {
            com.tkay.expressad.video.dynview.f.b r0 = r0.y
            return r0
    }

    private void e() {
            r4 = this;
            com.tkay.expressad.widget.FeedBackButton r0 = r4.u
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.o
            r2 = 8
            if (r1 != 0) goto Lf
            r0.setVisibility(r2)
            return
        Lf:
            r0 = 0
            java.lang.Object r1 = r1.get(r0)
            if (r1 != 0) goto L1c
            com.tkay.expressad.widget.FeedBackButton r0 = r4.u
            r0.setVisibility(r2)
            return
        L1c:
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()
            boolean r1 = r1.b()
            if (r1 == 0) goto L92
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.o
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            java.lang.String r1 = r1.K()
            r4.t = r1
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r4.o
            java.lang.Object r0 = r1.get(r0)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            r4.b = r0
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.t
            r1.append(r2)
            java.lang.String r2 = "_2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$3 r3 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$3
            r3.<init>(r4)
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.foundation.d.c r3 = r4.b
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r2 = r4.u
            r0.a(r1, r2)
            return
        L92:
            com.tkay.expressad.widget.FeedBackButton r0 = r4.u
            r0.setVisibility(r2)
            return
    }

    private void f() {
            r3 = this;
            android.widget.ImageView r0 = r3.v
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            r1 = 8
            if (r0 == 0) goto L31
            java.lang.String r0 = r0.J()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L26
            android.widget.ImageView r2 = r3.v
            r2.setVisibility(r1)
        L26:
            android.widget.ImageView r1 = r3.v
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$4 r2 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$4
            r2.<init>(r3, r0)
            r1.setOnClickListener(r2)
            return
        L31:
            android.widget.ImageView r0 = r3.v
            r0.setVisibility(r1)
            return
    }

    public void createView(android.view.ViewGroup r4) {
            r3 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.o
            if (r0 != 0) goto Lc
            com.tkay.expressad.video.dynview.f.b r4 = r3.y
            if (r4 == 0) goto Lb
            r4.b()
        Lb:
            return
        Lc:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.video.dynview.f.c r1 = r3.x
            java.lang.String r2 = "order_view_callback"
            r0.put(r2, r1)
            com.tkay.expressad.video.dynview.j.c r1 = new com.tkay.expressad.video.dynview.j.c
            r1.<init>()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r3.o
            com.tkay.expressad.video.dynview.c r1 = com.tkay.expressad.video.dynview.j.c.b(r1, r2)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$2 r2 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$2
            r2.<init>(r3, r4)
            com.tkay.expressad.video.dynview.b.a(r1, r2, r0)
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            r0.n = r0
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r5 = this;
            super.onAttachedToWindow()
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.o
            if (r0 != 0) goto L8
            return
        L8:
            r0 = 0
        L9:
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r5.o
            int r1 = r1.size()
            if (r0 >= r1) goto L34
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            r2.<init>()     // Catch: org.json.JSONException -> L1f
            java.lang.String r1 = "camp_position"
            r2.put(r1, r0)     // Catch: org.json.JSONException -> L1d
            goto L26
        L1d:
            r1 = move-exception
            goto L23
        L1f:
            r2 = move-exception
            r4 = r2
            r2 = r1
            r1 = r4
        L23:
            r1.printStackTrace()
        L26:
            com.tkay.expressad.video.module.a.a r1 = r5.e
            if (r1 == 0) goto L31
            com.tkay.expressad.video.module.a.a r1 = r5.e
            r3 = 110(0x6e, float:1.54E-43)
            r1.a(r3, r2)
        L31:
            int r0 = r0 + 1
            goto L9
        L34:
            return
    }

    public void setCampOrderViewBuildCallback(com.tkay.expressad.video.dynview.f.b r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setCampaignExes(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setNotchPadding(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.p = r1
            r0.q = r2
            r0.r = r3
            r0.s = r4
            r0.setViewStatus()
            return
    }

    public void setRewarded(boolean r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setViewStatus() {
            r6 = this;
            java.lang.String r0 = "_2"
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r1 = r6.n
            if (r1 == 0) goto L123
            boolean r2 = r6.z
            if (r2 == 0) goto L123
            boolean r2 = r6.w
            java.lang.String r3 = "tkay_native_order_camp_controller"
            int r2 = r6.filterFindViewId(r2, r3)
            android.view.View r1 = r1.findViewById(r2)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r2 = r6.n
            boolean r3 = r6.w
            java.lang.String r4 = "tkay_native_order_camp_feed_btn"
            int r3 = r6.filterFindViewId(r3, r4)
            android.view.View r2 = r2.findViewById(r3)
            com.tkay.expressad.widget.FeedBackButton r2 = (com.tkay.expressad.widget.FeedBackButton) r2
            r6.u = r2
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r2 = r6.n
            boolean r3 = r6.w
            java.lang.String r4 = "tkay_iv_link"
            int r3 = r6.filterFindViewId(r3, r4)
            android.view.View r2 = r2.findViewById(r3)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r6.v = r2
            if (r1 == 0) goto L49
            int r2 = r6.p
            int r3 = r6.r
            int r4 = r6.q
            int r5 = r6.s
            r1.setPadding(r2, r3, r4, r5)
        L49:
            com.tkay.expressad.widget.FeedBackButton r1 = r6.u
            r2 = 8
            if (r1 == 0) goto Le8
            if (r1 == 0) goto Le8
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r6.o     // Catch: java.lang.Exception -> Le4
            if (r3 != 0) goto L5a
            r1.setVisibility(r2)     // Catch: java.lang.Exception -> Le4
            goto Le8
        L5a:
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r6.o     // Catch: java.lang.Exception -> Le4
            r3 = 0
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Exception -> Le4
            if (r1 != 0) goto L6a
            com.tkay.expressad.widget.FeedBackButton r0 = r6.u     // Catch: java.lang.Exception -> Le4
            r0.setVisibility(r2)     // Catch: java.lang.Exception -> Le4
            goto Le8
        L6a:
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> Le4
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> Le4
            if (r1 == 0) goto Lde
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r6.o     // Catch: java.lang.Exception -> Le4
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> Le4
            java.lang.String r1 = r1.K()     // Catch: java.lang.Exception -> Le4
            r6.t = r1     // Catch: java.lang.Exception -> Le4
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r6.o     // Catch: java.lang.Exception -> Le4
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> Le4
            r6.b = r1     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> Le4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le4
            r3.<init>()     // Catch: java.lang.Exception -> Le4
            java.lang.String r4 = r6.t     // Catch: java.lang.Exception -> Le4
            r3.append(r4)     // Catch: java.lang.Exception -> Le4
            r3.append(r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$3 r4 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$3     // Catch: java.lang.Exception -> Le4
            r4.<init>(r6)     // Catch: java.lang.Exception -> Le4
            r1.a(r3, r4)     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> Le4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le4
            r3.<init>()     // Catch: java.lang.Exception -> Le4
            java.lang.String r4 = r6.t     // Catch: java.lang.Exception -> Le4
            r3.append(r4)     // Catch: java.lang.Exception -> Le4
            r3.append(r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.foundation.d.c r4 = r6.b     // Catch: java.lang.Exception -> Le4
            r1.a(r3, r4)     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> Le4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le4
            r3.<init>()     // Catch: java.lang.Exception -> Le4
            java.lang.String r4 = r6.t     // Catch: java.lang.Exception -> Le4
            r3.append(r4)     // Catch: java.lang.Exception -> Le4
            r3.append(r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> Le4
            com.tkay.expressad.widget.FeedBackButton r3 = r6.u     // Catch: java.lang.Exception -> Le4
            r1.a(r0, r3)     // Catch: java.lang.Exception -> Le4
            goto Le8
        Lde:
            com.tkay.expressad.widget.FeedBackButton r0 = r6.u     // Catch: java.lang.Exception -> Le4
            r0.setVisibility(r2)     // Catch: java.lang.Exception -> Le4
            goto Le8
        Le4:
            r0 = move-exception
            r0.getMessage()
        Le8:
            android.widget.ImageView r0 = r6.v
            if (r0 == 0) goto L123
            if (r0 == 0) goto L123
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L11e
            r0.e()     // Catch: java.lang.Exception -> L11e
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L11e
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Exception -> L11e
            if (r0 == 0) goto L118
            java.lang.String r0 = r0.J()     // Catch: java.lang.Exception -> L11e
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L11e
            if (r1 == 0) goto L10d
            android.widget.ImageView r1 = r6.v     // Catch: java.lang.Exception -> L11e
            r1.setVisibility(r2)     // Catch: java.lang.Exception -> L11e
        L10d:
            android.widget.ImageView r1 = r6.v     // Catch: java.lang.Exception -> L11e
            com.tkay.expressad.video.dynview.widget.TYOrderCampView$4 r2 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView$4     // Catch: java.lang.Exception -> L11e
            r2.<init>(r6, r0)     // Catch: java.lang.Exception -> L11e
            r1.setOnClickListener(r2)     // Catch: java.lang.Exception -> L11e
            return
        L118:
            android.widget.ImageView r0 = r6.v     // Catch: java.lang.Exception -> L11e
            r0.setVisibility(r2)     // Catch: java.lang.Exception -> L11e
            goto L123
        L11e:
            r0 = move-exception
            r0.getMessage()
        L123:
            return
    }

    public void startAlphaAnimation() {
            r3 = this;
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r1, r2)
            r1 = 500(0x1f4, double:2.47E-321)
            r0.setDuration(r1)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r1 = r3.n
            r1.startAnimation(r0)
            return
    }

    public void startTranslateAnimation() {
            r10 = this;
            android.view.animation.TranslateAnimation r9 = new android.view.animation.TranslateAnimation
            r1 = 2
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 2
            r4 = 0
            r5 = 2
            r6 = 0
            r7 = 2
            r8 = 0
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 500(0x1f4, double:2.47E-321)
            r9.setDuration(r0)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r10.n
            r0.startAnimation(r9)
            return
    }
}
