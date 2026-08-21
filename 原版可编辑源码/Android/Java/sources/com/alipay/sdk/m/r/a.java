package com.alipay.sdk.m.r;

import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;

public enum a {
    b(Device.NETWORN_NONE),
    c("js://wappay"),
    d("js://update"),
    e("loc:openweb"),
    f("loc:setResult"),
    g("loc:exit");

    public String a;

    a(String str) {
        this.a = str;
    }

    public static a a(String str) {
        if (TextUtils.isEmpty(str)) {
            return b;
        }
        a aVar = b;
        for (a aVar2 : values()) {
            if (str.startsWith(aVar2.a)) {
                return aVar2;
            }
        }
        return aVar;
    }
}
