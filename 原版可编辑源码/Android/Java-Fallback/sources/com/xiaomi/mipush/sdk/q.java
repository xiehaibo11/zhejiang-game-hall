package com.xiaomi.mipush.sdk;

final class q extends com.xiaomi.push.service.ba.a {
    final android.content.Context a;

    q(int r1, java.lang.String r2, android.content.Context r3) {
            r0 = this;
            r0.a = r3
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void onCallback() {
            r4 = this;
            android.content.Context r0 = r4.a
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r0)
            android.content.Context r1 = r4.a
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a(r1)
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.aF
            int r2 = r2.a()
            r3 = 0
            int r1 = r1.a(r2, r3)
            r0.a(r1)
            return
    }
}
