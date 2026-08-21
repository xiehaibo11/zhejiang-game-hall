package com.bianfeng.utilslib;

import android.app.Activity;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Point;
import android.os.Build;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.KeyCharacterMap;
import android.view.ViewConfiguration;
import android.view.WindowManager;

public class DensityUtils {
    private static DensityUtils utils;
    private DisplayMetrics appDisplayMetrics;
    private float targetDensity;

    private DensityUtils() {
    }

    public static DensityUtils getInstance() {
        if (utils == null) {
            utils = new DensityUtils();
        }
        return utils;
    }

    public void setDefault(Activity activity) {
        setAppOrientation(activity, "height");
    }

    public void setOrientation(Activity activity, String str) {
        setAppOrientation(activity, str);
    }

    public static int px2dp(Context context, float f) {
        return (int) ((f / context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    private void setAppOrientation(Activity activity, String str) {
        this.appDisplayMetrics = activity.getResources().getDisplayMetrics();
        Log.e("cessssss", "setAppOrientation: ");
        if (str.equals("height")) {
            this.targetDensity = this.appDisplayMetrics.heightPixels / 360.0f;
        } else {
            this.targetDensity = this.appDisplayMetrics.widthPixels / 640.0f;
        }
        float f = this.targetDensity * (this.appDisplayMetrics.scaledDensity / this.appDisplayMetrics.density);
        int i = (int) (this.targetDensity * 160.0f);
        DisplayMetrics displayMetrics = activity.getResources().getDisplayMetrics();
        displayMetrics.density = this.targetDensity;
        displayMetrics.scaledDensity = f;
        displayMetrics.densityDpi = i;
    }

    public float getTargetDensity() {
        return this.targetDensity;
    }

    private boolean checkDeviceHasNavigationBar(Activity activity) {
        int systemUiVisibility = activity.getWindow().getDecorView().getSystemUiVisibility();
        Logger.getInstance().i("----" + systemUiVisibility);
        if (Build.VERSION.SDK_INT < 17) {
            return (ViewConfiguration.get(activity).hasPermanentMenuKey() || KeyCharacterMap.deviceHasKey(4)) ? false : true;
        }
        Display defaultDisplay = ((WindowManager) activity.getSystemService("window")).getDefaultDisplay();
        Point point = new Point();
        Point point2 = new Point();
        defaultDisplay.getSize(point);
        defaultDisplay.getRealSize(point2);
        Logger.getInstance().i("----" + point2.y + "--" + point.y);
        return point2.y != point.y;
    }

    public int getNavigationBarHeight(Activity activity) {
        if (!checkDeviceHasNavigationBar(activity)) {
            return 0;
        }
        Resources resources = activity.getResources();
        return resources.getDimensionPixelSize(resources.getIdentifier("navigation_bar_height", "dimen", "android"));
    }
}
