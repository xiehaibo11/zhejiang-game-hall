package com.bianfeng.utilslib.screen;

import android.content.Context;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class VivoAndOppoUtils {
    public static final int VIVO_FILLET = 8;
    public static final int VIVO_NOTCH = 32;

    public static boolean hasVivoNotch(Context context) {
        try {
            try {
                Class<?> clsLoadClass = context.getClassLoader().loadClass("android.util.FtFeature");
                return ((Boolean) clsLoadClass.getMethod("isFeatureSupport", Integer.TYPE).invoke(clsLoadClass, 32)).booleanValue();
            } catch (ClassNotFoundException unused) {
                UtilsSdk.getLogger().e("VivoAndOppoUtils", "hasNotchAtVivo ClassNotFoundException");
                return false;
            } catch (NoSuchMethodException unused2) {
                UtilsSdk.getLogger().e("VivoAndOppoUtils", "hasNotchAtVivo NoSuchMethodException");
                return false;
            } catch (Exception unused3) {
                UtilsSdk.getLogger().e("VivoAndOppoUtils", "hasNotchAtVivo Exception");
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
