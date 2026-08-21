package com.xiaomi.push.service;

class bw extends com.xiaomi.push.ao.b {
    final com.xiaomi.push.service.bv a;
    boolean a;

    bw(com.xiaomi.push.service.bv r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            r1 = 0
            r0.a = r1
            return
    }

    @Override
    public void b() {
            r3 = this;
            android.content.Context r0 = com.xiaomi.push.v.a()     // Catch: java.lang.Exception -> L47
            com.xiaomi.push.service.a r0 = com.xiaomi.push.service.a.a(r0)     // Catch: java.lang.Exception -> L47
            java.lang.String r0 = r0.a()     // Catch: java.lang.Exception -> L47
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L47
            if (r1 != 0) goto L22
            com.xiaomi.push.q r1 = com.xiaomi.push.q.a     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = r1.name()     // Catch: java.lang.Exception -> L47
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L1f
            goto L22
        L1f:
            java.lang.String r0 = "https://resolver.msg.global.xiaomi.net/psc/?t=a"
            goto L24
        L22:
            java.lang.String r0 = "https://resolver.msg.xiaomi.net/psc/?t=a"
        L24:
            android.content.Context r1 = com.xiaomi.push.v.a()     // Catch: java.lang.Exception -> L47
            r2 = 0
            java.lang.String r0 = com.xiaomi.push.cz.a(r1, r0, r2)     // Catch: java.lang.Exception -> L47
            r1 = 10
            byte[] r0 = android.util.Base64.decode(r0, r1)     // Catch: java.lang.Exception -> L47
            com.xiaomi.push.dw$a r0 = com.xiaomi.push.dw.a.a(r0)     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L60
            com.xiaomi.push.service.bv r1 = r3.a     // Catch: java.lang.Exception -> L47
            com.xiaomi.push.service.bv.a(r1, r0)     // Catch: java.lang.Exception -> L47
            r0 = 1
            r3.a = r0     // Catch: java.lang.Exception -> L47
            com.xiaomi.push.service.bv r0 = r3.a     // Catch: java.lang.Exception -> L47
            com.xiaomi.push.service.bv.a(r0)     // Catch: java.lang.Exception -> L47
            goto L60
        L47:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "fetch config failure: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L60:
            return
    }

    @Override
    public void c() {
            r5 = this;
            com.xiaomi.push.service.bv r0 = r5.a
            r1 = 0
            com.xiaomi.push.service.bv.a(r0, r1)
            boolean r0 = r5.a
            if (r0 == 0) goto L3b
            com.xiaomi.push.service.bv r0 = r5.a
            monitor-enter(r0)
            com.xiaomi.push.service.bv r1 = r5.a     // Catch: java.lang.Throwable -> L38
            java.util.List r1 = com.xiaomi.push.service.bv.a(r1)     // Catch: java.lang.Throwable -> L38
            com.xiaomi.push.service.bv r2 = r5.a     // Catch: java.lang.Throwable -> L38
            java.util.List r2 = com.xiaomi.push.service.bv.a(r2)     // Catch: java.lang.Throwable -> L38
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L38
            com.xiaomi.push.service.bv$a[] r2 = new com.xiaomi.push.service.bv.a[r2]     // Catch: java.lang.Throwable -> L38
            java.lang.Object[] r1 = r1.toArray(r2)     // Catch: java.lang.Throwable -> L38
            com.xiaomi.push.service.bv$a[] r1 = (com.xiaomi.push.service.bv.a[]) r1     // Catch: java.lang.Throwable -> L38
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            int r0 = r1.length
            r2 = 0
        L28:
            if (r2 >= r0) goto L3b
            r3 = r1[r2]
            com.xiaomi.push.service.bv r4 = r5.a
            com.xiaomi.push.dw$a r4 = com.xiaomi.push.service.bv.a(r4)
            r3.a(r4)
            int r2 = r2 + 1
            goto L28
        L38:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            throw r1
        L3b:
            return
    }
}
