package com.xiaomi.push.service;

final class cd extends com.xiaomi.push.al.a {
    final int a;
    final android.app.Notification a;
    final android.content.Context a;
    final java.lang.String a;
    final java.lang.String b;

    cd(int r1, java.lang.String r2, android.content.Context r3, java.lang.String r4, android.app.Notification r5) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.a = r3
            r0.b = r4
            r0.a = r5
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r2 = this;
            int r0 = r2.a
            java.lang.String r1 = r2.a
            java.lang.String r0 = com.xiaomi.push.service.cc.a(r0, r1)
            return r0
    }

    @Override
    public void run() {
            r5 = this;
            android.content.Context r0 = r5.a
            java.lang.String r1 = r5.b
            int r2 = r5.a
            java.lang.String r3 = r5.a
            android.app.Notification r4 = r5.a
            com.xiaomi.push.service.cc.b(r0, r1, r2, r3, r4)
            return
    }
}
