package com.xiaomi.push.service;

public class ax {
    private static android.content.Context a;
    private static java.lang.Object a;
    private static java.util.WeakHashMap<java.lang.Integer, com.xiaomi.push.service.ax> a;
    private static boolean a;
    private java.lang.String a;
    private java.lang.String b;

    static {
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            com.xiaomi.push.service.ax.a = r0
            return
    }

    private ax(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private static int a(java.lang.String r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L12
            android.content.Context r0 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Exception -> L12
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L12
            r1 = 0
            int r2 = r0.getPackageUid(r2, r1)     // Catch: java.lang.Exception -> L12
            return r2
        L12:
            r2 = -1
            return r2
    }

    private static android.app.NotificationManager a() {
            android.content.Context r0 = com.xiaomi.push.service.ax.a
            java.lang.String r1 = "notification"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            return r0
    }

    public static com.xiaomi.push.service.ax a(android.content.Context r2, java.lang.String r3) {
            a(r2)
            int r2 = r3.hashCode()
            java.util.WeakHashMap<java.lang.Integer, com.xiaomi.push.service.ax> r0 = com.xiaomi.push.service.ax.a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            java.lang.Object r0 = r0.get(r1)
            com.xiaomi.push.service.ax r0 = (com.xiaomi.push.service.ax) r0
            if (r0 != 0) goto L23
            com.xiaomi.push.service.ax r0 = new com.xiaomi.push.service.ax
            r0.<init>(r3)
            java.util.WeakHashMap<java.lang.Integer, com.xiaomi.push.service.ax> r3 = com.xiaomi.push.service.ax.a
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.put(r2, r0)
        L23:
            return r0
    }

    private static <T> T a(java.lang.Object r4) {
            if (r4 == 0) goto L16
            java.lang.Class r0 = r4.getClass()     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "getList"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L16
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L16
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L16
            java.lang.Object r4 = r0.invoke(r4, r1)     // Catch: java.lang.Exception -> L16
            return r4
        L16:
            r4 = 0
            return r4
    }

    private static java.lang.Object a(java.util.List r5) {
            java.lang.String r0 = "android.content.pm.ParceledListSlice"
            java.lang.Class r0 = java.lang.Class.forName(r0)
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]
            java.lang.Class<java.util.List> r3 = java.util.List.class
            r4 = 0
            r2[r4] = r3
            java.lang.reflect.Constructor r0 = r0.getConstructor(r2)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r4] = r5
            java.lang.Object r5 = r0.newInstance(r1)
            return r5
    }

    public static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1e
            java.lang.String r0 = ""
            java.lang.String r1 = "mipush|%s|%s"
            java.lang.String r1 = a(r1, r4, r0)
            boolean r2 = r3.startsWith(r1)
            if (r2 == 0) goto L1e
            java.lang.String r3 = r3.replace(r1, r0)
            java.lang.String r0 = "mipush_%s_%s"
            java.lang.String r3 = a(r0, r4, r3)
        L1e:
            return r3
    }

    private static java.lang.String a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
    }

    private static void a(android.content.Context r4) {
            android.content.Context r0 = com.xiaomi.push.service.ax.a
            if (r0 != 0) goto L48
            android.content.Context r4 = r4.getApplicationContext()
            com.xiaomi.push.service.ax.a = r4
            android.app.NotificationManager r4 = a()
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "xmsf_fake_condition_provider_path"
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "isSystemConditionProviderEnabled"
            java.lang.Object r0 = com.xiaomi.push.bk.a(r4, r1, r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "fwk is support.init:"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            a(r1)
            if (r0 == 0) goto L39
            boolean r0 = r0.booleanValue()
            goto L3a
        L39:
            r0 = r2
        L3a:
            com.xiaomi.push.service.ax.a = r0
            if (r0 == 0) goto L48
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r1 = "getService"
            java.lang.Object r4 = com.xiaomi.push.bk.a(r4, r1, r0)
            com.xiaomi.push.service.ax.a = r4
        L48:
            return
    }

    static void a(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NMHelper:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return
    }

    private static boolean a() {
            boolean r0 = com.xiaomi.push.m.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.content.Context r0 = com.xiaomi.push.service.ax.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.aZ
            int r2 = r2.a()
            r3 = 1
            boolean r0 = r0.a(r2, r3)
            if (r0 != 0) goto L1c
            return r1
        L1c:
            boolean r0 = com.xiaomi.push.service.ax.a
            return r0
    }

    public static boolean a(android.content.Context r0) {
            a(r0)
            boolean r0 = a()
            return r0
    }

    private android.service.notification.StatusBarNotification[] a() {
            r6 = this;
            android.content.Context r0 = r6.a()
            boolean r0 = com.xiaomi.push.m.a(r0)
            r1 = 0
            if (r0 == 0) goto L40
            android.content.Context r0 = r6.a()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> L2b
            java.lang.Object r2 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "getActiveNotifications"
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L2b
            r5 = 0
            r4[r5] = r0     // Catch: java.lang.Throwable -> L2b
            java.lang.Object r0 = com.xiaomi.push.bk.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L2b
            boolean r2 = r0 instanceof android.service.notification.StatusBarNotification[]     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L40
            android.service.notification.StatusBarNotification[] r0 = (android.service.notification.StatusBarNotification[]) r0     // Catch: java.lang.Throwable -> L2b
            android.service.notification.StatusBarNotification[] r0 = (android.service.notification.StatusBarNotification[]) r0     // Catch: java.lang.Throwable -> L2b
            r1 = r0
            goto L40
        L2b:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getAllNotifications error "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            a(r0)
        L40:
            return r1
    }

    private java.lang.String b(java.lang.String r3) {
            r2 = this;
            boolean r0 = a()
            if (r0 == 0) goto L9
            java.lang.String r0 = "mipush|%s|%s"
            goto Lb
        L9:
            java.lang.String r0 = "mipush_%s_%s"
        Lb:
            java.lang.String r1 = r2.a
            java.lang.String r3 = a(r0, r1, r3)
            return r3
    }

    public android.app.NotificationChannel a(java.lang.String r5) {
            r4 = this;
            r0 = 0
            boolean r1 = a()     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L29
            java.util.List r1 = r4.a()     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L48
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L33
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L33
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L33
            android.app.NotificationChannel r2 = (android.app.NotificationChannel) r2     // Catch: java.lang.Exception -> L33
            java.lang.String r3 = r2.getId()     // Catch: java.lang.Exception -> L33
            boolean r3 = r5.equals(r3)     // Catch: java.lang.Exception -> L33
            if (r3 == 0) goto L11
            r0 = r2
            goto L48
        L29:
            android.app.NotificationManager r1 = a()     // Catch: java.lang.Exception -> L33
            android.app.NotificationChannel r5 = r1.getNotificationChannel(r5)     // Catch: java.lang.Exception -> L33
            r0 = r5
            goto L48
        L33:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getNotificationChannel error"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            a(r5)
        L48:
            return r0
    }

    public android.content.Context a() {
            r1 = this;
            android.content.Context r0 = com.xiaomi.push.service.ax.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            java.lang.String r2 = r1.b()
            goto L19
        Lb:
            android.content.Context r0 = r1.a()
            boolean r0 = com.xiaomi.push.m.a(r0)
            if (r0 == 0) goto L19
            java.lang.String r2 = r1.b(r2)
        L19:
            return r2
    }

    java.util.List<android.app.NotificationChannel> a() {
            r9 = this;
            java.lang.String r0 = r9.a
            r1 = 0
            boolean r2 = a()     // Catch: java.lang.Exception -> L7a
            if (r2 == 0) goto L3d
            int r2 = a(r0)     // Catch: java.lang.Exception -> L7a
            r3 = -1
            if (r2 == r3) goto L3b
            java.lang.Object r3 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Exception -> L7a
            java.lang.String r4 = "getNotificationChannelsForPackage"
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L7a
            r6 = 0
            r5[r6] = r0     // Catch: java.lang.Exception -> L7a
            r7 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L7a
            r5[r7] = r2     // Catch: java.lang.Exception -> L7a
            r2 = 2
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Exception -> L7a
            r5[r2] = r6     // Catch: java.lang.Exception -> L7a
            java.lang.Object r2 = com.xiaomi.push.bk.a(r3, r4, r5)     // Catch: java.lang.Exception -> L7a
            java.lang.Object r2 = a(r2)     // Catch: java.lang.Exception -> L7a
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = "mipush|%s|%s"
            r8 = r2
            r2 = r1
            r1 = r8
            goto L47
        L38:
            r0 = move-exception
            r1 = r2
            goto L7b
        L3b:
            r2 = r1
            goto L47
        L3d:
            android.app.NotificationManager r2 = a()     // Catch: java.lang.Exception -> L7a
            java.util.List r1 = r2.getNotificationChannels()     // Catch: java.lang.Exception -> L7a
            java.lang.String r2 = "mipush_%s_%s"
        L47:
            boolean r3 = com.xiaomi.push.m.a()     // Catch: java.lang.Exception -> L7a
            if (r3 == 0) goto L8f
            if (r1 == 0) goto L8f
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> L7a
            r3.<init>()     // Catch: java.lang.Exception -> L7a
            java.lang.String r4 = ""
            java.lang.String r0 = a(r2, r0, r4)     // Catch: java.lang.Exception -> L7a
            java.util.Iterator r2 = r1.iterator()     // Catch: java.lang.Exception -> L7a
        L5e:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Exception -> L7a
            if (r4 == 0) goto L78
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Exception -> L7a
            android.app.NotificationChannel r4 = (android.app.NotificationChannel) r4     // Catch: java.lang.Exception -> L7a
            java.lang.String r5 = r4.getId()     // Catch: java.lang.Exception -> L7a
            boolean r5 = r5.startsWith(r0)     // Catch: java.lang.Exception -> L7a
            if (r5 == 0) goto L5e
            r3.add(r4)     // Catch: java.lang.Exception -> L7a
            goto L5e
        L78:
            r1 = r3
            goto L8f
        L7a:
            r0 = move-exception
        L7b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getNotificationChannels error "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            a(r0)
        L8f:
            return r1
    }

    public void a(int r13) {
            r12 = this;
            java.lang.String r0 = r12.a
            boolean r1 = a()     // Catch: java.lang.Exception -> L71
            if (r1 == 0) goto L69
            int r1 = com.xiaomi.push.j.a()     // Catch: java.lang.Exception -> L71
            android.content.Context r2 = r12.a()     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L71
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L71
            r4 = 30
            r5 = 3
            r6 = 2
            r7 = 0
            r8 = 1
            r9 = 0
            r10 = 4
            java.lang.String r11 = "cancelNotificationWithTag"
            if (r3 < r4) goto L3d
            java.lang.Object r3 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Exception -> L71
            r4 = 5
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L71
            r4[r9] = r0     // Catch: java.lang.Exception -> L71
            r4[r8] = r2     // Catch: java.lang.Exception -> L71
            r4[r6] = r7     // Catch: java.lang.Exception -> L71
            java.lang.Integer r0 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L71
            r4[r5] = r0     // Catch: java.lang.Exception -> L71
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L71
            r4[r10] = r0     // Catch: java.lang.Exception -> L71
            com.xiaomi.push.bk.b(r3, r11, r4)     // Catch: java.lang.Exception -> L71
            goto L54
        L3d:
            java.lang.Object r2 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Exception -> L71
            java.lang.Object[] r3 = new java.lang.Object[r10]     // Catch: java.lang.Exception -> L71
            r3[r9] = r0     // Catch: java.lang.Exception -> L71
            r3[r8] = r7     // Catch: java.lang.Exception -> L71
            java.lang.Integer r0 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L71
            r3[r6] = r0     // Catch: java.lang.Exception -> L71
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L71
            r3[r5] = r0     // Catch: java.lang.Exception -> L71
            com.xiaomi.push.bk.b(r2, r11, r3)     // Catch: java.lang.Exception -> L71
        L54:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r0.<init>()     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = "cancel succ:"
            r0.append(r1)     // Catch: java.lang.Exception -> L71
            r0.append(r13)     // Catch: java.lang.Exception -> L71
            java.lang.String r13 = r0.toString()     // Catch: java.lang.Exception -> L71
            a(r13)     // Catch: java.lang.Exception -> L71
            goto L86
        L69:
            android.app.NotificationManager r0 = a()     // Catch: java.lang.Exception -> L71
            r0.cancel(r13)     // Catch: java.lang.Exception -> L71
            goto L86
        L71:
            r13 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cancel error"
            r0.append(r1)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            a(r13)
        L86:
            return
    }

    public void a(int r6, android.app.Notification r7) {
            r5 = this;
            java.lang.String r0 = r5.a
            android.app.NotificationManager r1 = a()
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L25
            boolean r3 = a()     // Catch: java.lang.Exception -> L25
            if (r3 == 0) goto L22
            r3 = 19
            if (r2 < r3) goto L19
            android.os.Bundle r3 = r7.extras     // Catch: java.lang.Exception -> L25
            java.lang.String r4 = "xmsf_target_package"
            r3.putString(r4, r0)     // Catch: java.lang.Exception -> L25
        L19:
            r3 = 29
            if (r2 < r3) goto L22
            r2 = 0
            r1.notifyAsPackage(r0, r2, r6, r7)     // Catch: java.lang.Exception -> L25
            goto L25
        L22:
            r1.notify(r6, r7)     // Catch: java.lang.Exception -> L25
        L25:
            return
    }

    void a(android.app.NotificationChannel r8) {
            r7 = this;
            java.lang.String r0 = r7.a
            boolean r1 = a()     // Catch: java.lang.Exception -> L3b
            if (r1 == 0) goto L33
            int r1 = a(r0)     // Catch: java.lang.Exception -> L3b
            r2 = -1
            if (r1 == r2) goto L50
            r2 = 1
            android.app.NotificationChannel[] r3 = new android.app.NotificationChannel[r2]     // Catch: java.lang.Exception -> L3b
            r4 = 0
            r3[r4] = r8     // Catch: java.lang.Exception -> L3b
            java.util.List r8 = java.util.Arrays.asList(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.Object r8 = a(r8)     // Catch: java.lang.Exception -> L3b
            java.lang.Object r3 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Exception -> L3b
            java.lang.String r5 = "createNotificationChannelsForPackage"
            r6 = 3
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L3b
            r6[r4] = r0     // Catch: java.lang.Exception -> L3b
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L3b
            r6[r2] = r0     // Catch: java.lang.Exception -> L3b
            r0 = 2
            r6[r0] = r8     // Catch: java.lang.Exception -> L3b
            com.xiaomi.push.bk.b(r3, r5, r6)     // Catch: java.lang.Exception -> L3b
            goto L50
        L33:
            android.app.NotificationManager r0 = a()     // Catch: java.lang.Exception -> L3b
            r0.createNotificationChannel(r8)     // Catch: java.lang.Exception -> L3b
            goto L50
        L3b:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "createNotificationChannel error"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            a(r8)
        L50:
            return
    }

    void a(android.app.NotificationChannel r6, boolean r7) {
            r5 = this;
            java.lang.String r0 = r5.a
            if (r7 == 0) goto L23
            int r7 = a(r0)     // Catch: java.lang.Exception -> L27
            r1 = -1
            if (r7 == r1) goto L3c
            java.lang.Object r1 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "updateNotificationChannelForPackage"
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L27
            r4 = 0
            r3[r4] = r0     // Catch: java.lang.Exception -> L27
            r0 = 1
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L27
            r3[r0] = r7     // Catch: java.lang.Exception -> L27
            r7 = 2
            r3[r7] = r6     // Catch: java.lang.Exception -> L27
            com.xiaomi.push.bk.b(r1, r2, r3)     // Catch: java.lang.Exception -> L27
            goto L3c
        L23:
            r5.a(r6)     // Catch: java.lang.Exception -> L27
            goto L3c
        L27:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "updateNotificationChannel error "
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            a(r6)
        L3c:
            return
    }

    public boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r0 = ""
            java.lang.String r0 = r1.b(r0)
            boolean r2 = r2.startsWith(r0)
            return r2
        L11:
            r2 = 0
            return r2
    }

    java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = "default"
            java.lang.String r0 = r1.b(r0)
            r1.b = r0
        L10:
            java.lang.String r0 = r1.b
            return r0
    }

    java.lang.String b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = a()
            if (r0 == 0) goto L7
            goto L8
        L7:
            r2 = r3
        L8:
            return r2
    }

    public java.util.List<android.service.notification.StatusBarNotification> b() {
            r8 = this;
            java.lang.String r0 = r8.a
            android.app.NotificationManager r1 = a()
            r2 = 0
            boolean r3 = a()     // Catch: java.lang.Throwable -> L6e
            r4 = 0
            if (r3 == 0) goto L31
            int r1 = com.xiaomi.push.j.a()     // Catch: java.lang.Throwable -> L6e
            r3 = -1
            if (r1 == r3) goto L83
            java.lang.Object r3 = com.xiaomi.push.service.ax.a     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = "getAppActiveNotifications"
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L6e
            r6[r4] = r0     // Catch: java.lang.Throwable -> L6e
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L6e
            r1 = 1
            r6[r1] = r0     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r0 = com.xiaomi.push.bk.a(r3, r5, r6)     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r0 = a(r0)     // Catch: java.lang.Throwable -> L6e
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L6e
            r2 = r0
            goto L83
        L31:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L6e
            r5 = 23
            if (r3 < r5) goto L3c
            android.service.notification.StatusBarNotification[] r1 = r1.getActiveNotifications()     // Catch: java.lang.Throwable -> L6e
            goto L40
        L3c:
            android.service.notification.StatusBarNotification[] r1 = r8.a()     // Catch: java.lang.Throwable -> L6e
        L40:
            boolean r3 = com.xiaomi.push.m.a()     // Catch: java.lang.Throwable -> L6e
            if (r1 == 0) goto L83
            int r5 = r1.length     // Catch: java.lang.Throwable -> L6e
            if (r5 <= 0) goto L83
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6e
            r5.<init>()     // Catch: java.lang.Throwable -> L6e
            int r2 = r1.length     // Catch: java.lang.Throwable -> L6b
        L4f:
            if (r4 >= r2) goto L69
            r6 = r1[r4]     // Catch: java.lang.Throwable -> L6b
            if (r3 == 0) goto L63
            android.app.Notification r7 = r6.getNotification()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r7 = com.xiaomi.push.service.ay.c(r7)     // Catch: java.lang.Throwable -> L6b
            boolean r7 = r0.equals(r7)     // Catch: java.lang.Throwable -> L6b
            if (r7 == 0) goto L66
        L63:
            r5.add(r6)     // Catch: java.lang.Throwable -> L6b
        L66:
            int r4 = r4 + 1
            goto L4f
        L69:
            r2 = r5
            goto L83
        L6b:
            r0 = move-exception
            r2 = r5
            goto L6f
        L6e:
            r0 = move-exception
        L6f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "getActiveNotifications error "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            a(r0)
        L83:
            return r2
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NotificationManagerHelper{"
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
