package android.support.v4.widget;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.Log;
import android.widget.CompoundButton;
import java.lang.reflect.Field;

public final class CompoundButtonCompat {
    private static final String TAG = "CompoundButtonCompat";
    private static Field sButtonDrawableField;
    private static boolean sButtonDrawableFieldFetched;

    private CompoundButtonCompat() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setButtonTintList(@NonNull CompoundButton r2, @Nullable ColorStateList r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setButtonTintList(r3);
        return;
    L6:
        if ((r2 instanceof TintableCompoundButton) == false) goto L10;
        ((TintableCompoundButton) r2).setSupportButtonTintList(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Nullable
    public static ColorStateList getButtonTintList(@NonNull CompoundButton r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getButtonTintList();
    L7:
        if ((r2 instanceof TintableCompoundButton) == true) goto L9;
        return null;
    L9:
        return ((TintableCompoundButton) r2).getSupportButtonTintList();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setButtonTintMode(@NonNull CompoundButton r2, @Nullable PorterDuff.Mode r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setButtonTintMode(r3);
        return;
    L6:
        if ((r2 instanceof TintableCompoundButton) == false) goto L10;
        ((TintableCompoundButton) r2).setSupportButtonTintMode(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Nullable
    public static PorterDuff.Mode getButtonTintMode(@NonNull CompoundButton r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getButtonTintMode();
    L7:
        if ((r2 instanceof TintableCompoundButton) == true) goto L9;
        return null;
    L9:
        return ((TintableCompoundButton) r2).getSupportButtonTintMode();
    }

    @Nullable
    public static Drawable getButtonDrawable(@NonNull CompoundButton r4) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r4.getButtonDrawable();
    L7:
        if (sButtonDrawableFieldFetched == false) goto L23;
    L14:
        Field r0 = sButtonDrawableField;
        if (r0 != null) goto L21;
    L20:
        return null;
    L21:
        return (Drawable) r0.get(r4);
    L18:
        e = move-exception;
        Log.i(TAG, "Failed to get button drawable via reflection", e);
        sButtonDrawableField = null;
        goto L20
    L23:
        sButtonDrawableField = CompoundButton.class.getDeclaredField("mButtonDrawable");     // Catch: NoSuchFieldException -> L11
        sButtonDrawableField.setAccessible(true);     // Catch: NoSuchFieldException -> L11
    L13:
        sButtonDrawableFieldFetched = true;
    L11:
        e = move-exception;
        Log.i(TAG, "Failed to retrieve mButtonDrawable field", e);
        goto L13
    }
}
