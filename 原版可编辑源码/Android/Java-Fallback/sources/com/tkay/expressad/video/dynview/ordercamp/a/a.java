package com.tkay.expressad.video.dynview.ordercamp.a;

public final class a extends android.widget.BaseAdapter {
    private static final java.lang.String a = "OrderCampAdapter";
    private static final java.lang.String e = "tkay_lv_item_rl";
    private static final java.lang.String f = "tkay_lv_iv";
    private static final java.lang.String g = "tkay_lv_icon_iv";
    private static final java.lang.String h = "tkay_lv_title_tv";
    private static final java.lang.String i = "tkay_lv_tv_install";
    private static final java.lang.String j = "tkay_lv_sv_starlevel";
    private static final java.lang.String k = "tkay_lv_sv_heat_level";
    private static final java.lang.String l = "tkay_lv_ration";
    private static final java.lang.String m = "tkay_lv_desc_tv";
    private static final java.lang.String n = "tkay_iv_flag";
    private static final java.lang.String o = "tkay_order_viewed_tv";
    private static final java.lang.String p = "tkay_order_layout_item";
    private static final java.lang.String q = "tkay_lv_iv_burl";
    private static final java.lang.String r = "501";
    private static final java.lang.String s = "\\.xml";
    private static final java.lang.String t = "\\/xml";
    private static final java.lang.String u = "_item.xml";
    private boolean b;
    private com.tkay.expressad.video.dynview.ordercamp.a.a.a c;
    private java.util.List<com.tkay.expressad.foundation.d.c> d;


    final class 2 implements com.tkay.expressad.foundation.g.d.c {
        final android.content.Context a;
        final com.tkay.expressad.video.dynview.ordercamp.a.a b;

        2(com.tkay.expressad.video.dynview.ordercamp.a.a r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                if (r3 == 0) goto L55
                boolean r4 = r3.isRecycled()
                if (r4 != 0) goto L55
                int r4 = r3.getWidth()     // Catch: java.lang.Throwable -> L55
                float r4 = (float) r4     // Catch: java.lang.Throwable -> L55
                r0 = 1065353216(0x3f800000, float:1.0)
                float r4 = r4 * r0
                int r0 = r3.getHeight()     // Catch: java.lang.Throwable -> L55
                float r0 = (float) r0     // Catch: java.lang.Throwable -> L55
                float r4 = r4 / r0
                android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> L55
                r1 = 1094713344(0x41400000, float:12.0)
                int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)     // Catch: java.lang.Throwable -> L55
                float r1 = (float) r0     // Catch: java.lang.Throwable -> L55
                float r1 = r1 * r4
                int r4 = (int) r1     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a r1 = r2.b     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = com.tkay.expressad.video.dynview.ordercamp.a.a.a(r1)     // Catch: java.lang.Throwable -> L55
                android.widget.ImageView r1 = r1.j     // Catch: java.lang.Throwable -> L55
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()     // Catch: java.lang.Throwable -> L55
                r1.height = r0     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a r0 = r2.b     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = com.tkay.expressad.video.dynview.ordercamp.a.a.a(r0)     // Catch: java.lang.Throwable -> L55
                android.widget.ImageView r0 = r0.j     // Catch: java.lang.Throwable -> L55
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L55
                r0.width = r4     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a r4 = r2.b     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a$a r4 = com.tkay.expressad.video.dynview.ordercamp.a.a.a(r4)     // Catch: java.lang.Throwable -> L55
                android.widget.ImageView r4 = r4.j     // Catch: java.lang.Throwable -> L55
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a r3 = r2.b     // Catch: java.lang.Throwable -> L55
                com.tkay.expressad.video.dynview.ordercamp.a.a$a r3 = com.tkay.expressad.video.dynview.ordercamp.a.a.a(r3)     // Catch: java.lang.Throwable -> L55
                android.widget.ImageView r3 = r3.j     // Catch: java.lang.Throwable -> L55
                r4 = 1426063360(0x55000000, float:8.796093E12)
                r3.setBackgroundColor(r4)     // Catch: java.lang.Throwable -> L55
            L55:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    static class a {
        android.widget.RelativeLayout a;
        com.tkay.expressad.video.dynview.widget.ATRotationView b;
        com.tkay.expressad.video.dynview.widget.TYImageView c;
        com.tkay.expressad.videocommon.view.RoundImageView d;
        android.widget.TextView e;
        android.widget.TextView f;
        android.widget.TextView g;
        android.widget.TextView h;
        com.tkay.expressad.video.dynview.widget.TYLevelLayoutView i;
        android.widget.ImageView j;

        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public a(java.util.List<com.tkay.expressad.foundation.d.c> r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.d = r2
            return
    }

    private static int a(java.lang.String r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "layout"
            int r2 = com.tkay.expressad.foundation.h.i.a(r0, r2, r1)
            return r2
    }

    private android.view.View a() {
            r4 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r2 = "tkay_order_layout_item"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r3)
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = new com.tkay.expressad.video.dynview.ordercamp.a.a$a
            r1.<init>()
            r4.c = r1
            java.lang.String r2 = "tkay_lv_iv"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = (com.tkay.expressad.video.dynview.widget.TYImageView) r2
            r1.c = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            java.lang.String r2 = "tkay_lv_icon_iv"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.videocommon.view.RoundImageView r2 = (com.tkay.expressad.videocommon.view.RoundImageView) r2
            r1.d = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            java.lang.String r2 = "tkay_lv_sv_starlevel"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r2 = (com.tkay.expressad.video.dynview.widget.TYLevelLayoutView) r2
            r1.i = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            java.lang.String r2 = "tkay_lv_ration"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.video.dynview.widget.ATRotationView r2 = (com.tkay.expressad.video.dynview.widget.ATRotationView) r2
            r1.b = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            r0.setTag(r1)
            return r0
    }

