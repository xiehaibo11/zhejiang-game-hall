package com.meizu.cloud.pushsdk.platform.message;

public class a {
    public static com.meizu.cloud.pushsdk.platform.message.RegisterStatus a(java.lang.String r5) {
            java.lang.String r0 = "expire_time"
            java.lang.String r1 = "push_id"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "register status serialize stringToRegisterStatus start, statusText="
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r2 = new com.meizu.cloud.pushsdk.platform.message.RegisterStatus     // Catch: org.json.JSONException -> L59
            r2.<init>()     // Catch: org.json.JSONException -> L59
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L59
            r4.<init>(r5)     // Catch: org.json.JSONException -> L59
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r5 = b(r4, r2)     // Catch: org.json.JSONException -> L59
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r5 = (com.meizu.cloud.pushsdk.platform.message.RegisterStatus) r5     // Catch: org.json.JSONException -> L59
            boolean r2 = r4.isNull(r1)     // Catch: org.json.JSONException -> L59
            if (r2 != 0) goto L37
            java.lang.String r1 = r4.getString(r1)     // Catch: org.json.JSONException -> L59
            r5.setPushId(r1)     // Catch: org.json.JSONException -> L59
        L37:
            boolean r1 = r4.isNull(r0)     // Catch: org.json.JSONException -> L59
            if (r1 != 0) goto L44
            int r0 = r4.getInt(r0)     // Catch: org.json.JSONException -> L59
            r5.setExpireTime(r0)     // Catch: org.json.JSONException -> L59
        L44:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L59
            r0.<init>()     // Catch: org.json.JSONException -> L59
            java.lang.String r1 = "register status serialize stringToRegisterStatus success, RegisterStatus="
            r0.append(r1)     // Catch: org.json.JSONException -> L59
            r0.append(r5)     // Catch: org.json.JSONException -> L59
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L59
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r0)     // Catch: org.json.JSONException -> L59
            return r5
        L59:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize stringToRegisterStatus error, "
            r0.append(r1)
            java.lang.String r1 = r5.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            r5.printStackTrace()
            r5 = 0
            return r5
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize pushSwitchStatusToString start, PushSwitchStatus="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5d
            r0.<init>()     // Catch: org.json.JSONException -> L5d
            org.json.JSONObject r0 = a(r0, r4)     // Catch: org.json.JSONException -> L5d
            java.lang.String r2 = r4.getPushId()     // Catch: org.json.JSONException -> L5d
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L5d
            if (r2 != 0) goto L32
            java.lang.String r2 = "push_id"
            java.lang.String r3 = r4.getPushId()     // Catch: org.json.JSONException -> L5d
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L5d
        L32:
            java.lang.String r2 = "is_switch_notification"
            boolean r3 = r4.isSwitchNotificationMessage()     // Catch: org.json.JSONException -> L5d
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L5d
            java.lang.String r2 = "is_switch_through"
            boolean r4 = r4.isSwitchThroughMessage()     // Catch: org.json.JSONException -> L5d
            r0.put(r2, r4)     // Catch: org.json.JSONException -> L5d
            java.lang.String r4 = r0.toString()     // Catch: org.json.JSONException -> L5d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L5d
            r0.<init>()     // Catch: org.json.JSONException -> L5d
            java.lang.String r2 = "register status serialize pushSwitchStatusToString success, statusText="
            r0.append(r2)     // Catch: org.json.JSONException -> L5d
            r0.append(r4)     // Catch: org.json.JSONException -> L5d
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L5d
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L5d
            return r4
        L5d:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "register status serialize pushSwitchStatusToString error, "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.platform.message.RegisterStatus r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize registerStatusToString start, RegisterStatus="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5a
            r0.<init>()     // Catch: org.json.JSONException -> L5a
            org.json.JSONObject r0 = a(r0, r4)     // Catch: org.json.JSONException -> L5a
            java.lang.String r2 = r4.getPushId()     // Catch: org.json.JSONException -> L5a
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L5a
            if (r2 != 0) goto L32
            java.lang.String r2 = "push_id"
            java.lang.String r3 = r4.getPushId()     // Catch: org.json.JSONException -> L5a
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L5a
        L32:
            int r2 = r4.getExpireTime()     // Catch: org.json.JSONException -> L5a
            if (r2 <= 0) goto L41
            java.lang.String r2 = "expire_time"
            int r4 = r4.getExpireTime()     // Catch: org.json.JSONException -> L5a
            r0.put(r2, r4)     // Catch: org.json.JSONException -> L5a
        L41:
            java.lang.String r4 = r0.toString()     // Catch: org.json.JSONException -> L5a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L5a
            r0.<init>()     // Catch: org.json.JSONException -> L5a
            java.lang.String r2 = "register status serialize registerStatusToString success, statusText="
            r0.append(r2)     // Catch: org.json.JSONException -> L5a
            r0.append(r4)     // Catch: org.json.JSONException -> L5a
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L5a
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L5a
            return r4
        L5a:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "register status serialize registerStatusToString error, "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize subAliasStatusToString start, SubAliasStatus="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L54
            r0.<init>()     // Catch: org.json.JSONException -> L54
            org.json.JSONObject r0 = a(r0, r4)     // Catch: org.json.JSONException -> L54
            java.lang.String r2 = r4.getPushId()     // Catch: org.json.JSONException -> L54
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L54
            if (r2 != 0) goto L32
            java.lang.String r2 = "push_id"
            java.lang.String r3 = r4.getPushId()     // Catch: org.json.JSONException -> L54
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L54
        L32:
            java.lang.String r2 = "alias"
            java.lang.String r4 = r4.getAlias()     // Catch: org.json.JSONException -> L54
            r0.put(r2, r4)     // Catch: org.json.JSONException -> L54
            java.lang.String r4 = r0.toString()     // Catch: org.json.JSONException -> L54
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L54
            r0.<init>()     // Catch: org.json.JSONException -> L54
            java.lang.String r2 = "register status serialize subAliasStatusToString success, statusText="
            r0.append(r2)     // Catch: org.json.JSONException -> L54
            r0.append(r4)     // Catch: org.json.JSONException -> L54
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L54
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L54
            return r4
        L54:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "register status serialize subAliasStatusToString error, "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize subTagsStatusToString start, SubTagsStatus="
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L97
            r0.<init>()     // Catch: org.json.JSONException -> L97
            org.json.JSONObject r0 = a(r0, r7)     // Catch: org.json.JSONException -> L97
            java.lang.String r2 = r7.getPushId()     // Catch: org.json.JSONException -> L97
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L97
            if (r2 != 0) goto L32
            java.lang.String r2 = "push_id"
            java.lang.String r3 = r7.getPushId()     // Catch: org.json.JSONException -> L97
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L97
        L32:
            java.util.List r2 = r7.getTagList()     // Catch: org.json.JSONException -> L97
            if (r2 == 0) goto L7e
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L97
            r2.<init>()     // Catch: org.json.JSONException -> L97
            r3 = 0
        L3e:
            java.util.List r4 = r7.getTagList()     // Catch: org.json.JSONException -> L97
            int r4 = r4.size()     // Catch: org.json.JSONException -> L97
            if (r3 >= r4) goto L79
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L97
            r4.<init>()     // Catch: org.json.JSONException -> L97
            java.lang.String r5 = "tag_id"
            java.util.List r6 = r7.getTagList()     // Catch: org.json.JSONException -> L97
            java.lang.Object r6 = r6.get(r3)     // Catch: org.json.JSONException -> L97
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag r6 = (com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag) r6     // Catch: org.json.JSONException -> L97
            int r6 = r6.getTagId()     // Catch: org.json.JSONException -> L97
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L97
            java.lang.String r5 = "tag_name"
            java.util.List r6 = r7.getTagList()     // Catch: org.json.JSONException -> L97
            java.lang.Object r6 = r6.get(r3)     // Catch: org.json.JSONException -> L97
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag r6 = (com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag) r6     // Catch: org.json.JSONException -> L97
            java.lang.String r6 = r6.getTagName()     // Catch: org.json.JSONException -> L97
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L97
            r2.put(r4)     // Catch: org.json.JSONException -> L97
            int r3 = r3 + 1
            goto L3e
        L79:
            java.lang.String r7 = "tag_list"
            r0.put(r7, r2)     // Catch: org.json.JSONException -> L97
        L7e:
            java.lang.String r7 = r0.toString()     // Catch: org.json.JSONException -> L97
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L97
            r0.<init>()     // Catch: org.json.JSONException -> L97
            java.lang.String r2 = "register status serialize subTagsStatusToString success, statusText="
            r0.append(r2)     // Catch: org.json.JSONException -> L97
            r0.append(r7)     // Catch: org.json.JSONException -> L97
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L97
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L97
            return r7
        L97:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "register status serialize subTagsStatusToString error, "
            r0.append(r2)
            java.lang.String r2 = r7.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r7.printStackTrace()
            r7 = 0
            return r7
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize unregisterStatusToString start, UnRegisterStatus="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L41
            r0.<init>()     // Catch: org.json.JSONException -> L41
            org.json.JSONObject r0 = a(r0, r3)     // Catch: org.json.JSONException -> L41
            java.lang.String r2 = "is_unregister_success"
            boolean r3 = r3.isUnRegisterSuccess()     // Catch: org.json.JSONException -> L41
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L41
            java.lang.String r3 = r0.toString()     // Catch: org.json.JSONException -> L41
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L41
            r0.<init>()     // Catch: org.json.JSONException -> L41
            java.lang.String r2 = "register status serialize unregisterStatusToString success, statusText="
            r0.append(r2)     // Catch: org.json.JSONException -> L41
            r0.append(r3)     // Catch: org.json.JSONException -> L41
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L41
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L41
            return r3
        L41:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "register status serialize unregisterStatusToString error, "
            r0.append(r2)
            java.lang.String r2 = r3.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r3.printStackTrace()
            r3 = 0
            return r3
    }

    private static org.json.JSONObject a(org.json.JSONObject r2, com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r3) {
            if (r2 == 0) goto L18
            if (r3 != 0) goto L5
            goto L18
        L5:
            java.lang.String r0 = r3.getCode()
            java.lang.String r1 = "code"
            r2.put(r1, r0)
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "message"
            r2.put(r0, r3)
            return r2
        L18:
            r2 = 0
            return r2
    }

    private static com.meizu.cloud.pushsdk.platform.message.BasicPushStatus b(org.json.JSONObject r2, com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r3) {
            if (r2 == 0) goto L24
            if (r3 != 0) goto L5
            goto L24
        L5:
            java.lang.String r0 = "code"
            boolean r1 = r2.isNull(r0)
            if (r1 != 0) goto L14
            java.lang.String r0 = r2.getString(r0)
            r3.setCode(r0)
        L14:
            java.lang.String r0 = "message"
            boolean r1 = r2.isNull(r0)
            if (r1 != 0) goto L23
            java.lang.String r2 = r2.getString(r0)
            r3.setMessage(r2)
        L23:
            return r3
        L24:
            r2 = 0
            return r2
    }

    public static com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus b(java.lang.String r4) {
            java.lang.String r0 = "is_unregister_success"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "register status serialize stringToUnregisterStatus start, statusText="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r1)
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r1 = new com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus     // Catch: org.json.JSONException -> L4a
            r1.<init>()     // Catch: org.json.JSONException -> L4a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4a
            r3.<init>(r4)     // Catch: org.json.JSONException -> L4a
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r4 = b(r3, r1)     // Catch: org.json.JSONException -> L4a
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r4 = (com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus) r4     // Catch: org.json.JSONException -> L4a
            boolean r1 = r3.isNull(r0)     // Catch: org.json.JSONException -> L4a
            if (r1 != 0) goto L35
            boolean r0 = r3.getBoolean(r0)     // Catch: org.json.JSONException -> L4a
            r4.setIsUnRegisterSuccess(r0)     // Catch: org.json.JSONException -> L4a
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L4a
            r0.<init>()     // Catch: org.json.JSONException -> L4a
            java.lang.String r1 = "register status serialize stringToUnregisterStatus success, UnRegisterStatus="
            r0.append(r1)     // Catch: org.json.JSONException -> L4a
            r0.append(r4)     // Catch: org.json.JSONException -> L4a
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L4a
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)     // Catch: org.json.JSONException -> L4a
            return r4
        L4a:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize stringToUnregisterStatus error, "
            r0.append(r1)
            java.lang.String r1 = r4.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus c(java.lang.String r6) {
            java.lang.String r0 = "is_switch_through"
            java.lang.String r1 = "is_switch_notification"
            java.lang.String r2 = "push_id"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "register status serialize stringToPushSwitchStatus start, statusText="
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r3)
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r3 = new com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus     // Catch: org.json.JSONException -> L68
            r3.<init>()     // Catch: org.json.JSONException -> L68
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L68
            r5.<init>(r6)     // Catch: org.json.JSONException -> L68
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r6 = b(r5, r3)     // Catch: org.json.JSONException -> L68
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r6 = (com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus) r6     // Catch: org.json.JSONException -> L68
            boolean r3 = r5.isNull(r2)     // Catch: org.json.JSONException -> L68
            if (r3 != 0) goto L39
            java.lang.String r2 = r5.getString(r2)     // Catch: org.json.JSONException -> L68
            r6.setPushId(r2)     // Catch: org.json.JSONException -> L68
        L39:
            boolean r2 = r5.isNull(r1)     // Catch: org.json.JSONException -> L68
            if (r2 != 0) goto L46
            boolean r1 = r5.getBoolean(r1)     // Catch: org.json.JSONException -> L68
            r6.setSwitchNotificationMessage(r1)     // Catch: org.json.JSONException -> L68
        L46:
            boolean r1 = r5.isNull(r0)     // Catch: org.json.JSONException -> L68
            if (r1 != 0) goto L53
            boolean r0 = r5.getBoolean(r0)     // Catch: org.json.JSONException -> L68
            r6.setSwitchThroughMessage(r0)     // Catch: org.json.JSONException -> L68
        L53:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L68
            r0.<init>()     // Catch: org.json.JSONException -> L68
            java.lang.String r1 = "register status serialize stringToPushSwitchStatus success, PushSwitchStatus="
            r0.append(r1)     // Catch: org.json.JSONException -> L68
            r0.append(r6)     // Catch: org.json.JSONException -> L68
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L68
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r0)     // Catch: org.json.JSONException -> L68
            return r6
        L68:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize stringToPushSwitchStatus error, "
            r0.append(r1)
            java.lang.String r1 = r6.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)
            r6.printStackTrace()
            r6 = 0
            return r6
    }

    public static com.meizu.cloud.pushsdk.platform.message.SubAliasStatus d(java.lang.String r5) {
            java.lang.String r0 = "alias"
            java.lang.String r1 = "push_id"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "register status serialize stringToSubAliasStatus start, statusText="
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r2 = new com.meizu.cloud.pushsdk.platform.message.SubAliasStatus     // Catch: org.json.JSONException -> L59
            r2.<init>()     // Catch: org.json.JSONException -> L59
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L59
            r4.<init>(r5)     // Catch: org.json.JSONException -> L59
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r5 = b(r4, r2)     // Catch: org.json.JSONException -> L59
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r5 = (com.meizu.cloud.pushsdk.platform.message.SubAliasStatus) r5     // Catch: org.json.JSONException -> L59
            boolean r2 = r4.isNull(r1)     // Catch: org.json.JSONException -> L59
            if (r2 != 0) goto L37
            java.lang.String r1 = r4.getString(r1)     // Catch: org.json.JSONException -> L59
            r5.setPushId(r1)     // Catch: org.json.JSONException -> L59
        L37:
            boolean r1 = r4.isNull(r0)     // Catch: org.json.JSONException -> L59
            if (r1 != 0) goto L44
            java.lang.String r0 = r4.getString(r0)     // Catch: org.json.JSONException -> L59
            r5.setAlias(r0)     // Catch: org.json.JSONException -> L59
        L44:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L59
            r0.<init>()     // Catch: org.json.JSONException -> L59
            java.lang.String r1 = "register status serialize stringToSubAliasStatus success, SubAliasStatus="
            r0.append(r1)     // Catch: org.json.JSONException -> L59
            r0.append(r5)     // Catch: org.json.JSONException -> L59
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L59
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r0)     // Catch: org.json.JSONException -> L59
            return r5
        L59:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize stringToSubAliasStatus error, "
            r0.append(r1)
            java.lang.String r1 = r5.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            r5.printStackTrace()
            r5 = 0
            return r5
    }

    public static com.meizu.cloud.pushsdk.platform.message.SubTagsStatus e(java.lang.String r9) {
            java.lang.String r0 = "tag_name"
            java.lang.String r1 = "tag_id"
            java.lang.String r2 = "tag_list"
            java.lang.String r3 = "push_id"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "register status serialize stringToSubTagsStatus start, statusText="
            r4.append(r5)
            r4.append(r9)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "StatusSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r4 = new com.meizu.cloud.pushsdk.platform.message.SubTagsStatus     // Catch: org.json.JSONException -> L95
            r4.<init>()     // Catch: org.json.JSONException -> L95
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L95
            r6.<init>(r9)     // Catch: org.json.JSONException -> L95
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r9 = b(r6, r4)     // Catch: org.json.JSONException -> L95
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r9 = (com.meizu.cloud.pushsdk.platform.message.SubTagsStatus) r9     // Catch: org.json.JSONException -> L95
            boolean r4 = r6.isNull(r3)     // Catch: org.json.JSONException -> L95
            if (r4 != 0) goto L3b
            java.lang.String r3 = r6.getString(r3)     // Catch: org.json.JSONException -> L95
            r9.setPushId(r3)     // Catch: org.json.JSONException -> L95
        L3b:
            boolean r3 = r6.isNull(r2)     // Catch: org.json.JSONException -> L95
            if (r3 != 0) goto L80
            org.json.JSONArray r2 = r6.getJSONArray(r2)     // Catch: org.json.JSONException -> L95
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: org.json.JSONException -> L95
            r3.<init>()     // Catch: org.json.JSONException -> L95
            r4 = 0
        L4b:
            int r6 = r2.length()     // Catch: org.json.JSONException -> L95
            if (r4 >= r6) goto L7d
            org.json.JSONObject r6 = r2.getJSONObject(r4)     // Catch: org.json.JSONException -> L95
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag r7 = new com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag     // Catch: org.json.JSONException -> L95
            r9.getClass()     // Catch: org.json.JSONException -> L95
            r7.<init>(r9)     // Catch: org.json.JSONException -> L95
            boolean r8 = r6.isNull(r1)     // Catch: org.json.JSONException -> L95
            if (r8 != 0) goto L6a
            int r8 = r6.getInt(r1)     // Catch: org.json.JSONException -> L95
            r7.setTagId(r8)     // Catch: org.json.JSONException -> L95
        L6a:
            boolean r8 = r6.isNull(r0)     // Catch: org.json.JSONException -> L95
            if (r8 != 0) goto L77
            java.lang.String r6 = r6.getString(r0)     // Catch: org.json.JSONException -> L95
            r7.setTagName(r6)     // Catch: org.json.JSONException -> L95
        L77:
            r3.add(r7)     // Catch: org.json.JSONException -> L95
            int r4 = r4 + 1
            goto L4b
        L7d:
            r9.setTagList(r3)     // Catch: org.json.JSONException -> L95
        L80:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L95
            r0.<init>()     // Catch: org.json.JSONException -> L95
            java.lang.String r1 = "register status serialize stringToSubTagsStatus success, SubTagsStatus="
            r0.append(r1)     // Catch: org.json.JSONException -> L95
            r0.append(r9)     // Catch: org.json.JSONException -> L95
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L95
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r0)     // Catch: org.json.JSONException -> L95
            return r9
        L95:
            r9 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register status serialize stringToSubTagsStatus error, "
            r0.append(r1)
            java.lang.String r1 = r9.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r5, r0)
            r9.printStackTrace()
            r9 = 0
            return r9
    }
}
