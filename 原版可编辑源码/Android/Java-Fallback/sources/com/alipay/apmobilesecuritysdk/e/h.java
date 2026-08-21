package com.alipay.apmobilesecuritysdk.e;

public class h {
    public static java.lang.String a = "";

    static {
            return
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long a(android.content.Context r3) {
            java.lang.String r0 = "vkeyid_settings"
            java.lang.String r1 = "update_time_interval"
            java.lang.String r3 = com.alipay.sdk.m.b0.a.a(r3, r0, r1)
            boolean r0 = com.alipay.sdk.m.z.a.b(r3)
            r1 = 86400000(0x5265c00, double:4.2687272E-316)
            if (r0 == 0) goto L15
            long r1 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Exception -> L15
        L15:
            return r1
    }

    public static void a(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "update_time_interval"
            a(r1, r0, r2)
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, long r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "vkey_valid"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r5 = "vkeyid_settings"
            com.alipay.sdk.m.b0.a.a(r2, r5, r3, r4)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "vkeyid_settings"
            com.alipay.sdk.m.b0.a.a(r1, r0, r2, r3)
            return
    }

    public static void a(android.content.Context r1, boolean r2) {
            if (r2 == 0) goto L5
            java.lang.String r2 = "1"
            goto L7
        L5:
            java.lang.String r2 = "0"
        L7:
            java.lang.String r0 = "log_switch"
            a(r1, r0, r2)
            return
    }

    public static java.lang.String b(android.content.Context r2) {
            java.lang.String r0 = "vkeyid_settings"
            java.lang.String r1 = "last_apdid_env"
            java.lang.String r2 = com.alipay.sdk.m.b0.a.a(r2, r0, r1)
            return r2
    }

    public static void b(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "last_machine_boot_time"
            a(r1, r0, r2)
            return
    }

    public static void c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "last_apdid_env"
            a(r1, r0, r2)
            return
    }

    public static boolean c(android.content.Context r2) {
            java.lang.String r0 = "vkeyid_settings"
            java.lang.String r1 = "log_switch"
            java.lang.String r2 = com.alipay.sdk.m.b0.a.a(r2, r0, r1)
            if (r2 == 0) goto L14
            java.lang.String r0 = "1"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L14
            r2 = 1
            return r2
        L14:
            r2 = 0
            return r2
    }

    public static java.lang.String d(android.content.Context r2) {
            java.lang.String r0 = "vkeyid_settings"
            java.lang.String r1 = "dynamic_key"
            java.lang.String r2 = com.alipay.sdk.m.b0.a.a(r2, r0, r1)
            return r2
    }

    public static void d(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "agent_switch"
            a(r1, r0, r2)
            return
    }

    public static java.lang.String e(android.content.Context r2) {
            java.lang.String r0 = "vkeyid_settings"
            java.lang.String r1 = "apse_degrade"
            java.lang.String r2 = com.alipay.sdk.m.b0.a.a(r2, r0, r1)
            return r2
    }

    public static void e(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "dynamic_key"
            a(r1, r0, r2)
            return
    }

    public static java.lang.String f(android.content.Context r5) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.h> r0 = com.alipay.apmobilesecuritysdk.e.h.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.h.a     // Catch: java.lang.Throwable -> L46
            boolean r1 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L42
            java.lang.String r1 = "alipay_vkey_random"
            java.lang.String r2 = "random"
            java.lang.String r3 = ""
            java.lang.String r1 = com.alipay.sdk.m.b0.e.a(r5, r1, r2, r3)     // Catch: java.lang.Throwable -> L46
            com.alipay.apmobilesecuritysdk.e.h.a = r1     // Catch: java.lang.Throwable -> L46
            boolean r1 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L42
            java.util.UUID r1 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = com.alipay.sdk.m.y.b.a(r1)     // Catch: java.lang.Throwable -> L46
            com.alipay.apmobilesecuritysdk.e.h.a = r1     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = "alipay_vkey_random"
            java.lang.String r3 = "random"
            if (r1 == 0) goto L42
            r4 = 0
            android.content.SharedPreferences r5 = r5.getSharedPreferences(r2, r4)     // Catch: java.lang.Throwable -> L46
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L46
            if (r5 == 0) goto L42
            r5.putString(r3, r1)     // Catch: java.lang.Throwable -> L46
            r5.commit()     // Catch: java.lang.Throwable -> L46
        L42:
            java.lang.String r5 = com.alipay.apmobilesecuritysdk.e.h.a     // Catch: java.lang.Throwable -> L46
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            return r5
        L46:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            throw r5
    }

    public static void f(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "webrtc_url"
            a(r1, r0, r2)
            return
    }

    public static void g(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "apse_degrade"
            a(r1, r0, r2)
            return
    }

    public static long h(android.content.Context r5, java.lang.String r6) {
            java.lang.String r0 = "vkeyid_settings"
            r1 = 0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = "vkey_valid"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L22
            r3.append(r6)     // Catch: java.lang.Throwable -> L22
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L22
            java.lang.String r5 = com.alipay.sdk.m.b0.a.a(r5, r0, r6)     // Catch: java.lang.Throwable -> L22
            boolean r6 = com.alipay.sdk.m.z.a.a(r5)     // Catch: java.lang.Throwable -> L22
            if (r6 == 0) goto L1d
            return r1
        L1d:
            long r5 = java.lang.Long.parseLong(r5)     // Catch: java.lang.Throwable -> L22
            return r5
        L22:
            return r1
    }
}
