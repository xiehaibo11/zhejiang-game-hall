package com.qihoo360.loader.utils2;

import com.qihoo360.replugin.utils.ReflectUtils;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class FilePermissionUtils {
    public static final int S_IRGRP = 32;
    public static final int S_IROTH = 4;
    public static final int S_IRUSR = 256;
    public static final int S_IRWXG = 56;
    public static final int S_IRWXO = 7;
    public static final int S_IRWXU = 448;
    public static final int S_IWGRP = 16;
    public static final int S_IWOTH = 2;
    public static final int S_IWUSR = 128;
    public static final int S_IXGRP = 8;
    public static final int S_IXOTH = 1;
    public static final int S_IXUSR = 64;
    private static Class<?> sFileUtilsClass;
    private static Method sGetPermissionMethod;
    private static Method sSetPermissionMethod;

    public static int setPermissions(String str, int i, int i2, int i3) {
        try {
            initClass();
            if (sSetPermissionMethod == null) {
                sSetPermissionMethod = ReflectUtils.getMethod(sFileUtilsClass, "setPermissions", String.class, Integer.TYPE, Integer.TYPE, Integer.TYPE);
            }
            Object objInvoke = sSetPermissionMethod.invoke(null, str, Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3));
            if (objInvoke == null || !(objInvoke instanceof Integer)) {
                return -1;
            }
            return ((Integer) objInvoke).intValue();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            return -1;
        } catch (IllegalAccessException e2) {
            e2.printStackTrace();
            return -1;
        } catch (InvocationTargetException e3) {
            e3.printStackTrace();
            return -1;
        }
    }

    public static int getPermissions(String str, int[] iArr) {
        try {
            initClass();
            if (sGetPermissionMethod == null) {
                sGetPermissionMethod = ReflectUtils.getMethod(sFileUtilsClass, "getPermissions", String.class, int[].class);
            }
            Object objInvoke = sGetPermissionMethod.invoke(null, str, iArr);
            if (objInvoke == null || !(objInvoke instanceof Integer)) {
                return -1;
            }
            return ((Integer) objInvoke).intValue();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            return -1;
        } catch (IllegalAccessException e2) {
            e2.printStackTrace();
            return -1;
        } catch (InvocationTargetException e3) {
            e3.printStackTrace();
            return -1;
        }
    }

    private static void initClass() throws ClassNotFoundException {
        if (sFileUtilsClass == null) {
            sFileUtilsClass = ReflectUtils.getClass("android.os.FileUtils");
        }
    }
}
