package com.xiaomi.mipush.sdk;

class ar extends android.database.ContentObserver {
    final com.xiaomi.mipush.sdk.ao a;

    ar(com.xiaomi.mipush.sdk.ao r1, android.os.Handler r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void onChange(boolean r2) {
            r1 = this;
            com.xiaomi.mipush.sdk.ao r2 = r1.a
            android.content.Context r0 = com.xiaomi.mipush.sdk.ao.a(r2)
            com.xiaomi.push.service.bn r0 = com.xiaomi.push.service.bn.a(r0)
            int r0 = r0.a()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.xiaomi.mipush.sdk.ao.a(r2, r0)
            com.xiaomi.mipush.sdk.ao r2 = r1.a
            java.lang.Integer r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            int r2 = r2.intValue()
            if (r2 == 0) goto L3f
            com.xiaomi.mipush.sdk.ao r2 = r1.a
            android.content.Context r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            android.content.ContentResolver r2 = r2.getContentResolver()
            r2.unregisterContentObserver(r1)
            com.xiaomi.mipush.sdk.ao r2 = r1.a
            android.content.Context r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            boolean r2 = com.xiaomi.push.bj.b(r2)
            if (r2 == 0) goto L3f
            com.xiaomi.mipush.sdk.ao r2 = r1.a
            r2.c()
        L3f:
            return
    }
}
