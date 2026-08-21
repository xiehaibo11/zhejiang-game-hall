package a.a.a.a;

import android.content.Context;
import android.util.Log;
import android.view.Window;

public class h {
    public static boolean a(Context r6) {
        Class<?> r62 = r6.getClassLoader().loadClass("android.os.SystemProperties");     // Catch: Exception -> L9 Throwable -> L12
        if (((Integer) r62.getMethod("getInt", new Class[]{String.class, Integer.TYPE}).invoke(r62, new Object[]{"ro.miui.notch", 0})).intValue() != 1) goto L16;
        return true;
    L16:
        return false;
    L9:
        e = move-exception;
        e.printStackTrace();     // Catch: Throwable -> L12
    L11:
        return false;
    }

    public static void a(Window r6) {
        Window.class.getMethod("addExtraFlags", new Class[]{Integer.TYPE}).invoke(r6, new Object[]{768});     // Catch: Exception -> L6
        return;
    L6:
        Log.e("ymnsdk ", "addExtraFlags not found.");
    }
}
