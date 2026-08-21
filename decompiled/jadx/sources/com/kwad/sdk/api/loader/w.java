package com.kwad.sdk.api.loader;

import android.os.Build;
import android.os.Process;

/* JADX INFO: loaded from: classes2.dex */
final class w {
    static boolean is64Bit() {
        if (Build.VERSION.SDK_INT >= 23) {
            return Process.is64Bit();
        }
        if (Build.VERSION.SDK_INT >= 21) {
            try {
                return ((Boolean) Reflect.ca("dalvik.system.VMRuntime").cd("getRuntime").cd("is64Bit").get()).booleanValue();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return false;
    }

    public static String wO() {
        return is64Bit() ? "arm64-v8a" : "armeabi-v7a";
    }
}
