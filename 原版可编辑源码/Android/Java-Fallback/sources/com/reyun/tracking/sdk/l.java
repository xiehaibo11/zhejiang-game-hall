package com.reyun.tracking.sdk;

final class l implements java.lang.Runnable {
    final java.lang.String a;
    final org.json.JSONObject b;
    final java.lang.String c;
    final boolean d;
    final java.lang.String e;
    final int f;
    final java.util.Map g;

    l(java.lang.String r1, org.json.JSONObject r2, java.lang.String r3, boolean r4, java.lang.String r5, int r6, java.util.Map r7) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            r0.f = r6
            r0.g = r7
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r12 = this;
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "tracking_install"
            java.lang.String r2 = "key_install_send_success_time"
            long r0 = com.reyun.tracking.utils.f.b(r0, r1, r2)     // Catch: java.lang.Throwable -> L83
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L83
            long r2 = r2 - r0
            r0 = 2000(0x7d0, double:9.88E-321)
            r4 = 0
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 >= 0) goto L53
            java.lang.String r0 = r12.a     // Catch: java.lang.Throwable -> L83
            org.json.JSONObject r1 = r12.b     // Catch: java.lang.Throwable -> L83
            long r0 = com.reyun.tracking.sdk.Tracking.addRecordToDbase(r0, r1, r4)     // Catch: java.lang.Throwable -> L83
            java.lang.String r4 = "TrackingIO"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r5.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r6 = "sendOrSave cache data intervalTime:"
            r5.append(r6)     // Catch: java.lang.Throwable -> L83
            r5.append(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = " what:"
            r5.append(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = r12.a     // Catch: java.lang.Throwable -> L83
            r5.append(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = " what2:"
            r5.append(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = r12.c     // Catch: java.lang.Throwable -> L83
            r5.append(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = " rid:"
            r5.append(r2)     // Catch: java.lang.Throwable -> L83
            r5.append(r0)     // Catch: java.lang.Throwable -> L83
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L83
            com.reyun.tracking.a.a.d(r4, r0)     // Catch: java.lang.Throwable -> L83
            goto L83
        L53:
            java.lang.String r0 = r12.a     // Catch: java.lang.Throwable -> L83
            org.json.JSONObject r1 = r12.b     // Catch: java.lang.Throwable -> L83
            boolean r2 = r12.d     // Catch: java.lang.Throwable -> L83
            if (r2 == 0) goto L5c
            r4 = 1
        L5c:
            long r8 = com.reyun.tracking.sdk.Tracking.addRecordToDbase(r0, r1, r4)     // Catch: java.lang.Throwable -> L83
            boolean r0 = r12.d     // Catch: java.lang.Throwable -> L83
            if (r0 == 0) goto L83
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = r12.a     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r12.e     // Catch: java.lang.Throwable -> L83
            org.json.JSONObject r4 = r12.b     // Catch: java.lang.Throwable -> L83
            int r0 = r12.f     // Catch: java.lang.Throwable -> L83
            com.reyun.tracking.utils.s r11 = new com.reyun.tracking.utils.s     // Catch: java.lang.Throwable -> L83
            java.lang.String r6 = r12.c     // Catch: java.lang.Throwable -> L83
            android.content.Context r7 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Throwable -> L83
            java.util.Map r10 = r12.g     // Catch: java.lang.Throwable -> L83
            r5 = r11
            r5.<init>(r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L83
            r5 = r0
            r6 = r11
            com.reyun.tracking.utils.d.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L83
        L83:
            return
    }
}
