package android.support.v4.view;

public class WindowInsetsCompat {
    private final java.lang.Object mInsets;

    public WindowInsetsCompat(android.support.v4.view.WindowInsetsCompat r4) {
            r3 = this;
            r3.<init>()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 20
            if (r0 < r2) goto L19
            if (r4 != 0) goto Ld
            goto L16
        Ld:
            android.view.WindowInsets r1 = new android.view.WindowInsets
            java.lang.Object r4 = r4.mInsets
            android.view.WindowInsets r4 = (android.view.WindowInsets) r4
            r1.<init>(r4)
        L16:
            r3.mInsets = r1
            goto L1b
        L19:
            r3.mInsets = r1
        L1b:
            return
    }

    private WindowInsetsCompat(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.mInsets = r1
            return
    }

    static java.lang.Object unwrap(android.support.v4.view.WindowInsetsCompat r0) {
            if (r0 != 0) goto L4
            r0 = 0
            goto L6
        L4:
            java.lang.Object r0 = r0.mInsets
        L6:
            return r0
    }

    static android.support.v4.view.WindowInsetsCompat wrap(java.lang.Object r1) {
            if (r1 != 0) goto L4
            r1 = 0
            goto La
        L4:
            android.support.v4.view.WindowInsetsCompat r0 = new android.support.v4.view.WindowInsetsCompat
            r0.<init>(r1)
            r1 = r0
        La:
            return r1
    }

    public android.support.v4.view.WindowInsetsCompat consumeDisplayCutout() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L14
            android.support.v4.view.WindowInsetsCompat r0 = new android.support.v4.view.WindowInsetsCompat
            java.lang.Object r1 = r2.mInsets
            android.view.WindowInsets r1 = (android.view.WindowInsets) r1
            android.view.WindowInsets r1 = r1.consumeDisplayCutout()
            r0.<init>(r1)
            return r0
        L14:
            return r2
    }

    public android.support.v4.view.WindowInsetsCompat consumeStableInsets() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L14
            android.support.v4.view.WindowInsetsCompat r0 = new android.support.v4.view.WindowInsetsCompat
            java.lang.Object r1 = r2.mInsets
            android.view.WindowInsets r1 = (android.view.WindowInsets) r1
            android.view.WindowInsets r1 = r1.consumeStableInsets()
            r0.<init>(r1)
            return r0
        L14:
            r0 = 0
            return r0
    }

    public android.support.v4.view.WindowInsetsCompat consumeSystemWindowInsets() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto L14
            android.support.v4.view.WindowInsetsCompat r0 = new android.support.v4.view.WindowInsetsCompat
            java.lang.Object r1 = r2.mInsets
            android.view.WindowInsets r1 = (android.view.WindowInsets) r1
            android.view.WindowInsets r1 = r1.consumeSystemWindowInsets()
            r0.<init>(r1)
            return r0
        L14:
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L26
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L26
        L12:
            android.support.v4.view.WindowInsetsCompat r5 = (android.support.v4.view.WindowInsetsCompat) r5
            java.lang.Object r2 = r4.mInsets
            if (r2 != 0) goto L1f
            java.lang.Object r5 = r5.mInsets
            if (r5 != 0) goto L1d
            goto L25
        L1d:
            r0 = 0
            goto L25
        L1f:
            java.lang.Object r5 = r5.mInsets
            boolean r0 = r2.equals(r5)
        L25:
            return r0
        L26:
            return r1
    }

    @android.support.annotation.Nullable
    public android.support.v4.view.DisplayCutoutCompat getDisplayCutout() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L13
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            android.view.DisplayCutout r0 = r0.getDisplayCutout()
            android.support.v4.view.DisplayCutoutCompat r0 = android.support.v4.view.DisplayCutoutCompat.wrap(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public int getStableInsetBottom() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getStableInsetBottom()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getStableInsetLeft() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getStableInsetLeft()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getStableInsetRight() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getStableInsetRight()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getStableInsetTop() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getStableInsetTop()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSystemWindowInsetBottom() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getSystemWindowInsetBottom()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSystemWindowInsetLeft() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getSystemWindowInsetLeft()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSystemWindowInsetRight() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getSystemWindowInsetRight()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getSystemWindowInsetTop() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            int r0 = r0.getSystemWindowInsetTop()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public boolean hasInsets() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            boolean r0 = r0.hasInsets()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public boolean hasStableInsets() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            boolean r0 = r0.hasStableInsets()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public boolean hasSystemWindowInsets() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            boolean r0 = r0.hasSystemWindowInsets()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.Object r0 = r1.mInsets
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            return r0
    }

    public boolean isConsumed() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            boolean r0 = r0.isConsumed()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public boolean isRound() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            java.lang.Object r0 = r2.mInsets
            android.view.WindowInsets r0 = (android.view.WindowInsets) r0
            boolean r0 = r0.isRound()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public android.support.v4.view.WindowInsetsCompat replaceSystemWindowInsets(int r3, int r4, int r5, int r6) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto L14
            android.support.v4.view.WindowInsetsCompat r0 = new android.support.v4.view.WindowInsetsCompat
            java.lang.Object r1 = r2.mInsets
            android.view.WindowInsets r1 = (android.view.WindowInsets) r1
            android.view.WindowInsets r3 = r1.replaceSystemWindowInsets(r3, r4, r5, r6)
            r0.<init>(r3)
            return r0
        L14:
            r3 = 0
            return r3
    }

    public android.support.v4.view.WindowInsetsCompat replaceSystemWindowInsets(android.graphics.Rect r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L14
            android.support.v4.view.WindowInsetsCompat r0 = new android.support.v4.view.WindowInsetsCompat
            java.lang.Object r1 = r2.mInsets
            android.view.WindowInsets r1 = (android.view.WindowInsets) r1
            android.view.WindowInsets r3 = r1.replaceSystemWindowInsets(r3)
            r0.<init>(r3)
            return r0
        L14:
            r3 = 0
            return r3
    }
}
