package com.xiaomi.mipush.sdk;

final class z implements java.lang.Runnable {
    final android.content.Context a;

    z(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.MessageHandleService.a(r0)
            return
    }
}
