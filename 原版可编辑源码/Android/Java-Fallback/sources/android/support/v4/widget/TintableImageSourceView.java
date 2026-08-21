package android.support.v4.widget;

public interface TintableImageSourceView {
    android.content.res.ColorStateList getSupportImageTintList();

    android.graphics.PorterDuff.Mode getSupportImageTintMode();

    void setSupportImageTintList(android.content.res.ColorStateList r1);

    void setSupportImageTintMode(android.graphics.PorterDuff.Mode r1);
}
