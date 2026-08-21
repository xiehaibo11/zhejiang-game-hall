package android.support.v4.view;

public final class MarginLayoutParamsCompat {
    private MarginLayoutParamsCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 17
            if (r0 < r2) goto Lc
            int r3 = r3.getLayoutDirection()
            goto Ld
        Lc:
            r3 = r1
        Ld:
            if (r3 == 0) goto L13
            r0 = 1
            if (r3 == r0) goto L13
            goto L14
        L13:
            r1 = r3
        L14:
            return r1
    }

    public static int getMarginEnd(android.view.ViewGroup.MarginLayoutParams r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = r2.getMarginEnd()
            return r2
        Lb:
            int r2 = r2.rightMargin
            return r2
    }

    public static int getMarginStart(android.view.ViewGroup.MarginLayoutParams r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = r2.getMarginStart()
            return r2
        Lb:
            int r2 = r2.leftMargin
            return r2
    }

    public static boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            boolean r2 = r2.isMarginRelative()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static void resolveLayoutDirection(android.view.ViewGroup.MarginLayoutParams r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L9
            r2.resolveLayoutDirection(r3)
        L9:
            return
    }

    public static void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L9
            r2.setLayoutDirection(r3)
        L9:
            return
    }

    public static void setMarginEnd(android.view.ViewGroup.MarginLayoutParams r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            r2.setMarginEnd(r3)
            goto Lc
        La:
            r2.rightMargin = r3
        Lc:
            return
    }

    public static void setMarginStart(android.view.ViewGroup.MarginLayoutParams r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            r2.setMarginStart(r3)
            goto Lc
        La:
            r2.leftMargin = r3
        Lc:
            return
    }
}
