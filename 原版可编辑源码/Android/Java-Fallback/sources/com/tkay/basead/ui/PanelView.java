package com.tkay.basead.ui;

public class PanelView extends android.widget.RelativeLayout {
    public static final int TYPE_FULL_SCREEN_BANNER = 0;
    public static final int TYPE_FULL_SCREEN_EMPTY_INFO = 8;
    public static final int TYPE_FULL_SCREEN_ENDCARD_HORIZONTAL_LANDSCAPE = 6;
    public static final int TYPE_FULL_SCREEN_ENDCARD_HORIZONTAL_PORTRAIT = 1;
    public static final int TYPE_FULL_SCREEN_ENDCARD_VERTICAL_LANDSCAPE = 2;
    public static final int TYPE_FULL_SCREEN_ENDCARD_VERTICAL_PORTRAIT = 5;
    public static final int TYPE_HALF_SCREEN_EMPTY_INFO = 7;
    public static final int TYPE_HALF_SCREEN_HORIZONTAL = 4;
    public static final int TYPE_HALF_SCREEN_VERTICAL = 3;
    private android.view.View a;
    private android.widget.ImageView b;
    private android.widget.ImageView c;
    private android.widget.TextView d;
    private android.widget.TextView e;
    private android.widget.Button f;
    private com.tkay.basead.ui.BaseShakeView g;
    private com.tkay.basead.ui.PanelView.a h;
    private int i;
    private com.tkay.core.common.f.j j;
    private com.tkay.core.common.f.i k;
    private com.tkay.core.common.f.h l;
    private int m;
    private android.view.ViewGroup n;
    private android.widget.TextView o;
    private android.widget.TextView p;
    private android.widget.TextView q;
    private android.widget.TextView r;
    private boolean s;
    private boolean t;
    private boolean u;
    private java.util.List<android.view.View> v;
    private final android.view.View.OnClickListener w;

    final class 1 implements com.tkay.core.common.res.b.a {
        final java.lang.String a;
        final com.tkay.basead.ui.PanelView b;

