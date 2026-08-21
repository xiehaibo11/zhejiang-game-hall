package com.bianfeng.utilslib;

import android.app.Activity;
import android.content.pm.ActivityInfo;
import android.content.res.TypedArray;
import android.os.Build;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class ActivityHookUtils {
    private static ActivityHookUtils utils;

    private ActivityHookUtils() {
    }

    public static ActivityHookUtils getInstance() {
        if (utils == null) {
            utils = new ActivityHookUtils();
        }
        return utils;
    }

    public void hookOrientation(Activity activity) {
        if (Build.VERSION.SDK_INT == 26 && isTranslucentOrFloating(activity)) {
            fixOrientation(activity);
        }
    }

    private void fixOrientation(Activity activity) {
        try {
            Field declaredField = Activity.class.getDeclaredField("mActivityInfo");
            declaredField.setAccessible(true);
            ((ActivityInfo) declaredField.get(activity)).screenOrientation = -1;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private boolean isTranslucentOrFloating(Activity activity) {
        try {
            Field declaredField = Class.forName("com.android.internal.R$styleable").getDeclaredField("Window");
            declaredField.setAccessible(true);
            TypedArray typedArrayObtainStyledAttributes = activity.obtainStyledAttributes((int[]) declaredField.get(null));
            Method declaredMethod = ActivityInfo.class.getDeclaredMethod("isTranslucentOrFloating", TypedArray.class);
            declaredMethod.setAccessible(true);
            return ((Boolean) declaredMethod.invoke(null, typedArrayObtainStyledAttributes)).booleanValue();
        } catch (Exception e) {
            UtilsSdk.getLogger().i("测试------" + e.getMessage());
            return false;
        }
    }
}
