package com.meizu.cloud.pushsdk.handler;

public class d {
    public static com.meizu.cloud.pushsdk.handler.MessageV3 a(java.lang.String r20) {
            r0 = r20
            java.lang.String r1 = "notification_message"
            java.lang.String r2 = "through_message"
            java.lang.String r3 = "parameters"
            java.lang.String r4 = "upload_data_package_name"
            java.lang.String r5 = "push_timestamp"
            java.lang.String r6 = "pk"
            java.lang.String r7 = "url"
            java.lang.String r8 = "activity"
            java.lang.String r9 = "isDiscard"
            java.lang.String r10 = "clickType"
            java.lang.String r11 = "package_name"
            java.lang.String r12 = "content"
            java.lang.String r13 = "title"
            java.lang.String r14 = "device_id"
            java.lang.String r15 = "seq_id"
            r16 = r1
            java.lang.String r1 = "task_id"
            r17 = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r18 = r3
            java.lang.String r3 = "message serialize stringToMessageV3 start, msgText="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "MessageSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            com.meizu.cloud.pushsdk.handler.MessageV3 r2 = new com.meizu.cloud.pushsdk.handler.MessageV3     // Catch: org.json.JSONException -> L15e
            r2.<init>()     // Catch: org.json.JSONException -> L15e
            r19 = r3
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15a
            r3.<init>(r0)     // Catch: org.json.JSONException -> L15a
            boolean r0 = r3.isNull(r1)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto L57
            java.lang.String r0 = r3.getString(r1)     // Catch: org.json.JSONException -> L15a
            r2.setTaskId(r0)     // Catch: org.json.JSONException -> L15a
        L57:
            boolean r0 = r3.isNull(r15)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto L64
            java.lang.String r0 = r3.getString(r15)     // Catch: org.json.JSONException -> L15a
            r2.setSeqId(r0)     // Catch: org.json.JSONException -> L15a
        L64:
            boolean r0 = r3.isNull(r14)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto L71
            java.lang.String r0 = r3.getString(r14)     // Catch: org.json.JSONException -> L15a
            r2.setDeviceId(r0)     // Catch: org.json.JSONException -> L15a
        L71:
            boolean r0 = r3.isNull(r13)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto L7e
            java.lang.String r0 = r3.getString(r13)     // Catch: org.json.JSONException -> L15a
            r2.setTitle(r0)     // Catch: org.json.JSONException -> L15a
        L7e:
            boolean r0 = r3.isNull(r12)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto L8b
            java.lang.String r0 = r3.getString(r12)     // Catch: org.json.JSONException -> L15a
            r2.setContent(r0)     // Catch: org.json.JSONException -> L15a
        L8b:
            boolean r0 = r3.isNull(r11)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto L98
            java.lang.String r0 = r3.getString(r11)     // Catch: org.json.JSONException -> L15a
            r2.setPackageName(r0)     // Catch: org.json.JSONException -> L15a
        L98:
            boolean r0 = r3.isNull(r10)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto La5
            int r0 = r3.getInt(r10)     // Catch: org.json.JSONException -> L15a
            r2.setClickType(r0)     // Catch: org.json.JSONException -> L15a
        La5:
            boolean r0 = r3.isNull(r9)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto Lb2
            boolean r0 = r3.getBoolean(r9)     // Catch: org.json.JSONException -> L15a
            r2.setIsDiscard(r0)     // Catch: org.json.JSONException -> L15a
        Lb2:
            boolean r0 = r3.isNull(r8)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto Lbf
            java.lang.String r0 = r3.getString(r8)     // Catch: org.json.JSONException -> L15a
            r2.setActivity(r0)     // Catch: org.json.JSONException -> L15a
        Lbf:
            boolean r0 = r3.isNull(r7)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto Lcc
            java.lang.String r0 = r3.getString(r7)     // Catch: org.json.JSONException -> L15a
            r2.setWebUrl(r0)     // Catch: org.json.JSONException -> L15a
        Lcc:
            boolean r0 = r3.isNull(r6)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto Ld9
            java.lang.String r0 = r3.getString(r6)     // Catch: org.json.JSONException -> L15a
            r2.setUriPackageName(r0)     // Catch: org.json.JSONException -> L15a
        Ld9:
            boolean r0 = r3.isNull(r5)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto Le6
            java.lang.String r0 = r3.getString(r5)     // Catch: org.json.JSONException -> L15a
            r2.setPushTimestamp(r0)     // Catch: org.json.JSONException -> L15a
        Le6:
            boolean r0 = r3.isNull(r4)     // Catch: org.json.JSONException -> L15a
            if (r0 != 0) goto Lf3
            java.lang.String r0 = r3.getString(r4)     // Catch: org.json.JSONException -> L15a
            r2.setUploadDataPackageName(r0)     // Catch: org.json.JSONException -> L15a
        Lf3:
            r0 = r18
            boolean r1 = r3.isNull(r0)     // Catch: org.json.JSONException -> L15a
            if (r1 != 0) goto L123
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: org.json.JSONException -> L15a
            java.util.HashMap r1 = new java.util.HashMap     // Catch: org.json.JSONException -> L15a
            int r4 = r0.length()     // Catch: org.json.JSONException -> L15a
            r1.<init>(r4)     // Catch: org.json.JSONException -> L15a
            java.util.Iterator r4 = r0.keys()     // Catch: org.json.JSONException -> L15a
        L10c:
            boolean r5 = r4.hasNext()     // Catch: org.json.JSONException -> L15a
            if (r5 == 0) goto L120
            java.lang.Object r5 = r4.next()     // Catch: org.json.JSONException -> L15a
            java.lang.String r5 = (java.lang.String) r5     // Catch: org.json.JSONException -> L15a
            java.lang.String r6 = r0.getString(r5)     // Catch: org.json.JSONException -> L15a
            r1.put(r5, r6)     // Catch: org.json.JSONException -> L15a
            goto L10c
        L120:
            r2.setParamsMap(r1)     // Catch: org.json.JSONException -> L15a
        L123:
            r0 = r17
            boolean r1 = r3.isNull(r0)     // Catch: org.json.JSONException -> L15a
            if (r1 != 0) goto L132
            java.lang.String r0 = r3.getString(r0)     // Catch: org.json.JSONException -> L15a
            r2.setThroughMessage(r0)     // Catch: org.json.JSONException -> L15a
        L132:
            r0 = r16
            boolean r1 = r3.isNull(r0)     // Catch: org.json.JSONException -> L15a
            if (r1 != 0) goto L141
            java.lang.String r0 = r3.getString(r0)     // Catch: org.json.JSONException -> L15a
            r2.setNotificationMessage(r0)     // Catch: org.json.JSONException -> L15a
        L141:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L15a
            r0.<init>()     // Catch: org.json.JSONException -> L15a
            java.lang.String r1 = "message serialize stringToMessageV3 success, messageV3="
            r0.append(r1)     // Catch: org.json.JSONException -> L15a
            r0.append(r2)     // Catch: org.json.JSONException -> L15a
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L15a
            r1 = r19
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L158
            return r2
        L158:
            r0 = move-exception
            goto L160
        L15a:
            r0 = move-exception
            r1 = r19
            goto L160
        L15e:
            r0 = move-exception
            r1 = r3
        L160:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "message serialize stringToMessageV3 error， "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "message serialize messageV3ToString start, messageV3="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MessageSerialize"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15b
            r0.<init>()     // Catch: org.json.JSONException -> L15b
            java.lang.String r2 = r5.getTaskId()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L2e
            java.lang.String r2 = "task_id"
            java.lang.String r3 = r5.getTaskId()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L2e:
            java.lang.String r2 = r5.getSeqId()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L41
            java.lang.String r2 = "seq_id"
            java.lang.String r3 = r5.getSeqId()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L41:
            java.lang.String r2 = r5.getDeviceId()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L54
            java.lang.String r2 = "device_id"
            java.lang.String r3 = r5.getDeviceId()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L54:
            java.lang.String r2 = r5.getTitle()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L67
            java.lang.String r2 = "title"
            java.lang.String r3 = r5.getTitle()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L67:
            java.lang.String r2 = r5.getContent()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L7a
            java.lang.String r2 = "content"
            java.lang.String r3 = r5.getContent()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L7a:
            java.lang.String r2 = r5.getPackageName()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L8d
            java.lang.String r2 = "package_name"
            java.lang.String r3 = r5.getPackageName()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L8d:
            java.lang.String r2 = "clickType"
            int r3 = r5.getClickType()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
            java.lang.String r2 = "isDiscard"
            boolean r3 = r5.isDiscard()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
            java.lang.String r2 = r5.getActivity()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto Lb2
            java.lang.String r2 = "activity"
            java.lang.String r3 = r5.getActivity()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        Lb2:
            java.lang.String r2 = r5.getWebUrl()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto Lc5
            java.lang.String r2 = "url"
            java.lang.String r3 = r5.getWebUrl()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        Lc5:
            java.lang.String r2 = r5.getUriPackageName()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto Ld8
            java.lang.String r2 = "pk"
            java.lang.String r3 = r5.getUriPackageName()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        Ld8:
            java.lang.String r2 = r5.getPushTimestamp()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto Leb
            java.lang.String r2 = "push_timestamp"
            java.lang.String r3 = r5.getPushTimestamp()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        Leb:
            java.lang.String r2 = r5.getUploadDataPackageName()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto Lfe
            java.lang.String r2 = "upload_data_package_name"
            java.lang.String r3 = r5.getUploadDataPackageName()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        Lfe:
            java.util.Map r2 = r5.getParamsMap()     // Catch: org.json.JSONException -> L15b
            if (r2 == 0) goto L11c
            java.util.Map r2 = r5.getParamsMap()     // Catch: org.json.JSONException -> L15b
            int r2 = r2.size()     // Catch: org.json.JSONException -> L15b
            if (r2 <= 0) goto L11c
            java.lang.String r2 = "parameters"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15b
            java.util.Map r4 = r5.getParamsMap()     // Catch: org.json.JSONException -> L15b
            r3.<init>(r4)     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L11c:
            java.lang.String r2 = r5.getThroughMessage()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L12f
            java.lang.String r2 = "through_message"
            java.lang.String r3 = r5.getThroughMessage()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L15b
        L12f:
            java.lang.String r2 = r5.getNotificationMessage()     // Catch: org.json.JSONException -> L15b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L15b
            if (r2 != 0) goto L142
            java.lang.String r2 = "notification_message"
            java.lang.String r5 = r5.getNotificationMessage()     // Catch: org.json.JSONException -> L15b
            r0.put(r2, r5)     // Catch: org.json.JSONException -> L15b
        L142:
            java.lang.String r5 = r0.toString()     // Catch: org.json.JSONException -> L15b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L15b
            r0.<init>()     // Catch: org.json.JSONException -> L15b
            java.lang.String r2 = "message serialize messageV3ToString success, msgText="
            r0.append(r2)     // Catch: org.json.JSONException -> L15b
            r0.append(r5)     // Catch: org.json.JSONException -> L15b
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L15b
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)     // Catch: org.json.JSONException -> L15b
            return r5
        L15b:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "message serialize messageV3ToString error, "
            r0.append(r2)
            java.lang.String r2 = r5.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r5.printStackTrace()
            r5 = 0
            return r5
    }
}
