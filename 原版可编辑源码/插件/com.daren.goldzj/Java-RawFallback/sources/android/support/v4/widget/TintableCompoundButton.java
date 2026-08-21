package android.support.v4.widget;

public interface TintableCompoundButton {
    @android.support.annotation.Nullable
    android.content.res.ColorStateList getSupportButtonTintList();

    @android.support.annotation.Nullable
    android.graphics.PorterDuff.Mode getSupportButtonTintMode();

    void setSupportButtonTintList(@android.support.annotation.Nullable android.content.res.ColorStateList r1);

    void setSupportButtonTintMode(@android.support.annotation.Nullable android.graphics.PorterDuff.Mode r1);
}
