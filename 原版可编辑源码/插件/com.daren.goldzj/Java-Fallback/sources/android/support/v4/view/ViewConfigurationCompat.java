package android.support.v4.view;

import android.R;
import android.content.Context;
import android.content.res.Resources;
import android.os.Build;
import android.support.annotation.NonNull;
import android.util.Log;
import android.util.TypedValue;
import android.view.ViewConfiguration;
import com.bianqi.wpll.BuildConfig;
import java.lang.reflect.Method;

public final class ViewConfigurationCompat {
    private static final String TAG = "ViewConfigCompat";
    private static Method sGetScaledScrollFactorMethod;

    static {
        if (Build.VERSION.SDK_INT != 25) goto L10;
        sGetScaledScrollFactorMethod = ViewConfiguration.class.getDeclaredMethod("getScaledScrollFactor", new Class[0]);     // Catch: Exception -> L6
        return;
    L6:
        Log.i(TAG, "Could not find method getScaledScrollFactor() on ViewConfiguration");
        return;
    }

    @Deprecated
    public static int getScaledPagingTouchSlop(ViewConfiguration r0) {
        return r0.getScaledPagingTouchSlop();
    }

    @Deprecated
    public static boolean hasPermanentMenuKey(ViewConfiguration r0) {
        return r0.hasPermanentMenuKey();
    }

    public static float getScaledHorizontalScrollFactor(@NonNull ViewConfiguration r2, @NonNull Context r3) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return r2.getScaledHorizontalScrollFactor();
    L7:
        return getLegacyScrollFactor(r2, r3);
    }

    public static float getScaledVerticalScrollFactor(@NonNull ViewConfiguration r2, @NonNull Context r3) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return r2.getScaledVerticalScrollFactor();
    L7:
        return getLegacyScrollFactor(r2, r3);
    }

    private static float getLegacyScrollFactor(ViewConfiguration r3, Context r4) {
        if (Build.VERSION.SDK_INT >= 25) goto L5;
    L11:
        TypedValue r32 = new TypedValue();
        if (r4.getTheme().resolveAttribute(R.attr.listPreferredItemHeight, r32, true) == true) goto L14;
        return 0.0f;
    L14:
        return r32.getDimension(r4.getResources().getDisplayMetrics());
    L5:
        if (sGetScaledScrollFactorMethod == null) goto L11;
        return ((Integer) r0.invoke(r3, new Object[0])).intValue();
    L10:
        Log.i(TAG, "Could not find method getScaledScrollFactor() on ViewConfiguration");
        goto L11
    }

    public static int getScaledHoverSlop(ViewConfiguration r2) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return r2.getScaledHoverSlop();
    L7:
        return r2.getScaledTouchSlop() / 2;
    }

    public static boolean shouldShowMenuShortcutsWhenKeyboardPresent(ViewConfiguration r2, @NonNull Context r3) {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        Resources r22 = r3.getResources();
        int r32 = r22.getIdentifier("config_showMenuShortcutsWhenKeyboardPresent", "bool", BuildConfig.APPLICATION_ID);
        if (r32 != 0) goto L9;
    L11:
        return false;
    L9:
        if (r22.getBoolean(r32) == false) goto L11;
        return true;
    L5:
        return r2.shouldShowMenuShortcutsWhenKeyboardPresent();
    }

    private ViewConfigurationCompat() {
    }
}
