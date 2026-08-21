package org.cocos2dx.lib;

import android.app.Activity;
import android.os.Build;
import android.view.View;

public class Utils {
    private static Activity sActivity;

    static {
    }

    public Utils() {
    }

    public static void setActivity(Activity r0) {
        sActivity = r0;
    }

    public static Activity getActivity() {
        return sActivity;
    }

    public static void hideVirtualButton() {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return;
    L5:
        if (sActivity == null) goto L9;
        int r1 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION")).intValue();
        int r2 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN")).intValue();
        int r3 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_HIDE_NAVIGATION")).intValue();
        int r4 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_FULLSCREEN")).intValue();
        Object[] r7 = {Integer.valueOf(((((((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_LAYOUT_STABLE")).intValue() | r1) | r2) | r3) | r4) | ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_IMMERSIVE_STICKY")).intValue())};
        Cocos2dxReflectionHelper.invokeInstanceMethod(sActivity.getWindow().getDecorView(), "setSystemUiVisibility", new Class[]{Integer.TYPE}, r7);
        return;
    }
}
