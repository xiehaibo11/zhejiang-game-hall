package com.huawei.hms.support.api.client;

/* JADX INFO: loaded from: classes.dex */
public class SubAppInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2182a;

    public SubAppInfo(SubAppInfo subAppInfo) {
        if (subAppInfo != null) {
            this.f2182a = subAppInfo.getSubAppID();
        }
    }

    public String getSubAppID() {
        return this.f2182a;
    }

    public void setSubAppID(String str) {
        this.f2182a = str;
    }

    public SubAppInfo(String str) {
        this.f2182a = str;
    }
}
