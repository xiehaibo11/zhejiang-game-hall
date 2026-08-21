package com.xiaomi.push;

class gf extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.gd a;
    final java.lang.Exception a;
    final int b;

    gf(com.xiaomi.push.gd r1, int r2, int r3, java.lang.Exception r4) {
            r0 = this;
            r0.a = r1
            r0.b = r3
            r0.a = r4
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "shutdown the connection. "
            r0.append(r1)
            int r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.Exception r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            com.xiaomi.push.gd r0 = r3.a
            com.xiaomi.push.service.XMPushService r0 = r0.b
            int r1 = r3.b
            java.lang.Exception r2 = r3.a
            r0.a(r1, r2)
            return
    }
}
