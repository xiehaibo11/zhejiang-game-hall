package com.reyun.tracking.utils;

public class s implements com.reyun.tracking.utils.n {
    private android.content.Context a;
    private java.lang.String b;
    private long c;
    private java.util.Map d;
    private boolean e;

    public s(java.lang.String r3, android.content.Context r4, long r5, java.util.Map r7) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.c = r0
            r0 = 1
            r2.e = r0
            r2.a = r4
            r2.b = r3
            r2.c = r5
            r2.d = r7
            return
    }

    static java.util.Map a(com.reyun.tracking.utils.s r0) {
            java.util.Map r0 = r0.d
            return r0
    }

    private void a() {
            r2 = this;
            java.lang.Runnable r0 = com.reyun.tracking.sdk.Tracking.getDataShareRunnable()
            if (r0 == 0) goto L14
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            java.lang.Runnable r1 = com.reyun.tracking.sdk.Tracking.getDataShareRunnable()
            r0.a(r1)
            com.reyun.tracking.sdk.Tracking.removeDataShareRunnable()
        L14:
            return
    }

    static android.content.Context b(com.reyun.tracking.utils.s r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    private void b() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "appid"
            java.lang.String r2 = com.reyun.tracking.sdk.Tracking.getAppId()     // Catch: org.json.JSONException -> L32
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L32
            java.lang.String r1 = "device_id"
            java.lang.String r2 = com.reyun.tracking.sdk.Tracking.getDeviceId()     // Catch: org.json.JSONException -> L32
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L32
            java.lang.String r1 = "create_timestamp"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L32
            r2.<init>()     // Catch: org.json.JSONException -> L32
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: org.json.JSONException -> L32
            long r3 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L32
            r2.append(r3)     // Catch: org.json.JSONException -> L32
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L32
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L32
            goto L36
        L32:
            r1 = move-exception
            r1.printStackTrace()
        L36:
            com.reyun.tracking.utils.u r1 = new com.reyun.tracking.utils.u
            r1.<init>(r5)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "https://link.trackingio.com/dpquery"
            java.lang.String r4 = "application/json"
            java.lang.Runnable r1 = com.reyun.tracking.utils.l.a(r3, r4, r2, r1)
            com.reyun.tracking.utils.o r1 = (com.reyun.tracking.utils.o) r1
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r1.a(r2)
            r2 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r1.a(r3)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.b(r2)
            com.reyun.tracking.sdk.p r2 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r2 == 0) goto L74
            com.reyun.tracking.sdk.p r2 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "dpquery"
            r2.a(r3, r0)
        L74:
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            r2 = 2000(0x7d0, double:9.88E-321)
            r0.a(r1, r2)
            return
    }

    private void c() {
            r4 = this;
            com.reyun.tracking.utils.IAttributionQueryListener r0 = com.reyun.tracking.sdk.Tracking.getAttributionQueryListener()
            if (r0 != 0) goto L7
            return
        L7:
            com.reyun.tracking.utils.v r0 = new com.reyun.tracking.utils.v
            r0.<init>(r4)
            com.reyun.tracking.sdk.a r1 = com.reyun.tracking.sdk.a.a()
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.a(r0, r2)
            return
    }

    @Override
    public void a(int r5, java.lang.Object r6) {
            r4 = this;
            java.lang.String r5 = r4.b
            boolean r5 = com.reyun.tracking.a.a.b(r5)
            if (r5 != 0) goto L92
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "========Request SUCCESS======== event["
            r5.append(r0)
            java.lang.String r0 = r4.b
            r5.append(r0)
            java.lang.String r0 = "]"
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "Tracking"
            com.reyun.tracking.a.a.d(r0, r5)
            java.lang.String r5 = r4.b
            java.lang.String r0 = "install"
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto L58
            r5 = 1
            com.reyun.tracking.sdk.Tracking.setIsInstallSent(r5)
            android.content.Context r5 = r4.a
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "tracking_install"
            java.lang.String r3 = "key_install_send_success_time"
            com.reyun.tracking.utils.f.b(r5, r2, r3, r0)
            com.reyun.tracking.sdk.a r5 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.utils.t r0 = new com.reyun.tracking.utils.t
            r0.<init>(r4)
            r1 = 2000(0x7d0, double:9.88E-321)
            r5.a(r0, r1)
            r4.c()
            r4.b()
            goto L5f
        L58:
            java.lang.String r5 = r4.b
            java.lang.String r0 = "batch"
            r0.equals(r5)
        L5f:
            r4.a()
            long r0 = r4.c
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto L7b
            android.content.Context r5 = r4.a
            java.lang.String r0 = "TrackingIO"
            com.reyun.tracking.utils.i r5 = com.reyun.tracking.utils.i.a(r5, r0)
            long r0 = r4.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r5.a(r0)
        L7b:
            com.reyun.tracking.sdk.p r5 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r5 == 0) goto L92
            boolean r5 = r4.e
            if (r5 == 0) goto L92
            com.reyun.tracking.sdk.p r5 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            java.lang.String r0 = r4.b
            java.lang.String r6 = r6.toString()
            r5.b(r0, r6)
        L92:
            return
    }

    @Override
    public void a(java.lang.Throwable r3, java.lang.String r4) {
            r2 = this;
            if (r4 == 0) goto L42
            java.lang.String r3 = ""
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto Lb
            goto L42
        Lb:
            android.content.Context r3 = r2.a
            java.lang.String r4 = "TrackingIO"
            com.reyun.tracking.utils.i r3 = com.reyun.tracking.utils.i.a(r3, r4)
            long r0 = r2.c
            java.lang.String r4 = java.lang.String.valueOf(r0)
            r0 = 0
            r3.b(r4, r0)
            java.lang.String r3 = r2.b
            boolean r3 = com.reyun.tracking.a.a.b(r3)
            if (r3 != 0) goto L42
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "********Request FAILED******** event["
            r3.append(r4)
            java.lang.String r4 = r2.b
            r3.append(r4)
            java.lang.String r4 = "]"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "Tracking"
            com.reyun.tracking.a.a.a(r4, r3)
        L42:
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
