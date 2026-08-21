package com.xiaomi.mipush.sdk;

public class ae extends com.xiaomi.push.al.a {
    private android.content.Context a;

    public ae(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "2"
            return r0
    }

    @Override
    public void run() {
            r4 = this;
            android.content.Context r0 = r4.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ib r1 = new com.xiaomi.push.ib
            r1.<init>()
            com.xiaomi.push.hp r2 = com.xiaomi.push.hp.a
            int r2 = com.xiaomi.push.service.bb.a(r0, r2)
            r1.a(r2)
            com.xiaomi.push.hp r2 = com.xiaomi.push.hp.b
            int r0 = com.xiaomi.push.service.bb.a(r0, r2)
            r1.b(r0)
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            java.lang.String r2 = "-1"
            r3 = 0
            r0.<init>(r2, r3)
            com.xiaomi.push.ht r2 = com.xiaomi.push.ht.p
            java.lang.String r2 = r2.a
            r0.c(r2)
            byte[] r1 = com.xiaomi.push.it.a(r1)
            r0.a(r1)
            android.content.Context r1 = r4.a
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r1)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r1.a(r0, r2, r3)
            return
    }
}
