package com.xiaomi.push.service;

public class ay {
    public static final com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> a = null;
    private static java.lang.String a;
    private static final java.lang.String[] a = null;
    public static final com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> b = null;
    public static final com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> c = null;
    public static final com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> d = null;
    public static final com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> e = null;
    public static final com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> f = null;

    public class a<F, S, T> {
        F a;
        S b;
        T c;

        private a(F r1, S r2, T r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        a(java.lang.Object r1, java.lang.Object r2, java.lang.Object r3, com.xiaomi.push.service.az r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }
    }

    static {
            java.lang.String r0 = "com.mi.globalbrowser"
            java.lang.String r1 = "com.android.browser"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.xiaomi.push.service.ay.a = r0
            r0 = 0
            com.xiaomi.push.service.ay.a = r0
            com.xiaomi.push.service.ay$a r1 = new com.xiaomi.push.service.ay$a
            java.lang.String r2 = "canSound"
            java.lang.String r3 = "setSound"
            r1.<init>(r3, r2, r2, r0)
            com.xiaomi.push.service.ay.a = r1
            com.xiaomi.push.service.ay$a r1 = new com.xiaomi.push.service.ay$a
            java.lang.String r2 = "canVibrate"
            java.lang.String r3 = "setVibrate"
            r1.<init>(r3, r2, r2, r0)
            com.xiaomi.push.service.ay.b = r1
            com.xiaomi.push.service.ay$a r1 = new com.xiaomi.push.service.ay$a
            java.lang.String r2 = "canLights"
            java.lang.String r3 = "setLights"
            r1.<init>(r3, r2, r2, r0)
            com.xiaomi.push.service.ay.c = r1
            com.xiaomi.push.service.ay$a r1 = new com.xiaomi.push.service.ay$a
            java.lang.String r2 = "canShowOnKeyguard"
            java.lang.String r3 = "setShowOnKeyguard"
            r1.<init>(r3, r2, r2, r0)
            com.xiaomi.push.service.ay.d = r1
            com.xiaomi.push.service.ay$a r1 = new com.xiaomi.push.service.ay$a
            java.lang.String r2 = "setFloat"
            java.lang.String r3 = "canFloat"
            java.lang.String r4 = "canShowFloat"
            r1.<init>(r2, r3, r4, r0)
            com.xiaomi.push.service.ay.e = r1
            com.xiaomi.push.service.ay$a r1 = new com.xiaomi.push.service.ay$a
            java.lang.String r2 = "canShowBadge"
            java.lang.String r3 = "setShowBadge"
            r1.<init>(r3, r2, r2, r0)
            com.xiaomi.push.service.ay.f = r1
            return
    }

    public static int a(android.content.ContentResolver r3) {
            r0 = 0
            java.lang.String r1 = "user_aggregate"
            int r3 = android.provider.Settings.Global.getInt(r3, r1, r0)     // Catch: java.lang.Exception -> L8
            return r3
        L8:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "get user aggregate failed, "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r0
    }

    static int a(android.content.Context r0, java.lang.String r1) {
            int r0 = com.xiaomi.push.h.b(r0, r1)
            return r0
    }

    public static int a(android.content.Context r2, java.lang.String r3, java.lang.String r4, com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> r5) {
            if (r5 == 0) goto L20
            S r0 = r5.b     // Catch: java.lang.Exception -> L20
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L20
            r1 = 0
            android.os.Bundle r2 = a(r2, r0, r3, r4, r1)     // Catch: java.lang.Exception -> L20
            if (r2 == 0) goto L20
            T r3 = r5.c     // Catch: java.lang.Exception -> L20
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L20
            boolean r3 = r2.containsKey(r3)     // Catch: java.lang.Exception -> L20
            if (r3 == 0) goto L20
            T r3 = r5.c     // Catch: java.lang.Exception -> L20
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L20
            boolean r2 = r2.getBoolean(r3)     // Catch: java.lang.Exception -> L20
            return r2
        L20:
            r2 = -1
            return r2
    }

