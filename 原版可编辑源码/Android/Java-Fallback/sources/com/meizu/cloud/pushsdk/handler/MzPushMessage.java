package com.meizu.cloud.pushsdk.handler;

public class MzPushMessage implements java.io.Serializable {
    private static final java.lang.String TAG = "MzPushMessage";
    private java.lang.String content;
    private int notifyId;
    private int pushType;
    private java.lang.String selfDefineContentString;
    private java.lang.String taskId;
    private java.lang.String title;

    public MzPushMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.meizu.cloud.pushsdk.handler.MzPushMessage fromMessageV3(com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            com.meizu.cloud.pushsdk.handler.MzPushMessage r0 = new com.meizu.cloud.pushsdk.handler.MzPushMessage
            r0.<init>()
            java.lang.String r1 = r2.getTitle()
            r0.setTitle(r1)
            java.lang.String r1 = r2.getContent()
            r0.setContent(r1)
            java.lang.String r1 = r2.getTaskId()
            r0.setTaskId(r1)
            r1 = 0
            r0.setPushType(r1)
            int r1 = com.meizu.cloud.pushsdk.notification.model.a.b(r2)
            r0.setNotifyId(r1)
            java.lang.String r1 = r2.getWebUrl()
            java.util.Map r2 = r2.getParamsMap()
            java.lang.String r2 = selfDefineContentString(r1, r2)
            r0.setSelfDefineContentString(r2)
            return r0
    }

    private static java.lang.String selfDefineContentString(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            goto L21
        L7:
            if (r2 == 0) goto L20
            java.lang.String r1 = "sk"
            java.lang.Object r1 = r2.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L21
            org.json.JSONObject r1 = com.meizu.cloud.pushsdk.d.f.e.a(r2)
            java.lang.String r1 = r1.toString()
            goto L21
        L20:
            r1 = 0
        L21:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "self json "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "MzPushMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
            return r1
    }

    public java.lang.String getContent() {
            r1 = this;
            java.lang.String r0 = r1.content
            return r0
    }

    public int getNotifyId() {
            r1 = this;
            int r0 = r1.notifyId
            return r0
    }

    public int getPushType() {
            r1 = this;
            int r0 = r1.pushType
            return r0
    }

    public java.lang.String getSelfDefineContentString() {
            r1 = this;
            java.lang.String r0 = r1.selfDefineContentString
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

    public void setContent(java.lang.String r1) {
            r0 = this;
            r0.content = r1
            return
    }

    public void setNotifyId(int r1) {
            r0 = this;
            r0.notifyId = r1
            return
    }

    public void setPushType(int r1) {
            r0 = this;
            r0.pushType = r1
            return
    }

    public void setSelfDefineContentString(java.lang.String r1) {
            r0 = this;
            r0.selfDefineContentString = r1
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
            java.lang.String r1 = "MzPushMessage{title='"
            r0.append(r1)
            java.lang.String r1 = r3.title
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", content='"
            r0.append(r2)
            java.lang.String r2 = r3.content
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", pushType="
            r0.append(r2)
            int r2 = r3.pushType
            r0.append(r2)
            java.lang.String r2 = ", taskId='"
            r0.append(r2)
            java.lang.String r2 = r3.taskId
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", selfDefineContentString='"
            r0.append(r2)
            java.lang.String r2 = r3.selfDefineContentString
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", notifyId="
            r0.append(r1)
            int r1 = r3.notifyId
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
