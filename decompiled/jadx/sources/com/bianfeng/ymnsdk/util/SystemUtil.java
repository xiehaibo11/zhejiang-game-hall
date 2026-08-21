package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.util.DisplayMetrics;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.heytap.mcssdk.constant.MessageConstant;

/* JADX INFO: loaded from: classes.dex */
public class SystemUtil {
    public static void hideVirtualKey(Activity activity) {
        int i = Build.VERSION.SDK_INT;
        if (i > 11 && i < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }

    public static boolean isScreenLandscape(Activity activity) {
        return getScreenOrient(activity) == 0;
    }

    public static int getScreenOrient(Activity activity) {
        int orient = activity.getRequestedOrientation();
        if (orient == 0) {
            return orient;
        }
        if (orient != 1) {
            DisplayMetrics outSize = activity.getResources().getDisplayMetrics();
            return outSize.widthPixels >= outSize.heightPixels ? 0 : 1;
        }
        return orient;
    }

    public static String getRandom(int digit) {
        String strRand = "";
        for (int i = 0; i < digit; i++) {
            strRand = strRand + String.valueOf((int) (Math.random() * 10.0d));
        }
        return strRand;
    }

    public static boolean isMainProcess(Context context) {
        try {
            int pid = Process.myPid();
            Logger.e("isMainProcess--11->pid=" + pid);
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            for (ActivityManager.RunningAppProcessInfo appProcess : activityManager.getRunningAppProcesses()) {
                Logger.e("isMainProcess--->pid=" + appProcess.pid + ";processName=" + appProcess.processName);
                if (appProcess.pid == pid) {
                    return context.getApplicationInfo().packageName.equals(appProcess.processName);
                }
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }

    public static String md5(String input) {
        try {
            return SecurityUtil.getInstance().md5(input);
        } catch (Exception e) {
            return "";
        }
    }

    public static String getSystemCurrentTime() {
        return System.currentTimeMillis() + "";
    }
}
