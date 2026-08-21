package android.support.v4.app;

import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.Log;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public final class BundleCompat {

    static class BundleCompatBaseImpl {
        private static final String TAG = "BundleCompatBaseImpl";
        private static Method sGetIBinderMethod;
        private static boolean sGetIBinderMethodFetched;
        private static Method sPutIBinderMethod;
        private static boolean sPutIBinderMethodFetched;

        private BundleCompatBaseImpl() {
        }

        public static IBinder getBinder(Bundle r7, String r8) {
            if (sGetIBinderMethodFetched == false) goto L20;
        L9:
            Method r0 = sGetIBinderMethod;
            if (r0 != null) goto L22;
        L19:
            return null;
        L22:
            return (IBinder) r0.invoke(r7, new Object[]{r8});
        L17:
            e = move-exception;
            Log.i(TAG, "Failed to invoke getIBinder via reflection", e);
            sGetIBinderMethod = null;
            goto L19
        L20:
            sGetIBinderMethod = Bundle.class.getMethod("getIBinder", new Class[]{String.class});     // Catch: NoSuchMethodException -> L6
            sGetIBinderMethod.setAccessible(true);     // Catch: NoSuchMethodException -> L6
        L8:
            sGetIBinderMethodFetched = true;
        L6:
            e = move-exception;
            Log.i(TAG, "Failed to retrieve getIBinder method", e);
            goto L8
        }

        public static void putBinder(Bundle r8, String r9, IBinder r10) {
            if (sPutIBinderMethodFetched == false) goto L20;
        L9:
            Method r0 = sPutIBinderMethod;
            if (r0 == null) goto L24;
            r0.invoke(r8, new Object[]{r9, r10});     // Catch: Throwable -> L13 IllegalAccessException -> L15 InvocationTargetException -> L17
            return;
        L13:
            e = move-exception;
            Log.i(TAG, "Failed to invoke putIBinder via reflection", e);
            sPutIBinderMethod = null;
            return;
        L24:
            return;
        L20:
            sPutIBinderMethod = Bundle.class.getMethod("putIBinder", new Class[]{String.class, IBinder.class});     // Catch: NoSuchMethodException -> L6
            sPutIBinderMethod.setAccessible(true);     // Catch: NoSuchMethodException -> L6
        L8:
            sPutIBinderMethodFetched = true;
        L6:
            e = move-exception;
            Log.i(TAG, "Failed to retrieve putIBinder method", e);
            goto L8
        }
    }

    private BundleCompat() {
    }

    @Nullable
    public static IBinder getBinder(@NonNull Bundle r2, @Nullable String r3) {
        if (Build.VERSION.SDK_INT < 18) goto L7;
        return r2.getBinder(r3);
    L7:
        return BundleCompatBaseImpl.getBinder(r2, r3);
    }

    public static void putBinder(@NonNull Bundle r2, @Nullable String r3, @Nullable IBinder r4) {
        if (Build.VERSION.SDK_INT < 18) goto L5;
        r2.putBinder(r3, r4);
        return;
    L5:
        BundleCompatBaseImpl.putBinder(r2, r3, r4);
    }
}
