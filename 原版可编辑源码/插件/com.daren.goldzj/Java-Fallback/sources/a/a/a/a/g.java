package a.a.a.a;

import android.content.Context;
import android.util.Log;

public class g {
    public static boolean a(Context r1) {
        return r1.getPackageManager().hasSystemFeature("com.oppo.feature.screen.heteromorphism");
    L4:
        return false;
    }

    public static boolean b(Context r6) {
        Class<?> r62 = r6.getClassLoader().loadClass("android.util.FtFeature");     // Catch: Exception -> L7 NoSuchMethodException -> L9 ClassNotFoundException -> L11 Throwable -> L13
        return ((Boolean) r62.getMethod("isFeatureSupport", new Class[]{Integer.TYPE}).invoke(r62, new Object[]{32})).booleanValue();
    L7:
        Log.e("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo Exception");     // Catch: Throwable -> L13
        return false;
    L9:
        Log.e("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo NoSuchMethodException");     // Catch: Throwable -> L13
        return false;
    L11:
        Log.e("ymnsdk ", "VivoAndOppoUtils hasNotchAtVivo ClassNotFoundException");     // Catch: Throwable -> L13
    L12:
        return false;
    }
}
