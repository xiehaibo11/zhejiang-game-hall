package com.qihoo360.replugin;

import android.os.Build;
import com.qihoo360.loader.utils.StringUtils;
import com.qihoo360.loader2.PMF;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.utils.ReflectUtils;
import dalvik.system.PathClassLoader;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.URL;
import java.util.Enumeration;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginClassLoader extends PathClassLoader {
    private static final String TAG = "RePluginClassLoader";
    private Method findLibraryMethod;
    private Method findResourceMethod;
    private Method findResourcesMethod;
    private Method getPackageMethod;
    private final ClassLoader mOrig;

    public RePluginClassLoader(ClassLoader classLoader, ClassLoader classLoader2) {
        super("", "", classLoader);
        this.mOrig = classLoader2;
        copyFromOriginal(classLoader2);
        initMethods(classLoader2);
    }

    private void initMethods(ClassLoader classLoader) {
        Class<?> cls = classLoader.getClass();
        Method method = ReflectUtils.getMethod(cls, "findResource", String.class);
        this.findResourceMethod = method;
        method.setAccessible(true);
        Method method2 = ReflectUtils.getMethod(cls, "findResources", String.class);
        this.findResourcesMethod = method2;
        method2.setAccessible(true);
        Method method3 = ReflectUtils.getMethod(cls, "findLibrary", String.class);
        this.findLibraryMethod = method3;
        method3.setAccessible(true);
        Method method4 = ReflectUtils.getMethod(cls, "getPackage", String.class);
        this.getPackageMethod = method4;
        method4.setAccessible(true);
    }

    private void copyFromOriginal(ClassLoader classLoader) {
        if (LogDebug.LOG && IPC.isPersistentProcess()) {
            LogDebug.d(TAG, "copyFromOriginal: Fields=" + StringUtils.toStringWithLines(ReflectUtils.getAllFieldsList(classLoader.getClass())));
        }
        if (Build.VERSION.SDK_INT <= 10) {
            copyFieldValue("libPath", classLoader);
            copyFieldValue("libraryPathElements", classLoader);
            copyFieldValue("mDexs", classLoader);
            copyFieldValue("mFiles", classLoader);
            copyFieldValue("mPaths", classLoader);
            copyFieldValue("mZips", classLoader);
            return;
        }
        copyFieldValue("pathList", classLoader);
    }

    private void copyFieldValue(String str, ClassLoader classLoader) {
        try {
            Field field = ReflectUtils.getField(classLoader.getClass(), str);
            if (field == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "rpcl.cfv: null! f=" + str);
                return;
            }
            ReflectUtils.removeFieldFinalModifier(field);
            Object field2 = ReflectUtils.readField(field, classLoader);
            ReflectUtils.writeField(field, this, field2);
            if (LogDebug.LOG) {
                LogDebug.d(TAG, "copyFieldValue: Copied. f=" + str + "; actually=" + ReflectUtils.readField(field, this) + "; orig=" + field2);
            }
        } catch (IllegalAccessException unused) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "rpcl.cfv: fail! f=" + str);
        }
    }

    @Override
    protected Class<?> loadClass(String str, boolean z) throws ClassNotFoundException {
        Class<?> clsLoadClass = PMF.loadClass(str, z);
        if (clsLoadClass != null) {
            return clsLoadClass;
        }
        try {
            Class<?> clsLoadClass2 = this.mOrig.loadClass(str);
            if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                LogDebug.d(TAG, "loadClass: load other class, cn=" + str);
            }
            return clsLoadClass2;
        } catch (Throwable unused) {
            return super.loadClass(str, z);
        }
    }

    @Override
    protected Class<?> findClass(String str) throws ClassNotFoundException {
        LogRelease.w(LogDebug.PLUGIN_TAG, "NRH lcl.fc: c=" + str);
        return super.findClass(str);
    }

    @Override
    protected URL findResource(String str) {
        try {
            return (URL) this.findResourceMethod.invoke(this.mOrig, str);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
            return super.findResource(str);
        } catch (IllegalArgumentException e2) {
            e2.printStackTrace();
            return super.findResource(str);
        } catch (InvocationTargetException e3) {
            e3.printStackTrace();
            return super.findResource(str);
        }
    }

    @Override
    protected Enumeration<URL> findResources(String str) {
        try {
            return (Enumeration) this.findResourcesMethod.invoke(this.mOrig, str);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
            return super.findResources(str);
        } catch (IllegalArgumentException e2) {
            e2.printStackTrace();
            return super.findResources(str);
        } catch (InvocationTargetException e3) {
            e3.printStackTrace();
            return super.findResources(str);
        }
    }

    @Override
    public String findLibrary(String str) {
        try {
            return (String) this.findLibraryMethod.invoke(this.mOrig, str);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
            return super.findLibrary(str);
        } catch (IllegalArgumentException e2) {
            e2.printStackTrace();
            return super.findLibrary(str);
        } catch (InvocationTargetException e3) {
            e3.printStackTrace();
            return super.findLibrary(str);
        }
    }

    @Override
    protected Package getPackage(String str) {
        Package r0 = null;
        if (str != null && !str.isEmpty()) {
            try {
                r0 = (Package) this.getPackageMethod.invoke(this.mOrig, str);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            } catch (IllegalArgumentException e2) {
                e2.printStackTrace();
            } catch (InvocationTargetException e3) {
                e3.printStackTrace();
            }
            if (r0 == null) {
                LogRelease.w(LogDebug.PLUGIN_TAG, "NRH lcl.gp.1: n=" + str);
                r0 = super.getPackage(str);
            }
            if (r0 == null) {
                LogRelease.w(LogDebug.PLUGIN_TAG, "NRH lcl.gp.2: n=" + str);
                return definePackage(str, "Unknown", "0.0", "Unknown", "Unknown", "0.0", "Unknown", null);
            }
        }
        return r0;
    }

    @Override
    public String toString() {
        return getClass().getName() + "[mBase=" + this.mOrig.toString() + "]";
    }
}
