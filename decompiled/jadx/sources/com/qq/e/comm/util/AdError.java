package com.qq.e.comm.util;

/* JADX INFO: loaded from: classes3.dex */
public class AdError {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4693a;
    private String b;

    public AdError() {
    }

    public AdError(int i, String str) {
        this.f4693a = i;
        this.b = str;
    }

    public int getErrorCode() {
        return this.f4693a;
    }

    public String getErrorMsg() {
        return this.b;
    }
}
