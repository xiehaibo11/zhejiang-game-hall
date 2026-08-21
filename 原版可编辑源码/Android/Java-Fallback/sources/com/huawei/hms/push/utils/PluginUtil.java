package com.huawei.hms.push.utils;

public class PluginUtil {
    public PluginUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L21
            r0.<init>()     // Catch: org.json.JSONException -> L21
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L21
            r2.<init>()     // Catch: org.json.JSONException -> L21
            java.lang.String r3 = "data"
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L21
            java.lang.String r4 = "msgContent"
            r2.put(r4, r0)     // Catch: org.json.JSONException -> L21
            java.lang.String r4 = r2.toString()     // Catch: org.json.JSONException -> L21
            return r4
        L21:
            java.lang.String r4 = "PluginUtil"
            java.lang.String r0 = "rebuild message failed"
            com.huawei.hms.support.log.HMSLog.e(r4, r0)
            return r1
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            java.lang.String r1 = "102"
            com.huawei.hms.push.e.a(r2, r3, r0, r1)
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "PluginUtil"
            java.lang.String r1 = "onNotification"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r1 = com.huawei.hms.push.t.a(r2)
            if (r1 != 0) goto L2c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r2.getPackageName()
            r4.append(r5)
            java.lang.String r5 = " disable display notification."
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r4)
            r4 = 0
            java.lang.String r5 = "103"
            com.huawei.hms.push.e.a(r2, r3, r4, r5)
            return
        L2c:
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            java.lang.String r1 = "com.huawei.push.msg.NOTIFY_MSG"
            r3.setAction(r1)
            java.nio.charset.Charset r1 = com.huawei.hms.push.w.a
            byte[] r5 = r5.getBytes(r1)
            java.lang.String r1 = "selfshow_info"
            r3.putExtra(r1, r5)
            java.nio.charset.Charset r5 = com.huawei.hms.push.w.a
            byte[] r4 = r4.getBytes(r5)
            java.lang.String r5 = "selfshow_token"
            r3.putExtra(r5, r4)
            java.lang.String r4 = r2.getPackageName()
            r3.setPackage(r4)
            com.huawei.hms.push.i.a(r2, r3)
            java.lang.String r2 = "invokeSelfShow done"
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            return
    }

    public static boolean a(android.content.Context r6) {
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r6.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            java.util.List r0 = r0.getRunningAppProcesses()
            java.util.Iterator r0 = r0.iterator()
            r1 = 1
        L11:
            r2 = r1
        L12:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L37
            java.lang.Object r3 = r0.next()
            android.app.ActivityManager$RunningAppProcessInfo r3 = (android.app.ActivityManager.RunningAppProcessInfo) r3
            java.lang.String r4 = r3.processName
            java.lang.String r5 = r6.getPackageName()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L12
            int r2 = r3.importance
            r3 = 100
            if (r2 == r3) goto L35
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 == r3) goto L35
            goto L11
        L35:
            r2 = 0
            goto L12
        L37:
            return r2
    }

    public static boolean a(android.content.Context r3, java.lang.String[] r4) {
            r0 = 1
            r1 = r4[r0]
            java.lang.String r2 = "0"
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            r2 = 0
            if (r1 == 0) goto L20
            boolean r3 = a(r3)
            if (r3 != 0) goto L1f
            r3 = 2
            r3 = r4[r3]
            java.lang.String r4 = "1"
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 == 0) goto L1e
            goto L1f
        L1e:
            r0 = r2
        L1f:
            return r0
        L20:
            return r2
    }

    public static void onAppOpened(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "appHasOpenedId"
            com.huawei.hms.push.e.a(r1, r2, r3, r0)
            return
    }

    public static boolean onDataMessage(android.content.Context r2, java.lang.String r3, java.lang.String r4, boolean r5) {
            java.lang.String r0 = "PluginUtil"
            java.lang.String r1 = "onDataMessage"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L14
            java.lang.String r2 = "Empty message received"
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            r2 = 1
            return r2
        L14:
            if (r5 == 0) goto L19
            a(r2, r3)
        L19:
            android.content.Intent r5 = new android.content.Intent
            java.lang.String r0 = "com.huawei.push.action.MESSAGING_EVENT"
            r5.<init>(r0)
            java.lang.String r0 = r2.getPackageName()
            r5.setPackage(r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "message_id"
            r0.putString(r1, r3)
            java.nio.charset.Charset r3 = com.huawei.hms.push.w.a
            byte[] r3 = r4.getBytes(r3)
            java.lang.String r4 = "message_body"
            r0.putByteArray(r4, r3)
            java.lang.String r3 = "message_type"
            java.lang.String r4 = "received_message"
            r0.putString(r3, r4)
            com.huawei.hms.push.h r3 = new com.huawei.hms.push.h
            r3.<init>()
            boolean r2 = r3.a(r2, r0, r5)
            return r2
    }

    public static boolean onDeletedMessages(android.content.Context r4) {
            java.lang.String r0 = "PluginUtil"
            java.lang.String r1 = "onDeletedMessages"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            if (r4 != 0) goto Lb
            r4 = 0
            return r4
        Lb:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.huawei.push.action.MESSAGING_EVENT"
            r0.<init>(r1)
            java.lang.String r1 = r4.getPackageName()
            r0.setPackage(r1)
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            com.huawei.hms.aaid.plugin.PushProxy r2 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            java.lang.String r2 = r2.getProxyType()
            java.lang.String r3 = "message_proxy_type"
            r1.putString(r3, r2)
            java.lang.String r2 = "message_type"
            java.lang.String r3 = "server_deleted_message"
            r1.putString(r2, r3)
            com.huawei.hms.push.h r2 = new com.huawei.hms.push.h
            r2.<init>()
            boolean r4 = r2.a(r4, r1, r0)
            return r4
    }

    public static void onMessage(android.content.Context r3, java.lang.String[] r4) {
            java.lang.String r0 = "PluginUtil"
            java.lang.String r1 = "onMessage"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            if (r3 == 0) goto L38
            if (r4 == 0) goto L38
            int r0 = r4.length
            r1 = 5
            if (r0 >= r1) goto L10
            goto L38
        L10:
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto L1d
            android.content.Context r0 = r3.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r0)
        L1d:
            boolean r0 = a(r3, r4)
            r1 = 4
            r2 = 0
            if (r0 == 0) goto L30
            r0 = r4[r2]
            r2 = 3
            r2 = r4[r2]
            r4 = r4[r1]
            a(r3, r0, r2, r4)
            goto L38
        L30:
            r0 = r4[r2]
            r4 = r4[r1]
            r1 = 1
            onDataMessage(r3, r0, r4, r1)
        L38:
            return
    }

    public static boolean onNewToken(android.content.Context r3, java.lang.String r4, java.lang.String r5, com.huawei.hms.aaid.constant.ErrorEnum r6) {
            java.lang.String r0 = "PluginUtil"
            java.lang.String r1 = "onNewToken called."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.huawei.push.action.MESSAGING_EVENT"
            r0.<init>(r1)
            java.lang.String r1 = r3.getPackageName()
            r0.setPackage(r1)
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            int r6 = r6.getInternalCode()
            java.lang.String r2 = "error"
            r1.putInt(r2, r6)
            java.lang.String r6 = "message_type"
            java.lang.String r2 = "new_token"
            r1.putString(r6, r2)
            java.lang.String r6 = "device_token"
            r1.putString(r6, r4)
            java.lang.String r4 = r3.getPackageName()
            boolean r4 = android.text.TextUtils.equals(r5, r4)
            java.lang.String r6 = "subjectId"
            if (r4 == 0) goto L40
            r4 = 0
            r1.putString(r6, r4)
            goto L43
        L40:
            r1.putString(r6, r5)
        L43:
            com.huawei.hms.aaid.plugin.PushProxy r4 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            java.lang.String r4 = r4.getProxyType()
            java.lang.String r5 = "message_proxy_type"
            r1.putString(r5, r4)
            com.huawei.hms.push.h r4 = new com.huawei.hms.push.h
            r4.<init>()
            boolean r3 = r4.a(r3, r1, r0)
            return r3
    }

    public static void onNotificationArrived(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "100"
            com.huawei.hms.push.e.a(r1, r2, r3, r0)
            return
    }

    public static void onNotificationClicked(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "1"
            com.huawei.hms.push.e.a(r1, r2, r3, r0)
            onAppOpened(r1, r2, r3)
            return
    }

    public static boolean onOldDataMessage(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto Ld
            android.content.Context r0 = r1.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r0)
        Ld:
            java.lang.String r3 = a(r3)
            r0 = 1
            boolean r1 = onDataMessage(r1, r2, r3, r0)
            return r1
    }

    public static void saveNotifySwitch(android.content.Context r2, boolean r3) {
            com.huawei.hms.aaid.utils.PushPreferences r0 = new com.huawei.hms.aaid.utils.PushPreferences
            java.lang.String r1 = "push_notify_flag"
            r0.<init>(r2, r1)
            java.lang.String r2 = "notify_msg_enable"
            r0.saveBoolean(r2, r3)
            return
    }
}
