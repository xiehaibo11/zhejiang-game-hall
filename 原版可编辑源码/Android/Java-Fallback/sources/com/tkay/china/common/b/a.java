package com.tkay.china.common.b;

public class a implements com.tkay.china.common.b.b {
    public static final java.lang.String a = null;
    public static final java.lang.String b = "tkay_action_notification_click";
    public static final java.lang.String c = "tkay_action_notification_cannel";
    public static final java.lang.String d = "tkay_broadcast_receiver_extra_url";
    public static final java.lang.String e = "tkay_broadcast_receiver_extra_unique_id";
    public static final java.lang.String f = "tkay_broadcast_receiver_extra_request_status";
    public static final java.lang.String g = "tkay_broadcast_receiver_extra_notification_id";
    private static volatile com.tkay.china.common.b.a j;
    java.util.Map<java.lang.String, com.tkay.china.common.b.c> h;
    private android.app.NotificationManager i;
    private android.content.Context k;
    private int l;

    static {
            java.lang.Class<com.tkay.china.common.b.a> r0 = com.tkay.china.common.b.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.china.common.b.a.a = r0
            return
    }

    private a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.k = r1
            android.app.NotificationManager r1 = r0.b(r1)
            r0.i = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.h = r1
            return
    }

    private static int a(long r0, long r2) {
            float r0 = (float) r0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            float r1 = (float) r2
            float r0 = r0 / r1
            r1 = 1120403456(0x42c80000, float:100.0)
            float r0 = r0 * r1
            int r0 = (int) r0
            return r0
    }

    public static com.tkay.china.common.b.a a(android.content.Context r2) {
            com.tkay.china.common.b.a r0 = com.tkay.china.common.b.a.j
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.china.common.b.a> r0 = com.tkay.china.common.b.a.class
            monitor-enter(r0)
            com.tkay.china.common.b.a r1 = com.tkay.china.common.b.a.j     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.china.common.b.a r1 = new com.tkay.china.common.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.china.common.b.a.j = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.china.common.b.a r2 = com.tkay.china.common.b.a.j
            return r2
    }

    private void a(com.tkay.china.common.a.e r9, android.support.v4.app.NotificationCompat.Builder r10, com.tkay.china.common.b.c r11) {
            r8 = this;
            com.tkay.china.common.a.e$a r0 = r11.d
            if (r0 == 0) goto Ld
            com.tkay.china.common.a.e$a r0 = r11.d
            com.tkay.china.common.a.e$a r1 = r9.a()
            if (r0 != r1) goto Ld
            return
        Ld:
            com.tkay.china.common.a.e$a r0 = r9.a()
            r11.d = r0
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "tkay_action_notification_click"
            r0.<init>(r1)
            java.lang.String r1 = r9.n
            java.lang.String r2 = "tkay_broadcast_receiver_extra_unique_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r9.b
            java.lang.String r3 = "tkay_broadcast_receiver_extra_url"
            r0.putExtra(r3, r1)
            com.tkay.china.common.a.e$a r1 = r9.a()
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = "tkay_broadcast_receiver_extra_request_status"
            r0.putExtra(r4, r1)
            int r1 = r11.a
            java.lang.String r5 = "tkay_broadcast_receiver_extra_notification_id"
            r0.putExtra(r5, r1)
            android.content.Context r1 = r8.k
            java.lang.Class<com.tkay.china.common.NotificationBroadcaseReceiver> r6 = com.tkay.china.common.NotificationBroadcaseReceiver.class
            r0.setClass(r1, r6)
            android.content.Context r1 = r8.k
            int r6 = r11.a
            r7 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r0 = android.app.PendingIntent.getBroadcast(r1, r6, r0, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r6 = "tkay_action_notification_cannel"
            r1.<init>(r6)
            java.lang.String r6 = r9.n
            r1.putExtra(r2, r6)
            java.lang.String r2 = r9.b
            r1.putExtra(r3, r2)
            com.tkay.china.common.a.e$a r9 = r9.a()
            java.lang.String r9 = r9.toString()
            r1.putExtra(r4, r9)
            int r9 = r11.a
            r1.putExtra(r5, r9)
            android.content.Context r9 = r8.k
            java.lang.Class<com.tkay.china.common.NotificationBroadcaseReceiver> r2 = com.tkay.china.common.NotificationBroadcaseReceiver.class
            r1.setClass(r9, r2)
            android.content.Context r9 = r8.k
            int r11 = r11.a
            android.app.PendingIntent r9 = android.app.PendingIntent.getBroadcast(r9, r11, r1, r7)
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setContentIntent(r0)
            r10.setDeleteIntent(r9)
            return
    }

    private void d(com.tkay.china.common.a.e r8) {
            r7 = this;
            r2 = 0
            r4 = 100
            r6 = 1
            r0 = r7
            r1 = r8
            r0.a(r1, r2, r4, r6)
            return
    }

    private void e(com.tkay.china.common.a.e r8) {
            r7 = this;
            r2 = 0
            r4 = 100
            r6 = 1
            r0 = r7
            r1 = r8
            r0.a(r1, r2, r4, r6)
            return
    }

    private com.tkay.china.common.b.c f(com.tkay.china.common.a.e r6) {
            r5 = this;
            java.lang.String r0 = r6.n
            java.util.Map<java.lang.String, com.tkay.china.common.b.c> r1 = r5.h
            java.lang.Object r1 = r1.get(r0)
            com.tkay.china.common.b.c r1 = (com.tkay.china.common.b.c) r1
            if (r1 == 0) goto Ld
            return r1
        Ld:
            android.support.v4.app.NotificationCompat$Builder r1 = new android.support.v4.app.NotificationCompat$Builder
            android.content.Context r2 = r5.k
            r1.<init>(r2, r0)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 24
            r4 = 0
            if (r2 < r3) goto L2f
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            if (r2 < r3) goto L2f
            android.app.NotificationChannel r2 = new android.app.NotificationChannel
            r3 = 3
            r2.<init>(r0, r0, r3)
            r2.setSound(r4, r4)
            android.app.NotificationManager r3 = r5.i
            r3.createNotificationChannel(r2)
        L2f:
            int r2 = r5.l
            r3 = 1
            int r2 = r2 + r3
            r5.l = r2
            android.support.v4.app.NotificationCompat$Builder r2 = r1.setOngoing(r3)
            android.support.v4.app.NotificationCompat$Builder r2 = r2.setSound(r4)
            r4 = 0
            android.support.v4.app.NotificationCompat$Builder r2 = r2.setPriority(r4)
            android.support.v4.app.NotificationCompat$Builder r2 = r2.setOnlyAlertOnce(r3)
            r2.setAutoCancel(r4)
            android.content.Context r2 = r5.k     // Catch: java.lang.Throwable -> L61
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L61
            android.content.Context r3 = r5.k     // Catch: java.lang.Throwable -> L61
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L61
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo(r3, r4)     // Catch: java.lang.Throwable -> L61
            int r2 = r2.icon     // Catch: java.lang.Throwable -> L61
            r1.setSmallIcon(r2)     // Catch: java.lang.Throwable -> L61
            goto L72
        L61:
            r2 = move-exception
            r2.printStackTrace()
            android.content.Context r2 = r5.k
            java.lang.String r3 = "core_icon_close"
            java.lang.String r4 = "drawable"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r1.setSmallIcon(r2)
        L72:
            java.lang.String r2 = r6.c
            android.support.v4.app.NotificationCompat$Builder r2 = r1.setContentTitle(r2)
            android.graphics.Bitmap r6 = r6.d
            r2.setLargeIcon(r6)
            com.tkay.china.common.b.c r6 = new com.tkay.china.common.b.c
            r6.<init>()
            int r2 = r5.l
            r6.a = r2
            r6.b = r1
            r1 = -1
            r6.c = r1
            java.util.Map<java.lang.String, com.tkay.china.common.b.c> r1 = r5.h
            r1.put(r0, r6)
            return r6
    }

    public final void a() {
            r1 = this;
            android.app.NotificationManager r0 = r1.i
            if (r0 == 0) goto L7
            r0.cancelAll()
        L7:
            return
    }

    public final void a(int r2) {
            r1 = this;
            if (r2 >= 0) goto L3
            return
        L3:
            android.app.NotificationManager r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.cancel(r2)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public final void a(com.tkay.china.common.a.e r8) {
            r7 = this;
            r2 = 100
            r4 = 100
            r6 = 1
            r0 = r7
            r1 = r8
            r0.a(r1, r2, r4, r6)
            return
    }

    public final void a(com.tkay.china.common.a.e r8, long r9, long r11) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r11
            r0.a(r1, r2, r4, r6)
            return
    }

    @Override
    public final synchronized void a(com.tkay.china.common.a.e r15, long r16, long r18, boolean r20) {
            r14 = this;
            r1 = r14
            r0 = r15
            monitor-enter(r14)
            if (r0 == 0) goto L17f
            java.lang.String r2 = r0.b     // Catch: java.lang.Throwable -> L17c
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L17c
            if (r2 == 0) goto Lf
            goto L17f
        Lf:
            android.app.NotificationManager r2 = r1.i     // Catch: java.lang.Throwable -> L176
            if (r2 != 0) goto L1b
            android.content.Context r2 = r1.k     // Catch: java.lang.Throwable -> L176
            android.app.NotificationManager r2 = r14.b(r2)     // Catch: java.lang.Throwable -> L176
            r1.i = r2     // Catch: java.lang.Throwable -> L176
        L1b:
            com.tkay.china.common.b.c r2 = r14.f(r15)     // Catch: java.lang.Throwable -> L176
            android.support.v4.app.NotificationCompat$Builder r3 = r2.b     // Catch: java.lang.Throwable -> L176
            com.tkay.china.common.a.e$a r4 = r2.d     // Catch: java.lang.Throwable -> L176
            if (r4 == 0) goto L2d
            com.tkay.china.common.a.e$a r4 = r2.d     // Catch: java.lang.Throwable -> L176
            com.tkay.china.common.a.e$a r5 = r15.a()     // Catch: java.lang.Throwable -> L176
            if (r4 == r5) goto Lac
        L2d:
            com.tkay.china.common.a.e$a r4 = r15.a()     // Catch: java.lang.Throwable -> L176
            r2.d = r4     // Catch: java.lang.Throwable -> L176
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "tkay_action_notification_click"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "tkay_broadcast_receiver_extra_unique_id"
            java.lang.String r6 = r0.n     // Catch: java.lang.Throwable -> L176
            r4.putExtra(r5, r6)     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "tkay_broadcast_receiver_extra_url"
            java.lang.String r6 = r0.b     // Catch: java.lang.Throwable -> L176
            r4.putExtra(r5, r6)     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "tkay_broadcast_receiver_extra_request_status"
            com.tkay.china.common.a.e$a r6 = r15.a()     // Catch: java.lang.Throwable -> L176
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L176
            r4.putExtra(r5, r6)     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "tkay_broadcast_receiver_extra_notification_id"
            int r6 = r2.a     // Catch: java.lang.Throwable -> L176
            r4.putExtra(r5, r6)     // Catch: java.lang.Throwable -> L176
            android.content.Context r5 = r1.k     // Catch: java.lang.Throwable -> L176
            java.lang.Class<com.tkay.china.common.NotificationBroadcaseReceiver> r6 = com.tkay.china.common.NotificationBroadcaseReceiver.class
            r4.setClass(r5, r6)     // Catch: java.lang.Throwable -> L176
            android.content.Context r5 = r1.k     // Catch: java.lang.Throwable -> L176
            int r6 = r2.a     // Catch: java.lang.Throwable -> L176
            r7 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r4 = android.app.PendingIntent.getBroadcast(r5, r6, r4, r7)     // Catch: java.lang.Throwable -> L176
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> L176
            java.lang.String r6 = "tkay_action_notification_cannel"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L176
            java.lang.String r6 = "tkay_broadcast_receiver_extra_unique_id"
            java.lang.String r8 = r0.n     // Catch: java.lang.Throwable -> L176
            r5.putExtra(r6, r8)     // Catch: java.lang.Throwable -> L176
            java.lang.String r6 = "tkay_broadcast_receiver_extra_url"
            java.lang.String r8 = r0.b     // Catch: java.lang.Throwable -> L176
            r5.putExtra(r6, r8)     // Catch: java.lang.Throwable -> L176
            java.lang.String r6 = "tkay_broadcast_receiver_extra_request_status"
            com.tkay.china.common.a.e$a r8 = r15.a()     // Catch: java.lang.Throwable -> L176
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L176
            r5.putExtra(r6, r8)     // Catch: java.lang.Throwable -> L176
            java.lang.String r6 = "tkay_broadcast_receiver_extra_notification_id"
            int r8 = r2.a     // Catch: java.lang.Throwable -> L176
            r5.putExtra(r6, r8)     // Catch: java.lang.Throwable -> L176
            android.content.Context r6 = r1.k     // Catch: java.lang.Throwable -> L176
            java.lang.Class<com.tkay.china.common.NotificationBroadcaseReceiver> r8 = com.tkay.china.common.NotificationBroadcaseReceiver.class
            r5.setClass(r6, r8)     // Catch: java.lang.Throwable -> L176
            android.content.Context r6 = r1.k     // Catch: java.lang.Throwable -> L176
            int r8 = r2.a     // Catch: java.lang.Throwable -> L176
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r6, r8, r5, r7)     // Catch: java.lang.Throwable -> L176
            android.support.v4.app.NotificationCompat$Builder r4 = r3.setContentIntent(r4)     // Catch: java.lang.Throwable -> L176
            r4.setDeleteIntent(r5)     // Catch: java.lang.Throwable -> L176
        Lac:
            int r4 = r2.c     // Catch: java.lang.Throwable -> L176
            int r5 = r0.p     // Catch: java.lang.Throwable -> L176
            r6 = 2
            r7 = 1
            r8 = 0
            if (r5 != r6) goto Lb7
            r5 = r7
            goto Lb8
        Lb7:
            r5 = r8
        Lb8:
            java.lang.String r9 = "default"
            boolean r10 = r15.f()     // Catch: java.lang.Throwable -> L176
            r11 = 100
            if (r10 == 0) goto Lc8
            java.lang.String r9 = "点击打开"
        Lc4:
            r5 = r7
            r10 = r8
            goto L13e
        Lc8:
            boolean r10 = r15.g()     // Catch: java.lang.Throwable -> L176
            if (r10 == 0) goto Ld3
            java.lang.String r9 = "点击安装"
            r10 = r11
            goto L13e
        Ld3:
            boolean r10 = r15.h()     // Catch: java.lang.Throwable -> L176
            if (r10 == 0) goto Ldc
            java.lang.String r9 = "下载失败，可点击重试"
            goto Lc4
        Ldc:
            r12 = r16
            float r10 = (float) r12
            r12 = 1065353216(0x3f800000, float:1.0)
            float r10 = r10 * r12
            r12 = r18
            float r12 = (float) r12
            float r10 = r10 / r12
            r12 = 1120403456(0x42c80000, float:100.0)
            float r10 = r10 * r12
            int r10 = (int) r10
            if (r20 != 0) goto Lf0
            if (r4 != r10) goto Lf0
            monitor-exit(r14)
            return
        Lf0:
            r2.c = r10     // Catch: java.lang.Throwable -> L176
            boolean r4 = r15.b()     // Catch: java.lang.Throwable -> L176
            if (r4 == 0) goto L103
            int r4 = r0.q     // Catch: java.lang.Throwable -> L176
            if (r4 != r6) goto Lff
            java.lang.String r9 = "等待下载中"
            goto L101
        Lff:
            java.lang.String r9 = "等待下载中（点击可暂停）"
        L101:
            r5 = r8
            goto L13e
        L103:
            boolean r4 = r15.c()     // Catch: java.lang.Throwable -> L176
            if (r4 == 0) goto L10c
            java.lang.String r9 = "点击继续下载"
            goto L13e
        L10c:
            boolean r4 = r15.d()     // Catch: java.lang.Throwable -> L176
            if (r4 == 0) goto L13e
            int r4 = r0.q     // Catch: java.lang.Throwable -> L176
            if (r4 != r6) goto L12a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "（下载中："
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L176
            r4.append(r10)     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "%)"
            r4.append(r5)     // Catch: java.lang.Throwable -> L176
            java.lang.String r9 = r4.toString()     // Catch: java.lang.Throwable -> L176
            goto L101
        L12a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "点击暂停下载（下载中："
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L176
            r4.append(r10)     // Catch: java.lang.Throwable -> L176
            java.lang.String r5 = "%)"
            r4.append(r5)     // Catch: java.lang.Throwable -> L176
            java.lang.String r9 = r4.toString()     // Catch: java.lang.Throwable -> L176
            goto L101
        L13e:
            boolean r0 = r15.d()     // Catch: java.lang.Throwable -> L176
            if (r0 == 0) goto L148
            android.support.v4.app.NotificationCompat$Builder r3 = r3.setProgress(r11, r10, r8)     // Catch: java.lang.Throwable -> L176
        L148:
            android.support.v4.app.NotificationCompat$Builder r0 = r3.setContentText(r9)     // Catch: java.lang.Throwable -> L176
            android.support.v4.app.NotificationCompat$BigTextStyle r4 = new android.support.v4.app.NotificationCompat$BigTextStyle     // Catch: java.lang.Throwable -> L176
            r4.<init>()     // Catch: java.lang.Throwable -> L176
            android.support.v4.app.NotificationCompat$BigTextStyle r4 = r4.bigText(r9)     // Catch: java.lang.Throwable -> L176
            r0.setStyle(r4)     // Catch: java.lang.Throwable -> L176
            if (r5 == 0) goto L162
            android.support.v4.app.NotificationCompat$Builder r0 = r3.setOngoing(r8)     // Catch: java.lang.Throwable -> L176
            r0.setAutoCancel(r7)     // Catch: java.lang.Throwable -> L176
            goto L169
        L162:
            android.support.v4.app.NotificationCompat$Builder r0 = r3.setOngoing(r7)     // Catch: java.lang.Throwable -> L176
            r0.setAutoCancel(r8)     // Catch: java.lang.Throwable -> L176
        L169:
            android.app.NotificationManager r0 = r1.i     // Catch: java.lang.Throwable -> L176
            int r2 = r2.a     // Catch: java.lang.Throwable -> L176
            android.app.Notification r3 = r3.build()     // Catch: java.lang.Throwable -> L176
            r0.notify(r2, r3)     // Catch: java.lang.Throwable -> L176
            monitor-exit(r14)
            return
        L176:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L17c
            monitor-exit(r14)
            return
        L17c:
            r0 = move-exception
            monitor-exit(r14)
            throw r0
        L17f:
            monitor-exit(r14)
            return
    }

    @Override
    public final android.app.NotificationManager b(android.content.Context r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = "notification"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            return r2
    }

    @Override
    public final java.lang.String b(com.tkay.china.common.a.e r1) {
            r0 = this;
            java.lang.String r1 = r1.n
            return r1
    }

    public final void c(com.tkay.china.common.a.e r3) {
            r2 = this;
            if (r3 == 0) goto L21
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L21
            android.app.NotificationManager r0 = r2.i
            if (r0 != 0) goto Lf
            goto L21
        Lf:
            com.tkay.china.common.b.c r0 = r2.f(r3)
            android.app.NotificationManager r1 = r2.i
            int r0 = r0.a
            r1.cancel(r0)
            java.util.Map<java.lang.String, com.tkay.china.common.b.c> r0 = r2.h
            java.lang.String r3 = r3.n
            r0.remove(r3)
        L21:
            return
    }
}
