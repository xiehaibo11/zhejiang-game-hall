package com.kuaishou.weapon.p0;

public final class br {
    public static final java.lang.String a = "weapon.set";
    private static java.lang.String b = "Y29tLmt3YWkud2VhcG9u";
    private static java.lang.String c = "Y29tLmt3YWkud2VhcG9uLnNldHRpbmdz";
    private static java.lang.String d = "Y29tLmt3YWkud2VhcG9uLmZpbGU=";
    private static java.lang.String e;

    static {
            r0 = 2
            java.lang.String r1 = "Y29tLmt3YWkud2VhcG9u"
            java.lang.String r1 = com.kuaishou.weapon.p0.c.b(r1, r0)
            com.kuaishou.weapon.p0.br.b = r1
            java.lang.String r1 = com.kuaishou.weapon.p0.br.c
            java.lang.String r1 = com.kuaishou.weapon.p0.c.b(r1, r0)
            com.kuaishou.weapon.p0.br.c = r1
            java.lang.String r1 = com.kuaishou.weapon.p0.br.d
            java.lang.String r0 = com.kuaishou.weapon.p0.c.b(r1, r0)
            com.kuaishou.weapon.p0.br.d = r0
            return
    }

    private br() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized java.lang.String a(android.content.Context r2) {
            java.lang.Class<com.kuaishou.weapon.p0.br> r0 = com.kuaishou.weapon.p0.br.class
            monitor-enter(r0)
            java.lang.String r1 = com.kuaishou.weapon.p0.br.e     // Catch: java.lang.Throwable -> L17
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto Lf
            java.lang.String r2 = com.kuaishou.weapon.p0.br.e     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return r2
        Lf:
            java.lang.String r2 = c(r2)     // Catch: java.lang.Throwable -> L17
            com.kuaishou.weapon.p0.br.e = r2     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return r2
        L17:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static java.lang.String a(android.content.Context r0, java.lang.String r1) {
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = android.provider.Settings.System.getString(r0, r1)     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    private static void b(android.content.Context r0, java.lang.String r1) {
            c(r0, r1)
            d(r0, r1)
            return
    }

    public static boolean b(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L12
            android.content.Context r2 = r2.getApplicationContext()
            boolean r2 = android.provider.Settings.System.canWrite(r2)
            if (r2 != 0) goto L12
            r2 = 0
            return r2
        L12:
            r2 = 1
            return r2
    }

    private static java.lang.String c(android.content.Context r2) {
            java.lang.String r0 = e(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = d(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L18
            b(r2, r0)
        L18:
            return r0
    }

    private static void c(android.content.Context r3, java.lang.String r4) {
            boolean r0 = b(r3)     // Catch: java.lang.Exception -> L25
            if (r0 != 0) goto L7
            return
        L7:
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Exception -> L25
            java.lang.String r0 = com.kuaishou.weapon.p0.br.c     // Catch: java.lang.Exception -> L25
            android.provider.Settings.System.putString(r3, r0, r4)     // Catch: java.lang.Exception -> L25
            java.lang.String r4 = "weapon.set"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L25
            r0.<init>()     // Catch: java.lang.Exception -> L25
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L25
            r0.append(r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L25
            android.provider.Settings.System.putString(r3, r4, r0)     // Catch: java.lang.Exception -> L25
        L25:
            return
    }

    private static java.lang.String d(android.content.Context r5) {
            java.lang.String r0 = ""
            java.lang.String r1 = "re_po_rt"
            com.kuaishou.weapon.p0.h r1 = com.kuaishou.weapon.p0.h.a(r5, r1)     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = "a1_p_s_p_s"
            boolean r2 = r1.e(r2)     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = "a1_p_s_p_s_c_b"
            boolean r1 = r1.e(r3)     // Catch: java.lang.Throwable -> L93
            if (r2 != 0) goto L1b
            if (r1 == 0) goto L19
            goto L1b
        L19:
            r3 = r0
            goto L1f
        L1b:
            java.lang.String r3 = com.kuaishou.weapon.p0.bg.f(r5)     // Catch: java.lang.Throwable -> L93
        L1f:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L93
            if (r4 != 0) goto L26
            goto L2e
        L26:
            java.util.UUID r3 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L93
        L2e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r4.<init>()     // Catch: java.lang.Throwable -> L93
            r4.append(r3)     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = com.kuaishou.weapon.p0.br.b     // Catch: java.lang.Throwable -> L93
            r4.append(r3)     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L93
            if (r2 != 0) goto L46
            if (r1 == 0) goto L44
            goto L46
        L44:
            r1 = r0
            goto L4a
        L46:
            java.lang.String r1 = com.kuaishou.weapon.p0.bg.c(r5)     // Catch: java.lang.Throwable -> L93
        L4a:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L93
            if (r2 != 0) goto L58
            java.lang.String r2 = "RISK"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L93
            if (r2 == 0) goto L5a
        L58:
            java.lang.String r1 = "0"
        L5a:
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L93
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L93
            java.lang.StringBuffer r1 = r2.reverse()     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = com.kuaishou.weapon.p0.f.a(r3)     // Catch: java.lang.Throwable -> L93
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r3.<init>()     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = r2.toUpperCase()     // Catch: java.lang.Throwable -> L93
            r3.append(r2)     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = "|"
            r3.append(r2)     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = r1.toUpperCase()     // Catch: java.lang.Throwable -> L93
            r3.append(r1)     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L93
            com.kuaishou.weapon.p0.bm r2 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Throwable -> L93
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = "OTUzc3E1N0w5NTIzMW80OUQxMGo3R1dFa0ZiandHT0w="
            java.lang.String r5 = r2.a(r1, r5)     // Catch: java.lang.Throwable -> L93
            return r5
        L93:
            return r0
    }

    private static void d(android.content.Context r0, java.lang.String r1) {
            com.kuaishou.weapon.p0.df r0 = com.kuaishou.weapon.p0.df.a(r0)
            r0.c(r1)
            return
    }

    private static java.lang.String e(android.content.Context r3) {
            java.lang.String r0 = com.kuaishou.weapon.p0.br.c
            java.lang.String r0 = a(r3, r0)
            java.lang.String r1 = f(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L17
            boolean r2 = android.text.TextUtils.equals(r0, r1)
            if (r2 == 0) goto L17
            return r0
        L17:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L21
            d(r3, r0)
            return r0
        L21:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L2b
            c(r3, r1)
            return r1
        L2b:
            java.lang.String r3 = ""
            return r3
    }

    private static java.lang.String f(android.content.Context r0) {
            com.kuaishou.weapon.p0.df r0 = com.kuaishou.weapon.p0.df.a(r0)     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.d()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }
}
