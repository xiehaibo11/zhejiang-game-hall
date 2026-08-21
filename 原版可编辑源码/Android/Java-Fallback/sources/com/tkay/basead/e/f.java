package com.tkay.basead.e;

public abstract class f implements com.tkay.basead.e.g {
    com.tkay.core.common.f.h a;

    public f(com.tkay.core.common.f.h r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private void a() {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.a
            boolean r1 = r0 instanceof com.tkay.core.common.f.f
            if (r1 == 0) goto L16
            com.tkay.core.common.f.f r0 = (com.tkay.core.common.f.f) r0
            int r1 = r0.c()
            r2 = 1
            if (r1 != r2) goto L16
            com.tkay.core.common.a.b r1 = com.tkay.core.common.a.b.a()
            r1.b(r0)
        L16:
            return
    }

    @Override
    public void onAdShow() {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.a
            boolean r1 = r0 instanceof com.tkay.core.common.f.f
            if (r1 == 0) goto L16
            com.tkay.core.common.f.f r0 = (com.tkay.core.common.f.f) r0
            int r1 = r0.c()
            r2 = 1
            if (r1 != r2) goto L16
            com.tkay.core.common.a.b r1 = com.tkay.core.common.a.b.a()
            r1.b(r0)
        L16:
            return
    }
}
