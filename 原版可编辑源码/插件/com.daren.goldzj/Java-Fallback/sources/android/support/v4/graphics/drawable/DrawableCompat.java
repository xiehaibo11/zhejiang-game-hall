package android.support.v4.graphics.drawable;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.ColorFilter;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.DrawableContainer;
import android.graphics.drawable.InsetDrawable;
import android.os.Build;
import android.support.annotation.ColorInt;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.AttributeSet;
import android.util.Log;
import java.io.IOException;
import java.lang.reflect.Method;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

public final class DrawableCompat {
    private static final String TAG = "DrawableCompat";
    private static Method sGetLayoutDirectionMethod;
    private static boolean sGetLayoutDirectionMethodFetched;
    private static Method sSetLayoutDirectionMethod;
    private static boolean sSetLayoutDirectionMethodFetched;

    @Deprecated
    public static void jumpToCurrentState(@NonNull Drawable r0) {
        r0.jumpToCurrentState();
    }

    public static void setAutoMirrored(@NonNull Drawable r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.setAutoMirrored(r3);
        return;
    }

    public static boolean isAutoMirrored(@NonNull Drawable r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return r2.isAutoMirrored();
    }

    public static void setHotspot(@NonNull Drawable r2, float r3, float r4) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setHotspot(r3, r4);
        return;
    }

    public static void setHotspotBounds(@NonNull Drawable r2, int r3, int r4, int r5, int r6) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setHotspotBounds(r3, r4, r5, r6);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setTint(@NonNull Drawable r2, @ColorInt int r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setTint(r3);
        return;
    L6:
        if ((r2 instanceof TintAwareDrawable) == false) goto L10;
        ((TintAwareDrawable) r2).setTint(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setTintList(@NonNull Drawable r2, @Nullable ColorStateList r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setTintList(r3);
        return;
    L6:
        if ((r2 instanceof TintAwareDrawable) == false) goto L10;
        ((TintAwareDrawable) r2).setTintList(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setTintMode(@NonNull Drawable r2, @NonNull PorterDuff.Mode r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.setTintMode(r3);
        return;
    L6:
        if ((r2 instanceof TintAwareDrawable) == false) goto L10;
        ((TintAwareDrawable) r2).setTintMode(r3);
        return;
    }

    public static int getAlpha(@NonNull Drawable r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return 0;
    L5:
        return r2.getAlpha();
    }

    public static void applyTheme(@NonNull Drawable r2, @NonNull Resources.Theme r3) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.applyTheme(r3);
        return;
    }

    public static boolean canApplyTheme(@NonNull Drawable r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return false;
    L5:
        return r2.canApplyTheme();
    }

    public static ColorFilter getColorFilter(@NonNull Drawable r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return r2.getColorFilter();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void clearColorFilter(@NonNull Drawable r3) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        r3.clearColorFilter();
        return;
    L6:
        if (Build.VERSION.SDK_INT < 21) goto L23;
        r3.clearColorFilter();
        if ((r3 instanceof InsetDrawable) == false) goto L11;
        clearColorFilter(((InsetDrawable) r3).getDrawable());
        return;
    L11:
        if ((r3 instanceof WrappedDrawable) == false) goto L14;
        clearColorFilter(((WrappedDrawable) r3).getWrappedDrawable());
        return;
    L14:
        if ((r3 instanceof DrawableContainer) == false) goto L31;
        DrawableContainer.DrawableContainerState r32 = (DrawableContainer.DrawableContainerState) ((DrawableContainer) r3).getConstantState();
        if (r32 == null) goto L32;
        int r0 = 0;
        int r1 = r32.getChildCount();
    L18:
        if (r0 >= r1) goto L33;
        Drawable r2 = r32.getChild(r0);
        if (r2 == null) goto L22;
        clearColorFilter(r2);
    L22:
        r0 = r0 + 1;
        goto L18
    L33:
        return;
    L32:
        return;
    L31:
        return;
    L23:
        r3.clearColorFilter();
    }

    public static void inflate(@NonNull Drawable r2, @NonNull Resources r3, @NonNull XmlPullParser r4, @NonNull AttributeSet r5, @Nullable Resources.Theme r6) throws XmlPullParserException, IOException {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r2.inflate(r3, r4, r5, r6);
        return;
    L5:
        r2.inflate(r3, r4, r5);
    }

    public static Drawable wrap(@NonNull Drawable r2) {
        if (Build.VERSION.SDK_INT < 23) goto L6;
        return r2;
    L6:
        if (Build.VERSION.SDK_INT < 21) goto L13;
        if ((r2 instanceof TintAwareDrawable) == false) goto L10;
        return r2;
    L10:
        return new WrappedDrawableApi21(r2);
    L13:
        if ((r2 instanceof TintAwareDrawable) == false) goto L15;
        return r2;
    L15:
        return new WrappedDrawableApi14(r2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static <T extends Drawable> T unwrap(@NonNull Drawable r1) {
        if ((r1 instanceof WrappedDrawable) == true) goto L5;
        return r1;
    L5:
        return (T) ((WrappedDrawable) r1).getWrappedDrawable();
    }

    public static boolean setLayoutDirection(@NonNull Drawable r7, int r8) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r7.setLayoutDirection(r8);
    L7:
        if (Build.VERSION.SDK_INT >= 17) goto L9;
    L21:
        return false;
    L9:
        if (sSetLayoutDirectionMethodFetched == false) goto L22;
    L15:
        Method r0 = sSetLayoutDirectionMethod;
        if (r0 == null) goto L21;
        r0.invoke(r7, new Object[]{Integer.valueOf(r8)});     // Catch: Exception -> L19
        return true;
    L19:
        e = move-exception;
        Log.i(TAG, "Failed to invoke setLayoutDirection(int) via reflection", e);
        sSetLayoutDirectionMethod = null;
        goto L21
    L22:
        sSetLayoutDirectionMethod = Drawable.class.getDeclaredMethod("setLayoutDirection", new Class[]{Integer.TYPE});     // Catch: NoSuchMethodException -> L12
        sSetLayoutDirectionMethod.setAccessible(true);     // Catch: NoSuchMethodException -> L12
    L14:
        sSetLayoutDirectionMethodFetched = true;
    L12:
        e = move-exception;
        Log.i(TAG, "Failed to retrieve setLayoutDirection(int) method", e);
        goto L14
    }

    public static int getLayoutDirection(@NonNull Drawable r6) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r6.getLayoutDirection();
    L7:
        if (Build.VERSION.SDK_INT >= 17) goto L9;
    L22:
        return 0;
    L9:
        if (sGetLayoutDirectionMethodFetched == false) goto L23;
    L16:
        Method r0 = sGetLayoutDirectionMethod;
        if (r0 == null) goto L22;
        return ((Integer) r0.invoke(r6, new Object[0])).intValue();
    L20:
        e = move-exception;
        Log.i(TAG, "Failed to invoke getLayoutDirection() via reflection", e);
        sGetLayoutDirectionMethod = null;
        goto L22
    L23:
        sGetLayoutDirectionMethod = Drawable.class.getDeclaredMethod("getLayoutDirection", new Class[0]);     // Catch: NoSuchMethodException -> L13
        sGetLayoutDirectionMethod.setAccessible(true);     // Catch: NoSuchMethodException -> L13
    L15:
        sGetLayoutDirectionMethodFetched = true;
    L13:
        e = move-exception;
        Log.i(TAG, "Failed to retrieve getLayoutDirection() method", e);
        goto L15
    }

    private DrawableCompat() {
    }
}
