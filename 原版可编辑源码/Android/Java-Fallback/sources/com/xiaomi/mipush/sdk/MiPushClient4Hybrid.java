package com.xiaomi.mipush.sdk;

public class MiPushClient4Hybrid {
    private static java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b.a> dataMap;
    private static com.xiaomi.mipush.sdk.MiPushClient4Hybrid.MiPushCallback sCallback;
    private static java.util.Map<java.lang.String, java.lang.Long> sRegisterTimeMap;

    public class MiPushCallback {
        public MiPushCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onCommandResult(java.lang.String r1, com.xiaomi.mipush.sdk.MiPushCommandMessage r2) {
                r0 = this;
                return
        }

        public void onReceiveRegisterResult(java.lang.String r1, com.xiaomi.mipush.sdk.MiPushCommandMessage r2) {
                r0 = this;
                return
        }

        public void onReceiveUnregisterResult(java.lang.String r1, com.xiaomi.mipush.sdk.MiPushCommandMessage r2) {
                r0 = this;
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid.dataMap = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sRegisterTimeMap = r0
            return
    }

    public MiPushClient4Hybrid() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void addPullNotificationTime(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "last_pull_notification_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.SharedPreferences$Editor r2 = r2.edit()
            long r0 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r2 = r2.putLong(r3, r0)
            r2.commit()
            return
    }

    private static short getDeviceStatus(com.xiaomi.mipush.sdk.MiPushMessage r2, boolean r3) {
            java.util.Map r0 = r2.getExtra()
            if (r0 != 0) goto L9
            java.lang.String r2 = ""
            goto L15
        L9:
            java.util.Map r2 = r2.getExtra()
            java.lang.String r0 = "__hybrid_device_status"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
        L15:
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L24
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r0 = r2.intValue()
        L24:
            if (r3 != 0) goto L30
            r2 = r0 & (-4)
            com.xiaomi.push.h$a r3 = com.xiaomi.push.h.a.c
            int r3 = r3.a()
            int r0 = r2 + r3
        L30:
            short r2 = (short) r0
            return r2
    }

    public static boolean isRegistered(android.content.Context r0, java.lang.String r1) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            com.xiaomi.mipush.sdk.b$a r0 = r0.a(r1)
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public static void onReceiveRegisterResult(android.content.Context r9, com.xiaomi.push.ik r10) {
            java.lang.String r0 = r10.c()
            long r1 = r10.a()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L26
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r1 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.dataMap
            java.lang.Object r1 = r1.get(r0)
            com.xiaomi.mipush.sdk.b$a r1 = (com.xiaomi.mipush.sdk.b.a) r1
            if (r1 == 0) goto L26
            java.lang.String r2 = r10.e
            java.lang.String r3 = r10.f
            r1.a(r2, r3)
            com.xiaomi.mipush.sdk.b r9 = com.xiaomi.mipush.sdk.b.a(r9)
            r9.a(r0, r1)
        L26:
            r9 = 0
            java.lang.String r1 = r10.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L39
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            java.lang.String r1 = r10.e
            r9.add(r1)
        L39:
            r3 = r9
            com.xiaomi.push.ey r9 = com.xiaomi.push.ey.a
            java.lang.String r2 = r9.a
            long r4 = r10.a
            java.lang.String r6 = r10.d
            r7 = 0
            r8 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r9 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r2, r3, r4, r6, r7, r8)
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid$MiPushCallback r10 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sCallback
            if (r10 == 0) goto L4f
            r10.onReceiveRegisterResult(r0, r9)
        L4f:
            return
    }

