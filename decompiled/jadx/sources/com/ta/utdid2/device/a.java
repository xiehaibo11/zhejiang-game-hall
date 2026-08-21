package com.ta.utdid2.device;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private String c = "";
    private String d = "";
    private String e = "";
    private String f = "";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f5295a = 0;
    private long b = 0;

    void a(long j) {
        this.b = j;
    }

    long a() {
        return this.f5295a;
    }

    void b(long j) {
        this.f5295a = j;
    }

    public String getImei() {
        return this.c;
    }

    void setImei(String str) {
        this.c = str;
    }

    public String getImsi() {
        return this.d;
    }

    void setImsi(String str) {
        this.d = str;
    }

    public String getDeviceId() {
        return this.e;
    }

    void b(String str) {
        this.e = str;
    }

    public String getUtdid() {
        return this.f;
    }

    void c(String str) {
        this.f = str;
    }
}