    static com.tkay.expressad.video.dynview.ordercamp.a.a.a a(com.tkay.expressad.video.dynview.ordercamp.a.a r0) {
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r0.c
            return r0
    }

    private void a(int r8) {
            r7 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r7.d
            if (r0 == 0) goto Lb8
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r7.c
            if (r1 != 0) goto La
            goto Lb8
        La:
            int r0 = r0.size()
            if (r0 != 0) goto L11
            return
        L11:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r0.c
            r1 = 0
            if (r0 == 0) goto L2b
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r0.c
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r7.d
            java.lang.Object r2 = r2.get(r8)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            java.lang.String r2 = r2.be()
            r7.a(r0, r2, r1)
        L2b:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.videocommon.view.RoundImageView r0 = r0.d
            if (r0 == 0) goto L4e
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.videocommon.view.RoundImageView r0 = r0.d
            r2 = 25
            r0.setBorderRadius(r2)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.videocommon.view.RoundImageView r0 = r0.d
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r7.d
            java.lang.Object r2 = r2.get(r8)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            java.lang.String r2 = r2.bd()
            r3 = 1
            r7.a(r0, r2, r3)
        L4e:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r7.d
            java.lang.Object r0 = r0.get(r8)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            double r2 = r0.aX()
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L62
            r2 = 4617315517961601024(0x4014000000000000, double:5.0)
        L62:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r0 = r0.i
            if (r0 == 0) goto L82
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r7.c
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r0 = r0.i
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r7.d
            java.lang.Object r8 = r4.get(r8)
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8
            int r8 = r8.aY()
            r0.setRatingAndUser(r2, r8)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r8 = r8.i
            r8.setOrientation(r1)
        L82:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.ATRotationView r8 = r8.b
            if (r8 == 0) goto L9f
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.ATRotationView r8 = r8.b
            r0 = 1065353216(0x3f800000, float:1.0)
            r8.setWidthRatio(r0)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.ATRotationView r8 = r8.b
            r8.setHeightRatio(r0)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.ATRotationView r8 = r8.b
            r8.setAutoscroll(r1)
        L9f:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.TYImageView r8 = r8.c
            if (r8 == 0) goto Lb8
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r8 = r7.c
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r8.c
            r1 = 30
            r2 = 30
            r3 = 30
            r4 = 30
            r5 = 10
            r6 = -1728053248(0xffffffff99000000, float:-6.617445E-24)
            r0.setCustomBorder(r1, r2, r3, r4, r5, r6)
        Lb8:
            return
    }

