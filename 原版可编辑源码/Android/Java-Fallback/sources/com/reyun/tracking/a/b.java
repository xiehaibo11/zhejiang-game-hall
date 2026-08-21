package com.reyun.tracking.a;

final class b implements java.lang.Runnable {
    final android.content.Context a;
    final com.reyun.tracking.sdk.a b;
    private android.content.BroadcastReceiver c;

    b(android.content.Context r1, com.reyun.tracking.sdk.a r2) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.<init>()
            com.reyun.tracking.a.c r1 = new com.reyun.tracking.a.c
            r1.<init>(r0)
            r0.c = r1
            return
    }

    @Override
    public void run() {
            r5 = this;
            android.content.Context r0 = r5.a     // Catch: java.lang.Exception -> L10
            android.content.BroadcastReceiver r1 = r5.c     // Catch: java.lang.Exception -> L10
            android.content.IntentFilter r2 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L10
            java.lang.String r3 = "android.intent.action.BATTERY_CHANGED"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L10
            android.content.Intent r0 = r0.registerReceiver(r1, r2)     // Catch: java.lang.Exception -> L10
            goto L11
        L10:
            r0 = 0
        L11:
            if (r0 != 0) goto L14
            return
        L14:
            r1 = 0
            java.lang.String r2 = "level"
            int r1 = r0.getIntExtra(r2, r1)
            r2 = 1
            java.lang.String r3 = "scale"
            int r0 = r0.getIntExtra(r3, r2)
            float r1 = (float) r1
            r2 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 * r2
            float r0 = (float) r0
            float r1 = r1 / r0
            float r0 = com.reyun.tracking.a.a.f()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            com.reyun.tracking.a.a.a(r1)
            if (r0 != 0) goto L42
            org.json.JSONArray r0 = com.reyun.tracking.a.a.g()     // Catch: java.lang.Exception -> L72
            float r1 = com.reyun.tracking.a.a.f()     // Catch: java.lang.Exception -> L72
            double r1 = (double) r1     // Catch: java.lang.Exception -> L72
            r0.put(r1)     // Catch: java.lang.Exception -> L72
            goto L72
        L42:
            org.json.JSONArray r0 = com.reyun.tracking.a.a.g()     // Catch: java.lang.Exception -> L4f
            float r1 = com.reyun.tracking.a.a.f()     // Catch: java.lang.Exception -> L4f
            double r1 = (double) r1     // Catch: java.lang.Exception -> L4f
            r0.put(r1)     // Catch: java.lang.Exception -> L4f
            goto L50
        L4f:
        L50:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.reyun.tracking.a.a.h()
            long r0 = r0 - r2
            r2 = 1800000(0x1b7740, double:8.89318E-318)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L72
            com.reyun.tracking.a.a.d()
            long r0 = java.lang.System.currentTimeMillis()
            com.reyun.tracking.a.a.b(r0)
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            com.reyun.tracking.a.a.a(r0)
        L72:
            android.content.Context r0 = r5.a
            android.content.BroadcastReceiver r1 = r5.c
            r0.unregisterReceiver(r1)
            com.reyun.tracking.sdk.a r0 = r5.b
            r1 = 180000(0x2bf20, double:8.8932E-319)
            r0.a(r5, r1)
            return
    }
}
