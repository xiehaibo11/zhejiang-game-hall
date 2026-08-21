package com.reyun.tracking.sdk;

class m implements java.lang.Runnable {
    private com.reyun.tracking.sdk.o a;

    public m(com.reyun.tracking.sdk.o r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private void a() {
            r1 = this;
            com.reyun.tracking.sdk.o r0 = r1.a
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    static void a(com.reyun.tracking.sdk.m r0) {
            r0.a()
            return
    }

    @Override
    public void run() {
            r3 = this;
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = "start getOaid !!"
            com.reyun.tracking.a.a.d(r0, r1)
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.access$000()
            if (r1 != 0) goto L16
            java.lang.String r1 = "context is null! app may be destroyed"
            com.reyun.tracking.a.a.c(r0, r1)
            r3.a()
            return
        L16:
            com.reyun.tracking.b.h r0 = new com.reyun.tracking.b.h
            r0.<init>()
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.access$000()
            com.reyun.tracking.sdk.n r2 = new com.reyun.tracking.sdk.n
            r2.<init>(r3)
            r0.a(r1, r2)
            return
    }
}
