package com.xiaomi.push.service;

class by implements java.lang.Runnable {
    final com.xiaomi.push.service.bx a;

    by(com.xiaomi.push.service.bx r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.xiaomi.push.service.bx r0 = r3.a     // Catch: java.lang.Exception -> L1e
            java.util.concurrent.ConcurrentHashMap r0 = com.xiaomi.push.service.bx.a(r0)     // Catch: java.lang.Exception -> L1e
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Exception -> L1e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L1e
        Le:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L1e
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L1e
            com.xiaomi.push.service.bx$a r1 = (com.xiaomi.push.service.bx.a) r1     // Catch: java.lang.Exception -> L1e
            r1.run()     // Catch: java.lang.Exception -> L1e
            goto Le
        L1e:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Sync job exception :"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L37:
            com.xiaomi.push.service.bx r0 = r3.a
            r1 = 0
            com.xiaomi.push.service.bx.a(r0, r1)
            return
    }
}