    public static void onReceiveUnregisterResult(android.content.Context r7, com.xiaomi.push.iq r8) {
            com.xiaomi.push.ey r7 = com.xiaomi.push.ey.b
            java.lang.String r0 = r7.a
            long r2 = r8.a
            java.lang.String r4 = r8.d
            r1 = 0
            r5 = 0
            r6 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r7 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r0, r1, r2, r4, r5, r6)
            java.lang.String r8 = r8.a()
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid$MiPushCallback r0 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sCallback
            if (r0 == 0) goto L1a
            r0.onReceiveUnregisterResult(r8, r7)
        L1a:
            return
    }

    public static void registerPush(android.content.Context r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r9)
            boolean r0 = r0.a(r11, r12, r10)
            if (r0 == 0) goto L6b
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            com.xiaomi.mipush.sdk.b r12 = com.xiaomi.mipush.sdk.b.a(r9)
            com.xiaomi.mipush.sdk.b$a r12 = r12.a(r10)
            if (r12 == 0) goto L32
            java.lang.String r12 = r12.c
            r2.add(r12)
            com.xiaomi.push.ey r12 = com.xiaomi.push.ey.a
            java.lang.String r1 = r12.a
            r3 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r12 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r1, r2, r3, r5, r6, r7)
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid$MiPushCallback r0 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sCallback
            if (r0 == 0) goto L32
            r0.onReceiveRegisterResult(r10, r12)
        L32:
            boolean r12 = shouldPullNotification(r9, r10)
            if (r12 == 0) goto L147
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            r1.b(r11)
            com.xiaomi.push.ht r12 = com.xiaomi.push.ht.j
            java.lang.String r12 = r12.a
            r1.c(r12)
            java.lang.String r12 = com.xiaomi.push.service.bd.a()
            r1.a(r12)
            r12 = 0
            r1.a(r12)
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r9)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r4 = 1
            r5 = 0
            r6 = 0
            r7 = r10
            r8 = r11
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r11 = "MiPushClient4Hybrid pull offline pass through message"
            com.xiaomi.channel.commonutils.logger.b.b(r11)
            addPullNotificationTime(r9, r10)
            goto L147
        L6b:
            long r0 = java.lang.System.currentTimeMillis()
            java.util.Map<java.lang.String, java.lang.Long> r2 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sRegisterTimeMap
            java.lang.Object r2 = r2.get(r10)
            if (r2 == 0) goto L84
            java.util.Map<java.lang.String, java.lang.Long> r2 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sRegisterTimeMap
            java.lang.Object r2 = r2.get(r10)
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            goto L86
        L84:
            r2 = 0
        L86:
            long r2 = r0 - r2
            long r2 = java.lang.Math.abs(r2)
            r4 = 5000(0x1388, double:2.4703E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L98
            java.lang.String r9 = "MiPushClient4Hybrid  Could not send register message within 5s repeatedly."
            com.xiaomi.channel.commonutils.logger.b.a(r9)
            return
        L98:
            java.util.Map<java.lang.String, java.lang.Long> r2 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sRegisterTimeMap
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r2.put(r10, r0)
            r0 = 6
            java.lang.String r0 = com.xiaomi.push.bp.a(r0)
            com.xiaomi.mipush.sdk.b$a r1 = new com.xiaomi.mipush.sdk.b$a
            r1.<init>(r9)
            r1.c(r11, r12, r0)
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r2 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.dataMap
            r2.put(r10, r1)
            com.xiaomi.push.ij r1 = new com.xiaomi.push.ij
            r1.<init>()
            java.lang.String r2 = com.xiaomi.push.service.bd.a()
            r1.a(r2)
            r1.b(r11)
            r1.e(r12)
            r1.d(r10)
            r1.f(r0)
            java.lang.String r10 = r9.getPackageName()
            java.lang.String r10 = com.xiaomi.push.h.a(r9, r10)
            r1.c(r10)
            java.lang.String r10 = r9.getPackageName()
            int r10 = com.xiaomi.push.h.a(r9, r10)
            r1.b(r10)
            java.lang.String r10 = "4_9_0"
            r1.h(r10)
            r10 = 40090(0x9c9a, float:5.6178E-41)
            r1.a(r10)
            com.xiaomi.push.hx r10 = com.xiaomi.push.hx.c
            r1.a(r10)
            boolean r10 = com.xiaomi.push.m.d()
            if (r10 != 0) goto L108
            java.lang.String r10 = com.xiaomi.push.j.e(r9)
            boolean r11 = android.text.TextUtils.isEmpty(r10)
            if (r11 != 0) goto L108
            java.lang.String r10 = com.xiaomi.push.bp.a(r10)
            r1.i(r10)
        L108:
            int r10 = com.xiaomi.push.j.a()
            if (r10 < 0) goto L111
            r1.c(r10)
        L111:
            com.xiaomi.push.ii r10 = new com.xiaomi.push.ii
            r10.<init>()
            com.xiaomi.push.ht r11 = com.xiaomi.push.ht.J
            java.lang.String r11 = r11.a
            r10.c(r11)
            com.xiaomi.mipush.sdk.b r11 = com.xiaomi.mipush.sdk.b.a(r9)
            java.lang.String r11 = r11.a()
            r10.b(r11)
            java.lang.String r11 = r9.getPackageName()
            r10.d(r11)
            byte[] r11 = com.xiaomi.push.it.a(r1)
            r10.a(r11)
            java.lang.String r11 = com.xiaomi.push.service.bd.a()
            r10.a(r11)
            com.xiaomi.mipush.sdk.ao r9 = com.xiaomi.mipush.sdk.ao.a(r9)
            com.xiaomi.push.hj r11 = com.xiaomi.push.hj.i
            r12 = 0
            r9.a(r10, r11, r12)
        L147:
            return
    }

    public static void removeDuplicateCache(android.content.Context r2, com.xiaomi.mipush.sdk.MiPushMessage r3) {
            java.util.Map r0 = r3.getExtra()
            if (r0 == 0) goto L13
            java.util.Map r0 = r3.getExtra()
            java.lang.String r1 = "jobkey"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            goto L14
        L13:
            r0 = 0
        L14:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1e
            java.lang.String r0 = r3.getMessageId()
        L1e:
            com.xiaomi.mipush.sdk.am.a(r2, r0)
            return
    }

    public static void reportMessageArrived(android.content.Context r5, com.xiaomi.mipush.sdk.MiPushMessage r6, boolean r7) {
            java.lang.String r0 = "__hybrid_device_status"
            java.lang.String r1 = "__hybrid_message_ts"
            if (r6 == 0) goto La0
            java.util.Map r2 = r6.getExtra()
            if (r2 != 0) goto Le
            goto La0
        Le:
            com.xiaomi.push.hz r2 = new com.xiaomi.push.hz     // Catch: java.lang.Throwable -> L7d
            r2.<init>()     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r5)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L7d
            r2.b(r3)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r6.getMessageId()     // Catch: java.lang.Throwable -> L7d
            r2.a(r3)     // Catch: java.lang.Throwable -> L7d
            java.util.Map r3 = r6.getExtra()     // Catch: java.lang.Throwable -> L7d
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7d
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L7d
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L7d
            r2.a(r3)     // Catch: java.lang.Throwable -> L7d
            short r7 = getDeviceStatus(r6, r7)     // Catch: java.lang.Throwable -> L7d
            r2.a(r7)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r7 = r6.getTopic()     // Catch: java.lang.Throwable -> L7d
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L7d
            if (r7 != 0) goto L52
            java.lang.String r7 = r6.getTopic()     // Catch: java.lang.Throwable -> L7d
            r2.c(r7)     // Catch: java.lang.Throwable -> L7d
        L52:
            com.xiaomi.push.hw r7 = com.xiaomi.mipush.sdk.PushMessageHelper.generateMessage(r6)     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.hw r7 = com.xiaomi.push.service.br.a(r7)     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.mipush.sdk.ao r5 = com.xiaomi.mipush.sdk.ao.a(r5)     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.f     // Catch: java.lang.Throwable -> L7d
            r4 = 0
            r5.a(r2, r3, r4, r7)     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r5.<init>()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r7 = "MiPushClient4Hybrid ack mina message, messageId is "
            r5.append(r7)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r7 = r6.getMessageId()     // Catch: java.lang.Throwable -> L7d
            r5.append(r7)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.channel.commonutils.logger.b.b(r5)     // Catch: java.lang.Throwable -> L7d
            goto L81
        L7d:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L90
        L81:
            java.util.Map r5 = r6.getExtra()
            r5.remove(r1)
            java.util.Map r5 = r6.getExtra()
            r5.remove(r0)
            return
        L90:
            r5 = move-exception
            java.util.Map r7 = r6.getExtra()
            r7.remove(r1)
            java.util.Map r6 = r6.getExtra()
            r6.remove(r0)
            throw r5
        La0:
            java.lang.String r5 = "do not ack message, message is null"
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            return
    }

    public static void reportMessageClicked(android.content.Context r0, com.xiaomi.mipush.sdk.MiPushMessage r1) {
            com.xiaomi.mipush.sdk.MiPushClient.reportMessageClicked(r0, r1)
            return
    }

    public static void setCallback(com.xiaomi.mipush.sdk.MiPushClient4Hybrid.MiPushCallback r0) {
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sCallback = r0
            return
    }

    private static boolean shouldPullNotification(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "last_pull_notification_"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r1 = -1
            long r3 = r3.getLong(r4, r1)
            long r1 = java.lang.System.currentTimeMillis()
            long r1 = r1 - r3
            long r3 = java.lang.Math.abs(r1)
            r1 = 300000(0x493e0, double:1.482197E-318)
            int r3 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r3 <= 0) goto L2f
            r0 = 1
        L2f:
            return r0
    }

    public static void unregisterPush(android.content.Context r4, java.lang.String r5) {
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.xiaomi.mipush.sdk.MiPushClient4Hybrid.sRegisterTimeMap
            r0.remove(r5)
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r4)
            com.xiaomi.mipush.sdk.b$a r0 = r0.a(r5)
            if (r0 != 0) goto L10
            return
        L10:
            com.xiaomi.push.ip r1 = new com.xiaomi.push.ip
            r1.<init>()
            java.lang.String r2 = com.xiaomi.push.service.bd.a()
            r1.a(r2)
            r1.d(r5)
            java.lang.String r2 = r0.a
            r1.b(r2)
            java.lang.String r2 = r0.c
            r1.c(r2)
            java.lang.String r0 = r0.b
            r1.e(r0)
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            com.xiaomi.push.ht r2 = com.xiaomi.push.ht.L
            java.lang.String r2 = r2.a
            r0.c(r2)
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r4)
            java.lang.String r2 = r2.a()
            r0.b(r2)
            java.lang.String r2 = r4.getPackageName()
            r0.d(r2)
            byte[] r1 = com.xiaomi.push.it.a(r1)
            r0.a(r1)
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r4)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r1.a(r0, r2, r3)
            com.xiaomi.mipush.sdk.b r4 = com.xiaomi.mipush.sdk.b.a(r4)
            r4.b(r5)
            return
    }

    public static void uploadClearMessageData(android.content.Context r0, java.util.LinkedList<? extends java.lang.Object> r1) {
            com.xiaomi.push.service.al.a(r0, r1)
            return
    }
}
