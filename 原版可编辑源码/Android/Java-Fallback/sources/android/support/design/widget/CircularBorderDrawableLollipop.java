package android.support.design.widget;

public class CircularBorderDrawableLollipop extends android.support.design.widget.CircularBorderDrawable {
    public CircularBorderDrawableLollipop() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void getOutline(android.graphics.Outline r2) {
            r1 = this;
            android.graphics.Rect r0 = r1.rect
            r1.copyBounds(r0)
            android.graphics.Rect r0 = r1.rect
            r2.setOval(r0)
            return
    }
}
