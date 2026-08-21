package com.reyun.tracking.utils;

public class c {
    public static void a(android.content.Context r12, java.lang.String r13, java.util.Map r14) {
            java.lang.String r0 = "TrackingIO"
            if (r12 != 0) goto L19
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            r12.<init>()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r14 = "context is null reportSDKLog what:"
            r12.append(r14)     // Catch: java.lang.Throwable -> L6b
            r12.append(r13)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L6b
            com.reyun.tracking.a.a.d(r0, r12)     // Catch: java.lang.Throwable -> L6b
            return
        L19:
            java.lang.String r1 = com.reyun.tracking.sdk.Tracking.getAppId()     // Catch: java.lang.Throwable -> L6b
            boolean r2 = com.reyun.tracking.a.a.a(r1)     // Catch: java.lang.Throwable -> L6b
            if (r2 != 0) goto L38
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            r12.<init>()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r14 = "appid is null reportSDKLog what:"
            r12.append(r14)     // Catch: java.lang.Throwable -> L6b
            r12.append(r13)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L6b
            com.reyun.tracking.a.a.d(r0, r12)     // Catch: java.lang.Throwable -> L6b
            return
        L38:
            java.lang.String r0 = "tracking_login"
            java.lang.String r2 = "account"
            java.lang.String r3 = "unknown"
            java.lang.String r3 = com.reyun.tracking.utils.f.a(r12, r0, r2, r3)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = com.reyun.tracking.sdk.Tracking.getChannelId()     // Catch: java.lang.Throwable -> L6b
            r5 = 1
            r0 = r12
            r2 = r13
            org.json.JSONObject r9 = com.reyun.tracking.a.h.a(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L6b
            com.reyun.tracking.a.a.a(r14, r9)     // Catch: java.lang.Throwable -> L6b
            r14 = 1
            long r3 = com.reyun.tracking.sdk.Tracking.addRecordToDbase(r13, r9, r14)     // Catch: java.lang.Throwable -> L6b
            com.reyun.tracking.utils.s r11 = new com.reyun.tracking.utils.s     // Catch: java.lang.Throwable -> L6b
            r5 = 0
            r0 = r11
            r1 = r13
            r2 = r12
            r0.<init>(r1, r2, r3, r5)     // Catch: java.lang.Throwable -> L6b
            r14 = 0
            r11.a(r14)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r8 = "receive/tkio/sdklog"
            r10 = 1
            r6 = r12
            r7 = r13
            com.reyun.tracking.utils.d.a(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L6b
            goto L6f
        L6b:
            r12 = move-exception
            r12.printStackTrace()
        L6f:
            return
    }
}
