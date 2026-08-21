package com.reyun.tracking.a;

public class h {
    public static java.lang.String a = "unknown";
    static boolean b = false;
    private static java.lang.String c = null;
    private static java.lang.String d = "unknown";
    private static java.lang.String e = "unknown";

    static {
            return
    }

    private static java.lang.String a(android.content.Context r4) {
            java.lang.String r0 = com.reyun.tracking.a.h.a
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "oaid"
            java.lang.String r2 = "tracking_device_id_cache"
            java.lang.String r3 = com.reyun.tracking.utils.f.a(r4, r2, r1, r0)
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L18
            com.reyun.tracking.a.h.a = r3
            return r3
        L18:
            java.lang.String r0 = "device_id"
            java.lang.String r0 = com.reyun.tracking.utils.f.a(r4, r2, r0)
            java.lang.String r3 = "device_id_type"
            java.lang.String r4 = com.reyun.tracking.utils.f.a(r4, r2, r3)
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L2d
            com.reyun.tracking.a.h.a = r0
            return r0
        L2d:
            java.lang.String r4 = com.reyun.tracking.a.h.a
            return r4
    }

    public static org.json.JSONObject a(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, boolean r8) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "appid"
            r0.put(r1, r4)
            java.lang.String r1 = "who"
            r0.put(r1, r6)
            java.lang.String r6 = "what"
            r0.put(r6, r5)
            long r5 = java.lang.System.currentTimeMillis()
            long r1 = b(r3)
            long r5 = r5 + r1
            java.lang.String r5 = com.reyun.tracking.a.a.a(r5)
            java.lang.String r6 = "when"
            r0.put(r6, r5)
            org.json.JSONObject r3 = a(r3, r7, r4, r8)
            java.lang.String r4 = "context"
            r0.put(r4, r3)
            return r0
    }

    public static org.json.JSONObject a(android.content.Context r4, java.lang.String r5, java.lang.String r6, boolean r7) {
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.String r0 = com.reyun.tracking.a.a.k(r4)
            java.lang.String r1 = "_app_version"
            r6.put(r1, r0)
            java.lang.String r0 = "_campaignid"
            r6.put(r0, r5)
            java.lang.String r5 = android.os.Build.VERSION.RELEASE
            java.lang.String r0 = "_ryosversion"
            r6.put(r0, r5)
            java.lang.String r5 = android.os.Build.MODEL
            java.lang.String r0 = "_rydevicetype"
            r6.put(r0, r5)
            int r5 = android.os.Build.VERSION.SDK_INT
            java.lang.String r0 = "_ryandroid8version"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.h(r4)
            java.lang.String r0 = "_carrier"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.a(r4)
            java.lang.String r0 = "_pkgname"
            r6.put(r0, r5)
            java.lang.String r5 = "_lib_version"
            java.lang.String r0 = "1.9.5"
            r6.put(r5, r0)
            java.lang.String r5 = android.os.Build.MODEL
            java.lang.String r0 = "_model"
            r6.put(r0, r5)
            boolean r5 = com.reyun.tracking.a.a.l(r4)
            if (r5 == 0) goto L51
            java.lang.String r5 = "table"
            goto L53
        L51:
            java.lang.String r5 = "phone"
        L53:
            java.lang.String r0 = "_istablet"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.i.b
            java.lang.String r0 = "_ryos"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.i.b
            java.lang.String r0 = "_lib"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.a()
            java.lang.String r0 = "_tz"
            r6.put(r0, r5)
            java.lang.String r5 = android.os.Build.MANUFACTURER
            java.lang.String r0 = "_manufacturer"
            r6.put(r0, r5)
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = b(r4)
            long r0 = r0 + r2
            java.lang.String r5 = "_create_timestamp"
            r6.put(r5, r0)
            java.lang.String r5 = com.reyun.tracking.a.a.i(r4)
            java.lang.String r0 = "_resolution"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.c(r4)
            java.lang.String r0 = "_androidid"
            r6.put(r0, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.j(r4)
            java.lang.String r0 = "_network_type"
            r6.put(r0, r5)
            java.lang.String r5 = "dev_type"
            java.lang.String r0 = "_deviceid"
            java.lang.String r1 = "_imei"
            if (r7 == 0) goto Lc1
            com.reyun.tracking.a.f r7 = com.reyun.tracking.a.a.f(r4)
            java.lang.String r2 = r7.a()
            r6.put(r0, r2)
            java.lang.String r0 = r7.b()
            r6.put(r5, r0)
            java.lang.String r5 = r7.a()
            r6.put(r1, r5)
            goto Ld6
        Lc1:
            java.lang.String r7 = com.reyun.tracking.a.a.b(r4)
            r6.put(r1, r7)
            java.lang.String r7 = com.reyun.tracking.a.a.b(r4)
            r6.put(r0, r7)
            java.lang.String r7 = com.reyun.tracking.a.a.b()
            r6.put(r5, r7)
        Ld6:
            java.lang.String r5 = com.reyun.tracking.a.a.c()
            java.lang.String r7 = "_ipv6"
            r6.put(r7, r5)
            java.lang.String r5 = a(r4)
            java.lang.String r7 = "_oaid"
            r6.put(r7, r5)
            boolean r5 = com.reyun.tracking.a.h.b
            java.lang.String r7 = "_oaid_limited"
            r6.put(r7, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.d(r4)
            java.lang.String r7 = "_imei2"
            r6.put(r7, r5)
            java.lang.String r5 = com.reyun.tracking.a.a.e(r4)
            java.lang.String r7 = "_meid"
            r6.put(r7, r5)
            int r5 = com.reyun.tracking.a.a.n(r4)
            java.lang.String r7 = "_screen_brightness"
            r6.put(r7, r5)
            int r4 = com.reyun.tracking.a.a.o(r4)
            java.lang.String r5 = "_audio_volume"
            r6.put(r5, r4)
            return r6
    }

    public static void a(android.content.Context r1, java.lang.String r2, boolean r3) {
            com.reyun.tracking.a.h.a = r2
            com.reyun.tracking.a.h.b = r3
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L2f
            java.lang.String r3 = com.reyun.tracking.a.h.a
            java.lang.String r0 = "unknown"
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto L2f
            java.lang.String r3 = com.reyun.tracking.a.h.a
            java.lang.String r0 = "^[0]+-[0]+-[0]+-[0]+-[0]+$"
            boolean r3 = java.util.regex.Pattern.matches(r0, r3)
            if (r3 != 0) goto L2f
            java.lang.String r3 = com.reyun.tracking.a.h.a
            java.lang.String r0 = "^[0]+$"
            boolean r3 = java.util.regex.Pattern.matches(r0, r3)
            if (r3 != 0) goto L2f
            java.lang.String r3 = "tracking_device_id_cache"
            java.lang.String r0 = "oaid"
            com.reyun.tracking.utils.f.b(r1, r3, r0, r2)
        L2f:
            return
    }

    public static void a(org.json.JSONObject r5, android.content.Context r6) {
            java.lang.String r0 = "context"
            org.json.JSONObject r5 = r5.optJSONObject(r0)
            if (r5 == 0) goto L1b
            java.lang.String r0 = "_timestamp"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L17
            long r3 = b(r6)     // Catch: org.json.JSONException -> L17
            long r1 = r1 + r3
            r5.put(r0, r1)     // Catch: org.json.JSONException -> L17
            goto L1b
        L17:
            r5 = move-exception
            r5.printStackTrace()
        L1b:
            return
    }

    private static long b(android.content.Context r4) {
            r0 = 0
            if (r4 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "tracking_interval"
            java.lang.String r3 = "interval"
            long r0 = com.reyun.tracking.utils.f.a(r4, r2, r3, r0)
            return r0
    }

    public static void b(org.json.JSONObject r1, android.content.Context r2) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.getUploadMac()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r0 = "context"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            if (r1 == 0) goto L1d
            java.lang.String r0 = "_mac"
            java.lang.String r2 = c(r2)     // Catch: org.json.JSONException -> L19
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L19
            goto L1d
        L19:
            r1 = move-exception
            r1.printStackTrace()
        L1d:
            return
    }

    private static java.lang.String c(android.content.Context r4) {
            java.lang.String r0 = com.reyun.tracking.a.h.c
            boolean r0 = com.reyun.tracking.a.a.b(r0)
            if (r0 == 0) goto L29
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "mac"
            java.lang.String r2 = "xml_mac"
            java.lang.String r3 = com.reyun.tracking.utils.f.a(r4, r2, r1, r0)
            com.reyun.tracking.a.h.c = r3
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L26
            java.lang.String r0 = com.reyun.tracking.a.a.m(r4)
            com.reyun.tracking.a.h.c = r0
            com.reyun.tracking.utils.f.b(r4, r2, r1, r0)
            java.lang.String r4 = com.reyun.tracking.a.h.c
            return r4
        L26:
            java.lang.String r4 = com.reyun.tracking.a.h.c
            return r4
        L29:
            java.lang.String r4 = com.reyun.tracking.a.h.c
            return r4
    }
}
