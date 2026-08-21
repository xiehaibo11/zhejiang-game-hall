package com.tkay.basead.f;

public final class b extends com.tkay.basead.f.c {
    com.tkay.basead.e.a a;
    private final java.lang.String k;

    public b(android.content.Context r1, com.tkay.core.common.f.i r2, java.lang.String r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.k = r1
            return
    }

    @Override
    public final void a(android.app.Activity r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            r0 = this;
            return
    }

    public final void a(com.tkay.basead.e.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final android.view.View b() {
            r5 = this;
            boolean r0 = r5.a()
            if (r0 == 0) goto L2a
            com.tkay.core.common.f.r r0 = r5.g
            boolean r0 = r0.g()
            if (r0 == 0) goto L1c
            com.tkay.basead.ui.MraidBannerATView r0 = new com.tkay.basead.ui.MraidBannerATView
            android.content.Context r1 = r5.c
            com.tkay.core.common.f.i r2 = r5.d
            com.tkay.core.common.f.r r3 = r5.g
            com.tkay.basead.e.a r4 = r5.a
            r0.<init>(r1, r2, r3, r4)
            return r0
        L1c:
            com.tkay.basead.ui.SdkBannerATView r0 = new com.tkay.basead.ui.SdkBannerATView
            android.content.Context r1 = r5.c
            com.tkay.core.common.f.i r2 = r5.d
            com.tkay.core.common.f.r r3 = r5.g
            com.tkay.basead.e.a r4 = r5.a
            r0.<init>(r1, r2, r3, r4)
            return r0
        L2a:
            r0 = 0
            return r0
    }

    @Override
    public final void c() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return
    }
}
