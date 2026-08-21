package org.cocos2dx.lib;

import android.util.Log;

public class Cocos2dxReflectionHelper {
    public Cocos2dxReflectionHelper() {
    }

    public static <T> T getConstantValue(Class r4, String r5) {
        return (T) r4.getDeclaredField(r5).get(null);
    L7:
        Log.e("error", r5 + " is not accessable");
    L9:
        return null;
    L6:
        Log.e("error", "arguments error when get " + r5);
    L8:
        Log.e("error", "can not find " + r5 + " in " + r4.getName());
    L5:
        Log.e("error", "can not get constant" + r5);
        goto L9
    }

    public static <T> T invokeInstanceMethod(Object r2, String r3, Class[] r4, Object[] r5) {
        Class<?> r1 = r2.getClass();
        return (T) r1.getMethod(r3, r4).invoke(r2, r5);
    L7:
        Log.e("error", r3 + " is not accessible");
        return null;
    L6:
        Log.e("error", "arguments are error when invoking " + r3);
        return null;
    L8:
        Log.e("error", "can not find " + r3 + " in " + r1.getName());
        return null;
    L5:
        Log.e("error", "an exception was thrown by the invoked method when invoking " + r3);
        return null;
    }
}
