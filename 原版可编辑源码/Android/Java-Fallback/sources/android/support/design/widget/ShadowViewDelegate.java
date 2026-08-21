package android.support.design.widget;

public interface ShadowViewDelegate {
    float getRadius();

    boolean isCompatPaddingEnabled();

    void setBackgroundDrawable(android.graphics.drawable.Drawable r1);

    void setShadowPadding(int r1, int r2, int r3, int r4);
}
