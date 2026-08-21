package a.a.a.a;

import android.content.Context;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;

public class c {
    public static boolean a(Context context) {
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

    public static void a(Window window) {
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
