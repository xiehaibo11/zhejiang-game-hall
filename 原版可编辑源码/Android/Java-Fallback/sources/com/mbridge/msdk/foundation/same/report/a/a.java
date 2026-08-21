package com.mbridge.msdk.foundation.same.report.a;

public final class a {
    private com.mbridge.msdk.foundation.entity.j a;
    private com.mbridge.msdk.foundation.db.i b;
    private android.content.Context c;

    public a(com.mbridge.msdk.foundation.entity.j r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r2.a = r3
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            r2.c = r3
            com.mbridge.msdk.foundation.db.i r3 = com.mbridge.msdk.foundation.db.i.a(r3)
            r2.b = r3
            com.mbridge.msdk.foundation.entity.j r3 = r2.a
            if (r3 == 0) goto L3a
            android.content.Context r3 = r2.c
            if (r3 == 0) goto L3a
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r3)
            com.mbridge.msdk.foundation.entity.j r0 = r2.a
            r0.e(r3)
            com.mbridge.msdk.foundation.entity.j r0 = r2.a
            android.content.Context r1 = r2.c
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.a(r1, r3)
            r0.c(r3)
            com.mbridge.msdk.foundation.entity.j r3 = r2.a
            r0 = 2
            r3.d(r0)
        L3a:
            return
    }

    public final void a() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.j r0 = r2.a
            if (r0 == 0) goto Lf
            com.mbridge.msdk.foundation.db.i r0 = r2.b
            com.mbridge.msdk.foundation.db.m r0 = com.mbridge.msdk.foundation.db.m.a(r0)
            com.mbridge.msdk.foundation.entity.j r1 = r2.a
            r0.a(r1)
        Lf:
            return
    }

    public final void a(int r2) {
            r1 = this;
            com.mbridge.msdk.foundation.entity.j r0 = r1.a
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            com.mbridge.msdk.foundation.entity.j r0 = r1.a
            r0.a(r2)
        Lb:
            return
    }

    public final void b(int r2) {
            r1 = this;
            com.mbridge.msdk.foundation.entity.j r0 = r1.a
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.foundation.entity.j r0 = r1.a
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    public final void c(int r2) {
            r1 = this;
            com.mbridge.msdk.foundation.entity.j r0 = r1.a
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }
}
