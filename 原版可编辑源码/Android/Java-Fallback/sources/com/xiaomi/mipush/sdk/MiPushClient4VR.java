package com.xiaomi.mipush.sdk;

public class MiPushClient4VR {
    public MiPushClient4VR() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void uploadData(android.content.Context r2, java.lang.String r3) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.O
            java.lang.String r1 = r1.a
            r0.c(r1)
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r1 = r1.a()
            r0.b(r1)
            java.lang.String r1 = r2.getPackageName()
            r0.d(r1)
            java.lang.String r1 = "data"
            r0.a(r1, r3)
            java.lang.String r3 = com.xiaomi.push.service.bd.a()
            r0.a(r3)
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.i
            r1 = 0
            r2.a(r0, r3, r1)
            return
    }
}
