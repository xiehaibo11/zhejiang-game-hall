package android.support.v4.view;

import android.graphics.Rect;
import android.os.Build;
import android.support.annotation.Nullable;
import android.view.WindowInsets;

public class WindowInsetsCompat {
    private final Object mInsets;

    private WindowInsetsCompat(Object r1) {
        this.mInsets = r1;
    }

    public WindowInsetsCompat(WindowInsetsCompat r4) {
        WindowInsets r1 = null;
        if (Build.VERSION.SDK_INT < 20) goto L8;
        if (r4 == null) goto L7;
        r1 = new WindowInsets((WindowInsets) r4.mInsets);
    L7:
        this.mInsets = r1;
        return;
    L8:
        this.mInsets = null;
    }

    public int getSystemWindowInsetLeft() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getSystemWindowInsetLeft();
    }

    public int getSystemWindowInsetTop() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getSystemWindowInsetTop();
    }

    public int getSystemWindowInsetRight() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getSystemWindowInsetRight();
    }

    public int getSystemWindowInsetBottom() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getSystemWindowInsetBottom();
    }

    public boolean hasSystemWindowInsets() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return false;
    L5:
        return ((WindowInsets) this.mInsets).hasSystemWindowInsets();
    }

    public boolean hasInsets() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return false;
    L5:
        return ((WindowInsets) this.mInsets).hasInsets();
    }

    public boolean isConsumed() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return false;
    L5:
        return ((WindowInsets) this.mInsets).isConsumed();
    }

    public boolean isRound() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return false;
    L5:
        return ((WindowInsets) this.mInsets).isRound();
    }

    public WindowInsetsCompat consumeSystemWindowInsets() {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return null;
    L5:
        return new WindowInsetsCompat(((WindowInsets) this.mInsets).consumeSystemWindowInsets());
    }

    public WindowInsetsCompat replaceSystemWindowInsets(int r3, int r4, int r5, int r6) {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        return null;
    L5:
        return new WindowInsetsCompat(((WindowInsets) this.mInsets).replaceSystemWindowInsets(r3, r4, r5, r6));
    }

    public WindowInsetsCompat replaceSystemWindowInsets(Rect r3) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return new WindowInsetsCompat(((WindowInsets) this.mInsets).replaceSystemWindowInsets(r3));
    }

    public int getStableInsetTop() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getStableInsetTop();
    }

    public int getStableInsetLeft() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getStableInsetLeft();
    }

    public int getStableInsetRight() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getStableInsetRight();
    }

    public int getStableInsetBottom() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return 0;
    L5:
        return ((WindowInsets) this.mInsets).getStableInsetBottom();
    }

    public boolean hasStableInsets() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return false;
    L5:
        return ((WindowInsets) this.mInsets).hasStableInsets();
    }

    public WindowInsetsCompat consumeStableInsets() {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return new WindowInsetsCompat(((WindowInsets) this.mInsets).consumeStableInsets());
    }

    @Nullable
    public DisplayCutoutCompat getDisplayCutout() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return null;
    L5:
        return DisplayCutoutCompat.wrap(((WindowInsets) this.mInsets).getDisplayCutout());
    }

    public WindowInsetsCompat consumeDisplayCutout() {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        return this;
    L5:
        return new WindowInsetsCompat(((WindowInsets) this.mInsets).consumeDisplayCutout());
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
        WindowInsetsCompat r52 = (WindowInsetsCompat) r5;
        Object r2 = this.mInsets;
        if (r2 != null) goto L17;
        if (r52.mInsets == null) goto L20;
        return false;
    L20:
        return true;
    L17:
        return r2.equals(r52.mInsets);
    }

    public int hashCode() {
        Object r0 = this.mInsets;
        if (r0 != null) goto L6;
        return 0;
    L6:
        return r0.hashCode();
    }

    static WindowInsetsCompat wrap(Object r1) {
        if (r1 != null) goto L5;
        return null;
    L5:
        return new WindowInsetsCompat(r1);
    }

    static Object unwrap(WindowInsetsCompat r0) {
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.mInsets;
    }
}
