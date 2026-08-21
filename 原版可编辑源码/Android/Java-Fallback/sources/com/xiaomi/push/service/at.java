package com.xiaomi.push.service;

public class at {
    private static final boolean a = false;

    static {
            java.lang.String r0 = "NCHelper"
            r1 = 3
            boolean r0 = android.util.Log.isLoggable(r0, r1)
            com.xiaomi.push.service.at.a = r0
            return
    }

    private static int a(android.app.NotificationChannel r3) {
            r0 = 0
            java.lang.String r1 = "getUserLockedFields"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L30
            java.lang.Object r1 = com.xiaomi.push.bk.b(r3, r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L30
            int r0 = r1.intValue()     // Catch: java.lang.Exception -> L30
            boolean r1 = com.xiaomi.push.service.at.a     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L47
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "isUserLockedChannel:"
            r1.append(r2)     // Catch: java.lang.Exception -> L30
            r1.append(r0)     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = " "
            r1.append(r2)     // Catch: java.lang.Exception -> L30
            r1.append(r3)     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L30
            a(r3)     // Catch: java.lang.Exception -> L30
            goto L47
        L30:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "is user locked error"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "NCHelper"
            com.xiaomi.channel.commonutils.logger.b.a(r1, r3)
        L47:
            return r0
    }

    private static android.app.NotificationChannel a(java.lang.String r3, android.app.NotificationChannel r4) {
            android.app.NotificationChannel r0 = new android.app.NotificationChannel
            java.lang.CharSequence r1 = r4.getName()
            int r2 = r4.getImportance()
            r0.<init>(r3, r1, r2)
            java.lang.String r3 = r4.getDescription()
            r0.setDescription(r3)
            boolean r3 = r4.shouldVibrate()
            r0.enableVibration(r3)
            boolean r3 = r4.shouldShowLights()
            r0.enableLights(r3)
            android.net.Uri r3 = r4.getSound()
            android.media.AudioAttributes r1 = r4.getAudioAttributes()
            r0.setSound(r3, r1)
            int r3 = r4.getLockscreenVisibility()
            r0.setLockscreenVisibility(r3)
            return r0
    }

    private static android.content.SharedPreferences a(android.content.Context r2) {
            java.lang.String r0 = "mipush_channel_copy_sp"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            return r2
    }

    public static java.lang.String a(com.xiaomi.push.service.ax r3, java.lang.String r4, java.lang.CharSequence r5, java.lang.String r6, int r7, int r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = r3.a(r4)
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto L5a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "createChannel: appChannelId:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = " serverChannelId:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " serverChannelName:"
            r1.append(r4)
            r1.append(r5)
            java.lang.String r2 = " serverChannelDesc:"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r2 = " serverChannelNotifyType:"
            r1.append(r2)
            r1.append(r7)
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = " serverChannelImportance:"
            r1.append(r4)
            r1.append(r8)
            java.lang.String r4 = " channelSoundStr:"
            r1.append(r4)
            r1.append(r9)
            java.lang.String r4 = " channelPermissions:"
            r1.append(r4)
            r1.append(r10)
            java.lang.String r4 = r1.toString()
            a(r4)
        L5a:
            android.app.NotificationChannel r4 = new android.app.NotificationChannel
            r4.<init>(r0, r5, r8)
            r4.setDescription(r6)
            r5 = r7 & 2
            r6 = 0
            r8 = 1
            if (r5 == 0) goto L6a
            r5 = r8
            goto L6b
        L6a:
            r5 = r6
        L6b:
            r4.enableVibration(r5)
            r5 = r7 & 4
            if (r5 == 0) goto L73
            r6 = r8
        L73:
            r4.enableLights(r6)
            r5 = r7 & 1
            if (r5 == 0) goto La5
            boolean r5 = android.text.TextUtils.isEmpty(r9)
            if (r5 != 0) goto La9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "android.resource://"
            r5.append(r6)
            java.lang.String r6 = r3.a()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            boolean r5 = r9.startsWith(r5)
            if (r5 == 0) goto La9
            android.net.Uri r5 = android.net.Uri.parse(r9)
            android.media.AudioAttributes r6 = android.app.Notification.AUDIO_ATTRIBUTES_DEFAULT
            r4.setSound(r5, r6)
            goto La9
        La5:
            r5 = 0
            r4.setSound(r5, r5)
        La9:
            boolean r5 = com.xiaomi.push.service.at.a
            if (r5 == 0) goto Lc1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "create channel:"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            a(r5)
        Lc1:
            a(r3, r4, r10)
            return r0
    }

    static void a(android.content.Context r4, com.xiaomi.push.service.ax r5, android.app.NotificationChannel r6, int r7, java.lang.String r8) {
            if (r7 <= 0) goto L81
            int r0 = com.xiaomi.push.h.a(r4)
            r1 = 2
            r2 = 0
            if (r0 < r1) goto L13
            java.lang.String r4 = r4.getPackageName()
            int r4 = com.xiaomi.push.service.e.a(r4, r8)
            goto L14
        L13:
            r4 = r2
        L14:
            java.lang.String r8 = r6.getId()
            android.app.NotificationChannel r8 = a(r8, r6)
            r0 = r7 & 32
            if (r0 == 0) goto L32
            android.net.Uri r0 = r6.getSound()
            if (r0 == 0) goto L2b
            r0 = 0
            r8.setSound(r0, r0)
            goto L32
        L2b:
            android.net.Uri r0 = android.provider.Settings.System.DEFAULT_NOTIFICATION_URI
            android.media.AudioAttributes r3 = android.app.Notification.AUDIO_ATTRIBUTES_DEFAULT
            r8.setSound(r0, r3)
        L32:
            r0 = r7 & 16
            r3 = 1
            if (r0 == 0) goto L44
            boolean r0 = r6.shouldVibrate()
            if (r0 == 0) goto L41
            r8.enableVibration(r2)
            goto L44
        L41:
            r8.enableVibration(r3)
        L44:
            r0 = r7 & 8
            if (r0 == 0) goto L55
            boolean r0 = r6.shouldShowLights()
            if (r0 == 0) goto L52
            r8.enableLights(r2)
            goto L55
        L52:
            r8.enableLights(r3)
        L55:
            r0 = r7 & 4
            if (r0 == 0) goto L64
            int r0 = r6.getImportance()
            int r0 = r0 - r3
            if (r0 > 0) goto L61
            r0 = r1
        L61:
            r8.setImportance(r0)
        L64:
            r7 = r7 & r1
            if (r7 == 0) goto L6f
            int r7 = r6.getLockscreenVisibility()
            int r7 = r7 - r3
            r8.setLockscreenVisibility(r7)
        L6f:
            r5.a(r8)
            r5.a(r6, r3)
            java.lang.String r5 = r5.a()
            java.lang.String r6 = r6.getId()
            com.xiaomi.push.service.e.a(r5, r6, r4, r2)
            goto L84
        L81:
            r5.a(r6)
        L84:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.xiaomi.push.m.a(r1)
            if (r0 == 0) goto L12
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L12
            c(r1, r2)
            com.xiaomi.push.service.e.a(r1, r2)
        L12:
            return
    }

    private static void a(android.content.Context r2, java.util.List<java.lang.String> r3) {
            boolean r0 = com.xiaomi.push.service.at.a
            if (r0 == 0) goto L18
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "deleteCopiedChannelRecord:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            a(r0)
        L18:
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L3d
            android.content.SharedPreferences r2 = a(r2)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.util.Iterator r3 = r3.iterator()
        L2a:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L3a
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            r2.remove(r0)
            goto L2a
        L3a:
            r2.apply()
        L3d:
            return
    }

    static void a(com.xiaomi.push.hw r3) {
            if (r3 == 0) goto L57
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            if (r0 == 0) goto L57
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r1 = "REMOVE_CHANNEL_MARK"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L57
            r0 = 0
            r3.a = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r2 = "channel_id"
            r0.remove(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r2 = "channel_importance"
            r0.remove(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r2 = "channel_name"
            r0.remove(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r2 = "channel_description"
            r0.remove(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r2 = "channel_perm"
            r0.remove(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "delete channel info by:"
            r0.append(r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r3.a
            java.lang.Object r2 = r2.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.util.Map<java.lang.String, java.lang.String> r3 = r3.a
            r3.remove(r1)
        L57:
            return
    }

    private static void a(com.xiaomi.push.service.ax r13, android.app.NotificationChannel r14, java.lang.String r15) {
            android.content.Context r0 = r13.a()
            java.lang.String r3 = r14.getId()
            java.lang.String r1 = r13.a()
            java.lang.String r1 = com.xiaomi.push.service.ax.a(r3, r1)
            boolean r2 = com.xiaomi.push.service.at.a
            if (r2 == 0) goto L30
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "appChannelId:"
            r2.append(r4)
            r2.append(r3)
            java.lang.String r4 = " oldChannelId:"
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            a(r2)
        L30:
            boolean r2 = com.xiaomi.push.m.a(r0)
            r4 = 3
            r5 = 4
            r6 = 1
            r7 = 0
            if (r2 == 0) goto L111
            boolean r2 = android.text.TextUtils.equals(r3, r1)
            if (r2 != 0) goto L111
            java.lang.String r2 = "notification"
            java.lang.Object r2 = r0.getSystemService(r2)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            android.app.NotificationChannel r8 = r2.getNotificationChannel(r1)
            android.app.NotificationChannel r9 = r13.a(r3)
            boolean r10 = com.xiaomi.push.service.at.a
            if (r10 == 0) goto L7c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "xmsfChannel:"
            r10.append(r11)
            r10.append(r8)
            java.lang.String r10 = r10.toString()
            a(r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "appChannel:"
            r10.append(r11)
            r10.append(r9)
            java.lang.String r10 = r10.toString()
            a(r10)
        L7c:
            if (r8 == 0) goto Lbf
            android.app.NotificationChannel r10 = a(r3, r8)
            boolean r11 = com.xiaomi.push.service.at.a
            if (r11 == 0) goto L9a
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "copyXmsf copyXmsfChannel:"
            r11.append(r12)
            r11.append(r10)
            java.lang.String r11 = r11.toString()
            a(r11)
        L9a:
            if (r9 == 0) goto Laa
            int r8 = a(r9)
            if (r8 != 0) goto La4
            r9 = r6
            goto La5
        La4:
            r9 = r7
        La5:
            r13.a(r10, r9)
            r9 = r4
            goto Lb7
        Laa:
            int r9 = a(r8)
            java.lang.String r8 = r8.getId()
            a(r0, r13, r10, r9, r8)
            r8 = r9
            r9 = r5
        Lb7:
            b(r0, r3)
            r2.deleteNotificationChannel(r1)
            goto L134
        Lbf:
            if (r9 == 0) goto Lf3
            boolean r0 = a(r0, r3)
            if (r0 != 0) goto L132
            boolean r0 = a(r14, r9)
            if (r0 == 0) goto L132
            boolean r0 = com.xiaomi.push.service.at.a
            if (r0 == 0) goto Le5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "appHack updateNotificationChannel:"
            r0.append(r1)
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            a(r0)
        Le5:
            int r8 = a(r9)
            if (r8 != 0) goto Led
            r0 = r6
            goto Lee
        Led:
            r0 = r7
        Lee:
            r13.a(r14, r0)
            r9 = 2
            goto L134
        Lf3:
            boolean r0 = com.xiaomi.push.service.at.a
            if (r0 == 0) goto L10b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "appHack createNotificationChannel:"
            r0.append(r1)
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            a(r0)
        L10b:
            r13.a(r14)
            r9 = r6
            r8 = r7
            goto L134
        L111:
            android.app.NotificationChannel r0 = r13.a(r3)
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto L12d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "elseLogic getNotificationChannel:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            a(r1)
        L12d:
            if (r0 != 0) goto L132
            r13.a(r14)
        L132:
            r8 = r7
            r9 = r8
        L134:
            if (r9 == r6) goto L13c
            if (r9 == r5) goto L13c
            if (r9 != r4) goto L13b
            goto L13c
        L13b:
            r6 = r7
        L13c:
            android.content.Context r1 = r13.a()
            java.lang.String r2 = r13.a()
            int r4 = r14.getImportance()
            r5 = r15
            r7 = r8
            com.xiaomi.push.service.e.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    private static void a(java.lang.String r1) {
            java.lang.String r0 = "NCHelper"
            com.xiaomi.channel.commonutils.logger.b.a(r0, r1)
            return
    }

    private static boolean a(android.app.NotificationChannel r5, android.app.NotificationChannel r6) {
            r0 = 0
            if (r5 == 0) goto Le5
            if (r6 != 0) goto L7
            goto Le5
        L7:
            java.lang.CharSequence r1 = r5.getName()
            java.lang.CharSequence r2 = r6.getName()
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            r2 = 1
            if (r1 != 0) goto L21
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto L1f
            java.lang.String r1 = "appHack channelConfigLowerCompare:getName"
            a(r1)
        L1f:
            r1 = r2
            goto L22
        L21:
            r1 = r0
        L22:
            java.lang.String r3 = r5.getDescription()
            java.lang.String r4 = r6.getDescription()
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 != 0) goto L3a
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto L39
            java.lang.String r1 = "appHack channelConfigLowerCompare:getDescription"
            a(r1)
        L39:
            r1 = r2
        L3a:
            int r3 = r5.getImportance()
            int r4 = r6.getImportance()
            if (r3 == r4) goto L7c
            int r1 = r5.getImportance()
            int r3 = r6.getImportance()
            int r1 = java.lang.Math.min(r1, r3)
            r5.setImportance(r1)
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto L7b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "appHack channelConfigLowerCompare:getImportance  "
            r1.append(r3)
            int r3 = r5.getImportance()
            r1.append(r3)
            java.lang.String r3 = " "
            r1.append(r3)
            int r3 = r6.getImportance()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            a(r1)
        L7b:
            r1 = r2
        L7c:
            boolean r3 = r5.shouldVibrate()
            boolean r4 = r6.shouldVibrate()
            if (r3 == r4) goto L93
            r5.enableVibration(r0)
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto L92
            java.lang.String r1 = "appHack channelConfigLowerCompare:enableVibration"
            a(r1)
        L92:
            r1 = r2
        L93:
            boolean r3 = r5.shouldShowLights()
            boolean r4 = r6.shouldShowLights()
            if (r3 == r4) goto Laa
            r5.enableLights(r0)
            boolean r1 = com.xiaomi.push.service.at.a
            if (r1 == 0) goto La9
            java.lang.String r1 = "appHack channelConfigLowerCompare:enableLights"
            a(r1)
        La9:
            r1 = r2
        Laa:
            android.net.Uri r3 = r5.getSound()
            if (r3 != 0) goto Lb2
            r3 = r0
            goto Lb3
        Lb2:
            r3 = r2
        Lb3:
            android.net.Uri r6 = r6.getSound()
            if (r6 != 0) goto Lba
            goto Lbb
        Lba:
            r0 = r2
        Lbb:
            if (r3 == r0) goto Lcb
            r6 = 0
            r5.setSound(r6, r6)
            boolean r5 = com.xiaomi.push.service.at.a
            if (r5 == 0) goto Lcc
            java.lang.String r5 = "appHack channelConfigLowerCompare:setSound"
            a(r5)
            goto Lcc
        Lcb:
            r2 = r1
        Lcc:
            boolean r5 = com.xiaomi.push.service.at.a
            if (r5 == 0) goto Le4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "appHack channelConfigLowerCompare:isDifferent:"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            a(r5)
        Le4:
            return r2
        Le5:
            return r0
    }

    private static boolean a(android.content.Context r3, java.lang.String r4) {
            boolean r0 = com.xiaomi.push.service.at.a
            r1 = 0
            if (r0 == 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "checkCopeidChannel:newFullChannelId:"
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "  "
            r0.append(r2)
            android.content.SharedPreferences r2 = a(r3)
            boolean r2 = r2.getBoolean(r4, r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            a(r0)
        L29:
            android.content.SharedPreferences r3 = a(r3)
            boolean r3 = r3.getBoolean(r4, r1)
            return r3
    }

    private static void b(android.content.Context r2, java.lang.String r3) {
            boolean r0 = com.xiaomi.push.service.at.a
            if (r0 == 0) goto L18
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "recordCopiedChannel:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            a(r0)
        L18:
            android.content.SharedPreferences r2 = a(r2)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r0 = 1
            android.content.SharedPreferences$Editor r2 = r2.putBoolean(r3, r0)
            r2.apply()
            return
    }

    private static void c(android.content.Context r5, java.lang.String r6) {
            com.xiaomi.push.service.ax r6 = com.xiaomi.push.service.ax.a(r5, r6)     // Catch: java.lang.Exception -> L4a
            android.content.SharedPreferences r0 = a(r5)     // Catch: java.lang.Exception -> L4a
            java.util.Map r0 = r0.getAll()     // Catch: java.lang.Exception -> L4a
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Exception -> L4a
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L4a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L4a
        L19:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> L4a
            if (r2 == 0) goto L47
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L4a
            boolean r3 = r6.a(r2)     // Catch: java.lang.Exception -> L4a
            if (r3 == 0) goto L19
            r1.add(r2)     // Catch: java.lang.Exception -> L4a
            boolean r3 = com.xiaomi.push.service.at.a     // Catch: java.lang.Exception -> L4a
            if (r3 == 0) goto L19
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4a
            r3.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r4 = "delete channel copy record:"
            r3.append(r4)     // Catch: java.lang.Exception -> L4a
            r3.append(r2)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L4a
            a(r2)     // Catch: java.lang.Exception -> L4a
            goto L19
        L47:
            a(r5, r1)     // Catch: java.lang.Exception -> L4a
        L4a:
            return
    }
}
