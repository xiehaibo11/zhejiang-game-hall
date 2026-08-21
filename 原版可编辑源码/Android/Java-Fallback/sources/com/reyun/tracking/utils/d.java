package com.reyun.tracking.utils;

public class d {
    private static java.lang.Runnable a;

    static java.lang.Runnable a(java.lang.Runnable r0) {
            com.reyun.tracking.utils.d.a = r0
            return r0
    }

    private static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = "pkgInfo"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto Lb
            java.lang.String r2 = "https://log.reyun.com/receive/pkginfo"
            return r2
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://log.trackingio.com/"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static void a() {
            java.lang.Runnable r0 = com.reyun.tracking.utils.d.a
            if (r0 != 0) goto L1a
            boolean r0 = com.reyun.tracking.a.i.c
            if (r0 != 0) goto L9
            goto L1a
        L9:
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.utils.e r1 = new com.reyun.tracking.utils.e
            r1.<init>()
            com.reyun.tracking.utils.d.a = r1
            r2 = 60000(0xea60, double:2.9644E-319)
            r0.a(r1, r2)
        L1a:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.reyun.tracking.utils.n r4) {
            boolean r1 = com.reyun.tracking.a.i.c
            if (r1 == 0) goto L17
            r1 = 6783(0x1a7f, float:9.505E-42)
            java.lang.String r2 = "slog.trackingio.com"
            com.reyun.tracking.utils.p r1 = com.reyun.tracking.utils.p.a(r2, r1)
            r2 = 0
            com.reyun.tracking.utils.w r0 = new com.reyun.tracking.utils.w
            r0.<init>(r4, r3)
            java.lang.Runnable r1 = r1.a(r3, r2, r0)
            goto L2c
        L17:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "https://log.trackingio.com/"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.Runnable r1 = com.reyun.tracking.utils.l.a(r1, r4)
        L2c:
            com.reyun.tracking.sdk.a r2 = com.reyun.tracking.sdk.a.a()
            r2.a(r1)
            a()
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, org.json.JSONObject r4, int r5, com.reyun.tracking.utils.n r6) {
            com.reyun.tracking.a.h.b(r4, r1)
            com.reyun.tracking.a.h.a(r4, r1)
            boolean r1 = com.reyun.tracking.a.i.c
            if (r1 == 0) goto L20
            r1 = 6783(0x1a7f, float:9.505E-42)
            java.lang.String r5 = "slog.trackingio.com"
            com.reyun.tracking.utils.p r1 = com.reyun.tracking.utils.p.a(r5, r1)
            java.lang.String r5 = r4.toString()
            com.reyun.tracking.utils.w r0 = new com.reyun.tracking.utils.w
            r0.<init>(r6, r3)
            java.lang.Runnable r1 = r1.a(r3, r5, r0)
            goto L2c
        L20:
            java.lang.String r1 = a(r3)
            java.lang.String r0 = r4.toString()
            java.lang.Runnable r1 = com.reyun.tracking.utils.l.a(r1, r0, r5, r6)
        L2c:
            com.reyun.tracking.sdk.p r5 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r5 == 0) goto L45
            java.lang.String r5 = "receive/tkio/sdklog"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L45
            com.reyun.tracking.sdk.p r3 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            java.lang.String r4 = r4.toString()
            r3.a(r2, r4)
        L45:
            com.reyun.tracking.sdk.a r2 = com.reyun.tracking.sdk.a.a()
            r2.a(r1)
            a()
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, org.json.JSONObject r6, com.reyun.tracking.utils.n r7) {
            java.lang.String r0 = "data"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L1f
            r1 = 0
        L9:
            int r2 = r0.length()     // Catch: org.json.JSONException -> L1e
            if (r1 >= r2) goto L1f
            java.lang.Object r2 = r0.get(r1)     // Catch: org.json.JSONException -> L1e
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: org.json.JSONException -> L1e
            com.reyun.tracking.a.h.b(r2, r3)     // Catch: org.json.JSONException -> L1e
            com.reyun.tracking.a.h.a(r2, r3)     // Catch: org.json.JSONException -> L1e
            int r1 = r1 + 1
            goto L9
        L1e:
        L1f:
            boolean r3 = com.reyun.tracking.a.i.c
            if (r3 == 0) goto L39
            r3 = 6783(0x1a7f, float:9.505E-42)
            java.lang.String r0 = "slog.trackingio.com"
            com.reyun.tracking.utils.p r3 = com.reyun.tracking.utils.p.a(r0, r3)
            java.lang.String r0 = r6.toString()
            com.reyun.tracking.utils.w r1 = new com.reyun.tracking.utils.w
            r1.<init>(r7, r5)
            java.lang.Runnable r3 = r3.a(r5, r0, r1)
            goto L53
        L39:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "https://log.trackingio.com/"
            r3.append(r0)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = r6.toString()
            r1 = 1
            java.lang.Runnable r3 = com.reyun.tracking.utils.l.a(r3, r0, r1, r7)
        L53:
            com.reyun.tracking.sdk.p r7 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r7 == 0) goto L6c
            java.lang.String r7 = "receive/tkio/sdklog"
            boolean r5 = r7.equals(r5)
            if (r5 != 0) goto L6c
            com.reyun.tracking.sdk.p r5 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            java.lang.String r6 = r6.toString()
            r5.a(r4, r6)
        L6c:
            com.reyun.tracking.sdk.a r4 = com.reyun.tracking.sdk.a.a()
            r4.b(r3)
            a()
            return
    }
}
