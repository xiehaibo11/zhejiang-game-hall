package com.bianfeng.utilslib.screen;

import android.content.Context;
import android.os.Build;
import android.view.View;
import android.view.Window;

public class FlymeUtils {
    public static boolean hasNotch(Context context) {
        try {
            try {
                return ((Boolean) Class.forName("flyme.config.FlymeFeature").getDeclaredField("IS_FRINGE_DEVICE").get(null)).booleanValue();
            } catch (Exception e) {
                e.printStackTrace();
                return false;
            }
        } catch (Throwable unused) {
            return false;
        }
    }

    public static int getNotHeight(Context context) {
        int identifier = context.getResources().getIdentifier("fringe_height", "dimen", "android");
        if (identifier > 0) {
            return context.getResources().getDimensionPixelSize(identifier);
        }
        return 0;
    }

    public static int getNotWidth(Context context) {
        int identifier = context.getResources().getIdentifier("fringe_width", "dimen", "android");
        if (identifier > 0) {
            return context.getResources().getDimensionPixelSize(identifier);
        }
        return 0;
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(Window window) {
        if (Build.VERSION.SDK_INT < 28) {
            View decorView = window.getDecorView();
            decorView.setSystemUiVisibility(decorView.getSystemUiVisibility() | 128 | 64);
        }
    }
}
