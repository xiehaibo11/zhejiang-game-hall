package android.support.design.resources;

public class MaterialResources {
    private MaterialResources() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.res.ColorStateList getColorStateList(android.content.Context r1, android.content.res.TypedArray r2, int r3) {
            boolean r0 = r2.hasValue(r3)
            if (r0 == 0) goto L14
            r0 = 0
            int r0 = r2.getResourceId(r3, r0)
            if (r0 == 0) goto L14
            android.content.res.ColorStateList r1 = android.support.v7.content.res.AppCompatResources.getColorStateList(r1, r0)
            if (r1 == 0) goto L14
            return r1
        L14:
            android.content.res.ColorStateList r1 = r2.getColorStateList(r3)
            return r1
    }

    public static android.graphics.drawable.Drawable getDrawable(android.content.Context r1, android.content.res.TypedArray r2, int r3) {
            boolean r0 = r2.hasValue(r3)
            if (r0 == 0) goto L14
            r0 = 0
            int r0 = r2.getResourceId(r3, r0)
            if (r0 == 0) goto L14
            android.graphics.drawable.Drawable r1 = android.support.v7.content.res.AppCompatResources.getDrawable(r1, r0)
            if (r1 == 0) goto L14
            return r1
        L14:
            android.graphics.drawable.Drawable r1 = r2.getDrawable(r3)
            return r1
    }

    static int getIndexWithValue(android.content.res.TypedArray r0, int r1, int r2) {
            boolean r0 = r0.hasValue(r1)
            if (r0 == 0) goto L7
            return r1
        L7:
            return r2
    }

    public static android.support.design.resources.TextAppearance getTextAppearance(android.content.Context r1, android.content.res.TypedArray r2, int r3) {
            boolean r0 = r2.hasValue(r3)
            if (r0 == 0) goto L13
            r0 = 0
            int r2 = r2.getResourceId(r3, r0)
            if (r2 == 0) goto L13
            android.support.design.resources.TextAppearance r3 = new android.support.design.resources.TextAppearance
            r3.<init>(r1, r2)
            return r3
        L13:
            r1 = 0
            return r1
    }
}
