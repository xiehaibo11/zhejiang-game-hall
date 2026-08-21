package com.tkay.splashad.a;

public final class e extends com.tkay.core.common.h {
    int T;

    protected e(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void d(int r1) {
            r0 = this;
            r0.T = r1
            return
    }

    @Override
    public final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
            super.a(r1)
            return
    }

    @Override
    public final void a(com.tkay.core.api.TYBaseAdAdapter r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.tkay.splashad.unitgroup.api.CustomSplashAdapter
            if (r0 == 0) goto Lb
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r2 = (com.tkay.splashad.unitgroup.api.CustomSplashAdapter) r2
            int r0 = r1.T
            r2.setFetchAdTimeout(r0)
        Lb:
            return
    }

    @Override
    protected final void a(java.lang.String r1, com.tkay.core.common.m.a r2) {
            r0 = this;
            super.a(r1, r2)
            return
    }

    @Override
    public final void g() {
            r2 = this;
            com.tkay.core.common.j r0 = r2.j
            if (r0 == 0) goto L9
            com.tkay.core.common.j r0 = r2.j
            r1 = 0
            r0.f = r1
        L9:
            super.g()
            return
    }

    @Override
    public final void h() {
            r0 = this;
            super.h()
            return
    }

    public final void j() {
            r0 = this;
            r0.g()
            r0.a()
            return
    }
}
