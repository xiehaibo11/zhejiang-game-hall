package com.vivo.push.d;

public final class r extends com.vivo.push.d.z {

    public interface a {
        void a();

        void b();
    }

    r(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static android.content.Context a(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context b(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context c(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context d(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context e(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context f(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context g(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context h(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context i(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context j(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context k(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context l(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context m(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context n(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context o(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context p(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context q(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context r(com.vivo.push.d.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    @Override
    protected final void a(com.vivo.push.o r8) {
            r7 = this;
            java.lang.String r0 = "OnNotificationArrivedTask"
            if (r8 != 0) goto La
            java.lang.String r8 = "command is null"
            com.vivo.push.util.p.a(r0, r8)
            return
        La:
            android.content.Context r1 = r7.a
            com.vivo.push.cache.ClientConfigManagerImpl r1 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r1)
            boolean r1 = r1.isEnablePush()
            com.vivo.push.b.q r8 = (com.vivo.push.b.q) r8
            android.content.Context r2 = r7.a
            android.content.Context r3 = r7.a
            java.lang.String r3 = r3.getPackageName()
            boolean r2 = com.vivo.push.util.t.d(r2, r3)
            java.lang.String r3 = "remoteAppId"
            java.lang.String r4 = "messageID"
            if (r2 != 0) goto L5f
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            r1 = 2101(0x835, double:1.038E-320)
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            long r5 = r8.f()
            java.lang.String r8 = java.lang.String.valueOf(r5)
            r1.put(r4, r8)
            android.content.Context r8 = r7.a
            android.content.Context r2 = r7.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r8 = com.vivo.push.util.z.b(r8, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto L54
            r1.put(r3, r8)
        L54:
            r0.a(r1)
            com.vivo.push.e r8 = com.vivo.push.e.a()
            r8.a(r0)
            return
        L5f:
            com.vivo.push.b.h r2 = new com.vivo.push.b.h
            long r5 = r8.f()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r2.<init>(r5)
            com.vivo.push.e r5 = com.vivo.push.e.a()
            r5.a(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r5 = "PushMessageReceiver "
            r2.<init>(r5)
            android.content.Context r5 = r7.a
            java.lang.String r5 = r5.getPackageName()
            r2.append(r5)
            java.lang.String r5 = " isEnablePush :"
            r2.append(r5)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.vivo.push.util.p.d(r0, r2)
            if (r1 != 0) goto Lcb
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            r1 = 1020(0x3fc, double:5.04E-321)
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            long r5 = r8.f()
            java.lang.String r8 = java.lang.String.valueOf(r5)
            r1.put(r4, r8)
            android.content.Context r8 = r7.a
            android.content.Context r2 = r7.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r8 = com.vivo.push.util.z.b(r8, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto Lc0
            r1.put(r3, r8)
        Lc0:
            r0.a(r1)
            com.vivo.push.e r8 = com.vivo.push.e.a()
            r8.a(r0)
            return
        Lcb:
            com.vivo.push.e r1 = com.vivo.push.e.a()
            boolean r1 = r1.g()
            if (r1 == 0) goto L120
            android.content.Context r1 = r7.a
            java.security.PublicKey r1 = com.vivo.push.util.z.c(r1)
            java.lang.String r2 = r8.e()
            java.lang.String r5 = r8.i()
            boolean r1 = r7.a(r1, r2, r5)
            if (r1 != 0) goto L120
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            r1 = 1021(0x3fd, double:5.044E-321)
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            long r5 = r8.f()
            java.lang.String r8 = java.lang.String.valueOf(r5)
            r1.put(r4, r8)
            android.content.Context r8 = r7.a
            android.content.Context r2 = r7.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r8 = com.vivo.push.util.z.b(r8, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto L115
            r1.put(r3, r8)
        L115:
            r0.a(r1)
            com.vivo.push.e r8 = com.vivo.push.e.a()
            r8.a(r0)
            return
        L120:
            com.vivo.push.model.InsideNotificationItem r1 = r8.d()
            if (r1 == 0) goto L150
            int r2 = r1.getTargetType()
            java.lang.String r3 = r1.getTragetContent()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "tragetType is "
            r4.<init>(r5)
            r4.append(r2)
            java.lang.String r2 = " ; target is "
            r4.append(r2)
            r4.append(r3)
            java.lang.String r2 = r4.toString()
            com.vivo.push.util.p.d(r0, r2)
            com.vivo.push.d.s r0 = new com.vivo.push.d.s
            r0.<init>(r7, r1, r8)
            com.vivo.push.m.c(r0)
            return
        L150:
            java.lang.String r1 = "notify is null"
            com.vivo.push.util.p.a(r0, r1)
            android.content.Context r0 = r7.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "通知内容为空，"
            r1.<init>(r2)
            long r2 = r8.f()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.vivo.push.util.p.c(r0, r1)
            android.content.Context r0 = r7.a
            long r1 = r8.f()
            r3 = 1027(0x403, double:5.074E-321)
            com.vivo.push.util.e.a(r0, r1, r3)
            return
    }
}
