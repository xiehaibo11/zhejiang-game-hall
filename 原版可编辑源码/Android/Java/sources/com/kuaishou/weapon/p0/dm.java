package com.kuaishou.weapon.p0;

import android.content.Context;
import android.os.Build;
import android.os.Process;
import com.qihoo360.loader2.BuildCompat;

public final class dm {
    private static a a;

    public enum a {
        a,
        b,
        c
    }

    private dm() {
    }

    public static String a(Context context) {
        return b(context) ? "arm64-v8a" : "armeabi-v7a";
    }

    public static boolean b(Context context) {
        return c(context) == a.c;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x000b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static a c(Context context) {
        a aVar;
        a aVar2 = a;
        if (aVar2 != null) {
            return aVar2;
        }
        if (Build.VERSION.SDK_INT >= 21) {
            if (Build.VERSION.SDK_INT >= 23) {
                aVar = Process.is64Bit() ? a.c : a.b;
            } else if (Build.VERSION.SDK_INT >= 21) {
                try {
                    Class<?> cls = Class.forName("dalvik.system.VMRuntime");
                    a = ((Boolean) cls.getDeclaredMethod("is64Bit", new Class[0]).invoke(cls.getDeclaredMethod("getRuntime", new Class[0]).invoke(cls, new Object[0]), new Object[0])).booleanValue() ? a.c : a.b;
                } catch (Throwable th) {
                    th.printStackTrace();
                    try {
                        a = context.getApplicationInfo().nativeLibraryDir.contains(BuildCompat.ARM64) ? a.c : a.a;
                    } catch (Throwable th2) {
                        th2.printStackTrace();
                        aVar = a.a;
                        a = aVar;
                    }
                }
            }
            a = aVar;
        }
        return a;
    }
}
