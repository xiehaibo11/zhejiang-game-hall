package android.support.v4.view;

public final class DisplayCutoutCompat {
    private final java.lang.Object mDisplayCutout;

    public DisplayCutoutCompat(android.graphics.Rect r3, java.util.List<android.graphics.Rect> r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lc
            android.view.DisplayCutout r0 = new android.view.DisplayCutout
            r0.<init>(r3, r4)
            goto Ld
        Lc:
            r0 = 0
        Ld:
            r2.<init>(r0)
            return
    }

    private DisplayCutoutCompat(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.mDisplayCutout = r1
            return
    }

    static android.support.v4.view.DisplayCutoutCompat wrap(java.lang.Object r1) {
            if (r1 != 0) goto L4
            r1 = 0
            goto La
        L4:
            android.support.v4.view.DisplayCutoutCompat r0 = new android.support.v4.view.DisplayCutoutCompat
            r0.<init>(r1)
            r1 = r0
        La:
            return r1
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L24
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L24
        L12:
            android.support.v4.view.DisplayCutoutCompat r5 = (android.support.v4.view.DisplayCutoutCompat) r5
            java.lang.Object r2 = r4.mDisplayCutout
            java.lang.Object r5 = r5.mDisplayCutout
            if (r2 != 0) goto L1f
            if (r5 != 0) goto L1d
            goto L23
        L1d:
            r0 = r1
            goto L23
        L1f:
            boolean r0 = r2.equals(r5)
        L23:
            return r0
        L24:
            return r1
    }

    public java.util.List<android.graphics.Rect> getBoundingRects() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mDisplayCutout
            android.view.DisplayCutout r0 = (android.view.DisplayCutout) r0
            java.util.List r0 = r0.getBoundingRects()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSafeInsetBottom() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mDisplayCutout
            android.view.DisplayCutout r0 = (android.view.DisplayCutout) r0
            int r0 = r0.getSafeInsetBottom()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSafeInsetLeft() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mDisplayCutout
            android.view.DisplayCutout r0 = (android.view.DisplayCutout) r0
            int r0 = r0.getSafeInsetLeft()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSafeInsetRight() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mDisplayCutout
            android.view.DisplayCutout r0 = (android.view.DisplayCutout) r0
            int r0 = r0.getSafeInsetRight()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSafeInsetTop() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mDisplayCutout
            android.view.DisplayCutout r0 = (android.view.DisplayCutout) r0
            int r0 = r0.getSafeInsetTop()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.Object r0 = r1.mDisplayCutout
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DisplayCutoutCompat{"
            r0.append(r1)
            java.lang.Object r1 = r2.mDisplayCutout
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
