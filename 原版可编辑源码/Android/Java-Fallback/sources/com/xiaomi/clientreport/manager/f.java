package com.xiaomi.clientreport.manager;

class f extends com.xiaomi.push.al.a {
    final com.xiaomi.clientreport.manager.a a;

    f(com.xiaomi.clientreport.manager.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "100889"
            return r0
    }

    @Override
    public void run() {
            r2 = this;
            com.xiaomi.clientreport.manager.a r0 = r2.a
            int r0 = com.xiaomi.clientreport.manager.a.b(r0)
            if (r0 <= 0) goto L16
            com.xiaomi.clientreport.manager.a r0 = r2.a
            java.util.concurrent.ExecutorService r0 = com.xiaomi.clientreport.manager.a.a(r0)
            com.xiaomi.clientreport.manager.g r1 = new com.xiaomi.clientreport.manager.g
            r1.<init>(r2)
            r0.execute(r1)
        L16:
            return
    }
}
