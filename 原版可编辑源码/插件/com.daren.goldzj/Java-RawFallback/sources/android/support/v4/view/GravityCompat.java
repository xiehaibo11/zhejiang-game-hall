package android.support.v4.view;

public final class GravityCompat {
    public static final int END = 8388613;
    public static final int RELATIVE_HORIZONTAL_GRAVITY_MASK = 8388615;
    public static final int RELATIVE_LAYOUT_DIRECTION = 8388608;
    public static final int START = 8388611;

    private GravityCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void apply(int r2, int r3, int r4, android.graphics.Rect r5, int r6, int r7, android.graphics.Rect r8, int r9) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            android.view.Gravity.apply(r2, r3, r4, r5, r6, r7, r8, r9)
            goto Ld
        La:
            android.view.Gravity.apply(r2, r3, r4, r5, r6, r7, r8)
        Ld:
            return
    }

    public static void apply(int r2, int r3, int r4, android.graphics.Rect r5, android.graphics.Rect r6, int r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            android.view.Gravity.apply(r2, r3, r4, r5, r6, r7)
            goto Ld
        La:
            android.view.Gravity.apply(r2, r3, r4, r5, r6)
        Ld:
            return
    }

    public static void applyDisplay(int r2, android.graphics.Rect r3, android.graphics.Rect r4, int r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto La
            android.view.Gravity.applyDisplay(r2, r3, r4, r5)
            goto Ld
        La:
            android.view.Gravity.applyDisplay(r2, r3, r4)
        Ld:
            return
    }

    public static int getAbsoluteGravity(int r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = android.view.Gravity.getAbsoluteGravity(r2, r3)
            return r2
        Lb:
            r3 = -8388609(0xffffffffff7fffff, float:-3.4028235E38)
            r2 = r2 & r3
            return r2
    }
}
