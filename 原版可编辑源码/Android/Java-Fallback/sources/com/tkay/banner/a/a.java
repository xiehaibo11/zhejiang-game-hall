package com.tkay.banner.a;

public class a extends com.tkay.core.common.f<com.tkay.banner.a.c> {
    public static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Banner"
            r0.<init>(r1)
            java.lang.Class<com.tkay.banner.a.a> r1 = com.tkay.banner.a.a.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.banner.a.a.a = r0
            return
    }

    private a(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.tkay.banner.a.a a(android.content.Context r3, java.lang.String r4) {
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = "2"
            com.tkay.core.common.f r0 = r0.a(r4, r1)
            if (r0 == 0) goto L10
            boolean r2 = r0 instanceof com.tkay.banner.a.a
            if (r2 != 0) goto L1c
        L10:
            com.tkay.banner.a.a r0 = new com.tkay.banner.a.a
            r0.<init>(r3, r4)
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r3.a(r4, r1, r0)
        L1c:
            com.tkay.banner.a.a r0 = (com.tkay.banner.a.a) r0
            return r0
    }

    private static com.tkay.core.common.h a(com.tkay.banner.a.c r2) {
            com.tkay.banner.a.f r0 = new com.tkay.banner.a.f
            android.content.Context r1 = r2.a()
            r0.<init>(r1)
            int r2 = r2.d
            r0.a(r2)
            return r0
    }

    @Override
    public final com.tkay.core.common.h a(com.tkay.core.common.j r3) {
            r2 = this;
            com.tkay.banner.a.c r3 = (com.tkay.banner.a.c) r3
            com.tkay.banner.a.f r0 = new com.tkay.banner.a.f
            android.content.Context r1 = r3.a()
            r0.<init>(r1)
            int r3 = r3.d
            r0.a(r3)
            return r0
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "2"
            return r0
    }

    public final void a(android.content.Context r7, int r8, com.tkay.core.common.b.a r9, com.tkay.core.common.b.b r10, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r6 = this;
            com.tkay.banner.a.c r4 = new com.tkay.banner.a.c
            r4.<init>()
            r4.e = r10
            r4.a(r7)
            r4.d = r8
            r4.g = r11
            android.content.Context r1 = r6.b
            java.lang.String r3 = r6.c
            java.lang.String r2 = "2"
            r0 = r6
            r5 = r9
            super.a(r1, r2, r3, r4, r5)
            return
    }
}
