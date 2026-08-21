package com.meizu.cloud.pushsdk.handler.a;

public abstract class a<T> implements com.meizu.cloud.pushsdk.handler.c {
    private com.meizu.cloud.pushsdk.handler.a a;
    private android.content.Context b;
    private android.util.SparseArray<java.lang.String> c;

    protected a(android.content.Context r2, com.meizu.cloud.pushsdk.handler.a r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto Lc6
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            r1.a = r3
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>()
            r1.c = r2
            r3 = 2
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_SERVICE_V2"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 4
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_SERVICE_V3"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 16
            java.lang.String r0 = "MESSAGE_TYPE_REGISTER"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 32
            java.lang.String r0 = "MESSAGE_TYPE_UNREGISTER"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 8
            java.lang.String r0 = "MESSAGE_TYPE_THROUGH"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 64
            java.lang.String r0 = "MESSAGE_TYPE_NOTIFICATION_CLICK"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 128(0x80, float:1.8E-43)
            java.lang.String r0 = "MESSAGE_TYPE_NOTIFICATION_DELETE"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 256(0x100, float:3.59E-43)
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_SWITCH_STATUS"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 512(0x200, float:7.17E-43)
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_REGISTER_STATUS"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 2048(0x800, float:2.87E-42)
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_SUBTAGS_STATUS"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 1024(0x400, float:1.435E-42)
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_UNREGISTER_STATUS"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 4096(0x1000, float:5.74E-42)
            java.lang.String r0 = "MESSAGE_TYPE_PUSH_SUBALIAS_STATUS"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 8192(0x2000, float:1.148E-41)
            java.lang.String r0 = "MESSAGE_TYPE_SCHEDULE_NOTIFICATION"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 16384(0x4000, float:2.2959E-41)
            java.lang.String r0 = "MESSAGE_TYPE_RECEIVE_NOTIFY_MESSAGE"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 32768(0x8000, float:4.5918E-41)
            java.lang.String r0 = "MESSAGE_TYPE_NOTIFICATION_STATE"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 65536(0x10000, float:9.1835E-41)
            java.lang.String r0 = "MESSAGE_TYPE_UPLOAD_FILE_LOG"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 131072(0x20000, float:1.83671E-40)
            java.lang.String r0 = "MESSAGE_TYPE_NOTIFICATION_ARRIVED"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 262144(0x40000, float:3.67342E-40)
            java.lang.String r0 = "MESSAGE_TYPE_NOTIFICATION_WITHDRAW"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 524288(0x80000, float:7.34684E-40)
            java.lang.String r0 = "MESSAGE_TYPE_BRIGHT_NOTIFICATION"
            r2.put(r3, r0)
            android.util.SparseArray<java.lang.String> r2 = r1.c
            r3 = 1048576(0x100000, float:1.469368E-39)
            java.lang.String r0 = "MESSAGE_TYPE_NOTIFICATION_CLOSE"
            r2.put(r3, r0)
            return
        Lc6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Context must not be null."
            r2.<init>(r3)
            throw r2
    }

    private java.lang.String a(int r2) {
            r1 = this;
            android.util.SparseArray<java.lang.String> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    private boolean a(java.lang.String r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4, java.lang.String r5) {
            r2 = this;
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r0 = "AbstractMessageHandler"
            r1 = 0
            if (r3 != 0) goto Lf
            java.lang.String r3 = "sa, public key not empty"
        Lb:
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r3)
            return r1
        Lf:
            java.lang.String r3 = "private"
            boolean r3 = r3.equals(r5)
            if (r3 != 0) goto L1a
            java.lang.String r3 = "sa, message not click method"
            goto Lb
        L1a:
            android.content.Context r3 = r2.d()
            java.lang.String r5 = r4.getPackageName()
            boolean r3 = com.meizu.cloud.pushsdk.util.b.l(r3, r5)
            if (r3 != 0) goto L2b
            java.lang.String r3 = "sa, not first request"
            goto Lb
        L2b:
            android.content.Context r3 = r2.d()
            java.lang.String r4 = r4.getPackageName()
            com.meizu.cloud.pushsdk.util.b.c(r3, r4, r1)
            r3 = 1
            return r3
    }

