package com.kwad.sdk.utils;

import android.app.ActivityManager;
import android.app.Application;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.text.TextUtils;
import java.util.List;

public final class ap {
    private static String aJa = "";
    private static volatile Boolean aJb;

    private static String IQ() {
        return Build.VERSION.SDK_INT >= 28 ? Application.getProcessName() : "";
    }

    private static String IR() {
        try {
            Object objB = s.b(Class.forName("android.app.ActivityThread", false, Application.class.getClassLoader()), "currentProcessName", new Object[0]);
            return objB instanceof String ? (String) objB : "";
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }

    private static String cs(Context context) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses;
        if (context == null) {
            return "";
        }
        int iMyPid = Process.myPid();
        ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
        if (activityManager != null && (runningAppProcesses = activityManager.getRunningAppProcesses()) != null) {
            for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
                if (runningAppProcessInfo.pid == iMyPid) {
                    return runningAppProcessInfo.processName;
                }
            }
        }
        return "";
    }

    public static String getProcessName(Context context) {
        if (!TextUtils.isEmpty(aJa)) {
            return aJa;
        }
        String strIQ = IQ();
        aJa = strIQ;
        if (!TextUtils.isEmpty(strIQ)) {
            return aJa;
        }
        String strIR = IR();
        aJa = strIR;
        if (!TextUtils.isEmpty(strIR)) {
            return aJa;
        }
        String strCs = cs(context);
        aJa = strCs;
        return strCs;
    }

    public static boolean isInMainProcess(Context context) {
        if (aJb == null) {
            String processName = getProcessName(context);
            aJb = Boolean.valueOf(!TextUtils.isEmpty(processName) && processName.equals(context.getPackageName()));
        }
        return aJb.booleanValue();
    }
}
