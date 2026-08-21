package android.support.v4.view;

import android.graphics.Rect;
import android.os.Build;
import android.view.DisplayCutout;
import java.util.List;

public final class DisplayCutoutCompat {
    private final Object mDisplayCutout;

    public DisplayCutoutCompat(Rect r3, List<Rect> r4) {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        DisplayCutout r0 = new DisplayCutout(r3, r4);
    L6:
        this(r0);
        return;
    L5:
        r0 = null;
        goto L6
    }

    private DisplayCutoutCompat(Object r1) {
        this.mDisplayCutout = r1;
    }

    public int getSafeInsetTop() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return 0;
    L5:
        return ((DisplayCutout) this.mDisplayCutout).getSafeInsetTop();
    }

    public int getSafeInsetBottom() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return 0;
    L5:
        return ((DisplayCutout) this.mDisplayCutout).getSafeInsetBottom();
    }

    public int getSafeInsetLeft() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return 0;
    L5:
        return ((DisplayCutout) this.mDisplayCutout).getSafeInsetLeft();
    }

    public int getSafeInsetRight() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return 0;
    L5:
        return ((DisplayCutout) this.mDisplayCutout).getSafeInsetRight();
    }

    public List<Rect> getBoundingRects() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return null;
    L5:
        return ((DisplayCutout) this.mDisplayCutout).getBoundingRects();
    }

    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if (r5 != null) goto L8;
    L18:
        return false;
    L8:
        if (getClass() != r5.getClass()) goto L18;
        DisplayCutoutCompat r52 = (DisplayCutoutCompat) r5;
        Object r2 = this.mDisplayCutout;
        if (r2 != null) goto L17;
        if (r52.mDisplayCutout == null) goto L20;
        return false;
    L20:
        return true;
    L17:
        return r2.equals(r52.mDisplayCutout);
    }

    public int hashCode() {
        Object r0 = this.mDisplayCutout;
        if (r0 != null) goto L6;
        return 0;
    L6:
        return r0.hashCode();
    }

    public String toString() {
        return "DisplayCutoutCompat{" + this.mDisplayCutout + "}";
    }

    static DisplayCutoutCompat wrap(Object r1) {
        if (r1 != null) goto L5;
        return null;
    L5:
        return new DisplayCutoutCompat(r1);
    }
}
