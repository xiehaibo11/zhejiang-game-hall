package com.tkay.basead.d;

public final class a extends com.tkay.basead.d.b {
    com.tkay.basead.ui.BaseBannerATView a;
    private final java.lang.String k;
    private com.tkay.expressad.out.b l;


    public a(android.content.Context r1, com.tkay.basead.d.b.a r2, com.tkay.core.common.f.i r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.k = r1
            com.tkay.basead.d.a$1 r1 = new com.tkay.basead.d.a$1
            r1.<init>(r0)
            r0.l = r1
            return
    }

    public final android.view.View a() {
            r5 = this;
            com.tkay.core.common.a.g r0 = r5.f
            boolean r0 = r0 instanceof com.tkay.expressad.out.TemplateBannerView
            if (r0 == 0) goto L18
            com.tkay.core.common.a.g r0 = r5.f
            if (r0 == 0) goto L18
            com.tkay.core.common.a.g r0 = r5.f
            com.tkay.expressad.out.TemplateBannerView r0 = (com.tkay.expressad.out.TemplateBannerView) r0
            com.tkay.expressad.out.b r1 = r5.l
            r0.setBannerAdListener(r1)
            com.tkay.core.common.a.g r0 = r5.f
            com.tkay.expressad.out.TemplateBannerView r0 = (com.tkay.expressad.out.TemplateBannerView) r0
            return r0
        L18:
            com.tkay.basead.ui.BaseBannerATView r0 = r5.a
            if (r0 != 0) goto L49
            boolean r0 = super.c()
            if (r0 == 0) goto L49
            com.tkay.core.common.f.z r0 = r5.e
            boolean r0 = r0.g()
            if (r0 == 0) goto L3a
            com.tkay.basead.ui.MraidBannerATView r0 = new com.tkay.basead.ui.MraidBannerATView
            android.content.Context r1 = r5.b
            com.tkay.core.common.f.i r2 = r5.c
            com.tkay.core.common.f.z r3 = r5.e
            com.tkay.basead.e.a r4 = r5.h
            r0.<init>(r1, r2, r3, r4)
            r5.a = r0
            goto L49
        L3a:
            com.tkay.basead.ui.SdkBannerATView r0 = new com.tkay.basead.ui.SdkBannerATView
            android.content.Context r1 = r5.b
            com.tkay.core.common.f.i r2 = r5.c
            com.tkay.core.common.f.z r3 = r5.e
            com.tkay.basead.e.a r4 = r5.h
            r0.<init>(r1, r2, r3, r4)
            r5.a = r0
        L49:
            com.tkay.basead.ui.BaseBannerATView r0 = r5.a
            return r0
    }

    @Override
    public final void b() {
            r1 = this;
            super.b()
            com.tkay.core.common.a.g r0 = r1.f
            boolean r0 = r0 instanceof com.tkay.expressad.out.TemplateBannerView
            if (r0 == 0) goto L10
            com.tkay.core.common.a.g r0 = r1.f
            com.tkay.expressad.out.TemplateBannerView r0 = (com.tkay.expressad.out.TemplateBannerView) r0
            r0.release()
        L10:
            r0 = 0
            r1.f = r0
            r1.h = r0
            return
    }
}
