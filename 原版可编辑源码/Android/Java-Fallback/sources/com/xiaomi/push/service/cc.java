package com.xiaomi.push.service;

public class cc {
    private static int a(java.util.Map<java.lang.String, java.lang.String> r1) {
            java.lang.String r0 = "notification_top_period"
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            r0 = 0
            int r1 = com.xiaomi.push.w.a(r1, r0)
            int r1 = java.lang.Math.max(r0, r1)
            return r1
    }

    private static android.app.Notification a(android.app.Notification r4, int r5, java.lang.String r6, com.xiaomi.push.service.ax r7) {
            java.lang.String r0 = "message_id"
            r1 = 0
            if (r4 == 0) goto L15
            android.os.Bundle r5 = r4.extras
            java.lang.String r5 = r5.getString(r0)
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L12
            goto L13
        L12:
            r4 = r1
        L13:
            r1 = r4
            goto L42
        L15:
            java.util.List r4 = r7.b()
            if (r4 == 0) goto L42
            java.util.Iterator r4 = r4.iterator()
        L1f:
            boolean r7 = r4.hasNext()
            if (r7 == 0) goto L42
            java.lang.Object r7 = r4.next()
            android.service.notification.StatusBarNotification r7 = (android.service.notification.StatusBarNotification) r7
            android.app.Notification r2 = r7.getNotification()
            android.os.Bundle r3 = r2.extras
            java.lang.String r3 = r3.getString(r0)
            int r7 = r7.getId()
            if (r5 != r7) goto L1f
            boolean r7 = r6.equals(r3)
            if (r7 == 0) goto L1f
            r1 = r2
        L42:
            return r1
    }

    private static com.xiaomi.push.al.a a(android.content.Context r7, java.lang.String r8, int r9, java.lang.String r10, android.app.Notification r11) {
            com.xiaomi.push.service.cd r6 = new com.xiaomi.push.service.cd
            r0 = r6
            r1 = r9
            r2 = r10
            r3 = r7
            r4 = r8
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    static java.lang.String a(int r0, java.lang.String r1) {
            java.lang.String r0 = b(r0, r1)
            return r0
    }

    static void a(android.content.Context r3, java.lang.String r4, int r5, java.lang.String r6, android.app.Notification r7) {
            boolean r0 = com.xiaomi.push.m.a(r3)
            if (r0 == 0) goto L16
            if (r7 == 0) goto L16
            android.os.Bundle r0 = r7.extras
            r1 = 0
            java.lang.String r2 = "mipush_n_top_flag"
            boolean r0 = r0.getBoolean(r2, r1)
            if (r0 == 0) goto L16
            c(r3, r4, r5, r6, r7)
        L16:
            return
    }

    static void a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.String> r3, com.xiaomi.push.eq r4, long r5) {
            if (r3 == 0) goto L5d
            if (r4 != 0) goto L5
            goto L5d
        L5:
            boolean r2 = com.xiaomi.push.m.a(r2)
            if (r2 == 0) goto L5d
            boolean r2 = a(r3)
            if (r2 == 0) goto L5d
            int r2 = a(r3)
            int r3 = b(r3)
            if (r2 <= 0) goto L41
            if (r3 > r2) goto L41
            r0 = 2
            r4.setPriority(r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "mipush_org_when"
            r0.putLong(r1, r5)
            r5 = 1
            java.lang.String r6 = "mipush_n_top_flag"
            r0.putBoolean(r6, r5)
            if (r3 <= 0) goto L38
            java.lang.String r5 = "mipush_n_top_fre"
            r0.putInt(r5, r3)
        L38:
            java.lang.String r3 = "mipush_n_top_prd"
            r0.putInt(r3, r2)
            r4.a(r0)
            goto L5d
        L41:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "set top notification failed - period:"
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = " frequency:"
            r4.append(r2)
            r4.append(r3)
            java.lang.String r2 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r2)
        L5d:
            return
    }

