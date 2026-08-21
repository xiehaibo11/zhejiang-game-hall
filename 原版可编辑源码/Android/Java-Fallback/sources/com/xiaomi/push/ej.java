package com.xiaomi.push;

class ej implements com.xiaomi.push.eg {
    ej() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.app.Service r5, android.content.Intent r6) {
            r4 = this;
            java.lang.String r0 = "awake_info"
            java.lang.String r6 = r6.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r1 = "B get a incorrect message"
            r2 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r3 = "service"
            if (r0 != 0) goto L28
            java.lang.String r6 = com.xiaomi.push.dy.b(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L28
            android.content.Context r5 = r5.getApplicationContext()
            r0 = 1007(0x3ef, float:1.411E-42)
            java.lang.String r1 = "play with service successfully"
            com.xiaomi.push.dz.a(r5, r6, r0, r1)
            goto L2f
        L28:
            android.content.Context r5 = r5.getApplicationContext()
            com.xiaomi.push.dz.a(r5, r3, r2, r1)
        L2f:
            return
    }

    private void b(android.content.Context r7, com.xiaomi.push.ec r8) {
            r6 = this;
            java.lang.String r0 = r8.a()
            java.lang.String r1 = r8.b()
            java.lang.String r2 = r8.d()
            int r8 = r8.a()
            r3 = 1008(0x3f0, float:1.413E-42)
            if (r7 == 0) goto L8b
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 != 0) goto L8b
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L8b
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L27
            goto L8b
        L27:
            boolean r4 = com.xiaomi.push.service.l.a(r7, r0, r1)
            if (r4 != 0) goto L35
            r8 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r0 = "B is not ready"
            com.xiaomi.push.dz.a(r7, r2, r8, r0)
            return
        L35:
            r4 = 1002(0x3ea, float:1.404E-42)
            java.lang.String r5 = "B is ready"
            com.xiaomi.push.dz.a(r7, r2, r4, r5)
            r4 = 1004(0x3ec, float:1.407E-42)
            java.lang.String r5 = "A is ready"
            com.xiaomi.push.dz.a(r7, r2, r4, r5)
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L81
            r4.<init>()     // Catch: java.lang.Exception -> L81
            r4.setAction(r1)     // Catch: java.lang.Exception -> L81
            r4.setPackage(r0)     // Catch: java.lang.Exception -> L81
            java.lang.String r0 = "awake_info"
            java.lang.String r1 = com.xiaomi.push.dy.a(r2)     // Catch: java.lang.Exception -> L81
            r4.putExtra(r0, r1)     // Catch: java.lang.Exception -> L81
            r0 = 1
            if (r8 != r0) goto L66
            boolean r8 = com.xiaomi.push.ed.a(r7)     // Catch: java.lang.Exception -> L81
            if (r8 != 0) goto L66
            java.lang.String r8 = "A not in foreground"
            com.xiaomi.push.dz.a(r7, r2, r3, r8)     // Catch: java.lang.Exception -> L81
            return
        L66:
            android.content.ComponentName r8 = r7.startService(r4)     // Catch: java.lang.Exception -> L81
            if (r8 == 0) goto L7b
            r8 = 1005(0x3ed, float:1.408E-42)
            java.lang.String r0 = "A is successful"
            com.xiaomi.push.dz.a(r7, r2, r8, r0)     // Catch: java.lang.Exception -> L81
            r8 = 1006(0x3ee, float:1.41E-42)
            java.lang.String r0 = "The job is finished"
            com.xiaomi.push.dz.a(r7, r2, r8, r0)
            return
        L7b:
            java.lang.String r8 = "A is fail to help B's service"
            com.xiaomi.push.dz.a(r7, r2, r3, r8)     // Catch: java.lang.Exception -> L81
            return
        L81:
            r8 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            java.lang.String r8 = "A meet a exception when help B's service"
            com.xiaomi.push.dz.a(r7, r2, r3, r8)
            return
        L8b:
            boolean r8 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r0 = "argument error"
            if (r8 == 0) goto L99
            java.lang.String r8 = "service"
            com.xiaomi.push.dz.a(r7, r8, r3, r0)
            goto L9c
        L99:
            com.xiaomi.push.dz.a(r7, r2, r3, r0)
        L9c:
            return
    }

    @Override
    public void a(android.content.Context r2, android.content.Intent r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto Lc
            boolean r4 = r2 instanceof android.app.Service
            if (r4 == 0) goto Lc
            android.app.Service r2 = (android.app.Service) r2
            r1.a(r2, r3)
            goto L15
        Lc:
            r3 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r4 = "service"
            java.lang.String r0 = "A receive incorrect message"
            com.xiaomi.push.dz.a(r2, r4, r3, r0)
        L15:
            return
    }

    @Override
    public void a(android.content.Context r3, com.xiaomi.push.ec r4) {
            r2 = this;
            if (r4 == 0) goto L6
            r2.b(r3, r4)
            goto Lf
        L6:
            r4 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r0 = "service"
            java.lang.String r1 = "A receive incorrect message"
            com.xiaomi.push.dz.a(r3, r0, r4, r1)
        Lf:
            return
    }
}
