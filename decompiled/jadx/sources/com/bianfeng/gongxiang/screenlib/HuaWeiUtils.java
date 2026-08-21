package com.bianfeng.gongxiang.screenlib;

import android.app.Activity;
import android.content.Context;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;

/* JADX INFO: loaded from: classes.dex */
class HuaWeiUtils {
    public static final int FLAG_NOTCH_HORIZONTAL = 1024;
    public static final int FLAG_NOTCH_PORTRAIT = 512;
    public static final int FLAG_NOTCH_SUPPORT = 256;

    public static int getBarSize(Activity activity) {
        return 0;
    }

    HuaWeiUtils() {
    }

    public static boolean hasNotch(Context context) {
        try {
            try {
                Class<?> clsLoadClass = context.getClassLoader().loadClass("com.huawei.android.util.HwNotchSizeUtil");
                return ((Boolean) clsLoadClass.getMethod("hasNotchInScreen", new Class[0]).invoke(clsLoadClass, new Object[0])).booleanValue();
            } catch (Exception e) {
                Log.e("HuaWeiUtils ", " hasNotch " + e.getMessage());
                return false;
            }
        } catch (Throwable unused) {
            return false;
        }
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(Window window) {
        if (window == null) {
            return;
        }
        WindowManager.LayoutParams attributes = window.getAttributes();
        try {
            Class<?> cls = Class.forName("com.huawei.android.view.LayoutParamsEx");
            cls.getMethod("addHwFlags", Integer.TYPE).invoke(cls.getConstructor(WindowManager.LayoutParams.class).newInstance(attributes), 256);
        } catch (Exception e) {
            Log.e("HuaWeiUtils ", "  setFullScreenWindowLayoutInDisplayCutout " + e.getMessage());
        }
    }
}