    private static boolean a(java.util.Map<java.lang.String, java.lang.String> r2) {
            java.lang.String r0 = "notification_top_repeat"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L27
            boolean r2 = java.lang.Boolean.parseBoolean(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "top notification' repeat is "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            goto L28
        L27:
            r2 = 0
        L28:
            return r2
    }

    private static int b(java.util.Map<java.lang.String, java.lang.String> r1) {
            java.lang.String r0 = "notification_top_frequency"
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            r0 = 0
            int r1 = com.xiaomi.push.w.a(r1, r0)
            int r1 = java.lang.Math.max(r0, r1)
            return r1
    }

    private static java.lang.String b(int r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "n_top_update_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    static void b(android.content.Context r0, java.lang.String r1, int r2, java.lang.String r3, android.app.Notification r4) {
            c(r0, r1, r2, r3, r4)
            return
    }

    private static void c(android.content.Context r17, java.lang.String r18, int r19, java.lang.String r20, android.app.Notification r21) {
            r0 = r17
            r1 = r19
            r2 = r20
            r3 = r21
            if (r0 == 0) goto L10d
            boolean r4 = android.text.TextUtils.isEmpty(r18)
            if (r4 != 0) goto L10d
            boolean r4 = android.text.TextUtils.isEmpty(r20)
            if (r4 != 0) goto L10d
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 26
            if (r4 >= r5) goto L1e
            goto L10d
        L1e:
            com.xiaomi.push.service.ax r4 = com.xiaomi.push.service.ax.a(r17, r18)
            android.app.Notification r5 = a(r3, r1, r2, r4)
            if (r5 == 0) goto L10d
            r6 = 1
            r7 = 0
            if (r3 == 0) goto L2e
            r3 = r6
            goto L2f
        L2e:
            r3 = r7
        L2f:
            int r8 = r5.getGroupAlertBehavior()
            if (r8 == r6) goto L3e
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            java.lang.String r8 = "mGroupAlertBehavior"
            com.xiaomi.push.bk.a(r5, r8, r6)
        L3e:
            long r8 = java.lang.System.currentTimeMillis()
            android.os.Bundle r6 = r5.extras
            r10 = 0
            java.lang.String r12 = "mipush_org_when"
            long r10 = r6.getLong(r12, r10)
            android.os.Bundle r6 = r5.extras
            java.lang.String r13 = "mipush_n_top_fre"
            int r6 = r6.getInt(r13, r7)
            android.os.Bundle r14 = r5.extras
            java.lang.String r15 = "mipush_n_top_prd"
            int r14 = r14.getInt(r15, r7)
            if (r14 <= 0) goto L10d
            if (r14 < r6) goto L10d
            int r7 = r14 * 1000
            r16 = r14
            r21 = r15
            long r14 = (long) r7
            long r14 = r14 + r10
            int r7 = (r10 > r8 ? 1 : (r10 == r8 ? 0 : -1))
            if (r7 >= 0) goto L80
            int r7 = (r8 > r14 ? 1 : (r8 == r14 ? 0 : -1))
            if (r7 >= 0) goto L80
            if (r6 <= 0) goto L7d
            long r14 = r14 - r8
            r10 = 1000(0x3e8, double:4.94E-321)
            long r14 = r14 / r10
            long r6 = (long) r6
            long r6 = java.lang.Math.min(r14, r6)
            int r14 = (int) r6
            goto L81
        L7d:
            r14 = r16
            goto L81
        L80:
            r14 = 0
        L81:
            if (r3 != 0) goto Lde
            if (r14 <= 0) goto L9f
            r5.when = r8
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "update top notification: "
            r3.append(r6)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            r4.a(r1, r5)
            goto Lde
        L9f:
            android.app.Notification$Builder r3 = android.app.Notification.Builder.recoverBuilder(r0, r5)
            r5 = 0
            r3.setPriority(r5)
            r3.setWhen(r8)
            android.os.Bundle r5 = r3.getExtras()
            if (r5 == 0) goto Lc3
            java.lang.String r6 = "mipush_n_top_flag"
            r5.remove(r6)
            r5.remove(r12)
            r5.remove(r13)
            r6 = r21
            r5.remove(r6)
            r3.setExtras(r5)
        Lc3:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "update top notification to common: "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            android.app.Notification r3 = r3.build()
            r4.a(r1, r3)
        Lde:
            if (r14 <= 0) goto L10d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "schedule top notification next update delay: "
            r3.append(r4)
            r3.append(r14)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            java.lang.String r3 = b(r19, r20)
            com.xiaomi.push.al r4 = com.xiaomi.push.al.a(r17)
            r4.a(r3)
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r17)
            r4 = 0
            r5 = r18
            com.xiaomi.push.al$a r0 = a(r0, r5, r1, r2, r4)
            r3.b(r0, r14)
        L10d:
            return
    }
}
