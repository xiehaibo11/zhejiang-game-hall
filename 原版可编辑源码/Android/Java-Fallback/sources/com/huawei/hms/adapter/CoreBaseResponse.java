package com.huawei.hms.adapter;

public class CoreBaseResponse implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public android.content.Intent intent;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String jsonBody;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String jsonHeader;

    @com.huawei.hms.core.aidl.annotation.Packed
    public android.app.PendingIntent pendingIntent;

    public CoreBaseResponse() {
            r0 = this;
            r0.<init>()
            return
    }

    public android.content.Intent getIntent() {
            r1 = this;
            android.content.Intent r0 = r1.intent
            return r0
    }

    public java.lang.String getJsonBody() {
            r1 = this;
            java.lang.String r0 = r1.jsonBody
            return r0
    }

    public java.lang.String getJsonHeader() {
            r1 = this;
            java.lang.String r0 = r1.jsonHeader
            return r0
    }

    public android.app.PendingIntent getPendingIntent() {
            r1 = this;
            android.app.PendingIntent r0 = r1.pendingIntent
            return r0
    }

    public void setIntent(android.content.Intent r1) {
            r0 = this;
            r0.intent = r1
            return
    }

    public void setJsonBody(java.lang.String r1) {
            r0 = this;
            r0.jsonBody = r1
            return
    }

    public void setJsonHeader(java.lang.String r1) {
            r0 = this;
            r0.jsonHeader = r1
            return
    }

    public void setPendingIntent(android.app.PendingIntent r1) {
            r0 = this;
            r0.pendingIntent = r1
            return
    }
}
