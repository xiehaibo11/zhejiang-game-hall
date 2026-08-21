package com.qihoo360.loader2;

import android.os.Build;
import com.qihoo360.mobilesafe.core.BuildConfig;
import java.lang.reflect.Method;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class VMRuntimeCompat {
    private static final byte[] GET_LOCKER = new byte[0];
    private static volatile Boolean sIs64Bit;

    public static boolean is64Bit() {
        if (sIs64Bit != null) {
            return sIs64Bit.booleanValue();
        }
        synchronized (GET_LOCKER) {
            if (sIs64Bit != null) {
                return sIs64Bit.booleanValue();
            }
            sIs64Bit = Boolean.valueOf(is64BitImpl());
            return sIs64Bit.booleanValue();
        }
    }

    private static boolean is64BitImpl() {
        Class<?> cls;
        Method declaredMethod;
        Object objInvoke;
        Method declaredMethod2;
        try {
            if (Build.VERSION.SDK_INT < 21 || (cls = Class.forName("dalvik.system.VMRuntime")) == null || (declaredMethod = cls.getDeclaredMethod("getRuntime", new Class[0])) == null || (objInvoke = declaredMethod.invoke(null, new Object[0])) == null || (declaredMethod2 = cls.getDeclaredMethod("is64Bit", new Class[0])) == null) {
                return false;
            }
            Object objInvoke2 = declaredMethod2.invoke(objInvoke, new Object[0]);
            if (objInvoke2 instanceof Boolean) {
                return ((Boolean) objInvoke2).booleanValue();
            }
        } catch (Throwable th) {
            if (BuildConfig.DEBUG) {
                th.printStackTrace();
            }
        }
        return false;
    }

    public static String getArtOatCpuType() {
        return is64Bit() ? BuildCompat.ARM64 : BuildCompat.ARM;
    }
}
