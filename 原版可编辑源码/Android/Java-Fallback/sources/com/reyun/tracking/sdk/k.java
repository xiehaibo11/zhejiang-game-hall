package com.reyun.tracking.sdk;

final class k implements java.lang.Runnable {
    k() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            r0 = 10
            r1 = 10
        L4:
            if (r1 != r0) goto L19
            int r1 = com.reyun.tracking.sdk.Tracking.access$1400(r0)     // Catch: java.lang.Throwable -> L15
            if (r1 != r0) goto L4
            int r2 = com.reyun.tracking.sdk.Tracking.access$1500()     // Catch: java.lang.Throwable -> L15
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L15
            java.lang.Thread.sleep(r2)     // Catch: java.lang.Throwable -> L15
            goto L4
        L15:
            r0 = move-exception
            r0.printStackTrace()
        L19:
            return
    }
}
