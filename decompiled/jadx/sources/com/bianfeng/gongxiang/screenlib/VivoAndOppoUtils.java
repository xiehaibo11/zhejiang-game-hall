package com.bianfeng.gongxiang.screenlib;

import android.content.Context;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
class VivoAndOppoUtils {
    public static final int VIVO_FILLET = 8;
    public static final int VIVO_NOTCH = 32;

    VivoAndOppoUtils() {
    }

    public static boolean hasVivoNotch(Context context) {
        try {
            try {
                try {
                    try {
                        Class<?> clsLoadClass = context.getClassLoader().loadClass("android.util.FtFeature");
                        return ((Boolean) clsLoadClass.getMethod("isFeatureSupport", Integer.TYPE).invoke(clsLoadClass, 32)).booleanValue();
                    } catch (Exception unused) {
                        Log.i("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo Exception");
                        return false;
                    }
                } catch (NoSuchMethodException unused2) {
                    Log.i("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo NoSuchMethodException");
                    return false;
                }
            } catch (ClassNotFoundException unused3) {
                Log.i("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo ClassNotFoundException");
                return false;
            }
        } catch (Throwable unused4) {
            return false;
        }
    }

    public static boolean hasOppoNotch(Context context) {
        try {
            return context.getPackageManager().hasSystemFeature("com.oppo.feature.screen.heteromorphism");
        } catch (Exception unused) {
            return false;
        }
    }
}
