package com.kwad.sdk.ranger;

public class b {
    public static final java.lang.String TAG = null;
    private java.lang.String value;


    static class a {
        private static final com.kwad.sdk.ranger.b aGC = null;

        static {
                com.kwad.sdk.ranger.b r0 = new com.kwad.sdk.ranger.b
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.ranger.b.a.aGC = r0
                return
        }

        static com.kwad.sdk.ranger.b Ho() {
                com.kwad.sdk.ranger.b r0 = com.kwad.sdk.ranger.b.a.aGC
                return r0
        }
    }

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Ranger_"
            r0.<init>(r1)
            java.lang.Class<com.kwad.sdk.ranger.b> r1 = com.kwad.sdk.ranger.b.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.ranger.b.TAG = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.ranger.b Hn() {
            com.kwad.sdk.ranger.b r0 = com.kwad.sdk.ranger.b.a.Ho()
            return r0
    }

    static com.kwad.sdk.ranger.b.a.c a(com.kwad.sdk.ranger.b r0, java.lang.String r1, java.lang.String r2) {
            com.kwad.sdk.ranger.b.a.c r0 = ak(r1, r2)
            return r0
    }

    private static java.lang.Object a(com.kwad.sdk.ranger.a.a r2, boolean r3, java.lang.Class<?> r4) {
            com.kwad.sdk.ranger.a.a$b r0 = r2.aHf
            java.lang.Object[] r0 = r0.Hx()
            if (r0 == 0) goto L22
            int r1 = r0.length
            if (r1 != 0) goto Lc
            goto L22
        Lc:
            if (r3 == 0) goto L17
            com.kwad.sdk.ranger.a.a$b r2 = r2.aHf
            java.lang.String r2 = r2.name
            java.lang.Object r2 = com.kwad.sdk.utils.s.b(r4, r2, r0)
            goto L3c
        L17:
            java.lang.Object r3 = r2.aHa
            com.kwad.sdk.ranger.a.a$b r2 = r2.aHf
            java.lang.String r2 = r2.name
            java.lang.Object r2 = com.kwad.sdk.utils.s.f(r3, r2, r0)
            goto L3c
        L22:
            r0 = 0
            if (r3 == 0) goto L30
            com.kwad.sdk.ranger.a.a$b r2 = r2.aHf
            java.lang.String r2 = r2.name
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.Object r2 = com.kwad.sdk.utils.s.b(r4, r2, r3)
            goto L3c
        L30:
            java.lang.Object r3 = r2.aHa
            com.kwad.sdk.ranger.a.a$b r2 = r2.aHf
            java.lang.String r2 = r2.name
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.Object r2 = com.kwad.sdk.utils.s.f(r3, r2, r4)
        L3c:
            return r2
    }

    static java.lang.String a(com.kwad.sdk.ranger.b r0) {
            java.lang.String r0 = r0.value
            return r0
    }

    private void a(com.kwad.sdk.ranger.a.a r4) {
            r3 = this;
            com.kwad.sdk.ranger.a.a r0 = r4.aHg
            if (r0 == 0) goto L36
            com.kwad.sdk.ranger.a.a r0 = r4.aHg
            boolean r0 = r0.Hu()
            if (r0 != 0) goto L36
            java.lang.String r0 = r4.aHc
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            com.kwad.sdk.ranger.a.a r0 = r4.aHg
            java.lang.Object r1 = c(r4)
        L1a:
            r0.aHa = r1
            goto L30
        L1d:
            com.kwad.sdk.ranger.a.a$b r0 = r4.aHf
            if (r0 == 0) goto L30
            com.kwad.sdk.ranger.a.a$b r0 = r4.aHf
            boolean r0 = r0.Hu()
            if (r0 != 0) goto L30
            com.kwad.sdk.ranger.a.a r0 = r4.aHg
            java.lang.Object r1 = r3.b(r4)
            goto L1a
        L30:
            com.kwad.sdk.ranger.a.a r4 = r4.aHg
            r3.a(r4)
            return
        L36:
            java.lang.String r0 = r4.aHc
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L46
            java.lang.Object r4 = c(r4)
            r3.l(r4)
            return
        L46:
            com.kwad.sdk.ranger.a.a$b r0 = r4.aHf
            if (r0 == 0) goto L5a
            com.kwad.sdk.ranger.a.a$b r0 = r4.aHf
            boolean r0 = r0.Hu()
            if (r0 != 0) goto L5a
            java.lang.Object r4 = r3.b(r4)
            r3.l(r4)
            return
        L5a:
            java.lang.String r0 = com.kwad.sdk.ranger.b.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "node.nodeClassName:"
            r1.<init>(r2)
            java.lang.String r2 = r4.aHb
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            java.lang.String r4 = r4.aHb
            boolean r4 = com.kwad.sdk.utils.s.fu(r4)
            if (r4 == 0) goto L7a
            java.lang.String r4 = "true"
            goto L7c
        L7a:
            java.lang.String r4 = "false"
        L7c:
            r3.value = r4
            return
    }

