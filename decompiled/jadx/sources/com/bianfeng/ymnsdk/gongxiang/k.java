package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: compiled from: YmnResponseBean.java */
/* JADX INFO: loaded from: classes.dex */
public class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f1473a;
    private String b;

    public int a() {
        return this.f1473a;
    }

    public String b() {
        return this.b;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }

    public boolean c() {
        return a() == 0;
    }
}
