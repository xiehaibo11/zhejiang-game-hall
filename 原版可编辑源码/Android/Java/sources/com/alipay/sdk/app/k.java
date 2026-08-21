package com.alipay.sdk.app;

import com.huawei.hms.support.api.entity.auth.AuthCode;

public enum k {
    a(9000, "处理成功"),
    b(OpenAuthTask.SYS_ERR, "系统繁忙，请稍后再试"),
    c(6001, "用户取消"),
    d(AuthCode.StatusCode.AUTH_INFO_NOT_EXIST, "网络连接异常"),
    e(4001, "参数错误"),
    f(5000, "重复请求"),
    g(8000, "支付结果确认中");

    private int h;
    private String i;

    k(int i, String str) {
        this.h = i;
        this.i = str;
    }

    public void a(int i) {
        this.h = i;
    }

    public int a() {
        return this.h;
    }

    public void a(String str) {
        this.i = str;
    }

    public String b() {
        return this.i;
    }

    public static k b(int i) {
        if (i == 4001) {
            return e;
        }
        if (i == 5000) {
            return f;
        }
        if (i == 8000) {
            return g;
        }
        if (i == 9000) {
            return a;
        }
        if (i == 6001) {
            return c;
        }
        if (i == 6002) {
            return d;
        }
        return b;
    }
}
