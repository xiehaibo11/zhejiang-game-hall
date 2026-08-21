package com.xiaomi.push;

class dg extends com.xiaomi.push.df.b {
    final int a;
    final com.xiaomi.push.df a;
    java.io.File a;
    final java.lang.String a;
    final java.util.Date a;
    final boolean a;
    final java.lang.String b;
    final java.util.Date b;

    dg(com.xiaomi.push.df r1, int r2, java.util.Date r3, java.util.Date r4, java.lang.String r5, java.lang.String r6, boolean r7) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.a = r3
            r0.b = r4
            r0.a = r5
            r0.b = r6
            r0.a = r7
            r0.<init>(r1)
            return
    }

    @Override
    public void b() {
            r5 = this;
            boolean r0 = com.xiaomi.push.ad.d()
            if (r0 != 0) goto L7
            return
        L7:
            java.io.File r0 = new java.io.File     // Catch: java.lang.NullPointerException -> L4b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NullPointerException -> L4b
            r1.<init>()     // Catch: java.lang.NullPointerException -> L4b
            com.xiaomi.push.df r2 = r5.a     // Catch: java.lang.NullPointerException -> L4b
            android.content.Context r2 = com.xiaomi.push.df.a(r2)     // Catch: java.lang.NullPointerException -> L4b
            r3 = 0
            java.io.File r2 = r2.getExternalFilesDir(r3)     // Catch: java.lang.NullPointerException -> L4b
            r1.append(r2)     // Catch: java.lang.NullPointerException -> L4b
            java.lang.String r2 = "/.logcache"
            r1.append(r2)     // Catch: java.lang.NullPointerException -> L4b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.NullPointerException -> L4b
            r0.<init>(r1)     // Catch: java.lang.NullPointerException -> L4b
            r0.mkdirs()     // Catch: java.lang.NullPointerException -> L4b
            boolean r1 = r0.isDirectory()     // Catch: java.lang.NullPointerException -> L4b
            if (r1 == 0) goto L4b
            com.xiaomi.push.de r1 = new com.xiaomi.push.de     // Catch: java.lang.NullPointerException -> L4b
            r1.<init>()     // Catch: java.lang.NullPointerException -> L4b
            int r2 = r5.a     // Catch: java.lang.NullPointerException -> L4b
            r1.a(r2)     // Catch: java.lang.NullPointerException -> L4b
            com.xiaomi.push.df r2 = r5.a     // Catch: java.lang.NullPointerException -> L4b
            android.content.Context r2 = com.xiaomi.push.df.a(r2)     // Catch: java.lang.NullPointerException -> L4b
            java.util.Date r3 = r5.a     // Catch: java.lang.NullPointerException -> L4b
            java.util.Date r4 = r5.b     // Catch: java.lang.NullPointerException -> L4b
            java.io.File r0 = r1.a(r2, r3, r4, r0)     // Catch: java.lang.NullPointerException -> L4b
            r5.a = r0     // Catch: java.lang.NullPointerException -> L4b
        L4b:
            return
    }

    @Override
    public void c() {
            r8 = this;
            java.io.File r0 = r8.a
            if (r0 == 0) goto L23
            boolean r0 = r0.exists()
            if (r0 == 0) goto L23
            com.xiaomi.push.df r0 = r8.a
            java.util.concurrent.ConcurrentLinkedQueue r0 = com.xiaomi.push.df.a(r0)
            com.xiaomi.push.df$c r7 = new com.xiaomi.push.df$c
            com.xiaomi.push.df r2 = r8.a
            java.lang.String r3 = r8.a
            java.lang.String r4 = r8.b
            java.io.File r5 = r8.a
            boolean r6 = r8.a
            r1 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            r0.add(r7)
        L23:
            com.xiaomi.push.df r0 = r8.a
            r1 = 0
            com.xiaomi.push.df.a(r0, r1)
            return
    }
}
