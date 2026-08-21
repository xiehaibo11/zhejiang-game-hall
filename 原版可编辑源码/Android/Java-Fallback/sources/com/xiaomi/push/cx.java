package com.xiaomi.push;

class cx extends com.xiaomi.push.cr {
    com.xiaomi.push.cr a;
    final com.xiaomi.push.cv a;
    final com.xiaomi.push.cr b;

    cx(com.xiaomi.push.cv r1, java.lang.String r2, com.xiaomi.push.cr r3) {
            r0 = this;
            r0.a = r1
            r0.b = r3
            r0.<init>(r2)
            com.xiaomi.push.cr r1 = r0.b
            r0.a = r1
            java.lang.String r1 = r0.b
            r0.b = r1
            com.xiaomi.push.cr r1 = r0.b
            if (r1 == 0) goto L17
            java.lang.String r1 = r1.f
            r0.f = r1
        L17:
            return
    }

    @Override
    public synchronized java.util.ArrayList<java.lang.String> a(boolean r6) {
            r5 = this;
            monitor-enter(r5)
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L52
            r6.<init>()     // Catch: java.lang.Throwable -> L52
            com.xiaomi.push.cr r0 = r5.a     // Catch: java.lang.Throwable -> L52
            r1 = 1
            if (r0 == 0) goto L14
            com.xiaomi.push.cr r0 = r5.a     // Catch: java.lang.Throwable -> L52
            java.util.ArrayList r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L52
            r6.addAll(r0)     // Catch: java.lang.Throwable -> L52
        L14:
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r0 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L52
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L52
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r2 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L4f
            com.xiaomi.push.cr r2 = (com.xiaomi.push.cr) r2     // Catch: java.lang.Throwable -> L4f
            if (r2 == 0) goto L4c
            java.util.ArrayList r1 = r2.a(r1)     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L4f
        L2b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r2 == 0) goto L42
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L4f
            int r3 = r6.indexOf(r2)     // Catch: java.lang.Throwable -> L4f
            r4 = -1
            if (r3 != r4) goto L2b
            r6.add(r2)     // Catch: java.lang.Throwable -> L4f
            goto L2b
        L42:
            java.lang.String r1 = r5.b     // Catch: java.lang.Throwable -> L4f
            r6.remove(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = r5.b     // Catch: java.lang.Throwable -> L4f
            r6.add(r1)     // Catch: java.lang.Throwable -> L4f
        L4c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r5)
            return r6
        L4f:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r6     // Catch: java.lang.Throwable -> L52
        L52:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    @Override
    public synchronized void a(java.lang.String r2, com.xiaomi.push.cq r3) {
            r1 = this;
            monitor-enter(r1)
            com.xiaomi.push.cr r0 = r1.a     // Catch: java.lang.Throwable -> Lc
            if (r0 == 0) goto La
            com.xiaomi.push.cr r0 = r1.a     // Catch: java.lang.Throwable -> Lc
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> Lc
        La:
            monitor-exit(r1)
            return
        Lc:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public boolean b() {
            r1 = this;
            r0 = 0
            return r0
    }
}
