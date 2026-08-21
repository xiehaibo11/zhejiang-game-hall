package com.bianfeng.utilslib.screen;

import android.app.Activity;
import android.content.Context;
import android.view.Window;
import android.view.WindowManager;
import com.bianfeng.utilslib.UtilsSdk;

public class HuaWeiUtils {
    public static final int FLAG_NOTCH_HORIZONTAL = 1024;
    public static final int FLAG_NOTCH_PORTRAIT = 512;
    public static final int FLAG_NOTCH_SUPPORT = 256;

    public static int getBarSize(Activity activity) {
        return 0;
    }

    public static boolean hasNotch(Context context) {
        try {
            try {
                Class<?> clsLoadClass = context.getClassLoader().loadClass("com.huawei.android.util.HwNotchSizeUtil");
                return ((Boolean) clsLoadClass.getMethod("hasNotchInScreen", new Class[0]).invoke(clsLoadClass, new Object[0])).booleanValue();
            } catch (Exception e) {
                UtilsSdk.getLogger().e("HuaWeiUtils  hasNotch " + e.getMessage());
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
            UtilsSdk.getLogger().e("HuaWeiUtils  setFullScreenWindowLayoutInDisplayCutout " + e.getMessage());
        }
    }
}
