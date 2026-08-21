package com.alipay.sdk.m.r;

import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;

/* JADX INFO: loaded from: classes.dex */
public enum a {
    None(Device.NETWORN_NONE),
    WapPay("js://wappay"),
    Update("js://update"),
    OpenWeb("loc:openweb"),
    SetResult("loc:setResult"),
    Exit("loc:exit");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1240a;

    a(String str) {
        this.f1240a = str;
    }

    public static a a(String str) {
        if (TextUtils.isEmpty(str)) {
            return None;
        }
        a aVar = None;
        for (a aVar2 : values()) {
            if (str.startsWith(aVar2.f1240a)) {
                return aVar2;
            }
        }
        return aVar;
    }
}
