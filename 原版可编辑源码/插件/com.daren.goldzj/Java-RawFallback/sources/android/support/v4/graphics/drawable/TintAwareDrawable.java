package android.support.v4.graphics.drawable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface TintAwareDrawable {
    void setTint(@android.support.annotation.ColorInt int r1);

    void setTintList(android.content.res.ColorStateList r1);

    void setTintMode(android.graphics.PorterDuff.Mode r1);
}
