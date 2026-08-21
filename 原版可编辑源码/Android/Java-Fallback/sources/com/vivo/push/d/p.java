package com.vivo.push.d;

final class p extends com.vivo.push.d.z {
    p(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static android.content.Context a(com.vivo.push.d.p r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    @Override
    protected final void a(com.vivo.push.o r7) {
            r6 = this;
            r0 = r7
            com.vivo.push.b.o r0 = (com.vivo.push.b.o) r0
            com.vivo.push.b.h r1 = new com.vivo.push.b.h
            long r2 = r0.f()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            com.vivo.push.e r2 = com.vivo.push.e.a()
            r2.a(r1)
            android.content.Context r1 = r6.a
            com.vivo.push.cache.ClientConfigManagerImpl r1 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r1)
            boolean r1 = r1.isEnablePush()
            java.lang.String r2 = "remoteAppId"
            java.lang.String r3 = "messageID"
            java.lang.String r4 = "OnMessageTask"
            if (r1 != 0) goto L76
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r5 = "command  "
            r1.<init>(r5)
            r1.append(r7)
            java.lang.String r7 = " is ignore by disable push "
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.vivo.push.util.p.d(r4, r7)
            com.vivo.push.b.x r7 = new com.vivo.push.b.x
            r4 = 1020(0x3fc, double:5.04E-321)
            r7.<init>(r4)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            long r4 = r0.f()
            java.lang.String r0 = java.lang.String.valueOf(r4)
            r1.put(r3, r0)
            android.content.Context r0 = r6.a
            android.content.Context r3 = r6.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r0 = com.vivo.push.util.z.b(r0, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L6b
            r1.put(r2, r0)
        L6b:
            r7.a(r1)
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r7)
            return
        L76:
            com.vivo.push.e r7 = com.vivo.push.e.a()
            boolean r7 = r7.g()
            if (r7 == 0) goto Lcb
            android.content.Context r7 = r6.a
            java.security.PublicKey r7 = com.vivo.push.util.z.c(r7)
            java.lang.String r1 = r0.d()
            java.lang.String r5 = r0.i()
            boolean r7 = r6.a(r7, r1, r5)
            if (r7 != 0) goto Lcb
            com.vivo.push.b.x r7 = new com.vivo.push.b.x
            r4 = 1021(0x3fd, double:5.044E-321)
            r7.<init>(r4)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            long r4 = r0.f()
            java.lang.String r0 = java.lang.String.valueOf(r4)
            r1.put(r3, r0)
            android.content.Context r0 = r6.a
            android.content.Context r3 = r6.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r0 = com.vivo.push.util.z.b(r0, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto Lc0
            r1.put(r2, r0)
        Lc0:
            r7.a(r1)
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r7)
            return
        Lcb:
            com.vivo.push.model.UnvarnishedMessage r7 = r0.e()
            if (r7 == 0) goto Lfb
            int r0 = r7.getTargetType()
            java.lang.String r1 = r7.getTragetContent()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "tragetType is "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = " ; target is "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            com.vivo.push.util.p.d(r4, r0)
            com.vivo.push.d.q r0 = new com.vivo.push.d.q
            r0.<init>(r6, r7)
            com.vivo.push.m.b(r0)
            return
        Lfb:
            java.lang.String r7 = " message is null"
            com.vivo.push.util.p.a(r4, r7)
            return
    }
}
