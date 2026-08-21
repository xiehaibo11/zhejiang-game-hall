package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Build;
import android.os.Process;
import com.qihoo360.loader2.BuildCompat;

public final class AbiUtil {
    private static Abi aHH;

    public enum Abi {
        UNKNOWN,
        ARMEABI_V7A,
        ARM64_V8A
    }

    public static String bD(Context context) {
        return isArm64(context) ? "arm64-v8a" : "armeabi-v7a";
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x000b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Abi bE(Context context) {
        Abi abi;
        Abi abi2 = aHH;
        if (abi2 != null) {
            return abi2;
        }
        if (Build.VERSION.SDK_INT >= 21) {
            if (Build.VERSION.SDK_INT >= 23) {
                abi = Process.is64Bit() ? Abi.ARM64_V8A : Abi.ARMEABI_V7A;
            } else if (Build.VERSION.SDK_INT >= 21) {
                try {
                    aHH = ((Boolean) s.f(s.a("dalvik.system.VMRuntime", "getRuntime", new Object[0]), "is64Bit", new Object[0])).booleanValue() ? Abi.ARM64_V8A : Abi.ARMEABI_V7A;
                } catch (Throwable th) {
                    th.printStackTrace();
                    try {
                        aHH = context.getApplicationInfo().nativeLibraryDir.contains(BuildCompat.ARM64) ? Abi.ARM64_V8A : Abi.UNKNOWN;
                    } catch (Throwable th2) {
                        th2.printStackTrace();
                        abi = Abi.UNKNOWN;
                        aHH = abi;
                    }
                }
            }
            aHH = abi;
        }
        return aHH;
    }

    public static boolean isArm64(Context context) {
        return bE(context) == Abi.ARM64_V8A;
    }
}
