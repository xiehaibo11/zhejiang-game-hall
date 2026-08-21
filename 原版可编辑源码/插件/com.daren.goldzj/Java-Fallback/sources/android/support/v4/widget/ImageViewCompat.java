package android.support.v4.widget;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.widget.ImageView;

public class ImageViewCompat {
    /* JADX WARN: Multi-variable type inference failed */
    @Nullable
    public static ColorStateList getImageTintList(@NonNull ImageView r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getImageTintList();
    L7:
        if ((r2 instanceof TintableImageSourceView) == true) goto L11;
        return null;
    L11:
        return ((TintableImageSourceView) r2).getSupportImageTintList();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setImageTintList(@NonNull ImageView r2, @Nullable ColorStateList r3) {
        if (Build.VERSION.SDK_INT < 21) goto L19;
        r2.setImageTintList(r3);
        if (Build.VERSION.SDK_INT != 21) goto L22;
        Drawable r32 = r2.getDrawable();
        if (r2.getImageTintList() != null) goto L9;
    L11:
        boolean r0 = false;
    L12:
        if (r32 == null) goto L23;
        if (r0 == true) goto L15;
        return;
    L15:
        if (r32.isStateful() == false) goto L17;
        r32.setState(r2.getDrawableState());
    L17:
        r2.setImageDrawable(r32);
        return;
    L23:
        return;
    L9:
        if (r2.getImageTintMode() == null) goto L11;
        r0 = true;
        goto L12
    L22:
        return;
    L19:
        if ((r2 instanceof TintableImageSourceView) == false) goto L26;
        ((TintableImageSourceView) r2).setSupportImageTintList(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Nullable
    public static PorterDuff.Mode getImageTintMode(@NonNull ImageView r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getImageTintMode();
    L7:
        if ((r2 instanceof TintableImageSourceView) == true) goto L11;
        return null;
    L11:
        return ((TintableImageSourceView) r2).getSupportImageTintMode();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setImageTintMode(@NonNull ImageView r2, @Nullable PorterDuff.Mode r3) {
        if (Build.VERSION.SDK_INT < 21) goto L19;
        r2.setImageTintMode(r3);
        if (Build.VERSION.SDK_INT != 21) goto L22;
        Drawable r32 = r2.getDrawable();
        if (r2.getImageTintList() != null) goto L9;
    L11:
        boolean r0 = false;
    L12:
        if (r32 == null) goto L23;
        if (r0 == true) goto L15;
        return;
    L15:
        if (r32.isStateful() == false) goto L17;
        r32.setState(r2.getDrawableState());
    L17:
        r2.setImageDrawable(r32);
        return;
    L23:
        return;
    L9:
        if (r2.getImageTintMode() == null) goto L11;
        r0 = true;
        goto L12
    L22:
        return;
    L19:
        if ((r2 instanceof TintableImageSourceView) == false) goto L26;
        ((TintableImageSourceView) r2).setSupportImageTintMode(r3);
        return;
    }

    private ImageViewCompat() {
    }
}
