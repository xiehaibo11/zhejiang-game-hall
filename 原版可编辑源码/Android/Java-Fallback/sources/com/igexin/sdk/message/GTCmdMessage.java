package com.igexin.sdk.message;

public class GTCmdMessage extends com.igexin.sdk.message.BaseMessage {
    private int a;

    public GTCmdMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public GTCmdMessage(int r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public int getAction() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void setAction(int r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
