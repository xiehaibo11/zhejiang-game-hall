package com.meizu.cloud.pushsdk.notification;

public class MPushMessage implements java.io.Serializable {
    private static final java.lang.String TAG = "MPushMessage";
    private java.lang.String clickType;
    private java.lang.String content;
    private java.util.Map<java.lang.String, java.lang.String> extra;
    private java.lang.String isDiscard;
    private java.lang.String notifyType;
    private java.lang.String packageName;
    private java.util.Map<java.lang.String, java.lang.String> params;
    private java.lang.String pushType;
    private java.lang.String taskId;
    private java.lang.String title;

    public MPushMessage() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.extra = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.params = r0
            return
    }

    private static java.util.Map<java.lang.String, java.lang.String> getParamsMap(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap     // Catch: org.json.JSONException -> L22
            int r1 = r4.length()     // Catch: org.json.JSONException -> L22
            r0.<init>(r1)     // Catch: org.json.JSONException -> L22
            java.util.Iterator r1 = r4.keys()     // Catch: org.json.JSONException -> L22
        Ld:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L22
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L22
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L22
            java.lang.String r3 = r4.getString(r2)     // Catch: org.json.JSONException -> L22
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L22
            goto Ld
        L21:
            return r0
        L22:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static com.meizu.cloud.pushsdk.notification.MPushMessage parsePushMessage(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "extra"
            java.lang.String r1 = "clickType"
            java.lang.String r2 = "title"
            java.lang.String r3 = "isDiscard"
            java.lang.String r4 = "content"
            java.lang.String r5 = "MPushMessage"
            java.lang.String r6 = "parameters"
            com.meizu.cloud.pushsdk.notification.MPushMessage r7 = new com.meizu.cloud.pushsdk.notification.MPushMessage
            r7.<init>()
            r7.setTaskId(r11)     // Catch: org.json.JSONException -> La6
            r7.setPushType(r8)     // Catch: org.json.JSONException -> La6
            r7.setPackageName(r10)     // Catch: org.json.JSONException -> La6
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: org.json.JSONException -> La6
            r8.<init>(r9)     // Catch: org.json.JSONException -> La6
            java.lang.String r9 = "data"
            org.json.JSONObject r8 = r8.getJSONObject(r9)     // Catch: org.json.JSONException -> La6
            boolean r9 = r8.isNull(r4)     // Catch: org.json.JSONException -> La6
            if (r9 != 0) goto L34
            java.lang.String r9 = r8.getString(r4)     // Catch: org.json.JSONException -> La6
            r7.setContent(r9)     // Catch: org.json.JSONException -> La6
        L34:
            boolean r9 = r8.isNull(r3)     // Catch: org.json.JSONException -> La6
            if (r9 != 0) goto L41
            java.lang.String r9 = r8.getString(r3)     // Catch: org.json.JSONException -> La6
            r7.setIsDiscard(r9)     // Catch: org.json.JSONException -> La6
        L41:
            boolean r9 = r8.isNull(r2)     // Catch: org.json.JSONException -> La6
            if (r9 != 0) goto L4e
            java.lang.String r9 = r8.getString(r2)     // Catch: org.json.JSONException -> La6
            r7.setTitle(r9)     // Catch: org.json.JSONException -> La6
        L4e:
            boolean r9 = r8.isNull(r1)     // Catch: org.json.JSONException -> La6
            if (r9 != 0) goto L5b
            java.lang.String r9 = r8.getString(r1)     // Catch: org.json.JSONException -> La6
            r7.setClickType(r9)     // Catch: org.json.JSONException -> La6
        L5b:
            boolean r9 = r8.isNull(r0)     // Catch: org.json.JSONException -> La6
            if (r9 != 0) goto Lbf
            org.json.JSONObject r8 = r8.getJSONObject(r0)     // Catch: org.json.JSONException -> La6
            if (r8 == 0) goto Lbf
            boolean r9 = r8.isNull(r6)     // Catch: org.json.JSONException -> La6
            if (r9 != 0) goto L9e
            org.json.JSONObject r9 = r8.getJSONObject(r6)     // Catch: java.lang.Throwable -> L7e org.json.JSONException -> L80
            if (r9 == 0) goto L7a
            java.util.Map r9 = getParamsMap(r9)     // Catch: org.json.JSONException -> La6
            r7.setParams(r9)     // Catch: org.json.JSONException -> La6
        L7a:
            r8.remove(r6)     // Catch: org.json.JSONException -> La6
            goto L9e
        L7e:
            r9 = move-exception
            goto L9a
        L80:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r10.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = "parameter parse error message "
            r10.append(r11)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L7e
            r10.append(r9)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r9 = r10.toString()     // Catch: java.lang.Throwable -> L7e
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r9)     // Catch: java.lang.Throwable -> L7e
            goto L7a
        L9a:
            r8.remove(r6)     // Catch: org.json.JSONException -> La6
            throw r9     // Catch: org.json.JSONException -> La6
        L9e:
            java.util.Map r8 = getParamsMap(r8)     // Catch: org.json.JSONException -> La6
            r7.setExtra(r8)     // Catch: org.json.JSONException -> La6
            goto Lbf
        La6:
            r8 = move-exception
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "parse push message error "
            r9.append(r10)
            java.lang.String r8 = r8.getMessage()
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r8)
        Lbf:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = " parsePushMessage "
            r8.append(r9)
            r8.append(r7)
            java.lang.String r8 = r8.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r8)
            return r7
    }

    public java.lang.String getClickType() {
            r1 = this;
            java.lang.String r0 = r1.clickType
            return r0
    }

    public java.lang.String getContent() {
            r1 = this;
            java.lang.String r0 = r1.content
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getExtra() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.extra
            return r0
    }

    public java.lang.String getIsDiscard() {
            r1 = this;
            java.lang.String r0 = r1.isDiscard
            return r0
    }

    public java.lang.String getNotifyType() {
            r1 = this;
            java.lang.String r0 = r1.notifyType
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.params
            return r0
    }

    public java.lang.String getPushType() {
            r1 = this;
            java.lang.String r0 = r1.pushType
            return r0
    }

    public java.lang.String getTaskId() {
            r1 = this;
            java.lang.String r0 = r1.taskId
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public void setClickType(java.lang.String r1) {
            r0 = this;
            r0.clickType = r1
            return
    }

    public void setContent(java.lang.String r1) {
            r0 = this;
            r0.content = r1
            return
    }

    public void setExtra(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.extra = r1
            return
    }

    public void setIsDiscard(java.lang.String r1) {
            r0 = this;
            r0.isDiscard = r1
            return
    }

    public void setNotifyType(java.lang.String r1) {
            r0 = this;
            r0.notifyType = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setParams(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.params = r1
            return
    }

    public void setPushType(java.lang.String r1) {
            r0 = this;
            r0.pushType = r1
            return
    }

    public void setTaskId(java.lang.String r1) {
            r0 = this;
            r0.taskId = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MPushMessage{taskId='"
            r0.append(r1)
            java.lang.String r1 = r3.taskId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", pushType='"
            r0.append(r2)
            java.lang.String r2 = r3.pushType
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", packageName='"
            r0.append(r2)
            java.lang.String r2 = r3.packageName
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", title='"
            r0.append(r2)
            java.lang.String r2 = r3.title
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", content='"
            r0.append(r2)
            java.lang.String r2 = r3.content
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", notifyType='"
            r0.append(r2)
            java.lang.String r2 = r3.notifyType
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", clickType='"
            r0.append(r2)
            java.lang.String r2 = r3.clickType
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", isDiscard='"
            r0.append(r2)
            java.lang.String r2 = r3.isDiscard
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", extra="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.extra
            r0.append(r1)
            java.lang.String r1 = ", params="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.params
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
