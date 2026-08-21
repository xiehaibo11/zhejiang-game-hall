package com.tkay.nativead.a;

public final class c extends com.tkay.core.common.h {
    protected c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
            super.a(r1)
            return
    }

    @Override
    public final void a(com.tkay.core.api.TYBaseAdAdapter r3) {
            r2 = this;
            if (r3 == 0) goto L15
            com.tkay.core.common.f.aj r0 = r3.getUnitGroupInfo()
            if (r0 == 0) goto L15
            boolean r1 = r3 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAdapter
            if (r1 == 0) goto L15
            com.tkay.nativead.unitgroup.api.CustomNativeAdapter r3 = (com.tkay.nativead.unitgroup.api.CustomNativeAdapter) r3
            int r0 = r0.r()
            r3.setRequestNum(r0)
        L15:
            return
    }

    @Override
    public final void h() {
            r0 = this;
            super.h()
            return
    }
}
