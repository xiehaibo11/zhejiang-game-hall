package com.huawei.updatesdk.b.g;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.text.TextUtils;
import com.kwad.sdk.api.model.AdnName;

public final class a {
    private static String a;

    public static String a() {
        String str = a;
        if (str != null) {
            return str;
        }
        Context contextA = com.huawei.updatesdk.a.b.a.a.c().a();
        try {
            String packageName = contextA.getPackageName();
            PackageInfo packageInfo = contextA.getPackageManager().getPackageInfo(contextA.getPackageName(), 0);
            if (packageInfo != null) {
                packageName = packageName + packageInfo.versionName;
            }
            String str2 = packageName + "_" + (TextUtils.isEmpty(Build.BRAND) ? AdnName.OTHER : Build.BRAND);
            a = str2;
            return str2;
        } catch (Exception e) {
            com.huawei.updatesdk.a.a.c.a.a.a.b("ApplicationSession", "getUserAgent() " + e.toString());
            return null;
        }
    }
}
