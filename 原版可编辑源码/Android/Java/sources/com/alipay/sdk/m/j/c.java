package com.alipay.sdk.m.j;

import com.alipay.sdk.app.OpenAuthTask;
import com.huawei.hms.support.api.entity.auth.AuthCode;

public enum c {
    c(9000, "处理成功"),
    d(OpenAuthTask.SYS_ERR, "系统繁忙，请稍后再试"),
    e(6001, "用户取消"),
    f(AuthCode.StatusCode.AUTH_INFO_NOT_EXIST, "网络连接异常"),
    g(6007, "支付未完成"),
    h(4001, "参数错误"),
    i(5000, "重复请求"),
    j(8000, "支付结果确认中");

    public int a;
    public String b;

    c(int i2, String str) {
        this.a = i2;
        this.b = str;
    }

    public void a(int i2) {
        this.a = i2;
    }

    public int b() {
        return this.a;
    }

    public static c b(int i2) {
        return i2 != 4001 ? i2 != 5000 ? i2 != 8000 ? i2 != 9000 ? i2 != 6001 ? i2 != 6002 ? d : f : e : c : j : i : h;
    }

    public void a(String str) {
        this.b = str;
    }

    public String a() {
        return this.b;
    }
}
