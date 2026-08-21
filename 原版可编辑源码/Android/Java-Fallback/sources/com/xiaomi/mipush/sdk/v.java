package com.xiaomi.mipush.sdk;

public class v {

    public class a extends java.lang.RuntimeException {
        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public class b {
        public java.lang.String a;
        public boolean a;
        public java.lang.String b;
        public boolean b;

        public b(java.lang.String r1, boolean r2, boolean r3, java.lang.String r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                r0.b = r3
                r0.b = r4
                return
        }
    }

    private static android.content.pm.ActivityInfo a(android.content.pm.PackageManager r2, android.content.Intent r3, java.lang.Class<?> r4) {
            r0 = 16384(0x4000, float:2.2959E-41)
            java.util.List r2 = r2.queryBroadcastReceivers(r3, r0)
            java.util.Iterator r2 = r2.iterator()
        La:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L27
            java.lang.Object r3 = r2.next()
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
            android.content.pm.ActivityInfo r3 = r3.activityInfo
            if (r3 == 0) goto La
            java.lang.String r0 = r4.getCanonicalName()
            java.lang.String r1 = r3.name
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto La
            return r3
        L27:
            r2 = 0
            return r2
    }

    public static void a(android.content.Context r2) {
            java.lang.Thread r0 = new java.lang.Thread
            com.xiaomi.mipush.sdk.w r1 = new com.xiaomi.mipush.sdk.w
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
            return
    }

    static void a(android.content.Context r0, android.content.pm.PackageInfo r1) {
            d(r0, r1)
            return
    }

