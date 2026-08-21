package com.alipay.sdk.m.c;

import android.content.Context;

public class h implements com.alipay.sdk.m.b.b {
    @Override
    public String a(Context context) {
        if (context == null) {
            return null;
        }
        boolean zC = com.alipay.sdk.m.p0.e.c(context);
        com.alipay.sdk.m.d.a.b("getOAID", "isSupported", Boolean.valueOf(zC));
        if (zC) {
            return com.alipay.sdk.m.p0.e.a(context);
        }
        return null;
    }
}
