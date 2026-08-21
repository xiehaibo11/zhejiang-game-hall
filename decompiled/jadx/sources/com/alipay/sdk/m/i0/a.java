package com.alipay.sdk.m.i0;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f1189a;
    public String b;
    public String c;
    public int d;

    public a(String str) {
        this.c = str;
    }

    public void a(int i) {
        this.d = i;
    }

    public void a(long j) {
        this.f1189a = j;
    }

    public void a(String str) {
        this.b = str;
    }

    public boolean a() {
        return this.f1189a > System.currentTimeMillis();
    }

    public void b() {
        this.f1189a = 0L;
    }
}
