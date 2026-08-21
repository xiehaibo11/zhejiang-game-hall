package android.support.v4.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface TintableImageSourceView {
    @android.support.annotation.Nullable
    android.content.res.ColorStateList getSupportImageTintList();

    @android.support.annotation.Nullable
    android.graphics.PorterDuff.Mode getSupportImageTintMode();

    void setSupportImageTintList(@android.support.annotation.Nullable android.content.res.ColorStateList r1);

    void setSupportImageTintMode(@android.support.annotation.Nullable android.graphics.PorterDuff.Mode r1);
}
