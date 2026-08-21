package com.igexin.sdk.message;

public class GTNotificationMessage extends com.igexin.sdk.message.GTPushMessage {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;

    public GTNotificationMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public GTNotificationMessage(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    public java.lang.String getContent() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String getMessageId() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getTaskId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void setContent(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setMessageId(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setTaskId(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
