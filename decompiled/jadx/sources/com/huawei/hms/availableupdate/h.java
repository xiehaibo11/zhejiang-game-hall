package com.huawei.hms.availableupdate;

/* JADX INFO: compiled from: UpdateInfo.java */
/* JADX INFO: loaded from: classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f2029a;
    public String b;
    public String c;
    public int d;
    public String e;

    public h(String str, int i, String str2, int i2, String str3) {
        this.f2029a = 0;
        this.b = "";
        this.c = "";
        this.d = 0;
        this.e = "";
        this.b = str;
        this.f2029a = i;
        this.c = str2;
        this.d = i2;
        this.e = str3;
    }

    public boolean a() {
        String str;
        return this.f2029a > 0 && this.d > 0 && (str = this.c) != null && !str.isEmpty();
    }
}
