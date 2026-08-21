package com.kwad.sdk;

/* JADX INFO: loaded from: classes2.dex */
public final class f {
    public static final f agU = new f(10000, "其他异常");
    public static final f agV = new f(10001, "初始化参数异常");
    public int code;
    public String msg;

    public f(int i, String str) {
        this.code = i;
        this.msg = str;
    }
}