    private boolean b(java.lang.String r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4, java.lang.String r5) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = "AbstractMessageHandler"
            if (r0 == 0) goto Lf
            java.lang.String r3 = "security check fail, public key is null"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)
            r3 = 0
            return r3
        Lf:
            java.lang.String r3 = com.meizu.cloud.pushsdk.util.c.a(r3, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "decrypt sign: "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r5)
            boolean r3 = com.meizu.cloud.pushsdk.handler.a.c.e.a(r3, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "check public key result: "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r4)
            return r3
    }

    private java.lang.String e() {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 2
            if (r1 >= r2) goto L13
            java.lang.String r0 = r3.b()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L10
            goto L13
        L10:
            int r1 = r1 + 1
            goto L2
        L13:
            return r0
    }

    protected com.meizu.cloud.pushsdk.notification.c a(T r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    protected void a(android.content.Context r2, com.meizu.cloud.pushsdk.handler.MessageV3 r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r3.getAdvertisementOption()
            if (r0 == 0) goto L2b
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r3.getAdvertisementOption()
            java.lang.String r0 = r0.getAdPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2b
            com.meizu.cloud.pushsdk.b r2 = com.meizu.cloud.pushsdk.b.a(r2)
            com.meizu.cloud.pushsdk.handler.a.a.a r2 = r2.b()
            if (r2 == 0) goto L2b
            com.meizu.cloud.pushsdk.notification.model.a r3 = com.meizu.cloud.pushsdk.notification.model.a.a(r3)
            if (r3 == 0) goto L2b
            int r3 = r3.a()
            r2.a(r3)
        L2b:
            return
    }

    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r3 = this;
            if (r4 == 0) goto L17
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r4.getAdvertisementOption()
            if (r0 == 0) goto L17
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r4.getAdvertisementOption()
            java.lang.String r0 = r0.getAdPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            return
        L17:
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSetDrawableSmallIcon()
            if (r0 != 0) goto L2d
            com.meizu.cloud.pushsdk.handler.a r0 = r3.c()
            android.content.Context r1 = r3.d()
            com.meizu.cloud.pushsdk.handler.MzPushMessage r4 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r4)
            r0.b(r1, r4)
            goto L89
        L2d:
            android.content.Context r0 = r3.d()
            java.lang.String r1 = r4.getUploadDataPackageName()
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isRunningProcess(r0, r1)
            if (r0 == 0) goto L89
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "send notification arrived message to "
            r0.append(r1)
            java.lang.String r1 = r4.getUploadDataPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Context r1 = r3.b
            java.lang.String r2 = r4.getUploadDataPackageName()
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportTransmitMessageValue(r1, r2)
            if (r1 == 0) goto L70
            java.lang.String r1 = com.meizu.cloud.pushsdk.handler.d.a(r4)
            java.lang.String r2 = "messageValue"
            r0.putExtra(r2, r1)
            goto L75
        L70:
            java.lang.String r1 = "pushMessage"
            r0.putExtra(r1, r4)
        L75:
            java.lang.String r1 = "method"
            java.lang.String r2 = "notification_arrived"
            r0.putExtra(r1, r2)
            android.content.Context r1 = r3.d()
            java.lang.String r4 = r4.getUploadDataPackageName()
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE"
            com.meizu.cloud.pushsdk.util.MzSystemUtils.sendMessageFromBroadcast(r1, r0, r2, r4)
        L89:
            return
    }

    protected abstract void a(T r1, com.meizu.cloud.pushsdk.notification.c r2);

    protected boolean a(int r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            if (r3 != 0) goto Lc
            android.content.Context r0 = r2.d()
            boolean r0 = com.meizu.cloud.pushsdk.util.b.e(r0, r4)
            goto L16
        Lc:
            if (r3 != r0) goto L16
            android.content.Context r0 = r2.d()
            boolean r0 = com.meizu.cloud.pushsdk.util.b.h(r0, r4)
        L16:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            if (r3 != 0) goto L23
            java.lang.String r3 = " canNotificationMessage "
            goto L25
        L23:
            java.lang.String r3 = " canThroughMessage "
        L25:
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r3)
            return r0
    }

    protected final boolean a(com.meizu.cloud.pushsdk.handler.MessageV3 r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.e.a(r8)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            java.lang.String r3 = "AbstractMessageHandler"
            if (r1 == 0) goto L13
            java.lang.String r8 = "message does not contain signature field"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r8)
            return r2
        L13:
            android.content.Context r1 = r7.d()
            java.lang.String r4 = r8.getPackageName()
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.b.k(r1, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "local public key is: "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r4)
            boolean r9 = r7.a(r1, r8, r9)
            r4 = 1
            if (r9 == 0) goto L40
            java.lang.String r8 = "message special approval no check"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r8)
            return r4
        L40:
            boolean r9 = r7.b(r1, r8, r0)
            java.lang.String r1 = "security check passed"
            if (r9 == 0) goto L4c
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r1)
            return r4
        L4c:
            java.lang.String r9 = r7.e()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "network request public key: "
            r5.append(r6)
            r5.append(r9)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r5)
            boolean r0 = r7.b(r9, r8, r0)
            if (r0 == 0) goto L79
            android.content.Context r0 = r7.d()
            java.lang.String r8 = r8.getPackageName()
            com.meizu.cloud.pushsdk.util.b.k(r0, r8, r9)
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r1)
            return r4
        L79:
            java.lang.String r8 = "security check fail"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r8)
            return r2
    }

    protected boolean a(T r1, java.lang.String r2) {
            r0 = this;
            r1 = 1
            return r1
    }

    protected boolean a(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L18
            r0.<init>(r3)     // Catch: java.lang.Exception -> L18
            android.content.Context r3 = r2.d()     // Catch: java.lang.Exception -> L18
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L18
            java.lang.String r1 = "appId"
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Exception -> L18
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> L18
            return r3
        L18:
            java.lang.String r3 = "AbstractMessageHandler"
            java.lang.String r0 = "parse notification error"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            r3 = 0
            return r3
    }

    protected java.lang.String b() {
            r2 = this;
            java.lang.String r0 = "https://api-push.meizu.com/garcia/api/server/getPublicKey"
            com.meizu.cloud.pushsdk.c.a.b$b r0 = com.meizu.cloud.pushsdk.c.a.a(r0)
            com.meizu.cloud.pushsdk.c.a.b r0 = r0.a()
            com.meizu.cloud.pushsdk.c.a.c r0 = r0.a()
            com.meizu.cloud.pushsdk.handler.a.c.e$a r1 = new com.meizu.cloud.pushsdk.handler.a.c.e$a
            java.lang.Object r0 = r0.a()
            java.lang.String r0 = (java.lang.String) r0
            r1.<init>(r0)
            java.lang.String r0 = r1.a()
            return r0
    }

    public java.lang.String b(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "pkg"
            java.lang.String r1 = ""
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L25
            r2.<init>(r4)     // Catch: java.lang.Exception -> L25
            java.lang.String r4 = "launcher"
            org.json.JSONObject r4 = r2.getJSONObject(r4)     // Catch: java.lang.Exception -> L25
            boolean r2 = r4.has(r0)     // Catch: java.lang.Exception -> L25
            if (r2 == 0) goto L2c
            java.lang.String r2 = r4.getString(r0)     // Catch: java.lang.Exception -> L25
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L25
            if (r2 != 0) goto L2c
            java.lang.String r4 = r4.getString(r0)     // Catch: java.lang.Exception -> L25
            r1 = r4
            goto L2c
        L25:
            java.lang.String r4 = "AbstractMessageHandler"
            java.lang.String r0 = "parse desk top json error"
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)
        L2c:
            return r1
    }

    protected void b(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSetDrawableSmallIcon()
            if (r0 != 0) goto La
            r4.c(r5)
            goto L6d
        La:
            com.meizu.cloud.pushsdk.notification.model.a r0 = com.meizu.cloud.pushsdk.notification.model.a.a(r5)
            if (r0 == 0) goto L6d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "delete notifyId "
            r1.append(r2)
            int r2 = r0.a()
            r1.append(r2)
            java.lang.String r2 = " notifyKey "
            r1.append(r2)
            java.lang.String r2 = r0.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r1)
            java.lang.String r1 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L54
            android.content.Context r1 = r4.d()
            com.meizu.cloud.pushsdk.platform.a.b r1 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r5 = r5.getUploadDataPackageName()
            java.lang.String r0 = r0.b()
            r1.a(r5, r0)
            goto L6d
        L54:
            android.content.Context r1 = r4.d()
            com.meizu.cloud.pushsdk.platform.a.b r1 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r5 = r5.getUploadDataPackageName()
            r2 = 1
            int[] r2 = new int[r2]
            r3 = 0
            int r0 = r0.a()
            r2[r3] = r0
            r1.a(r5, r2)
        L6d:
            return
    }

    protected void b(T r1) {
            r0 = this;
            return
    }

    @Override
    public boolean b(android.content.Intent r8) {
            r7 = this;
            boolean r0 = r7.a(r8)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "current message Type "
            r0.append(r2)
            int r2 = r7.a()
            java.lang.String r2 = r7.a(r2)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            java.lang.Object r0 = r7.c(r8)
            java.lang.String r8 = r7.k(r8)
            boolean r8 = r7.a(r0, r8)
            if (r8 != 0) goto L3a
            java.lang.String r8 = "invalid push message"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r8)
            return r1
        L3a:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "current Handler message "
            r8.append(r3)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r7.b(r0)
            int r8 = r7.d(r0)
            r3 = 1
            if (r8 == 0) goto L89
            if (r8 == r3) goto L83
            r4 = 2
            if (r8 == r4) goto L80
            r4 = 3
            if (r8 == r4) goto L74
            r4 = 4
            if (r8 == r4) goto L6b
            r3 = 5
            if (r8 == r3) goto L68
        L66:
            r3 = r1
            goto L8f
        L68:
            java.lang.String r8 = "ad cannot show message"
            goto L85
        L6b:
            java.lang.String r8 = "bright notification"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r7.f(r0)
            goto L7c
        L74:
            java.lang.String r8 = "schedule notification"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r7.e(r0)
        L7c:
            r6 = r3
            r3 = r1
            r1 = r6
            goto L8f
        L80:
            java.lang.String r8 = "notification on time ,show message"
            goto L8b
        L83:
            java.lang.String r8 = "expire notification, don't show message"
        L85:
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            goto L66
        L89:
            java.lang.String r8 = "schedule send message off, send message directly"
        L8b:
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r1 = r3
        L8f:
            boolean r8 = r7.g(r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "can send message "
            r4.append(r5)
            r4.append(r8)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r4)
            if (r1 == 0) goto Lbc
            if (r3 == 0) goto Lbc
            if (r8 == 0) goto Lbc
            com.meizu.cloud.pushsdk.notification.c r8 = r7.a(r0)
            r7.a(r0, r8)
            r7.c(r0)
            java.lang.String r8 = "send message end "
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
        Lbc:
            return r1
    }

    protected com.meizu.cloud.pushsdk.handler.a c() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a r0 = r1.a
            return r0
    }

    protected abstract T c(android.content.Intent r1);

    protected void c(com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r3 = this;
            com.meizu.cloud.pushsdk.notification.model.a r0 = com.meizu.cloud.pushsdk.notification.model.a.a(r4)
            if (r0 == 0) goto L55
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "delete notifyKey "
            r1.append(r2)
            java.lang.String r2 = r0.b()
            r1.append(r2)
            java.lang.String r2 = " notifyId "
            r1.append(r2)
            int r2 = r0.a()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r1)
            java.lang.String r1 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L46
            android.content.Context r1 = r3.d()
            java.lang.String r4 = r4.getUploadDataPackageName()
            java.lang.String r0 = r0.b()
            com.meizu.cloud.pushsdk.notification.c.b.a(r1, r4, r0)
            goto L55
        L46:
            android.content.Context r1 = r3.d()
            java.lang.String r4 = r4.getUploadDataPackageName()
            int r0 = r0.a()
            com.meizu.cloud.pushsdk.notification.c.b.c(r1, r4, r0)
        L55:
            return
    }

    protected void c(T r1) {
            r0 = this;
            return
    }

    protected int d(T r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    protected android.content.Context d() {
            r1 = this;
            android.content.Context r0 = r1.b
            return r0
    }

    protected java.lang.String d(android.content.Intent r3) {
            r2 = this;
            if (r3 == 0) goto L9
            java.lang.String r0 = "statistics_imei_key"
            java.lang.String r3 = r3.getStringExtra(r0)
            goto La
        L9:
            r3 = 0
        La:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2e
            android.content.Context r3 = r2.d()
            java.lang.String r3 = com.meizu.cloud.pushsdk.b.c.a(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "force get deviceId "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
        L2e:
            return r3
    }

    protected java.lang.String e(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "extra_app_push_task_Id"
            java.lang.String r2 = r2.getStringExtra(r0)
            return r2
    }

    protected void e(T r1) {
            r0 = this;
            return
    }

    protected java.lang.String f(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "extra_app_push_seq_Id"
            java.lang.String r2 = r2.getStringExtra(r0)
            return r2
    }

    protected void f(T r1) {
            r0 = this;
            return
    }

    protected java.lang.String g(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "extra_app_push_service_default_package_name"
            java.lang.String r2 = r2.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L14
            android.content.Context r2 = r1.d()
            java.lang.String r2 = r2.getPackageName()
        L14:
            return r2
    }

    protected boolean g(T r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    protected java.lang.String h(android.content.Intent r5) {
            r4 = this;
            java.lang.String r0 = "extra_app_push_task_timestamp"
            java.lang.String r5 = r5.getStringExtra(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "receive push timestamp from pushservice "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L2d
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            java.lang.String r5 = java.lang.String.valueOf(r0)
        L2d:
            return r5
    }

    protected boolean i(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "mz_push_white_list"
            r1 = 0
            boolean r3 = r3.getBooleanExtra(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "receive push whiteList from pushservice "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            return r3
    }

    protected long j(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "mz_push_delayed_report_millis"
            r1 = 0
            long r0 = r4.getLongExtra(r0, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "receive push delayedReportMillis from pushservice "
            r4.append(r2)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r4)
            return r0
    }

    protected java.lang.String k(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "method"
            java.lang.String r2 = r2.getStringExtra(r0)
            return r2
    }
}
