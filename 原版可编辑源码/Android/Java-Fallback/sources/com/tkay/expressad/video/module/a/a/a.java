package com.tkay.expressad.video.module.a.a;

public final class a extends com.tkay.expressad.video.module.a.a.f {
    private com.tkay.expressad.foundation.d.c V;
    private android.app.Activity a;

    private a(android.app.Activity r1, com.tkay.expressad.foundation.d.c r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.V = r2
            return
    }

    @Override
    public final void a(int r1, java.lang.Object r2) {
            r0 = this;
            super.a(r1, r2)
            r2 = 106(0x6a, float:1.49E-43)
            if (r1 == r2) goto L8
            goto L13
        L8:
            android.app.Activity r1 = r0.a
            if (r1 == 0) goto L13
            com.tkay.expressad.foundation.d.c r2 = r0.V
            if (r2 == 0) goto L13
            r1.finish()
        L13:
            return
    }
}
