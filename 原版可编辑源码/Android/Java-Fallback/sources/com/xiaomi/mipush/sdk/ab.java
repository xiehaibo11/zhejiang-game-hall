package com.xiaomi.mipush.sdk;

class ab implements java.lang.Runnable {
    final com.xiaomi.mipush.sdk.MiTinyDataClient.a.a a;

    ab(com.xiaomi.mipush.sdk.MiTinyDataClient.a.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = r2.a
            java.util.ArrayList<com.xiaomi.push.hn> r0 = r0.a
            int r0 = r0.size()
            if (r0 == 0) goto L10
            com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = r2.a
            com.xiaomi.mipush.sdk.MiTinyDataClient.a.a.b(r0)
            goto L28
        L10:
            com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = r2.a
            java.util.concurrent.ScheduledFuture r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a.a(r0)
            if (r0 == 0) goto L28
            com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = r2.a
            java.util.concurrent.ScheduledFuture r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a.a(r0)
            r1 = 0
            r0.cancel(r1)
            com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = r2.a
            r1 = 0
            com.xiaomi.mipush.sdk.MiTinyDataClient.a.a.a(r0, r1)
        L28:
            return
    }
}
