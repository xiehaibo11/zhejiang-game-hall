package android.support.design.drawable;

public class DrawableUtils {
    private DrawableUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.PorterDuffColorFilter updateTintFilter(android.graphics.drawable.Drawable r1, android.content.res.ColorStateList r2, android.graphics.PorterDuff.Mode r3) {
            if (r2 == 0) goto L14
            if (r3 != 0) goto L5
            goto L14
        L5:
            int[] r1 = r1.getState()
            r0 = 0
            int r1 = r2.getColorForState(r1, r0)
            android.graphics.PorterDuffColorFilter r2 = new android.graphics.PorterDuffColorFilter
            r2.<init>(r1, r3)
            return r2
        L14:
            r1 = 0
            return r1
    }
}
