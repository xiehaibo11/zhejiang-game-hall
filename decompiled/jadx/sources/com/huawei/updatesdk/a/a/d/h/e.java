package com.huawei.updatesdk.a.a.d.h;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f2303a = "";

    public static boolean a() {
        if ("KidWatch".equals(f2303a)) {
            return true;
        }
        String strA = c.a("ro.vendor.market.type", "");
        f2303a = strA;
        com.huawei.updatesdk.a.a.a.b("WearDeviceUtil", "Children watch property value is " + strA);
        if (TextUtils.isEmpty(strA)) {
            return false;
        }
        return "KidWatch".equals(strA);
    }
}
