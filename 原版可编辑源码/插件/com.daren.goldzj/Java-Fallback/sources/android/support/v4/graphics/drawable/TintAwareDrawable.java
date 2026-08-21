package android.support.v4.graphics.drawable;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.support.annotation.ColorInt;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public interface TintAwareDrawable {
    void setTint(@ColorInt int r1);

    void setTintList(ColorStateList r1);

    void setTintMode(PorterDuff.Mode r1);
}
