package com.igexin.push.util;

import android.content.Context;
import android.os.Build;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Arrays;

/* JADX INFO: loaded from: classes2.dex */
public class j {
    public static int a(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).applicationInfo.targetSdkVersion;
        } catch (Exception unused) {
            return 0;
        }
    }

    public static String a() {
        return Build.BRAND;
    }

    public static boolean b() {
        if ("*".equals(com.igexin.push.config.j.r)) {
            return true;
        }
        try {
            return Arrays.asList(com.igexin.push.config.j.r.toUpperCase().split(Constants.ACCEPT_TIME_SEPARATOR_SP)).contains(Build.BRAND.toUpperCase());
        } catch (Exception unused) {
            return false;
        }
    }
}
