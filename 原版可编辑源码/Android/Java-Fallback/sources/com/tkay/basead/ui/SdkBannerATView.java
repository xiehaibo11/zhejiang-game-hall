package com.tkay.basead.ui;

public class SdkBannerATView extends com.tkay.basead.ui.BaseBannerATView {
    private static final int x = 1;
    private static final int y = 2;
    private final android.view.View.OnClickListener A;
    boolean u;
    java.lang.String v;
    private int w;
    private final android.view.View.OnClickListener z;


    final class 10 implements com.tkay.core.common.res.b.a {
        final android.widget.ImageView a;
        final com.tkay.basead.ui.SdkBannerATView b;

        10(com.tkay.basead.ui.SdkBannerATView r1, android.widget.ImageView r2) {
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
                com.tkay.basead.ui.SdkBannerATView r0 = r1.b
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.v()
                boolean r2 = android.text.TextUtils.equals(r0, r2)
                if (r2 == 0) goto L13
                android.widget.ImageView r2 = r1.a
                r2.setImageBitmap(r3)
            L13:
                return
        }
    }

    final class 11 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        11(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                return
        }
    }

    final class 12 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        12(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                com.tkay.basead.ui.SdkBannerATView r0 = r1.a
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.H()
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }

    final class 13 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        13(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                com.tkay.basead.ui.SdkBannerATView r0 = r1.a
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.I()
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }

    final class 14 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        14(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                return
        }
    }

    final class 15 implements com.tkay.core.common.res.b.a {
        final com.tkay.core.common.ui.component.RoundImageView a;
        final com.tkay.basead.ui.SdkBannerATView b;

        15(com.tkay.basead.ui.SdkBannerATView r1, com.tkay.core.common.ui.component.RoundImageView r2) {
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
                com.tkay.basead.ui.SdkBannerATView r0 = r1.b
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.t()
                boolean r2 = android.text.TextUtils.equals(r0, r2)
                if (r2 == 0) goto L13
                com.tkay.core.common.ui.component.RoundImageView r2 = r1.a
                r2.setImageBitmap(r3)
            L13:
                return
        }
    }

    final class 2 implements com.tkay.core.common.res.b.a {
        final android.widget.ImageView a;
        final com.tkay.basead.ui.SdkBannerATView b;

        2(com.tkay.basead.ui.SdkBannerATView r1, android.widget.ImageView r2) {
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
                com.tkay.basead.ui.SdkBannerATView r0 = r1.b
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.v()
                boolean r2 = android.text.TextUtils.equals(r0, r2)
                if (r2 == 0) goto L13
                android.widget.ImageView r2 = r1.a
                r2.setImageBitmap(r3)
            L13:
                return
        }
    }

    final class 3 implements com.tkay.core.common.res.b.a {
        final com.tkay.core.common.ui.component.RoundImageView a;
        final com.tkay.basead.ui.SdkBannerATView b;

        3(com.tkay.basead.ui.SdkBannerATView r1, com.tkay.core.common.ui.component.RoundImageView r2) {
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
                com.tkay.basead.ui.SdkBannerATView r0 = r1.b
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.u()
                boolean r2 = android.text.TextUtils.equals(r0, r2)
                if (r2 == 0) goto L13
                com.tkay.core.common.ui.component.RoundImageView r2 = r1.a
                r2.setImageBitmap(r3)
            L13:
                return
        }
    }

    final class 4 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        4(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                return
        }
    }

    final class 5 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        5(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                com.tkay.basead.ui.SdkBannerATView r0 = r1.a
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.H()
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }

    final class 6 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        6(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                com.tkay.basead.ui.SdkBannerATView r0 = r1.a
                com.tkay.core.common.f.h r0 = r0.d
                java.lang.String r0 = r0.I()
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }

    final class 7 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.SdkBannerATView a;

        7(com.tkay.basead.ui.SdkBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                return
        }
    }


    final class 9 implements com.tkay.core.common.res.b.a {
        final java.lang.String a;
        final com.tkay.core.common.res.image.RecycleImageView b;
        final com.tkay.core.common.res.image.RecycleImageView c;
        final com.tkay.basead.ui.SdkBannerATView d;


        9(com.tkay.basead.ui.SdkBannerATView r1, java.lang.String r2, com.tkay.core.common.res.image.RecycleImageView r3, com.tkay.core.common.res.image.RecycleImageView r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
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
                boolean r2 = android.text.TextUtils.equals(r0, r2)
                if (r2 == 0) goto L26
                com.tkay.core.common.res.image.RecycleImageView r2 = r1.b
                r2.setImageBitmap(r3)
                com.tkay.basead.ui.SdkBannerATView r2 = r1.d
                com.tkay.basead.ui.SdkBannerATView$9$1 r0 = new com.tkay.basead.ui.SdkBannerATView$9$1
                r0.<init>(r1, r3)
                r2.post(r0)
                com.tkay.basead.ui.SdkBannerATView r2 = r1.d
                android.content.Context r2 = r2.getContext()
                android.graphics.Bitmap r2 = com.tkay.core.common.l.b.a(r2, r3)
                com.tkay.core.common.res.image.RecycleImageView r3 = r1.c
                r3.setImageBitmap(r2)
            L26:
                return
        }
    }

    public SdkBannerATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 2
            r0.w = r1
            com.tkay.basead.ui.SdkBannerATView$1 r1 = new com.tkay.basead.ui.SdkBannerATView$1
            r1.<init>(r0)
            r0.z = r1
            com.tkay.basead.ui.SdkBannerATView$8 r1 = new com.tkay.basead.ui.SdkBannerATView$8
            r1.<init>(r0)
            r0.A = r1
            return
    }

    public SdkBannerATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 2
            r0.w = r1
            com.tkay.basead.ui.SdkBannerATView$1 r1 = new com.tkay.basead.ui.SdkBannerATView$1
            r1.<init>(r0)
            r0.z = r1
            com.tkay.basead.ui.SdkBannerATView$8 r1 = new com.tkay.basead.ui.SdkBannerATView$8
            r1.<init>(r0)
            r0.A = r1
            r0.b()
            r0.c()
            return
    }

    static int a(com.tkay.basead.ui.SdkBannerATView r0) {
            int r0 = r0.w
            return r0
    }

    private int a(java.lang.String r4) {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.z
            r1 = 1
            r2 = 2
            if (r0 == 0) goto L14
            com.tkay.core.common.f.h r4 = r3.d
            com.tkay.core.common.f.z r4 = (com.tkay.core.common.f.z) r4
            int r4 = r4.Y()
            if (r4 == r1) goto L28
            r0 = 3
            goto L27
        L14:
            com.tkay.core.common.f.h r0 = r3.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.r
            if (r0 == 0) goto L27
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L27
            boolean r4 = com.tkay.basead.a.b.c.c(r4)
            if (r4 == 0) goto L27
            goto L28
        L27:
            r1 = r2
        L28:
            r3.w = r1
            return r1
    }

    static void b(com.tkay.basead.ui.SdkBannerATView r1) {
            r0 = 1
            super.b(r0)
            return
    }

    private void b(java.lang.String r15) {
            r14 = this;
            android.content.Context r0 = r14.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_banner_root"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r14.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            android.content.Context r2 = r14.getContext()
            java.lang.String r3 = "myoffer_banner_close"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r1)
            android.view.View r2 = r14.findViewById(r2)
            com.tkay.basead.ui.CloseImageView r2 = (com.tkay.basead.ui.CloseImageView) r2
            r14.t = r2
            android.content.Context r2 = r14.getContext()
            java.lang.String r3 = "myoffer_banner_container"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r1)
            android.view.View r2 = r14.findViewById(r2)
            android.widget.RelativeLayout r2 = (android.widget.RelativeLayout) r2
            android.content.Context r3 = r14.getContext()
            java.lang.String r4 = "myoffer_banner_publisher_name"
            int r3 = com.tkay.core.common.l.h.a(r3, r4, r1)
            android.view.View r3 = r14.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r4 = r14.getContext()
            java.lang.String r5 = "myoffer_banner_privacy_agreement"
            int r4 = com.tkay.core.common.l.h.a(r4, r5, r1)
            android.view.View r4 = r14.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            android.content.Context r5 = r14.getContext()
            java.lang.String r6 = "myoffer_banner_permission_manage"
            int r5 = com.tkay.core.common.l.h.a(r5, r6, r1)
            android.view.View r5 = r14.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r6 = r14.getContext()
            java.lang.String r7 = "myoffer_banner_version_name"
            int r6 = com.tkay.core.common.l.h.a(r6, r7, r1)
            android.view.View r6 = r14.findViewById(r6)
            android.widget.TextView r6 = (android.widget.TextView) r6
            com.tkay.core.common.f.i r7 = r14.c
            com.tkay.core.common.f.j r7 = r7.m
            int r7 = r7.s()
            r8 = 0
            if (r7 != 0) goto Lbd
            com.tkay.basead.ui.CloseImageView r7 = r14.t
            r7.setVisibility(r8)
            java.lang.String r7 = r14.v
            java.lang.String r9 = "728x90"
            boolean r7 = android.text.TextUtils.equals(r9, r7)
            if (r7 == 0) goto Laf
            com.tkay.basead.ui.CloseImageView r7 = r14.t
            android.view.ViewGroup$LayoutParams r7 = r7.getLayoutParams()
            android.content.Context r9 = r14.getContext()
            r10 = 1102577664(0x41b80000, float:23.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r7.width = r9
            android.content.Context r9 = r14.getContext()
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r7.height = r9
            com.tkay.basead.ui.CloseImageView r9 = r14.t
            r9.setLayoutParams(r7)
        Laf:
            com.tkay.basead.ui.CloseImageView r7 = r14.t
            com.tkay.core.common.f.i r9 = r14.c
            com.tkay.core.common.f.j r9 = r9.m
            int r9 = r9.h()
            r14.a(r7, r9)
            goto Lc4
        Lbd:
            com.tkay.basead.ui.CloseImageView r7 = r14.t
            r9 = 8
            r7.setVisibility(r9)
        Lc4:
            android.view.ViewGroup$LayoutParams r7 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r7 = (android.widget.RelativeLayout.LayoutParams) r7
            r9 = -1
            r7.width = r9
            r7.height = r9
            r0.setLayoutParams(r7)
            com.tkay.core.common.res.image.RecycleImageView r0 = new com.tkay.core.common.res.image.RecycleImageView
            android.content.Context r7 = r14.getContext()
            r0.<init>(r7)
            android.widget.ImageView$ScaleType r7 = android.widget.ImageView.ScaleType.CENTER_CROP
            r0.setScaleType(r7)
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams
            r7.<init>(r9, r9)
            r14.addView(r0, r8, r7)
            com.tkay.core.common.res.image.RecycleImageView r7 = new com.tkay.core.common.res.image.RecycleImageView
            android.content.Context r10 = r14.getContext()
            r7.<init>(r10)
            android.widget.ImageView$ScaleType r10 = android.widget.ImageView.ScaleType.FIT_CENTER
            r7.setScaleType(r10)
            android.content.Context r10 = r14.getContext()
            com.tkay.core.common.res.b r10 = com.tkay.core.common.res.b.a(r10)
            com.tkay.core.common.res.e r11 = new com.tkay.core.common.res.e
            r12 = 1
            r11.<init>(r12, r15)
            com.tkay.basead.ui.SdkBannerATView$9 r13 = new com.tkay.basead.ui.SdkBannerATView$9
            r13.<init>(r14, r15, r7, r0)
            r10.a(r11, r13)
            java.util.List<android.view.View> r15 = r14.r
            r15.add(r7)
            android.widget.RelativeLayout$LayoutParams r15 = new android.widget.RelativeLayout$LayoutParams
            r15.<init>(r9, r9)
            r0 = 13
            r15.addRule(r0)
            r14.addView(r7, r12, r15)
            com.tkay.core.common.f.h r15 = r14.d
            java.lang.String r15 = r15.v()
            boolean r15 = android.text.TextUtils.isEmpty(r15)
            if (r15 != 0) goto L15a
            android.content.Context r15 = r14.getContext()
            java.lang.String r0 = "myoffer_banner_self_ad_logo"
            int r15 = com.tkay.core.common.l.h.a(r15, r0, r1)
            android.view.View r15 = r14.findViewById(r15)
            android.widget.ImageView r15 = (android.widget.ImageView) r15
            android.content.Context r0 = r14.getContext()
            com.tkay.core.common.res.b r0 = com.tkay.core.common.res.b.a(r0)
            com.tkay.core.common.res.e r1 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r7 = r14.d
            java.lang.String r7 = r7.v()
            r1.<init>(r12, r7)
            com.tkay.basead.ui.SdkBannerATView$10 r7 = new com.tkay.basead.ui.SdkBannerATView$10
            r7.<init>(r14, r15)
            r0.a(r1, r7)
            java.util.List<android.view.View> r0 = r14.r
            r0.add(r15)
        L15a:
            com.tkay.core.common.f.h r15 = r14.d
            boolean r15 = r15.K()
            if (r15 == 0) goto L1c9
            if (r2 == 0) goto L167
            r2.setVisibility(r8)
        L167:
            if (r3 == 0) goto L17d
            r3.setVisibility(r8)
            com.tkay.core.common.f.h r15 = r14.d
            java.lang.String r15 = r15.F()
            r3.setText(r15)
            com.tkay.basead.ui.SdkBannerATView$11 r15 = new com.tkay.basead.ui.SdkBannerATView$11
            r15.<init>(r14)
            r3.setOnClickListener(r15)
        L17d:
            if (r4 == 0) goto L18a
            r4.setVisibility(r8)
            com.tkay.basead.ui.SdkBannerATView$12 r15 = new com.tkay.basead.ui.SdkBannerATView$12
            r15.<init>(r14)
            r4.setOnClickListener(r15)
        L18a:
            if (r5 == 0) goto L197
            r5.setVisibility(r8)
            com.tkay.basead.ui.SdkBannerATView$13 r15 = new com.tkay.basead.ui.SdkBannerATView$13
            r15.<init>(r14)
            r5.setOnClickListener(r15)
        L197:
            if (r6 == 0) goto L1c9
            r6.setVisibility(r8)
            android.content.Context r15 = r14.getContext()
            android.content.res.Resources r15 = r15.getResources()
            android.content.Context r0 = r14.getContext()
            java.lang.String r1 = "myoffer_panel_version"
            java.lang.String r2 = "string"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            java.lang.Object[] r1 = new java.lang.Object[r12]
            com.tkay.core.common.f.h r2 = r14.d
            java.lang.String r2 = r2.G()
            r1[r8] = r2
            java.lang.String r15 = r15.getString(r0, r1)
            r6.setText(r15)
            com.tkay.basead.ui.SdkBannerATView$14 r15 = new com.tkay.basead.ui.SdkBannerATView$14
            r15.<init>(r14)
            r6.setOnClickListener(r15)
        L1c9:
            return
    }

    static void c(com.tkay.basead.ui.SdkBannerATView r1) {
            r0 = 1
            super.b(r0)
            return
    }

    static void d(com.tkay.basead.ui.SdkBannerATView r1) {
            r0 = 1
            super.b(r0)
            return
    }

    private void o() {
            r24 = this;
            r0 = r24
            com.tkay.core.common.f.i r1 = r0.c
            com.tkay.core.common.f.j r1 = r1.m
            java.lang.String r1 = r1.r()
            com.tkay.core.common.f.h r2 = r0.d
            boolean r2 = r2 instanceof com.tkay.core.common.f.z
            if (r2 == 0) goto L17
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.u()
            goto L18
        L17:
            r2 = 0
        L18:
            int r4 = r1.hashCode()
            r5 = 3
            java.lang.String r6 = "300x250"
            java.lang.String r7 = "320x90"
            java.lang.String r8 = "320x50"
            java.lang.String r9 = "728x90"
            r11 = 2
            r13 = 1
            switch(r4) {
                case -559799608: goto L43;
                case 1507809730: goto L3b;
                case 1507809854: goto L33;
                case 1622564786: goto L2b;
                default: goto L2a;
            }
        L2a:
            goto L4b
        L2b:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L4b
            r1 = r11
            goto L4c
        L33:
            boolean r1 = r1.equals(r7)
            if (r1 == 0) goto L4b
            r1 = 0
            goto L4c
        L3b:
            boolean r1 = r1.equals(r8)
            if (r1 == 0) goto L4b
            r1 = r5
            goto L4c
        L43:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L4b
            r1 = r13
            goto L4c
        L4b:
            r1 = -1
        L4c:
            java.lang.String r4 = "myoffer_banner_ad_layout_320x50"
            if (r1 == 0) goto L95
            if (r1 == r13) goto L7e
            if (r1 == r11) goto L67
            r0.v = r8
            if (r2 != 0) goto Lab
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto Lab
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.a()
            goto Lab
        L67:
            r0.v = r9
            if (r2 != 0) goto L79
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto L79
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.N()
        L79:
            r0.u = r13
            java.lang.String r4 = "myoffer_banner_ad_layout_728x90"
            goto Lab
        L7e:
            r0.v = r6
            if (r2 != 0) goto L90
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto L90
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.c()
        L90:
            r0.u = r13
            java.lang.String r4 = "myoffer_banner_ad_layout_300x250"
            goto Lab
        L95:
            r0.v = r7
            if (r2 != 0) goto La7
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto La7
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.b()
        La7:
            r0.u = r13
            java.lang.String r4 = "myoffer_banner_ad_layout_320x90"
        Lab:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.z
            if (r1 == 0) goto Lbe
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.z r1 = (com.tkay.core.common.f.z) r1
            int r1 = r1.Y()
            if (r1 == r13) goto Lbc
            goto Ld1
        Lbc:
            r1 = r13
            goto Ld2
        Lbe:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto Ld1
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto Ld1
            boolean r1 = com.tkay.basead.a.b.c.c(r2)
            if (r1 == 0) goto Ld1
            goto Lbc
        Ld1:
            r1 = r11
        Ld2:
            r0.w = r1
            java.lang.String r14 = "myoffer_banner_version_name"
            java.lang.String r15 = "myoffer_banner_permission_manage"
            java.lang.String r3 = "myoffer_banner_privacy_agreement"
            java.lang.String r5 = "myoffer_banner_publisher_name"
            java.lang.String r11 = "myoffer_banner_container"
            java.lang.String r10 = "myoffer_banner_close"
            java.lang.String r12 = "layout"
            java.lang.String r13 = "string"
            r16 = r6
            java.lang.String r6 = "myoffer_panel_version"
            r17 = r8
            java.lang.String r8 = "id"
            r18 = r7
            r7 = 1
            if (r7 != r1) goto L2c1
            android.content.Context r1 = r24.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r4 = r24.getContext()
            java.lang.String r7 = "myoffer_banner_ad_layout_pure_picture"
            int r4 = com.tkay.core.common.l.h.a(r4, r7, r12)
            r1.inflate(r4, r0)
            android.content.Context r1 = r24.getContext()
            java.lang.String r4 = "myoffer_banner_root"
            int r1 = com.tkay.core.common.l.h.a(r1, r4, r8)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            android.content.Context r4 = r24.getContext()
            int r4 = com.tkay.core.common.l.h.a(r4, r10, r8)
            android.view.View r4 = r0.findViewById(r4)
            com.tkay.basead.ui.CloseImageView r4 = (com.tkay.basead.ui.CloseImageView) r4
            r0.t = r4
            android.content.Context r4 = r24.getContext()
            int r4 = com.tkay.core.common.l.h.a(r4, r11, r8)
            android.view.View r4 = r0.findViewById(r4)
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4
            android.content.Context r7 = r24.getContext()
            int r5 = com.tkay.core.common.l.h.a(r7, r5, r8)
            android.view.View r5 = r0.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r7 = r24.getContext()
            int r3 = com.tkay.core.common.l.h.a(r7, r3, r8)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r7 = r24.getContext()
            int r7 = com.tkay.core.common.l.h.a(r7, r15, r8)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            android.content.Context r10 = r24.getContext()
            int r10 = com.tkay.core.common.l.h.a(r10, r14, r8)
            android.view.View r10 = r0.findViewById(r10)
            android.widget.TextView r10 = (android.widget.TextView) r10
            com.tkay.core.common.f.i r11 = r0.c
            com.tkay.core.common.f.j r11 = r11.m
            int r11 = r11.s()
            if (r11 != 0) goto L1b3
            com.tkay.basead.ui.CloseImageView r11 = r0.t
            r12 = 0
            r11.setVisibility(r12)
            java.lang.String r11 = r0.v
            boolean r9 = android.text.TextUtils.equals(r9, r11)
            if (r9 == 0) goto L1a5
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            android.view.ViewGroup$LayoutParams r9 = r9.getLayoutParams()
            android.content.Context r11 = r24.getContext()
            r12 = 1102577664(0x41b80000, float:23.0)
            int r11 = com.tkay.core.common.l.h.a(r11, r12)
            r9.width = r11
            android.content.Context r11 = r24.getContext()
            int r11 = com.tkay.core.common.l.h.a(r11, r12)
            r9.height = r11
            com.tkay.basead.ui.CloseImageView r11 = r0.t
            r11.setLayoutParams(r9)
        L1a5:
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            com.tkay.core.common.f.i r11 = r0.c
            com.tkay.core.common.f.j r11 = r11.m
            int r11 = r11.h()
            r0.a(r9, r11)
            goto L1ba
        L1b3:
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            r11 = 8
            r9.setVisibility(r11)
        L1ba:
            android.view.ViewGroup$LayoutParams r9 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r9 = (android.widget.RelativeLayout.LayoutParams) r9
            r11 = -1
            r9.width = r11
            r9.height = r11
            r1.setLayoutParams(r9)
            com.tkay.core.common.res.image.RecycleImageView r1 = new com.tkay.core.common.res.image.RecycleImageView
            android.content.Context r9 = r24.getContext()
            r1.<init>(r9)
            android.widget.ImageView$ScaleType r9 = android.widget.ImageView.ScaleType.CENTER_CROP
            r1.setScaleType(r9)
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            r9.<init>(r11, r11)
            r11 = 0
            r0.addView(r1, r11, r9)
            com.tkay.core.common.res.image.RecycleImageView r9 = new com.tkay.core.common.res.image.RecycleImageView
            android.content.Context r11 = r24.getContext()
            r9.<init>(r11)
            android.widget.ImageView$ScaleType r11 = android.widget.ImageView.ScaleType.FIT_CENTER
            r9.setScaleType(r11)
            android.content.Context r11 = r24.getContext()
            com.tkay.core.common.res.b r11 = com.tkay.core.common.res.b.a(r11)
            com.tkay.core.common.res.e r12 = new com.tkay.core.common.res.e
            r14 = 1
            r12.<init>(r14, r2)
            com.tkay.basead.ui.SdkBannerATView$9 r15 = new com.tkay.basead.ui.SdkBannerATView$9
            r15.<init>(r0, r2, r9, r1)
            r11.a(r12, r15)
            java.util.List<android.view.View> r1 = r0.r
            r1.add(r9)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r2 = 13
            r1.addRule(r2)
            r0.addView(r9, r14, r1)
            com.tkay.core.common.f.h r1 = r0.d
            java.lang.String r1 = r1.v()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L253
            android.content.Context r1 = r24.getContext()
            java.lang.String r2 = "myoffer_banner_self_ad_logo"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r8)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            android.content.Context r2 = r24.getContext()
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r8 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r9 = r0.d
            java.lang.String r9 = r9.v()
            r11 = 1
            r8.<init>(r11, r9)
            com.tkay.basead.ui.SdkBannerATView$10 r9 = new com.tkay.basead.ui.SdkBannerATView$10
            r9.<init>(r0, r1)
            r2.a(r8, r9)
            java.util.List<android.view.View> r2 = r0.r
            r2.add(r1)
        L253:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1.K()
            if (r1 == 0) goto L2c0
            r1 = 0
            if (r4 == 0) goto L261
            r4.setVisibility(r1)
        L261:
            if (r5 == 0) goto L277
            r5.setVisibility(r1)
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.F()
            r5.setText(r2)
            com.tkay.basead.ui.SdkBannerATView$11 r2 = new com.tkay.basead.ui.SdkBannerATView$11
            r2.<init>(r0)
            r5.setOnClickListener(r2)
        L277:
            if (r3 == 0) goto L284
            r3.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$12 r2 = new com.tkay.basead.ui.SdkBannerATView$12
            r2.<init>(r0)
            r3.setOnClickListener(r2)
        L284:
            if (r7 == 0) goto L291
            r7.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$13 r2 = new com.tkay.basead.ui.SdkBannerATView$13
            r2.<init>(r0)
            r7.setOnClickListener(r2)
        L291:
            if (r10 == 0) goto L2c0
            r10.setVisibility(r1)
            android.content.Context r2 = r24.getContext()
            android.content.res.Resources r2 = r2.getResources()
            android.content.Context r3 = r24.getContext()
            int r3 = com.tkay.core.common.l.h.a(r3, r6, r13)
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.G()
            r4[r1] = r5
            java.lang.String r1 = r2.getString(r3, r4)
            r10.setText(r1)
            com.tkay.basead.ui.SdkBannerATView$14 r1 = new com.tkay.basead.ui.SdkBannerATView$14
            r1.<init>(r0)
            r10.setOnClickListener(r1)
        L2c0:
            return
        L2c1:
            android.content.Context r1 = r24.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r2 = r24.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r4, r12)
            r1.inflate(r2, r0)
            android.content.Context r1 = r24.getContext()
            java.lang.String r2 = "myoffer_banner_icon"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r8)
            android.view.View r1 = r0.findViewById(r1)
            com.tkay.core.common.ui.component.RoundImageView r1 = (com.tkay.core.common.ui.component.RoundImageView) r1
            android.content.Context r2 = r24.getContext()
            java.lang.String r4 = "myoffer_banner_ad_title"
            int r2 = com.tkay.core.common.l.h.a(r2, r4, r8)
            android.view.View r2 = r0.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            android.content.Context r4 = r24.getContext()
            java.lang.String r7 = "myoffer_banner_desc"
            int r4 = com.tkay.core.common.l.h.a(r4, r7, r8)
            android.view.View r4 = r0.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            android.content.Context r7 = r24.getContext()
            java.lang.String r12 = "myoffer_banner_ad_install_btn"
            int r7 = com.tkay.core.common.l.h.a(r7, r12, r8)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            android.content.Context r12 = r24.getContext()
            r19 = r6
            java.lang.String r6 = "myoffer_banner_spread_layout"
            int r6 = com.tkay.core.common.l.h.a(r12, r6, r8)
            android.view.View r6 = r0.findViewById(r6)
            com.tkay.basead.ui.SpreadAnimLayout r6 = (com.tkay.basead.ui.SpreadAnimLayout) r6
            android.content.Context r12 = r24.getContext()
            int r10 = com.tkay.core.common.l.h.a(r12, r10, r8)
            android.view.View r10 = r0.findViewById(r10)
            com.tkay.basead.ui.CloseImageView r10 = (com.tkay.basead.ui.CloseImageView) r10
            r0.t = r10
            android.content.Context r10 = r24.getContext()
            int r10 = com.tkay.core.common.l.h.a(r10, r11, r8)
            android.view.View r10 = r0.findViewById(r10)
            android.widget.RelativeLayout r10 = (android.widget.RelativeLayout) r10
            android.content.Context r11 = r24.getContext()
            int r5 = com.tkay.core.common.l.h.a(r11, r5, r8)
            android.view.View r5 = r0.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r11 = r24.getContext()
            int r3 = com.tkay.core.common.l.h.a(r11, r3, r8)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r11 = r24.getContext()
            int r11 = com.tkay.core.common.l.h.a(r11, r15, r8)
            android.view.View r11 = r0.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            android.content.Context r12 = r24.getContext()
            int r12 = com.tkay.core.common.l.h.a(r12, r14, r8)
            android.view.View r12 = r0.findViewById(r12)
            android.widget.TextView r12 = (android.widget.TextView) r12
            com.tkay.core.common.f.i r14 = r0.c
            com.tkay.core.common.f.j r14 = r14.m
            int r14 = r14.s()
            if (r14 != 0) goto L388
            r14 = 1
            goto L389
        L388:
            r14 = 0
        L389:
            if (r14 == 0) goto L3ac
            com.tkay.basead.ui.CloseImageView r15 = r0.t
            r20 = r13
            r13 = 0
            r15.setVisibility(r13)
            com.tkay.basead.ui.CloseImageView r13 = r0.t
            com.tkay.core.common.f.i r15 = r0.c
            com.tkay.core.common.f.j r15 = r15.m
            int r15 = r15.h()
            r0.a(r13, r15)
            r21 = r11
            r15 = r17
            r11 = r18
            r17 = r3
        L3a8:
            r18 = r5
            goto L44a
        L3ac:
            r20 = r13
            com.tkay.basead.ui.CloseImageView r13 = r0.t
            r15 = 8
            r13.setVisibility(r15)
            java.lang.String r13 = r0.v
            int r15 = r13.hashCode()
            r21 = r11
            r11 = 1507809730(0x59df59c2, float:7.858451E15)
            if (r15 == r11) goto L3e9
            r11 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r15 == r11) goto L3dd
            r11 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r15 == r11) goto L3d1
        L3cc:
            r15 = r17
            r11 = r18
            goto L3f5
        L3d1:
            boolean r11 = r13.equals(r9)
            if (r11 == 0) goto L3cc
            r15 = r17
            r11 = r18
            r13 = 2
            goto L3f6
        L3dd:
            r11 = r18
            boolean r13 = r13.equals(r11)
            r15 = r17
            if (r13 == 0) goto L3f5
            r13 = 1
            goto L3f6
        L3e9:
            r15 = r17
            r11 = r18
            boolean r13 = r13.equals(r15)
            if (r13 == 0) goto L3f5
            r13 = 0
            goto L3f6
        L3f5:
            r13 = -1
        L3f6:
            if (r13 == 0) goto L431
            r17 = r3
            r3 = 1
            if (r13 == r3) goto L419
            r3 = 2
            if (r13 == r3) goto L401
            goto L3a8
        L401:
            android.view.ViewGroup$LayoutParams r3 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            android.content.Context r13 = r24.getContext()
            r18 = r5
            r5 = 1101004800(0x41a00000, float:20.0)
            int r5 = com.tkay.core.common.l.h.a(r13, r5)
            r3.rightMargin = r5
            r6.setLayoutParams(r3)
            goto L44a
        L419:
            r18 = r5
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            android.content.Context r5 = r24.getContext()
            r13 = 1092616192(0x41200000, float:10.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r13)
            r3.rightMargin = r5
            r2.setLayoutParams(r3)
            goto L44a
        L431:
            r17 = r3
            r18 = r5
            r13 = 1092616192(0x41200000, float:10.0)
            android.view.ViewGroup$LayoutParams r3 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            android.content.Context r5 = r24.getContext()
            int r5 = com.tkay.core.common.l.h.a(r5, r13)
            r3.rightMargin = r5
            r6.setLayoutParams(r3)
        L44a:
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.t()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L487
            android.view.ViewGroup$LayoutParams r3 = r1.getLayoutParams()
            r5 = 2
            r1.setRadiusInDip(r5)
            r5 = 1
            r1.setNeedRadiu(r5)
            android.content.Context r13 = r24.getContext()
            com.tkay.core.common.res.b r13 = com.tkay.core.common.res.b.a(r13)
            com.tkay.core.common.res.e r5 = new com.tkay.core.common.res.e
            r22 = r10
            com.tkay.core.common.f.h r10 = r0.d
            java.lang.String r10 = r10.t()
            r23 = r12
            r12 = 1
            r5.<init>(r12, r10)
            int r10 = r3.width
            int r3 = r3.height
            com.tkay.basead.ui.SdkBannerATView$15 r12 = new com.tkay.basead.ui.SdkBannerATView$15
            r12.<init>(r0, r1)
            r13.a(r5, r10, r3, r12)
            goto L49c
        L487:
            r22 = r10
            r23 = r12
            com.tkay.basead.ui.a.a.a(r1)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            if (r3 == 0) goto L49c
            r5 = 0
            r3.leftMargin = r5
            r2.setLayoutParams(r3)
        L49c:
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r1)
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.r()
            r2.setText(r3)
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r2)
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.w()
            r7.setText(r3)
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r7)
            if (r4 == 0) goto L4cd
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.s()
            r4.setText(r3)
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r4)
        L4cd:
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.v()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L506
            android.content.Context r3 = r24.getContext()
            java.lang.String r5 = "myoffer_banner_self_ad_logo"
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r8)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.ImageView r3 = (android.widget.ImageView) r3
            android.content.Context r5 = r24.getContext()
            com.tkay.core.common.res.b r5 = com.tkay.core.common.res.b.a(r5)
            com.tkay.core.common.res.e r10 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r12 = r0.d
            java.lang.String r12 = r12.v()
            r13 = 1
            r10.<init>(r13, r12)
            com.tkay.basead.ui.SdkBannerATView$2 r12 = new com.tkay.basead.ui.SdkBannerATView$2
            r12.<init>(r0, r3)
            r5.a(r10, r12)
            goto L507
        L506:
            r3 = 0
        L507:
            java.util.List<android.view.View> r5 = r0.r
            r5.add(r3)
            boolean r5 = r0.u
            if (r5 == 0) goto L558
            android.content.Context r5 = r24.getContext()
            java.lang.String r10 = "myoffer_banner_main_image"
            int r5 = com.tkay.core.common.l.h.a(r5, r10, r8)
            android.view.View r5 = r0.findViewById(r5)
            com.tkay.core.common.ui.component.RoundImageView r5 = (com.tkay.core.common.ui.component.RoundImageView) r5
            com.tkay.core.common.f.h r8 = r0.d
            java.lang.String r8 = r8.u()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L559
            r5.getLayoutParams()
            r8 = 2
            r5.setRadiusInDip(r8)
            r8 = 1
            r5.setNeedRadiu(r8)
            android.content.Context r10 = r24.getContext()
            com.tkay.core.common.res.b r10 = com.tkay.core.common.res.b.a(r10)
            com.tkay.core.common.res.e r12 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r13 = r0.d
            java.lang.String r13 = r13.u()
            r12.<init>(r8, r13)
            com.tkay.basead.ui.SdkBannerATView$3 r8 = new com.tkay.basead.ui.SdkBannerATView$3
            r8.<init>(r0, r5)
            r10.a(r12, r8)
            java.util.List<android.view.View> r8 = r0.r
            r8.add(r5)
            goto L559
        L558:
            r5 = 0
        L559:
            java.util.List<android.view.View> r8 = r0.r
            r8.add(r5)
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.w()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L57d
            r5 = 0
            r6.setVisibility(r5)
            r7.setVisibility(r5)
            r0.s = r7
            r6 = r16
        L575:
            r10 = r22
            r12 = r23
            r7 = 2
        L57a:
            r13 = -1
            goto L66d
        L57d:
            r5 = 8
            r6.setVisibility(r5)
            r7.setVisibility(r5)
            java.lang.String r5 = r0.v
            int r6 = r5.hashCode()
            switch(r6) {
                case -559799608: goto L5af;
                case 1507809730: goto L5a5;
                case 1507809854: goto L59b;
                case 1622564786: goto L591;
                default: goto L58e;
            }
        L58e:
            r6 = r16
            goto L5b9
        L591:
            boolean r5 = r5.equals(r9)
            if (r5 == 0) goto L58e
            r6 = r16
            r5 = 2
            goto L5ba
        L59b:
            boolean r5 = r5.equals(r11)
            if (r5 == 0) goto L58e
            r6 = r16
            r5 = 0
            goto L5ba
        L5a5:
            boolean r5 = r5.equals(r15)
            if (r5 == 0) goto L58e
            r6 = r16
            r5 = 3
            goto L5ba
        L5af:
            r6 = r16
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L5b9
            r5 = 1
            goto L5ba
        L5b9:
            r5 = -1
        L5ba:
            if (r5 == 0) goto L655
            r7 = 1
            if (r5 == r7) goto L575
            r7 = 2
            if (r5 == r7) goto L608
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            r5 = 11
            r1.addRule(r5)
            if (r14 == 0) goto L5dc
            android.content.Context r5 = r24.getContext()
            r8 = 1099956224(0x41900000, float:18.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            goto L5e8
        L5dc:
            android.content.Context r5 = r24.getContext()
            r8 = 1092616192(0x41200000, float:10.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
        L5e8:
            r2.setLayoutParams(r1)
            if (r23 == 0) goto L605
            android.view.ViewGroup$LayoutParams r1 = r23.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1113325568(0x425c0000, float:55.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r12 = r23
            r12.setLayoutParams(r1)
            goto L651
        L605:
            r12 = r23
            goto L651
        L608:
            r12 = r23
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1099956224(0x41900000, float:18.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r2.setLayoutParams(r1)
            if (r4 == 0) goto L636
            android.view.ViewGroup$LayoutParams r1 = r4.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1122238464(0x42e40000, float:114.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r4.setLayoutParams(r1)
        L636:
            if (r22 == 0) goto L651
            android.view.ViewGroup$LayoutParams r1 = r22.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1122238464(0x42e40000, float:114.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r10 = r22
            r10.setLayoutParams(r1)
            goto L57a
        L651:
            r10 = r22
            goto L57a
        L655:
            r10 = r22
            r12 = r23
            r7 = 2
            android.view.ViewGroup$LayoutParams r5 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r5 = (android.widget.RelativeLayout.LayoutParams) r5
            r8 = 15
            r5.addRule(r8)
            r8 = 6
            r13 = -1
            r5.addRule(r8, r13)
            r1.setLayoutParams(r5)
        L66d:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1.K()
            if (r1 == 0) goto L7a1
            r1 = 8
            r4.setVisibility(r1)
            java.lang.String r1 = r0.v
            int r2 = r1.hashCode()
            switch(r2) {
                case -559799608: goto L69c;
                case 1507809730: goto L694;
                case 1507809854: goto L68c;
                case 1622564786: goto L684;
                default: goto L683;
            }
        L683:
            goto L6a4
        L684:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L6a4
            r1 = r7
            goto L6a5
        L68c:
            boolean r1 = r1.equals(r11)
            if (r1 == 0) goto L6a4
            r1 = 1
            goto L6a5
        L694:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L6a4
            r1 = 3
            goto L6a5
        L69c:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L6a4
            r1 = 0
            goto L6a5
        L6a4:
            r1 = r13
        L6a5:
            if (r1 == 0) goto L6a8
            goto L6bf
        L6a8:
            if (r3 == 0) goto L6bf
            android.view.ViewGroup$LayoutParams r1 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r2 = r24.getContext()
            r4 = 1090519040(0x41000000, float:8.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r4)
            r1.topMargin = r2
            r3.setLayoutParams(r1)
        L6bf:
            r1 = 0
            if (r10 == 0) goto L6c5
            r10.setVisibility(r1)
        L6c5:
            if (r18 == 0) goto L6dd
            r5 = r18
            r5.setVisibility(r1)
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.F()
            r5.setText(r2)
            com.tkay.basead.ui.SdkBannerATView$4 r2 = new com.tkay.basead.ui.SdkBannerATView$4
            r2.<init>(r0)
            r5.setOnClickListener(r2)
        L6dd:
            if (r17 == 0) goto L6ec
            r3 = r17
            r3.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$5 r2 = new com.tkay.basead.ui.SdkBannerATView$5
            r2.<init>(r0)
            r3.setOnClickListener(r2)
        L6ec:
            if (r21 == 0) goto L6fb
            r2 = r21
            r2.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$6 r3 = new com.tkay.basead.ui.SdkBannerATView$6
            r3.<init>(r0)
            r2.setOnClickListener(r3)
        L6fb:
            if (r12 == 0) goto L7e8
            r12.setVisibility(r1)
            java.lang.String r1 = r0.v
            int r2 = r1.hashCode()
            switch(r2) {
                case -559799608: goto L722;
                case 1507809730: goto L71a;
                case 1507809854: goto L712;
                case 1622564786: goto L70a;
                default: goto L709;
            }
        L709:
            goto L72a
        L70a:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L72a
            r5 = 1
            goto L72b
        L712:
            boolean r1 = r1.equals(r11)
            if (r1 == 0) goto L72a
            r5 = 0
            goto L72b
        L71a:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L72a
            r5 = 3
            goto L72b
        L722:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L72a
            r5 = r7
            goto L72b
        L72a:
            r5 = r13
        L72b:
            if (r5 == 0) goto L757
            r1 = 1
            if (r5 == r1) goto L757
            android.content.Context r2 = r24.getContext()
            android.content.res.Resources r2 = r2.getResources()
            android.content.Context r3 = r24.getContext()
            r5 = r19
            r4 = r20
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r4)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.tkay.core.common.f.h r4 = r0.d
            java.lang.String r4 = r4.G()
            r5 = 0
            r1[r5] = r4
            java.lang.String r1 = r2.getString(r3, r1)
            r12.setText(r1)
            goto L798
        L757:
            r5 = r19
            r4 = r20
            android.content.Context r1 = r24.getContext()
            android.content.res.Resources r1 = r1.getResources()
            android.content.Context r2 = r24.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r5, r4)
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.G()
            r4.append(r5)
            java.lang.String r5 = "  "
            r4.append(r5)
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.F()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r5 = 0
            r3[r5] = r4
            java.lang.String r1 = r1.getString(r2, r3)
            r12.setText(r1)
        L798:
            com.tkay.basead.ui.SdkBannerATView$7 r1 = new com.tkay.basead.ui.SdkBannerATView$7
            r1.<init>(r0)
            r12.setOnClickListener(r1)
            return
        L7a1:
            r3 = 1
            r5 = 0
            r4.setVisibility(r5)
            java.lang.String r1 = r0.v
            int r4 = r1.hashCode()
            switch(r4) {
                case -559799608: goto L7c7;
                case 1507809730: goto L7c0;
                case 1507809854: goto L7b8;
                case 1622564786: goto L7b0;
                default: goto L7af;
            }
        L7af:
            goto L7cf
        L7b0:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L7cf
            r5 = 3
            goto L7d0
        L7b8:
            boolean r1 = r1.equals(r11)
            if (r1 == 0) goto L7cf
            r5 = r3
            goto L7d0
        L7c0:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L7cf
            goto L7d0
        L7c7:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L7cf
            r5 = r7
            goto L7d0
        L7cf:
            r5 = r13
        L7d0:
            if (r5 == 0) goto L7d3
            goto L7e8
        L7d3:
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r3 = r24.getContext()
            r4 = 1090519040(0x41000000, float:8.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            r1.topMargin = r3
            r2.setLayoutParams(r1)
        L7e8:
            return
    }

    private void p() {
            r21 = this;
            r0 = r21
            android.content.Context r1 = r21.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "myoffer_banner_icon"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            com.tkay.core.common.ui.component.RoundImageView r1 = (com.tkay.core.common.ui.component.RoundImageView) r1
            android.content.Context r3 = r21.getContext()
            java.lang.String r4 = "myoffer_banner_ad_title"
            int r3 = com.tkay.core.common.l.h.a(r3, r4, r2)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r4 = r21.getContext()
            java.lang.String r5 = "myoffer_banner_desc"
            int r4 = com.tkay.core.common.l.h.a(r4, r5, r2)
            android.view.View r4 = r0.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            android.content.Context r5 = r21.getContext()
            java.lang.String r6 = "myoffer_banner_ad_install_btn"
            int r5 = com.tkay.core.common.l.h.a(r5, r6, r2)
            android.view.View r5 = r0.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r6 = r21.getContext()
            java.lang.String r7 = "myoffer_banner_spread_layout"
            int r6 = com.tkay.core.common.l.h.a(r6, r7, r2)
            android.view.View r6 = r0.findViewById(r6)
            com.tkay.basead.ui.SpreadAnimLayout r6 = (com.tkay.basead.ui.SpreadAnimLayout) r6
            android.content.Context r7 = r21.getContext()
            java.lang.String r8 = "myoffer_banner_close"
            int r7 = com.tkay.core.common.l.h.a(r7, r8, r2)
            android.view.View r7 = r0.findViewById(r7)
            com.tkay.basead.ui.CloseImageView r7 = (com.tkay.basead.ui.CloseImageView) r7
            r0.t = r7
            android.content.Context r7 = r21.getContext()
            java.lang.String r8 = "myoffer_banner_container"
            int r7 = com.tkay.core.common.l.h.a(r7, r8, r2)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.RelativeLayout r7 = (android.widget.RelativeLayout) r7
            android.content.Context r8 = r21.getContext()
            java.lang.String r9 = "myoffer_banner_publisher_name"
            int r8 = com.tkay.core.common.l.h.a(r8, r9, r2)
            android.view.View r8 = r0.findViewById(r8)
            android.widget.TextView r8 = (android.widget.TextView) r8
            android.content.Context r9 = r21.getContext()
            java.lang.String r10 = "myoffer_banner_privacy_agreement"
            int r9 = com.tkay.core.common.l.h.a(r9, r10, r2)
            android.view.View r9 = r0.findViewById(r9)
            android.widget.TextView r9 = (android.widget.TextView) r9
            android.content.Context r10 = r21.getContext()
            java.lang.String r11 = "myoffer_banner_permission_manage"
            int r10 = com.tkay.core.common.l.h.a(r10, r11, r2)
            android.view.View r10 = r0.findViewById(r10)
            android.widget.TextView r10 = (android.widget.TextView) r10
            android.content.Context r11 = r21.getContext()
            java.lang.String r12 = "myoffer_banner_version_name"
            int r11 = com.tkay.core.common.l.h.a(r11, r12, r2)
            android.view.View r11 = r0.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            com.tkay.core.common.f.i r12 = r0.c
            com.tkay.core.common.f.j r12 = r12.m
            int r12 = r12.s()
            if (r12 != 0) goto Lc2
            r12 = 1
            goto Lc3
        Lc2:
            r12 = 0
        Lc3:
            java.lang.String r13 = "728x90"
            java.lang.String r15 = "320x90"
            java.lang.String r14 = "320x50"
            r16 = r10
            if (r12 == 0) goto Le6
            com.tkay.basead.ui.CloseImageView r10 = r0.t
            r17 = r9
            r9 = 0
            r10.setVisibility(r9)
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            com.tkay.core.common.f.i r10 = r0.c
            com.tkay.core.common.f.j r10 = r10.m
            int r10 = r10.h()
            r0.a(r9, r10)
            r18 = r8
            goto L16a
        Le6:
            r17 = r9
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            r10 = 8
            r9.setVisibility(r10)
            java.lang.String r9 = r0.v
            int r10 = r9.hashCode()
            r18 = r8
            r8 = 1507809730(0x59df59c2, float:7.858451E15)
            if (r10 == r8) goto L117
            r8 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r10 == r8) goto L10f
            r8 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r10 == r8) goto L107
            goto L11f
        L107:
            boolean r8 = r9.equals(r13)
            if (r8 == 0) goto L11f
            r8 = 2
            goto L120
        L10f:
            boolean r8 = r9.equals(r15)
            if (r8 == 0) goto L11f
            r8 = 1
            goto L120
        L117:
            boolean r8 = r9.equals(r14)
            if (r8 == 0) goto L11f
            r8 = 0
            goto L120
        L11f:
            r8 = -1
        L120:
            if (r8 == 0) goto L155
            r9 = 1
            if (r8 == r9) goto L13f
            r9 = 2
            if (r8 == r9) goto L129
            goto L16a
        L129:
            android.view.ViewGroup$LayoutParams r8 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8
            android.content.Context r9 = r21.getContext()
            r10 = 1101004800(0x41a00000, float:20.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r8.rightMargin = r9
            r6.setLayoutParams(r8)
            goto L16a
        L13f:
            android.view.ViewGroup$LayoutParams r8 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8
            android.content.Context r9 = r21.getContext()
            r10 = 1092616192(0x41200000, float:10.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r8.rightMargin = r9
            r3.setLayoutParams(r8)
            goto L16a
        L155:
            r10 = 1092616192(0x41200000, float:10.0)
            android.view.ViewGroup$LayoutParams r8 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8
            android.content.Context r9 = r21.getContext()
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r8.rightMargin = r9
            r6.setLayoutParams(r8)
        L16a:
            com.tkay.core.common.f.h r8 = r0.d
            java.lang.String r8 = r8.t()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L1a7
            android.view.ViewGroup$LayoutParams r8 = r1.getLayoutParams()
            r9 = 2
            r1.setRadiusInDip(r9)
            r9 = 1
            r1.setNeedRadiu(r9)
            android.content.Context r10 = r21.getContext()
            com.tkay.core.common.res.b r10 = com.tkay.core.common.res.b.a(r10)
            com.tkay.core.common.res.e r9 = new com.tkay.core.common.res.e
            r19 = r7
            com.tkay.core.common.f.h r7 = r0.d
            java.lang.String r7 = r7.t()
            r20 = r11
            r11 = 1
            r9.<init>(r11, r7)
            int r7 = r8.width
            int r8 = r8.height
            com.tkay.basead.ui.SdkBannerATView$15 r11 = new com.tkay.basead.ui.SdkBannerATView$15
            r11.<init>(r0, r1)
            r10.a(r9, r7, r8, r11)
            goto L1bc
        L1a7:
            r19 = r7
            r20 = r11
            com.tkay.basead.ui.a.a.a(r1)
            android.view.ViewGroup$LayoutParams r7 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r7 = (android.widget.RelativeLayout.LayoutParams) r7
            if (r7 == 0) goto L1bc
            r8 = 0
            r7.leftMargin = r8
            r3.setLayoutParams(r7)
        L1bc:
            java.util.List<android.view.View> r7 = r0.r
            r7.add(r1)
            com.tkay.core.common.f.h r7 = r0.d
            java.lang.String r7 = r7.r()
            r3.setText(r7)
            java.util.List<android.view.View> r7 = r0.r
            r7.add(r3)
            com.tkay.core.common.f.h r7 = r0.d
            java.lang.String r7 = r7.w()
            r5.setText(r7)
            java.util.List<android.view.View> r7 = r0.r
            r7.add(r5)
            if (r4 == 0) goto L1ed
            com.tkay.core.common.f.h r7 = r0.d
            java.lang.String r7 = r7.s()
            r4.setText(r7)
            java.util.List<android.view.View> r7 = r0.r
            r7.add(r4)
        L1ed:
            com.tkay.core.common.f.h r7 = r0.d
            java.lang.String r7 = r7.v()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L226
            android.content.Context r7 = r21.getContext()
            java.lang.String r9 = "myoffer_banner_self_ad_logo"
            int r7 = com.tkay.core.common.l.h.a(r7, r9, r2)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.ImageView r7 = (android.widget.ImageView) r7
            android.content.Context r9 = r21.getContext()
            com.tkay.core.common.res.b r9 = com.tkay.core.common.res.b.a(r9)
            com.tkay.core.common.res.e r10 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r11 = r0.d
            java.lang.String r11 = r11.v()
            r8 = 1
            r10.<init>(r8, r11)
            com.tkay.basead.ui.SdkBannerATView$2 r8 = new com.tkay.basead.ui.SdkBannerATView$2
            r8.<init>(r0, r7)
            r9.a(r10, r8)
            goto L227
        L226:
            r7 = 0
        L227:
            java.util.List<android.view.View> r8 = r0.r
            r8.add(r7)
            boolean r8 = r0.u
            if (r8 == 0) goto L279
            android.content.Context r8 = r21.getContext()
            java.lang.String r9 = "myoffer_banner_main_image"
            int r2 = com.tkay.core.common.l.h.a(r8, r9, r2)
            android.view.View r2 = r0.findViewById(r2)
            r8 = r2
            com.tkay.core.common.ui.component.RoundImageView r8 = (com.tkay.core.common.ui.component.RoundImageView) r8
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.u()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L27a
            r8.getLayoutParams()
            r2 = 2
            r8.setRadiusInDip(r2)
            r2 = 1
            r8.setNeedRadiu(r2)
            android.content.Context r9 = r21.getContext()
            com.tkay.core.common.res.b r9 = com.tkay.core.common.res.b.a(r9)
            com.tkay.core.common.res.e r10 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r11 = r0.d
            java.lang.String r11 = r11.u()
            r10.<init>(r2, r11)
            com.tkay.basead.ui.SdkBannerATView$3 r2 = new com.tkay.basead.ui.SdkBannerATView$3
            r2.<init>(r0, r8)
            r9.a(r10, r2)
            java.util.List<android.view.View> r2 = r0.r
            r2.add(r8)
            goto L27a
        L279:
            r8 = 0
        L27a:
            java.util.List<android.view.View> r2 = r0.r
            r2.add(r8)
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.w()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r8 = 3
            java.lang.String r9 = "300x250"
            if (r2 != 0) goto L29f
            r2 = 0
            r6.setVisibility(r2)
            r5.setVisibility(r2)
            r0.s = r5
        L297:
            r6 = r19
            r11 = r20
            r5 = 2
        L29c:
            r12 = -1
            goto L381
        L29f:
            r2 = 8
            r6.setVisibility(r2)
            r5.setVisibility(r2)
            java.lang.String r2 = r0.v
            int r5 = r2.hashCode()
            switch(r5) {
                case -559799608: goto L2c9;
                case 1507809730: goto L2c1;
                case 1507809854: goto L2b9;
                case 1622564786: goto L2b1;
                default: goto L2b0;
            }
        L2b0:
            goto L2d1
        L2b1:
            boolean r2 = r2.equals(r13)
            if (r2 == 0) goto L2d1
            r2 = 2
            goto L2d2
        L2b9:
            boolean r2 = r2.equals(r15)
            if (r2 == 0) goto L2d1
            r2 = 0
            goto L2d2
        L2c1:
            boolean r2 = r2.equals(r14)
            if (r2 == 0) goto L2d1
            r2 = r8
            goto L2d2
        L2c9:
            boolean r2 = r2.equals(r9)
            if (r2 == 0) goto L2d1
            r2 = 1
            goto L2d2
        L2d1:
            r2 = -1
        L2d2:
            if (r2 == 0) goto L369
            r5 = 1
            if (r2 == r5) goto L297
            r1 = 1099956224(0x41900000, float:18.0)
            r5 = 2
            if (r2 == r5) goto L320
            android.view.ViewGroup$LayoutParams r2 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            r6 = 11
            r2.addRule(r6)
            if (r12 == 0) goto L2f4
            android.content.Context r6 = r21.getContext()
            int r1 = com.tkay.core.common.l.h.a(r6, r1)
            r2.rightMargin = r1
            goto L300
        L2f4:
            android.content.Context r1 = r21.getContext()
            r6 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r6)
            r2.rightMargin = r1
        L300:
            r3.setLayoutParams(r2)
            if (r20 == 0) goto L31d
            android.view.ViewGroup$LayoutParams r1 = r20.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r2 = r21.getContext()
            r6 = 1113325568(0x425c0000, float:55.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r6)
            r1.rightMargin = r2
            r11 = r20
            r11.setLayoutParams(r1)
            goto L365
        L31d:
            r11 = r20
            goto L365
        L320:
            r11 = r20
            android.view.ViewGroup$LayoutParams r2 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            android.content.Context r6 = r21.getContext()
            int r1 = com.tkay.core.common.l.h.a(r6, r1)
            r2.rightMargin = r1
            r3.setLayoutParams(r2)
            r1 = 1122238464(0x42e40000, float:114.0)
            if (r4 == 0) goto L34c
            android.view.ViewGroup$LayoutParams r2 = r4.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            android.content.Context r6 = r21.getContext()
            int r6 = com.tkay.core.common.l.h.a(r6, r1)
            r2.rightMargin = r6
            r4.setLayoutParams(r2)
        L34c:
            if (r19 == 0) goto L365
            android.view.ViewGroup$LayoutParams r2 = r19.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            android.content.Context r6 = r21.getContext()
            int r1 = com.tkay.core.common.l.h.a(r6, r1)
            r2.rightMargin = r1
            r6 = r19
            r6.setLayoutParams(r2)
            goto L29c
        L365:
            r6 = r19
            goto L29c
        L369:
            r6 = r19
            r11 = r20
            r5 = 2
            android.view.ViewGroup$LayoutParams r2 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            r10 = 15
            r2.addRule(r10)
            r10 = 6
            r12 = -1
            r2.addRule(r10, r12)
            r1.setLayoutParams(r2)
        L381:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1.K()
            r2 = 1090519040(0x41000000, float:8.0)
            if (r1 == 0) goto L4b0
            r1 = 8
            r4.setVisibility(r1)
            java.lang.String r1 = r0.v
            int r3 = r1.hashCode()
            switch(r3) {
                case -559799608: goto L3b2;
                case 1507809730: goto L3aa;
                case 1507809854: goto L3a2;
                case 1622564786: goto L39a;
                default: goto L399;
            }
        L399:
            goto L3ba
        L39a:
            boolean r1 = r1.equals(r13)
            if (r1 == 0) goto L3ba
            r1 = r5
            goto L3bb
        L3a2:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L3ba
            r1 = 1
            goto L3bb
        L3aa:
            boolean r1 = r1.equals(r14)
            if (r1 == 0) goto L3ba
            r1 = r8
            goto L3bb
        L3b2:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L3ba
            r1 = 0
            goto L3bb
        L3ba:
            r1 = r12
        L3bb:
            if (r1 == 0) goto L3be
            goto L3d3
        L3be:
            if (r7 == 0) goto L3d3
            android.view.ViewGroup$LayoutParams r1 = r7.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r3 = r21.getContext()
            int r2 = com.tkay.core.common.l.h.a(r3, r2)
            r1.topMargin = r2
            r7.setLayoutParams(r1)
        L3d3:
            r1 = 0
            if (r6 == 0) goto L3d9
            r6.setVisibility(r1)
        L3d9:
            if (r18 == 0) goto L3f1
            r2 = r18
            r2.setVisibility(r1)
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.F()
            r2.setText(r3)
            com.tkay.basead.ui.SdkBannerATView$4 r3 = new com.tkay.basead.ui.SdkBannerATView$4
            r3.<init>(r0)
            r2.setOnClickListener(r3)
        L3f1:
            if (r17 == 0) goto L400
            r2 = r17
            r2.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$5 r3 = new com.tkay.basead.ui.SdkBannerATView$5
            r3.<init>(r0)
            r2.setOnClickListener(r3)
        L400:
            if (r16 == 0) goto L40f
            r10 = r16
            r10.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$6 r2 = new com.tkay.basead.ui.SdkBannerATView$6
            r2.<init>(r0)
            r10.setOnClickListener(r2)
        L40f:
            if (r11 == 0) goto L4f6
            r11.setVisibility(r1)
            java.lang.String r1 = r0.v
            int r2 = r1.hashCode()
            switch(r2) {
                case -559799608: goto L436;
                case 1507809730: goto L42e;
                case 1507809854: goto L426;
                case 1622564786: goto L41e;
                default: goto L41d;
            }
        L41d:
            goto L43d
        L41e:
            boolean r1 = r1.equals(r13)
            if (r1 == 0) goto L43d
            r5 = 1
            goto L43e
        L426:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L43d
            r5 = 0
            goto L43e
        L42e:
            boolean r1 = r1.equals(r14)
            if (r1 == 0) goto L43d
            r5 = r8
            goto L43e
        L436:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L43d
            goto L43e
        L43d:
            r5 = r12
        L43e:
            java.lang.String r1 = "string"
            java.lang.String r2 = "myoffer_panel_version"
            if (r5 == 0) goto L46a
            r3 = 1
            if (r5 == r3) goto L46a
            android.content.Context r4 = r21.getContext()
            android.content.res.Resources r4 = r4.getResources()
            android.content.Context r5 = r21.getContext()
            int r1 = com.tkay.core.common.l.h.a(r5, r2, r1)
            java.lang.Object[] r2 = new java.lang.Object[r3]
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.G()
            r5 = 0
            r2[r5] = r3
            java.lang.String r1 = r4.getString(r1, r2)
            r11.setText(r1)
            goto L4a7
        L46a:
            android.content.Context r3 = r21.getContext()
            android.content.res.Resources r3 = r3.getResources()
            android.content.Context r4 = r21.getContext()
            int r1 = com.tkay.core.common.l.h.a(r4, r2, r1)
            r6 = 1
            java.lang.Object[] r2 = new java.lang.Object[r6]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.G()
            r4.append(r5)
            java.lang.String r5 = "  "
            r4.append(r5)
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.F()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r7 = 0
            r2[r7] = r4
            java.lang.String r1 = r3.getString(r1, r2)
            r11.setText(r1)
        L4a7:
            com.tkay.basead.ui.SdkBannerATView$7 r1 = new com.tkay.basead.ui.SdkBannerATView$7
            r1.<init>(r0)
            r11.setOnClickListener(r1)
            return
        L4b0:
            r6 = 1
            r7 = 0
            r4.setVisibility(r7)
            java.lang.String r1 = r0.v
            int r4 = r1.hashCode()
            switch(r4) {
                case -559799608: goto L4d7;
                case 1507809730: goto L4cf;
                case 1507809854: goto L4c7;
                case 1622564786: goto L4bf;
                default: goto L4be;
            }
        L4be:
            goto L4df
        L4bf:
            boolean r1 = r1.equals(r13)
            if (r1 == 0) goto L4df
            r13 = r8
            goto L4e0
        L4c7:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L4df
            r13 = r6
            goto L4e0
        L4cf:
            boolean r1 = r1.equals(r14)
            if (r1 == 0) goto L4df
            r13 = r7
            goto L4e0
        L4d7:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L4df
            r13 = r5
            goto L4e0
        L4df:
            r13 = r12
        L4e0:
            if (r13 == 0) goto L4e3
            goto L4f6
        L4e3:
            android.view.ViewGroup$LayoutParams r1 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r4 = r21.getContext()
            int r2 = com.tkay.core.common.l.h.a(r4, r2)
            r1.topMargin = r2
            r3.setLayoutParams(r1)
        L4f6:
            return
    }

    @Override
    protected final void a() {
            r24 = this;
            r0 = r24
            com.tkay.core.common.f.i r1 = r0.c
            com.tkay.core.common.f.j r1 = r1.m
            java.lang.String r1 = r1.r()
            com.tkay.core.common.f.h r2 = r0.d
            boolean r2 = r2 instanceof com.tkay.core.common.f.z
            if (r2 == 0) goto L17
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.u()
            goto L18
        L17:
            r2 = 0
        L18:
            int r4 = r1.hashCode()
            r5 = 3
            java.lang.String r6 = "300x250"
            java.lang.String r7 = "320x90"
            java.lang.String r8 = "320x50"
            java.lang.String r9 = "728x90"
            r11 = 2
            r13 = 1
            switch(r4) {
                case -559799608: goto L43;
                case 1507809730: goto L3b;
                case 1507809854: goto L33;
                case 1622564786: goto L2b;
                default: goto L2a;
            }
        L2a:
            goto L4b
        L2b:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L4b
            r1 = r11
            goto L4c
        L33:
            boolean r1 = r1.equals(r7)
            if (r1 == 0) goto L4b
            r1 = 0
            goto L4c
        L3b:
            boolean r1 = r1.equals(r8)
            if (r1 == 0) goto L4b
            r1 = r5
            goto L4c
        L43:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L4b
            r1 = r13
            goto L4c
        L4b:
            r1 = -1
        L4c:
            java.lang.String r4 = "myoffer_banner_ad_layout_320x50"
            if (r1 == 0) goto L95
            if (r1 == r13) goto L7e
            if (r1 == r11) goto L67
            r0.v = r8
            if (r2 != 0) goto Lab
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto Lab
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.a()
            goto Lab
        L67:
            r0.v = r9
            if (r2 != 0) goto L79
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto L79
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.N()
        L79:
            r0.u = r13
            java.lang.String r4 = "myoffer_banner_ad_layout_728x90"
            goto Lab
        L7e:
            r0.v = r6
            if (r2 != 0) goto L90
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto L90
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.c()
        L90:
            r0.u = r13
            java.lang.String r4 = "myoffer_banner_ad_layout_300x250"
            goto Lab
        L95:
            r0.v = r7
            if (r2 != 0) goto La7
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto La7
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            java.lang.String r2 = r1.b()
        La7:
            r0.u = r13
            java.lang.String r4 = "myoffer_banner_ad_layout_320x90"
        Lab:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.z
            if (r1 == 0) goto Lbe
            com.tkay.core.common.f.h r1 = r0.d
            com.tkay.core.common.f.z r1 = (com.tkay.core.common.f.z) r1
            int r1 = r1.Y()
            if (r1 == r13) goto Lbc
            goto Ld1
        Lbc:
            r1 = r13
            goto Ld2
        Lbe:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.r
            if (r1 == 0) goto Ld1
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto Ld1
            boolean r1 = com.tkay.basead.a.b.c.c(r2)
            if (r1 == 0) goto Ld1
            goto Lbc
        Ld1:
            r1 = r11
        Ld2:
            r0.w = r1
            java.lang.String r14 = "myoffer_banner_version_name"
            java.lang.String r15 = "myoffer_banner_permission_manage"
            java.lang.String r3 = "myoffer_banner_privacy_agreement"
            java.lang.String r5 = "myoffer_banner_publisher_name"
            java.lang.String r11 = "myoffer_banner_container"
            java.lang.String r10 = "myoffer_banner_close"
            java.lang.String r12 = "layout"
            java.lang.String r13 = "string"
            r16 = r6
            java.lang.String r6 = "myoffer_panel_version"
            r17 = r8
            java.lang.String r8 = "id"
            r18 = r7
            r7 = 1
            if (r7 != r1) goto L2c1
            android.content.Context r1 = r24.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r4 = r24.getContext()
            java.lang.String r7 = "myoffer_banner_ad_layout_pure_picture"
            int r4 = com.tkay.core.common.l.h.a(r4, r7, r12)
            r1.inflate(r4, r0)
            android.content.Context r1 = r24.getContext()
            java.lang.String r4 = "myoffer_banner_root"
            int r1 = com.tkay.core.common.l.h.a(r1, r4, r8)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            android.content.Context r4 = r24.getContext()
            int r4 = com.tkay.core.common.l.h.a(r4, r10, r8)
            android.view.View r4 = r0.findViewById(r4)
            com.tkay.basead.ui.CloseImageView r4 = (com.tkay.basead.ui.CloseImageView) r4
            r0.t = r4
            android.content.Context r4 = r24.getContext()
            int r4 = com.tkay.core.common.l.h.a(r4, r11, r8)
            android.view.View r4 = r0.findViewById(r4)
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4
            android.content.Context r7 = r24.getContext()
            int r5 = com.tkay.core.common.l.h.a(r7, r5, r8)
            android.view.View r5 = r0.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r7 = r24.getContext()
            int r3 = com.tkay.core.common.l.h.a(r7, r3, r8)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r7 = r24.getContext()
            int r7 = com.tkay.core.common.l.h.a(r7, r15, r8)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            android.content.Context r10 = r24.getContext()
            int r10 = com.tkay.core.common.l.h.a(r10, r14, r8)
            android.view.View r10 = r0.findViewById(r10)
            android.widget.TextView r10 = (android.widget.TextView) r10
            com.tkay.core.common.f.i r11 = r0.c
            com.tkay.core.common.f.j r11 = r11.m
            int r11 = r11.s()
            if (r11 != 0) goto L1b3
            com.tkay.basead.ui.CloseImageView r11 = r0.t
            r12 = 0
            r11.setVisibility(r12)
            java.lang.String r11 = r0.v
            boolean r9 = android.text.TextUtils.equals(r9, r11)
            if (r9 == 0) goto L1a5
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            android.view.ViewGroup$LayoutParams r9 = r9.getLayoutParams()
            android.content.Context r11 = r24.getContext()
            r12 = 1102577664(0x41b80000, float:23.0)
            int r11 = com.tkay.core.common.l.h.a(r11, r12)
            r9.width = r11
            android.content.Context r11 = r24.getContext()
            int r11 = com.tkay.core.common.l.h.a(r11, r12)
            r9.height = r11
            com.tkay.basead.ui.CloseImageView r11 = r0.t
            r11.setLayoutParams(r9)
        L1a5:
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            com.tkay.core.common.f.i r11 = r0.c
            com.tkay.core.common.f.j r11 = r11.m
            int r11 = r11.h()
            r0.a(r9, r11)
            goto L1ba
        L1b3:
            com.tkay.basead.ui.CloseImageView r9 = r0.t
            r11 = 8
            r9.setVisibility(r11)
        L1ba:
            android.view.ViewGroup$LayoutParams r9 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r9 = (android.widget.RelativeLayout.LayoutParams) r9
            r11 = -1
            r9.width = r11
            r9.height = r11
            r1.setLayoutParams(r9)
            com.tkay.core.common.res.image.RecycleImageView r1 = new com.tkay.core.common.res.image.RecycleImageView
            android.content.Context r9 = r24.getContext()
            r1.<init>(r9)
            android.widget.ImageView$ScaleType r9 = android.widget.ImageView.ScaleType.CENTER_CROP
            r1.setScaleType(r9)
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            r9.<init>(r11, r11)
            r11 = 0
            r0.addView(r1, r11, r9)
            com.tkay.core.common.res.image.RecycleImageView r9 = new com.tkay.core.common.res.image.RecycleImageView
            android.content.Context r11 = r24.getContext()
            r9.<init>(r11)
            android.widget.ImageView$ScaleType r11 = android.widget.ImageView.ScaleType.FIT_CENTER
            r9.setScaleType(r11)
            android.content.Context r11 = r24.getContext()
            com.tkay.core.common.res.b r11 = com.tkay.core.common.res.b.a(r11)
            com.tkay.core.common.res.e r12 = new com.tkay.core.common.res.e
            r14 = 1
            r12.<init>(r14, r2)
            com.tkay.basead.ui.SdkBannerATView$9 r15 = new com.tkay.basead.ui.SdkBannerATView$9
            r15.<init>(r0, r2, r9, r1)
            r11.a(r12, r15)
            java.util.List<android.view.View> r1 = r0.r
            r1.add(r9)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r2 = 13
            r1.addRule(r2)
            r0.addView(r9, r14, r1)
            com.tkay.core.common.f.h r1 = r0.d
            java.lang.String r1 = r1.v()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L253
            android.content.Context r1 = r24.getContext()
            java.lang.String r2 = "myoffer_banner_self_ad_logo"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r8)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            android.content.Context r2 = r24.getContext()
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r8 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r9 = r0.d
            java.lang.String r9 = r9.v()
            r11 = 1
            r8.<init>(r11, r9)
            com.tkay.basead.ui.SdkBannerATView$10 r9 = new com.tkay.basead.ui.SdkBannerATView$10
            r9.<init>(r0, r1)
            r2.a(r8, r9)
            java.util.List<android.view.View> r2 = r0.r
            r2.add(r1)
        L253:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1.K()
            if (r1 == 0) goto L2c0
            r1 = 0
            if (r4 == 0) goto L261
            r4.setVisibility(r1)
        L261:
            if (r5 == 0) goto L277
            r5.setVisibility(r1)
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.F()
            r5.setText(r2)
            com.tkay.basead.ui.SdkBannerATView$11 r2 = new com.tkay.basead.ui.SdkBannerATView$11
            r2.<init>(r0)
            r5.setOnClickListener(r2)
        L277:
            if (r3 == 0) goto L284
            r3.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$12 r2 = new com.tkay.basead.ui.SdkBannerATView$12
            r2.<init>(r0)
            r3.setOnClickListener(r2)
        L284:
            if (r7 == 0) goto L291
            r7.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$13 r2 = new com.tkay.basead.ui.SdkBannerATView$13
            r2.<init>(r0)
            r7.setOnClickListener(r2)
        L291:
            if (r10 == 0) goto L2c0
            r10.setVisibility(r1)
            android.content.Context r2 = r24.getContext()
            android.content.res.Resources r2 = r2.getResources()
            android.content.Context r3 = r24.getContext()
            int r3 = com.tkay.core.common.l.h.a(r3, r6, r13)
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.G()
            r4[r1] = r5
            java.lang.String r1 = r2.getString(r3, r4)
            r10.setText(r1)
            com.tkay.basead.ui.SdkBannerATView$14 r1 = new com.tkay.basead.ui.SdkBannerATView$14
            r1.<init>(r0)
            r10.setOnClickListener(r1)
        L2c0:
            return
        L2c1:
            android.content.Context r1 = r24.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r2 = r24.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r4, r12)
            r1.inflate(r2, r0)
            android.content.Context r1 = r24.getContext()
            java.lang.String r2 = "myoffer_banner_icon"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r8)
            android.view.View r1 = r0.findViewById(r1)
            com.tkay.core.common.ui.component.RoundImageView r1 = (com.tkay.core.common.ui.component.RoundImageView) r1
            android.content.Context r2 = r24.getContext()
            java.lang.String r4 = "myoffer_banner_ad_title"
            int r2 = com.tkay.core.common.l.h.a(r2, r4, r8)
            android.view.View r2 = r0.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            android.content.Context r4 = r24.getContext()
            java.lang.String r7 = "myoffer_banner_desc"
            int r4 = com.tkay.core.common.l.h.a(r4, r7, r8)
            android.view.View r4 = r0.findViewById(r4)
            android.widget.TextView r4 = (android.widget.TextView) r4
            android.content.Context r7 = r24.getContext()
            java.lang.String r12 = "myoffer_banner_ad_install_btn"
            int r7 = com.tkay.core.common.l.h.a(r7, r12, r8)
            android.view.View r7 = r0.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            android.content.Context r12 = r24.getContext()
            r19 = r6
            java.lang.String r6 = "myoffer_banner_spread_layout"
            int r6 = com.tkay.core.common.l.h.a(r12, r6, r8)
            android.view.View r6 = r0.findViewById(r6)
            com.tkay.basead.ui.SpreadAnimLayout r6 = (com.tkay.basead.ui.SpreadAnimLayout) r6
            android.content.Context r12 = r24.getContext()
            int r10 = com.tkay.core.common.l.h.a(r12, r10, r8)
            android.view.View r10 = r0.findViewById(r10)
            com.tkay.basead.ui.CloseImageView r10 = (com.tkay.basead.ui.CloseImageView) r10
            r0.t = r10
            android.content.Context r10 = r24.getContext()
            int r10 = com.tkay.core.common.l.h.a(r10, r11, r8)
            android.view.View r10 = r0.findViewById(r10)
            android.widget.RelativeLayout r10 = (android.widget.RelativeLayout) r10
            android.content.Context r11 = r24.getContext()
            int r5 = com.tkay.core.common.l.h.a(r11, r5, r8)
            android.view.View r5 = r0.findViewById(r5)
            android.widget.TextView r5 = (android.widget.TextView) r5
            android.content.Context r11 = r24.getContext()
            int r3 = com.tkay.core.common.l.h.a(r11, r3, r8)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r11 = r24.getContext()
            int r11 = com.tkay.core.common.l.h.a(r11, r15, r8)
            android.view.View r11 = r0.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            android.content.Context r12 = r24.getContext()
            int r12 = com.tkay.core.common.l.h.a(r12, r14, r8)
            android.view.View r12 = r0.findViewById(r12)
            android.widget.TextView r12 = (android.widget.TextView) r12
            com.tkay.core.common.f.i r14 = r0.c
            com.tkay.core.common.f.j r14 = r14.m
            int r14 = r14.s()
            if (r14 != 0) goto L388
            r14 = 1
            goto L389
        L388:
            r14 = 0
        L389:
            if (r14 == 0) goto L3ac
            com.tkay.basead.ui.CloseImageView r15 = r0.t
            r20 = r13
            r13 = 0
            r15.setVisibility(r13)
            com.tkay.basead.ui.CloseImageView r13 = r0.t
            com.tkay.core.common.f.i r15 = r0.c
            com.tkay.core.common.f.j r15 = r15.m
            int r15 = r15.h()
            r0.a(r13, r15)
            r21 = r11
            r15 = r17
            r11 = r18
            r17 = r3
        L3a8:
            r18 = r5
            goto L44a
        L3ac:
            r20 = r13
            com.tkay.basead.ui.CloseImageView r13 = r0.t
            r15 = 8
            r13.setVisibility(r15)
            java.lang.String r13 = r0.v
            int r15 = r13.hashCode()
            r21 = r11
            r11 = 1507809730(0x59df59c2, float:7.858451E15)
            if (r15 == r11) goto L3e9
            r11 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r15 == r11) goto L3dd
            r11 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r15 == r11) goto L3d1
        L3cc:
            r15 = r17
            r11 = r18
            goto L3f5
        L3d1:
            boolean r11 = r13.equals(r9)
            if (r11 == 0) goto L3cc
            r15 = r17
            r11 = r18
            r13 = 2
            goto L3f6
        L3dd:
            r11 = r18
            boolean r13 = r13.equals(r11)
            r15 = r17
            if (r13 == 0) goto L3f5
            r13 = 1
            goto L3f6
        L3e9:
            r15 = r17
            r11 = r18
            boolean r13 = r13.equals(r15)
            if (r13 == 0) goto L3f5
            r13 = 0
            goto L3f6
        L3f5:
            r13 = -1
        L3f6:
            if (r13 == 0) goto L431
            r17 = r3
            r3 = 1
            if (r13 == r3) goto L419
            r3 = 2
            if (r13 == r3) goto L401
            goto L3a8
        L401:
            android.view.ViewGroup$LayoutParams r3 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            android.content.Context r13 = r24.getContext()
            r18 = r5
            r5 = 1101004800(0x41a00000, float:20.0)
            int r5 = com.tkay.core.common.l.h.a(r13, r5)
            r3.rightMargin = r5
            r6.setLayoutParams(r3)
            goto L44a
        L419:
            r18 = r5
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            android.content.Context r5 = r24.getContext()
            r13 = 1092616192(0x41200000, float:10.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r13)
            r3.rightMargin = r5
            r2.setLayoutParams(r3)
            goto L44a
        L431:
            r17 = r3
            r18 = r5
            r13 = 1092616192(0x41200000, float:10.0)
            android.view.ViewGroup$LayoutParams r3 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            android.content.Context r5 = r24.getContext()
            int r5 = com.tkay.core.common.l.h.a(r5, r13)
            r3.rightMargin = r5
            r6.setLayoutParams(r3)
        L44a:
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.t()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L487
            android.view.ViewGroup$LayoutParams r3 = r1.getLayoutParams()
            r5 = 2
            r1.setRadiusInDip(r5)
            r5 = 1
            r1.setNeedRadiu(r5)
            android.content.Context r13 = r24.getContext()
            com.tkay.core.common.res.b r13 = com.tkay.core.common.res.b.a(r13)
            com.tkay.core.common.res.e r5 = new com.tkay.core.common.res.e
            r22 = r10
            com.tkay.core.common.f.h r10 = r0.d
            java.lang.String r10 = r10.t()
            r23 = r12
            r12 = 1
            r5.<init>(r12, r10)
            int r10 = r3.width
            int r3 = r3.height
            com.tkay.basead.ui.SdkBannerATView$15 r12 = new com.tkay.basead.ui.SdkBannerATView$15
            r12.<init>(r0, r1)
            r13.a(r5, r10, r3, r12)
            goto L49c
        L487:
            r22 = r10
            r23 = r12
            com.tkay.basead.ui.a.a.a(r1)
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            if (r3 == 0) goto L49c
            r5 = 0
            r3.leftMargin = r5
            r2.setLayoutParams(r3)
        L49c:
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r1)
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.r()
            r2.setText(r3)
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r2)
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.w()
            r7.setText(r3)
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r7)
            if (r4 == 0) goto L4cd
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.s()
            r4.setText(r3)
            java.util.List<android.view.View> r3 = r0.r
            r3.add(r4)
        L4cd:
            com.tkay.core.common.f.h r3 = r0.d
            java.lang.String r3 = r3.v()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L506
            android.content.Context r3 = r24.getContext()
            java.lang.String r5 = "myoffer_banner_self_ad_logo"
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r8)
            android.view.View r3 = r0.findViewById(r3)
            android.widget.ImageView r3 = (android.widget.ImageView) r3
            android.content.Context r5 = r24.getContext()
            com.tkay.core.common.res.b r5 = com.tkay.core.common.res.b.a(r5)
            com.tkay.core.common.res.e r10 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r12 = r0.d
            java.lang.String r12 = r12.v()
            r13 = 1
            r10.<init>(r13, r12)
            com.tkay.basead.ui.SdkBannerATView$2 r12 = new com.tkay.basead.ui.SdkBannerATView$2
            r12.<init>(r0, r3)
            r5.a(r10, r12)
            goto L507
        L506:
            r3 = 0
        L507:
            java.util.List<android.view.View> r5 = r0.r
            r5.add(r3)
            boolean r5 = r0.u
            if (r5 == 0) goto L558
            android.content.Context r5 = r24.getContext()
            java.lang.String r10 = "myoffer_banner_main_image"
            int r5 = com.tkay.core.common.l.h.a(r5, r10, r8)
            android.view.View r5 = r0.findViewById(r5)
            com.tkay.core.common.ui.component.RoundImageView r5 = (com.tkay.core.common.ui.component.RoundImageView) r5
            com.tkay.core.common.f.h r8 = r0.d
            java.lang.String r8 = r8.u()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L559
            r5.getLayoutParams()
            r8 = 2
            r5.setRadiusInDip(r8)
            r8 = 1
            r5.setNeedRadiu(r8)
            android.content.Context r10 = r24.getContext()
            com.tkay.core.common.res.b r10 = com.tkay.core.common.res.b.a(r10)
            com.tkay.core.common.res.e r12 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r13 = r0.d
            java.lang.String r13 = r13.u()
            r12.<init>(r8, r13)
            com.tkay.basead.ui.SdkBannerATView$3 r8 = new com.tkay.basead.ui.SdkBannerATView$3
            r8.<init>(r0, r5)
            r10.a(r12, r8)
            java.util.List<android.view.View> r8 = r0.r
            r8.add(r5)
            goto L559
        L558:
            r5 = 0
        L559:
            java.util.List<android.view.View> r8 = r0.r
            r8.add(r5)
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.w()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L57d
            r5 = 0
            r6.setVisibility(r5)
            r7.setVisibility(r5)
            r0.s = r7
            r6 = r16
        L575:
            r10 = r22
            r12 = r23
            r7 = 2
        L57a:
            r13 = -1
            goto L66d
        L57d:
            r5 = 8
            r6.setVisibility(r5)
            r7.setVisibility(r5)
            java.lang.String r5 = r0.v
            int r6 = r5.hashCode()
            switch(r6) {
                case -559799608: goto L5af;
                case 1507809730: goto L5a5;
                case 1507809854: goto L59b;
                case 1622564786: goto L591;
                default: goto L58e;
            }
        L58e:
            r6 = r16
            goto L5b9
        L591:
            boolean r5 = r5.equals(r9)
            if (r5 == 0) goto L58e
            r6 = r16
            r5 = 2
            goto L5ba
        L59b:
            boolean r5 = r5.equals(r11)
            if (r5 == 0) goto L58e
            r6 = r16
            r5 = 0
            goto L5ba
        L5a5:
            boolean r5 = r5.equals(r15)
            if (r5 == 0) goto L58e
            r6 = r16
            r5 = 3
            goto L5ba
        L5af:
            r6 = r16
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L5b9
            r5 = 1
            goto L5ba
        L5b9:
            r5 = -1
        L5ba:
            if (r5 == 0) goto L655
            r7 = 1
            if (r5 == r7) goto L575
            r7 = 2
            if (r5 == r7) goto L608
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            r5 = 11
            r1.addRule(r5)
            if (r14 == 0) goto L5dc
            android.content.Context r5 = r24.getContext()
            r8 = 1099956224(0x41900000, float:18.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            goto L5e8
        L5dc:
            android.content.Context r5 = r24.getContext()
            r8 = 1092616192(0x41200000, float:10.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
        L5e8:
            r2.setLayoutParams(r1)
            if (r23 == 0) goto L605
            android.view.ViewGroup$LayoutParams r1 = r23.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1113325568(0x425c0000, float:55.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r12 = r23
            r12.setLayoutParams(r1)
            goto L651
        L605:
            r12 = r23
            goto L651
        L608:
            r12 = r23
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1099956224(0x41900000, float:18.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r2.setLayoutParams(r1)
            if (r4 == 0) goto L636
            android.view.ViewGroup$LayoutParams r1 = r4.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1122238464(0x42e40000, float:114.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r4.setLayoutParams(r1)
        L636:
            if (r22 == 0) goto L651
            android.view.ViewGroup$LayoutParams r1 = r22.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r5 = r24.getContext()
            r8 = 1122238464(0x42e40000, float:114.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r8)
            r1.rightMargin = r5
            r10 = r22
            r10.setLayoutParams(r1)
            goto L57a
        L651:
            r10 = r22
            goto L57a
        L655:
            r10 = r22
            r12 = r23
            r7 = 2
            android.view.ViewGroup$LayoutParams r5 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r5 = (android.widget.RelativeLayout.LayoutParams) r5
            r8 = 15
            r5.addRule(r8)
            r8 = 6
            r13 = -1
            r5.addRule(r8, r13)
            r1.setLayoutParams(r5)
        L66d:
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1.K()
            if (r1 == 0) goto L7a1
            r1 = 8
            r4.setVisibility(r1)
            java.lang.String r1 = r0.v
            int r2 = r1.hashCode()
            switch(r2) {
                case -559799608: goto L69c;
                case 1507809730: goto L694;
                case 1507809854: goto L68c;
                case 1622564786: goto L684;
                default: goto L683;
            }
        L683:
            goto L6a4
        L684:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L6a4
            r1 = r7
            goto L6a5
        L68c:
            boolean r1 = r1.equals(r11)
            if (r1 == 0) goto L6a4
            r1 = 1
            goto L6a5
        L694:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L6a4
            r1 = 3
            goto L6a5
        L69c:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L6a4
            r1 = 0
            goto L6a5
        L6a4:
            r1 = r13
        L6a5:
            if (r1 == 0) goto L6a8
            goto L6bf
        L6a8:
            if (r3 == 0) goto L6bf
            android.view.ViewGroup$LayoutParams r1 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r2 = r24.getContext()
            r4 = 1090519040(0x41000000, float:8.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r4)
            r1.topMargin = r2
            r3.setLayoutParams(r1)
        L6bf:
            r1 = 0
            if (r10 == 0) goto L6c5
            r10.setVisibility(r1)
        L6c5:
            if (r18 == 0) goto L6dd
            r5 = r18
            r5.setVisibility(r1)
            com.tkay.core.common.f.h r2 = r0.d
            java.lang.String r2 = r2.F()
            r5.setText(r2)
            com.tkay.basead.ui.SdkBannerATView$4 r2 = new com.tkay.basead.ui.SdkBannerATView$4
            r2.<init>(r0)
            r5.setOnClickListener(r2)
        L6dd:
            if (r17 == 0) goto L6ec
            r3 = r17
            r3.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$5 r2 = new com.tkay.basead.ui.SdkBannerATView$5
            r2.<init>(r0)
            r3.setOnClickListener(r2)
        L6ec:
            if (r21 == 0) goto L6fb
            r2 = r21
            r2.setVisibility(r1)
            com.tkay.basead.ui.SdkBannerATView$6 r3 = new com.tkay.basead.ui.SdkBannerATView$6
            r3.<init>(r0)
            r2.setOnClickListener(r3)
        L6fb:
            if (r12 == 0) goto L7e8
            r12.setVisibility(r1)
            java.lang.String r1 = r0.v
            int r2 = r1.hashCode()
            switch(r2) {
                case -559799608: goto L722;
                case 1507809730: goto L71a;
                case 1507809854: goto L712;
                case 1622564786: goto L70a;
                default: goto L709;
            }
        L709:
            goto L72a
        L70a:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L72a
            r5 = 1
            goto L72b
        L712:
            boolean r1 = r1.equals(r11)
            if (r1 == 0) goto L72a
            r5 = 0
            goto L72b
        L71a:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L72a
            r5 = 3
            goto L72b
        L722:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L72a
            r5 = r7
            goto L72b
        L72a:
            r5 = r13
        L72b:
            if (r5 == 0) goto L757
            r1 = 1
            if (r5 == r1) goto L757
            android.content.Context r2 = r24.getContext()
            android.content.res.Resources r2 = r2.getResources()
            android.content.Context r3 = r24.getContext()
            r5 = r19
            r4 = r20
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r4)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.tkay.core.common.f.h r4 = r0.d
            java.lang.String r4 = r4.G()
            r5 = 0
            r1[r5] = r4
            java.lang.String r1 = r2.getString(r3, r1)
            r12.setText(r1)
            goto L798
        L757:
            r5 = r19
            r4 = r20
            android.content.Context r1 = r24.getContext()
            android.content.res.Resources r1 = r1.getResources()
            android.content.Context r2 = r24.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r5, r4)
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.G()
            r4.append(r5)
            java.lang.String r5 = "  "
            r4.append(r5)
            com.tkay.core.common.f.h r5 = r0.d
            java.lang.String r5 = r5.F()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r5 = 0
            r3[r5] = r4
            java.lang.String r1 = r1.getString(r2, r3)
            r12.setText(r1)
        L798:
            com.tkay.basead.ui.SdkBannerATView$7 r1 = new com.tkay.basead.ui.SdkBannerATView$7
            r1.<init>(r0)
            r12.setOnClickListener(r1)
            return
        L7a1:
            r3 = 1
            r5 = 0
            r4.setVisibility(r5)
            java.lang.String r1 = r0.v
            int r4 = r1.hashCode()
            switch(r4) {
                case -559799608: goto L7c7;
                case 1507809730: goto L7c0;
                case 1507809854: goto L7b8;
                case 1622564786: goto L7b0;
                default: goto L7af;
            }
        L7af:
            goto L7cf
        L7b0:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L7cf
            r5 = 3
            goto L7d0
        L7b8:
            boolean r1 = r1.equals(r11)
            if (r1 == 0) goto L7cf
            r5 = r3
            goto L7d0
        L7c0:
            boolean r1 = r1.equals(r15)
            if (r1 == 0) goto L7cf
            goto L7d0
        L7c7:
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L7cf
            r5 = r7
            goto L7d0
        L7cf:
            r5 = r13
        L7d0:
            if (r5 == 0) goto L7d3
            goto L7e8
        L7d3:
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.content.Context r3 = r24.getContext()
            r4 = 1090519040(0x41000000, float:8.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            r1.topMargin = r3
            r2.setLayoutParams(r1)
        L7e8:
            return
    }

    @Override
    protected final void c() {
            r4 = this;
            java.util.List<android.view.View> r0 = r4.r
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1b
            java.util.List<android.view.View> r2 = r4.r
            java.lang.Object r2 = r2.get(r1)
            android.view.View r2 = (android.view.View) r2
            if (r2 == 0) goto L18
            android.view.View$OnClickListener r3 = r4.A
            r2.setOnClickListener(r3)
        L18:
            int r1 = r1 + 1
            goto L7
        L1b:
            android.view.View$OnClickListener r0 = r4.z
            r4.setOnClickListener(r0)
            super.c()
            return
    }
}
