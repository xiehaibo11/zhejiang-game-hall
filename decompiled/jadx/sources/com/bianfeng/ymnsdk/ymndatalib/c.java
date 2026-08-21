package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

/* JADX INFO: compiled from: OtherBean.java */
/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1479a = "";

    public String a() {
        return this.f1479a + "";
    }

    public String b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            return SystemUtils.getRFC3339(Long.valueOf(jCurrentTimeMillis));
        } catch (Exception e) {
            return jCurrentTimeMillis + "";
        }
    }
}
