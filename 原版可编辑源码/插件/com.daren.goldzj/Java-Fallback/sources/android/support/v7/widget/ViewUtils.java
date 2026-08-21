package android.support.v7.widget;

import android.graphics.Rect;
import android.os.Build;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.util.Log;
import android.view.View;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ViewUtils {
    private static final String TAG = "ViewUtils";
    private static Method sComputeFitSystemWindowsMethod;

    static {
        if (Build.VERSION.SDK_INT < 18) goto L12;
        sComputeFitSystemWindowsMethod = View.class.getDeclaredMethod("computeFitSystemWindows", new Class[]{Rect.class, Rect.class});     // Catch: NoSuchMethodException -> L8
        if (sComputeFitSystemWindowsMethod.isAccessible() == true) goto L13;
        sComputeFitSystemWindowsMethod.setAccessible(true);     // Catch: NoSuchMethodException -> L8
        return;
    L13:
        return;
    L8:
        Log.d(TAG, "Could not find method computeFitSystemWindows. Oh well.");
        return;
    }

    private ViewUtils() {
    }

    public static boolean isLayoutRtl(View r1) {
        if (ViewCompat.getLayoutDirection(r1) == 1) goto L7;
        return false;
    L7:
        return true;
    }

    public static void computeFitSystemWindows(View r3, Rect r4, Rect r5) {
        Method r0 = sComputeFitSystemWindowsMethod;
        if (r0 != null) goto L10;
        return;
    L10:
        r0.invoke(r3, new Object[]{r4, r5});     // Catch: Exception -> L7
        return;
    L7:
        e = move-exception;
        Log.d(TAG, "Could not invoke computeFitSystemWindows", e);
    }

    public static void makeOptionalFitsSystemWindows(View r6) {
        if (Build.VERSION.SDK_INT < 16) goto L17;
        Method r2 = r6.getClass().getMethod("makeOptionalFitsSystemWindows", new Class[0]);     // Catch: IllegalAccessException -> L9 InvocationTargetException -> L11 NoSuchMethodException -> L13
        if (r2.isAccessible() == true) goto L7;
        r2.setAccessible(true);     // Catch: IllegalAccessException -> L9 InvocationTargetException -> L11 NoSuchMethodException -> L13
    L7:
        r2.invoke(r6, new Object[0]);     // Catch: IllegalAccessException -> L9 InvocationTargetException -> L11 NoSuchMethodException -> L13
    L20:
        return;
    L9:
        e = move-exception;
        Log.d(TAG, "Could not invoke makeOptionalFitsSystemWindows", e);
        return;
    L13:
        Log.d(TAG, "Could not find method makeOptionalFitsSystemWindows. Oh well...");
        return;
    L11:
        e = move-exception;
        Log.d(TAG, "Could not invoke makeOptionalFitsSystemWindows", e);
        return;
    }
}
