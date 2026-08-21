package com.reyun.tracking.sdk;

class b extends java.lang.Thread {
    final com.reyun.tracking.sdk.a a;

    b(com.reyun.tracking.sdk.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            android.os.Looper.prepare()
            com.reyun.tracking.sdk.a r0 = r3.a
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.myLooper()
            r1.<init>(r2)
            com.reyun.tracking.sdk.a.a(r0, r1)
            android.os.Looper.loop()
            return
    }
}
