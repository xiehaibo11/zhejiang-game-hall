package com.xiaomi.push;

class bz extends com.xiaomi.push.al.a {
    final com.xiaomi.push.bx a;

    bz(com.xiaomi.push.bx r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "10054"
            return r0
    }

    @Override
    public void run() {
            r4 = this;
            java.lang.String r0 = "exec== DbSizeControlJob"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            com.xiaomi.push.cc r0 = new com.xiaomi.push.cc
            com.xiaomi.push.bx r1 = r4.a
            java.lang.String r1 = com.xiaomi.push.bx.a(r1)
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            com.xiaomi.push.bx r3 = r4.a
            android.content.Context r3 = com.xiaomi.push.bx.a(r3)
            r2.<init>(r3)
            r0.<init>(r1, r2)
            com.xiaomi.push.bx r1 = r4.a
            android.content.Context r1 = com.xiaomi.push.bx.a(r1)
            com.xiaomi.push.cj r1 = com.xiaomi.push.cj.a(r1)
            r1.a(r0)
            com.xiaomi.push.bx r0 = r4.a
            java.lang.String r1 = "check_time"
            com.xiaomi.push.bx.a(r0, r1)
            return
    }
}
