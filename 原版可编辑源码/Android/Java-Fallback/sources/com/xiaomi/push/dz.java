package com.xiaomi.push;

public class dz {
    public static void a(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r2)
            com.xiaomi.push.ea r1 = new com.xiaomi.push.ea
            r1.<init>(r2, r3, r4, r5)
            r0.a(r1)
            return
    }

    private static void a(android.content.Context r1, java.util.HashMap<java.lang.String, java.lang.String> r2) {
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r1)
            com.xiaomi.push.eh r0 = r0.a()
            if (r0 == 0) goto Ld
            r0.a(r1, r2)
        Ld:
            return
    }

    static void b(android.content.Context r0, java.lang.String r1, int r2, java.lang.String r3) {
            c(r0, r1, r2, r3)
            return
    }

    private static void b(android.content.Context r1, java.util.HashMap<java.lang.String, java.lang.String> r2) {
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r1)
            com.xiaomi.push.eh r0 = r0.a()
            if (r0 == 0) goto Ld
            r0.c(r1, r2)
        Ld:
            return
    }

    private static void c(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            if (r2 == 0) goto L45
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            goto L45
        L9:
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = "awake_info"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "event_type"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L41
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "description"
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L41
            com.xiaomi.push.ed r3 = com.xiaomi.push.ed.a(r2)     // Catch: java.lang.Exception -> L41
            int r3 = r3.a()     // Catch: java.lang.Exception -> L41
            r4 = 1
            if (r3 == r4) goto L3a
            r4 = 2
            if (r3 == r4) goto L36
            r4 = 3
            if (r3 == r4) goto L33
            goto L3d
        L33:
            a(r2, r0)     // Catch: java.lang.Exception -> L41
        L36:
            c(r2, r0)     // Catch: java.lang.Exception -> L41
            goto L3d
        L3a:
            a(r2, r0)     // Catch: java.lang.Exception -> L41
        L3d:
            b(r2, r0)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r2 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L45:
            return
    }

    private static void c(android.content.Context r1, java.util.HashMap<java.lang.String, java.lang.String> r2) {
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r1)
            com.xiaomi.push.eh r0 = r0.a()
            if (r0 == 0) goto Ld
            r0.b(r1, r2)
        Ld:
            return
    }
}
