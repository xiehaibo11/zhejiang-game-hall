package com.reyun.tracking.b;

class i implements java.lang.Runnable {
    final com.reyun.tracking.b.l a;
    final com.reyun.tracking.b.h b;

    i(com.reyun.tracking.b.h r1, com.reyun.tracking.b.l r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.reyun.tracking.b.h r0 = r4.b
            boolean r0 = com.reyun.tracking.b.h.a(r0)
            if (r0 == 0) goto L9
            return
        L9:
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = "oaid error:get timeOut"
            com.reyun.tracking.a.a.d(r0, r1)
            com.reyun.tracking.b.h r0 = r4.b
            com.reyun.tracking.b.l r1 = r4.a
            r2 = 0
            java.lang.String r3 = "unknown"
            com.reyun.tracking.b.h.a(r0, r1, r3, r2)
            return
    }
}
