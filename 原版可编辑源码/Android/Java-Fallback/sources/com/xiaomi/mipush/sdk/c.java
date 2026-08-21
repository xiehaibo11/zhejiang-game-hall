package com.xiaomi.mipush.sdk;

public class c implements com.xiaomi.push.eh {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(android.content.Context r7, java.util.HashMap<java.lang.String, java.lang.String> r8) {
            r6 = this;
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r7)
            java.lang.String r0 = r0.a()
            r1.b(r0)
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r7)
            java.lang.String r0 = r0.b()
            r1.d(r0)
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.I
            java.lang.String r0 = r0.a
            r1.c(r0)
            java.lang.String r0 = com.xiaomi.push.service.bd.a()
            r1.a(r0)
            r1.a = r8
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r7)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 1
            r4 = 0
            r5 = 1
            r0.a(r1, r2, r3, r4, r5)
            java.lang.String r7 = "MoleInfo：\u3000send data in app layer"
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            return
    }

    @Override
    public void b(android.content.Context r4, java.util.HashMap<java.lang.String, java.lang.String> r5) {
            r3 = this;
            java.lang.String r4 = com.xiaomi.push.dy.a(r5)
            java.lang.String r5 = "category_awake_app"
            java.lang.String r0 = "wake_up_app"
            r1 = 1
            com.xiaomi.mipush.sdk.MiTinyDataClient.upload(r5, r0, r1, r4)
            java.lang.String r4 = "MoleInfo：\u3000send data in app layer"
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return
    }

    @Override
    public void c(android.content.Context r3, java.util.HashMap<java.lang.String, java.lang.String> r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MoleInfo：\u3000"
            r0.append(r1)
            java.lang.String r1 = com.xiaomi.push.dy.b(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.String r0 = "event_type"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "awake_info"
            java.lang.Object r4 = r4.get(r1)
            java.lang.String r4 = (java.lang.String) r4
            r1 = 1007(0x3ef, float:1.411E-42)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L37
            com.xiaomi.mipush.sdk.o.a(r3, r4)
        L37:
            return
    }
}
