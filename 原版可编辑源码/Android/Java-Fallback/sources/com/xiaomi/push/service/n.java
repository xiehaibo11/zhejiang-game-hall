package com.xiaomi.push.service;

public class n {
    public static com.xiaomi.push.ik a(com.xiaomi.push.if r1) {
            byte[] r1 = r1.a()
            com.xiaomi.push.ik r0 = new com.xiaomi.push.ik
            r0.<init>()
            com.xiaomi.push.it.a(r0, r1)     // Catch: com.xiaomi.push.iz -> Ld
            return r0
        Ld:
            r1 = 0
            return r1
    }

    static void a(android.content.Context r3, android.content.Intent r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ext_fcm_container_buffer"
            java.lang.String r0 = r4.getStringExtra(r0)
            java.lang.String r1 = "mipush_app_package"
            java.lang.String r4 = r4.getStringExtra(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L46
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L46
            java.lang.String r1 = "mipush_apps_scrt"
            r2 = 0
            android.content.SharedPreferences r1 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L40
            r2 = 0
            java.lang.String r4 = r1.getString(r4, r2)     // Catch: java.lang.Throwable -> L40
            r1 = 2
            byte[] r0 = android.util.Base64.decode(r0, r1)     // Catch: java.lang.Throwable -> L40
            byte[] r4 = b(r0, r4)     // Catch: java.lang.Throwable -> L40
            if (r4 == 0) goto L3a
            com.xiaomi.push.if r0 = com.xiaomi.push.service.y.a(r4)     // Catch: java.lang.Throwable -> L40
            com.xiaomi.push.service.al.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L40
            goto L46
        L3a:
            java.lang.String r3 = "notify fcm notification error ：dencrypt failed"
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L40
            goto L46
        L40:
            r3 = move-exception
            java.lang.String r4 = "notify fcm notification error "
            com.xiaomi.channel.commonutils.logger.b.a(r4, r3)
        L46:
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            if (r2 == 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L21
        Lf:
            r0 = 0
            java.lang.String r1 = "mipush_apps_scrt"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.putString(r3, r4)
            r2.apply()
        L21:
            return
    }

    public static byte[] a(byte[] r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto Ld
            java.lang.String r2 = "secret is empty, return null"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return r1
        Ld:
            byte[] r3 = com.xiaomi.push.bm.a(r3)
            byte[] r2 = com.xiaomi.push.i.b(r3, r2)     // Catch: java.lang.Exception -> L16
            return r2
        L16:
            r2 = move-exception
            java.lang.String r3 = "encryption error. "
            com.xiaomi.channel.commonutils.logger.b.a(r3, r2)
            return r1
    }

    public static byte[] b(byte[] r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto Ld
            java.lang.String r2 = "secret is empty, return null"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return r1
        Ld:
            byte[] r3 = com.xiaomi.push.bm.a(r3)
            byte[] r2 = com.xiaomi.push.i.a(r3, r2)     // Catch: java.lang.Exception -> L16
            return r2
        L16:
            r2 = move-exception
            java.lang.String r3 = "dencryption error. "
            com.xiaomi.channel.commonutils.logger.b.a(r3, r2)
            return r1
    }
}
