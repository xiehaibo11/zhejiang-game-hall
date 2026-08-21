package com.huawei.updatesdk.b.g;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.text.TextUtils;
import com.kwad.sdk.api.model.AdnName;

/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f2333a;

    public static String a() {
        String str = f2333a;
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
            f2333a = str2;
            return str2;
        } catch (Exception e) {
            com.huawei.updatesdk.a.a.c.a.a.a.b("ApplicationSession", "getUserAgent() " + e.toString());
            return null;
        }
    }
}
