package com.tkay.nativead.a;

public class a extends com.tkay.core.common.f<com.tkay.nativead.a.d> {
    public static final java.lang.String a = null;

    static {
            java.lang.Class<com.tkay.nativead.a.a> r0 = com.tkay.nativead.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.nativead.a.a.a = r0
            return
    }

    private a(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private static com.tkay.core.common.h a(com.tkay.nativead.a.d r2) {
            com.tkay.nativead.a.c r0 = new com.tkay.nativead.a.c
            android.content.Context r1 = r2.a()
            r0.<init>(r1)
            int r2 = r2.d
            r0.a(r2)
            return r0
    }

    public static com.tkay.nativead.a.a a(android.content.Context r3, java.lang.String r4) {
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = "0"
            com.tkay.core.common.f r0 = r0.a(r4, r1)
            if (r0 == 0) goto L10
            boolean r2 = r0 instanceof com.tkay.nativead.a.a
            if (r2 != 0) goto L1c
        L10:
            com.tkay.nativead.a.a r0 = new com.tkay.nativead.a.a
            r0.<init>(r3, r4)
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r3.a(r4, r1, r0)
        L1c:
            com.tkay.nativead.a.a r0 = (com.tkay.nativead.a.a) r0
            return r0
    }

    public final com.tkay.core.common.f.a a(java.lang.String r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r5 = this;
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a()
            android.content.Context r1 = r5.b
            java.lang.String r2 = r5.c
            com.tkay.core.common.f.a r0 = r0.a(r1, r2)
            if (r0 == 0) goto L49
            com.tkay.core.api.BaseAd r1 = r0.f()
            boolean r1 = r1 instanceof com.tkay.nativead.unitgroup.a
            if (r1 == 0) goto L49
            com.tkay.core.api.TYBaseAdAdapter r1 = r0.e()
            boolean r1 = r1 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAdapter
            if (r1 == 0) goto L49
            com.tkay.core.api.BaseAd r1 = r0.f()
            com.tkay.core.api.TYBaseAdAdapter r2 = r0.e()
            com.tkay.core.common.f.d r1 = r1.getDetail()
            r1.C = r6
            com.tkay.core.common.a r6 = com.tkay.core.common.a.a()
            java.lang.String r3 = r5.c
            java.lang.String r4 = r1.x()
            r6.a(r3, r4, r0)
            com.tkay.core.common.a.a()
            java.lang.String r6 = r5.c
            com.tkay.core.common.f.aj r2 = r2.getUnitGroupInfo()
            com.tkay.core.common.a.b(r6, r2)
            com.tkay.core.common.l.s.a(r7, r1)
            return r0
        L49:
            r6 = 0
            return r6
    }

    @Override
    public final com.tkay.core.common.h a(com.tkay.core.common.j r3) {
            r2 = this;
            com.tkay.nativead.a.d r3 = (com.tkay.nativead.a.d) r3
            com.tkay.nativead.a.c r0 = new com.tkay.nativead.a.c
            android.content.Context r1 = r3.a()
            r0.<init>(r1)
            int r3 = r3.d
            r0.a(r3)
            return r0
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "0"
            return r0
    }

    public final void a(android.content.Context r7, com.tkay.core.common.b.a r8, com.tkay.core.common.b.b r9, java.util.Map<java.lang.String, java.lang.Object> r10) {
            r6 = this;
            com.tkay.nativead.a.d r4 = new com.tkay.nativead.a.d
            r4.<init>()
            r4.a(r7)
            r4.e = r9
            r7 = 0
            r4.d = r7
            r4.g = r10
            android.content.Context r1 = r6.b
            java.lang.String r3 = r6.c
            java.lang.String r2 = "0"
            r0 = r6
            r5 = r8
            super.a(r1, r2, r3, r4, r5)
            return
    }
}
