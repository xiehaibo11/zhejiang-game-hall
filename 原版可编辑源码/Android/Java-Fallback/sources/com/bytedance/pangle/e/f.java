package com.bytedance.pangle.e;

public final class f {



    interface a {
        boolean a(java.lang.String r1, int r2);
    }

    public static void a() {
            boolean r0 = com.bytedance.pangle.util.i.d()
            if (r0 != 0) goto L12
            boolean r0 = com.bytedance.pangle.util.i.f()
            if (r0 != 0) goto L12
            boolean r0 = com.bytedance.pangle.util.i.b()
            if (r0 == 0) goto L25
        L12:
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            boolean r0 = com.bytedance.pangle.d.d.a(r0)
            if (r0 != 0) goto L1d
            return
        L1d:
            com.bytedance.pangle.e.f$1 r0 = new com.bytedance.pangle.e.f$1
            r0.<init>()
            com.bytedance.pangle.d.e.a(r0)
        L25:
            return
    }

    public static synchronized void b() {
            java.lang.Class<com.bytedance.pangle.e.f> r0 = com.bytedance.pangle.e.f.class
            monitor-enter(r0)
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L9d
            android.content.SharedPreferences r1 = com.bytedance.pangle.e.b.a(r1)     // Catch: java.lang.Throwable -> L9d
            java.util.Map r1 = r1.getAll()     // Catch: java.lang.Throwable -> L9d
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L9d
            if (r2 <= 0) goto L9b
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L9d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L9d
        L1d:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L9d
            if (r2 == 0) goto L9b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L9d
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L9d
            boolean r3 = com.bytedance.pangle.util.i.f()     // Catch: java.lang.Throwable -> L9d
            if (r3 == 0) goto L35
            com.bytedance.pangle.e.e r3 = new com.bytedance.pangle.e.e     // Catch: java.lang.Throwable -> L9d
            r3.<init>()     // Catch: java.lang.Throwable -> L9d
            goto L52
        L35:
            boolean r3 = com.bytedance.pangle.util.i.d()     // Catch: java.lang.Throwable -> L9d
            if (r3 == 0) goto L41
            com.bytedance.pangle.e.d r3 = new com.bytedance.pangle.e.d     // Catch: java.lang.Throwable -> L9d
            r3.<init>()     // Catch: java.lang.Throwable -> L9d
            goto L52
        L41:
            boolean r3 = com.bytedance.pangle.util.i.b()     // Catch: java.lang.Throwable -> L9d
            if (r3 == 0) goto L4d
            com.bytedance.pangle.e.c r3 = new com.bytedance.pangle.e.c     // Catch: java.lang.Throwable -> L9d
            r3.<init>()     // Catch: java.lang.Throwable -> L9d
            goto L52
        L4d:
            com.bytedance.pangle.e.f$2 r3 = new com.bytedance.pangle.e.f$2     // Catch: java.lang.Throwable -> L9d
            r3.<init>()     // Catch: java.lang.Throwable -> L9d
        L52:
            java.lang.Object r4 = r2.getKey()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r5 = r2.getValue()     // Catch: java.lang.Throwable -> L9d
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> L9d
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> L9d
            boolean r3 = r3.a(r4, r5)     // Catch: java.lang.Throwable -> L9d
            if (r3 == 0) goto L1d
            android.app.Application r3 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L9d
            android.content.SharedPreferences r3 = com.bytedance.pangle.e.b.a(r3)     // Catch: java.lang.Throwable -> L9d
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r4 = r2.getKey()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L9d
            android.content.SharedPreferences$Editor r3 = r3.remove(r4)     // Catch: java.lang.Throwable -> L9d
            r3.apply()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r3 = "Zeus/load_pangle"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            java.lang.String r5 = "fullDex2oat:"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L9d
            java.lang.Object r2 = r2.getKey()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L9d
            r4.append(r2)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L9d
            com.bytedance.pangle.log.ZeusLogger.i(r3, r2)     // Catch: java.lang.Throwable -> L9d
            goto L1d
        L9b:
            monitor-exit(r0)
            return
        L9d:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
