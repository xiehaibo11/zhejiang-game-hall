package android.support.design.widget;

import android.graphics.Outline;

public class CircularBorderDrawableLollipop extends CircularBorderDrawable {
    @Override
    public void getOutline(Outline outline) {
        copyBounds(this.rect);
        outline.setOval(this.rect);
    }
}
