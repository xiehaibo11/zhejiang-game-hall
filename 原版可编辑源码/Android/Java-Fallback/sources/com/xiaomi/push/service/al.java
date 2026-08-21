package com.xiaomi.push.service;

public class al {
    public static long a;
    private static volatile com.xiaomi.push.service.as a;
    private static final java.util.LinkedList<android.util.Pair<java.lang.Integer, com.xiaomi.push.if>> a = null;
    private static java.util.concurrent.ExecutorService a;

    class a implements java.util.concurrent.Callable<android.graphics.Bitmap> {
        private android.content.Context a;
        private java.lang.String a;
        private boolean a;

        public a(java.lang.String r1, android.content.Context r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.a = r1
                r0.a = r3
                return
        }

        public android.graphics.Bitmap a() {
                r5 = this;
                java.lang.String r0 = r5.a
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r1 = 0
                if (r0 != 0) goto L33
                java.lang.String r0 = r5.a
                java.lang.String r2 = "http"
                boolean r0 = r0.startsWith(r2)
                java.lang.String r2 = "Failed get online picture/icon resource"
                if (r0 == 0) goto L28
                android.content.Context r0 = r5.a
                java.lang.String r3 = r5.a
                boolean r4 = r5.a
                com.xiaomi.push.service.aw$b r0 = com.xiaomi.push.service.aw.a(r0, r3, r4)
                if (r0 == 0) goto L24
                android.graphics.Bitmap r1 = r0.a
                goto L38
            L24:
                com.xiaomi.channel.commonutils.logger.b.a(r2)
                goto L38
            L28:
                android.content.Context r0 = r5.a
                java.lang.String r1 = r5.a
                android.graphics.Bitmap r1 = com.xiaomi.push.service.aw.a(r0, r1)
                if (r1 != 0) goto L38
                goto L24
            L33:
                java.lang.String r0 = "Failed get online picture/icon resource cause picUrl is empty"
                com.xiaomi.channel.commonutils.logger.b.a(r0)
            L38:
                return r1
        }

        @Override
        public android.graphics.Bitmap call() {
                r1 = this;
                android.graphics.Bitmap r0 = r1.a()
                return r0
        }
    }

    public class b {
        long a;
        android.app.Notification a;

