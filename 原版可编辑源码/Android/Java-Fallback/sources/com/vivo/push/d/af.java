package com.vivo.push.d;

final class af extends com.vivo.push.d.z {
    af(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void a(com.vivo.push.o r6) {
            r5 = this;
            com.vivo.push.b.u r6 = (com.vivo.push.b.u) r6
            com.vivo.push.e r0 = com.vivo.push.e.a()
            boolean r0 = r0.g()
            java.lang.String r1 = "OnUndoMsgTask"
            if (r0 == 0) goto L62
            android.content.Context r0 = r5.a
            java.security.PublicKey r0 = com.vivo.push.util.z.c(r0)
            java.lang.String r2 = r6.e()
            java.lang.String r3 = r6.i()
            boolean r0 = r5.a(r0, r2, r3)
            if (r0 != 0) goto L62
            java.lang.String r0 = " vertify msg is error "
            com.vivo.push.util.p.d(r1, r0)
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            r1 = 1021(0x3fd, double:5.044E-321)
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            long r2 = r6.f()
            java.lang.String r6 = java.lang.String.valueOf(r2)
            java.lang.String r2 = "messageID"
            r1.put(r2, r6)
            android.content.Context r6 = r5.a
            android.content.Context r2 = r5.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r6 = com.vivo.push.util.z.b(r6, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r6)
            if (r2 != 0) goto L57
            java.lang.String r2 = "remoteAppId"
            r1.put(r2, r6)
        L57:
            r0.a(r1)
            com.vivo.push.e r6 = com.vivo.push.e.a()
            r6.a(r0)
            return
        L62:
            android.content.Context r0 = r5.a
            long r2 = r6.d()
            boolean r0 = com.vivo.push.util.NotifyAdapterUtil.repealNotifyById(r0, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "undo message "
            r2.<init>(r3)
            long r3 = r6.d()
            r2.append(r3)
            java.lang.String r3 = ", "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.vivo.push.util.p.d(r1, r2)
            if (r0 == 0) goto Lae
            android.content.Context r0 = r5.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "回收client通知成功, 上报埋点 1031, messageId = "
            r1.<init>(r2)
            long r2 = r6.d()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.vivo.push.util.p.b(r0, r1)
            android.content.Context r0 = r5.a
            long r1 = r6.d()
            r3 = 1031(0x407, double:5.094E-321)
            com.vivo.push.util.e.a(r0, r1, r3)
            return
        Lae:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "undo message fail，messageId = "
            r0.<init>(r2)
            long r2 = r6.d()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.d(r1, r0)
            android.content.Context r0 = r5.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "回收client通知失败，messageId = "
            r1.<init>(r2)
            long r2 = r6.d()
            r1.append(r2)
            java.lang.String r6 = r1.toString()
            com.vivo.push.util.p.c(r0, r6)
            return
    }
}
