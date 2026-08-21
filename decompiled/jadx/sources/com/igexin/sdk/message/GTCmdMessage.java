package com.igexin.sdk.message;

/* JADX INFO: loaded from: classes2.dex */
public class GTCmdMessage extends BaseMessage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f2675a;

    public GTCmdMessage() {
    }

    public GTCmdMessage(int i) {
        this.f2675a = i;
    }

    public int getAction() {
        return this.f2675a;
    }

    public void setAction(int i) {
        this.f2675a = i;
    }
}
