package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.util.DisplayMetrics;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;

public class SystemUtil {
    public static String getRandom(int i) {
        String str = "";
        for (int i2 = 0; i2 < i; i2++) {
            str = str + String.valueOf((int) (Math.random() * 10.0d));
        }
        return str;
    }

    public static int getScreenOrient(Activity activity) {
        int requestedOrientation = activity.getRequestedOrientation();
        if (requestedOrientation == 0 || requestedOrientation == 1) {
            return requestedOrientation;
        }
        DisplayMetrics displayMetrics = activity.getResources().getDisplayMetrics();
        return displayMetrics.widthPixels < displayMetrics.heightPixels ? 1 : 0;
    }

    public static String getSystemCurrentTime() {
        return System.currentTimeMillis() + "";
    }

    public static void hideVirtualKey(Activity activity) {
        int i = Build.VERSION.SDK_INT;
        if (i > 11 && i < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(4102);
        }
    }

    public static boolean isMainProcess(Context context) {
        try {
            int iMyPid = Process.myPid();
            Logger.e("isMainProcess--11->pid=" + iMyPid);
            for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : ((ActivityManager) context.getSystemService("activity")).getRunningAppProcesses()) {
                Logger.e("isMainProcess--->pid=" + runningAppProcessInfo.pid + ";processName=" + runningAppProcessInfo.processName);
                if (runningAppProcessInfo.pid == iMyPid) {
                    return context.getApplicationInfo().packageName.equals(runningAppProcessInfo.processName);
                }
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }

    public static boolean isScreenLandscape(Activity activity) {
        return getScreenOrient(activity) == 0;
    }

    public static String md5(String str) {
        try {
            return SecurityUtil.getInstance().md5(str);
        } catch (Exception unused) {
            return "";
        }
    }
}
