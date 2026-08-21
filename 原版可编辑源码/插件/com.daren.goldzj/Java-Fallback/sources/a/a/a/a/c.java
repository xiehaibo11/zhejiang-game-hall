package a.a.a.a;

import android.content.Context;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;

public class c {
    public static boolean a(Context r4) {
        Class<?> r42 = r4.getClassLoader().loadClass("com.huawei.android.util.HwNotchSizeUtil");     // Catch: Exception -> L7 Throwable -> L11
        return ((Boolean) r42.getMethod("hasNotchInScreen", new Class[0]).invoke(r42, new Object[0])).booleanValue();
    L7:
        e = move-exception;
        Log.e("HuaWeiUtils ", " hasNotch " + e.getMessage());     // Catch: Throwable -> L11
    L10:
        return false;
    }

    public static void a(Window r6) {
        if (r6 != null) goto L4;
        return;
    L4:
        WindowManager.LayoutParams r62 = r6.getAttributes();
        Class<?> r0 = Class.forName("com.huawei.android.view.LayoutParamsEx");     // Catch: Exception -> L9
        r0.getMethod("addHwFlags", new Class[]{Integer.TYPE}).invoke(r0.getConstructor(new Class[]{WindowManager.LayoutParams.class}).newInstance(new Object[]{r62}), new Object[]{256});     // Catch: Exception -> L9
        return;
    L9:
        e = move-exception;
        Log.e("HuaWeiUtils ", "  setFullScreenWindowLayoutInDisplayCutout " + e.getMessage());
    }
}
