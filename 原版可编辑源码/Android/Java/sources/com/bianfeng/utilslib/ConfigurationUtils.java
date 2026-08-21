package com.bianfeng.utilslib;

import android.app.Activity;
import android.os.Build;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.WindowManager;

public class ConfigurationUtils {
    private static ConfigurationUtils utils;
    private int mHeight;
    private int mWidth;
    private int orientation;

    private ConfigurationUtils() {
    }

    public static ConfigurationUtils getInstance() {
        if (utils == null) {
            utils = new ConfigurationUtils();
        }
        return utils;
    }

    public void onInit(Activity activity) {
        this.orientation = UtilsSdk.getAppConfig().getActivityOrientation(activity);
    }

    public void onWindowFocusChanged(boolean z, Activity activity) {
        int activityOrientation = UtilsSdk.getAppConfig().getActivityOrientation(activity);
        DisplayMetrics displayMetrics = new DisplayMetrics();
        WindowManager windowManager = (WindowManager) activity.getSystemService("window");
        if (Build.VERSION.SDK_INT >= 17) {
            windowManager.getDefaultDisplay().getRealMetrics(displayMetrics);
        } else {
            windowManager.getDefaultDisplay().getMetrics(displayMetrics);
        }
        int i = displayMetrics.widthPixels;
        int i2 = displayMetrics.heightPixels;
        if (activityOrientation == 6 || activityOrientation == 0) {
            this.mWidth = i > i2 ? i : i2;
            if (i >= i2) {
                i = i2;
            }
            this.mHeight = i;
            return;
        }
        this.mWidth = i < i2 ? i : i2;
        if (i <= i2) {
            i = i2;
        }
        this.mHeight = i;
    }

    public int getWidth() {
        return this.mWidth;
    }

    public int getHeight() {
        return this.mHeight;
    }

    public boolean isLand(Activity activity) {
        int activityOrientation = UtilsSdk.getAppConfig().getActivityOrientation(activity);
        Log.e("ymnsdk", activityOrientation + "---屏幕");
        return activityOrientation == 0 || activityOrientation == 6;
    }

    public boolean isLand() {
        Log.e("ymnsdk", this.orientation + "---屏幕");
        int i = this.orientation;
        return i == 0 || i == 6;
    }
}
