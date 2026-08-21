package com.reyun.tracking.sdk;

final class d extends android.os.Handler {
    d(android.os.Looper r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public void handleMessage(android.os.Message r9) {
            r8 = this;
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.access$000()
            if (r0 != 0) goto L7
            return
        L7:
            int r0 = r9.what
            r1 = 2
            if (r0 != r1) goto L1a
            int r0 = r9.arg1
            long r0 = (long) r0
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.access$000()
            java.lang.String r3 = "tracking_interval"
            java.lang.String r4 = "interval"
            com.reyun.tracking.utils.f.b(r2, r3, r4, r0)
        L1a:
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.access$000()
            java.lang.String r1 = com.reyun.tracking.sdk.Tracking.access$100()
            java.lang.String r2 = "_default_"
            java.lang.String r3 = "tracking_install"
            java.lang.String r0 = com.reyun.tracking.utils.f.a(r0, r3, r1, r2)
            boolean r0 = r0.equals(r2)
            java.lang.String r1 = "TrackingIO"
            if (r0 == 0) goto L7f
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.access$000()
            java.lang.String r2 = com.reyun.tracking.sdk.Tracking.access$100()
            java.lang.String r4 = "installed"
            com.reyun.tracking.utils.f.b(r0, r3, r2, r4)
            java.lang.String r0 = "============send install event========="
            com.reyun.tracking.a.a.a(r1, r0)
            r0 = 0
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = com.reyun.tracking.sdk.Tracking.access$100()     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = "install"
            java.lang.String r4 = "unknown"
            java.lang.String r5 = com.reyun.tracking.sdk.Tracking.access$200()     // Catch: java.lang.Throwable -> L68
            r6 = 0
            org.json.JSONObject r0 = com.reyun.tracking.a.h.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L68
            java.util.Map r1 = com.reyun.tracking.sdk.Tracking.access$300()     // Catch: java.lang.Throwable -> L68
            if (r1 == 0) goto L6c
            java.util.Map r1 = com.reyun.tracking.sdk.Tracking.access$300()     // Catch: java.lang.Throwable -> L68
            com.reyun.tracking.a.a.a(r1, r0)     // Catch: java.lang.Throwable -> L68
            goto L6c
        L68:
            r1 = move-exception
            r1.printStackTrace()
        L6c:
            r4 = r0
            if (r4 == 0) goto L8f
            r6 = 3
            java.lang.Object r9 = r9.obj
            r7 = r9
            java.util.Map r7 = (java.util.Map) r7
            java.lang.String r2 = "install"
            java.lang.String r3 = "install"
            java.lang.String r5 = "receive/tkio/install"
            com.reyun.tracking.sdk.Tracking.access$400(r2, r3, r4, r5, r6, r7)
            goto L8f
        L7f:
            java.lang.String r0 = "has send install"
            com.reyun.tracking.a.a.d(r1, r0)
            r0 = 1
            com.reyun.tracking.sdk.Tracking.access$502(r0)
            java.lang.Object r9 = r9.obj
            java.util.Map r9 = (java.util.Map) r9
            com.reyun.tracking.sdk.Tracking.setStartupInternal(r9)
        L8f:
            return
    }
}
