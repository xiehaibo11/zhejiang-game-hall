package com.tkay.expressad.foundation.g.f.h;

public class a {
    private static final java.lang.String b = null;
    protected android.content.Context a;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.h.a> r0 = com.tkay.expressad.foundation.g.f.h.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.h.a.b = r0
            return
    }

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto L10
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r1 = r1.d()
            r0.a = r1
            return
        L10:
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            return
    }

    private void a(int r9, java.lang.String r10, com.tkay.expressad.foundation.g.f.h.b r11, com.tkay.expressad.foundation.g.f.e r12) {
            r8 = this;
            java.util.Map r0 = r11.b()
            java.lang.String r1 = "sign"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 != 0) goto L10
            java.lang.String r0 = ""
        L10:
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = java.lang.String.valueOf(r1)
            java.lang.String r4 = "ts"
            r11.a(r4, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = r3.toString()
            java.lang.String r0 = com.tkay.expressad.foundation.h.p.a(r0)
            java.lang.String r1 = "st"
            r11.a(r1, r0)
            com.tkay.expressad.foundation.g.f.b r6 = new com.tkay.expressad.foundation.g.f.b
            r6.<init>()
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r7 = r12
            r2.b(r3, r4, r5, r6, r7)
            return
    }

    private void a(int r6, java.lang.String r7, com.tkay.expressad.foundation.g.f.h.b r8, com.tkay.expressad.foundation.g.f.l r9, com.tkay.expressad.foundation.g.f.e r10) {
            r5 = this;
            if (r8 != 0) goto L8
            com.tkay.expressad.foundation.g.f.h.b r0 = new com.tkay.expressad.foundation.g.f.h.b     // Catch: java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Exception -> L41
            r8 = r0
        L8:
            r5.a(r7, r8)     // Catch: java.lang.Exception -> L41
            java.util.Map r0 = r8.b()     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = "sign"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L41
            if (r0 != 0) goto L1b
            java.lang.String r0 = ""
        L1b:
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "ts"
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L41
            r8.a(r3, r4)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "st"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r4.<init>()     // Catch: java.lang.Exception -> L41
            r4.append(r0)     // Catch: java.lang.Exception -> L41
            r4.append(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = com.tkay.expressad.foundation.h.p.a(r0)     // Catch: java.lang.Exception -> L41
            r8.a(r3, r0)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r0 = move-exception
            r0.getMessage()
        L45:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r7 = "?"
            r0.append(r7)
            java.lang.String r7 = r8.toString()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8 = 0
            r0 = 0
            if (r6 == 0) goto L74
            r1 = 1
            if (r6 == r1) goto L6e
            r1 = 2
            if (r6 == r1) goto L68
            goto L7a
        L68:
            com.tkay.expressad.foundation.g.f.d.c r6 = new com.tkay.expressad.foundation.g.f.d.c
            r6.<init>(r8, r7, r0, r10)
            goto L79
        L6e:
            com.tkay.expressad.foundation.g.f.d.d r6 = new com.tkay.expressad.foundation.g.f.d.d
            r6.<init>(r8, r7, r0, r10)
            goto L79
        L74:
            com.tkay.expressad.foundation.g.f.d.g r6 = new com.tkay.expressad.foundation.g.f.d.g
            r6.<init>(r8, r7, r0, r10)
        L79:
            r0 = r6
        L7a:
            if (r0 == 0) goto L82
            r0.a(r9)
            com.tkay.expressad.foundation.g.f.m.a(r0)
        L82:
            return
    }

    public static void a(java.io.File r1, java.lang.String r2, com.tkay.expressad.foundation.g.f.e r3) {
            com.tkay.expressad.foundation.g.f.d.b r0 = com.tkay.expressad.foundation.g.f.m.a()
            r0.a(r1, r2, r3)
            return
    }

    private void b(int r7, java.lang.String r8, com.tkay.expressad.foundation.g.f.h.b r9, com.tkay.expressad.foundation.g.f.e r10) {
            r6 = this;
            com.tkay.expressad.foundation.g.f.b r4 = new com.tkay.expressad.foundation.g.f.b
            r4.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.b(r1, r2, r3, r4, r5)
            return
    }

    private void b(int r6, java.lang.String r7, com.tkay.expressad.foundation.g.f.h.b r8, com.tkay.expressad.foundation.g.f.l r9, com.tkay.expressad.foundation.g.f.e r10) {
            r5 = this;
            if (r8 != 0) goto L8
            com.tkay.expressad.foundation.g.f.h.b r0 = new com.tkay.expressad.foundation.g.f.h.b     // Catch: java.lang.Exception -> Lc
            r0.<init>()     // Catch: java.lang.Exception -> Lc
            r8 = r0
        L8:
            r5.a(r7, r8)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.getMessage()
        L10:
            r0 = 0
            java.lang.String r1 = "application/x-www-form-urlencoded"
            java.lang.String r2 = "Content-Type"
            r3 = 1
            if (r6 == 0) goto L38
            if (r6 == r3) goto L2b
            r4 = 2
            if (r6 == r4) goto L1e
            goto L44
        L1e:
            com.tkay.expressad.foundation.g.f.d.c r0 = new com.tkay.expressad.foundation.g.f.d.c
            java.lang.String r6 = r8.toString()
            r0.<init>(r3, r7, r6, r10)
            r0.a(r2, r1)
            goto L44
        L2b:
            com.tkay.expressad.foundation.g.f.d.d r0 = new com.tkay.expressad.foundation.g.f.d.d
            java.lang.String r6 = r8.toString()
            r0.<init>(r3, r7, r6, r10)
            r0.a(r2, r1)
            goto L44
        L38:
            com.tkay.expressad.foundation.g.f.d.g r0 = new com.tkay.expressad.foundation.g.f.d.g
            java.lang.String r6 = r8.toString()
            r0.<init>(r3, r7, r6, r10)
            r0.a(r2, r1)
        L44:
            if (r0 == 0) goto L4c
            r0.a(r9)
            com.tkay.expressad.foundation.g.f.m.a(r0)
        L4c:
            return
    }

    public void a(java.lang.String r4, com.tkay.expressad.foundation.g.f.h.b r5) {
            r3 = this;
            if (r5 == 0) goto L42
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.cy
            java.lang.String r1 = "open"
            r5.a(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.expressad.foundation.g.f.a.a()
            long r1 = com.tkay.expressad.foundation.g.f.a.b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "band_width"
            r5.a(r1, r0)
            java.util.Map r0 = r5.b()
            java.lang.String r1 = "unit_id"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L42
            com.tkay.expressad.out.e r1 = com.tkay.expressad.out.e.a()
            java.lang.String r4 = r1.a(r0, r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L42
            java.lang.String r0 = "ch_info"
            r5.a(r0, r4)
        L42:
            return
    }

    public final void a(java.lang.String r7, com.tkay.expressad.foundation.g.f.h.b r8, com.tkay.expressad.foundation.g.f.e r9) {
            r6 = this;
            com.tkay.expressad.foundation.g.f.b r0 = new com.tkay.expressad.foundation.g.f.b
            r0.<init>()
            if (r8 != 0) goto Ld
            com.tkay.expressad.foundation.g.f.h.b r1 = new com.tkay.expressad.foundation.g.f.h.b     // Catch: java.lang.Exception -> L46
            r1.<init>()     // Catch: java.lang.Exception -> L46
            r8 = r1
        Ld:
            r6.a(r7, r8)     // Catch: java.lang.Exception -> L46
            java.util.Map r1 = r8.b()     // Catch: java.lang.Exception -> L46
            java.lang.String r2 = "sign"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L20
            java.lang.String r1 = ""
        L20:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L46
            java.lang.String r4 = "ts"
            java.lang.String r5 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L46
            r8.a(r4, r5)     // Catch: java.lang.Exception -> L46
            java.lang.String r4 = "st"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L46
            r5.<init>()     // Catch: java.lang.Exception -> L46
            r5.append(r1)     // Catch: java.lang.Exception -> L46
            r5.append(r2)     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = com.tkay.expressad.foundation.h.p.a(r1)     // Catch: java.lang.Exception -> L46
            r8.a(r4, r1)     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r1 = move-exception
            r1.getMessage()
        L4a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            java.lang.String r7 = "?"
            r1.append(r7)
            java.lang.String r7 = r8.toString()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.tkay.expressad.foundation.g.f.d.g r8 = new com.tkay.expressad.foundation.g.f.d.g
            r1 = 0
            r2 = 0
            r8.<init>(r1, r7, r2, r9)
            r8.a(r0)
            com.tkay.expressad.foundation.g.f.m.a(r8)
            return
    }
}
