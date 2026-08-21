package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.channel.commonutils.logger.LoggerInterface;
import com.xiaomi.push.di;
import com.xiaomi.push.dj;
import java.io.File;

/* JADX INFO: loaded from: classes4.dex */
public class Logger {
    private static boolean sDisablePushLog;
    private static LoggerInterface sUserLogger;

    public static void disablePushFileLog(Context context) {
        sDisablePushLog = true;
        setPushLog(context);
    }

    public static void enablePushFileLog(Context context) {
        sDisablePushLog = false;
        setPushLog(context);
    }

    @Deprecated
    public static File getLogFile(String str) {
        return null;
    }

    protected static LoggerInterface getUserLogger() {
        return sUserLogger;
    }

    private static boolean hasWritePermission(Context context) {
        try {
            String[] strArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 4096).requestedPermissions;
            if (strArr != null) {
                for (String str : strArr) {
                    if ("android.permission.WRITE_EXTERNAL_STORAGE".equals(str)) {
                        return true;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static void setLogger(Context context, LoggerInterface loggerInterface) {
        sUserLogger = loggerInterface;
        setPushLog(context);
    }

    public static void setPushLog(Context context) {
        boolean z;
        boolean z2 = false;
        boolean z3 = sUserLogger != null;
        if (sDisablePushLog) {
            z = false;
        } else {
            z = hasWritePermission(context);
            z2 = z3;
        }
        com.xiaomi.channel.commonutils.logger.b.a(new di(z2 ? sUserLogger : null, z ? dj.a(context) : null));
    }

    @Deprecated
    public static void uploadLogFile(Context context, boolean z) {
    }
}
