package com.bianfeng.gongxiang.screenlib;

import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.DisplayCutout;
import android.view.View;
import android.view.WindowInsets;
import java.util.List;

class NotchScreenUtils {
    private static NotchScreenUtils notchScreenUtils;
    private int size = 0;

    private NotchScreenUtils() {
    }

    public static NotchScreenUtils getInstance() {
        if (notchScreenUtils == null) {
            notchScreenUtils = new NotchScreenUtils();
        }
        return notchScreenUtils;
    }

    public int getNotSize() {
        return this.size;
    }

    public void setOnApplyWindowInsetsListener(final Activity activity) {
        if (RomUtils.isVivo()) {
            this.size = 0;
            return;
        }
        if (Build.VERSION.SDK_INT < 26) {
            this.size = 0;
        } else if (Build.VERSION.SDK_INT < 28) {
            this.size = getStatusBarHeight(activity);
        } else {
            activity.getWindow().getDecorView().setOnApplyWindowInsetsListener(new View.OnApplyWindowInsetsListener() {
                @Override
                public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
                    if (windowInsets == null) {
                        Log.e("ymnsdk ", "setOnApplyWindowInsetsListener  windowInsets is null");
                        NotchScreenUtils.this.size = 0;
                        return windowInsets;
                    }
                    DisplayCutout displayCutout = windowInsets.getDisplayCutout();
                    if (displayCutout == null) {
                        NotchScreenUtils.this.size = 0;
                        Log.e("ymnsdk ", "cutout==null, is not notch screen");
                    } else {
                        List<Rect> boundingRects = displayCutout.getBoundingRects();
                        if (boundingRects == null || boundingRects.size() == 0) {
                            NotchScreenUtils.this.size = 0;
                            Log.e("ymnsdk ", "rects==null || rects.size()==0, is not notch screen");
                        } else {
                            if (NotchScreenUtils.this.isLand(activity)) {
                                NotchScreenUtils.this.size = displayCutout.getSafeInsetLeft();
                            } else {
                                NotchScreenUtils.this.size = displayCutout.getSafeInsetTop();
                            }
                            Log.i("ymnsdk ", "当前异形屏：" + NotchScreenUtils.this.size);
                        }
                    }
                    return windowInsets;
                }
            });
        }
    }

    private boolean isLand(Activity activity) {
        int activityOrientation = getActivityOrientation(activity);
        activity.getResources().getConfiguration();
        return activityOrientation == 2;
    }

    private int getActivityOrientation(Activity activity) {
        try {
            return activity.getPackageManager().getActivityInfo(activity.getComponentName(), 128).screenOrientation;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private int getStatusBarHeight(Activity activity) {
        if (RomUtils.isMeizu() && FlymeUtils.hasNotch(activity)) {
            return FlymeUtils.getNotHeight(activity);
        }
        Resources resources = activity.getResources();
        return resources.getDimensionPixelSize(resources.getIdentifier("status_bar_height", "dimen", "android"));
    }
}
