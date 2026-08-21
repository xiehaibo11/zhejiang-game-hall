package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.util.DisplayMetrics;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.util.Iterator;

public class SystemUtil {
    public SystemUtil() {
    }

    public static String getRandom(int r7) {
        String r0 = "";
        int r1 = 0;
    L3:
        if (r1 >= r7) goto L5;
        r0 = r0 + String.valueOf((int) (Math.random() * 10.0d));
        r1 = r1 + 1;
        goto L3
    L5:
        return r0;
    }

    public static int getScreenOrient(Activity r2) {
        int r0 = r2.getRequestedOrientation();
        if (r0 == 0) goto L10;
        if (r0 == 1) goto L11;
        DisplayMetrics r22 = r2.getResources().getDisplayMetrics();
        if (r22.widthPixels >= r22.heightPixels) goto L8;
        return 1;
    L8:
        return 0;
    L11:
        return r0;
    L10:
        return r0;
    }

    public static String getSystemCurrentTime() {
        return System.currentTimeMillis() + "";
    }

    public static void hideVirtualKey(Activity r3) {
        int r0 = Build.VERSION.SDK_INT;
        if (r0 <= 11) goto L7;
        if (r0 >= 19) goto L7;
        r3.getWindow().getDecorView().setSystemUiVisibility(8);
        return;
    L7:
        if (Build.VERSION.SDK_INT < 19) goto L11;
        r3.getWindow().getDecorView().setSystemUiVisibility(4102);
        return;
    }

    public static boolean isMainProcess(Context r5) {
        int r0 = Process.myPid();     // Catch: Exception -> L11
        Logger.e("isMainProcess--11->pid=" + r0);     // Catch: Exception -> L11
        Iterator<ActivityManager.RunningAppProcessInfo> r1 = ((ActivityManager) r5.getSystemService("activity")).getRunningAppProcesses().iterator();     // Catch: Exception -> L11
    L4:
        if (r1.hasNext() == false) goto L9;
        ActivityManager.RunningAppProcessInfo r2 = r1.next();     // Catch: Exception -> L11
        Logger.e("isMainProcess--->pid=" + r2.pid + ";processName=" + r2.processName);     // Catch: Exception -> L11
        if (r2.pid != r0) goto L4;
        return r5.getApplicationInfo().packageName.equals(r2.processName);
    L9:
        return false;
    L11:
        e = move-exception;
        e.printStackTrace();
        return true;
    }

    public static boolean isScreenLandscape(Activity r0) {
        if (getScreenOrient(r0) != 0) goto L5;
        return true;
    L5:
        return false;
    }

    public static String md5(String r1) {
        return SecurityUtil.getInstance().md5(r1);
    L4:
        return "";
    }
}
