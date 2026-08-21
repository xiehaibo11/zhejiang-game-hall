package android.support.v4.widget;

public final class CompoundButtonCompat {
    private static final java.lang.String TAG = "CompoundButtonCompat";
    private static java.lang.reflect.Field sButtonDrawableField;
    private static boolean sButtonDrawableFieldFetched;

    private CompoundButtonCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.drawable.Drawable getButtonDrawable(android.widget.CompoundButton r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            android.graphics.drawable.Drawable r4 = r4.getButtonDrawable()
            return r4
        Lb:
            boolean r0 = android.support.v4.widget.CompoundButtonCompat.sButtonDrawableFieldFetched
            java.lang.String r1 = "CompoundButtonCompat"
            if (r0 != 0) goto L28
            r0 = 1
            java.lang.Class<android.widget.CompoundButton> r2 = android.widget.CompoundButton.class
            java.lang.String r3 = "mButtonDrawable"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L20
            android.support.v4.widget.CompoundButtonCompat.sButtonDrawableField = r2     // Catch: java.lang.NoSuchFieldException -> L20
            r2.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L20
            goto L26
        L20:
            r2 = move-exception
            java.lang.String r3 = "Failed to retrieve mButtonDrawable field"
            android.util.Log.i(r1, r3, r2)
        L26:
            android.support.v4.widget.CompoundButtonCompat.sButtonDrawableFieldFetched = r0
        L28:
            java.lang.reflect.Field r0 = android.support.v4.widget.CompoundButtonCompat.sButtonDrawableField
            r2 = 0
            if (r0 == 0) goto L3c
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.IllegalAccessException -> L34
            android.graphics.drawable.Drawable r4 = (android.graphics.drawable.Drawable) r4     // Catch: java.lang.IllegalAccessException -> L34
            return r4
        L34:
            r4 = move-exception
            java.lang.String r0 = "Failed to get button drawable via reflection"
            android.util.Log.i(r1, r0, r4)
            android.support.v4.widget.CompoundButtonCompat.sButtonDrawableField = r2
        L3c:
            return r2
    }

    public static android.content.res.ColorStateList getButtonTintList(android.widget.CompoundButton r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.content.res.ColorStateList r2 = r2.getButtonTintList()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableCompoundButton
            if (r0 == 0) goto L16
            android.support.v4.widget.TintableCompoundButton r2 = (android.support.v4.widget.TintableCompoundButton) r2
            android.content.res.ColorStateList r2 = r2.getSupportButtonTintList()
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static android.graphics.PorterDuff.Mode getButtonTintMode(android.widget.CompoundButton r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.PorterDuff$Mode r2 = r2.getButtonTintMode()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableCompoundButton
            if (r0 == 0) goto L16
            android.support.v4.widget.TintableCompoundButton r2 = (android.support.v4.widget.TintableCompoundButton) r2
            android.graphics.PorterDuff$Mode r2 = r2.getSupportButtonTintMode()
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static void setButtonTintList(android.widget.CompoundButton r2, android.content.res.ColorStateList r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setButtonTintList(r3)
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableCompoundButton
            if (r0 == 0) goto L13
            android.support.v4.widget.TintableCompoundButton r2 = (android.support.v4.widget.TintableCompoundButton) r2
            r2.setSupportButtonTintList(r3)
        L13:
            return
    }

    public static void setButtonTintMode(android.widget.CompoundButton r2, android.graphics.PorterDuff.Mode r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setButtonTintMode(r3)
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableCompoundButton
            if (r0 == 0) goto L13
            android.support.v4.widget.TintableCompoundButton r2 = (android.support.v4.widget.TintableCompoundButton) r2
            r2.setSupportButtonTintMode(r3)
        L13:
            return
    }
}
