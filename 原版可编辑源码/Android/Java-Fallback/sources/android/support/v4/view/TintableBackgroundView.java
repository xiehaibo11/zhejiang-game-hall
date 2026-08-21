package android.support.v4.view;

public interface TintableBackgroundView {
    android.content.res.ColorStateList getSupportBackgroundTintList();

    android.graphics.PorterDuff.Mode getSupportBackgroundTintMode();

    void setSupportBackgroundTintList(android.content.res.ColorStateList r1);

    void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r1);
}
