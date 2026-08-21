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

    public UaalResources(Context context) {
        super(context.getResources().getAssets(), context.getResources().getDisplayMetrics(), context.getResources().getConfiguration());
        this.TAG = "UaalResources";
        this.mPluginResource = context.getResources();
        this.mContext = context;
        if (RePlugin.isHostInitialized()) {
            this.mHostResources = RePlugin.getHostContext().getResources();
        } else {
            this.mHostResources = context.getResources();
        }
    }

    @Override
    public int getIdentifier(String str, String str2, String str3) {
        Log.i(this.TAG, "getIdentifier name: " + str + " defType: " + str2 + " defPackage: " + str3);
        int identifier = super.getIdentifier(str, str2, BuildConfig.APPLICATION_ID);
        if (identifier == 0) {
            Log.e(this.TAG, "super getIdentifier return 0, force use host package");
            try {
                identifier = Integer.parseInt(String.valueOf(invokeMethod(this.mHostResources.getClass().getClassLoader(), "android.content.res.Resources", "getIdentifier", this.mHostResources, new Class[]{String.class, String.class, String.class}, str, str2, "android")));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        Log.i(this.TAG, "getIdentifier return " + identifier);
        return identifier;
    }

    private Object invokeMethod(ClassLoader classLoader, String str, String str2, Object obj, Class<?>[] clsArr, Object... objArr) throws IllegalAccessException, NoSuchMethodException, ClassNotFoundException, InvocationTargetException {
        if (obj == null) {
            return null;
        }
        return invokeMethod(getMethod(classLoader, str, str2, clsArr), obj, objArr);
    }

    private Method getMethod(ClassLoader classLoader, String str, String str2, Class<?>[] clsArr) throws NoSuchMethodException, ClassNotFoundException {
        Class<?> cls = Class.forName(str, false, classLoader);
        if (cls != null) {
            return cls.getDeclaredMethod(str2, clsArr);
        }
        return null;
    }

    private Object invokeMethod(Method method, Object obj, Object... objArr) throws IllegalAccessException, InvocationTargetException {
        if (method == null) {
            return null;
        }
        boolean zIsAccessible = method.isAccessible();
        if (!zIsAccessible) {
            method.setAccessible(true);
        }
        Object objInvoke = method.invoke(obj, objArr);
        if (!zIsAccessible) {
            method.setAccessible(false);
        }
        return objInvoke;
    }
}
