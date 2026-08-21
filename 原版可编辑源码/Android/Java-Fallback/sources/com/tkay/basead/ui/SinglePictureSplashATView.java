package com.tkay.basead.ui;

public class SinglePictureSplashATView extends com.tkay.basead.ui.BaseSdkSplashATView {



    public SinglePictureSplashATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public SinglePictureSplashATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    static void a(com.tkay.basead.ui.SinglePictureSplashATView r0) {
            super.h()
            return
    }

    private static void a(com.tkay.basead.ui.SinglePictureSplashATView r0, int r1, java.lang.Runnable r2) {
            super.a(r1, r2)
            return
    }

    @Override
    protected final void a() {
            r4 = this;
            com.tkay.core.common.f.i r0 = r4.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.q()
            java.lang.String r1 = "layout"
            r2 = 2
            if (r0 != r2) goto L23
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r2 = r4.getContext()
            java.lang.String r3 = "myoffer_splash_ad_layout_single_land"
            int r1 = com.tkay.core.common.l.h.a(r2, r3, r1)
            r0.inflate(r1, r4)
            goto L38
        L23:
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r2 = r4.getContext()
            java.lang.String r3 = "myoffer_splash_ad_layout_single_port"
            int r1 = com.tkay.core.common.l.h.a(r2, r3, r1)
            r0.inflate(r1, r4)
        L38:
            r4.o()
            return
    }

    @Override
    protected final void b() {
            r7 = this;
            android.content.Context r0 = r7.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_splash_ad_install_btn"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r7.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            android.content.Context r2 = r7.getContext()
            java.lang.String r3 = "myoffer_splash_bg"
            int r1 = com.tkay.core.common.l.h.a(r2, r3, r1)
            android.view.View r1 = r7.findViewById(r1)
            com.tkay.core.common.ui.component.RoundImageView r1 = (com.tkay.core.common.ui.component.RoundImageView) r1
            android.content.Context r2 = r7.getContext()
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r3 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r4 = r7.d
            java.lang.String r4 = r4.u()
            r5 = 1
            r3.<init>(r5, r4)
            android.content.res.Resources r4 = r7.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            int r4 = r4.widthPixels
            android.content.res.Resources r5 = r7.getResources()
            android.util.DisplayMetrics r5 = r5.getDisplayMetrics()
            int r5 = r5.widthPixels
            int r5 = r5 * 627
            int r5 = r5 / 1200
            com.tkay.basead.ui.SinglePictureSplashATView$1 r6 = new com.tkay.basead.ui.SinglePictureSplashATView$1
            r6.<init>(r7, r1)
            r2.a(r3, r4, r5, r6)
            com.tkay.core.common.f.i r1 = r7.c
            com.tkay.core.common.f.j r1 = r1.m
            if (r1 == 0) goto La0
            if (r0 == 0) goto La0
            com.tkay.core.common.f.i r1 = r7.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.x()
            if (r1 == 0) goto L9b
            boolean r1 = r7.m()
            if (r1 != 0) goto L9b
            r1 = 0
            r0.setVisibility(r1)
            com.tkay.core.common.f.h r1 = r7.d
            java.lang.String r1 = r1.w()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L88
            com.tkay.core.common.f.h r1 = r7.d
            java.lang.String r1 = r1.w()
            r0.setText(r1)
            goto L95
        L88:
            android.content.Context r1 = r7.getContext()
            com.tkay.core.common.f.h r2 = r7.d
            int r1 = com.tkay.basead.a.e.a(r1, r2)
            r0.setText(r1)
        L95:
            java.util.List<android.view.View> r1 = r7.r
            r1.add(r0)
            return
        L9b:
            r1 = 8
            r0.setVisibility(r1)
        La0:
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
            if (r0 >= 0) goto Ld
            r0 = 100
            goto L15
        Ld:
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
        L15:
            com.tkay.basead.ui.SinglePictureSplashATView$2 r1 = new com.tkay.basead.ui.SinglePictureSplashATView$2
            r1.<init>(r2)
            super.a(r0, r1)
            return
    }
}
