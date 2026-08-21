package com.igexin.assist.control.oppo;

public class OppoPushManager implements com.heytap.msp.push.callback.ICallBackResultService, com.igexin.assist.control.AbstractPushManager {
    public static final java.lang.String PLUGIN_VERSION = "1.1.0";
    public static final java.lang.String TAG = "Assist_OP";
    private java.lang.String appKey;
    private java.lang.String appSecret;
    private android.content.Context context;

    public OppoPushManager(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = "OP_"
            java.lang.String r1 = "Assist_OP"
            r6.<init>()
            java.lang.String r2 = ""
            r6.appKey = r2
            r6.appSecret = r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r3.<init>()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "oppo plugin version = 1.1.0, oppo sdk version = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = com.heytap.msp.push.HeytapPushManager.getSDKVersionName()     // Catch: java.lang.Throwable -> L5b
            r3.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L5b
            android.util.Log.d(r1, r3)     // Catch: java.lang.Throwable -> L5b
            android.content.pm.PackageManager r3 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Throwable -> L5b
            r5 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo(r4, r5)     // Catch: java.lang.Throwable -> L5b
            android.os.Bundle r4 = r3.metaData     // Catch: java.lang.Throwable -> L5b
            java.lang.String r5 = "OPPOPUSH_APPKEY"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L5b
            r6.appKey = r4     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r4.replace(r0, r2)     // Catch: java.lang.Throwable -> L5b
            r6.appKey = r4     // Catch: java.lang.Throwable -> L5b
            android.os.Bundle r3 = r3.metaData     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "OPPOPUSH_APPSECRET"
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L5b
            r6.appSecret = r3     // Catch: java.lang.Throwable -> L5b
            java.lang.String r0 = r3.replace(r0, r2)     // Catch: java.lang.Throwable -> L5b
            r6.appSecret = r0     // Catch: java.lang.Throwable -> L5b
            r6.createNotificationChannel(r7)     // Catch: java.lang.Throwable -> L5b
            goto L63
        L5b:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            android.util.Log.d(r1, r7)
        L63:
            return
    }

    public static boolean checkOppoDevice(android.content.Context r2) {
            r0 = 0
            com.heytap.msp.push.HeytapPushManager.init(r2, r0)     // Catch: java.lang.Throwable -> L9
            boolean r2 = com.heytap.msp.push.HeytapPushManager.isSupportPush(r2)     // Catch: java.lang.Throwable -> L9
            return r2
        L9:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r1 = "Assist_OP"
            android.util.Log.d(r1, r2)
            return r0
    }

