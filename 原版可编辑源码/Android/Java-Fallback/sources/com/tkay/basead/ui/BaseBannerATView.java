package com.tkay.basead.ui;

public abstract class BaseBannerATView extends com.tkay.basead.ui.BaseATView {
    public final java.lang.String TAG;
    protected com.tkay.basead.e.a a;
    protected com.tkay.basead.ui.CloseImageView t;



    public BaseBannerATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.TAG = r1
            return
    }

    public BaseBannerATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.TAG = r1
            r0.a = r4
            return
    }

    static void a(com.tkay.basead.ui.BaseBannerATView r0) {
            super.h()
            return
    }

    @Override
    protected final void a(int r2) {
            r1 = this;
            com.tkay.basead.e.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.onAdClick(r2)
        L7:
            return
    }

    @Override
    protected final void a(boolean r2) {
            r1 = this;
            com.tkay.basead.e.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.onDeeplinkCallback(r2)
        L7:
            return
    }

    protected void b() {
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
            com.tkay.basead.ui.BaseBannerATView$1 r1 = new com.tkay.basead.ui.BaseBannerATView$1
            r1.<init>(r2)
            r2.a(r0, r1)
            return
    }

    protected void c() {
            r2 = this;
            com.tkay.basead.ui.CloseImageView r0 = r2.t
            com.tkay.basead.ui.BaseBannerATView$2 r1 = new com.tkay.basead.ui.BaseBannerATView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    @Override
    protected final void e() {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.d
            com.tkay.basead.c.i r1 = r3.i()
            r2 = 8
            com.tkay.basead.a.b.a(r2, r0, r1)
            com.tkay.basead.e.a r0 = r3.a
            if (r0 == 0) goto L12
            r0.onAdShow()
        L12:
            return
    }

    @Override
    protected final void f() {
            r2 = this;
            super.f()
            com.tkay.basead.ui.CloseImageView r0 = r2.t
            com.tkay.core.common.f.i r1 = r2.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.g()
            r2.a(r0, r1)
            return
    }
}
