package com.xiaomi.mipush.sdk;

public class o {
    public static void a(android.content.Context r6, android.content.Intent r7, android.net.Uri r8) {
            if (r6 != 0) goto L3
            return
        L3:
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r6)
            r0.a()
            android.content.Context r0 = r6.getApplicationContext()
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r0)
            com.xiaomi.push.eh r0 = r0.a()
            if (r0 != 0) goto L5b
            android.content.Context r0 = r6.getApplicationContext()
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r0)
            android.content.Context r1 = r6.getApplicationContext()
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            java.lang.String r1 = r1.a()
            java.lang.String r2 = r6.getPackageName()
            android.content.Context r3 = r6.getApplicationContext()
            com.xiaomi.push.service.ba r3 = com.xiaomi.push.service.ba.a(r3)
            com.xiaomi.push.ho r4 = com.xiaomi.push.ho.aF
            int r4 = r4.a()
            r5 = 0
            int r3 = r3.a(r4, r5)
            com.xiaomi.mipush.sdk.c r4 = new com.xiaomi.mipush.sdk.c
            r4.<init>()
            r0.a(r1, r2, r3, r4)
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r6)
            com.xiaomi.mipush.sdk.q r1 = new com.xiaomi.mipush.sdk.q
            r2 = 102(0x66, float:1.43E-43)
            java.lang.String r3 = "awake online config"
            r1.<init>(r2, r3, r6)
            r0.a(r1)
        L5b:
            boolean r0 = r6 instanceof android.app.Activity
            r1 = 0
            if (r0 == 0) goto L70
            if (r7 == 0) goto L70
            android.content.Context r8 = r6.getApplicationContext()
            com.xiaomi.push.ed r8 = com.xiaomi.push.ed.a(r8)
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.a
        L6c:
            r8.a(r0, r6, r7, r1)
            goto Lb5
        L70:
            boolean r0 = r6 instanceof android.app.Service
            if (r0 == 0) goto L98
            if (r7 == 0) goto L98
            java.lang.String r8 = r7.getAction()
            java.lang.String r0 = "com.xiaomi.mipush.sdk.WAKEUP"
            boolean r8 = r0.equals(r8)
            if (r8 == 0) goto L8d
            android.content.Context r8 = r6.getApplicationContext()
            com.xiaomi.push.ed r8 = com.xiaomi.push.ed.a(r8)
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.c
            goto L6c
        L8d:
            android.content.Context r8 = r6.getApplicationContext()
            com.xiaomi.push.ed r8 = com.xiaomi.push.ed.a(r8)
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.b
            goto L6c
        L98:
            if (r8 == 0) goto Lb5
            java.lang.String r7 = r8.toString()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lb5
            android.content.Context r7 = r6.getApplicationContext()
            com.xiaomi.push.ed r7 = com.xiaomi.push.ed.a(r7)
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.d
            java.lang.String r8 = r8.toString()
            r7.a(r0, r6, r1, r8)
        Lb5:
            return
    }

    private static void a(android.content.Context r4, com.xiaomi.push.ii r5) {
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.aG
            int r1 = r1.a()
            r2 = 0
            boolean r0 = r0.a(r1, r2)
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r3 = com.xiaomi.push.ho.aH
            int r3 = r3.a()
            int r1 = r1.a(r3, r2)
            r3 = 30
            if (r1 < 0) goto L29
            if (r1 >= r3) goto L29
            java.lang.String r1 = "aw_ping: frquency need > 30s."
            com.xiaomi.channel.commonutils.logger.b.c(r1)
            r1 = r3
        L29:
            if (r1 >= 0) goto L2c
            goto L2d
        L2c:
            r2 = r0
        L2d:
            boolean r0 = com.xiaomi.push.m.a()
            if (r0 != 0) goto L37
            a(r4, r5, r2, r1)
            goto L49
        L37:
            if (r2 == 0) goto L49
            android.content.Context r0 = r4.getApplicationContext()
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r0)
            com.xiaomi.mipush.sdk.p r2 = new com.xiaomi.mipush.sdk.p
            r2.<init>(r5, r4)
            r0.a(r2, r1)
        L49:
            return
    }

    public static final <T extends com.xiaomi.push.iu<T, ?>> void a(android.content.Context r2, T r3, boolean r4, int r5) {
            byte[] r3 = com.xiaomi.push.it.a(r3)
            if (r3 != 0) goto Lc
            java.lang.String r2 = "send message fail, because msgBytes is null."
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return
        Lc:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "action_help_ping"
            r0.setAction(r1)
            java.lang.String r1 = "extra_help_ping_switch"
            r0.putExtra(r1, r4)
            java.lang.String r4 = "extra_help_ping_frequency"
            r0.putExtra(r4, r5)
            java.lang.String r4 = "mipush_payload"
            r0.putExtra(r4, r3)
            r3 = 1
            java.lang.String r4 = "com.xiaomi.mipush.MESSAGE_CACHE"
            r0.putExtra(r4, r3)
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            r2.a(r0)
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "aw_ping : send aw_ping cmd and content to push service from 3rd app"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "awake_info"
            r0.put(r1, r3)
            r3 = 9999(0x270f, float:1.4012E-41)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "event_type"
            r0.put(r1, r3)
            java.lang.String r3 = "description"
            java.lang.String r1 = "ping message"
            r0.put(r3, r1)
            com.xiaomi.push.ii r3 = new com.xiaomi.push.ii
            r3.<init>()
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r1 = r1.a()
            r3.b(r1)
            java.lang.String r1 = r2.getPackageName()
            r3.d(r1)
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.I
            java.lang.String r1 = r1.a
            r3.c(r1)
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r3.a(r1)
            r3.a = r0
            a(r2, r3)
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            r0.b(r3)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r0.a(r3)
            java.util.Map r3 = r0.a()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "extra_aw_app_online_cmd"
            r3.put(r1, r4)
            java.util.Map r3 = r0.a()
            java.lang.String r4 = "extra_help_aw_info"
            r3.put(r4, r5)
            java.lang.String r3 = com.xiaomi.push.service.bd.a()
            r0.a(r3)
            byte[] r3 = com.xiaomi.push.it.a(r0)
            if (r3 != 0) goto L39
            java.lang.String r2 = "send message fail, because msgBytes is null."
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return
        L39:
            android.content.Intent r4 = new android.content.Intent
            r4.<init>()
            java.lang.String r5 = "action_aw_app_logic"
            r4.setAction(r5)
            java.lang.String r5 = "mipush_payload"
            r4.putExtra(r5, r3)
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            r2.a(r4)
            return
    }
}
