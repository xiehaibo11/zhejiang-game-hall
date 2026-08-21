package com.xiaomi.mipush.sdk;

final class p extends com.xiaomi.push.al.a {
    final android.content.Context a;
    final com.xiaomi.push.ii a;

    p(com.xiaomi.push.ii r1, android.content.Context r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "22"
            return r0
    }

    @Override
    public void run() {
            r7 = this;
            com.xiaomi.push.ii r0 = r7.a
            if (r0 == 0) goto L1f
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            android.content.Context r0 = r7.a
            android.content.Context r0 = r0.getApplicationContext()
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r0)
            com.xiaomi.push.ii r2 = r7.a
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.i
            r4 = 1
            r5 = 0
            r6 = 1
            r1.a(r2, r3, r4, r5, r6)
        L1f:
            return
    }
}
