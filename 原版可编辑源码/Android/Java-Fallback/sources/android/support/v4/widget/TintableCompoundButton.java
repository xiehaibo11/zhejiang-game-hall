package android.support.v4.widget;

public interface TintableCompoundButton {
    android.content.res.ColorStateList getSupportButtonTintList();

    android.graphics.PorterDuff.Mode getSupportButtonTintMode();

    void setSupportButtonTintList(android.content.res.ColorStateList r1);

    void setSupportButtonTintMode(android.graphics.PorterDuff.Mode r1);
}