        1(com.tkay.basead.ui.PanelView r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onFail(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSuccess(java.lang.String r2, android.graphics.Bitmap r3) {
                r1 = this;
                java.lang.String r0 = r1.a
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L11
                com.tkay.basead.ui.PanelView r2 = r1.b
                android.widget.ImageView r2 = com.tkay.basead.ui.PanelView.a(r2)
                r2.setImageBitmap(r3)
            L11:
                return
        }
    }

    final class 2 implements com.tkay.core.common.res.b.a {
        final java.lang.String a;
        final android.view.ViewGroup.LayoutParams b;
        final com.tkay.basead.ui.PanelView c;

        2(com.tkay.basead.ui.PanelView r1, java.lang.String r2, android.view.ViewGroup.LayoutParams r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void onFail(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.basead.ui.PanelView r1 = r0.c
                android.widget.ImageView r1 = com.tkay.basead.ui.PanelView.b(r1)
                r2 = 8
                r1.setVisibility(r2)
                return
        }

        @Override
        public final void onSuccess(java.lang.String r3, android.graphics.Bitmap r4) {
                r2 = this;
                java.lang.String r0 = r2.a
                boolean r3 = android.text.TextUtils.equals(r3, r0)
                if (r3 == 0) goto L57
                com.tkay.basead.ui.PanelView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.PanelView.b(r3)
                r3.setImageBitmap(r4)
                int r3 = r4.getWidth()
                float r3 = (float) r3
                r0 = 1065353216(0x3f800000, float:1.0)
                float r3 = r3 * r0
                int r0 = r4.getHeight()
                float r0 = (float) r0
                float r3 = r3 / r0
                android.view.ViewGroup$LayoutParams r0 = r2.b
                int r0 = r0.height
                float r1 = (float) r0
                float r1 = r1 * r3
                int r3 = (int) r1
                android.view.ViewGroup$LayoutParams r1 = r2.b
                r1.width = r3
                android.view.ViewGroup$LayoutParams r3 = r2.b
                r3.height = r0
                com.tkay.basead.ui.PanelView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.PanelView.b(r3)
                android.view.ViewGroup$LayoutParams r0 = r2.b
                r3.setLayoutParams(r0)
                com.tkay.basead.ui.PanelView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.PanelView.b(r3)
                android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY
                r3.setScaleType(r0)
                com.tkay.basead.ui.PanelView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.PanelView.b(r3)
                r3.setImageBitmap(r4)
                com.tkay.basead.ui.PanelView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.PanelView.b(r3)
                r4 = 0
                r3.setVisibility(r4)
            L57:
                return
        }
    }





    final class 7 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.PanelView a;

        7(com.tkay.basead.ui.PanelView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.basead.ui.PanelView r2 = r1.a
                android.view.View$OnClickListener r2 = com.tkay.basead.ui.PanelView.d(r2)
                com.tkay.basead.ui.PanelView r0 = r1.a
                android.widget.Button r0 = com.tkay.basead.ui.PanelView.c(r0)
                r2.onClick(r0)
                return
        }
    }

    final class 8 implements com.tkay.basead.ui.BaseShakeView.a {
        final com.tkay.basead.ui.PanelView a;

        8(com.tkay.basead.ui.PanelView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean a() {
                r1 = this;
                com.tkay.basead.ui.PanelView r0 = r1.a
                com.tkay.basead.ui.PanelView$a r0 = com.tkay.basead.ui.PanelView.e(r0)
                boolean r0 = r0.b()
                return r0
        }
    }


    public interface a {
        void a();

        boolean b();
    }

    public PanelView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.m = r1
            r0.s = r1
            r0.t = r1
            r0.u = r1
            com.tkay.basead.ui.PanelView$9 r1 = new com.tkay.basead.ui.PanelView$9
            r1.<init>(r0)
            r0.w = r1
            return
    }

    static android.widget.ImageView a(com.tkay.basead.ui.PanelView r0) {
            android.widget.ImageView r0 = r0.b
            return r0
    }

    private void a(com.tkay.core.common.f.h r9) {
            r8 = this;
            android.widget.ImageView r0 = r8.b
            r1 = 1
            r2 = 8
            if (r0 == 0) goto L3f
            java.lang.String r0 = r9.t()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L30
            android.widget.ImageView r3 = r8.b
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            int r4 = r3.width
            int r3 = r3.height
            android.content.Context r5 = r8.getContext()
            com.tkay.core.common.res.b r5 = com.tkay.core.common.res.b.a(r5)
            com.tkay.core.common.res.e r6 = new com.tkay.core.common.res.e
            r6.<init>(r1, r0)
            com.tkay.basead.ui.PanelView$1 r7 = new com.tkay.basead.ui.PanelView$1
            r7.<init>(r8, r0)
            r5.a(r6, r4, r3, r7)
        L30:
            java.lang.String r0 = r9.t()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L3f
            android.widget.ImageView r0 = r8.b
            r0.setVisibility(r2)
        L3f:
            android.widget.ImageView r0 = r8.c
            if (r0 == 0) goto L72
            java.lang.String r0 = r9.v()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L6d
            android.widget.ImageView r3 = r8.c
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            int r4 = r3.width
            int r5 = r3.height
            android.content.Context r6 = r8.getContext()
            com.tkay.core.common.res.b r6 = com.tkay.core.common.res.b.a(r6)
            com.tkay.core.common.res.e r7 = new com.tkay.core.common.res.e
            r7.<init>(r1, r0)
            com.tkay.basead.ui.PanelView$2 r1 = new com.tkay.basead.ui.PanelView$2
            r1.<init>(r8, r0, r3)
            r6.a(r7, r4, r5, r1)
            goto L72
        L6d:
            android.widget.ImageView r0 = r8.c
            r0.setVisibility(r2)
        L72:
            android.widget.TextView r0 = r8.e
            if (r0 == 0) goto L8f
            java.lang.String r0 = r9.s()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8a
            android.widget.TextView r0 = r8.e
            java.lang.String r1 = r9.s()
            r0.setText(r1)
            goto L8f
        L8a:
            android.widget.TextView r0 = r8.e
            r0.setVisibility(r2)
        L8f:
            android.widget.TextView r0 = r8.d
            if (r0 == 0) goto Lac
            java.lang.String r0 = r9.r()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La7
            android.widget.TextView r0 = r8.d
            java.lang.String r1 = r9.r()
            r0.setText(r1)
            goto Lac
        La7:
            android.widget.TextView r0 = r8.d
            r0.setVisibility(r2)
        Lac:
            java.lang.String r0 = r9.w()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc0
            android.widget.Button r0 = r8.f
            java.lang.String r1 = r9.w()
            r0.setText(r1)
            goto Lcf
        Lc0:
            android.widget.Button r0 = r8.f
            android.content.Context r1 = r8.getContext()
            com.tkay.core.common.f.h r2 = r8.l
            int r1 = com.tkay.basead.a.e.a(r1, r2)
            r0.setText(r1)
        Lcf:
            r8.b(r9)
            return
    }

    private boolean a() {
            r1 = this;
            boolean r0 = r1.s
            if (r0 == 0) goto La
            boolean r0 = r1.t
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    static android.widget.ImageView b(com.tkay.basead.ui.PanelView r0) {
            android.widget.ImageView r0 = r0.c
            return r0
    }

    private void b() {
            r10 = this;
            r10.d()
            com.tkay.core.common.f.h r0 = r10.l
            android.widget.ImageView r1 = r10.b
            r2 = 1
            r3 = 8
            if (r1 == 0) goto L44
            java.lang.String r1 = r0.t()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L35
            android.widget.ImageView r4 = r10.b
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            int r5 = r4.width
            int r4 = r4.height
            android.content.Context r6 = r10.getContext()
            com.tkay.core.common.res.b r6 = com.tkay.core.common.res.b.a(r6)
            com.tkay.core.common.res.e r7 = new com.tkay.core.common.res.e
            r7.<init>(r2, r1)
            com.tkay.basead.ui.PanelView$1 r8 = new com.tkay.basead.ui.PanelView$1
            r8.<init>(r10, r1)
            r6.a(r7, r5, r4, r8)
        L35:
            java.lang.String r1 = r0.t()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L44
            android.widget.ImageView r1 = r10.b
            r1.setVisibility(r3)
        L44:
            android.widget.ImageView r1 = r10.c
            if (r1 == 0) goto L77
            java.lang.String r1 = r0.v()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L72
            android.widget.ImageView r4 = r10.c
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            int r5 = r4.width
            int r6 = r4.height
            android.content.Context r7 = r10.getContext()
            com.tkay.core.common.res.b r7 = com.tkay.core.common.res.b.a(r7)
            com.tkay.core.common.res.e r8 = new com.tkay.core.common.res.e
            r8.<init>(r2, r1)
            com.tkay.basead.ui.PanelView$2 r9 = new com.tkay.basead.ui.PanelView$2
            r9.<init>(r10, r1, r4)
            r7.a(r8, r5, r6, r9)
            goto L77
        L72:
            android.widget.ImageView r1 = r10.c
            r1.setVisibility(r3)
        L77:
            android.widget.TextView r1 = r10.e
            if (r1 == 0) goto L94
            java.lang.String r1 = r0.s()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L8f
            android.widget.TextView r1 = r10.e
            java.lang.String r4 = r0.s()
            r1.setText(r4)
            goto L94
        L8f:
            android.widget.TextView r1 = r10.e
            r1.setVisibility(r3)
        L94:
            android.widget.TextView r1 = r10.d
            if (r1 == 0) goto Lb1
            java.lang.String r1 = r0.r()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lac
            android.widget.TextView r1 = r10.d
            java.lang.String r4 = r0.r()
            r1.setText(r4)
            goto Lb1
        Lac:
            android.widget.TextView r1 = r10.d
            r1.setVisibility(r3)
        Lb1:
            java.lang.String r1 = r0.w()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc5
            android.widget.Button r1 = r10.f
            java.lang.String r4 = r0.w()
            r1.setText(r4)
            goto Ld4
        Lc5:
            android.widget.Button r1 = r10.f
            android.content.Context r4 = r10.getContext()
            com.tkay.core.common.f.h r5 = r10.l
            int r4 = com.tkay.basead.a.e.a(r4, r5)
            r1.setText(r4)
        Ld4:
            r10.b(r0)
            android.widget.ImageView r0 = r10.b
            if (r0 == 0) goto Le7
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r10.v
            android.widget.ImageView r1 = r10.b
            r0.add(r1)
        Le7:
            android.widget.TextView r0 = r10.d
            if (r0 == 0) goto Lf7
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r10.v
            android.widget.TextView r1 = r10.d
            r0.add(r1)
        Lf7:
            android.widget.TextView r0 = r10.e
            if (r0 == 0) goto L107
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r10.v
            android.widget.TextView r1 = r10.e
            r0.add(r1)
        L107:
            android.widget.Button r0 = r10.f
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r10.v
            android.widget.Button r1 = r10.f
            r0.add(r1)
            android.widget.ImageView r0 = r10.c
            if (r0 == 0) goto L125
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r10.v
            android.widget.ImageView r1 = r10.c
            r0.add(r1)
        L125:
            com.tkay.basead.ui.BaseShakeView r0 = r10.g
            if (r0 == 0) goto L141
            boolean r1 = r10.u
            if (r1 == 0) goto L141
            com.tkay.basead.ui.PanelView$7 r1 = new com.tkay.basead.ui.PanelView$7
            r1.<init>(r10)
            r0.setOnClickListener(r1)
            com.tkay.basead.ui.BaseShakeView r0 = r10.g
            com.tkay.basead.ui.PanelView$8 r1 = new com.tkay.basead.ui.PanelView$8
            r1.<init>(r10)
            com.tkay.core.common.f.j r4 = r10.j
            r0.setOnShakeListener(r1, r4)
        L141:
            android.view.View r0 = r10.a
            android.content.Context r1 = r10.getContext()
            java.lang.String r4 = "myoffer_panel_view_blank"
            java.lang.String r5 = "id"
            int r1 = com.tkay.core.common.l.h.a(r1, r4, r5)
            android.view.View r0 = r0.findViewById(r1)
            if (r0 == 0) goto L160
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r1 = r10.v
            r1.add(r0)
            goto L16e
        L160:
            android.view.View r0 = r10.a
            android.view.View$OnClickListener r1 = r10.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r10.v
            android.view.View r1 = r10.a
            r0.add(r1)
        L16e:
            android.widget.ImageView r0 = r10.b
            boolean r1 = r0 instanceof com.tkay.core.common.ui.component.RoundImageView
            if (r1 == 0) goto L197
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r0.setNeedRadiu(r2)
            int r0 = r10.m
            r1 = 2
            if (r0 == r1) goto L18b
            r1 = 6
            if (r0 == r1) goto L18b
            android.widget.ImageView r0 = r10.b
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r1 = 12
            r0.setRadiusInDip(r1)
            goto L192
        L18b:
            android.widget.ImageView r0 = r10.b
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r0.setRadiusInDip(r3)
        L192:
            android.widget.ImageView r0 = r10.b
            r0.invalidate()
        L197:
            return
    }

    private void b(com.tkay.core.common.f.h r7) {
            r6 = this;
            boolean r0 = r6.a()
            if (r0 == 0) goto L82
            android.widget.TextView r0 = r6.o
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            android.content.Context r2 = r6.getContext()
            java.lang.String r3 = "myoffer_panel_version"
            java.lang.String r4 = "string"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = r7.G()
            r5 = 0
            r3[r5] = r4
            java.lang.String r1 = r1.getString(r2, r3)
            r0.setText(r1)
            android.widget.TextView r0 = r6.p
            java.lang.String r1 = r7.F()
            r0.setText(r1)
            android.widget.TextView r0 = r6.r
            com.tkay.basead.ui.PanelView$3 r1 = new com.tkay.basead.ui.PanelView$3
            r1.<init>(r6, r7)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r6.q
            com.tkay.basead.ui.PanelView$4 r1 = new com.tkay.basead.ui.PanelView$4
            r1.<init>(r6, r7)
            r0.setOnClickListener(r1)
            android.widget.TextView r7 = r6.o
            com.tkay.basead.ui.PanelView$5 r0 = new com.tkay.basead.ui.PanelView$5
            r0.<init>(r6)
            r7.setOnClickListener(r0)
            android.widget.TextView r7 = r6.p
            com.tkay.basead.ui.PanelView$6 r0 = new com.tkay.basead.ui.PanelView$6
            r0.<init>(r6)
            r7.setOnClickListener(r0)
            android.view.ViewGroup r7 = r6.n
            if (r7 == 0) goto L65
            r7.setVisibility(r5)
        L65:
            android.widget.TextView r7 = r6.o
            if (r7 == 0) goto L6c
            r7.setVisibility(r5)
        L6c:
            android.widget.TextView r7 = r6.p
            if (r7 == 0) goto L73
            r7.setVisibility(r5)
        L73:
            android.widget.TextView r7 = r6.r
            if (r7 == 0) goto L7a
            r7.setVisibility(r5)
        L7a:
            android.widget.TextView r7 = r6.q
            if (r7 == 0) goto Lbd
            r7.setVisibility(r5)
            return
        L82:
            android.view.ViewGroup r7 = r6.n
            r0 = 8
            if (r7 == 0) goto L8b
            r7.setVisibility(r0)
        L8b:
            android.widget.TextView r7 = r6.o
            if (r7 == 0) goto L92
            r7.setVisibility(r0)
        L92:
            android.widget.TextView r7 = r6.p
            if (r7 == 0) goto L99
            r7.setVisibility(r0)
        L99:
            android.widget.TextView r7 = r6.r
            if (r7 == 0) goto La0
            r7.setVisibility(r0)
        La0:
            android.widget.TextView r7 = r6.q
            if (r7 == 0) goto La7
            r7.setVisibility(r0)
        La7:
            android.content.Context r7 = r6.getContext()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r0 = "myoffer_four_element_container_bg"
            java.lang.String r1 = "id"
            int r7 = com.tkay.core.common.l.h.a(r7, r0, r1)     // Catch: java.lang.Throwable -> Lbd
            android.view.View r7 = r6.findViewById(r7)     // Catch: java.lang.Throwable -> Lbd
            if (r7 == 0) goto Lbd
            r0 = 0
            r7.setBackgroundDrawable(r0)     // Catch: java.lang.Throwable -> Lbd
        Lbd:
            return
    }

    static android.widget.Button c(com.tkay.basead.ui.PanelView r0) {
            android.widget.Button r0 = r0.f
            return r0
    }

    private void c() {
            r2 = this;
            android.widget.ImageView r0 = r2.b
            boolean r1 = r0 instanceof com.tkay.core.common.ui.component.RoundImageView
            if (r1 == 0) goto L2c
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r1 = 1
            r0.setNeedRadiu(r1)
            int r0 = r2.m
            r1 = 2
            if (r0 == r1) goto L1e
            r1 = 6
            if (r0 == r1) goto L1e
            android.widget.ImageView r0 = r2.b
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r1 = 12
            r0.setRadiusInDip(r1)
            goto L27
        L1e:
            android.widget.ImageView r0 = r2.b
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r1 = 8
            r0.setRadiusInDip(r1)
        L27:
            android.widget.ImageView r0 = r2.b
            r0.invalidate()
        L2c:
            return
    }

    static android.view.View.OnClickListener d(com.tkay.basead.ui.PanelView r0) {
            android.view.View$OnClickListener r0 = r0.w
            return r0
    }

    private void d() {
            r4 = this;
            java.util.List<android.view.View> r0 = r4.v
            r0.clear()
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "myoffer_iv_banner_icon"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.b = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_tv_banner_title"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.d = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_tv_banner_desc"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.e = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_btn_banner_cta"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.Button r0 = (android.widget.Button) r0
            r4.f = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_ad_logo"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.c = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_four_element_container"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.n = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_version_name"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.o = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_publisher_name"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.p = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_permission_manage"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.q = r0
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_privacy_agreement"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.r = r0
            android.view.View r0 = r4.a     // Catch: java.lang.Throwable -> Le3
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> Le3
            java.lang.String r3 = "myoffer_shake_hint_text"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)     // Catch: java.lang.Throwable -> Le3
            android.view.View r0 = r0.findViewById(r1)     // Catch: java.lang.Throwable -> Le3
            com.tkay.basead.ui.BaseShakeView r0 = (com.tkay.basead.ui.BaseShakeView) r0     // Catch: java.lang.Throwable -> Le3
            r4.g = r0     // Catch: java.lang.Throwable -> Le3
        Le3:
            r4.e()
            return
    }

    static com.tkay.basead.ui.PanelView.a e(com.tkay.basead.ui.PanelView r0) {
            com.tkay.basead.ui.PanelView$a r0 = r0.h
            return r0
    }

    private void e() {
            r3 = this;
            boolean r0 = r3.u
            if (r0 == 0) goto L12
            com.tkay.basead.ui.BaseShakeView r0 = r3.g
            if (r0 == 0) goto L12
            int r1 = r3.m
            r2 = 8
            if (r1 == r2) goto L12
            r1 = 0
            r0.setVisibility(r1)
        L12:
            return
    }

    static com.tkay.core.common.f.j f(com.tkay.basead.ui.PanelView r0) {
            com.tkay.core.common.f.j r0 = r0.j
            return r0
    }

    private void f() {
            r4 = this;
            android.widget.ImageView r0 = r4.b
            if (r0 == 0) goto L10
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r4.v
            android.widget.ImageView r1 = r4.b
            r0.add(r1)
        L10:
            android.widget.TextView r0 = r4.d
            if (r0 == 0) goto L20
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r4.v
            android.widget.TextView r1 = r4.d
            r0.add(r1)
        L20:
            android.widget.TextView r0 = r4.e
            if (r0 == 0) goto L30
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r4.v
            android.widget.TextView r1 = r4.e
            r0.add(r1)
        L30:
            android.widget.Button r0 = r4.f
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r4.v
            android.widget.Button r1 = r4.f
            r0.add(r1)
            android.widget.ImageView r0 = r4.c
            if (r0 == 0) goto L4e
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r4.v
            android.widget.ImageView r1 = r4.c
            r0.add(r1)
        L4e:
            com.tkay.basead.ui.BaseShakeView r0 = r4.g
            if (r0 == 0) goto L6a
            boolean r1 = r4.u
            if (r1 == 0) goto L6a
            com.tkay.basead.ui.PanelView$7 r1 = new com.tkay.basead.ui.PanelView$7
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            com.tkay.basead.ui.BaseShakeView r0 = r4.g
            com.tkay.basead.ui.PanelView$8 r1 = new com.tkay.basead.ui.PanelView$8
            r1.<init>(r4)
            com.tkay.core.common.f.j r2 = r4.j
            r0.setOnShakeListener(r1, r2)
        L6a:
            android.view.View r0 = r4.a
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_panel_view_blank"
            java.lang.String r3 = "id"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            android.view.View r0 = r0.findViewById(r1)
            if (r0 == 0) goto L89
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r1 = r4.v
            r1.add(r0)
            return
        L89:
            android.view.View r0 = r4.a
            android.view.View$OnClickListener r1 = r4.w
            r0.setOnClickListener(r1)
            java.util.List<android.view.View> r0 = r4.v
            android.view.View r1 = r4.a
            r0.add(r1)
            return
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r9) {
            r8 = this;
            int r0 = r8.m
            if (r0 != 0) goto L34
            r2 = 0
            r3 = 0
            int r0 = r8.getWidth()
            float r4 = (float) r0
            int r0 = r8.getHeight()
            float r5 = (float) r0
            r6 = 0
            r7 = 31
            r1 = r9
            int r0 = r1.saveLayer(r2, r3, r4, r5, r6, r7)
            super.dispatchDraw(r9)
            int r1 = r8.getWidth()
            int r2 = r8.getHeight()
            android.content.Context r3 = r8.getContext()
            r4 = 1088421888(0x40e00000, float:7.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            com.tkay.core.common.l.u.a(r9, r1, r2, r3)
            r9.restoreToCount(r0)
            return
        L34:
            super.dispatchDraw(r9)
            return
    }

    public android.view.View getCTAButton() {
            r1 = this;
            android.widget.Button r0 = r1.f
            return r0
    }

    public java.util.List<android.view.View> getClickViews() {
            r1 = this;
            java.util.List<android.view.View> r0 = r1.v
            return r0
    }

    public android.view.View getShakeView() {
            r1 = this;
            com.tkay.basead.ui.BaseShakeView r0 = r1.g
            return r0
    }

    public void init(com.tkay.core.common.f.h r1, com.tkay.core.common.f.i r2, int r3, boolean r4, com.tkay.basead.ui.PanelView.a r5) {
            r0 = this;
            r0.h = r5
            r0.i = r3
            r0.l = r1
            r0.k = r2
            com.tkay.core.common.f.j r2 = r2.m
            r0.j = r2
            r0.u = r4
            boolean r1 = r1.K()
            r0.s = r1
            com.tkay.core.common.f.j r1 = r0.j
            int r1 = r1.o()
            r2 = 1
            if (r1 != r2) goto L1e
            goto L1f
        L1e:
            r2 = 0
        L1f:
            r0.t = r2
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.v = r1
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    public void setLayoutType(int r10) {
            r9 = this;
            r9.m = r10
            java.lang.String r0 = "myoffer_panel_view_horizontal_without_icon"
            java.lang.String r1 = "myoffer_panel_view_horizontal"
            java.lang.String r2 = "myoffer_panel_view_endcard_portrait_without_icon"
            java.lang.String r3 = "layout"
            r4 = 1
            switch(r10) {
                case 1: goto L1a0;
                case 2: goto L162;
                case 3: goto Le2;
                case 4: goto La6;
                case 5: goto L68;
                case 6: goto L162;
                case 7: goto L4e;
                case 8: goto L34;
                default: goto Le;
            }
        Le:
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L1dc
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_bottom_banner_without_icon"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L34:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_full_screen_empty_info"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L4e:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_empty_info"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L68:
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L8c
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L8c:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_endcard_vertical_portrait"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        La6:
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto Lca
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r1 = r9.getContext()
            int r0 = com.tkay.core.common.l.h.a(r1, r0, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        Lca:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        Le2:
            int r10 = r9.i
            if (r10 != r4) goto L122
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L10a
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r1 = r9.getContext()
            int r0 = com.tkay.core.common.l.h.a(r1, r0, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L10a:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L122:
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L148
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_vertical_without_icon"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L148:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_vertical"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L162:
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L187
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_endcard_landscape_without_icon"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L187:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_endcard_landscape"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L1a0:
            com.tkay.core.common.f.h r10 = r9.l
            java.lang.String r10 = r10.t()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L1c3
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L1c3:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_endcard_horizontal_portrait"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
            goto L1f4
        L1dc:
            android.content.Context r10 = r9.getContext()
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r10)
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "myoffer_panel_view_bottom_banner"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r3)
            android.view.View r10 = r10.inflate(r0, r9, r4)
            r9.a = r10
        L1f4:
            r9.d()
            com.tkay.core.common.f.h r10 = r9.l
            android.widget.ImageView r0 = r9.b
            r1 = 8
            if (r0 == 0) goto L237
            java.lang.String r0 = r10.t()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L228
            android.widget.ImageView r2 = r9.b
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            int r3 = r2.width
            int r2 = r2.height
            android.content.Context r5 = r9.getContext()
            com.tkay.core.common.res.b r5 = com.tkay.core.common.res.b.a(r5)
            com.tkay.core.common.res.e r6 = new com.tkay.core.common.res.e
            r6.<init>(r4, r0)
            com.tkay.basead.ui.PanelView$1 r7 = new com.tkay.basead.ui.PanelView$1
            r7.<init>(r9, r0)
            r5.a(r6, r3, r2, r7)
        L228:
            java.lang.String r0 = r10.t()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L237
            android.widget.ImageView r0 = r9.b
            r0.setVisibility(r1)
        L237:
            android.widget.ImageView r0 = r9.c
            if (r0 == 0) goto L26a
            java.lang.String r0 = r10.v()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L265
            android.widget.ImageView r2 = r9.c
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            int r3 = r2.width
            int r5 = r2.height
            android.content.Context r6 = r9.getContext()
            com.tkay.core.common.res.b r6 = com.tkay.core.common.res.b.a(r6)
            com.tkay.core.common.res.e r7 = new com.tkay.core.common.res.e
            r7.<init>(r4, r0)
            com.tkay.basead.ui.PanelView$2 r8 = new com.tkay.basead.ui.PanelView$2
            r8.<init>(r9, r0, r2)
            r6.a(r7, r3, r5, r8)
            goto L26a
        L265:
            android.widget.ImageView r0 = r9.c
            r0.setVisibility(r1)
        L26a:
            android.widget.TextView r0 = r9.e
            if (r0 == 0) goto L287
            java.lang.String r0 = r10.s()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L282
            android.widget.TextView r0 = r9.e
            java.lang.String r2 = r10.s()
            r0.setText(r2)
            goto L287
        L282:
            android.widget.TextView r0 = r9.e
            r0.setVisibility(r1)
        L287:
            android.widget.TextView r0 = r9.d
            if (r0 == 0) goto L2a4
            java.lang.String r0 = r10.r()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29f
            android.widget.TextView r0 = r9.d
            java.lang.String r2 = r10.r()
            r0.setText(r2)
            goto L2a4
        L29f:
            android.widget.TextView r0 = r9.d
            r0.setVisibility(r1)
        L2a4:
            java.lang.String r0 = r10.w()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2b8
            android.widget.Button r0 = r9.f
            java.lang.String r2 = r10.w()
            r0.setText(r2)
            goto L2c7
        L2b8:
            android.widget.Button r0 = r9.f
            android.content.Context r2 = r9.getContext()
            com.tkay.core.common.f.h r3 = r9.l
            int r2 = com.tkay.basead.a.e.a(r2, r3)
            r0.setText(r2)
        L2c7:
            r9.b(r10)
            android.widget.ImageView r10 = r9.b
            if (r10 == 0) goto L2da
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r10 = r9.v
            android.widget.ImageView r0 = r9.b
            r10.add(r0)
        L2da:
            android.widget.TextView r10 = r9.d
            if (r10 == 0) goto L2ea
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r10 = r9.v
            android.widget.TextView r0 = r9.d
            r10.add(r0)
        L2ea:
            android.widget.TextView r10 = r9.e
            if (r10 == 0) goto L2fa
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r10 = r9.v
            android.widget.TextView r0 = r9.e
            r10.add(r0)
        L2fa:
            android.widget.Button r10 = r9.f
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r10 = r9.v
            android.widget.Button r0 = r9.f
            r10.add(r0)
            android.widget.ImageView r10 = r9.c
            if (r10 == 0) goto L318
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r10 = r9.v
            android.widget.ImageView r0 = r9.c
            r10.add(r0)
        L318:
            com.tkay.basead.ui.BaseShakeView r10 = r9.g
            if (r10 == 0) goto L334
            boolean r0 = r9.u
            if (r0 == 0) goto L334
            com.tkay.basead.ui.PanelView$7 r0 = new com.tkay.basead.ui.PanelView$7
            r0.<init>(r9)
            r10.setOnClickListener(r0)
            com.tkay.basead.ui.BaseShakeView r10 = r9.g
            com.tkay.basead.ui.PanelView$8 r0 = new com.tkay.basead.ui.PanelView$8
            r0.<init>(r9)
            com.tkay.core.common.f.j r2 = r9.j
            r10.setOnShakeListener(r0, r2)
        L334:
            android.view.View r10 = r9.a
            android.content.Context r0 = r9.getContext()
            java.lang.String r2 = "myoffer_panel_view_blank"
            java.lang.String r3 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r3)
            android.view.View r10 = r10.findViewById(r0)
            if (r10 == 0) goto L353
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r0 = r9.v
            r0.add(r10)
            goto L361
        L353:
            android.view.View r10 = r9.a
            android.view.View$OnClickListener r0 = r9.w
            r10.setOnClickListener(r0)
            java.util.List<android.view.View> r10 = r9.v
            android.view.View r0 = r9.a
            r10.add(r0)
        L361:
            android.widget.ImageView r10 = r9.b
            boolean r0 = r10 instanceof com.tkay.core.common.ui.component.RoundImageView
            if (r0 == 0) goto L38a
            com.tkay.core.common.ui.component.RoundImageView r10 = (com.tkay.core.common.ui.component.RoundImageView) r10
            r10.setNeedRadiu(r4)
            int r10 = r9.m
            r0 = 2
            if (r10 == r0) goto L37e
            r0 = 6
            if (r10 == r0) goto L37e
            android.widget.ImageView r10 = r9.b
            com.tkay.core.common.ui.component.RoundImageView r10 = (com.tkay.core.common.ui.component.RoundImageView) r10
            r0 = 12
            r10.setRadiusInDip(r0)
            goto L385
        L37e:
            android.widget.ImageView r10 = r9.b
            com.tkay.core.common.ui.component.RoundImageView r10 = (com.tkay.core.common.ui.component.RoundImageView) r10
            r10.setRadiusInDip(r1)
        L385:
            android.widget.ImageView r10 = r9.b
            r10.invalidate()
        L38a:
            return
    }
}
