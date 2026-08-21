package com.xiaomi.mipush.sdk;

class g extends com.xiaomi.push.service.ba.a {
    final com.xiaomi.mipush.sdk.f a;

    g(com.xiaomi.mipush.sdk.f r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2, r3)
            return
    }

    @Override
    protected void onCallback() {
            r3 = this;
            com.xiaomi.mipush.sdk.f r0 = r3.a
            android.content.Context r0 = com.xiaomi.mipush.sdk.f.a(r0)
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.ao
            int r1 = r1.a()
            r2 = 1
            boolean r0 = r0.a(r1, r2)
            com.xiaomi.mipush.sdk.f r1 = r3.a
            boolean r1 = com.xiaomi.mipush.sdk.f.a(r1)
            if (r1 == r0) goto L2b
            com.xiaomi.mipush.sdk.f r1 = r3.a
            com.xiaomi.mipush.sdk.f.a(r1, r0)
            com.xiaomi.mipush.sdk.f r0 = r3.a
            android.content.Context r0 = com.xiaomi.mipush.sdk.f.a(r0)
            com.xiaomi.mipush.sdk.i.b(r0)
        L2b:
            return
    }
}
