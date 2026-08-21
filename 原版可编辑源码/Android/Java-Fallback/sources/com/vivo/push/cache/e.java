package com.vivo.push.cache;

public final class e extends com.vivo.push.cache.c<com.vivo.push.model.a> {
    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "com.vivo.pushservice.other"
            return r0
    }

    @Override
    public final java.util.List<com.vivo.push.model.a> a(java.lang.String r9) {
            r8 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 == 0) goto L8
            r9 = 0
            return r9
        L8:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r9 = r9.trim()
            java.lang.String r1 = "@#"
            java.lang.String[] r9 = r9.split(r1)
            int r1 = r9.length
            r2 = 0
            r3 = r2
        L1a:
            if (r3 >= r1) goto L5a
            r4 = r9[r3]
            java.lang.String r4 = r4.trim()
            java.lang.String r5 = r4.trim()
            java.lang.String r6 = ","
            java.lang.String[] r5 = r5.split(r6)
            int r6 = r5.length
            r7 = 2
            if (r6 < r7) goto L57
            com.vivo.push.model.a r6 = new com.vivo.push.model.a     // Catch: java.lang.Exception -> L47
            r7 = r5[r2]     // Catch: java.lang.Exception -> L47
            r5 = r5[r2]     // Catch: java.lang.Exception -> L47
            int r5 = r5.length()     // Catch: java.lang.Exception -> L47
            int r5 = r5 + 1
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Exception -> L47
            r6.<init>(r7, r4)     // Catch: java.lang.Exception -> L47
            r0.add(r6)     // Catch: java.lang.Exception -> L47
            goto L57
        L47:
            r4 = move-exception
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r5 = "str2Clients E: "
            java.lang.String r4 = r5.concat(r4)
            java.lang.String r5 = "PushConfigSettings"
            com.vivo.push.util.p.d(r5, r4)
        L57:
            int r3 = r3 + 1
            goto L1a
        L5a:
            return r0
    }

    @Override
    final java.lang.String b(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r4.e()
            java.lang.String r1 = com.vivo.push.util.f.a(r1)
            byte[] r2 = r4.f()
            java.lang.String r2 = com.vivo.push.util.f.a(r2)
            r3 = 2
            byte[] r5 = android.util.Base64.decode(r5, r3)
            byte[] r5 = com.vivo.push.util.f.a(r1, r2, r5)
            java.lang.String r1 = "utf-8"
            r0.<init>(r5, r1)
            return r0
    }

    public final java.lang.String c(java.lang.String r5) {
            r4 = this;
            java.lang.Object r0 = com.vivo.push.cache.e.a
            monitor-enter(r0)
            java.util.List<T> r1 = r4.b     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L32
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L32
            com.vivo.push.model.a r2 = (com.vivo.push.model.a) r2     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = r2.a()     // Catch: java.lang.Throwable -> L32
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L32
            if (r3 != 0) goto L9
            java.lang.String r3 = r2.a()     // Catch: java.lang.Throwable -> L32
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L9
            java.lang.String r5 = r2.b()     // Catch: java.lang.Throwable -> L32
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            return r5
        L2f:
            r5 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            return r5
        L32:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r5
    }
}
