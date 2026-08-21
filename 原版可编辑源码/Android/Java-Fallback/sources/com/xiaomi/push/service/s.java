package com.xiaomi.push.service;

class s extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.r a;
    final java.lang.String a;
    final java.util.List a;
    final java.lang.String b;

    s(com.xiaomi.push.service.r r1, int r2, java.lang.String r3, java.util.List r4, java.lang.String r5) {
            r0 = this;
            r0.a = r1
            r0.a = r3
            r0.a = r4
            r0.b = r5
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "Send tiny data."
            return r0
    }

    @Override
    public void a() {
            r6 = this;
            com.xiaomi.push.service.r r0 = r6.a
            java.lang.String r1 = r6.a
            java.lang.String r0 = com.xiaomi.push.service.r.a(r0, r1)
            java.util.List r1 = r6.a
            java.lang.String r2 = r6.a
            r3 = 32768(0x8000, float:4.5918E-41)
            java.util.ArrayList r1 = com.xiaomi.push.service.bz.a(r1, r2, r0, r3)
            if (r1 == 0) goto L75
            java.util.Iterator r1 = r1.iterator()
        L19:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L7a
            java.lang.Object r2 = r1.next()
            com.xiaomi.push.ii r2 = (com.xiaomi.push.ii) r2
            java.lang.String r3 = "uploadWay"
            java.lang.String r4 = "longXMPushService"
            r2.a(r3, r4)
            java.lang.String r3 = r6.a
            com.xiaomi.push.hj r4 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r2 = com.xiaomi.push.service.ah.a(r3, r0, r2, r4)
            java.lang.String r3 = r6.b
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L64
            java.lang.String r3 = r6.a
            java.lang.String r4 = r6.b
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 != 0) goto L64
            com.xiaomi.push.hw r3 = r2.a()
            if (r3 != 0) goto L59
            com.xiaomi.push.hw r3 = new com.xiaomi.push.hw
            r3.<init>()
            java.lang.String r4 = "-1"
            r3.a(r4)
            r2.a(r3)
        L59:
            com.xiaomi.push.hw r3 = r2.a()
            java.lang.String r4 = r6.b
            java.lang.String r5 = "ext_traffic_source_pkg"
            r3.b(r5, r4)
        L64:
            byte[] r2 = com.xiaomi.push.it.a(r2)
            com.xiaomi.push.service.r r3 = r6.a
            com.xiaomi.push.service.XMPushService r3 = com.xiaomi.push.service.r.a(r3)
            java.lang.String r4 = r6.a
            r5 = 1
            r3.a(r4, r2, r5)
            goto L19
        L75:
            java.lang.String r0 = "TinyData LongConnUploader.upload Get a null XmPushActionNotification list when TinyDataHelper.pack() in XMPushService."
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L7a:
            return
    }
}
