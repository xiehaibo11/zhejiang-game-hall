package com.xiaomi.push;

class ca extends com.xiaomi.push.al.a {
    final com.xiaomi.push.bx a;

    ca(com.xiaomi.push.bx r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "10053"
            return r0
    }

    @Override
    public void run() {
            r2 = this;
            com.xiaomi.push.bx r0 = r2.a
            com.xiaomi.push.cn r0 = com.xiaomi.push.bx.a(r0)
            if (r0 == 0) goto L1e
            com.xiaomi.push.bx r0 = r2.a
            com.xiaomi.push.cn r0 = com.xiaomi.push.bx.a(r0)
            com.xiaomi.push.bx r1 = r2.a
            android.content.Context r1 = com.xiaomi.push.bx.a(r1)
            r0.b(r1)
            com.xiaomi.push.bx r0 = r2.a
            java.lang.String r1 = "delete_time"
            com.xiaomi.push.bx.a(r0, r1)
        L1e:
            return
    }
}