        public b() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                return
        }
    }

    public class c {
        public long a;
        public java.lang.String a;
        public boolean a;

        public c() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                r0 = 0
                r2.a = r0
                return
        }
    }

    static {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            com.xiaomi.push.service.al.a = r0
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newCachedThreadPool()
            com.xiaomi.push.service.al.a = r0
            return
    }

    static int a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "pref_notify_type"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            r0 = 2147483647(0x7fffffff, float:NaN)
            int r2 = r2.getInt(r3, r0)
            return r2
    }

    private static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = r1.getPackageName()
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L15
            android.content.res.Resources r1 = r1.getResources()
            java.lang.String r0 = "drawable"
            int r1 = r1.getIdentifier(r3, r0, r2)
            return r1
        L15:
            r1 = 0
            return r1
    }

    private static int a(android.content.Context r0, java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, int r3) {
            android.content.Intent r1 = b(r0, r1, r2, r3)
            if (r1 == 0) goto L11
            android.content.ComponentName r0 = com.xiaomi.push.service.l.a(r0, r1)
            if (r0 == 0) goto L11
            int r0 = r0.hashCode()
            return r0
        L11:
            r0 = 0
            return r0
    }

    private static int a(java.util.Map<java.lang.String, java.lang.String> r2) {
            if (r2 != 0) goto L4
            r2 = 0
            goto Lc
        L4:
            java.lang.String r0 = "timeout"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
        Lc:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 != 0) goto L17
            int r1 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L17
        L17:
            return r1
    }

    private static android.app.Notification a(android.app.Notification r4) {
            java.lang.String r0 = "extraNotification"
            java.lang.Object r0 = com.xiaomi.push.bk.a(r4, r0)
            if (r0 == 0) goto L17
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            r3 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2[r3] = r1
            java.lang.String r1 = "setCustomizedIcon"
            com.xiaomi.push.bk.a(r0, r1, r2)
        L17:
            return r4
    }

    private static android.app.PendingIntent a(android.content.Context r7, com.xiaomi.push.if r8, java.lang.String r9, byte[] r10, int r11) {
            boolean r6 = a(r7, r8, r9)
            r5 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            android.app.PendingIntent r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static android.app.PendingIntent a(android.content.Context r16, com.xiaomi.push.if r17, java.lang.String r18, byte[] r19, int r20, int r21, boolean r22) {
            r6 = r16
            r0 = r18
            r1 = r19
            boolean r2 = c(r17)
            if (r2 == 0) goto Lf
            r2 = 1000(0x3e8, float:1.401E-42)
            goto L19
        Lf:
            boolean r2 = a(r17)
            if (r2 == 0) goto L18
            r2 = 3000(0xbb8, float:4.204E-42)
            goto L19
        L18:
            r2 = -1
        L19:
            com.xiaomi.push.hw r3 = r17.a()
            if (r3 == 0) goto L24
            java.lang.String r4 = r3.a()
            goto L26
        L24:
            java.lang.String r4 = ""
        L26:
            boolean r5 = a(r17)
            java.lang.String r7 = "eventMessageType"
            java.lang.String r8 = "messageId"
            r9 = 167772160(0xa000000, float:6.162976E-33)
            r10 = 134217728(0x8000000, float:3.85186E-34)
            r11 = 31
            r12 = 0
            if (r3 == 0) goto La5
            java.lang.String r13 = r3.e
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto La5
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r5 = "android.intent.action.VIEW"
            r1.<init>(r5)
            java.lang.String r5 = r3.e
            android.net.Uri r5 = android.net.Uri.parse(r5)
            r1.setData(r5)
            java.net.URL r5 = new java.net.URL     // Catch: java.net.MalformedURLException -> L73
            java.lang.String r13 = r3.e     // Catch: java.net.MalformedURLException -> L73
            r5.<init>(r13)     // Catch: java.net.MalformedURLException -> L73
            java.lang.String r5 = r5.getProtocol()     // Catch: java.net.MalformedURLException -> L73
            java.lang.String r13 = "http"
            boolean r13 = r13.equals(r5)     // Catch: java.net.MalformedURLException -> L73
            if (r13 != 0) goto L6f
            java.lang.String r13 = "https"
            boolean r5 = r13.equals(r5)     // Catch: java.net.MalformedURLException -> L73
            if (r5 == 0) goto L6b
            goto L6f
        L6b:
            r1.setPackage(r0)     // Catch: java.net.MalformedURLException -> L73
            goto L8c
        L6f:
            com.xiaomi.push.service.ay.a(r6, r0, r1)     // Catch: java.net.MalformedURLException -> L73
            goto L8c
        L73:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r13 = "meet URL exception : "
            r5.append(r13)
            java.lang.String r3 = r3.e
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            r1.setPackage(r0)
        L8c:
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r0)
            r1.putExtra(r8, r4)
            r1.putExtra(r7, r2)
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r11) goto La0
            android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r6, r12, r1, r9)
            return r0
        La0:
            android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r6, r12, r1, r10)
            return r0
        La5:
            r13 = 1
            java.lang.String r14 = "mipush_notified"
            java.lang.String r15 = "mipush_payload"
            java.lang.String r10 = "com.xiaomi.mipush.sdk.PushMessageHandler"
            android.content.Intent r9 = new android.content.Intent
            if (r5 == 0) goto Lbe
            r9.<init>()
            android.content.ComponentName r12 = new android.content.ComponentName
            java.lang.String r11 = "com.xiaomi.xmsf"
            r12.<init>(r11, r10)
            r9.setComponent(r12)
            goto Lcb
        Lbe:
            java.lang.String r11 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r9.<init>(r11)
            android.content.ComponentName r11 = new android.content.ComponentName
            r11.<init>(r0, r10)
            r9.setComponent(r11)
        Lcb:
            r9.putExtra(r15, r1)
            r9.putExtra(r14, r13)
            java.lang.String r1 = java.lang.String.valueOf(r20)
            r9.addCategory(r1)
            java.lang.String r1 = java.lang.String.valueOf(r4)
            r9.addCategory(r1)
            java.lang.String r1 = "notification_click_button"
            r10 = r21
            r9.putExtra(r1, r10)
            r9.putExtra(r8, r4)
            r9.putExtra(r7, r2)
            if (r5 != 0) goto L13e
            if (r22 == 0) goto L13e
            android.content.Intent r7 = new android.content.Intent
            r7.<init>()
            android.content.ComponentName r0 = a(r18)
            r7.setComponent(r0)
            r0 = 276824064(0x10800000, float:5.04871E-29)
            r7.addFlags(r0)
            java.lang.String r0 = "mipush_serviceIntent"
            r7.putExtra(r0, r9)
            java.lang.String r0 = java.lang.String.valueOf(r20)
            r7.addCategory(r0)
            java.lang.String r0 = java.lang.String.valueOf(r4)
            r7.addCategory(r0)
            java.lang.String r0 = java.lang.String.valueOf(r21)
            r7.addCategory(r0)
            r0 = r16
            r1 = r7
            r2 = r17
            r5 = r21
            a(r0, r1, r2, r3, r4, r5)
            a(r7)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 31
            if (r0 < r1) goto L136
            r0 = 167772160(0xa000000, float:6.162976E-33)
            r1 = 0
            android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r6, r1, r7, r0)
            return r0
        L136:
            r0 = 134217728(0x8000000, float:3.85186E-34)
            r1 = 0
            android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r6, r1, r7, r0)
            return r0
        L13e:
            r0 = r16
            r1 = r9
            r2 = r17
            r5 = r21
            a(r0, r1, r2, r3, r4, r5)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 31
            if (r0 < r1) goto L156
            r0 = 167772160(0xa000000, float:6.162976E-33)
            r1 = 0
            android.app.PendingIntent r0 = android.app.PendingIntent.getService(r6, r1, r9, r0)
            return r0
        L156:
            r0 = 134217728(0x8000000, float:3.85186E-34)
            r1 = 0
            android.app.PendingIntent r0 = android.app.PendingIntent.getService(r6, r1, r9, r0)
            return r0
    }

    private static android.app.PendingIntent a(android.content.Context r9, java.lang.String r10, com.xiaomi.push.if r11, byte[] r12, int r13, int r14) {
            com.xiaomi.push.hw r0 = r11.a()
            java.util.Map r0 = r0.a()
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            boolean r8 = a(r9, r11, r10)
            if (r8 == 0) goto L1d
            r2 = r9
            r3 = r11
            r4 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            android.app.PendingIntent r1 = a(r2, r3, r4, r5, r6, r7, r8)
            goto L33
        L1d:
            android.content.Intent r10 = a(r9, r10, r0, r14)
            if (r10 == 0) goto L33
            int r11 = android.os.Build.VERSION.SDK_INT
            r12 = 31
            r13 = 0
            if (r11 < r12) goto L2d
            r11 = 167772160(0xa000000, float:6.162976E-33)
            goto L2f
        L2d:
            r11 = 134217728(0x8000000, float:3.85186E-34)
        L2f:
            android.app.PendingIntent r1 = android.app.PendingIntent.getActivity(r9, r13, r10, r11)
        L33:
            return r1
    }

    public static android.content.ComponentName a(java.lang.String r2) {
            android.content.ComponentName r0 = new android.content.ComponentName
            java.lang.String r1 = "com.xiaomi.mipush.sdk.NotificationClickedActivity"
            r0.<init>(r2, r1)
            return r0
    }

    public static android.content.Intent a(android.content.Context r11, java.lang.String r12, java.util.Map<java.lang.String, java.lang.String> r13, int r14) {
            boolean r0 = b(r13)
            r1 = 1
            if (r0 == 0) goto L48
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r14)
            r3 = 0
            r0[r3] = r2
            java.lang.String r2 = "cust_btn_%s_ne"
            java.lang.String r7 = java.lang.String.format(r2, r0)
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r14)
            r0[r3] = r2
            java.lang.String r2 = "cust_btn_%s_iu"
            java.lang.String r8 = java.lang.String.format(r2, r0)
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r14)
            r0[r3] = r2
            java.lang.String r2 = "cust_btn_%s_ic"
            java.lang.String r9 = java.lang.String.format(r2, r0)
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)
            r0[r3] = r14
            java.lang.String r14 = "cust_btn_%s_wu"
            java.lang.String r10 = java.lang.String.format(r14, r0)
            r4 = r11
            r5 = r12
            r6 = r13
            android.content.Intent r11 = a(r4, r5, r6, r7, r8, r9, r10)
            return r11
        L48:
            if (r14 == r1) goto L85
            r0 = 2
            if (r14 == r0) goto L75
            r0 = 3
            if (r14 == r0) goto L65
            r0 = 4
            if (r14 == r0) goto L55
            r11 = 0
            return r11
        L55:
            java.lang.String r3 = "notification_colorful_button_notify_effect"
            java.lang.String r4 = "notification_colorful_button_intent_uri"
            java.lang.String r5 = "notification_colorful_button_intent_class"
            java.lang.String r6 = "notification_colorful_button_web_uri"
            r0 = r11
            r1 = r12
            r2 = r13
            android.content.Intent r11 = a(r0, r1, r2, r3, r4, r5, r6)
            return r11
        L65:
            java.lang.String r3 = "notification_style_button_right_notify_effect"
            java.lang.String r4 = "notification_style_button_right_intent_uri"
            java.lang.String r5 = "notification_style_button_right_intent_class"
            java.lang.String r6 = "notification_style_button_right_web_uri"
            r0 = r11
            r1 = r12
            r2 = r13
            android.content.Intent r11 = a(r0, r1, r2, r3, r4, r5, r6)
            return r11
        L75:
            java.lang.String r3 = "notification_style_button_mid_notify_effect"
            java.lang.String r4 = "notification_style_button_mid_intent_uri"
            java.lang.String r5 = "notification_style_button_mid_intent_class"
            java.lang.String r6 = "notification_style_button_mid_web_uri"
            r0 = r11
            r1 = r12
            r2 = r13
            android.content.Intent r11 = a(r0, r1, r2, r3, r4, r5, r6)
            return r11
        L85:
            java.lang.String r3 = "notification_style_button_left_notify_effect"
            java.lang.String r4 = "notification_style_button_left_intent_uri"
            java.lang.String r5 = "notification_style_button_left_intent_class"
            java.lang.String r6 = "notification_style_button_left_web_uri"
            r0 = r11
            r1 = r12
            r2 = r13
            android.content.Intent r11 = a(r0, r1, r2, r3, r4, r5, r6)
            return r11
    }

    private static android.content.Intent a(android.content.Context r3, java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            java.lang.Object r6 = r5.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto Le
            return r1
        Le:
            java.lang.String r0 = com.xiaomi.push.service.bk.a
            boolean r0 = r0.equals(r6)
            java.lang.String r2 = "Cause: "
            if (r0 == 0) goto L3b
            android.content.pm.PackageManager r5 = r3.getPackageManager()     // Catch: java.lang.Exception -> L22
            android.content.Intent r4 = r5.getLaunchIntentForPackage(r4)     // Catch: java.lang.Exception -> L22
            goto L111
        L22:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r4)
            goto L110
        L3b:
            java.lang.String r0 = com.xiaomi.push.service.bk.b
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L93
            boolean r9 = r5.containsKey(r7)
            if (r9 == 0) goto L77
            java.lang.Object r5 = r5.get(r7)
            java.lang.String r5 = (java.lang.String) r5
            if (r5 == 0) goto L110
            r7 = 1
            android.content.Intent r5 = android.content.Intent.parseUri(r5, r7)     // Catch: java.net.URISyntaxException -> L5c
            r5.setPackage(r4)     // Catch: java.net.URISyntaxException -> L5a
            goto L74
        L5a:
            r4 = move-exception
            goto L5e
        L5c:
            r4 = move-exception
            r5 = r1
        L5e:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r2)
            java.lang.String r4 = r4.getMessage()
            r7.append(r4)
            java.lang.String r4 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r4)
        L74:
            r4 = r5
            goto L111
        L77:
            boolean r7 = r5.containsKey(r8)
            if (r7 == 0) goto L110
            java.lang.Object r5 = r5.get(r8)
            java.lang.String r5 = (java.lang.String) r5
            android.content.Intent r7 = new android.content.Intent
            r7.<init>()
            android.content.ComponentName r8 = new android.content.ComponentName
            r8.<init>(r4, r5)
            r7.setComponent(r8)
        L90:
            r4 = r7
            goto L111
        L93:
            java.lang.String r7 = com.xiaomi.push.service.bk.c
            boolean r7 = r7.equals(r6)
            if (r7 == 0) goto L110
            java.lang.Object r5 = r5.get(r9)
            java.lang.String r5 = (java.lang.String) r5
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 != 0) goto L110
            java.lang.String r5 = r5.trim()
            java.lang.String r7 = "http://"
            boolean r8 = r5.startsWith(r7)
            if (r8 != 0) goto Lca
            java.lang.String r8 = "https://"
            boolean r8 = r5.startsWith(r8)
            if (r8 != 0) goto Lca
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r7)
            r8.append(r5)
            java.lang.String r5 = r8.toString()
        Lca:
            java.net.URL r7 = new java.net.URL     // Catch: java.net.MalformedURLException -> Lf7
            r7.<init>(r5)     // Catch: java.net.MalformedURLException -> Lf7
            java.lang.String r7 = r7.getProtocol()     // Catch: java.net.MalformedURLException -> Lf7
            java.lang.String r8 = "http"
            boolean r8 = r8.equals(r7)     // Catch: java.net.MalformedURLException -> Lf7
            if (r8 != 0) goto Le3
            java.lang.String r8 = "https"
            boolean r7 = r8.equals(r7)     // Catch: java.net.MalformedURLException -> Lf7
            if (r7 == 0) goto L110
        Le3:
            android.content.Intent r7 = new android.content.Intent     // Catch: java.net.MalformedURLException -> Lf7
            java.lang.String r8 = "android.intent.action.VIEW"
            r7.<init>(r8)     // Catch: java.net.MalformedURLException -> Lf7
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.net.MalformedURLException -> Lf5
            r7.setData(r5)     // Catch: java.net.MalformedURLException -> Lf5
            com.xiaomi.push.service.ay.a(r3, r4, r7)     // Catch: java.net.MalformedURLException -> Lf5
            goto L90
        Lf5:
            r4 = move-exception
            goto Lf9
        Lf7:
            r4 = move-exception
            r7 = r1
        Lf9:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r4)
            goto L90
        L110:
            r4 = r1
        L111:
            if (r4 == 0) goto L16b
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r5)
            android.content.pm.PackageManager r5 = r3.getPackageManager()     // Catch: java.lang.Exception -> L154
            r7 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r5 = r5.resolveActivity(r4, r7)     // Catch: java.lang.Exception -> L154
            if (r5 == 0) goto L125
            return r4
        L125:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L154
            r7 = 30
            if (r5 < r7) goto L13a
            boolean r3 = com.xiaomi.push.m.a(r3)     // Catch: java.lang.Exception -> L154
            if (r3 != 0) goto L13a
            java.lang.String r3 = com.xiaomi.push.service.bk.c     // Catch: java.lang.Exception -> L154
            boolean r3 = r3.equals(r6)     // Catch: java.lang.Exception -> L154
            if (r3 == 0) goto L13a
            return r4
        L13a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L154
            r3.<init>()     // Catch: java.lang.Exception -> L154
            java.lang.String r5 = "not resolve activity:"
            r3.append(r5)     // Catch: java.lang.Exception -> L154
            r3.append(r4)     // Catch: java.lang.Exception -> L154
            java.lang.String r4 = "for buttons"
            r3.append(r4)     // Catch: java.lang.Exception -> L154
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L154
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Exception -> L154
            goto L16b
        L154:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r3)
        L16b:
            return r1
    }

    private static android.graphics.Bitmap a(android.content.Context r0, int r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.Bitmap r0 = a(r0)
            return r0
    }

    private static android.graphics.Bitmap a(android.content.Context r2, java.lang.String r3, boolean r4) {
            java.util.concurrent.ExecutorService r0 = com.xiaomi.push.service.al.a
            com.xiaomi.push.service.al$a r1 = new com.xiaomi.push.service.al$a
            r1.<init>(r3, r2, r4)
            java.util.concurrent.Future r2 = r0.submit(r1)
            r3 = 180(0xb4, double:8.9E-322)
            r0 = 1
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L1c java.util.concurrent.TimeoutException -> L1e java.util.concurrent.ExecutionException -> L20 java.lang.InterruptedException -> L22
            java.lang.Object r3 = r2.get(r3, r1)     // Catch: java.lang.Throwable -> L1c java.util.concurrent.TimeoutException -> L1e java.util.concurrent.ExecutionException -> L20 java.lang.InterruptedException -> L22
            android.graphics.Bitmap r3 = (android.graphics.Bitmap) r3     // Catch: java.lang.Throwable -> L1c java.util.concurrent.TimeoutException -> L1e java.util.concurrent.ExecutionException -> L20 java.lang.InterruptedException -> L22
            if (r3 != 0) goto L2a
            r2.cancel(r0)
            goto L2a
        L1c:
            r3 = move-exception
            goto L2b
        L1e:
            r3 = move-exception
            goto L23
        L20:
            r3 = move-exception
            goto L23
        L22:
            r3 = move-exception
        L23:
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L1c
            r2.cancel(r0)
            r3 = 0
        L2a:
            return r3
        L2b:
            r2.cancel(r0)
            throw r3
    }

    public static android.graphics.Bitmap a(android.graphics.drawable.Drawable r5) {
            boolean r0 = r5 instanceof android.graphics.drawable.BitmapDrawable
            if (r0 == 0) goto Lb
            android.graphics.drawable.BitmapDrawable r5 = (android.graphics.drawable.BitmapDrawable) r5
            android.graphics.Bitmap r5 = r5.getBitmap()
            return r5
        Lb:
            int r0 = r5.getIntrinsicWidth()
            r1 = 1
            if (r0 <= 0) goto L13
            goto L14
        L13:
            r0 = r1
        L14:
            int r2 = r5.getIntrinsicHeight()
            if (r2 <= 0) goto L1b
            r1 = r2
        L1b:
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            int r2 = r1.getWidth()
            int r3 = r1.getHeight()
            r4 = 0
            r5.setBounds(r4, r4, r2, r3)
            r5.draw(r1)
            return r0
    }

    private static android.widget.RemoteViews a(android.content.Context r9, com.xiaomi.push.if r10, byte[] r11) {
            java.lang.String r11 = "time"
            java.lang.String r0 = "image"
            java.lang.String r1 = "text"
            com.xiaomi.push.hw r2 = r10.a()
            java.lang.String r10 = a(r10)
            r3 = 0
            if (r2 == 0) goto Lfa
            java.util.Map r4 = r2.a()
            if (r4 != 0) goto L19
            goto Lfa
        L19:
            java.util.Map r2 = r2.a()
            java.lang.String r4 = "layout_name"
            java.lang.Object r4 = r2.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r5 = "layout_value"
            java.lang.Object r2 = r2.get(r5)
            java.lang.String r2 = (java.lang.String) r2
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto Lfa
            boolean r5 = android.text.TextUtils.isEmpty(r2)
            if (r5 == 0) goto L3b
            goto Lfa
        L3b:
            android.content.pm.PackageManager r9 = r9.getPackageManager()
            android.content.res.Resources r9 = r9.getResourcesForApplication(r10)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lf6
            java.lang.String r5 = "layout"
            int r4 = r9.getIdentifier(r4, r5, r10)
            if (r4 != 0) goto L4c
            return r3
        L4c:
            android.widget.RemoteViews r5 = new android.widget.RemoteViews
            r5.<init>(r10, r4)
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lf1
            r4.<init>(r2)     // Catch: org.json.JSONException -> Lf1
            boolean r2 = r4.has(r1)     // Catch: org.json.JSONException -> Lf1
            java.lang.String r6 = "id"
            if (r2 == 0) goto L80
            org.json.JSONObject r1 = r4.getJSONObject(r1)     // Catch: org.json.JSONException -> Lf1
            java.util.Iterator r2 = r1.keys()     // Catch: org.json.JSONException -> Lf1
        L66:
            boolean r7 = r2.hasNext()     // Catch: org.json.JSONException -> Lf1
            if (r7 == 0) goto L80
            java.lang.Object r7 = r2.next()     // Catch: org.json.JSONException -> Lf1
            java.lang.String r7 = (java.lang.String) r7     // Catch: org.json.JSONException -> Lf1
            java.lang.String r8 = r1.getString(r7)     // Catch: org.json.JSONException -> Lf1
            int r7 = r9.getIdentifier(r7, r6, r10)     // Catch: org.json.JSONException -> Lf1
            if (r7 <= 0) goto L66
            r5.setTextViewText(r7, r8)     // Catch: org.json.JSONException -> Lf1
            goto L66
        L80:
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> Lf1
            if (r1 == 0) goto Lae
            org.json.JSONObject r0 = r4.getJSONObject(r0)     // Catch: org.json.JSONException -> Lf1
            java.util.Iterator r1 = r0.keys()     // Catch: org.json.JSONException -> Lf1
        L8e:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> Lf1
            if (r2 == 0) goto Lae
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> Lf1
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> Lf1
            java.lang.String r7 = r0.getString(r2)     // Catch: org.json.JSONException -> Lf1
            int r2 = r9.getIdentifier(r2, r6, r10)     // Catch: org.json.JSONException -> Lf1
            java.lang.String r8 = "drawable"
            int r7 = r9.getIdentifier(r7, r8, r10)     // Catch: org.json.JSONException -> Lf1
            if (r2 <= 0) goto L8e
            r5.setImageViewResource(r2, r7)     // Catch: org.json.JSONException -> Lf1
            goto L8e
        Lae:
            boolean r0 = r4.has(r11)     // Catch: org.json.JSONException -> Lf1
            if (r0 == 0) goto Lf0
            org.json.JSONObject r11 = r4.getJSONObject(r11)     // Catch: org.json.JSONException -> Lf1
            java.util.Iterator r0 = r11.keys()     // Catch: org.json.JSONException -> Lf1
        Lbc:
            boolean r1 = r0.hasNext()     // Catch: org.json.JSONException -> Lf1
            if (r1 == 0) goto Lf0
            java.lang.Object r1 = r0.next()     // Catch: org.json.JSONException -> Lf1
            java.lang.String r1 = (java.lang.String) r1     // Catch: org.json.JSONException -> Lf1
            java.lang.String r2 = r11.getString(r1)     // Catch: org.json.JSONException -> Lf1
            int r4 = r2.length()     // Catch: org.json.JSONException -> Lf1
            if (r4 != 0) goto Ld4
            java.lang.String r2 = "yy-MM-dd hh:mm"
        Ld4:
            int r1 = r9.getIdentifier(r1, r6, r10)     // Catch: org.json.JSONException -> Lf1
            if (r1 <= 0) goto Lbc
            long r7 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> Lf1
            java.text.SimpleDateFormat r4 = new java.text.SimpleDateFormat     // Catch: org.json.JSONException -> Lf1
            r4.<init>(r2)     // Catch: org.json.JSONException -> Lf1
            java.util.Date r2 = new java.util.Date     // Catch: org.json.JSONException -> Lf1
            r2.<init>(r7)     // Catch: org.json.JSONException -> Lf1
            java.lang.String r2 = r4.format(r2)     // Catch: org.json.JSONException -> Lf1
            r5.setTextViewText(r1, r2)     // Catch: org.json.JSONException -> Lf1
            goto Lbc
        Lf0:
            return r5
        Lf1:
            r9 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r9)
            return r3
        Lf6:
            r9 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r9)
        Lfa:
            return r3
    }

    private static com.xiaomi.push.eq a(android.content.Context r9, com.xiaomi.push.if r10, byte[] r11, java.lang.String r12, int r13) {
            java.lang.String r1 = a(r10)
            com.xiaomi.push.hw r0 = r10.a()
            java.util.Map r6 = r0.a()
            java.lang.String r0 = "notification_style_type"
            java.lang.Object r0 = r6.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r2 = com.xiaomi.push.m.a(r9)
            r3 = 0
            if (r2 == 0) goto L26
            com.xiaomi.push.service.as r2 = com.xiaomi.push.service.al.a
            if (r2 == 0) goto L26
            com.xiaomi.push.service.as r2 = com.xiaomi.push.service.al.a
            com.xiaomi.push.eq r2 = r2.a(r9, r13, r1, r6)
            goto L27
        L26:
            r2 = r3
        L27:
            if (r2 == 0) goto L2e
            r2.a(r6)
            goto L15a
        L2e:
            java.lang.String r2 = "2"
            boolean r2 = r2.equals(r0)
            r7 = 0
            if (r2 == 0) goto L73
            com.xiaomi.push.eq r2 = new com.xiaomi.push.eq
            r2.<init>(r9)
            java.lang.String r10 = "notification_bigPic_uri"
            java.lang.Object r11 = r6.get(r10)
            java.lang.String r11 = (java.lang.String) r11
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 == 0) goto L4c
            r9 = r3
            goto L56
        L4c:
            java.lang.Object r10 = r6.get(r10)
            java.lang.String r10 = (java.lang.String) r10
            android.graphics.Bitmap r9 = a(r9, r10, r7)
        L56:
            if (r9 != 0) goto L5e
            java.lang.String r9 = "can not get big picture."
            com.xiaomi.channel.commonutils.logger.b.a(r9)
            return r2
        L5e:
            android.app.Notification$BigPictureStyle r10 = new android.app.Notification$BigPictureStyle
            r10.<init>(r2)
            r10.bigPicture(r9)
            r10.setSummaryText(r12)
            android.graphics.Bitmap r3 = (android.graphics.Bitmap) r3
            r10.bigLargeIcon(r3)
            r2.setStyle(r10)
            goto L15a
        L73:
            java.lang.String r2 = "1"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L8e
            com.xiaomi.push.eq r2 = new com.xiaomi.push.eq
            r2.<init>(r9)
            android.app.Notification$BigTextStyle r9 = new android.app.Notification$BigTextStyle
            r9.<init>()
            android.app.Notification$BigTextStyle r9 = r9.bigText(r12)
            r2.setStyle(r9)
            goto L15a
        L8e:
            java.lang.String r12 = "4"
            boolean r12 = r12.equals(r0)
            if (r12 == 0) goto Ldc
            boolean r12 = com.xiaomi.push.m.a()
            if (r12 == 0) goto Ldc
            com.xiaomi.push.ep r2 = new com.xiaomi.push.ep
            r2.<init>(r9, r1)
            java.lang.String r10 = "notification_banner_image_uri"
            java.lang.Object r11 = r6.get(r10)
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto Lbc
            java.lang.Object r10 = r6.get(r10)
            java.lang.String r10 = (java.lang.String) r10
            android.graphics.Bitmap r10 = a(r9, r10, r7)
            r2.a(r10)
        Lbc:
            java.lang.String r10 = "notification_banner_icon_uri"
            java.lang.Object r11 = r6.get(r10)
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto Ld7
            java.lang.Object r10 = r6.get(r10)
            java.lang.String r10 = (java.lang.String) r10
            android.graphics.Bitmap r9 = a(r9, r10, r7)
            r2.b(r9)
        Ld7:
            r2.a(r6)
            goto L15a
        Ldc:
            java.lang.String r12 = "3"
            boolean r12 = r12.equals(r0)
            if (r12 == 0) goto L155
            boolean r12 = com.xiaomi.push.m.a()
            if (r12 == 0) goto L155
            com.xiaomi.push.er r12 = new com.xiaomi.push.er
            r12.<init>(r9, r13, r1)
            java.lang.String r8 = "notification_colorful_button_text"
            java.lang.Object r0 = r6.get(r8)
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L11d
            r5 = 4
            r0 = r9
            r2 = r10
            r3 = r11
            r4 = r13
            android.app.PendingIntent r10 = a(r0, r1, r2, r3, r4, r5)
            if (r10 == 0) goto L11d
            java.lang.Object r11 = r6.get(r8)
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            com.xiaomi.push.er r10 = r12.a(r11, r10)
            java.lang.String r11 = "notification_colorful_button_bg_color"
            java.lang.Object r11 = r6.get(r11)
            java.lang.String r11 = (java.lang.String) r11
            r10.a(r11)
        L11d:
            java.lang.String r10 = "notification_colorful_bg_color"
            java.lang.Object r11 = r6.get(r10)
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto L135
            java.lang.Object r9 = r6.get(r10)
            java.lang.String r9 = (java.lang.String) r9
            r12.b(r9)
            goto L150
        L135:
            java.lang.String r10 = "notification_colorful_bg_image_uri"
            java.lang.Object r11 = r6.get(r10)
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto L150
            java.lang.Object r10 = r6.get(r10)
            java.lang.String r10 = (java.lang.String) r10
            android.graphics.Bitmap r9 = a(r9, r10, r7)
            r12.a(r9)
        L150:
            r12.a(r6)
            r2 = r12
            goto L15a
        L155:
            com.xiaomi.push.eq r2 = new com.xiaomi.push.eq
            r2.<init>(r9)
        L15a:
            return r2
    }

    private static com.xiaomi.push.service.al.b a(android.content.Context r28, com.xiaomi.push.if r29, byte[] r30, android.widget.RemoteViews r31, android.app.PendingIntent r32, int r33) {
            r7 = r28
            r0 = r31
            com.xiaomi.push.service.al$b r8 = new com.xiaomi.push.service.al$b
            r8.<init>()
            com.xiaomi.push.hw r9 = r29.a()
            java.lang.String r10 = a(r29)
            java.util.Map r11 = r9.a()
            java.lang.String[] r12 = a(r7, r9)
            java.lang.String r13 = "notification_style_type"
            r14 = 1
            if (r0 == 0) goto L2e
            com.xiaomi.push.eq r1 = new com.xiaomi.push.eq
            r1.<init>(r7)
            r1.a(r0)
            r15 = r29
            r5 = r30
            r6 = r33
        L2c:
            r4 = r1
            goto L4f
        L2e:
            if (r11 == 0) goto L43
            boolean r0 = r11.containsKey(r13)
            if (r0 == 0) goto L43
            r0 = r12[r14]
            r15 = r29
            r5 = r30
            r6 = r33
            com.xiaomi.push.eq r1 = a(r7, r15, r5, r0, r6)
            goto L2c
        L43:
            r15 = r29
            r5 = r30
            r6 = r33
            com.xiaomi.push.eq r1 = new com.xiaomi.push.eq
            r1.<init>(r7)
            goto L2c
        L4f:
            java.lang.String r3 = r29.b()
            r1 = r4
            r2 = r28
            r14 = r4
            r4 = r29
            r5 = r30
            r6 = r33
            a(r1, r2, r3, r4, r5, r6)
            r1 = 0
            r0 = r12[r1]
            r14.setContentTitle(r0)
            r2 = 1
            r0 = r12[r2]
            r14.setContentText(r0)
            long r3 = java.lang.System.currentTimeMillis()
            r14.setWhen(r3)
            java.lang.String r0 = "notification_show_when"
            java.lang.String r0 = a(r11, r0)
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            r6 = 24
            if (r5 == 0) goto L89
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r6) goto L90
            r14.setShowWhen(r2)
            goto L90
        L89:
            boolean r0 = java.lang.Boolean.parseBoolean(r0)
            r14.setShowWhen(r0)
        L90:
            r0 = r32
            r14.setContentIntent(r0)
            java.lang.String r0 = "mipush_notification"
            int r0 = a(r7, r10, r0)
            java.lang.String r2 = "mipush_small_notification"
            int r2 = a(r7, r10, r2)
            r5 = 23
            if (r0 <= 0) goto Lb2
            if (r2 <= 0) goto Lb2
            android.graphics.Bitmap r0 = a(r7, r0)
            r14.setLargeIcon(r0)
            r14.setSmallIcon(r2)
            goto Lf8
        Lb2:
            boolean r0 = com.xiaomi.push.m.a(r28)
            if (r0 != 0) goto Lde
            java.lang.String r0 = "fcm_icon_uri"
            java.lang.String r0 = a(r11, r0)
            java.lang.String r2 = "fcm_icon_color"
            java.lang.String r2 = a(r11, r2)
            boolean r12 = android.text.TextUtils.isEmpty(r0)
            if (r12 != 0) goto Lde
            boolean r12 = android.text.TextUtils.isEmpty(r2)
            if (r12 != 0) goto Lde
            int r0 = a(r7, r10, r0)
            if (r0 <= 0) goto Lde
            r14.setSmallIcon(r0)
            r14.a(r2)
            r0 = 1
            goto Ldf
        Lde:
            r0 = r1
        Ldf:
            if (r0 != 0) goto Lf8
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r5) goto Lf1
            int r0 = com.xiaomi.push.service.ay.a(r7, r10)
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithResource(r10, r0)
            r14.setSmallIcon(r0)
            goto Lf8
        Lf1:
            int r0 = b(r7, r10)
            r14.setSmallIcon(r0)
        Lf8:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r5) goto L167
            java.lang.String r0 = "notification_small_icon_uri"
            if (r11 != 0) goto L103
            r5 = 0
            r12 = 1
            goto L10e
        L103:
            java.lang.Object r5 = r11.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            r12 = 1
            android.graphics.Bitmap r5 = a(r7, r5, r12)
        L10e:
            if (r5 == 0) goto L146
            java.lang.Object[] r2 = new java.lang.Object[r12]
            r2[r1] = r5
            java.lang.String r5 = "android.graphics.drawable.Icon"
            java.lang.String r6 = "createWithBitmap"
            java.lang.Object r2 = com.xiaomi.push.bk.a(r5, r6, r2)
            if (r2 == 0) goto L135
            java.lang.Object[] r0 = new java.lang.Object[r12]
            r0[r1] = r2
            java.lang.String r2 = "setSmallIcon"
            com.xiaomi.push.bk.a(r14, r2, r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r2 = "miui.isGrayscaleIcon"
            r0.putBoolean(r2, r12)
            r14.a(r0)
            goto L15e
        L135:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "failed te get small icon with url:"
            r2.append(r5)
            java.lang.Object r0 = r11.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            goto L154
        L146:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "failed to get small icon url:"
            r2.append(r5)
            java.lang.String r0 = a(r11, r0)
        L154:
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L15e:
            java.lang.String r0 = "notification_small_icon_color"
            java.lang.String r0 = a(r11, r0)
            r14.a(r0)
        L167:
            java.lang.String r0 = "__dynamic_icon_uri"
            java.lang.String r0 = a(r11, r0)
            java.lang.String r2 = "__adiom"
            java.lang.String r2 = a(r11, r2)
            boolean r2 = java.lang.Boolean.parseBoolean(r2)
            if (r2 != 0) goto L182
            boolean r2 = com.xiaomi.push.m.a()
            if (r2 != 0) goto L180
            goto L182
        L180:
            r2 = r1
            goto L183
        L182:
            r2 = 1
        L183:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L1ae
            if (r2 == 0) goto L1ae
            java.lang.String r2 = "http"
            boolean r2 = r0.startsWith(r2)
            if (r2 == 0) goto L1a3
            r2 = 1
            com.xiaomi.push.service.aw$b r0 = com.xiaomi.push.service.aw.a(r7, r0, r2)
            if (r0 == 0) goto L1a1
            android.graphics.Bitmap r2 = r0.a
            long r5 = r0.a
            r8.a = r5
            goto L1a7
        L1a1:
            r2 = 0
            goto L1a7
        L1a3:
            android.graphics.Bitmap r2 = com.xiaomi.push.service.aw.a(r7, r0)
        L1a7:
            if (r2 == 0) goto L1ae
            r14.setLargeIcon(r2)
            r2 = 1
            goto L1af
        L1ae:
            r2 = r1
        L1af:
            if (r11 != 0) goto L1b3
            r0 = 0
            goto L1c0
        L1b3:
            java.lang.String r0 = "notification_large_icon_uri"
            java.lang.Object r0 = r11.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r5 = 1
            android.graphics.Bitmap r0 = a(r7, r0, r5)
        L1c0:
            if (r0 == 0) goto L1c5
            r14.setLargeIcon(r0)
        L1c5:
            java.lang.String r5 = "com.xiaomi.xmsf"
            if (r11 == 0) goto L257
            int r0 = android.os.Build.VERSION.SDK_INT
            r6 = 24
            if (r0 < r6) goto L257
            java.lang.String r0 = "notification_group"
            java.lang.Object r0 = r11.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r6 = "notification_is_summary"
            java.lang.Object r6 = r11.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            boolean r6 = java.lang.Boolean.parseBoolean(r6)
            java.lang.String r12 = "notification_group_disable_default"
            java.lang.Object r12 = r11.get(r12)
            java.lang.String r12 = (java.lang.String) r12
            boolean r12 = java.lang.Boolean.parseBoolean(r12)
            boolean r16 = android.text.TextUtils.isEmpty(r0)
            if (r16 == 0) goto L201
            boolean r16 = com.xiaomi.push.m.a()
            if (r16 != 0) goto L1fd
            if (r12 != 0) goto L201
        L1fd:
            java.lang.String r0 = a(r29)
        L201:
            r30 = r0
            r12 = 1
            java.lang.Object[] r0 = new java.lang.Object[r12]
            java.lang.Boolean r12 = java.lang.Boolean.valueOf(r6)
            r0[r1] = r12
            java.lang.String r12 = "setGroupSummary"
            com.xiaomi.push.bk.a(r14, r12, r0)
            java.lang.Object r0 = r11.get(r13)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r12 = r28.getPackageName()
            boolean r12 = r5.equals(r12)
            if (r12 == 0) goto L251
            java.lang.String r12 = "4"
            boolean r12 = r12.equals(r0)
            if (r12 != 0) goto L231
            java.lang.String r12 = "3"
            boolean r0 = r12.equals(r0)
            if (r0 == 0) goto L251
        L231:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r12 = a(r29)
            r0.append(r12)
            java.lang.String r12 = "_custom_"
            r0.append(r12)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r12 = 1
            r13 = 1
            r27 = r6
            r6 = r0
            r0 = r27
            goto L25b
        L251:
            r12 = r1
            r0 = r6
            r13 = 1
            r6 = r30
            goto L25b
        L257:
            r0 = r1
            r12 = r0
            r6 = 0
            r13 = 1
        L25b:
            r14.setAutoCancel(r13)
            long r16 = java.lang.System.currentTimeMillis()
            if (r11 == 0) goto L275
            java.lang.String r13 = "ticker"
            boolean r18 = r11.containsKey(r13)
            if (r18 == 0) goto L275
            java.lang.Object r13 = r11.get(r13)
            java.lang.CharSequence r13 = (java.lang.CharSequence) r13
            r14.setTicker(r13)
        L275:
            long r18 = com.xiaomi.push.service.al.a
            long r18 = r16 - r18
            r20 = 10000(0x2710, double:4.9407E-320)
            int r13 = (r18 > r20 ? 1 : (r18 == r20 ? 0 : -1))
            java.lang.String r1 = "sound_uri"
            if (r13 <= 0) goto L2d3
            com.xiaomi.push.service.al.a = r16
            int r13 = r9.a
            boolean r16 = b(r7, r10)
            if (r16 == 0) goto L28f
            int r13 = a(r7, r10)
        L28f:
            r14.setDefaults(r13)
            if (r11 == 0) goto L2ce
            r16 = r13 & 1
            if (r16 == 0) goto L2ce
            java.lang.Object r16 = r11.get(r1)
            r15 = r16
            java.lang.String r15 = (java.lang.String) r15
            boolean r16 = android.text.TextUtils.isEmpty(r15)
            if (r16 != 0) goto L2ce
            r16 = r8
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r32 = r2
            java.lang.String r2 = "android.resource://"
            r8.append(r2)
            r8.append(r10)
            java.lang.String r2 = r8.toString()
            boolean r2 = r15.startsWith(r2)
            if (r2 == 0) goto L2d9
            r2 = r13 ^ 1
            r14.setDefaults(r2)
            android.net.Uri r2 = android.net.Uri.parse(r15)
            r14.setSound(r2)
            goto L2d9
        L2ce:
            r32 = r2
            r16 = r8
            goto L2d9
        L2d3:
            r32 = r2
            r16 = r8
            r13 = -100
        L2d9:
            java.lang.String r2 = "0"
            r8 = 26
            if (r11 == 0) goto L3d1
            int r15 = android.os.Build.VERSION.SDK_INT
            if (r15 < r8) goto L3d1
            com.xiaomi.push.service.ax r17 = com.xiaomi.push.service.ax.a(r7, r10)
            int r15 = a(r11)
            r25 = r5
            if (r15 <= 0) goto L305
            r8 = 1
            java.lang.Object[] r5 = new java.lang.Object[r8]
            int r15 = r15 * 1000
            r8 = r12
            r26 = r13
            long r12 = (long) r15
            java.lang.Long r12 = java.lang.Long.valueOf(r12)
            r13 = 0
            r5[r13] = r12
            java.lang.String r12 = "setTimeoutAfter"
            com.xiaomi.push.bk.a(r14, r12, r5)
            goto L308
        L305:
            r8 = r12
            r26 = r13
        L308:
            com.xiaomi.push.service.at.a(r9)
            java.lang.String r5 = "channel_id"
            java.lang.Object r5 = r11.get(r5)
            r18 = r5
            java.lang.String r18 = (java.lang.String) r18
            boolean r5 = android.text.TextUtils.isEmpty(r18)
            if (r5 == 0) goto L325
            android.content.pm.ApplicationInfo r5 = r28.getApplicationInfo()
            int r5 = r5.targetSdkVersion
            r12 = 26
            if (r5 < r12) goto L3a4
        L325:
            java.lang.String r19 = a(r7, r10, r11)
            int r22 = b(r11)
            int r5 = r9.a
            java.lang.String r9 = "channel_description"
            java.lang.Object r9 = r11.get(r9)
            r20 = r9
            java.lang.String r20 = (java.lang.String) r20
            java.lang.Object r1 = r11.get(r1)
            r23 = r1
            java.lang.String r23 = (java.lang.String) r23
            java.lang.String r1 = "channel_perm"
            java.lang.Object r1 = r11.get(r1)
            r24 = r1
            java.lang.String r24 = (java.lang.String) r24
            com.xiaomi.push.service.cc.a(r7, r11, r14, r3)
            r21 = r5
            java.lang.String r1 = com.xiaomi.push.service.at.a(r17, r18, r19, r20, r21, r22, r23, r24)
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]
            r3 = 0
            r4[r3] = r1
            java.lang.String r1 = "setChannelId"
            com.xiaomi.push.bk.a(r14, r1, r4)
            r13 = r26
            r1 = -100
            if (r13 != r1) goto L36e
            boolean r1 = com.xiaomi.push.service.ay.a(r11)
            if (r1 == 0) goto L36e
            com.xiaomi.push.service.ay.a(r14, r0)
        L36e:
            java.lang.String r1 = com.xiaomi.push.service.ay.a(r11)
            java.lang.String r3 = "pulldown"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L38f
            boolean r1 = com.xiaomi.push.service.ay.a(r11)
            if (r1 == 0) goto L38f
            java.lang.String r1 = "pull_down_pop_type"
            java.lang.Object r1 = r11.get(r1)
            boolean r1 = java.util.Objects.equals(r1, r2)
            if (r1 == 0) goto L38f
            com.xiaomi.push.service.ay.a(r14, r0)
        L38f:
            java.lang.String r1 = com.xiaomi.push.service.ay.a(r11)
            java.lang.String r3 = "tts"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L3a4
            boolean r1 = com.xiaomi.push.service.ay.a(r11)
            if (r1 == 0) goto L3a4
            com.xiaomi.push.service.ay.a(r14, r0)
        L3a4:
            java.lang.String r0 = "background_color"
            java.lang.Object r0 = r11.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3ef
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L3cc
            r1 = 1
            r14.setOngoing(r1)     // Catch: java.lang.Exception -> L3cc
            r14.setColor(r0)     // Catch: java.lang.Exception -> L3cc
            java.lang.String r0 = "setColorized"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3cc
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L3cc
            r1 = 0
            r3[r1] = r4     // Catch: java.lang.Exception -> L3cc
            com.xiaomi.push.bk.a(r14, r0, r3)     // Catch: java.lang.Exception -> L3cc
            goto L3ef
        L3cc:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            goto L3ef
        L3d1:
            r25 = r5
            r8 = r12
            if (r11 == 0) goto L3ef
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L3ef
            int r0 = c(r11)
            r1 = 1
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1 = 0
            r3[r1] = r0
            java.lang.String r0 = "setPriority"
            com.xiaomi.push.bk.a(r14, r0, r3)
        L3ef:
            if (r6 == 0) goto L406
            if (r8 != 0) goto L3fb
            com.xiaomi.push.service.au r0 = com.xiaomi.push.service.au.a()
            java.lang.String r6 = r0.a(r7, r14, r6)
        L3fb:
            r1 = 1
            java.lang.Object[] r0 = new java.lang.Object[r1]
            r1 = 0
            r0[r1] = r6
            java.lang.String r1 = "setGroup"
            com.xiaomi.push.bk.a(r14, r1, r0)
        L406:
            boolean r0 = com.xiaomi.push.m.c()
            if (r0 == 0) goto L42f
            java.lang.String r0 = r28.getPackageName()
            r1 = r25
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L42f
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r7
            r1 = 1
            r0[r1] = r14
            r1 = 2
            java.lang.String r3 = a(r29)
            r0[r1] = r3
            java.lang.String r1 = "miui.util.NotificationHelper"
            java.lang.String r3 = "setTargetPkg"
            com.xiaomi.push.bk.a(r1, r3, r0)
        L42f:
            android.app.Notification r0 = r14.getNotification()
            if (r32 == 0) goto L43e
            boolean r1 = com.xiaomi.push.m.a()
            if (r1 == 0) goto L43e
            a(r0)
        L43e:
            if (r11 == 0) goto L4c5
            android.os.Bundle r1 = r0.extras
            if (r1 != 0) goto L44b
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            r0.extras = r1
        L44b:
            java.lang.String r1 = "enable_keyguard"
            java.lang.Object r3 = r11.get(r1)
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L466
            java.lang.Object r1 = r11.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = java.lang.Boolean.parseBoolean(r1)
            com.xiaomi.push.service.ay.b(r0, r1)
        L466:
            java.lang.String r1 = "enable_float"
            java.lang.Object r3 = r11.get(r1)
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L481
            java.lang.Object r1 = r11.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = java.lang.Boolean.parseBoolean(r1)
            com.xiaomi.push.service.ay.a(r0, r1)
        L481:
            java.lang.String r1 = "float_small_win"
            java.lang.Object r3 = r11.get(r1)
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L4a5
            java.lang.Object r1 = r11.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L4a5
            boolean r1 = com.xiaomi.push.h.d(r7, r10)
            if (r1 == 0) goto L4a5
            r1 = 0
            com.xiaomi.push.service.ay.a(r0, r1)
        L4a5:
            java.lang.String r1 = "section_is_prr"
            java.lang.Object r1 = r11.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r2 = -1
            int r1 = com.xiaomi.push.w.a(r1, r2)
            java.lang.String r3 = "section_prr_cl"
            java.lang.Object r3 = r11.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            int r2 = com.xiaomi.push.w.a(r3, r2)
            if (r1 < 0) goto L4c5
            if (r2 < 0) goto L4c5
            com.xiaomi.push.service.ay.a(r0, r1, r2)
        L4c5:
            r1 = r16
            r1.a = r0
            return r1
    }

    public static com.xiaomi.push.service.al.c a(android.content.Context r21, com.xiaomi.push.if r22, byte[] r23) {
            r7 = r21
            r8 = r22
            com.xiaomi.push.service.al$c r9 = new com.xiaomi.push.service.al$c
            r9.<init>()
            java.lang.String r0 = a(r22)
            r10 = 1
            com.xiaomi.push.h$a r0 = com.xiaomi.push.h.a(r7, r0, r10)
            com.xiaomi.push.hw r11 = r22.a()
            r12 = 0
            if (r11 == 0) goto L23
            int r1 = r11.c()
            java.util.Map r2 = r11.a()
            r13 = r2
            goto L25
        L23:
            r1 = 0
            r13 = r12
        L25:
            java.lang.String r2 = a(r22)
            int r14 = com.xiaomi.push.w.b(r2, r1)
            boolean r1 = com.xiaomi.push.m.a(r21)
            if (r1 == 0) goto L83
            com.xiaomi.push.h$a r1 = com.xiaomi.push.h.a.c
            if (r0 != r1) goto L83
            if (r11 == 0) goto L65
            android.content.Context r0 = r21.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r1 = r22.b()
            java.lang.String r2 = b(r22)
            java.lang.String r3 = r11.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "10:"
            r4.append(r5)
            java.lang.String r5 = a(r22)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.a(r1, r2, r3, r4)
        L65:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Do not notify because user block "
            r0.append(r1)
            java.lang.String r1 = a(r22)
            r0.append(r1)
            java.lang.String r1 = "‘s notification"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L7f:
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return r9
        L83:
            boolean r0 = com.xiaomi.push.m.a(r21)
            if (r0 == 0) goto Lca
            com.xiaomi.push.service.as r0 = com.xiaomi.push.service.al.a
            if (r0 == 0) goto Lca
            com.xiaomi.push.service.as r0 = com.xiaomi.push.service.al.a
            java.lang.String r1 = a(r22)
            boolean r0 = r0.a(r7, r14, r1, r13)
            if (r0 == 0) goto Lca
            if (r11 == 0) goto Lc7
            android.content.Context r0 = r21.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r1 = r22.b()
            java.lang.String r2 = b(r22)
            java.lang.String r3 = r11.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "14:"
            r4.append(r5)
            java.lang.String r5 = a(r22)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.a(r1, r2, r3, r4)
        Lc7:
            java.lang.String r0 = "Do not notify because card notification is canceled or sequence incorrect"
            goto L7f
        Lca:
            android.widget.RemoteViews r4 = a(r21, r22, r23)
            java.lang.String r0 = r22.b()
            r3 = r23
            android.app.PendingIntent r5 = a(r7, r8, r0, r3, r14)
            if (r5 != 0) goto Lf8
            if (r11 == 0) goto Lf5
            android.content.Context r0 = r21.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r1 = r22.b()
            java.lang.String r2 = b(r22)
            java.lang.String r3 = r11.a()
            java.lang.String r4 = "11"
            r0.a(r1, r2, r3, r4)
        Lf5:
            java.lang.String r0 = "The click PendingIntent is null. "
            goto L7f
        Lf8:
            r1 = r21
            r2 = r22
            r3 = r23
            r6 = r14
            com.xiaomi.push.service.al$b r0 = a(r1, r2, r3, r4, r5, r6)
            long r1 = r0.a
            r9.a = r1
            java.lang.String r1 = a(r22)
            r9.a = r1
            android.app.Notification r1 = r0.a
            boolean r0 = com.xiaomi.push.m.a()
            if (r0 == 0) goto L19b
            java.lang.String r0 = r11.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12a
            android.os.Bundle r0 = r1.extras
            java.lang.String r2 = r11.a()
            java.lang.String r3 = "message_id"
            r0.putString(r3, r2)
        L12a:
            android.os.Bundle r0 = r1.extras
            java.lang.String r2 = r22.a()
            java.lang.String r3 = "local_paid"
            r0.putString(r3, r2)
            android.os.Bundle r0 = r1.extras
            java.lang.String r2 = "msg_busi_type"
            com.xiaomi.push.service.ay.a(r13, r0, r2)
            android.os.Bundle r0 = r1.extras
            java.lang.String r2 = "disable_notification_flags"
            com.xiaomi.push.service.ay.a(r13, r0, r2)
            java.util.Map r0 = r11.b()
            if (r0 != 0) goto L14b
            r0 = r12
            goto L157
        L14b:
            java.util.Map r0 = r11.b()
            java.lang.String r2 = "score_info"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
        L157:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L164
            android.os.Bundle r2 = r1.extras
            java.lang.String r3 = "score_info"
            r2.putString(r3, r0)
        L164:
            android.os.Bundle r0 = r1.extras
            java.util.Map<java.lang.String, java.lang.String> r2 = r11.a
            java.lang.String r3 = "n_stats_expose"
            java.lang.String r2 = a(r2, r3)
            java.lang.String r3 = "pushUid"
            r0.putString(r3, r2)
            r0 = -1
            boolean r2 = c(r22)
            if (r2 == 0) goto L17d
            r0 = 1000(0x3e8, float:1.401E-42)
            goto L185
        L17d:
            boolean r2 = a(r22)
            if (r2 == 0) goto L185
            r0 = 3000(0xbb8, float:4.204E-42)
        L185:
            android.os.Bundle r2 = r1.extras
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r3 = "eventMessageType"
            r2.putString(r3, r0)
            android.os.Bundle r0 = r1.extras
            java.lang.String r2 = a(r22)
            java.lang.String r3 = "target_package"
            r0.putString(r3, r2)
        L19b:
            java.util.Map r0 = r11.a()
            if (r0 != 0) goto L1a3
            r0 = r12
            goto L1af
        L1a3:
            java.util.Map r0 = r11.a()
            java.lang.String r2 = "message_count"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
        L1af:
            boolean r2 = com.xiaomi.push.m.a()
            if (r2 == 0) goto L1ef
            if (r0 == 0) goto L1ef
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L1bf
            com.xiaomi.push.service.ay.a(r1, r0)     // Catch: java.lang.NumberFormatException -> L1bf
            goto L1ef
        L1bf:
            r0 = move-exception
            if (r11 == 0) goto L1db
            android.content.Context r2 = r21.getApplicationContext()
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)
            java.lang.String r3 = r22.b()
            java.lang.String r4 = b(r22)
            java.lang.String r5 = r11.a()
            java.lang.String r6 = "8"
            r2.b(r3, r4, r5, r6)
        L1db:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "fail to set message count. "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L1ef:
            java.lang.String r0 = a(r22)
            boolean r2 = com.xiaomi.push.m.c()
            if (r2 != 0) goto L202
            boolean r2 = com.xiaomi.push.m.a(r21)
            if (r2 == 0) goto L202
            com.xiaomi.push.service.ay.a(r1, r0)
        L202:
            com.xiaomi.push.service.ax r2 = com.xiaomi.push.service.ax.a(r7, r0)
            boolean r3 = com.xiaomi.push.m.a(r21)
            if (r3 == 0) goto L219
            com.xiaomi.push.service.as r3 = com.xiaomi.push.service.al.a
            if (r3 == 0) goto L219
            com.xiaomi.push.service.as r3 = com.xiaomi.push.service.al.a
            java.util.Map r4 = r11.a()
            r3.a(r8, r4, r14, r1)
        L219:
            boolean r3 = com.xiaomi.push.m.a(r21)
            if (r3 == 0) goto L235
            com.xiaomi.push.service.as r3 = com.xiaomi.push.service.al.a
            if (r3 == 0) goto L235
            com.xiaomi.push.service.as r3 = com.xiaomi.push.service.al.a
            java.util.Map r4 = r11.a()
            boolean r3 = r3.a(r4, r14, r1)
            if (r3 == 0) goto L235
            java.lang.String r3 = "consume this notificaiton by agent"
            com.xiaomi.channel.commonutils.logger.b.b(r3)
            goto L257
        L235:
            r2.a(r14, r1)
            r9.a = r10
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "notification: "
            r3.append(r4)
            java.lang.String r4 = r11.a()
            r3.append(r4)
            java.lang.String r4 = " is notifyied"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L257:
            boolean r3 = com.xiaomi.push.m.a()
            if (r3 == 0) goto L271
            boolean r3 = com.xiaomi.push.m.a(r21)
            if (r3 == 0) goto L271
            com.xiaomi.push.service.au r3 = com.xiaomi.push.service.au.a()
            r3.a(r7, r14, r1)
            java.lang.String r3 = r11.a()
            com.xiaomi.push.service.cc.a(r7, r0, r14, r3, r1)
        L271:
            boolean r0 = a(r22)
            if (r0 == 0) goto L292
            android.content.Context r0 = r21.getApplicationContext()
            com.xiaomi.push.eo r15 = com.xiaomi.push.eo.a(r0)
            java.lang.String r16 = r22.b()
            java.lang.String r17 = b(r22)
            java.lang.String r18 = r11.a()
            r19 = 3002(0xbba, float:4.207E-42)
            r20 = 0
            r15.a(r16, r17, r18, r19, r20)
        L292:
            boolean r0 = c(r22)
            if (r0 == 0) goto L2b3
            android.content.Context r0 = r21.getApplicationContext()
            com.xiaomi.push.eo r15 = com.xiaomi.push.eo.a(r0)
            java.lang.String r16 = r22.b()
            java.lang.String r17 = b(r22)
            java.lang.String r18 = r11.a()
            r19 = 1002(0x3ea, float:1.404E-42)
            r20 = 0
            r15.a(r16, r17, r18, r19, r20)
        L2b3:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L2ef
            if (r11 == 0) goto L2bf
            java.lang.String r12 = r11.a()
        L2bf:
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r21)
            java.util.Map r1 = r11.a()
            int r1 = a(r1)
            if (r1 <= 0) goto L2ef
            boolean r3 = android.text.TextUtils.isEmpty(r12)
            if (r3 != 0) goto L2ef
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "n_timeout_"
            r3.append(r4)
            r3.append(r12)
            java.lang.String r3 = r3.toString()
            r0.a(r3)
            com.xiaomi.push.service.am r4 = new com.xiaomi.push.service.am
            r4.<init>(r3, r2, r14)
            r0.b(r4, r1)
        L2ef:
            android.util.Pair r0 = new android.util.Pair
            java.lang.Integer r1 = java.lang.Integer.valueOf(r14)
            r0.<init>(r1, r8)
            java.util.LinkedList<android.util.Pair<java.lang.Integer, com.xiaomi.push.if>> r1 = com.xiaomi.push.service.al.a
            monitor-enter(r1)
            java.util.LinkedList<android.util.Pair<java.lang.Integer, com.xiaomi.push.if>> r2 = com.xiaomi.push.service.al.a     // Catch: java.lang.Throwable -> L311
            r2.add(r0)     // Catch: java.lang.Throwable -> L311
            java.util.LinkedList<android.util.Pair<java.lang.Integer, com.xiaomi.push.if>> r0 = com.xiaomi.push.service.al.a     // Catch: java.lang.Throwable -> L311
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L311
            r2 = 100
            if (r0 <= r2) goto L30f
            java.util.LinkedList<android.util.Pair<java.lang.Integer, com.xiaomi.push.if>> r0 = com.xiaomi.push.service.al.a     // Catch: java.lang.Throwable -> L311
            r0.remove()     // Catch: java.lang.Throwable -> L311
        L30f:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L311
            return r9
        L311:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L311
            throw r0
    }

    private static java.lang.String a(android.content.Context r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            if (r4 == 0) goto L17
            java.lang.String r0 = "channel_name"
            java.lang.Object r1 = r4.get(r0)
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L17
            java.lang.Object r2 = r4.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        L17:
            java.lang.String r2 = com.xiaomi.push.h.b(r2, r3)
            return r2
    }

    public static java.lang.String a(com.xiaomi.push.if r2) {
            java.lang.String r0 = r2.b
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L29
            com.xiaomi.push.hw r0 = r2.a()
            if (r0 == 0) goto L29
            java.util.Map r1 = r0.a()
            if (r1 == 0) goto L29
            java.util.Map r0 = r0.a()
            java.lang.String r1 = "miui_package_name"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L29
            return r0
        L29:
            java.lang.String r2 = r2.b
            return r2
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r3, int r4) {
            r0 = 0
            if (r4 != 0) goto L6
            java.lang.String r4 = "notify_effect"
            goto L35
        L6:
            boolean r1 = b(r3)
            r2 = 1
            if (r1 == 0) goto L1d
            java.lang.Object[] r1 = new java.lang.Object[r2]
            r2 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1[r2] = r4
            java.lang.String r4 = "cust_btn_%s_ne"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            goto L35
        L1d:
            if (r4 != r2) goto L22
            java.lang.String r4 = "notification_style_button_left_notify_effect"
            goto L35
        L22:
            r1 = 2
            if (r4 != r1) goto L28
            java.lang.String r4 = "notification_style_button_mid_notify_effect"
            goto L35
        L28:
            r1 = 3
            if (r4 != r1) goto L2e
            java.lang.String r4 = "notification_style_button_right_notify_effect"
            goto L35
        L2e:
            r1 = 4
            if (r4 != r1) goto L34
            java.lang.String r4 = "notification_colorful_button_notify_effect"
            goto L35
        L34:
            r4 = r0
        L35:
            if (r3 == 0) goto L40
            if (r4 == 0) goto L40
            java.lang.Object r3 = r3.get(r4)
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
        L40:
            return r0
    }

    private static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1) {
            if (r0 == 0) goto L9
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    private static void a(android.content.Context r2, android.content.Intent r3, com.xiaomi.push.if r4, com.xiaomi.push.hw r5, java.lang.String r6, int r7) {
            if (r4 == 0) goto L7e
            if (r5 == 0) goto L7e
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto Lb
            goto L7e
        Lb:
            java.util.Map r0 = r5.a()
            java.lang.String r0 = a(r0, r7)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7e
            java.lang.String r1 = com.xiaomi.push.service.bk.a
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L31
            java.lang.String r1 = com.xiaomi.push.service.bk.b
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L31
            java.lang.String r1 = com.xiaomi.push.service.bk.c
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L7e
        L31:
            java.lang.String r0 = "messageId"
            r3.putExtra(r0, r6)
            java.lang.String r6 = r4.a
            java.lang.String r0 = "local_paid"
            r3.putExtra(r0, r6)
            java.lang.String r6 = r4.b
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L4c
            java.lang.String r6 = r4.b
            java.lang.String r0 = "target_package"
            r3.putExtra(r0, r6)
        L4c:
            java.util.Map r6 = r5.a()
            java.lang.String r0 = "jobkey"
            java.lang.String r6 = a(r6, r0)
            java.lang.String r0 = "job_key"
            r3.putExtra(r0, r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            java.lang.String r0 = "_"
            r6.append(r0)
            java.lang.String r0 = "target_component"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.String r4 = r4.b
            java.util.Map r5 = r5.a()
            int r2 = a(r2, r4, r5, r7)
            r3.putExtra(r6, r2)
        L7e:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2) {
            r0 = -1
            a(r1, r2, r0)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, int r3) {
            r0 = -1
            a(r1, r2, r3, r0)
            return
    }

    public static void a(android.content.Context r6, java.lang.String r7, int r8, int r9) {
            if (r6 == 0) goto L6a
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L6a
            r0 = -1
            if (r8 >= r0) goto Lc
            goto L6a
        Lc:
            com.xiaomi.push.service.ax r1 = com.xiaomi.push.service.ax.a(r6, r7)
            java.util.List r2 = r1.b()
            boolean r3 = com.xiaomi.push.w.a(r2)
            if (r3 == 0) goto L1b
            return
        L1b:
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            r4 = 0
            if (r8 != r0) goto L28
            r7 = 1
            r5 = r4
            r4 = r7
            r7 = r5
            goto L31
        L28:
            int r7 = r7.hashCode()
            int r7 = r7 / 10
            int r7 = r7 * 10
            int r7 = r7 + r8
        L31:
            java.util.Iterator r8 = r2.iterator()
        L35:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L67
            java.lang.Object r0 = r8.next()
            android.service.notification.StatusBarNotification r0 = (android.service.notification.StatusBarNotification) r0
            int r2 = r0.getId()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L35
            int r2 = r0.getId()
            if (r4 == 0) goto L5c
            r3.add(r0)
            r1.a(r2)
            goto L35
        L5c:
            if (r7 != r2) goto L35
            com.xiaomi.push.service.d.a(r6, r0, r9)
            r3.add(r0)
            r1.a(r2)
        L67:
            a(r6, r3)
        L6a:
            return
    }

    public static void a(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            if (r7 == 0) goto L7c
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L7c
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L7c
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L15
            goto L7c
        L15:
            com.xiaomi.push.service.ax r8 = com.xiaomi.push.service.ax.a(r7, r8)
            java.util.List r0 = r8.b()
            boolean r1 = com.xiaomi.push.w.a(r0)
            if (r1 == 0) goto L24
            return
        L24:
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            java.util.Iterator r0 = r0.iterator()
        L2d:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L79
            java.lang.Object r2 = r0.next()
            android.service.notification.StatusBarNotification r2 = (android.service.notification.StatusBarNotification) r2
            android.app.Notification r3 = r2.getNotification()
            if (r3 != 0) goto L40
            goto L2d
        L40:
            int r4 = r2.getId()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L2d
            int r4 = r2.getId()
            java.lang.String r5 = com.xiaomi.push.service.ay.a(r3)
            java.lang.String r3 = com.xiaomi.push.service.ay.b(r3)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L2d
            boolean r6 = android.text.TextUtils.isEmpty(r3)
            if (r6 != 0) goto L2d
            boolean r5 = a(r5, r9)
            if (r5 == 0) goto L2d
            boolean r3 = a(r3, r10)
            if (r3 == 0) goto L2d
            r1.add(r2)
            r8.a(r4)
            goto L2d
        L79:
            a(r7, r1)
        L7c:
            return
    }

    public static void a(android.content.Context r6, java.util.LinkedList<? extends java.lang.Object> r7) {
            if (r7 == 0) goto L17
            int r0 = r7.size()
            if (r0 <= 0) goto L17
            int r7 = r7.size()
            long r3 = (long) r7
            java.lang.String r1 = "category_clear_notification"
            java.lang.String r2 = "clear_notification"
            java.lang.String r5 = ""
            r0 = r6
            com.xiaomi.push.service.bz.a(r0, r1, r2, r3, r5)
        L17:
            return
    }

    private static void a(android.content.Intent r6) {
            java.lang.Class r0 = r6.getClass()     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "addMiuiFlags"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L22
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L22
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L22
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Exception -> L22
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L22
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L22
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L22
            r1[r5] = r2     // Catch: java.lang.Exception -> L22
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L22
            goto L37
        L22:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "insert flags error "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r6)
        L37:
            return
    }

    private static void a(com.xiaomi.push.eq r12, android.content.Context r13, java.lang.String r14, com.xiaomi.push.if r15, byte[] r16, int r17) {
            r0 = r12
            com.xiaomi.push.hw r1 = r15.a()
            java.util.Map r1 = r1.a()
            java.lang.String r2 = "notification_style_type"
            java.lang.Object r3 = r1.get(r2)
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            java.lang.String r4 = "3"
            boolean r3 = android.text.TextUtils.equals(r4, r3)
            if (r3 != 0) goto Ld4
            java.lang.Object r2 = r1.get(r2)
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            java.lang.String r3 = "4"
            boolean r2 = android.text.TextUtils.equals(r3, r2)
            if (r2 == 0) goto L29
            goto Ld4
        L29:
            boolean r2 = b(r1)
            r3 = 0
            if (r2 == 0) goto L65
            r2 = 1
            r10 = r2
        L32:
            r4 = 3
            if (r10 > r4) goto L64
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r10)
            r4[r3] = r5
            java.lang.String r5 = "cust_btn_%s_n"
            java.lang.String r4 = java.lang.String.format(r5, r4)
            java.lang.Object r4 = r1.get(r4)
            r11 = r4
            java.lang.String r11 = (java.lang.String) r11
            boolean r4 = android.text.TextUtils.isEmpty(r11)
            if (r4 != 0) goto L61
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r10
            android.app.PendingIntent r4 = a(r4, r5, r6, r7, r8, r9)
            if (r4 == 0) goto L61
            r12.addAction(r3, r11, r4)
        L61:
            int r10 = r10 + 1
            goto L32
        L64:
            return
        L65:
            java.lang.String r2 = "notification_style_button_left_name"
            java.lang.Object r4 = r1.get(r2)
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L8a
            r10 = 1
            r5 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            android.app.PendingIntent r4 = a(r5, r6, r7, r8, r9, r10)
            if (r4 == 0) goto L8a
            java.lang.Object r2 = r1.get(r2)
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r12.addAction(r3, r2, r4)
        L8a:
            java.lang.String r2 = "notification_style_button_mid_name"
            java.lang.Object r4 = r1.get(r2)
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Laf
            r10 = 2
            r5 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            android.app.PendingIntent r4 = a(r5, r6, r7, r8, r9, r10)
            if (r4 == 0) goto Laf
            java.lang.Object r2 = r1.get(r2)
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r12.addAction(r3, r2, r4)
        Laf:
            java.lang.String r2 = "notification_style_button_right_name"
            java.lang.Object r4 = r1.get(r2)
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Ld4
            r10 = 3
            r5 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            android.app.PendingIntent r4 = a(r5, r6, r7, r8, r9, r10)
            if (r4 == 0) goto Ld4
            java.lang.Object r1 = r1.get(r2)
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            r12.addAction(r3, r1, r4)
        Ld4:
            return
    }

    private static boolean a(android.content.Context r2, com.xiaomi.push.if r3, java.lang.String r4) {
            r0 = 0
            if (r3 == 0) goto L3c
            com.xiaomi.push.hw r1 = r3.a()
            if (r1 == 0) goto L3c
            com.xiaomi.push.hw r1 = r3.a()
            java.util.Map r1 = r1.a()
            if (r1 == 0) goto L3c
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L1a
            goto L3c
        L1a:
            com.xiaomi.push.hw r3 = r3.a()
            java.util.Map r3 = r3.a()
            java.lang.String r1 = "use_clicked_activity"
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            boolean r3 = java.lang.Boolean.parseBoolean(r3)
            if (r3 == 0) goto L3b
            android.content.ComponentName r3 = a(r4)
            boolean r2 = com.xiaomi.push.service.l.a(r2, r3)
            if (r2 == 0) goto L3b
            r0 = 1
        L3b:
            return r0
        L3c:
            java.lang.String r2 = "should clicked activity params are null."
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return r0
    }

    public static boolean a(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "activity"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3
            java.util.List r3 = r3.getRunningAppProcesses()
            if (r3 == 0) goto L32
            java.util.Iterator r3 = r3.iterator()
        L12:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L32
            java.lang.Object r0 = r3.next()
            android.app.ActivityManager$RunningAppProcessInfo r0 = (android.app.ActivityManager.RunningAppProcessInfo) r0
            int r1 = r0.importance
            r2 = 100
            if (r1 != r2) goto L12
            java.lang.String[] r0 = r0.pkgList
            java.util.List r0 = java.util.Arrays.asList(r0)
            boolean r0 = r0.contains(r4)
            if (r0 == 0) goto L12
            r3 = 1
            return r3
        L32:
            r3 = 0
            return r3
    }

    public static boolean a(android.content.Context r2, java.lang.String r3, boolean r4) {
            boolean r0 = com.xiaomi.push.m.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            if (r4 != 0) goto L11
            boolean r2 = a(r2, r3)
            if (r2 == 0) goto L11
            r1 = 1
        L11:
            return r1
    }

    private static boolean a(com.xiaomi.push.hw r3) {
            r0 = 0
            if (r3 == 0) goto L22
            java.lang.String r3 = r3.a()
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L22
            int r1 = r3.length()
            r2 = 22
            if (r1 != r2) goto L22
            char r3 = r3.charAt(r0)
            java.lang.String r1 = "satuigmo"
            int r3 = r1.indexOf(r3)
            if (r3 < 0) goto L22
            r0 = 1
        L22:
            return r0
    }

    public static boolean a(com.xiaomi.push.if r1) {
            com.xiaomi.push.hw r1 = r1.a()
            boolean r0 = a(r1)
            if (r0 == 0) goto L12
            boolean r1 = r1.l()
            if (r1 == 0) goto L12
            r1 = 1
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    private static boolean a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lf
            boolean r1 = r2.contains(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            goto L10
        Lf:
            r1 = 1
        L10:
            return r1
    }

    public static boolean a(java.util.Map<java.lang.String, java.lang.String> r2) {
            if (r2 == 0) goto L18
            java.lang.String r0 = "notify_foreground"
            boolean r1 = r2.containsKey(r0)
            if (r1 != 0) goto Lb
            goto L18
        Lb:
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r0 = "1"
            boolean r2 = r0.equals(r2)
            return r2
        L18:
            r2 = 1
            return r2
    }

    private static java.lang.String[] a(android.content.Context r3, com.xiaomi.push.hw r4) {
            java.lang.String r0 = r4.c()
            java.lang.String r1 = r4.d()
            java.util.Map r4 = r4.a()
            if (r4 == 0) goto L73
            android.content.res.Resources r2 = r3.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.widthPixels
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            float r3 = r3.density
            float r2 = (float) r2
            float r2 = r2 / r3
            r3 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r3
            java.lang.Float r3 = java.lang.Float.valueOf(r2)
            int r3 = r3.intValue()
            r2 = 320(0x140, float:4.48E-43)
            if (r3 > r2) goto L51
            java.lang.String r3 = "title_short"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L42
            r0 = r3
        L42:
            java.lang.String r3 = "description_short"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L73
            goto L72
        L51:
            r2 = 360(0x168, float:5.04E-43)
            if (r3 <= r2) goto L73
            java.lang.String r3 = "title_long"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L64
            r0 = r3
        L64:
            java.lang.String r3 = "description_long"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L73
        L72:
            r1 = r3
        L73:
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]
            r4 = 0
            r3[r4] = r0
            r4 = 1
            r3[r4] = r1
            return r3
    }

    private static int b(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "mipush_notification"
            int r0 = a(r2, r3, r0)
            java.lang.String r1 = "mipush_small_notification"
            int r3 = a(r2, r3, r1)
            if (r0 <= 0) goto Lf
            goto L19
        Lf:
            if (r3 <= 0) goto L13
            r0 = r3
            goto L19
        L13:
            android.content.pm.ApplicationInfo r3 = r2.getApplicationInfo()
            int r0 = r3.icon
        L19:
            if (r0 != 0) goto L21
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            int r0 = r2.logo
        L21:
            return r0
    }

    private static int b(java.util.Map<java.lang.String, java.lang.String> r3) {
            r0 = 3
            if (r3 == 0) goto L3f
            java.lang.String r1 = "channel_importance"
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L3f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r1.<init>()     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "importance="
            r1.append(r2)     // Catch: java.lang.Exception -> L2a
            r1.append(r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2a
            com.xiaomi.channel.commonutils.logger.b.c(r1)     // Catch: java.lang.Exception -> L2a
            int r0 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L2a
            goto L3f
        L2a:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parsing channel importance error: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r3)
        L3f:
            return r0
    }

    public static android.content.Intent b(android.content.Context r5, java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7, int r8) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            if (r8 == 0) goto Lb
            android.content.Intent r5 = a(r5, r6, r7, r8)
            return r5
        Lb:
            java.lang.String r8 = "notify_effect"
            boolean r1 = r7.containsKey(r8)
            if (r1 != 0) goto L14
            return r0
        L14:
            java.lang.Object r8 = r7.get(r8)
            java.lang.String r8 = (java.lang.String) r8
            r1 = -1
            java.lang.String r2 = "intent_flag"
            java.lang.Object r2 = r7.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.NumberFormatException -> L2e
            if (r3 != 0) goto L47
            int r1 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L2e
            goto L47
        L2e:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Cause by intent_flag: "
            r3.append(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r2)
        L47:
            java.lang.String r2 = com.xiaomi.push.service.bk.a
            boolean r2 = r2.equals(r8)
            java.lang.String r3 = "Cause: "
            if (r2 == 0) goto L74
            android.content.pm.PackageManager r7 = r5.getPackageManager()     // Catch: java.lang.Exception -> L5b
            android.content.Intent r6 = r7.getLaunchIntentForPackage(r6)     // Catch: java.lang.Exception -> L5b
            goto L14c
        L5b:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r6)
            goto L14b
        L74:
            java.lang.String r2 = com.xiaomi.push.service.bk.b
            boolean r2 = r2.equals(r8)
            if (r2 == 0) goto Ld0
            java.lang.String r2 = "intent_uri"
            boolean r4 = r7.containsKey(r2)
            if (r4 == 0) goto Lb2
            java.lang.Object r7 = r7.get(r2)
            java.lang.String r7 = (java.lang.String) r7
            if (r7 == 0) goto L14b
            r2 = 1
            android.content.Intent r7 = android.content.Intent.parseUri(r7, r2)     // Catch: java.net.URISyntaxException -> L97
            r7.setPackage(r6)     // Catch: java.net.URISyntaxException -> L95
            goto Laf
        L95:
            r6 = move-exception
            goto L99
        L97:
            r6 = move-exception
            r7 = r0
        L99:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r6 = r6.getMessage()
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r6)
        Laf:
            r6 = r7
            goto L14c
        Lb2:
            java.lang.String r2 = "class_name"
            boolean r4 = r7.containsKey(r2)
            if (r4 == 0) goto L14b
            java.lang.Object r7 = r7.get(r2)
            java.lang.String r7 = (java.lang.String) r7
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            android.content.ComponentName r4 = new android.content.ComponentName
            r4.<init>(r6, r7)
            r2.setComponent(r4)
        Lcd:
            r6 = r2
            goto L14c
        Ld0:
            java.lang.String r2 = com.xiaomi.push.service.bk.c
            boolean r2 = r2.equals(r8)
            if (r2 == 0) goto L14b
            java.lang.String r2 = "web_uri"
            java.lang.Object r7 = r7.get(r2)
            java.lang.String r7 = (java.lang.String) r7
            if (r7 == 0) goto L14b
            java.lang.String r7 = r7.trim()
            java.lang.String r2 = "http://"
            boolean r4 = r7.startsWith(r2)
            if (r4 != 0) goto L105
            java.lang.String r4 = "https://"
            boolean r4 = r7.startsWith(r4)
            if (r4 != 0) goto L105
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            r4.append(r7)
            java.lang.String r7 = r4.toString()
        L105:
            java.net.URL r2 = new java.net.URL     // Catch: java.net.MalformedURLException -> L132
            r2.<init>(r7)     // Catch: java.net.MalformedURLException -> L132
            java.lang.String r2 = r2.getProtocol()     // Catch: java.net.MalformedURLException -> L132
            java.lang.String r4 = "http"
            boolean r4 = r4.equals(r2)     // Catch: java.net.MalformedURLException -> L132
            if (r4 != 0) goto L11e
            java.lang.String r4 = "https"
            boolean r2 = r4.equals(r2)     // Catch: java.net.MalformedURLException -> L132
            if (r2 == 0) goto L14b
        L11e:
            android.content.Intent r2 = new android.content.Intent     // Catch: java.net.MalformedURLException -> L132
            java.lang.String r4 = "android.intent.action.VIEW"
            r2.<init>(r4)     // Catch: java.net.MalformedURLException -> L132
            android.net.Uri r7 = android.net.Uri.parse(r7)     // Catch: java.net.MalformedURLException -> L130
            r2.setData(r7)     // Catch: java.net.MalformedURLException -> L130
            com.xiaomi.push.service.ay.a(r5, r6, r2)     // Catch: java.net.MalformedURLException -> L130
            goto Lcd
        L130:
            r6 = move-exception
            goto L134
        L132:
            r6 = move-exception
            r2 = r0
        L134:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r6)
            goto Lcd
        L14b:
            r6 = r0
        L14c:
            if (r6 == 0) goto L1a6
            if (r1 < 0) goto L153
            r6.setFlags(r1)
        L153:
            r7 = 268435456(0x10000000, float:2.524355E-29)
            r6.addFlags(r7)
            android.content.pm.PackageManager r7 = r5.getPackageManager()     // Catch: java.lang.Exception -> L18f
            r1 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r7 = r7.resolveActivity(r6, r1)     // Catch: java.lang.Exception -> L18f
            if (r7 == 0) goto L165
            return r6
        L165:
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L18f
            r1 = 30
            if (r7 < r1) goto L17a
            boolean r5 = com.xiaomi.push.m.a(r5)     // Catch: java.lang.Exception -> L18f
            if (r5 != 0) goto L17a
            java.lang.String r5 = com.xiaomi.push.service.bk.c     // Catch: java.lang.Exception -> L18f
            boolean r5 = r5.equals(r8)     // Catch: java.lang.Exception -> L18f
            if (r5 == 0) goto L17a
            return r6
        L17a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L18f
            r5.<init>()     // Catch: java.lang.Exception -> L18f
            java.lang.String r7 = "not resolve activity:"
            r5.append(r7)     // Catch: java.lang.Exception -> L18f
            r5.append(r6)     // Catch: java.lang.Exception -> L18f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L18f
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Exception -> L18f
            goto L1a6
        L18f:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r5)
        L1a6:
            return r0
    }

    public static java.lang.String b(com.xiaomi.push.if r1) {
            boolean r0 = a(r1)
            if (r0 == 0) goto L9
            java.lang.String r1 = "E100002"
            return r1
        L9:
            boolean r0 = c(r1)
            if (r0 == 0) goto L12
            java.lang.String r1 = "E100000"
            return r1
        L12:
            boolean r0 = b(r1)
            if (r0 == 0) goto L1b
            java.lang.String r1 = "E100001"
            return r1
        L1b:
            boolean r1 = d(r1)
            if (r1 == 0) goto L24
            java.lang.String r1 = "E100003"
            return r1
        L24:
            java.lang.String r1 = ""
            return r1
    }

    public static void b(android.content.Context r0, java.lang.String r1) {
            boolean r0 = com.xiaomi.push.m.a(r0)
            if (r0 == 0) goto L16
            com.xiaomi.push.service.as r0 = com.xiaomi.push.service.al.a
            if (r0 == 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L11
            goto L16
        L11:
            com.xiaomi.push.service.as r0 = com.xiaomi.push.service.al.a
            r0.a(r1)
        L16:
            return
    }

    static void b(android.content.Context r2, java.lang.String r3, int r4) {
            java.lang.String r0 = "pref_notify_type"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.putInt(r3, r4)
            r2.commit()
            return
    }

    static boolean b(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "pref_notify_type"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            boolean r2 = r2.contains(r3)
            return r2
    }

    public static boolean b(com.xiaomi.push.if r3) {
            com.xiaomi.push.hw r0 = r3.a()
            boolean r1 = a(r0)
            r2 = 1
            if (r1 == 0) goto L16
            int r0 = r0.b
            if (r0 != r2) goto L16
            boolean r3 = a(r3)
            if (r3 != 0) goto L16
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    private static boolean b(java.util.Map<java.lang.String, java.lang.String> r1) {
            if (r1 != 0) goto L9
            java.lang.String r1 = "meta extra is null"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
            return r1
        L9:
            java.lang.String r0 = "notification_style_type"
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r0 = "6"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static int c(java.util.Map<java.lang.String, java.lang.String> r3) {
            r0 = 0
            if (r3 == 0) goto L3f
            java.lang.String r1 = "notification_priority"
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L3f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r1.<init>()     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "priority="
            r1.append(r2)     // Catch: java.lang.Exception -> L2a
            r1.append(r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2a
            com.xiaomi.channel.commonutils.logger.b.c(r1)     // Catch: java.lang.Exception -> L2a
            int r0 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L2a
            goto L3f
        L2a:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parsing notification priority error: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r3)
        L3f:
            return r0
    }

    static void c(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "pref_notify_type"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.remove(r3)
            r2.commit()
            return
    }

    public static boolean c(com.xiaomi.push.if r2) {
            com.xiaomi.push.hw r0 = r2.a()
            boolean r1 = a(r0)
            if (r1 == 0) goto L16
            int r0 = r0.b
            if (r0 != 0) goto L16
            boolean r2 = a(r2)
            if (r2 != 0) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public static boolean d(com.xiaomi.push.if r1) {
            com.xiaomi.push.hj r1 = r1.a()
            com.xiaomi.push.hj r0 = com.xiaomi.push.hj.a
            if (r1 != r0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static boolean e(com.xiaomi.push.if r1) {
            boolean r0 = a(r1)
            if (r0 != 0) goto L15
            boolean r0 = c(r1)
            if (r0 != 0) goto L15
            boolean r1 = b(r1)
            if (r1 == 0) goto L13
            goto L15
        L13:
            r1 = 0
            goto L16
        L15:
            r1 = 1
        L16:
            return r1
    }
}
