package com.vivo.push.d;

final class t implements com.vivo.push.d.r.a {
    final com.vivo.push.d.s a;

    t(com.vivo.push.d.s r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final void a() {
            r4 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            long r0 = r0.l()
            r2 = 1400(0x578, double:6.917E-321)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L24
            r2 = 1340(0x53c, double:6.62E-321)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L24
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "引擎版本太低，不支持正向展示功能，pushEngineSDKVersion："
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "OnNotificationArrivedTask"
            com.vivo.push.util.p.b(r1, r0)
            return
        L24:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "1"
            java.lang.String r2 = "srt"
            r0.put(r2, r1)
            com.vivo.push.d.s r2 = r4.a
            com.vivo.push.b.q r2 = r2.b
            long r2 = r2.f()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "message_id"
            r0.put(r3, r2)
            com.vivo.push.d.s r2 = r4.a
            com.vivo.push.d.r r2 = r2.c
            android.content.Context r2 = com.vivo.push.d.r.l(r2)
            com.vivo.push.d.s r3 = r4.a
            com.vivo.push.d.r r3 = r3.c
            android.content.Context r3 = com.vivo.push.d.r.m(r3)
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r2 = com.vivo.push.util.z.b(r2, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L64
            java.lang.String r3 = "app_id"
            r0.put(r3, r2)
        L64:
            java.lang.String r2 = "type"
            r0.put(r2, r1)
            java.lang.String r2 = "dtp"
            r0.put(r2, r1)
            r1 = 6
            com.vivo.push.util.e.a(r1, r0)
            return
    }

    @Override
    public final void b() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.vivo.push.d.s r1 = r3.a
            com.vivo.push.b.q r1 = r1.b
            long r1 = r1.f()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "messageID"
            r0.put(r2, r1)
            com.vivo.push.d.s r1 = r3.a
            com.vivo.push.d.r r1 = r1.c
            android.content.Context r1 = com.vivo.push.d.r.n(r1)
            com.vivo.push.d.s r2 = r3.a
            com.vivo.push.d.r r2 = r2.c
            android.content.Context r2 = com.vivo.push.d.r.o(r2)
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r1 = com.vivo.push.util.z.b(r1, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L39
            java.lang.String r2 = "remoteAppId"
            r0.put(r2, r1)
        L39:
            r1 = 2122(0x84a, double:1.0484E-320)
            com.vivo.push.util.e.a(r1, r0)
            return
    }
}
