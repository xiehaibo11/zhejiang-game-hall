package com.huawei.hms.push.ups.entity;

/* JADX INFO: loaded from: classes.dex */
public class CodeResult {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f2166a;
    public String b;

    public CodeResult() {
    }

    public String getReason() {
        return this.b;
    }

    public int getReturnCode() {
        return this.f2166a;
    }

    public void setReason(String str) {
        this.b = str;
    }

    public void setReturnCode(int i) {
        this.f2166a = i;
    }

    public CodeResult(int i) {
        this.f2166a = i;
    }

    public CodeResult(int i, String str) {
        this.f2166a = i;
        this.b = str;
    }
}
