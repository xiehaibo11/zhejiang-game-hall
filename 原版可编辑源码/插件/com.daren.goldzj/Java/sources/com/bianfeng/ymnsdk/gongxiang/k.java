package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class k {
    private int a;
    private String b;

    public int a() {
        return this.a;
    }

    public String b() {
        return this.b;
    }

    public boolean c() {
        return a() == 0;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
