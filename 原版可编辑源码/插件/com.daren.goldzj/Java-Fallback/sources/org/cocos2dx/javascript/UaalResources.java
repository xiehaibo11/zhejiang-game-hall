package org.cocos2dx.javascript;

import android.content.Context;
import android.content.res.Resources;
import android.util.Log;
import com.bianqi.wpll.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class UaalResources extends Resources {
    String TAG;
    private Context mContext;
    private Resources mHostResources;
    private Resources mPluginResource;

    public UaalResources(Context r4) {
        super(r4.getResources().getAssets(), r4.getResources().getDisplayMetrics(), r4.getResources().getConfiguration());
        this.TAG = "UaalResources";
        this.mPluginResource = r4.getResources();
        this.mContext = r4;
        if (RePlugin.isHostInitialized() == false) goto L5;
        this.mHostResources = RePlugin.getHostContext().getResources();
        return;
    L5:
        this.mHostResources = r4.getResources();
    }

    @Override
    public int getIdentifier(String r11, String r12, String r13) {
        Log.i(this.TAG, "getIdentifier name: " + r11 + " defType: " + r12 + " defPackage: " + r13);
        int r132 = super.getIdentifier(r11, r12, BuildConfig.APPLICATION_ID);
        if (r132 != 0) goto L9;
        Log.e(this.TAG, "super getIdentifier return 0, force use host package");
        r132 = Integer.parseInt(String.valueOf(invokeMethod(this.mHostResources.getClass().getClassLoader(), "android.content.res.Resources", "getIdentifier", this.mHostResources, new Class[]{String.class, String.class, String.class}, new Object[]{r11, r12, "android"})));     // Catch: Exception -> L7
    L7:
        e = move-exception;
        e.printStackTrace();
    L9:
        Log.i(this.TAG, "getIdentifier return " + r132);
        return r132;
    }

    private Object invokeMethod(ClassLoader r1, String r2, String r3, Object r4, Class<?>[] r5, Object... r6) throws ClassNotFoundException, NoSuchMethodException, InvocationTargetException, IllegalAccessException {
        if (r4 != null) goto L6;
        return null;
    L6:
        return invokeMethod(getMethod(r1, r2, r3, r5), r4, r6);
    }

    private Method getMethod(ClassLoader r2, String r3, String r4, Class<?>[] r5) throws ClassNotFoundException, NoSuchMethodException {
        Class<?> r22 = Class.forName(r3, false, r2);
        if (r22 != null) goto L5;
        return null;
    L5:
        return r22.getDeclaredMethod(r4, r5);
    }

    private Object invokeMethod(Method r3, Object r4, Object... r5) throws InvocationTargetException, IllegalAccessException {
        if (r3 == null) goto L10;
        boolean r0 = r3.isAccessible();
        if (r0 == true) goto L6;
        r3.setAccessible(true);
    L6:
        Object r42 = r3.invoke(r4, r5);
        if (r0 == true) goto L9;
        r3.setAccessible(false);
    L9:
        return r42;
    L10:
        return null;
    }
}