    private static android.os.Bundle a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, android.os.Bundle r6) {
            if (r2 == 0) goto L38
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L38
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L38
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "package"
            r0.putString(r1, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 != 0) goto L23
            java.lang.String r4 = "channel_id"
            r0.putString(r4, r5)
        L23:
            if (r6 == 0) goto L28
            r0.putAll(r6)
        L28:
            android.content.ContentResolver r2 = r2.getContentResolver()
            java.lang.String r4 = "content://statusbar.notification"
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r5 = 0
            android.os.Bundle r2 = r2.call(r4, r3, r5, r0)
            return r2
        L38:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "call notification provider failed!"
            r2.<init>(r3)
            throw r2
    }

    public static <T> T a(android.app.Notification r1, java.lang.String r2) {
            android.os.Bundle r0 = r1.extras
            if (r0 == 0) goto Lb
            android.os.Bundle r1 = r1.extras     // Catch: java.lang.Exception -> Lb
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static <T> T a(java.lang.Object r2, java.lang.String r3, T r4) {
            r0 = 0
            boolean r1 = r2 instanceof android.app.Notification     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto Ld
            android.app.Notification r2 = (android.app.Notification) r2     // Catch: java.lang.Exception -> L38
            java.lang.Object r2 = a(r2, r3)     // Catch: java.lang.Exception -> L38
        Lb:
            r0 = r2
            goto L4d
        Ld:
            boolean r1 = r2 instanceof java.util.Map     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto L18
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Exception -> L38
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L38
            goto Lb
        L18:
            boolean r1 = r2 instanceof android.os.Bundle     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto L23
            android.os.Bundle r2 = (android.os.Bundle) r2     // Catch: java.lang.Exception -> L38
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L38
            goto Lb
        L23:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L38
            r3.<init>()     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = "not support get value from classType:"
            r3.append(r1)     // Catch: java.lang.Exception -> L38
            r3.append(r2)     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L38
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Exception -> L38
            goto L4d
        L38:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "get value error "
            r3.append(r1)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L4d:
            if (r0 != 0) goto L50
            goto L51
        L50:
            r4 = r0
        L51:
            return r4
    }

    public static java.lang.String a(android.app.Notification r2) {
            android.os.Bundle r0 = r2.extras
            if (r0 == 0) goto L29
            android.os.Bundle r0 = r2.extras
            java.lang.String r1 = "android.title"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1a
            android.os.Bundle r0 = r2.extras
            java.lang.String r1 = "android.title.big"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
        L1a:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L2a
            android.os.Bundle r2 = r2.extras
            java.lang.String r0 = "mipush.customTitle"
            java.lang.CharSequence r0 = r2.getCharSequence(r0)
            goto L2a
        L29:
            r0 = 0
        L2a:
            if (r0 == 0) goto L31
            java.lang.String r2 = r0.toString()
            goto L33
        L31:
            java.lang.String r2 = ""
        L33:
            return r2
    }

    public static java.lang.String a(java.lang.Object r2) {
            java.lang.String r0 = "msg_busi_type"
            java.lang.String r1 = ""
            java.lang.Object r2 = a(r2, r0, r1)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    static void a(android.app.Notification r3, int r4) {
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto Lb
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "miui.messageCount"
            r0.putInt(r1, r4)     // Catch: java.lang.Exception -> L22
        Lb:
            java.lang.String r0 = "extraNotification"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r0)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L22
            java.lang.String r0 = "setMessageCount"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L22
            r2 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L22
            r1[r2] = r4     // Catch: java.lang.Exception -> L22
            com.xiaomi.push.bk.a(r3, r0, r1)     // Catch: java.lang.Exception -> L22
        L22:
            return
    }

    static void a(android.app.Notification r2, int r3, int r4) {
            if (r2 == 0) goto L1b
            android.os.Bundle r0 = r2.extras
            if (r0 != 0) goto Ld
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r2.extras = r0
        Ld:
            android.os.Bundle r0 = r2.extras
            java.lang.String r1 = "is_priority"
            r0.putInt(r1, r3)
            android.os.Bundle r2 = r2.extras
            java.lang.String r3 = "mipush_class"
            r2.putInt(r3, r4)
        L1b:
            return
    }

    static void a(android.app.Notification r3, java.lang.String r4) {
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto Lb
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = "target_package"
            r0.putString(r1, r4)     // Catch: java.lang.Exception -> L1e
        Lb:
            java.lang.String r0 = "extraNotification"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r0)     // Catch: java.lang.Exception -> L1e
            if (r3 == 0) goto L1e
            java.lang.String r0 = "setTargetPkg"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1e
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L1e
            com.xiaomi.push.bk.a(r3, r0, r1)     // Catch: java.lang.Exception -> L1e
        L1e:
            return
    }

