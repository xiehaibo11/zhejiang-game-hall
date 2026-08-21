package android.support.v4.widget;

import android.os.Build;
import android.support.annotation.NonNull;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.util.Log;
import android.view.View;
import android.widget.PopupWindow;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public final class PopupWindowCompat {
    private static final String TAG = "PopupWindowCompatApi21";
    private static Method sGetWindowLayoutTypeMethod;
    private static boolean sGetWindowLayoutTypeMethodAttempted;
    private static Field sOverlapAnchorField;
    private static boolean sOverlapAnchorFieldAttempted;
    private static Method sSetWindowLayoutTypeMethod;
    private static boolean sSetWindowLayoutTypeMethodAttempted;

    private PopupWindowCompat() {
    }

    public static void showAsDropDown(@NonNull PopupWindow r2, @NonNull View r3, int r4, int r5, int r6) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.showAsDropDown(r3, r4, r5, r6);
        return;
    L6:
        if ((GravityCompat.getAbsoluteGravity(r6, ViewCompat.getLayoutDirection(r3)) & 7) != 5) goto L8;
        r4 = r4 - (r2.getWidth() - r3.getWidth());
    L8:
        r2.showAsDropDown(r3, r4, r5);
    }

    public static void setOverlapAnchor(@NonNull PopupWindow r4, boolean r5) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        r4.setOverlapAnchor(r5);
        return;
    L6:
        if (Build.VERSION.SDK_INT >= 21) goto L8;
        return;
    L8:
        if (sOverlapAnchorFieldAttempted == false) goto L22;
    L15:
        Field r0 = sOverlapAnchorField;
        if (r0 == null) goto L28;
        r0.set(r4, Boolean.valueOf(r5));     // Catch: IllegalAccessException -> L19
        return;
    L19:
        e = move-exception;
        Log.i(TAG, "Could not set overlap anchor field in PopupWindow", e);
        return;
    L28:
        return;
    L22:
        sOverlapAnchorField = PopupWindow.class.getDeclaredField("mOverlapAnchor");     // Catch: NoSuchFieldException -> L12
        sOverlapAnchorField.setAccessible(true);     // Catch: NoSuchFieldException -> L12
    L14:
        sOverlapAnchorFieldAttempted = true;
    L12:
        e = move-exception;
        Log.i(TAG, "Could not fetch mOverlapAnchor field from PopupWindow", e);
        goto L14
    }

    public static boolean getOverlapAnchor(@NonNull PopupWindow r4) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r4.getOverlapAnchor();
    L7:
        if (Build.VERSION.SDK_INT >= 21) goto L9;
        return false;
    L9:
        if (sOverlapAnchorFieldAttempted == false) goto L24;
    L16:
        Field r0 = sOverlapAnchorField;
        if (r0 == null) goto L29;
        return ((Boolean) r0.get(r4)).booleanValue();
    L20:
        e = move-exception;
        Log.i(TAG, "Could not get overlap anchor field in PopupWindow", e);
        return false;
    L29:
        return false;
    L24:
        sOverlapAnchorField = PopupWindow.class.getDeclaredField("mOverlapAnchor");     // Catch: NoSuchFieldException -> L13
        sOverlapAnchorField.setAccessible(true);     // Catch: NoSuchFieldException -> L13
    L15:
        sOverlapAnchorFieldAttempted = true;
    L13:
        e = move-exception;
        Log.i(TAG, "Could not fetch mOverlapAnchor field from PopupWindow", e);
        goto L15
    }

    public static void setWindowLayoutType(@NonNull PopupWindow r6, int r7) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        r6.setWindowLayoutType(r7);
        return;
    L7:
        if (sSetWindowLayoutTypeMethodAttempted == false) goto L18;
    L10:
        Method r0 = sSetWindowLayoutTypeMethod;
        if (r0 == null) goto L20;
        r0.invoke(r6, new Object[]{Integer.valueOf(r7)});     // Catch: Exception -> L14
        return;
    L21:
        return;
    L20:
        return;
    L18:
        sSetWindowLayoutTypeMethod = PopupWindow.class.getDeclaredMethod("setWindowLayoutType", new Class[]{Integer.TYPE});     // Catch: Exception -> L15
        sSetWindowLayoutTypeMethod.setAccessible(true);     // Catch: Exception -> L15
    L9:
        sSetWindowLayoutTypeMethodAttempted = true;
        goto L10
    }

    public static int getWindowLayoutType(@NonNull PopupWindow r5) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r5.getWindowLayoutType();
    L7:
        if (sGetWindowLayoutTypeMethodAttempted == false) goto L20;
    L11:
        Method r0 = sGetWindowLayoutTypeMethod;
        if (r0 != null) goto L18;
    L15:
        return 0;
    L18:
        return ((Integer) r0.invoke(r5, new Object[0])).intValue();
    L20:
        sGetWindowLayoutTypeMethod = PopupWindow.class.getDeclaredMethod("getWindowLayoutType", new Class[0]);     // Catch: Exception -> L16
        sGetWindowLayoutTypeMethod.setAccessible(true);     // Catch: Exception -> L16
    L10:
        sGetWindowLayoutTypeMethodAttempted = true;
        goto L11
    }
}
