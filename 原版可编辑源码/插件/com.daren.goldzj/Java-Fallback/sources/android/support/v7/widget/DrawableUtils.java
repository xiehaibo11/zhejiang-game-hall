package android.support.v7.widget;

import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.DrawableContainer;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.InsetDrawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.ScaleDrawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.graphics.drawable.WrappedDrawable;
import android.support.v7.graphics.drawable.DrawableWrapper;
import android.util.Log;
import java.lang.reflect.Field;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class DrawableUtils {
    public static final Rect INSETS_NONE = null;
    private static final String TAG = "DrawableUtils";
    private static final String VECTOR_DRAWABLE_CLAZZ_NAME = "android.graphics.drawable.VectorDrawable";
    private static Class<?> sInsetsClazz;

    static {
        INSETS_NONE = new Rect();
        if (Build.VERSION.SDK_INT < 18) goto L9;
        sInsetsClazz = Class.forName("android.graphics.Insets");     // Catch: ClassNotFoundException -> L6
        return;
    L10:
        return;
    }

    private DrawableUtils() {
    }

    public static Rect getOpticalBounds(Drawable r12) {
        if (sInsetsClazz == null) goto L36;
        Drawable r122 = DrawableCompat.unwrap(r12);     // Catch: Exception -> L34
        Object r123 = r122.getClass().getMethod("getOpticalInsets", new Class[0]).invoke(r122, new Object[0]);     // Catch: Exception -> L34
        if (r123 == null) goto L36;
        Rect r0 = new Rect();     // Catch: Exception -> L34
        Field[] r1 = sInsetsClazz.getFields();     // Catch: Exception -> L34
        int r3 = r1.length;     // Catch: Exception -> L34
        int r4 = 0;
    L7:
        if (r4 >= r3) goto L33;
        Field r5 = r1[r4];     // Catch: Exception -> L34
        String r6 = r5.getName();     // Catch: Exception -> L34
        byte r7 = -1;
        switch(r6.hashCode()) {
            case -1383228885: goto L21;
            case 115029: goto L18;
            case 3317767: goto L15;
            case 108511772: goto L12;
            default: goto L23;
        };     // Catch: Exception -> L34
    L23:
        if (r7 == 0) goto L31;
        if (r7 == 1) goto L30;
        if (r7 == 2) goto L29;
        if (r7 != 3) goto L32;
        r0.bottom = r5.getInt(r123);     // Catch: Exception -> L34
    L32:
        r4 = r4 + 1;
        goto L7
    L29:
        r0.right = r5.getInt(r123);     // Catch: Exception -> L34
        goto L32
    L30:
        r0.top = r5.getInt(r123);     // Catch: Exception -> L34
        goto L32
    L31:
        r0.left = r5.getInt(r123);     // Catch: Exception -> L34
        goto L32
    L12:
        if (r6.equals("right") == false) goto L23;
        r7 = 2;
        goto L23
    L15:
        if (r6.equals("left") == false) goto L23;
        r7 = 0;
        goto L23
    L18:
        if (r6.equals("top") == false) goto L23;
        r7 = 1;
        goto L23
    L21:
        if (r6.equals("bottom") == false) goto L23;
        r7 = 3;
        goto L23
    L33:
        return r0;
    L34:
        Log.e(TAG, "Couldn't obtain the optical insets. Ignoring.");
    L36:
        return INSETS_NONE;
    }

    static void fixDrawable(@NonNull Drawable r2) {
        if (Build.VERSION.SDK_INT == 21) goto L5;
        return;
    L5:
        if (VECTOR_DRAWABLE_CLAZZ_NAME.equals(r2.getClass().getName()) == false) goto L9;
        fixVectorDrawableTinting(r2);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean canSafelyMutateDrawable(@NonNull Drawable r4) {
        if (Build.VERSION.SDK_INT >= 15) goto L8;
        if ((r4 instanceof InsetDrawable) == false) goto L8;
        return false;
    L8:
        if (Build.VERSION.SDK_INT >= 15) goto L13;
        if ((r4 instanceof GradientDrawable) == false) goto L13;
        return false;
    L13:
        if (Build.VERSION.SDK_INT >= 17) goto L18;
        if ((r4 instanceof LayerDrawable) == false) goto L18;
        return false;
    L18:
        if ((r4 instanceof DrawableContainer) == false) goto L28;
        Drawable.ConstantState r42 = r4.getConstantState();
        if ((r42 instanceof DrawableContainer.DrawableContainerState) == false) goto L39;
        Drawable[] r43 = ((DrawableContainer.DrawableContainerState) r42).getChildren();
        int r0 = r43.length;
        int r1 = 0;
    L22:
        if (r1 >= r0) goto L44;
        if (canSafelyMutateDrawable(r43[r1]) == false) goto L25;
        r1 = r1 + 1;
        goto L22
    L25:
        return false;
    L44:
        return true;
    L39:
        return true;
    L28:
        if ((r4 instanceof WrappedDrawable) == false) goto L32;
        return canSafelyMutateDrawable(((WrappedDrawable) r4).getWrappedDrawable());
    L32:
        if ((r4 instanceof DrawableWrapper) == false) goto L36;
        return canSafelyMutateDrawable(((DrawableWrapper) r4).getWrappedDrawable());
    L36:
        if ((r4 instanceof ScaleDrawable) == true) goto L38;
        return true;
    L38:
        return canSafelyMutateDrawable(((ScaleDrawable) r4).getDrawable());
    }

    private static void fixVectorDrawableTinting(Drawable r2) {
        int[] r0 = r2.getState();
        if (r0 != null) goto L5;
    L8:
        r2.setState(ThemeUtils.CHECKED_STATE_SET);
    L9:
        r2.setState(r0);
        return;
    L5:
        if (r0.length == 0) goto L8;
        r2.setState(ThemeUtils.EMPTY_STATE_SET);
        goto L9
    }

    public static PorterDuff.Mode parseTintMode(int r1, PorterDuff.Mode r2) {
        if (r1 == 3) goto L21;
        if (r1 == 5) goto L19;
        if (r1 == 9) goto L17;
        switch(r1) {
            case 14: goto L15;
            case 15: goto L13;
            case 16: goto L11;
            default: goto L9;
        };
    L9:
        return r2;
    L11:
        return PorterDuff.Mode.ADD;
    L13:
        return PorterDuff.Mode.SCREEN;
    L15:
        return PorterDuff.Mode.MULTIPLY;
    L17:
        return PorterDuff.Mode.SRC_ATOP;
    L19:
        return PorterDuff.Mode.SRC_IN;
    L21:
        return PorterDuff.Mode.SRC_OVER;
    }
}
