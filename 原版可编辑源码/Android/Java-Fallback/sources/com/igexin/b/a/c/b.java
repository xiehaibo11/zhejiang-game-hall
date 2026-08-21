package com.igexin.b.a.c;

public class b {
    public static boolean a;

    static {
            java.lang.String r0 = com.igexin.push.config.n.a
            java.lang.String r1 = "debug"
            boolean r0 = r0.equals(r1)
            com.igexin.b.a.c.b.a = r0
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.igexin.b.a.c.b.a
            if (r0 == 0) goto L7
            android.util.Log.d(r1, r2)
        L7:
            return
    }

    public static void a(java.lang.String r4, java.lang.Object... r5) {
            boolean r0 = com.igexin.b.a.c.b.a
            if (r0 != 0) goto L13
            boolean r0 = com.igexin.push.core.d.K
            if (r0 == 0) goto L12
            long r0 = com.igexin.push.core.d.L
            long r2 = java.lang.System.currentTimeMillis()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L13
        L12:
            return
        L13:
            if (r5 == 0) goto L1c
            int r0 = r5.length
            if (r0 <= 0) goto L1c
            java.lang.String r4 = java.lang.String.format(r4, r5)
        L1c:
            java.text.SimpleDateFormat r5 = new java.text.SimpleDateFormat
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss:SSS"
            r5.<init>(r1, r0)
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            java.lang.String r5 = r5.format(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = "|"
            r0.append(r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.igexin.push.f.a r5 = com.igexin.push.f.a.i()
            r5.a(r4)
            return
    }

    public static void b(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.igexin.b.a.c.b.a
            if (r0 == 0) goto L7
            android.util.Log.e(r1, r2)
        L7:
            return
    }
}
