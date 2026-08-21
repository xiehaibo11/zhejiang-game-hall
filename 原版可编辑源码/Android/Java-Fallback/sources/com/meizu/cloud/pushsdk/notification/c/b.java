package com.meizu.cloud.pushsdk.notification.c;

public class b {
    private static java.lang.reflect.Field a;
    private static java.lang.reflect.Field b;
    private static java.lang.reflect.Field c;
    private static final java.lang.Object d = null;
    private static final java.util.Map<java.lang.String, java.util.Set<java.lang.String>> e = null;
    private static java.util.Map<java.lang.String, android.net.Uri> f;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.c.b.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.c.b.e = r0
            java.lang.Class<android.app.Notification> r0 = android.app.Notification.class
            java.lang.String r1 = "mFlymeNotification"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            com.meizu.cloud.pushsdk.notification.c.b.a = r0     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            java.lang.String r0 = "android.app.NotificationExt"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            java.lang.String r1 = "internalApp"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            com.meizu.cloud.pushsdk.notification.c.b.b = r0     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            java.lang.Class<android.app.Notification> r0 = android.app.Notification.class
            java.lang.String r2 = "replyIntent"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r2)     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            com.meizu.cloud.pushsdk.notification.c.b.c = r0     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            r0.setAccessible(r1)     // Catch: java.lang.ClassNotFoundException -> L38 java.lang.NoSuchFieldException -> L3d
            goto L58
        L38:
            r0 = move-exception
            r0.printStackTrace()
            goto L58
        L3d:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "init NotificationUtils error "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
        L58:
            return
    }

    public static void a(android.app.Notification r1, android.app.PendingIntent r2) {
            java.lang.reflect.Field r0 = com.meizu.cloud.pushsdk.notification.c.b.c
            if (r0 == 0) goto L23
            r0.set(r1, r2)     // Catch: java.lang.IllegalAccessException -> L8
            goto L23
        L8:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "setReplyIntent error "
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r1)
        L23:
            return
    }

    public static void a(android.app.Notification r2, boolean r3) {
            java.lang.reflect.Field r0 = com.meizu.cloud.pushsdk.notification.c.b.a
            if (r0 == 0) goto L36
            java.lang.reflect.Field r1 = com.meizu.cloud.pushsdk.notification.c.b.b
            if (r1 == 0) goto L36
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.IllegalAccessException -> L1b
            java.lang.reflect.Field r0 = com.meizu.cloud.pushsdk.notification.c.b.b     // Catch: java.lang.IllegalAccessException -> L1b
            if (r3 == 0) goto L12
            r3 = 1
            goto L13
        L12:
            r3 = 0
        L13:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.IllegalAccessException -> L1b
            r0.set(r2, r3)     // Catch: java.lang.IllegalAccessException -> L1b
            goto L36
        L1b:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "setInternalApp error "
            r3.append(r0)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
        L36:
            return
    }

    public static void a(android.content.Context r1) {
            java.lang.String r0 = "notification"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1
            if (r1 == 0) goto Ld
            r1.cancelAll()
        Ld:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5) {
            java.lang.String r0 = "notification"
            java.lang.Object r4 = r4.getSystemService(r0)
            android.app.NotificationManager r4 = (android.app.NotificationManager) r4
            if (r4 == 0) goto L50
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L50
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r0 = com.meizu.cloud.pushsdk.notification.c.b.e
            java.lang.Object r5 = r0.get(r5)
            java.util.Set r5 = (java.util.Set) r5
            if (r5 == 0) goto L50
            java.util.Iterator r0 = r5.iterator()
        L1e:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4d
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "clear notifyId "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = " notification"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            int r1 = java.lang.Integer.parseInt(r1)
            r4.cancel(r1)
            goto L1e
        L4d:
            r5.clear()
        L50:
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, int r4) {
            java.lang.String r0 = "notification"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            if (r2 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clear clearNotification notifyId "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            r2.cancel(r4)
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r2 = com.meizu.cloud.pushsdk.notification.c.b.e
            java.lang.Object r2 = r2.get(r3)
            java.util.Set r2 = (java.util.Set) r2
            if (r2 == 0) goto L34
            java.lang.String r3 = java.lang.String.valueOf(r4)
            r2.remove(r3)
        L34:
            return
    }

    public static boolean a(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            java.lang.Object r0 = com.meizu.cloud.pushsdk.notification.c.b.d
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto Lc
            r5 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return r5
        Lc:
            int r1 = com.meizu.cloud.pushsdk.util.b.i(r5, r6, r7)     // Catch: java.lang.Throwable -> L37
            java.lang.String r2 = "NotificationUtils"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            r3.<init>()     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = "removeNotifyKey "
            r3.append(r4)     // Catch: java.lang.Throwable -> L37
            r3.append(r7)     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = " notifyId "
            r3.append(r4)     // Catch: java.lang.Throwable -> L37
            r3.append(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L37
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r3)     // Catch: java.lang.Throwable -> L37
            c(r5, r6, r1)     // Catch: java.lang.Throwable -> L37
            boolean r5 = com.meizu.cloud.pushsdk.util.b.j(r5, r6, r7)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return r5
        L37:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r5
    }

    public static android.net.Uri b(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L31
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L31
        La:
            r1 = 2
            android.net.Uri r1 = android.media.RingtoneManager.getActualDefaultRingtoneUri(r2, r1)
            if (r1 != 0) goto L12
            return r0
        L12:
            java.util.Map<java.lang.String, android.net.Uri> r1 = com.meizu.cloud.pushsdk.notification.c.b.f
            if (r1 != 0) goto L19
            b(r2)
        L19:
            java.util.Map<java.lang.String, android.net.Uri> r2 = com.meizu.cloud.pushsdk.notification.c.b.f
            if (r2 == 0) goto L31
            int r2 = r2.size()
            if (r2 != 0) goto L24
            goto L31
        L24:
            java.util.Map<java.lang.String, android.net.Uri> r2 = com.meizu.cloud.pushsdk.notification.c.b.f
            java.lang.String r3 = r3.toLowerCase()
            java.lang.Object r2 = r2.get(r3)
            android.net.Uri r2 = (android.net.Uri) r2
            return r2
        L31:
            return r0
    }

    private static synchronized void b(android.content.Context r6) {
            java.lang.Class<com.meizu.cloud.pushsdk.notification.c.b> r0 = com.meizu.cloud.pushsdk.notification.c.b.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, android.net.Uri> r1 = com.meizu.cloud.pushsdk.notification.c.b.f     // Catch: java.lang.Throwable -> L8b
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            r1 = 0
            android.media.RingtoneManager r2 = new android.media.RingtoneManager     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r6 = 2
            r2.setType(r6)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            android.database.Cursor r1 = r2.getCursor()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            if (r1 != 0) goto L20
            if (r1 == 0) goto L1e
            r1.close()     // Catch: java.lang.Throwable -> L8b
        L1e:
            monitor-exit(r0)
            return
        L20:
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            int r3 = r1.getCount()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            com.meizu.cloud.pushsdk.notification.c.b.f = r2     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            boolean r2 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
        L2f:
            if (r2 == 0) goto L5d
            r2 = 1
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r3 = r1.getString(r6)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r4 = 0
            long r4 = r1.getLong(r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            android.net.Uri r3 = android.content.ContentUris.withAppendedId(r3, r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            if (r4 != 0) goto L58
            if (r3 == 0) goto L58
            java.util.Map<java.lang.String, android.net.Uri> r4 = com.meizu.cloud.pushsdk.notification.c.b.f     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
        L58:
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L65
            goto L2f
        L5d:
            if (r1 == 0) goto L83
        L5f:
            r1.close()     // Catch: java.lang.Throwable -> L8b
            goto L83
        L63:
            r6 = move-exception
            goto L85
        L65:
            r6 = move-exception
            java.lang.String r2 = "NotificationUtils"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63
            r3.<init>()     // Catch: java.lang.Throwable -> L63
            java.lang.String r4 = "get ringtone info error, "
            r3.append(r4)     // Catch: java.lang.Throwable -> L63
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L63
            r3.append(r6)     // Catch: java.lang.Throwable -> L63
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L63
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r6)     // Catch: java.lang.Throwable -> L63
            if (r1 == 0) goto L83
            goto L5f
        L83:
            monitor-exit(r0)
            return
        L85:
            if (r1 == 0) goto L8a
            r1.close()     // Catch: java.lang.Throwable -> L8b
        L8a:
            throw r6     // Catch: java.lang.Throwable -> L8b
        L8b:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public static void b(android.content.Context r2, java.lang.String r3, int r4) {
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r2 = com.meizu.cloud.pushsdk.notification.c.b.e
            java.lang.Object r2 = r2.get(r3)
            java.util.Set r2 = (java.util.Set) r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "store notifyId "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            if (r2 != 0) goto L32
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r2.add(r4)
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r4 = com.meizu.cloud.pushsdk.notification.c.b.e
            r4.put(r3, r2)
            goto L39
        L32:
            java.lang.String r3 = java.lang.String.valueOf(r4)
            r2.add(r3)
        L39:
            return
    }

    public static void c(android.content.Context r0, java.lang.String r1, int r2) {
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r0 = com.meizu.cloud.pushsdk.notification.c.b.e
            java.lang.Object r0 = r0.get(r1)
            java.util.Set r0 = (java.util.Set) r0
            if (r0 == 0) goto L27
            java.lang.String r1 = java.lang.String.valueOf(r2)
            r0.remove(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "remove notifyId "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NotificationUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
        L27:
            return
    }
}
