package com.igexin.sdk.message;

public class FeedbackCmdMessage extends com.igexin.sdk.message.GTCmdMessage {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private long d;

    public FeedbackCmdMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public FeedbackCmdMessage(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4, int r6) {
            r0 = this;
            r0.<init>(r6)
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    public java.lang.String getActionId() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getResult() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getTaskId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public long getTimeStamp() {
            r2 = this;
            long r0 = r2.d
            return r0
    }

    public void setActionId(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setResult(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setTaskId(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setTimeStamp(long r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
