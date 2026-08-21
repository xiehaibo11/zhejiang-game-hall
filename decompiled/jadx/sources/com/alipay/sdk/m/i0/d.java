package com.alipay.sdk.m.i0;

/* JADX INFO: loaded from: classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1192a;
    public int b;
    public long c = System.currentTimeMillis() + 86400000;

    public d(String str, int i) {
        this.f1192a = str;
        this.b = i;
    }

    public String toString() {
        return "ValueData{value='" + this.f1192a + "', code=" + this.b + ", expired=" + this.c + '}';
    }
}
