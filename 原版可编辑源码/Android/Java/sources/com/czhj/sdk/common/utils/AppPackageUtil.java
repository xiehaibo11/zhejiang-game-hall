package com.czhj.sdk.common.utils;

import android.content.Context;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.czhj.sdk.logger.SigmobLog;

public class AppPackageUtil {
    public static String getAppPackageName(Context context) {
        if (context == null) {
            return null;
        }
        return context.getPackageName();
    }

    public static String getAppVersionFromContext(Context context) {
        try {
            String appPackageName = getAppPackageName(context);
            if (TextUtils.isEmpty(appPackageName)) {
                return null;
            }
            return getPackageManager(context).getPackageInfo(appPackageName, 0).versionName;
        } catch (Throwable unused) {
            SigmobLog.d("Failed to retrieve PackageInfo#versionName.");
            return null;
        }
    }

    public static PackageManager getPackageManager(Context context) {
        if (context != null) {
            return context.getPackageManager();
        }
        return null;
    }
}
