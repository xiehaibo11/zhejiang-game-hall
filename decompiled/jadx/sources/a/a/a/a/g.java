package a.a.a.a;

import android.content.Context;
import android.util.Log;

/* JADX INFO: compiled from: VivoAndOppoUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class g {
    public static boolean a(Context context) {
        try {
            return context.getPackageManager().hasSystemFeature("com.oppo.feature.screen.heteromorphism");
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean b(Context context) {
        try {
            try {
                try {
                    try {
                        Class<?> clsLoadClass = context.getClassLoader().loadClass("android.util.FtFeature");
                        return ((Boolean) clsLoadClass.getMethod("isFeatureSupport", Integer.TYPE).invoke(clsLoadClass, 32)).booleanValue();
                    } catch (Exception unused) {
                        Log.e("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo Exception");
                        return false;
                    }
                } catch (NoSuchMethodException unused2) {
                    Log.e("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo NoSuchMethodException");
                    return false;
                }
            } catch (ClassNotFoundException unused3) {
                Log.e("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo ClassNotFoundException");
                return false;
            }
        } catch (Throwable unused4) {
            return false;
        }
    }
}
