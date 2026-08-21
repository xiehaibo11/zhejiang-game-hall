package a.a.a.a;

import android.content.Context;
import android.util.Log;
import android.view.Window;

public class h {
    public static boolean a(Context context) {
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

    public static void a(Window window) {
        try {
            Window.class.getMethod("addExtraFlags", Integer.TYPE).invoke(window, 768);
        } catch (Exception unused) {
            Log.e("ymnsdk ", "addExtraFlags not found.");
        }
    }
}
