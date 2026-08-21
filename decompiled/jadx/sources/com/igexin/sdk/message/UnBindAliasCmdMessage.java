package com.igexin.sdk.message;

/* JADX INFO: loaded from: classes2.dex */
public class UnBindAliasCmdMessage extends GTCmdMessage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2679a;
    private String b;

    public UnBindAliasCmdMessage() {
    }

    public UnBindAliasCmdMessage(String str, String str2, int i) {
        super(i);
        this.f2679a = str;
        this.b = str2;
    }

    public String getCode() {
        return this.b;
    }

    public String getSn() {
        return this.f2679a;
    }

    public void setCode(String str) {
        this.b = str;
    }

    public void setSn(String str) {
        this.f2679a = str;
    }

    public String toString() {
        return "UnBindAliasCmdMessage{sn='" + this.f2679a + "', code='" + this.b + "'}";
    }
}
