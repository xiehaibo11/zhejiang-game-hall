package com.kuaishou.weapon.p0;

public class bs {
    private static java.lang.String a;

    public bs() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(int r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 3
            if (r7 >= r1) goto L9
            r7 = r1
        L9:
            java.security.SecureRandom r2 = new java.security.SecureRandom
            r2.<init>()
            r3 = 0
        Lf:
            if (r3 >= r7) goto L3e
            int r4 = r2.nextInt(r1)
            if (r4 == 0) goto L32
            r5 = 25
            r6 = 1
            if (r4 == r6) goto L27
            r6 = 2
            if (r4 == r6) goto L20
            goto L3b
        L20:
            int r4 = r2.nextInt(r5)
            int r4 = r4 + 97
            goto L2d
        L27:
            int r4 = r2.nextInt(r5)
            int r4 = r4 + 65
        L2d:
            char r4 = (char) r4
            r0.append(r4)
            goto L3b
        L32:
            r4 = 10
            int r4 = r2.nextInt(r4)
            r0.append(r4)
        L3b:
            int r3 = r3 + 1
            goto Lf
        L3e:
            java.lang.String r7 = r0.toString()
            return r7
    }

    public static synchronized java.lang.String a(android.content.Context r5) {
            java.lang.Class<com.kuaishou.weapon.p0.bs> r0 = com.kuaishou.weapon.p0.bs.class
            monitor-enter(r0)
            java.lang.String r1 = com.kuaishou.weapon.p0.bs.a     // Catch: java.lang.Throwable -> L9f
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L9f
            if (r1 != 0) goto Lf
            java.lang.String r5 = com.kuaishou.weapon.p0.bs.a     // Catch: java.lang.Throwable -> L9f
            monitor-exit(r0)
            return r5
        Lf:
            java.lang.String r1 = "re_po_rt"
            com.kuaishou.weapon.p0.h r1 = com.kuaishou.weapon.p0.h.a(r5, r1)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r2 = "a1_p_s_p_s"
            boolean r2 = r1.e(r2)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r3 = "a1_p_s_p_s_c_b"
            boolean r1 = r1.e(r3)     // Catch: java.lang.Throwable -> L9f
            com.kuaishou.weapon.p0.df r3 = com.kuaishou.weapon.p0.df.a(r5)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r3 = com.kuaishou.weapon.p0.bt.a(r5, r3)     // Catch: java.lang.Throwable -> L9f
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L9f
            if (r4 != 0) goto L33
            com.kuaishou.weapon.p0.bs.a = r3     // Catch: java.lang.Throwable -> L9f
            monitor-exit(r0)
            return r3
        L33:
            java.lang.String r3 = ""
            java.lang.String r4 = ""
            if (r2 != 0) goto L3b
            if (r1 == 0) goto L43
        L3b:
            java.lang.String r3 = com.kuaishou.weapon.p0.bg.c(r5)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.f(r5)     // Catch: java.lang.Throwable -> L9f
        L43:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L9f
            if (r1 != 0) goto L54
            java.lang.String r1 = "RISK"
            boolean r1 = r3.startsWith(r1)     // Catch: java.lang.Throwable -> L9f
            if (r1 == 0) goto L52
            goto L54
        L52:
            r1 = r3
            goto L56
        L54:
            java.lang.String r1 = "0"
        L56:
            java.lang.String r2 = a(r5, r3, r4)     // Catch: java.lang.Throwable -> L9f
            java.lang.StringBuffer r3 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L9f
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L9f
            java.lang.StringBuffer r1 = r3.reverse()     // Catch: java.lang.Throwable -> L9f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L9f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9f
            r3.<init>()     // Catch: java.lang.Throwable -> L9f
            java.lang.String r2 = r2.toUpperCase()     // Catch: java.lang.Throwable -> L9f
            r3.append(r2)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r2 = "|"
            r3.append(r2)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r1 = r1.toUpperCase()     // Catch: java.lang.Throwable -> L9f
            r3.append(r1)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L9f
            com.kuaishou.weapon.p0.bm r2 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Throwable -> L9f
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r3 = "OTUzc3E1N0w5NTIzMW80OUQxMGo3R1dFa0ZiandHT0w="
            java.lang.String r1 = r2.a(r1, r3)     // Catch: java.lang.Throwable -> L9f
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L9f
            if (r2 != 0) goto L9f
            com.kuaishou.weapon.p0.df r2 = com.kuaishou.weapon.p0.df.a(r5)     // Catch: java.lang.Throwable -> L9f
            com.kuaishou.weapon.p0.bt.a(r1, r5, r2)     // Catch: java.lang.Throwable -> L9f
            com.kuaishou.weapon.p0.bs.a = r1     // Catch: java.lang.Throwable -> L9f
            monitor-exit(r0)
            return r1
        L9f:
            java.lang.String r5 = ""
            monitor-exit(r0)
            return r5
        La3:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static java.lang.String a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = ""
            java.util.UUID r1 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L11
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L33
            goto L12
        L11:
            r3 = r0
        L12:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r2.<init>()     // Catch: java.lang.Throwable -> L33
            r2.append(r4)     // Catch: java.lang.Throwable -> L33
            r2.append(r5)     // Catch: java.lang.Throwable -> L33
            r2.append(r3)     // Catch: java.lang.Throwable -> L33
            r2.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = r2.toString()     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = com.kuaishou.weapon.p0.f.a(r3)     // Catch: java.lang.Throwable -> L33
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L33
            if (r4 == 0) goto L32
            goto L33
        L32:
            r0 = r3
        L33:
            return r0
    }
}