    static void a(com.kwad.sdk.ranger.b r0, com.kwad.sdk.ranger.a.a r1) {
            r0.a(r1)
            return
    }

    private static com.kwad.sdk.ranger.b.a.c ak(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L17
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L17
        Ld:
            com.kwad.sdk.ranger.b.a.c r0 = new com.kwad.sdk.ranger.b.a.c
            r0.<init>()
            r0.name = r1
            r0.aHs = r2
            return r0
        L17:
            r1 = 0
            return r1
    }

    private java.lang.Object b(com.kwad.sdk.ranger.a.a r4) {
            r3 = this;
            com.kwad.sdk.ranger.a.a$b r0 = r4.aHf
            boolean r0 = r0.aHo
            r1 = 0
            if (r0 == 0) goto L35
            java.lang.String r0 = r4.aHb     // Catch: java.lang.Exception -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2a
            if (r0 != 0) goto L16
            java.lang.String r0 = r4.aHb     // Catch: java.lang.Exception -> L2a
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L2a
            goto L22
        L16:
            java.lang.Object r0 = r4.aHa     // Catch: java.lang.Exception -> L2a
            if (r0 == 0) goto L21
            java.lang.Object r0 = r4.aHa     // Catch: java.lang.Exception -> L2a
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.Exception -> L2a
            goto L22
        L21:
            r0 = r1
        L22:
            if (r0 == 0) goto L3e
            r2 = 1
            java.lang.Object r1 = a(r4, r2, r0)     // Catch: java.lang.Exception -> L2a
            goto L3e
        L2a:
            r4 = move-exception
            java.lang.String r0 = com.kwad.sdk.ranger.b.TAG
            java.lang.String r4 = android.util.Log.getStackTraceString(r4)
            com.kwad.sdk.core.e.c.w(r0, r4)
            goto L3e
        L35:
            java.lang.Object r0 = r4.aHa
            if (r0 == 0) goto L3e
            r0 = 0
            java.lang.Object r1 = a(r4, r0, r1)
        L3e:
            return r1
    }

    private static java.lang.Object c(com.kwad.sdk.ranger.a.a r1) {
            boolean r0 = r1.aHd
            if (r0 == 0) goto L1c
            java.lang.String r0 = r1.aHb     // Catch: java.lang.Exception -> L11
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L11
            java.lang.String r1 = r1.aHc     // Catch: java.lang.Exception -> L11
            java.lang.Object r1 = com.kwad.sdk.utils.s.c(r0, r1)     // Catch: java.lang.Exception -> L11
            goto L2a
        L11:
            r1 = move-exception
            java.lang.String r0 = com.kwad.sdk.ranger.b.TAG
            java.lang.String r1 = android.util.Log.getStackTraceString(r1)
            com.kwad.sdk.core.e.c.w(r0, r1)
            goto L29
        L1c:
            java.lang.Object r0 = r1.aHa
            if (r0 == 0) goto L29
            java.lang.Object r0 = r1.aHa
            java.lang.String r1 = r1.aHc
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r0, r1)
            goto L2a
        L29:
            r1 = 0
        L2a:
            return r1
    }

    private void l(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto L9
            java.lang.String r2 = java.lang.String.valueOf(r2)
        L6:
            r1.value = r2
            return
        L9:
            java.lang.String r2 = com.kwad.sdk.ranger.b.TAG
            java.lang.String r0 = "value is null by ob null"
            com.kwad.sdk.core.e.c.w(r2, r0)
            java.lang.String r2 = ""
            goto L6
    }

    public final void b(com.kwad.sdk.ranger.d r4) {
            r3 = this;
            if (r4 == 0) goto L1d
            java.util.List<com.kwad.sdk.ranger.a.a> r0 = r4.aGK
            if (r0 == 0) goto L1d
            java.util.List<com.kwad.sdk.ranger.a.a> r0 = r4.aGK
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lf
            goto L1d
        Lf:
            java.util.List<com.kwad.sdk.ranger.a.a> r4 = r4.aGK
            com.kwad.sdk.ranger.b$1 r0 = new com.kwad.sdk.ranger.b$1
            r0.<init>(r3, r4)
            r1 = 120(0x78, double:5.93E-322)
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS
            com.kwad.sdk.utils.g.schedule(r0, r1, r4)
        L1d:
            return
    }
}
