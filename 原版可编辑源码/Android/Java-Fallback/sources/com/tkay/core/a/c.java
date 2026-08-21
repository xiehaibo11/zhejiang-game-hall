package com.tkay.core.a;

public final class c {
    private static com.tkay.core.a.c a;
    private final java.lang.String b;


    public c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "pacing_"
            r1.b = r0
            return
    }

    public static com.tkay.core.a.c a() {
            com.tkay.core.a.c r0 = com.tkay.core.a.c.a
            if (r0 != 0) goto Lb
            com.tkay.core.a.c r0 = new com.tkay.core.a.c
            r0.<init>()
            com.tkay.core.a.c.a = r0
        Lb:
            com.tkay.core.a.c r0 = com.tkay.core.a.c.a
            return r0
    }

    public static void a(java.lang.String r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L1b
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "pacing_"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L1b
            java.lang.String r4 = r2.concat(r4)     // Catch: java.lang.Exception -> L1b
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1b
            com.tkay.core.common.l.p.a(r0, r1, r4, r2)     // Catch: java.lang.Exception -> L1b
        L1b:
            return
    }

    public static boolean a(java.lang.String r10, com.tkay.core.c.d r11) {
            r0 = 1
            if (r11 != 0) goto L4
            return r0
        L4:
            long r1 = r11.ae()
            r3 = -1
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r2 = 0
            if (r1 != 0) goto L10
            return r2
        L10:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r3 = java.lang.String.valueOf(r10)
            java.lang.String r4 = "pacing_"
            java.lang.String r3 = r4.concat(r3)
            r4 = 0
            java.lang.Long r6 = java.lang.Long.valueOf(r4)
            java.lang.String r7 = "tkay_sdk"
            java.lang.Long r1 = com.tkay.core.common.l.p.a(r1, r7, r3, r6)
            long r6 = r1.longValue()
            long r8 = java.lang.System.currentTimeMillis()
            long r8 = r8 - r6
            int r1 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r1 >= 0) goto L3f
            a(r10)
            return r2
        L3f:
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r6
            long r10 = r11.ae()
            int r10 = (r3 > r10 ? 1 : (r3 == r10 ? 0 : -1))
            if (r10 >= 0) goto L4d
            return r0
        L4d:
            return r2
    }

    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.a.c$1 r1 = new com.tkay.core.a.c$1
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    public final boolean a(java.lang.String r11, com.tkay.core.common.f.aj r12) {
            r10 = this;
            r0 = 1
            if (r12 != 0) goto L4
            return r0
        L4:
            long r1 = r12.s()
            r3 = -1
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r2 = 0
            if (r1 != 0) goto L10
            return r2
        L10:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "pacing_"
            r3.<init>(r4)
            r3.append(r11)
            java.lang.String r4 = "_"
            r3.append(r4)
            java.lang.String r4 = r12.t()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r4 = 0
            java.lang.Long r6 = java.lang.Long.valueOf(r4)
            java.lang.String r7 = "tkay_sdk"
            java.lang.Long r1 = com.tkay.core.common.l.p.a(r1, r7, r3, r6)
            long r6 = r1.longValue()
            long r8 = java.lang.System.currentTimeMillis()
            long r8 = r8 - r6
            int r1 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r1 >= 0) goto L53
            java.lang.String r12 = r12.t()
            r10.a(r11, r12)
            return r2
        L53:
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r6
            long r11 = r12.s()
            int r11 = (r3 > r11 ? 1 : (r3 == r11 ? 0 : -1))
            if (r11 >= 0) goto L61
            return r0
        L61:
            return r2
    }
}
