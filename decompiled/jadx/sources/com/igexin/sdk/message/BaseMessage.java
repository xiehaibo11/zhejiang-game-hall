package com.igexin.sdk.message;

import com.igexin.push.core.d;
import java.io.Serializable;

/* JADX INFO: loaded from: classes2.dex */
public class BaseMessage implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2672a = d.f2565a;
    private String b = d.e;
    private String c = d.u;

    public String getAppid() {
        return this.f2672a;
    }

    public String getClientId() {
        return this.c;
    }

    public String getPkgName() {
        return this.b;
    }

    public void setAppid(String str) {
        this.f2672a = str;
    }

    public void setClientId(String str) {
        this.c = str;
    }

    public void setPkgName(String str) {
        this.b = str;
    }
}
