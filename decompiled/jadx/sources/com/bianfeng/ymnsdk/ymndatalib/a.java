package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

/* JADX INFO: compiled from: InitBean.java */
/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f1477a;
    public String b;

    public a(int i, String str) {
        this.f1477a = i;
        this.b = str;
    }

    public int a() {
        return this.f1477a;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            return SystemUtils.getRFC3339(Long.valueOf(jCurrentTimeMillis));
        } catch (Exception e) {
            return jCurrentTimeMillis + "";
        }
    }
}
