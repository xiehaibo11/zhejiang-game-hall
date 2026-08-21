package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class k {
    private int a;
    private String b;

    public k() {
    }

    public int a() {
        return this.a;
    }

    public String b() {
        return this.b;
    }

    public boolean c() {
        if (a() != 0) goto L5;
        return true;
    L5:
        return false;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
