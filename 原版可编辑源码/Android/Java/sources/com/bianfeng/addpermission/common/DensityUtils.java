package com.bianfeng.addpermission.common;

import android.app.Activity;
import android.content.ComponentName;
import android.util.DisplayMetrics;

public class DensityUtils {
    private static DisplayMetrics appDisplayMetrics;
    public static float targetDensity;

    public static void setWidth(Activity activity) {
    }

    public static void setDefault(Activity activity) {
        setAppOrientation(activity);
    }

    public static void setOrientation(Activity activity, String str) {
        setAppOrientation(activity);
    }

    private static void setAppOrientation(Activity activity) {
        DisplayMetrics displayMetrics = activity.getResources().getDisplayMetrics();
        appDisplayMetrics = displayMetrics;
        int i = displayMetrics.heightPixels;
        int i2 = appDisplayMetrics.widthPixels;
        if (!isPortrait(activity)) {
            targetDensity = Math.min(i, i2) / 360.0f;
        } else {
            targetDensity = Math.min(i, i2) / 640.0f;
        }
        float f = targetDensity * (appDisplayMetrics.scaledDensity / appDisplayMetrics.density);
        int i3 = (int) (targetDensity * 160.0f);
        DisplayMetrics displayMetrics2 = activity.getResources().getDisplayMetrics();
        displayMetrics2.density = targetDensity;
        displayMetrics2.scaledDensity = f;
        displayMetrics2.densityDpi = i3;
    }

    public static float getTargetDensity() {
        return targetDensity;
    }

    public static boolean isPortrait(Activity activity) {
        try {
            return activity.getPackageManager().getActivityInfo(new ComponentName(activity, "com.bianfeng.addpermission.ui.AddPermissionActivity"), 128).screenOrientation == 1;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
