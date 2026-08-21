package com.sigmob.sdk.base.mta;

/* JADX INFO: loaded from: classes3.dex */
public class PointEntityApp extends PointEntitySigmobSuper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4905a;
    private String b;
    private String c;
    private String d;

    public String getApp_name() {
        return this.f4905a;
    }

    public String getApp_version() {
        return this.d;
    }

    public String getPackage_name() {
        return this.b;
    }

    public String getUpdate() {
        return this.c;
    }

    public void setApp_name(String str) {
        this.f4905a = str;
    }

    public void setApp_version(String str) {
        this.d = str;
    }

    public void setPackage_name(String str) {
        this.b = str;
    }

    public void setUpdate(String str) {
        this.c = str;
    }
}
