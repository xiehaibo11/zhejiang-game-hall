package com.xiaomi.push;

class ei implements com.xiaomi.push.eg {
    ei() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "provider"
            r1 = 1008(0x3f0, float:1.413E-42)
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L55
            java.lang.String r3 = "B get a incorrect message"
            if (r2 != 0) goto L51
            if (r5 == 0) goto L51
            java.lang.String r2 = "/"
            java.lang.String[] r6 = r6.split(r2)     // Catch: java.lang.Exception -> L55
            int r2 = r6.length     // Catch: java.lang.Exception -> L55
            if (r2 <= 0) goto L51
            int r2 = r6.length     // Catch: java.lang.Exception -> L55
            int r2 = r2 + (-1)
            r2 = r6[r2]     // Catch: java.lang.Exception -> L55
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L55
            if (r2 != 0) goto L51
            int r2 = r6.length     // Catch: java.lang.Exception -> L55
            int r2 = r2 + (-1)
            r6 = r6[r2]     // Catch: java.lang.Exception -> L55
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L55
            if (r2 == 0) goto L31
            com.xiaomi.push.dz.a(r5, r0, r1, r3)     // Catch: java.lang.Exception -> L55
            return
        L31:
            java.lang.String r6 = android.net.Uri.decode(r6)     // Catch: java.lang.Exception -> L55
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L55
            if (r2 == 0) goto L3f
            com.xiaomi.push.dz.a(r5, r0, r1, r3)     // Catch: java.lang.Exception -> L55
            return
        L3f:
            java.lang.String r6 = com.xiaomi.push.dy.b(r6)     // Catch: java.lang.Exception -> L55
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L55
            if (r2 != 0) goto L51
            r2 = 1007(0x3ef, float:1.411E-42)
            java.lang.String r3 = "play with provider successfully"
            com.xiaomi.push.dz.a(r5, r6, r2, r3)     // Catch: java.lang.Exception -> L55
            goto L6e
        L51:
            com.xiaomi.push.dz.a(r5, r0, r1, r3)     // Catch: java.lang.Exception -> L55
            goto L6e
        L55:
            r6 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "B meet a exception"
            r2.append(r3)
            java.lang.String r6 = r6.getMessage()
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            com.xiaomi.push.dz.a(r5, r0, r1, r6)
        L6e:
            return
    }

    private void b(android.content.Context r6, com.xiaomi.push.ec r7) {
            r5 = this;
            java.lang.String r0 = r7.b()
            java.lang.String r1 = r7.d()
            int r7 = r7.a()
            r2 = 1008(0x3f0, float:1.413E-42)
            if (r6 == 0) goto L91
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L91
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L1d
            goto L91
        L1d:
            boolean r3 = com.xiaomi.push.service.l.b(r6, r0)
            if (r3 != 0) goto L2b
            r7 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r0 = "B is not ready"
            com.xiaomi.push.dz.a(r6, r1, r7, r0)
            return
        L2b:
            r3 = 1002(0x3ea, float:1.404E-42)
            java.lang.String r4 = "B is ready"
            com.xiaomi.push.dz.a(r6, r1, r3, r4)
            r3 = 1004(0x3ec, float:1.407E-42)
            java.lang.String r4 = "A is ready"
            com.xiaomi.push.dz.a(r6, r1, r3, r4)
            java.lang.String r3 = com.xiaomi.push.dy.a(r1)
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L87
            if (r4 != 0) goto L81
            r4 = 1
            if (r7 != r4) goto L52
            boolean r7 = com.xiaomi.push.ed.a(r6)     // Catch: java.lang.Exception -> L87
            if (r7 != 0) goto L52
            java.lang.String r7 = "A not in foreground"
            com.xiaomi.push.dz.a(r6, r1, r2, r7)     // Catch: java.lang.Exception -> L87
            return
        L52:
            android.content.ContentResolver r7 = r6.getContentResolver()     // Catch: java.lang.Exception -> L87
            android.net.Uri r0 = com.xiaomi.push.dy.a(r0, r3)     // Catch: java.lang.Exception -> L87
            java.lang.String r7 = r7.getType(r0)     // Catch: java.lang.Exception -> L87
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L87
            if (r0 != 0) goto L7b
            java.lang.String r0 = "success"
            boolean r7 = r0.equals(r7)     // Catch: java.lang.Exception -> L87
            if (r7 == 0) goto L7b
            r7 = 1005(0x3ed, float:1.408E-42)
            java.lang.String r0 = "A is successful"
            com.xiaomi.push.dz.a(r6, r1, r7, r0)     // Catch: java.lang.Exception -> L87
            r7 = 1006(0x3ee, float:1.41E-42)
            java.lang.String r0 = "The job is finished"
            com.xiaomi.push.dz.a(r6, r1, r7, r0)
            return
        L7b:
            java.lang.String r7 = "A is fail to help B's provider"
            com.xiaomi.push.dz.a(r6, r1, r2, r7)     // Catch: java.lang.Exception -> L87
            return
        L81:
            java.lang.String r7 = "info is empty"
            com.xiaomi.push.dz.a(r6, r1, r2, r7)     // Catch: java.lang.Exception -> L87
            return
        L87:
            r7 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            java.lang.String r7 = "A meet a exception when help B's provider"
            com.xiaomi.push.dz.a(r6, r1, r2, r7)
            return
        L91:
            boolean r7 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r0 = "argument error"
            if (r7 == 0) goto L9f
            java.lang.String r7 = "provider"
            com.xiaomi.push.dz.a(r6, r7, r2, r0)
            goto La2
        L9f:
            com.xiaomi.push.dz.a(r6, r1, r2, r0)
        La2:
            return
    }

    @Override
    public void a(android.content.Context r1, android.content.Intent r2, java.lang.String r3) {
            r0 = this;
            r0.a(r1, r3)
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
            java.lang.String r0 = "provider"
            java.lang.String r1 = "A receive incorrect message"
            com.xiaomi.push.dz.a(r3, r0, r4, r1)
        Lf:
            return
    }
}