    static void a(android.app.Notification r3, boolean r4) {
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto Lb
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "miui.enableFloat"
            r0.putBoolean(r1, r4)     // Catch: java.lang.Exception -> L22
        Lb:
            java.lang.String r0 = "extraNotification"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r0)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L22
            java.lang.String r0 = "setEnableFloat"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L22
            r2 = 0
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> L22
            r1[r2] = r4     // Catch: java.lang.Exception -> L22
            com.xiaomi.push.bk.a(r3, r0, r1)     // Catch: java.lang.Exception -> L22
        L22:
            return
    }

    static void a(android.content.Context r6, java.lang.String r7, android.content.Intent r8) {
            if (r8 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L11
            r0.add(r7)
        L11:
            java.lang.String[] r7 = com.xiaomi.push.service.ay.a
            java.util.List r7 = java.util.Arrays.asList(r7)
            r0.addAll(r7)
            int r7 = r0.size()
            r1 = 0
        L1f:
            if (r1 >= r7) goto L5d
            java.lang.Object r2 = r0.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L5a
            android.content.Intent r3 = new android.content.Intent
            r3.<init>(r8)
            r3.setPackage(r2)
            android.content.pm.PackageManager r4 = r6.getPackageManager()     // Catch: java.lang.Exception -> L45
            r5 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r3 = r4.resolveActivity(r3, r5)     // Catch: java.lang.Exception -> L45
            if (r3 == 0) goto L5a
            r8.setPackage(r2)     // Catch: java.lang.Exception -> L45
            goto L5d
        L45:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "can't match url intent. "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L5a:
            int r1 = r1 + 1
            goto L1f
        L5d:
            java.lang.String r6 = r8.getPackage()
            r8.setPackage(r6)
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.String> r1, android.os.Bundle r2, java.lang.String r3) {
            if (r1 == 0) goto L25
            if (r2 == 0) goto L25
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lb
            goto L25
        Lb:
            java.lang.Object r0 = r1.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            r2.remove(r3)
            goto L24
        L1b:
            java.lang.Object r1 = r1.get(r3)
            java.lang.String r1 = (java.lang.String) r1
            r2.putString(r3, r1)
        L24:
            return
        L25:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cp map to b fail:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return
    }

    public static boolean a(android.app.Notification.Builder r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L10
            r0 = 1
            if (r3 == 0) goto Lb
            r3 = 2
            goto Lc
        Lb:
            r3 = r0
        Lc:
            r2.setGroupAlertBehavior(r3)
            return r0
        L10:
            java.lang.String r2 = "not support setGroupAlertBehavior"
            com.xiaomi.channel.commonutils.logger.b.b(r2)
            r2 = 0
            return r2
    }

    public static boolean a(android.content.ContentResolver r2) {
            int r2 = a(r2)
            r0 = 1
            if (r2 == r0) goto Lc
            r1 = 2
            if (r2 != r1) goto Lb
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public static boolean a(android.content.Context r2, java.lang.String r3, java.lang.String r4, com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String> r5, boolean r6) {
            if (r5 == 0) goto L17
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Exception -> L17
            r0.<init>()     // Catch: java.lang.Exception -> L17
            T r1 = r5.c     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L17
            r0.putBoolean(r1, r6)     // Catch: java.lang.Exception -> L17
            F r5 = r5.a     // Catch: java.lang.Exception -> L17
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L17
            a(r2, r5, r3, r4, r0)     // Catch: java.lang.Exception -> L17
            r2 = 1
            goto L18
        L17:
            r2 = 0
        L18:
            return r2
    }

    public static boolean a(java.util.Map<java.lang.String, java.lang.String> r2) {
            java.lang.String r0 = "not_suppress"
            java.lang.String r1 = "true"
            java.lang.Object r2 = a(r2, r0, r1)
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = java.lang.Boolean.parseBoolean(r2)
            return r2
    }

    public static android.app.Notification.Action[] a(android.app.Notification r2) {
            android.app.Notification$Action[] r0 = r2.actions
            if (r0 == 0) goto L7
            android.app.Notification$Action[] r2 = r2.actions
            return r2
        L7:
            android.os.Bundle r0 = r2.extras
            if (r0 == 0) goto L1f
            android.os.Bundle r2 = r2.extras
            java.lang.String r0 = "mipush.customActions"
            android.os.Parcelable[] r2 = r2.getParcelableArray(r0)
            if (r2 == 0) goto L1f
            int r0 = r2.length
            java.lang.Class<android.app.Notification$Action[]> r1 = android.app.Notification.Action[].class
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0, r1)
            android.app.Notification$Action[] r2 = (android.app.Notification.Action[]) r2
            return r2
        L1f:
            r2 = 0
            return r2
    }

    public static java.lang.String b(android.app.Notification r3) {
            android.os.Bundle r0 = r3.extras
            if (r0 == 0) goto L2f
            android.os.Bundle r0 = r3.extras
            java.lang.String r1 = "android.text"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L20
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L20
            android.os.Bundle r0 = r3.extras
            java.lang.String r1 = "android.bigText"
            java.lang.CharSequence r0 = r0.getCharSequence(r1)
        L20:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L30
            android.os.Bundle r3 = r3.extras
            java.lang.String r0 = "mipush.customContent"
            java.lang.CharSequence r0 = r3.getCharSequence(r0)
            goto L30
        L2f:
            r0 = 0
        L30:
            if (r0 == 0) goto L37
            java.lang.String r3 = r0.toString()
            goto L39
        L37:
            java.lang.String r3 = ""
        L39:
            return r3
    }

    public static void b(android.app.Notification r3, boolean r4) {
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto Lb
            android.os.Bundle r0 = r3.extras     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "miui.enableKeyguard"
            r0.putBoolean(r1, r4)     // Catch: java.lang.Exception -> L22
        Lb:
            java.lang.String r0 = "extraNotification"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r0)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L22
            java.lang.String r0 = "setEnableKeyguard"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L22
            r2 = 0
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> L22
            r1[r2] = r4     // Catch: java.lang.Exception -> L22
            com.xiaomi.push.bk.a(r3, r0, r1)     // Catch: java.lang.Exception -> L22
        L22:
            return
    }

    public static java.lang.String c(android.app.Notification r3) {
            r0 = 0
            android.os.Bundle r1 = r3.extras     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto Ld
            android.os.Bundle r1 = r3.extras     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "target_package"
            java.lang.String r0 = r1.getString(r2)     // Catch: java.lang.Exception -> L27
        Ld:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L27
            java.lang.String r1 = "extraNotification"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r1)     // Catch: java.lang.Exception -> L27
            if (r3 == 0) goto L27
            java.lang.String r1 = "getTargetPkg"
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L27
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L27
            r0 = r3
        L27:
            return r0
    }
}
