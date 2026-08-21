package com.xiaomi.push;

public class bq extends com.xiaomi.push.al.a {
    private android.content.Context a;

    public bq(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private boolean a() {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r0)
            com.xiaomi.clientreport.data.Config r0 = r0.a()
            boolean r0 = r0.isEventUploadSwitchOpen()
            return r0
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "100886"
            return r0
    }

    @Override
    public void run() {
            r2 = this;
            boolean r0 = r2.a()     // Catch: java.lang.Exception -> L2a
            if (r0 == 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r0.<init>()     // Catch: java.lang.Exception -> L2a
            android.content.Context r1 = r2.a     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> L2a
            r0.append(r1)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = " begin upload event"
            r0.append(r1)     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2a
            com.xiaomi.channel.commonutils.logger.b.c(r0)     // Catch: java.lang.Exception -> L2a
            android.content.Context r0 = r2.a     // Catch: java.lang.Exception -> L2a
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r0)     // Catch: java.lang.Exception -> L2a
            r0.b()     // Catch: java.lang.Exception -> L2a
            goto L2e
        L2a:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L2e:
            return
    }
}
