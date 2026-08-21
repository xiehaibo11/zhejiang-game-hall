package com.alipay.sdk.protocol;

import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;

public enum a {
    a(Device.NETWORN_NONE),
    b("js://wappay"),
    c("js://update"),
    d("loc:openweb"),
    e("loc:setResult"),
    f("loc:exit");

    private String g;

    a(String str) {
        this.g = str;
    }

    public static a a(String str) {
        if (TextUtils.isEmpty(str)) {
            return a;
        }
        a aVar = a;
        for (a aVar2 : values()) {
            if (str.startsWith(aVar2.g)) {
                return aVar2;
            }
        }
        return aVar;
    }
}
