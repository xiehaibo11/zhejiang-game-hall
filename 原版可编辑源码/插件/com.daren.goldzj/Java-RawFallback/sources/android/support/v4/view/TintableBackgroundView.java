package android.support.v4.view;

public interface TintableBackgroundView {
    @android.support.annotation.Nullable
    android.content.res.ColorStateList getSupportBackgroundTintList();

    @android.support.annotation.Nullable
    android.graphics.PorterDuff.Mode getSupportBackgroundTintMode();

    void setSupportBackgroundTintList(@android.support.annotation.Nullable android.content.res.ColorStateList r1);

    void setSupportBackgroundTintMode(@android.support.annotation.Nullable android.graphics.PorterDuff.Mode r1);
}
