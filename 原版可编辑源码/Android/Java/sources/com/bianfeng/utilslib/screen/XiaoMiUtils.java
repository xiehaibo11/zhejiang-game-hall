package com.bianfeng.utilslib.screen;

import android.app.Activity;
import android.content.Context;
import android.view.Window;
import com.bianfeng.utilslib.UtilsSdk;

public class XiaoMiUtils {
    public static final int FLAG_NOTCH_HORIZONTAL = 1024;
    public static final int FLAG_NOTCH_PORTRAIT = 512;
    public static final int FLAG_NOTCH_SUPPORT = 256;

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
            UtilsSdk.getLogger().e("addExtraFlags not found.");
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

    public static int getBarSize(Activity activity) {
        if (UtilsSdk.getConfiguration().isLand(activity)) {
            return getNotWidth(activity);
        }
        return getNotHeight(activity);
    }
}