    private void a(android.view.View r3) {
            r2 = this;
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r2.c
            java.lang.String r1 = "tkay_lv_item_rl"
            int r1 = r2.d(r1)
            android.view.View r1 = r3.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            r0.a = r1
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r2.c
            java.lang.String r1 = "tkay_lv_title_tv"
            int r1 = r2.d(r1)
            android.view.View r1 = r3.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r0.e = r1
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r2.c
            java.lang.String r1 = "tkay_lv_tv_install"
            int r1 = r2.d(r1)
            android.view.View r1 = r3.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r0.g = r1
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r2.c
            java.lang.String r1 = "tkay_lv_desc_tv"
            int r1 = r2.d(r1)
            android.view.View r1 = r3.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r0.f = r1
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r2.c
            java.lang.String r1 = "tkay_iv_flag"
            int r1 = r2.d(r1)
            android.view.View r1 = r3.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            r0.j = r1
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r2.c
            java.lang.String r1 = "tkay_order_viewed_tv"
            int r1 = r2.d(r1)
            android.view.View r3 = r3.findViewById(r1)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r0.h = r3
            return
    }

    private void a(android.widget.ImageView r3, java.lang.String r4, boolean r5) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L11
            if (r5 == 0) goto L10
            r4 = 8
            r3.setVisibility(r4)
        L10:
            return
        L11:
            android.content.Context r0 = r3.getContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.video.dynview.ordercamp.a.a$1 r1 = new com.tkay.expressad.video.dynview.ordercamp.a.a$1
            r1.<init>(r2, r3, r5)
            r0.a(r4, r1)
            return
    }

    private static int b(java.lang.String r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "id"
            int r2 = com.tkay.expressad.foundation.h.i.a(r0, r2, r1)
            return r2
    }

