package com.bianfeng.gongxiang.screenlib;

import android.content.Context;
import android.util.Log;
import android.view.Window;

class XiaoMiUtils {
    public static final int FLAG_NOTCH_HORIZONTAL = 1024;
    public static final int FLAG_NOTCH_PORTRAIT = 512;
    public static final int FLAG_NOTCH_SUPPORT = 256;

    XiaoMiUtils() {
    }

    public static boolean hasNotch(Context context) {
        try {
            try {
                Class<?> clsLoadClass = context.getClassLoader().loadClass("android.os.SystemProperties");
                return ((Integer) clsLoadClass.getMethod("getInt", String.class, Integer.TYPE).invoke(clsLoadClass, "ro.miui.notch", 0)).intValue() == 1;
            } catch (Exception e) {
                e.printStackTrace();
                return false;
            }
        } catch (Throwable unused) {
            return false;
        }
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(Window window) {
        try {
            Window.class.getMethod("addExtraFlags", Integer.TYPE).invoke(window, 768);
        } catch (Exception unused) {
            Log.i("ymnsdk ", "addExtraFlags not found.");
        }
    }

    private static int getNotHeight(Context context) {
        int identifier = context.getResources().getIdentifier("notch_height", "dimen", "android");
        if (identifier > 0) {
            return context.getResources().getDimensionPixelSize(identifier);
        }
        return 0;
    }

    private static int getNotWidth(Context context) {
        int identifier = context.getResources().getIdentifier("notch_width", "dimen", "android");
        if (identifier > 0) {
            return context.getResources().getDimensionPixelSize(identifier);
        }
        return 0;
    }
}