    private static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            android.content.pm.PackageManager r0 = r3.getPackageManager()
            java.lang.String r3 = r3.getPackageName()
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r4)
            r1.setPackage(r3)
            r3 = 16384(0x4000, float:2.2959E-41)
            java.util.List r3 = r0.queryBroadcastReceivers(r1, r3)
            java.util.Iterator r3 = r3.iterator()
            r4 = 0
            r0 = r4
        L1c:
            boolean r1 = r3.hasNext()
            r2 = 1
            if (r1 == 0) goto L42
            java.lang.Object r0 = r3.next()
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ActivityInfo r0 = r0.activityInfo
            if (r0 == 0) goto L3f
            java.lang.String r1 = r0.name
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3f
            java.lang.String r0 = r0.name
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L3f
            r0 = r2
            goto L40
        L3f:
            r0 = r4
        L40:
            if (r0 == 0) goto L1c
        L42:
            if (r0 == 0) goto L45
            return
        L45:
            com.xiaomi.mipush.sdk.v$a r3 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            r0[r4] = r5
            java.lang.String r4 = "<receiver android:name=\"%1$s\" .../> is missing or disabled in AndroidManifest."
            java.lang.String r4 = java.lang.String.format(r4, r0)
            r3.<init>(r4)
            throw r3
    }

    private static void a(android.content.pm.ActivityInfo r5, java.lang.Boolean[] r6) {
            r0 = 0
            r1 = r6[r0]
            boolean r1 = r1.booleanValue()
            boolean r2 = r5.enabled
            r3 = 2
            r4 = 1
            if (r1 != r2) goto L2e
            r1 = r6[r4]
            boolean r1 = r1.booleanValue()
            boolean r2 = r5.exported
            if (r1 != r2) goto L18
            return
        L18:
            com.xiaomi.mipush.sdk.v$a r1 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r2 = new java.lang.Object[r3]
            java.lang.String r5 = r5.name
            r2[r0] = r5
            r5 = r6[r4]
            r2[r4] = r5
            java.lang.String r5 = "<receiver android:name=\"%1$s\" .../> in AndroidManifest had the wrong exported attribute, which should be android:exported=%2$b."
            java.lang.String r5 = java.lang.String.format(r5, r2)
            r1.<init>(r5)
            throw r1
        L2e:
            com.xiaomi.mipush.sdk.v$a r1 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r2 = new java.lang.Object[r3]
            java.lang.String r5 = r5.name
            r2[r0] = r5
            r5 = r6[r0]
            r2[r4] = r5
            java.lang.String r5 = "<receiver android:name=\"%1$s\" .../> in AndroidManifest had the wrong enabled attribute, which should be android:enabled=%2$b."
            java.lang.String r5 = java.lang.String.format(r5, r2)
            r1.<init>(r5)
            throw r1
    }

    private static boolean a(android.content.pm.PackageInfo r4, java.lang.String[] r5) {
            android.content.pm.ServiceInfo[] r4 = r4.services
            int r0 = r4.length
            r1 = 0
            r2 = r1
        L5:
            if (r2 >= r0) goto L16
            r3 = r4[r2]
            java.lang.String r3 = r3.name
            boolean r3 = a(r5, r3)
            if (r3 == 0) goto L13
            r4 = 1
            return r4
        L13:
            int r2 = r2 + 1
            goto L5
        L16:
            return r1
    }

    private static boolean a(java.lang.String[] r4, java.lang.String r5) {
            r0 = 0
            if (r4 == 0) goto L17
            if (r5 != 0) goto L6
            goto L17
        L6:
            int r1 = r4.length
            r2 = r0
        L8:
            if (r2 >= r1) goto L17
            r3 = r4[r2]
            boolean r3 = android.text.TextUtils.equals(r3, r5)
            if (r3 == 0) goto L14
            r4 = 1
            return r4
        L14:
            int r2 = r2 + 1
            goto L8
        L17:
            return r0
    }

    static void b(android.content.Context r0) {
            c(r0)
            return
    }

    static void b(android.content.Context r0, android.content.pm.PackageInfo r1) {
            c(r0, r1)
            return
    }

    private static void c(android.content.Context r8) {
            java.lang.String r0 = "com.xiaomi.push.service.receivers.PingReceiver"
            android.content.pm.PackageManager r1 = r8.getPackageManager()
            java.lang.String r2 = r8.getPackageName()
            android.content.Intent r3 = new android.content.Intent
            java.lang.String r4 = com.xiaomi.push.service.bk.p
            r3.<init>(r4)
            r3.setPackage(r2)
            r4 = 1
            r5 = 0
            java.lang.Class r6 = com.xiaomi.push.v.a(r8, r0)     // Catch: java.lang.ClassNotFoundException -> L5d
            android.content.pm.ActivityInfo r3 = a(r1, r3, r6)     // Catch: java.lang.ClassNotFoundException -> L5d
            boolean r6 = com.xiaomi.mipush.sdk.MiPushClient.shouldUseMIUIPush(r8)     // Catch: java.lang.ClassNotFoundException -> L5d
            r7 = 2
            if (r6 != 0) goto L49
            if (r3 == 0) goto L39
            java.lang.Boolean[] r0 = new java.lang.Boolean[r7]     // Catch: java.lang.ClassNotFoundException -> L5d
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.ClassNotFoundException -> L5d
            r0[r5] = r6     // Catch: java.lang.ClassNotFoundException -> L5d
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.ClassNotFoundException -> L5d
            r0[r4] = r6     // Catch: java.lang.ClassNotFoundException -> L5d
            a(r3, r0)     // Catch: java.lang.ClassNotFoundException -> L5d
            goto L61
        L39:
            com.xiaomi.mipush.sdk.v$a r3 = new com.xiaomi.mipush.sdk.v$a     // Catch: java.lang.ClassNotFoundException -> L5d
            java.lang.String r6 = "<receiver android:name=\"%1$s\" .../> is missing or disabled in AndroidManifest."
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.ClassNotFoundException -> L5d
            r7[r5] = r0     // Catch: java.lang.ClassNotFoundException -> L5d
            java.lang.String r0 = java.lang.String.format(r6, r7)     // Catch: java.lang.ClassNotFoundException -> L5d
            r3.<init>(r0)     // Catch: java.lang.ClassNotFoundException -> L5d
            throw r3     // Catch: java.lang.ClassNotFoundException -> L5d
        L49:
            if (r3 == 0) goto L61
            java.lang.Boolean[] r0 = new java.lang.Boolean[r7]     // Catch: java.lang.ClassNotFoundException -> L5d
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.ClassNotFoundException -> L5d
            r0[r5] = r6     // Catch: java.lang.ClassNotFoundException -> L5d
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.ClassNotFoundException -> L5d
            r0[r4] = r6     // Catch: java.lang.ClassNotFoundException -> L5d
            a(r3, r0)     // Catch: java.lang.ClassNotFoundException -> L5d
            goto L61
        L5d:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L61:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r3 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r0.<init>(r3)
            r0.setPackage(r2)
            r2 = 16384(0x4000, float:2.2959E-41)
            java.util.List r0 = r1.queryBroadcastReceivers(r0, r2)
            java.util.Iterator r0 = r0.iterator()
            r1 = r5
        L76:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto Laa
            java.lang.Object r2 = r0.next()
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2
            android.content.pm.ActivityInfo r2 = r2.activityInfo
            if (r2 == 0) goto La7
            java.lang.String r3 = r2.name     // Catch: java.lang.ClassNotFoundException -> La2
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.ClassNotFoundException -> La2
            if (r3 != 0) goto La7
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageReceiver> r3 = com.xiaomi.mipush.sdk.PushMessageReceiver.class
            java.lang.String r6 = r2.name     // Catch: java.lang.ClassNotFoundException -> La2
            java.lang.Class r6 = com.xiaomi.push.v.a(r8, r6)     // Catch: java.lang.ClassNotFoundException -> La2
            boolean r3 = r3.isAssignableFrom(r6)     // Catch: java.lang.ClassNotFoundException -> La2
            if (r3 == 0) goto La7
            boolean r1 = r2.enabled     // Catch: java.lang.ClassNotFoundException -> La2
            if (r1 == 0) goto La7
            r1 = r4
            goto La8
        La2:
            r2 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            goto L76
        La7:
            r1 = r5
        La8:
            if (r1 == 0) goto L76
        Laa:
            if (r1 == 0) goto Lce
            boolean r0 = com.xiaomi.mipush.sdk.MiPushClient.getOpenHmsPush(r8)
            if (r0 == 0) goto Lc0
            java.lang.String r0 = "com.huawei.android.push.intent.RECEIVE"
            java.lang.String r1 = "com.xiaomi.assemble.control.HmsPushReceiver"
            a(r8, r0, r1)
            java.lang.String r0 = "com.huawei.intent.action.PUSH"
            java.lang.String r1 = "com.huawei.hms.support.api.push.PushEventReceiver"
            a(r8, r0, r1)
        Lc0:
            boolean r0 = com.xiaomi.mipush.sdk.MiPushClient.getOpenVIVOPush(r8)
            if (r0 == 0) goto Lcd
            java.lang.String r0 = "com.vivo.pushclient.action.RECEIVE"
            java.lang.String r1 = "com.xiaomi.assemble.control.FTOSPushMessageReceiver"
            a(r8, r0, r1)
        Lcd:
            return
        Lce:
            com.xiaomi.mipush.sdk.v$a r8 = new com.xiaomi.mipush.sdk.v$a
            java.lang.String r0 = "Receiver: none of the subclasses of PushMessageReceiver is enabled or defined."
            r8.<init>(r0)
            throw r8
    }

    private static void c(android.content.Context r7, android.content.pm.PackageInfo r8) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r7 = r7.getPackageName()
            r1.append(r7)
            java.lang.String r7 = ".permission.MIPUSH_RECEIVE"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r1 = 5
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r2 = "android.permission.INTERNET"
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            r4 = 1
            r1[r4] = r2
            r2 = 2
            r1[r2] = r7
            r2 = 3
            java.lang.String r5 = "android.permission.ACCESS_WIFI_STATE"
            r1[r2] = r5
            r2 = 4
            java.lang.String r5 = "android.permission.VIBRATE"
            r1[r2] = r5
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.addAll(r1)
            android.content.pm.PermissionInfo[] r1 = r8.permissions
            if (r1 == 0) goto L54
            android.content.pm.PermissionInfo[] r1 = r8.permissions
            int r2 = r1.length
            r5 = r3
        L43:
            if (r5 >= r2) goto L54
            r6 = r1[r5]
            java.lang.String r6 = r6.name
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L51
            r1 = r4
            goto L55
        L51:
            int r5 = r5 + 1
            goto L43
        L54:
            r1 = r3
        L55:
            if (r1 == 0) goto L9b
            java.lang.String[] r7 = r8.requestedPermissions
            if (r7 == 0) goto L7c
            java.lang.String[] r7 = r8.requestedPermissions
            int r8 = r7.length
            r1 = r3
        L5f:
            if (r1 >= r8) goto L7c
            r2 = r7[r1]
            boolean r5 = android.text.TextUtils.isEmpty(r2)
            if (r5 != 0) goto L79
            boolean r5 = r0.contains(r2)
            if (r5 == 0) goto L79
            r0.remove(r2)
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L79
            goto L7c
        L79:
            int r1 = r1 + 1
            goto L5f
        L7c:
            boolean r7 = r0.isEmpty()
            if (r7 == 0) goto L83
            return
        L83:
            com.xiaomi.mipush.sdk.v$a r7 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r8 = new java.lang.Object[r4]
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            r8[r3] = r0
            java.lang.String r0 = "<uses-permission android:name=\"%1$s\"/> is missing in AndroidManifest."
            java.lang.String r8 = java.lang.String.format(r0, r8)
            r7.<init>(r8)
            throw r7
        L9b:
            com.xiaomi.mipush.sdk.v$a r8 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r0 = new java.lang.Object[r4]
            r0[r3] = r7
            java.lang.String r7 = "<permission android:name=\"%1$s\" .../> is undefined in AndroidManifest."
            java.lang.String r7 = java.lang.String.format(r7, r0)
            r8.<init>(r7)
            throw r8
    }

    private static void d(android.content.Context r13, android.content.pm.PackageInfo r14) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageHandler> r2 = com.xiaomi.mipush.sdk.PushMessageHandler.class
            java.lang.String r2 = r2.getCanonicalName()
            com.xiaomi.mipush.sdk.v$b r3 = new com.xiaomi.mipush.sdk.v$b
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageHandler> r4 = com.xiaomi.mipush.sdk.PushMessageHandler.class
            java.lang.String r4 = r4.getCanonicalName()
            java.lang.String r5 = ""
            r6 = 1
            r3.<init>(r4, r6, r6, r5)
            r1.put(r2, r3)
            java.lang.Class<com.xiaomi.mipush.sdk.MessageHandleService> r2 = com.xiaomi.mipush.sdk.MessageHandleService.class
            java.lang.String r2 = r2.getCanonicalName()
            com.xiaomi.mipush.sdk.v$b r3 = new com.xiaomi.mipush.sdk.v$b
            java.lang.Class<com.xiaomi.mipush.sdk.MessageHandleService> r4 = com.xiaomi.mipush.sdk.MessageHandleService.class
            java.lang.String r4 = r4.getCanonicalName()
            r7 = 0
            r3.<init>(r4, r6, r7, r5)
            r1.put(r2, r3)
            boolean r2 = com.xiaomi.mipush.sdk.MiPushClient.shouldUseMIUIPush(r13)
            java.lang.String r3 = "com.xiaomi.push.service.XMPushService"
            java.lang.String r4 = "com.xiaomi.push.service.XMJobService"
            if (r2 == 0) goto L4a
            java.lang.String[] r2 = new java.lang.String[]{r4, r3}
            boolean r2 = a(r14, r2)
            if (r2 == 0) goto L5c
        L4a:
            com.xiaomi.mipush.sdk.v$b r2 = new com.xiaomi.mipush.sdk.v$b
            java.lang.String r8 = "android.permission.BIND_JOB_SERVICE"
            r2.<init>(r4, r6, r7, r8)
            r1.put(r4, r2)
            com.xiaomi.mipush.sdk.v$b r2 = new com.xiaomi.mipush.sdk.v$b
            r2.<init>(r3, r6, r7, r5)
            r1.put(r3, r2)
        L5c:
            boolean r2 = com.xiaomi.mipush.sdk.MiPushClient.getOpenFCMPush(r13)
            if (r2 == 0) goto L76
            com.xiaomi.mipush.sdk.v$b r2 = new com.xiaomi.mipush.sdk.v$b
            java.lang.String r8 = "com.xiaomi.assemble.control.MiFireBaseInstanceIdService"
            r2.<init>(r8, r6, r7, r5)
            r1.put(r8, r2)
            com.xiaomi.mipush.sdk.v$b r2 = new com.xiaomi.mipush.sdk.v$b
            java.lang.String r8 = "com.xiaomi.assemble.control.MiFirebaseMessagingService"
            r2.<init>(r8, r6, r7, r5)
            r1.put(r8, r2)
        L76:
            boolean r13 = com.xiaomi.mipush.sdk.MiPushClient.getOpenOPPOPush(r13)
            if (r13 == 0) goto L88
            com.xiaomi.mipush.sdk.v$b r13 = new com.xiaomi.mipush.sdk.v$b
            java.lang.String r2 = "com.xiaomi.assemble.control.COSPushMessageService"
            java.lang.String r5 = "com.coloros.mcs.permission.SEND_MCS_MESSAGE"
            r13.<init>(r2, r6, r6, r5)
            r1.put(r2, r13)
        L88:
            android.content.pm.ServiceInfo[] r13 = r14.services
            r2 = 2
            if (r13 == 0) goto L120
            android.content.pm.ServiceInfo[] r13 = r14.services
            int r14 = r13.length
            r5 = r7
        L91:
            if (r5 >= r14) goto L120
            r8 = r13[r5]
            java.lang.String r9 = r8.name
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L11c
            java.lang.String r9 = r8.name
            boolean r9 = r1.containsKey(r9)
            if (r9 == 0) goto L11c
            java.lang.String r9 = r8.name
            java.lang.Object r9 = r1.remove(r9)
            com.xiaomi.mipush.sdk.v$b r9 = (com.xiaomi.mipush.sdk.v.b) r9
            boolean r10 = r9.a
            boolean r11 = r9.b
            java.lang.String r9 = r9.b
            boolean r12 = r8.enabled
            if (r10 != r12) goto L104
            boolean r10 = r8.exported
            if (r11 != r10) goto Lec
            boolean r10 = android.text.TextUtils.isEmpty(r9)
            if (r10 != 0) goto Lde
            java.lang.String r10 = r8.permission
            boolean r10 = android.text.TextUtils.equals(r9, r10)
            if (r10 == 0) goto Lca
            goto Lde
        Lca:
            com.xiaomi.mipush.sdk.v$a r13 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r14 = new java.lang.Object[r2]
            java.lang.String r0 = r8.name
            r14[r7] = r0
            r14[r6] = r9
            java.lang.String r0 = "<service android:name=\"%1$s\" .../> in AndroidManifest had the wrong permission attribute, which should be android:permission=\"%2$s\"."
            java.lang.String r14 = java.lang.String.format(r0, r14)
            r13.<init>(r14)
            throw r13
        Lde:
            java.lang.String r9 = r8.name
            java.lang.String r8 = r8.processName
            r0.put(r9, r8)
            boolean r8 = r1.isEmpty()
            if (r8 == 0) goto L11c
            goto L120
        Lec:
            com.xiaomi.mipush.sdk.v$a r13 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r14 = new java.lang.Object[r2]
            java.lang.String r0 = r8.name
            r14[r7] = r0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r11)
            r14[r6] = r0
            java.lang.String r0 = "<service android:name=\"%1$s\" .../> in AndroidManifest had the wrong exported attribute, which should be android:exported=%2$b."
            java.lang.String r14 = java.lang.String.format(r0, r14)
            r13.<init>(r14)
            throw r13
        L104:
            com.xiaomi.mipush.sdk.v$a r13 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r14 = new java.lang.Object[r2]
            java.lang.String r0 = r8.name
            r14[r7] = r0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r10)
            r14[r6] = r0
            java.lang.String r0 = "<service android:name=\"%1$s\" .../> in AndroidManifest had the wrong enabled attribute, which should be android:enabled=%2$b."
            java.lang.String r14 = java.lang.String.format(r0, r14)
            r13.<init>(r14)
            throw r13
        L11c:
            int r5 = r5 + 1
            goto L91
        L120:
            boolean r13 = r1.isEmpty()
            if (r13 == 0) goto L192
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageHandler> r13 = com.xiaomi.mipush.sdk.PushMessageHandler.class
            java.lang.String r13 = r13.getCanonicalName()
            java.lang.Object r13 = r0.get(r13)
            java.lang.CharSequence r13 = (java.lang.CharSequence) r13
            java.lang.Class<com.xiaomi.mipush.sdk.MessageHandleService> r14 = com.xiaomi.mipush.sdk.MessageHandleService.class
            java.lang.String r14 = r14.getCanonicalName()
            java.lang.Object r14 = r0.get(r14)
            java.lang.CharSequence r14 = (java.lang.CharSequence) r14
            boolean r13 = android.text.TextUtils.equals(r13, r14)
            java.lang.String r14 = "\"%1$s\" and \"%2$s\" must be running in the same process."
            if (r13 == 0) goto L176
            boolean r13 = r0.containsKey(r4)
            if (r13 == 0) goto L175
            boolean r13 = r0.containsKey(r3)
            if (r13 == 0) goto L175
            java.lang.Object r13 = r0.get(r4)
            java.lang.CharSequence r13 = (java.lang.CharSequence) r13
            java.lang.Object r0 = r0.get(r3)
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r13 = android.text.TextUtils.equals(r13, r0)
            if (r13 == 0) goto L165
            goto L175
        L165:
            com.xiaomi.mipush.sdk.v$a r13 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            r0[r7] = r4
            r0[r6] = r3
            java.lang.String r14 = java.lang.String.format(r14, r0)
            r13.<init>(r14)
            throw r13
        L175:
            return
        L176:
            com.xiaomi.mipush.sdk.v$a r13 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageHandler> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.class
            java.lang.String r1 = r1.getCanonicalName()
            r0[r7] = r1
            java.lang.Class<com.xiaomi.mipush.sdk.MessageHandleService> r1 = com.xiaomi.mipush.sdk.MessageHandleService.class
            java.lang.String r1 = r1.getCanonicalName()
            r0[r6] = r1
            java.lang.String r14 = java.lang.String.format(r14, r0)
            r13.<init>(r14)
            throw r13
        L192:
            com.xiaomi.mipush.sdk.v$a r13 = new com.xiaomi.mipush.sdk.v$a
            java.lang.Object[] r14 = new java.lang.Object[r6]
            java.util.Set r0 = r1.keySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            r14[r7] = r0
            java.lang.String r0 = "<service android:name=\"%1$s\" .../> is missing or disabled in AndroidManifest."
            java.lang.String r14 = java.lang.String.format(r0, r14)
            r13.<init>(r14)
            throw r13
    }
}
