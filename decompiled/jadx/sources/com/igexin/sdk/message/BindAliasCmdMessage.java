package com.igexin.sdk.message;

/* JADX INFO: loaded from: classes2.dex */
public class BindAliasCmdMessage extends GTCmdMessage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2673a;
    private String b;

    public BindAliasCmdMessage() {
    }

    public BindAliasCmdMessage(String str, String str2, int i) {
        super(i);
        this.f2673a = str;
        this.b = str2;
    }

    public String getCode() {
        return this.b;
    }

    public String getSn() {
        return this.f2673a;
    }

    public void setCode(String str) {
        this.b = str;
    }

    public void setSn(String str) {
        this.f2673a = str;
    }

    public String toString() {
        return "BindAliasCmdMessage{sn='" + this.f2673a + "', code='" + this.b + "'}";
    }
}
