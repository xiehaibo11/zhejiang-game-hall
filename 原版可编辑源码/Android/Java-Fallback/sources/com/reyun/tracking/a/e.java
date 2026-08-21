package com.reyun.tracking.a;

class e implements java.lang.Runnable {
    final com.reyun.tracking.a.d a;

    e(com.reyun.tracking.a.d r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r2 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r2, r1)
            com.reyun.tracking.a.d r1 = r6.a
            com.reyun.tracking.a.g r1 = com.reyun.tracking.a.d.b(r1)
            if (r1 != 0) goto L19
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            goto L23
        L19:
            com.reyun.tracking.a.d r1 = r6.a
            com.reyun.tracking.a.g r1 = com.reyun.tracking.a.d.b(r1)
            org.json.JSONArray r1 = r1.c()
        L23:
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.util.Date r3 = new java.util.Date
            com.reyun.tracking.a.d r4 = r6.a
            long r4 = com.reyun.tracking.a.d.c(r4)
            r3.<init>(r4)
            java.lang.String r3 = r0.format(r3)
            java.lang.String r4 = "gyroStartTime"
            r2.put(r4, r3)
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.lang.String r0 = r0.format(r3)
            java.lang.String r3 = "gyroEndTime"
            r2.put(r3, r0)
            java.lang.String r0 = "gyroData"
            r2.put(r0, r1)
            java.lang.String r0 = "gyroDataEvent"
            com.reyun.tracking.sdk.Tracking.setEvent(r0, r2)
            return
    }
}