    private void createNotificationChannel(android.content.Context r11) {
            r10 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L7
            return
        L7:
            java.lang.String r0 = "notification"
            java.lang.Object r11 = r11.getSystemService(r0)
            android.app.NotificationManager r11 = (android.app.NotificationManager) r11
            java.lang.String r0 = "android.app.NotificationChannel"
            java.lang.Class r0 = java.lang.Class.forName(r0)
            r1 = 3
            java.lang.Class[] r2 = new java.lang.Class[r1]
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r4 = 0
            r2[r4] = r3
            java.lang.Class<java.lang.CharSequence> r3 = java.lang.CharSequence.class
            r5 = 1
            r2[r5] = r3
            java.lang.Class r3 = java.lang.Integer.TYPE
            r6 = 2
            r2[r6] = r3
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)
            if (r2 == 0) goto L6c
            java.lang.Class<android.app.NotificationManager> r3 = android.app.NotificationManager.class
            java.lang.Class[] r7 = new java.lang.Class[r5]
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r7[r4] = r8
            java.lang.String r8 = "getNotificationChannel"
            java.lang.reflect.Method r7 = r3.getMethod(r8, r7)
            java.lang.Object[] r8 = new java.lang.Object[r5]
            java.lang.String r9 = "Default"
            r8[r4] = r9
            java.lang.Object r7 = r7.invoke(r11, r8)
            android.os.Parcelable r7 = (android.os.Parcelable) r7
            if (r7 != 0) goto L6c
            java.lang.Object[] r7 = new java.lang.Object[r1]
            r7[r4] = r9
            r7[r5] = r9
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r7[r6] = r1
            java.lang.Object r1 = r2.newInstance(r7)
            android.os.Parcelable r1 = (android.os.Parcelable) r1
            java.lang.Class[] r2 = new java.lang.Class[r5]
            r2[r4] = r0
            java.lang.String r0 = "createNotificationChannel"
            java.lang.reflect.Method r0 = r3.getMethod(r0, r2)
            java.lang.Object[] r2 = new java.lang.Object[r5]
            r2[r4] = r1
            r0.invoke(r11, r2)
        L6c:
            return
    }

    @Override
    public java.lang.String getToken(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = com.heytap.msp.push.HeytapPushManager.getRegisterID()
            return r1
    }

    public boolean isSupport() {
            r5 = this;
            java.lang.String r0 = "Assist_OP"
            android.content.Context r1 = r5.context
            r2 = 0
            if (r1 != 0) goto L8
            return r2
        L8:
            com.heytap.msp.push.HeytapPushManager.init(r1, r2)     // Catch: java.lang.Throwable -> L26
            android.content.Context r1 = r5.context     // Catch: java.lang.Throwable -> L26
            boolean r1 = com.heytap.msp.push.HeytapPushManager.isSupportPush(r1)     // Catch: java.lang.Throwable -> L26
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
            r3.<init>()     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = "is oppo:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L26
            r3.append(r1)     // Catch: java.lang.Throwable -> L26
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L26
            android.util.Log.d(r0, r3)     // Catch: java.lang.Throwable -> L26
            return r1
        L26:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            android.util.Log.d(r0, r1)
            return r2
    }

    @Override
    public void onError(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void onGetNotificationStatus(int r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void onGetPushStatus(int r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void onRegister(int r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "Assist_OP"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r1.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "onToken :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L54
            r1.append(r7)     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = ", code = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L54
            r1.append(r6)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L54
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L54
            android.content.Context r1 = r5.context     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L5c
            if (r6 != 0) goto L5c
            boolean r6 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L54
            if (r6 != 0) goto L5c
            java.lang.String r6 = "InvalidAppKey"
            boolean r6 = r7.equalsIgnoreCase(r6)     // Catch: java.lang.Throwable -> L54
            if (r6 != 0) goto L5c
            com.igexin.assist.MessageBean r6 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L54
            android.content.Context r1 = r5.context     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "token"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r3.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "OP_"
            r3.append(r4)     // Catch: java.lang.Throwable -> L54
            r3.append(r7)     // Catch: java.lang.Throwable -> L54
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L54
            r6.<init>(r1, r2, r7)     // Catch: java.lang.Throwable -> L54
            com.igexin.assist.action.MessageManger r7 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L54
            r7.addMessage(r6)     // Catch: java.lang.Throwable -> L54
            goto L5c
        L54:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            android.util.Log.d(r0, r6)
        L5c:
            return
    }

    @Override
    public void onSetPushTime(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void onUnRegister(int r1) {
            r0 = this;
            return
    }

    @Override
    public void register(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "Assist_OP"
            r3.context = r4     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = r3.appKey     // Catch: java.lang.Throwable -> L5b
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5b
            if (r1 != 0) goto L55
            java.lang.String r1 = r3.appSecret     // Catch: java.lang.Throwable -> L5b
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5b
            if (r1 == 0) goto L15
            goto L55
        L15:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "Register oppo push, pkg = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Throwable -> L5b
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = ", appKey = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = r3.appKey     // Catch: java.lang.Throwable -> L5b
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = ", appSecret = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = r3.appSecret     // Catch: java.lang.Throwable -> L5b
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5b
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L5b
            boolean r1 = r3.isSupport()     // Catch: java.lang.Throwable -> L5b
            if (r1 == 0) goto L4f
            java.lang.String r1 = r3.appKey     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = r3.appSecret     // Catch: java.lang.Throwable -> L5b
            com.heytap.msp.push.HeytapPushManager.register(r4, r1, r2, r3)     // Catch: java.lang.Throwable -> L5b
            goto L63
        L4f:
            java.lang.String r4 = "not support oppo push."
            android.util.Log.d(r0, r4)     // Catch: java.lang.Throwable -> L5b
            goto L63
        L55:
            java.lang.String r4 = "Register oppo push appKey or appSecret is null or empty"
            android.util.Log.d(r0, r4)     // Catch: java.lang.Throwable -> L5b
            return
        L5b:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            android.util.Log.d(r0, r4)
        L63:
            return
    }

    @Override
    public void setSilentTime(android.content.Context r4, int r5, int r6) {
            r3 = this;
            if (r6 != 0) goto L6
            r3.turnOnPush(r4)
            return
        L6:
            int r4 = r5 + r6
            int r4 = r4 % 24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getui setSilentTime"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = ":"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "Assist_OP"
            android.util.Log.d(r0, r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r2 = "oppo push setAcceptTime"
            r6.append(r2)
            r6.append(r4)
            r6.append(r1)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r0, r6)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r0 = 0
            r1 = r0
        L49:
            r2 = 7
            if (r1 >= r2) goto L56
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            r6.add(r2)
            int r1 = r1 + 1
            goto L49
        L56:
            com.heytap.msp.push.HeytapPushManager.setPushTime(r6, r4, r0, r5, r0)
            return
    }

    @Override
    public void turnOffPush(android.content.Context r2) {
            r1 = this;
            com.heytap.msp.push.HeytapPushManager.pausePush()     // Catch: java.lang.Throwable -> L4
            goto Le
        L4:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "Assist_OP"
            android.util.Log.d(r0, r2)
        Le:
            return
    }

    @Override
    public void turnOnPush(android.content.Context r2) {
            r1 = this;
            com.heytap.msp.push.HeytapPushManager.resumePush()     // Catch: java.lang.Throwable -> L4
            goto Le
        L4:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "Assist_OP"
            android.util.Log.d(r0, r2)
        Le:
            return
    }

    @Override
    public void unregister(android.content.Context r2) {
            r1 = this;
            com.heytap.msp.push.HeytapPushManager.unRegister()     // Catch: java.lang.Throwable -> L4
            goto Le
        L4:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "Assist_OP"
            android.util.Log.d(r0, r2)
        Le:
            return
    }
}
