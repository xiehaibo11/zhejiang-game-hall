package com.xiaomi.mipush.sdk;

final class al implements java.lang.Runnable {
    final android.content.Context a;
    final android.content.Intent a;

    al(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.Intent r1 = r2.a
            com.xiaomi.mipush.sdk.PushMessageHandler.b(r0, r1)
            return
    }
}
