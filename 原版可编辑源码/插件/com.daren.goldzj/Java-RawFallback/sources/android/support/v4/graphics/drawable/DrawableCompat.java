package android.support.v4.graphics.drawable;

public final class DrawableCompat {
    private static final java.lang.String TAG = "DrawableCompat";
    private static java.lang.reflect.Method sGetLayoutDirectionMethod;
    private static boolean sGetLayoutDirectionMethodFetched;
    private static java.lang.reflect.Method sSetLayoutDirectionMethod;
    private static boolean sSetLayoutDirectionMethodFetched;

    private DrawableCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void applyTheme(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, @android.support.annotation.NonNull android.content.res.Resources.Theme r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.applyTheme(r3)
        L9:
            return
    }

    public static boolean canApplyTheme(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.canApplyTheme()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static void clearColorFilter(@android.support.annotation.NonNull android.graphics.drawable.Drawable r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r3.clearColorFilter()
            goto L53
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L50
            r3.clearColorFilter()
            boolean r0 = r3 instanceof android.graphics.drawable.InsetDrawable
            if (r0 == 0) goto L21
            android.graphics.drawable.InsetDrawable r3 = (android.graphics.drawable.InsetDrawable) r3
            android.graphics.drawable.Drawable r3 = r3.getDrawable()
            clearColorFilter(r3)
            goto L53
        L21:
            boolean r0 = r3 instanceof android.support.v4.graphics.drawable.WrappedDrawable
            if (r0 == 0) goto L2f
            android.support.v4.graphics.drawable.WrappedDrawable r3 = (android.support.v4.graphics.drawable.WrappedDrawable) r3
            android.graphics.drawable.Drawable r3 = r3.getWrappedDrawable()
            clearColorFilter(r3)
            goto L53
        L2f:
            boolean r0 = r3 instanceof android.graphics.drawable.DrawableContainer
            if (r0 == 0) goto L53
            android.graphics.drawable.DrawableContainer r3 = (android.graphics.drawable.DrawableContainer) r3
            android.graphics.drawable.Drawable$ConstantState r3 = r3.getConstantState()
            android.graphics.drawable.DrawableContainer$DrawableContainerState r3 = (android.graphics.drawable.DrawableContainer.DrawableContainerState) r3
            if (r3 == 0) goto L53
            r0 = 0
            int r1 = r3.getChildCount()
        L42:
            if (r0 >= r1) goto L53
            android.graphics.drawable.Drawable r2 = r3.getChild(r0)
            if (r2 == 0) goto L4d
            clearColorFilter(r2)
        L4d:
            int r0 = r0 + 1
            goto L42
        L50:
            r3.clearColorFilter()
        L53:
            return
    }

    public static int getAlpha(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            int r2 = r2.getAlpha()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static android.graphics.ColorFilter getColorFilter(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.ColorFilter r2 = r2.getColorFilter()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getLayoutDirection(@android.support.annotation.NonNull android.graphics.drawable.Drawable r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            int r6 = r6.getLayoutDirection()
            return r6
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            r2 = 0
            if (r0 < r1) goto L4d
            boolean r0 = android.support.v4.graphics.drawable.DrawableCompat.sGetLayoutDirectionMethodFetched
            java.lang.String r1 = "DrawableCompat"
            if (r0 != 0) goto L33
            r0 = 1
            java.lang.Class<android.graphics.drawable.Drawable> r3 = android.graphics.drawable.Drawable.class
            java.lang.String r4 = "getLayoutDirection"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L2b
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L2b
            android.support.v4.graphics.drawable.DrawableCompat.sGetLayoutDirectionMethod = r3     // Catch: java.lang.NoSuchMethodException -> L2b
            java.lang.reflect.Method r3 = android.support.v4.graphics.drawable.DrawableCompat.sGetLayoutDirectionMethod     // Catch: java.lang.NoSuchMethodException -> L2b
            r3.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L2b
            goto L31
        L2b:
            r3 = move-exception
            java.lang.String r4 = "Failed to retrieve getLayoutDirection() method"
            android.util.Log.i(r1, r4, r3)
        L31:
            android.support.v4.graphics.drawable.DrawableCompat.sGetLayoutDirectionMethodFetched = r0
        L33:
            java.lang.reflect.Method r0 = android.support.v4.graphics.drawable.DrawableCompat.sGetLayoutDirectionMethod
            if (r0 == 0) goto L4d
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L44
            java.lang.Object r6 = r0.invoke(r6, r3)     // Catch: java.lang.Exception -> L44
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> L44
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L44
            return r6
        L44:
            r6 = move-exception
            java.lang.String r0 = "Failed to invoke getLayoutDirection() via reflection"
            android.util.Log.i(r1, r0, r6)
            r6 = 0
            android.support.v4.graphics.drawable.DrawableCompat.sGetLayoutDirectionMethod = r6
        L4d:
            return r2
    }

    public static void inflate(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, @android.support.annotation.NonNull android.content.res.Resources r3, @android.support.annotation.NonNull org.xmlpull.v1.XmlPullParser r4, @android.support.annotation.NonNull android.util.AttributeSet r5, @android.support.annotation.Nullable android.content.res.Resources.Theme r6) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.inflate(r3, r4, r5, r6)
            goto Ld
        La:
            r2.inflate(r3, r4, r5)
        Ld:
            return
    }

    public static boolean isAutoMirrored(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isAutoMirrored()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static void jumpToCurrentState(@android.support.annotation.NonNull android.graphics.drawable.Drawable r0) {
            r0.jumpToCurrentState()
            return
    }

    public static void setAutoMirrored(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r2.setAutoMirrored(r3)
        L9:
            return
    }

    public static void setHotspot(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, float r3, float r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.setHotspot(r3, r4)
        L9:
            return
    }

    public static void setHotspotBounds(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, int r3, int r4, int r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.setHotspotBounds(r3, r4, r5, r6)
        L9:
            return
    }

    public static boolean setLayoutDirection(@android.support.annotation.NonNull android.graphics.drawable.Drawable r7, int r8) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            boolean r7 = r7.setLayoutDirection(r8)
            return r7
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            r2 = 0
            if (r0 < r1) goto L50
            boolean r0 = android.support.v4.graphics.drawable.DrawableCompat.sSetLayoutDirectionMethodFetched
            java.lang.String r1 = "DrawableCompat"
            r3 = 1
            if (r0 != 0) goto L37
            java.lang.Class<android.graphics.drawable.Drawable> r0 = android.graphics.drawable.Drawable.class
            java.lang.String r4 = "setLayoutDirection"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L2f
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L2f
            r5[r2] = r6     // Catch: java.lang.NoSuchMethodException -> L2f
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L2f
            android.support.v4.graphics.drawable.DrawableCompat.sSetLayoutDirectionMethod = r0     // Catch: java.lang.NoSuchMethodException -> L2f
            java.lang.reflect.Method r0 = android.support.v4.graphics.drawable.DrawableCompat.sSetLayoutDirectionMethod     // Catch: java.lang.NoSuchMethodException -> L2f
            r0.setAccessible(r3)     // Catch: java.lang.NoSuchMethodException -> L2f
            goto L35
        L2f:
            r0 = move-exception
            java.lang.String r4 = "Failed to retrieve setLayoutDirection(int) method"
            android.util.Log.i(r1, r4, r0)
        L35:
            android.support.v4.graphics.drawable.DrawableCompat.sSetLayoutDirectionMethodFetched = r3
        L37:
            java.lang.reflect.Method r0 = android.support.v4.graphics.drawable.DrawableCompat.sSetLayoutDirectionMethod
            if (r0 == 0) goto L50
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L47
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L47
            r4[r2] = r8     // Catch: java.lang.Exception -> L47
            r0.invoke(r7, r4)     // Catch: java.lang.Exception -> L47
            return r3
        L47:
            r7 = move-exception
            java.lang.String r8 = "Failed to invoke setLayoutDirection(int) via reflection"
            android.util.Log.i(r1, r8, r7)
            r7 = 0
            android.support.v4.graphics.drawable.DrawableCompat.sSetLayoutDirectionMethod = r7
        L50:
            return r2
    }

    public static void setTint(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, @android.support.annotation.ColorInt int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setTint(r3)
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.graphics.drawable.TintAwareDrawable
            if (r0 == 0) goto L13
            android.support.v4.graphics.drawable.TintAwareDrawable r2 = (android.support.v4.graphics.drawable.TintAwareDrawable) r2
            r2.setTint(r3)
        L13:
            return
    }

    public static void setTintList(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, @android.support.annotation.Nullable android.content.res.ColorStateList r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setTintList(r3)
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.graphics.drawable.TintAwareDrawable
            if (r0 == 0) goto L13
            android.support.v4.graphics.drawable.TintAwareDrawable r2 = (android.support.v4.graphics.drawable.TintAwareDrawable) r2
            r2.setTintList(r3)
        L13:
            return
    }

    public static void setTintMode(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2, @android.support.annotation.NonNull android.graphics.PorterDuff.Mode r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setTintMode(r3)
            goto L13
        La:
            boolean r0 = r2 instanceof android.support.v4.graphics.drawable.TintAwareDrawable
            if (r0 == 0) goto L13
            android.support.v4.graphics.drawable.TintAwareDrawable r2 = (android.support.v4.graphics.drawable.TintAwareDrawable) r2
            r2.setTintMode(r3)
        L13:
            return
    }

    public static <T extends android.graphics.drawable.Drawable> T unwrap(@android.support.annotation.NonNull android.graphics.drawable.Drawable r1) {
            boolean r0 = r1 instanceof android.support.v4.graphics.drawable.WrappedDrawable
            if (r0 == 0) goto La
            android.support.v4.graphics.drawable.WrappedDrawable r1 = (android.support.v4.graphics.drawable.WrappedDrawable) r1
            android.graphics.drawable.Drawable r1 = r1.getWrappedDrawable()
        La:
            return r1
    }

    public static android.graphics.drawable.Drawable wrap(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L7
            return r2
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L18
            boolean r0 = r2 instanceof android.support.v4.graphics.drawable.TintAwareDrawable
            if (r0 != 0) goto L17
            android.support.v4.graphics.drawable.WrappedDrawableApi21 r0 = new android.support.v4.graphics.drawable.WrappedDrawableApi21
            r0.<init>(r2)
            return r0
        L17:
            return r2
        L18:
            boolean r0 = r2 instanceof android.support.v4.graphics.drawable.TintAwareDrawable
            if (r0 != 0) goto L22
            android.support.v4.graphics.drawable.WrappedDrawableApi14 r0 = new android.support.v4.graphics.drawable.WrappedDrawableApi14
            r0.<init>(r2)
            return r0
        L22:
            return r2
    }
}
