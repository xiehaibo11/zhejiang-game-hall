package com.sigmob.sdk.videoAd;

/* JADX INFO: loaded from: classes3.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f5181a;
    private String b;
    private String c;
    private String title;

    public e(String str, String str2, String str3, String str4) {
        this.title = str;
        this.f5181a = str2;
        this.b = str3;
        this.c = str4;
    }

    public String a() {
        return this.title;
    }

    public void a(String str) {
        this.title = str;
    }

    public String b() {
        return this.f5181a;
    }

    public void b(String str) {
        this.f5181a = str;
    }

    public String c() {
        return this.b;
    }

    public void c(String str) {
        this.b = str;
    }

    public String d() {
        return this.c;
    }

    public void d(String str) {
        this.c = str;
    }

    public String toString() {
        return "DialogConfig{title='" + this.title + "', context='" + this.f5181a + "', cancelTxt='" + this.b + "', closeTxtl='" + this.c + "'}";
    }
}