    private android.view.View b() {
            r4 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r2 = "tkay_order_layout_item"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r3)
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = new com.tkay.expressad.video.dynview.ordercamp.a.a$a
            r1.<init>()
            r4.c = r1
            java.lang.String r2 = "tkay_lv_iv"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = (com.tkay.expressad.video.dynview.widget.TYImageView) r2
            r1.c = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            java.lang.String r2 = "tkay_lv_icon_iv"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.videocommon.view.RoundImageView r2 = (com.tkay.expressad.videocommon.view.RoundImageView) r2
            r1.d = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            java.lang.String r2 = "tkay_lv_sv_starlevel"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r2 = (com.tkay.expressad.video.dynview.widget.TYLevelLayoutView) r2
            r1.i = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            java.lang.String r2 = "tkay_lv_ration"
            int r2 = b(r2)
            android.view.View r2 = r0.findViewById(r2)
            com.tkay.expressad.video.dynview.widget.ATRotationView r2 = (com.tkay.expressad.video.dynview.widget.ATRotationView) r2
            r1.b = r2
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r4.c
            r0.setTag(r1)
            return r0
    }

    private void b(int r4) {
            r3 = this;
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r3.c
            if (r0 == 0) goto Lcf
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.d
            java.lang.Object r4 = r0.get(r4)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r3.c
            android.widget.TextView r0 = r0.e
            if (r0 == 0) goto L1d
            java.lang.String r0 = r4.bb()
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r3.c
            android.widget.TextView r1 = r1.e
            r1.setText(r0)
        L1d:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r3.c
            android.widget.TextView r0 = r0.f
            if (r0 == 0) goto L2e
            java.lang.String r0 = r4.bc()
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r3.c
            android.widget.TextView r1 = r1.f
            r1.setText(r0)
        L2e:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r3.c
            android.widget.TextView r0 = r0.g
            if (r0 == 0) goto L5b
            java.lang.String r0 = r4.cU
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r3.c
            android.widget.TextView r1 = r1.g
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.widget.TYTextView
            if (r1 == 0) goto L54
            com.tkay.expressad.video.dynview.h.b r1 = new com.tkay.expressad.video.dynview.h.b
            r1.<init>()
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r3.c
            android.widget.TextView r1 = r1.g
            android.animation.ObjectAnimator r1 = com.tkay.expressad.video.dynview.h.b.c(r1)
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r2 = r3.c
            android.widget.TextView r2 = r2.g
            com.tkay.expressad.video.dynview.widget.TYTextView r2 = (com.tkay.expressad.video.dynview.widget.TYTextView) r2
            r2.setObjectAnimator(r1)
        L54:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r3.c
            android.widget.TextView r1 = r1.g
            r1.setText(r0)
        L5b:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r3.c
            android.widget.ImageView r0 = r0.j
            if (r0 == 0) goto L85
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L81
            r0.getLanguage()     // Catch: java.lang.Exception -> L81
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L81
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L81
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r0)     // Catch: java.lang.Exception -> L81
            java.lang.String r4 = r4.aE()     // Catch: java.lang.Exception -> L81
            com.tkay.expressad.video.dynview.ordercamp.a.a$2 r2 = new com.tkay.expressad.video.dynview.ordercamp.a.a$2     // Catch: java.lang.Exception -> L81
            r2.<init>(r3, r0)     // Catch: java.lang.Exception -> L81
            r1.a(r4, r2)     // Catch: java.lang.Exception -> L81
            goto L85
        L81:
            r4 = move-exception
            r4.getMessage()
        L85:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r4 = r3.c
            android.widget.TextView r4 = r4.h
            if (r4 == 0) goto Lcf
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lcb
            android.content.Context r4 = r4.f()     // Catch: java.lang.Exception -> Lcb
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> Lcb
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lcb
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> Lcb
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Exception -> Lcb
            java.lang.String r1 = "tkay_reward_viewed_text_str"
            java.lang.String r2 = "string"
            int r4 = r0.getIdentifier(r1, r2, r4)     // Catch: java.lang.Exception -> Lcb
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r3.c     // Catch: java.lang.Exception -> Lcb
            android.widget.TextView r0 = r0.h     // Catch: java.lang.Exception -> Lcb
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lcb
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> Lcb
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> Lcb
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Exception -> Lcb
            r0.setText(r4)     // Catch: java.lang.Exception -> Lcb
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r4 = r3.c     // Catch: java.lang.Exception -> Lcb
            android.widget.TextView r4 = r4.h     // Catch: java.lang.Exception -> Lcb
            r0 = 0
            r4.setVisibility(r0)     // Catch: java.lang.Exception -> Lcb
            return
        Lcb:
            r4 = move-exception
            r4.getMessage()
        Lcf:
            return
    }

    private static int c(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lb
            int r1 = r1.hashCode()
            return r1
        Lb:
            r1 = -1
            return r1
    }

    private int d(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto L9
            int r2 = c(r2)
            goto Ld
        L9:
            int r2 = b(r2)
        Ld:
            return r2
    }

    @Override
    public final int getCount() {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.d
            if (r0 == 0) goto L11
            int r0 = r0.size()
            if (r0 <= 0) goto L11
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.d
            int r0 = r0.size()
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.Object getItem(int r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.d
            if (r0 == 0) goto L9
            java.lang.Object r2 = r0.get(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public final long getItemId(int r3) {
            r2 = this;
            long r0 = (long) r3
            return r0
    }

    @Override
    public final android.view.View getView(int r9, android.view.View r10, android.view.ViewGroup r11) {
            r8 = this;
            if (r10 != 0) goto L73
            com.tkay.core.common.b.m r11 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L263
            android.content.Context r11 = r11.f()     // Catch: java.lang.Exception -> L263
            android.view.LayoutInflater r11 = android.view.LayoutInflater.from(r11)     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_order_layout_item"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L263
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L263
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L263
            java.lang.String r2 = "layout"
            int r0 = com.tkay.expressad.foundation.h.i.a(r1, r0, r2)     // Catch: java.lang.Exception -> L263
            r1 = 0
            android.view.View r11 = r11.inflate(r0, r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = new com.tkay.expressad.video.dynview.ordercamp.a.a$a     // Catch: java.lang.Exception -> L263
            r0.<init>()     // Catch: java.lang.Exception -> L263
            r8.c = r0     // Catch: java.lang.Exception -> L263
            java.lang.String r1 = "tkay_lv_iv"
            int r1 = b(r1)     // Catch: java.lang.Exception -> L263
            android.view.View r1 = r11.findViewById(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = (com.tkay.expressad.video.dynview.widget.TYImageView) r1     // Catch: java.lang.Exception -> L263
            r0.c = r1     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r1 = "tkay_lv_icon_iv"
            int r1 = b(r1)     // Catch: java.lang.Exception -> L263
            android.view.View r1 = r11.findViewById(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.videocommon.view.RoundImageView r1 = (com.tkay.expressad.videocommon.view.RoundImageView) r1     // Catch: java.lang.Exception -> L263
            r0.d = r1     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r1 = "tkay_lv_sv_starlevel"
            int r1 = b(r1)     // Catch: java.lang.Exception -> L263
            android.view.View r1 = r11.findViewById(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r1 = (com.tkay.expressad.video.dynview.widget.TYLevelLayoutView) r1     // Catch: java.lang.Exception -> L263
            r0.i = r1     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r1 = "tkay_lv_ration"
            int r1 = b(r1)     // Catch: java.lang.Exception -> L263
            android.view.View r1 = r11.findViewById(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.ATRotationView r1 = (com.tkay.expressad.video.dynview.widget.ATRotationView) r1     // Catch: java.lang.Exception -> L263
            r0.b = r1     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r0 = r8.c     // Catch: java.lang.Exception -> L263
            r11.setTag(r0)     // Catch: java.lang.Exception -> L263
            r10 = r11
            goto L7b
        L73:
            java.lang.Object r11 = r10.getTag()     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = (com.tkay.expressad.video.dynview.ordercamp.a.a.a) r11     // Catch: java.lang.Exception -> L263
            r8.c = r11     // Catch: java.lang.Exception -> L263
        L7b:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_lv_item_rl"
            int r0 = r8.d(r0)     // Catch: java.lang.Exception -> L263
            android.view.View r0 = r10.findViewById(r0)     // Catch: java.lang.Exception -> L263
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0     // Catch: java.lang.Exception -> L263
            r11.a = r0     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_lv_title_tv"
            int r0 = r8.d(r0)     // Catch: java.lang.Exception -> L263
            android.view.View r0 = r10.findViewById(r0)     // Catch: java.lang.Exception -> L263
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Exception -> L263
            r11.e = r0     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_lv_tv_install"
            int r0 = r8.d(r0)     // Catch: java.lang.Exception -> L263
            android.view.View r0 = r10.findViewById(r0)     // Catch: java.lang.Exception -> L263
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Exception -> L263
            r11.g = r0     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_lv_desc_tv"
            int r0 = r8.d(r0)     // Catch: java.lang.Exception -> L263
            android.view.View r0 = r10.findViewById(r0)     // Catch: java.lang.Exception -> L263
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Exception -> L263
            r11.f = r0     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_iv_flag"
            int r0 = r8.d(r0)     // Catch: java.lang.Exception -> L263
            android.view.View r0 = r10.findViewById(r0)     // Catch: java.lang.Exception -> L263
            android.widget.ImageView r0 = (android.widget.ImageView) r0     // Catch: java.lang.Exception -> L263
            r11.j = r0     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            java.lang.String r0 = "tkay_order_viewed_tv"
            int r0 = r8.d(r0)     // Catch: java.lang.Exception -> L263
            android.view.View r0 = r10.findViewById(r0)     // Catch: java.lang.Exception -> L263
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Exception -> L263
            r11.h = r0     // Catch: java.lang.Exception -> L263
            java.util.List<com.tkay.expressad.foundation.d.c> r11 = r8.d     // Catch: java.lang.Exception -> L263
            r0 = 0
            if (r11 == 0) goto L194
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            if (r11 != 0) goto Le6
            goto L194
        Le6:
            java.util.List<com.tkay.expressad.foundation.d.c> r11 = r8.d     // Catch: java.lang.Exception -> L263
            int r11 = r11.size()     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L194
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYImageView r11 = r11.c     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L107
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYImageView r11 = r11.c     // Catch: java.lang.Exception -> L263
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r8.d     // Catch: java.lang.Exception -> L263
            java.lang.Object r1 = r1.get(r9)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> L263
            java.lang.String r1 = r1.be()     // Catch: java.lang.Exception -> L263
            r8.a(r11, r1, r0)     // Catch: java.lang.Exception -> L263
        L107:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.videocommon.view.RoundImageView r11 = r11.d     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L12a
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.videocommon.view.RoundImageView r11 = r11.d     // Catch: java.lang.Exception -> L263
            r1 = 25
            r11.setBorderRadius(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.videocommon.view.RoundImageView r11 = r11.d     // Catch: java.lang.Exception -> L263
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r8.d     // Catch: java.lang.Exception -> L263
            java.lang.Object r1 = r1.get(r9)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> L263
            java.lang.String r1 = r1.bd()     // Catch: java.lang.Exception -> L263
            r2 = 1
            r8.a(r11, r1, r2)     // Catch: java.lang.Exception -> L263
        L12a:
            java.util.List<com.tkay.expressad.foundation.d.c> r11 = r8.d     // Catch: java.lang.Exception -> L263
            java.lang.Object r11 = r11.get(r9)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.foundation.d.c r11 = (com.tkay.expressad.foundation.d.c) r11     // Catch: java.lang.Exception -> L263
            double r1 = r11.aX()     // Catch: java.lang.Exception -> L263
            r3 = 0
            int r11 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r11 > 0) goto L13e
            r1 = 4617315517961601024(0x4014000000000000, double:5.0)
        L13e:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r11 = r11.i     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L15e
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r11 = r11.i     // Catch: java.lang.Exception -> L263
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r8.d     // Catch: java.lang.Exception -> L263
            java.lang.Object r3 = r3.get(r9)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Exception -> L263
            int r3 = r3.aY()     // Catch: java.lang.Exception -> L263
            r11.setRatingAndUser(r1, r3)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYLevelLayoutView r11 = r11.i     // Catch: java.lang.Exception -> L263
            r11.setOrientation(r0)     // Catch: java.lang.Exception -> L263
        L15e:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.ATRotationView r11 = r11.b     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L17b
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.ATRotationView r11 = r11.b     // Catch: java.lang.Exception -> L263
            r1 = 1065353216(0x3f800000, float:1.0)
            r11.setWidthRatio(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.ATRotationView r11 = r11.b     // Catch: java.lang.Exception -> L263
            r11.setHeightRatio(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.ATRotationView r11 = r11.b     // Catch: java.lang.Exception -> L263
            r11.setAutoscroll(r0)     // Catch: java.lang.Exception -> L263
        L17b:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYImageView r11 = r11.c     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L194
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r11.c     // Catch: java.lang.Exception -> L263
            r2 = 30
            r3 = 30
            r4 = 30
            r5 = 30
            r6 = 10
            r7 = -1728053248(0xffffffff99000000, float:-6.617445E-24)
            r1.setCustomBorder(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L263
        L194:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L267
            java.util.List<com.tkay.expressad.foundation.d.c> r11 = r8.d     // Catch: java.lang.Exception -> L263
            java.lang.Object r9 = r11.get(r9)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.foundation.d.c r9 = (com.tkay.expressad.foundation.d.c) r9     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r11 = r11.e     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L1b1
            java.lang.String r11 = r9.bb()     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r1 = r1.e     // Catch: java.lang.Exception -> L263
            r1.setText(r11)     // Catch: java.lang.Exception -> L263
        L1b1:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r11 = r11.f     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L1c2
            java.lang.String r11 = r9.bc()     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r1 = r1.f     // Catch: java.lang.Exception -> L263
            r1.setText(r11)     // Catch: java.lang.Exception -> L263
        L1c2:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r11 = r11.g     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L1ef
            java.lang.String r11 = r9.cU     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r1 = r1.g     // Catch: java.lang.Exception -> L263
            boolean r1 = r1 instanceof com.tkay.expressad.video.dynview.widget.TYTextView     // Catch: java.lang.Exception -> L263
            if (r1 == 0) goto L1e8
            com.tkay.expressad.video.dynview.h.b r1 = new com.tkay.expressad.video.dynview.h.b     // Catch: java.lang.Exception -> L263
            r1.<init>()     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r1 = r1.g     // Catch: java.lang.Exception -> L263
            android.animation.ObjectAnimator r1 = com.tkay.expressad.video.dynview.h.b.c(r1)     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r2 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r2 = r2.g     // Catch: java.lang.Exception -> L263
            com.tkay.expressad.video.dynview.widget.TYTextView r2 = (com.tkay.expressad.video.dynview.widget.TYTextView) r2     // Catch: java.lang.Exception -> L263
            r2.setObjectAnimator(r1)     // Catch: java.lang.Exception -> L263
        L1e8:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r1 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r1 = r1.g     // Catch: java.lang.Exception -> L263
            r1.setText(r11)     // Catch: java.lang.Exception -> L263
        L1ef:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.ImageView r11 = r11.j     // Catch: java.lang.Exception -> L263
            if (r11 == 0) goto L219
            java.util.Locale r11 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L215
            r11.getLanguage()     // Catch: java.lang.Exception -> L215
            com.tkay.core.common.b.m r11 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L215
            android.content.Context r11 = r11.f()     // Catch: java.lang.Exception -> L215
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r11)     // Catch: java.lang.Exception -> L215
            java.lang.String r9 = r9.aE()     // Catch: java.lang.Exception -> L215
            com.tkay.expressad.video.dynview.ordercamp.a.a$2 r2 = new com.tkay.expressad.video.dynview.ordercamp.a.a$2     // Catch: java.lang.Exception -> L215
            r2.<init>(r8, r11)     // Catch: java.lang.Exception -> L215
            r1.a(r9, r2)     // Catch: java.lang.Exception -> L215
            goto L219
        L215:
            r9 = move-exception
            r9.getMessage()     // Catch: java.lang.Exception -> L263
        L219:
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r9 = r8.c     // Catch: java.lang.Exception -> L263
            android.widget.TextView r9 = r9.h     // Catch: java.lang.Exception -> L263
            if (r9 == 0) goto L267
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L25e
            android.content.Context r9 = r9.f()     // Catch: java.lang.Exception -> L25e
            java.lang.String r9 = r9.getPackageName()     // Catch: java.lang.Exception -> L25e
            com.tkay.core.common.b.m r11 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L25e
            android.content.Context r11 = r11.f()     // Catch: java.lang.Exception -> L25e
            android.content.res.Resources r11 = r11.getResources()     // Catch: java.lang.Exception -> L25e
            java.lang.String r1 = "tkay_reward_viewed_text_str"
            java.lang.String r2 = "string"
            int r9 = r11.getIdentifier(r1, r2, r9)     // Catch: java.lang.Exception -> L25e
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r11 = r8.c     // Catch: java.lang.Exception -> L25e
            android.widget.TextView r11 = r11.h     // Catch: java.lang.Exception -> L25e
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L25e
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L25e
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L25e
            java.lang.String r9 = r1.getString(r9)     // Catch: java.lang.Exception -> L25e
            r11.setText(r9)     // Catch: java.lang.Exception -> L25e
            com.tkay.expressad.video.dynview.ordercamp.a.a$a r9 = r8.c     // Catch: java.lang.Exception -> L25e
            android.widget.TextView r9 = r9.h     // Catch: java.lang.Exception -> L25e
            r9.setVisibility(r0)     // Catch: java.lang.Exception -> L25e
            goto L267
        L25e:
            r9 = move-exception
            r9.getMessage()     // Catch: java.lang.Exception -> L263
            goto L267
        L263:
            r9 = move-exception
            r9.getMessage()
        L267:
            return r10
    }
}
