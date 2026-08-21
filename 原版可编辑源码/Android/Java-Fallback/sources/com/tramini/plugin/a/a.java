package com.tramini.plugin.a;

public class a {
    private static volatile com.tramini.plugin.a.a a;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tramini.plugin.a.a a() {
            com.tramini.plugin.a.a r0 = com.tramini.plugin.a.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tramini.plugin.a.a> r0 = com.tramini.plugin.a.a.class
            monitor-enter(r0)
            com.tramini.plugin.a.a r1 = com.tramini.plugin.a.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tramini.plugin.a.a r1 = new com.tramini.plugin.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tramini.plugin.a.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tramini.plugin.a.a r0 = com.tramini.plugin.a.a.a
            return r0
    }

    private static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return r2
        L7:
            return r1
    }

    public static java.lang.String b() {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            android.content.Context r0 = r0.b()
            com.tramini.plugin.b.a r0 = com.tramini.plugin.b.b.b(r0)
            java.lang.String r1 = "https://aa.birdgesdk.com/v1/d_api"
            if (r0 == 0) goto L19
            java.lang.String r0 = r0.n()
            java.lang.String r0 = a(r0, r1)
            return r0
        L19:
            return r1
    }

    public static java.lang.String c() {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            android.content.Context r0 = r0.b()
            com.tramini.plugin.b.a r0 = com.tramini.plugin.b.b.b(r0)
            java.lang.String r1 = "https://pitk.birdgesdk.com/v1/ptk"
            if (r0 == 0) goto L19
            java.lang.String r0 = r0.o()
            java.lang.String r0 = a(r0, r1)
            return r0
        L19:
            return r1
    }
}
