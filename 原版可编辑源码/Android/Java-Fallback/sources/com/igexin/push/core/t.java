package com.igexin.push.core;

final class t {
    final com.igexin.push.core.r a;
    private final android.os.Handler b;

    t(com.igexin.push.core.r r3) {
            r2 = this;
            r2.a = r3
            r2.<init>()
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "GTIS-HANDLER"
            r0.<init>(r1)
            r0.start()
            com.igexin.push.core.u r1 = new com.igexin.push.core.u
            android.os.Looper r0 = r0.getLooper()
            r1.<init>(r2, r0, r3)
            r2.b = r1
            return
    }

    android.os.Handler a() {
            r1 = this;
            android.os.Handler r0 = r1.b
            return r0
    }
}
