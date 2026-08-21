package com.alipay.sdk.auth;

/* JADX INFO: loaded from: classes.dex */
public class APAuthInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1118a;
    private String b;
    private String c;
    private String d;

    public APAuthInfo(String str, String str2, String str3) {
        this(str, str2, str3, null);
    }

    public APAuthInfo(String str, String str2, String str3, String str4) {
        this.f1118a = str;
        this.b = str2;
        this.d = str3;
        this.c = str4;
    }

    public String getAppId() {
        return this.f1118a;
    }

    public String getProductId() {
        return this.b;
    }

    public String getPid() {
        return this.c;
    }

    public String getRedirectUri() {
        return this.d;
    }
}
