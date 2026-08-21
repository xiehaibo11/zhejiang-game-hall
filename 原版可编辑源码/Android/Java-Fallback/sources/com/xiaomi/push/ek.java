package com.xiaomi.push;

class ek implements com.xiaomi.push.eg {
    ek() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.app.Service r5, android.content.Intent r6) {
            r4 = this;
            java.lang.String r0 = r6.getAction()
            java.lang.String r1 = "com.xiaomi.mipush.sdk.WAKEUP"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L57
            java.lang.String r0 = "waker_pkgname"
            java.lang.String r0 = r6.getStringExtra(r0)
            java.lang.String r1 = "awake_info"
            java.lang.String r6 = r6.getStringExtra(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "service"
            r3 = 1007(0x3ef, float:1.411E-42)
            if (r1 == 0) goto L2c
            android.content.Context r5 = r5.getApplicationContext()
            java.lang.String r6 = "old version message"
            com.xiaomi.push.dz.a(r5, r2, r3, r6)
            return
        L2c:
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L4e
            java.lang.String r6 = com.xiaomi.push.dy.b(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            android.content.Context r5 = r5.getApplicationContext()
            if (r0 != 0) goto L46
            java.lang.String r0 = "old version message "
            com.xiaomi.push.dz.a(r5, r6, r3, r0)
            goto L57
        L46:
            r6 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r0 = "B get a incorrect message"
            com.xiaomi.push.dz.a(r5, r2, r6, r0)
            goto L57
        L4e:
            android.content.Context r5 = r5.getApplicationContext()
            java.lang.String r6 = "play with service "
            com.xiaomi.push.dz.a(r5, r0, r3, r6)
        L57:
            return
    }

    private void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            r0 = 1008(0x3f0, float:1.413E-42)
            if (r4 == 0) goto L71
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L71
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto L11
            goto L71
        L11:
            boolean r1 = com.xiaomi.push.service.l.a(r4, r5)
            if (r1 != 0) goto L1f
            r5 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r6 = "B is not ready"
            com.xiaomi.push.dz.a(r4, r7, r5, r6)
            return
        L1f:
            r1 = 1002(0x3ea, float:1.404E-42)
            java.lang.String r2 = "B is ready"
            com.xiaomi.push.dz.a(r4, r7, r1, r2)
            r1 = 1004(0x3ec, float:1.407E-42)
            java.lang.String r2 = "A is ready"
            com.xiaomi.push.dz.a(r4, r7, r1, r2)
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L67
            r1.<init>()     // Catch: java.lang.Exception -> L67
            r1.setClassName(r5, r6)     // Catch: java.lang.Exception -> L67
            java.lang.String r5 = "com.xiaomi.mipush.sdk.WAKEUP"
            r1.setAction(r5)     // Catch: java.lang.Exception -> L67
            java.lang.String r5 = "waker_pkgname"
            java.lang.String r6 = r4.getPackageName()     // Catch: java.lang.Exception -> L67
            r1.putExtra(r5, r6)     // Catch: java.lang.Exception -> L67
            java.lang.String r5 = "awake_info"
            java.lang.String r6 = com.xiaomi.push.dy.a(r7)     // Catch: java.lang.Exception -> L67
            r1.putExtra(r5, r6)     // Catch: java.lang.Exception -> L67
            android.content.ComponentName r5 = r4.startService(r1)     // Catch: java.lang.Exception -> L67
            if (r5 == 0) goto L61
            r5 = 1005(0x3ed, float:1.408E-42)
            java.lang.String r6 = "A is successful"
            com.xiaomi.push.dz.a(r4, r7, r5, r6)     // Catch: java.lang.Exception -> L67
            r5 = 1006(0x3ee, float:1.41E-42)
            java.lang.String r6 = "The job is finished"
            com.xiaomi.push.dz.a(r4, r7, r5, r6)
            return
        L61:
            java.lang.String r5 = "A is fail to help B's service"
            com.xiaomi.push.dz.a(r4, r7, r0, r5)     // Catch: java.lang.Exception -> L67
            return
        L67:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            java.lang.String r5 = "A meet a exception when help B's service"
            com.xiaomi.push.dz.a(r4, r7, r0, r5)
            return
        L71:
            boolean r5 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r6 = "argument error"
            if (r5 == 0) goto L7f
            java.lang.String r5 = "service"
            com.xiaomi.push.dz.a(r4, r5, r0, r6)
            goto L82
        L7f:
            com.xiaomi.push.dz.a(r4, r7, r0, r6)
        L82:
            return
    }

    @Override
    public void a(android.content.Context r1, android.content.Intent r2, java.lang.String r3) {
            r0 = this;
            if (r1 == 0) goto Lb
            boolean r3 = r1 instanceof android.app.Service
            if (r3 == 0) goto Lb
            android.app.Service r1 = (android.app.Service) r1
            r0.a(r1, r2)
        Lb:
            return
    }

    @Override
    public void a(android.content.Context r3, com.xiaomi.push.ec r4) {
            r2 = this;
            if (r4 == 0) goto L11
            java.lang.String r0 = r4.a()
            java.lang.String r1 = r4.c()
            java.lang.String r4 = r4.d()
            r2.a(r3, r0, r1, r4)
        L11:
            return
    }
}
