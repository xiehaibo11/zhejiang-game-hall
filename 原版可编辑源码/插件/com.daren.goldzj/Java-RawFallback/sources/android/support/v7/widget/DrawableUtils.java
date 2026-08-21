package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class DrawableUtils {
    public static final android.graphics.Rect INSETS_NONE = null;
    private static final java.lang.String TAG = "DrawableUtils";
    private static final java.lang.String VECTOR_DRAWABLE_CLAZZ_NAME = "android.graphics.drawable.VectorDrawable";
    private static java.lang.Class<?> sInsetsClazz;

    static {
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            android.support.v7.widget.DrawableUtils.INSETS_NONE = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L15
            java.lang.String r0 = "android.graphics.Insets"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L15
            android.support.v7.widget.DrawableUtils.sInsetsClazz = r0     // Catch: java.lang.ClassNotFoundException -> L15
        L15:
            return
    }

    private DrawableUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean canSafelyMutateDrawable(@android.support.annotation.NonNull android.graphics.drawable.Drawable r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            r2 = 0
            if (r0 >= r1) goto Lc
            boolean r0 = r4 instanceof android.graphics.drawable.InsetDrawable
            if (r0 == 0) goto Lc
            return r2
        Lc:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L15
            boolean r0 = r4 instanceof android.graphics.drawable.GradientDrawable
            if (r0 == 0) goto L15
            return r2
        L15:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L20
            boolean r0 = r4 instanceof android.graphics.drawable.LayerDrawable
            if (r0 == 0) goto L20
            return r2
        L20:
            boolean r0 = r4 instanceof android.graphics.drawable.DrawableContainer
            if (r0 == 0) goto L42
            android.graphics.drawable.Drawable$ConstantState r4 = r4.getConstantState()
            boolean r0 = r4 instanceof android.graphics.drawable.DrawableContainer.DrawableContainerState
            if (r0 == 0) goto L6f
            android.graphics.drawable.DrawableContainer$DrawableContainerState r4 = (android.graphics.drawable.DrawableContainer.DrawableContainerState) r4
            android.graphics.drawable.Drawable[] r4 = r4.getChildren()
            int r0 = r4.length
            r1 = 0
        L34:
            if (r1 >= r0) goto L6f
            r3 = r4[r1]
            boolean r3 = canSafelyMutateDrawable(r3)
            if (r3 != 0) goto L3f
            return r2
        L3f:
            int r1 = r1 + 1
            goto L34
        L42:
            boolean r0 = r4 instanceof android.support.v4.graphics.drawable.WrappedDrawable
            if (r0 == 0) goto L51
            android.support.v4.graphics.drawable.WrappedDrawable r4 = (android.support.v4.graphics.drawable.WrappedDrawable) r4
            android.graphics.drawable.Drawable r4 = r4.getWrappedDrawable()
            boolean r4 = canSafelyMutateDrawable(r4)
            return r4
        L51:
            boolean r0 = r4 instanceof android.support.v7.graphics.drawable.DrawableWrapper
            if (r0 == 0) goto L60
            android.support.v7.graphics.drawable.DrawableWrapper r4 = (android.support.v7.graphics.drawable.DrawableWrapper) r4
            android.graphics.drawable.Drawable r4 = r4.getWrappedDrawable()
            boolean r4 = canSafelyMutateDrawable(r4)
            return r4
        L60:
            boolean r0 = r4 instanceof android.graphics.drawable.ScaleDrawable
            if (r0 == 0) goto L6f
            android.graphics.drawable.ScaleDrawable r4 = (android.graphics.drawable.ScaleDrawable) r4
            android.graphics.drawable.Drawable r4 = r4.getDrawable()
            boolean r4 = canSafelyMutateDrawable(r4)
            return r4
        L6f:
            r4 = 1
            return r4
    }

    static void fixDrawable(@android.support.annotation.NonNull android.graphics.drawable.Drawable r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 != r1) goto L19
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "android.graphics.drawable.VectorDrawable"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L19
            fixVectorDrawableTinting(r2)
        L19:
            return
    }

    private static void fixVectorDrawableTinting(android.graphics.drawable.Drawable r2) {
            int[] r0 = r2.getState()
            if (r0 == 0) goto L10
            int r1 = r0.length
            if (r1 != 0) goto La
            goto L10
        La:
            int[] r1 = android.support.v7.widget.ThemeUtils.EMPTY_STATE_SET
            r2.setState(r1)
            goto L15
        L10:
            int[] r1 = android.support.v7.widget.ThemeUtils.CHECKED_STATE_SET
            r2.setState(r1)
        L15:
            r2.setState(r0)
            return
    }

    public static android.graphics.Rect getOpticalBounds(android.graphics.drawable.Drawable r12) {
            java.lang.Class<?> r0 = android.support.v7.widget.DrawableUtils.sInsetsClazz
            if (r0 == 0) goto L94
            android.graphics.drawable.Drawable r12 = android.support.v4.graphics.drawable.DrawableCompat.unwrap(r12)     // Catch: java.lang.Exception -> L8d
            java.lang.Class r0 = r12.getClass()     // Catch: java.lang.Exception -> L8d
            java.lang.String r1 = "getOpticalInsets"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L8d
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L8d
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L8d
            java.lang.Object r12 = r0.invoke(r12, r1)     // Catch: java.lang.Exception -> L8d
            if (r12 == 0) goto L94
            android.graphics.Rect r0 = new android.graphics.Rect     // Catch: java.lang.Exception -> L8d
            r0.<init>()     // Catch: java.lang.Exception -> L8d
            java.lang.Class<?> r1 = android.support.v7.widget.DrawableUtils.sInsetsClazz     // Catch: java.lang.Exception -> L8d
            java.lang.reflect.Field[] r1 = r1.getFields()     // Catch: java.lang.Exception -> L8d
            int r3 = r1.length     // Catch: java.lang.Exception -> L8d
            r4 = 0
        L2a:
            if (r4 >= r3) goto L8c
            r5 = r1[r4]     // Catch: java.lang.Exception -> L8d
            java.lang.String r6 = r5.getName()     // Catch: java.lang.Exception -> L8d
            r7 = -1
            int r8 = r6.hashCode()     // Catch: java.lang.Exception -> L8d
            r9 = 3
            r10 = 2
            r11 = 1
            switch(r8) {
                case -1383228885: goto L5c;
                case 115029: goto L52;
                case 3317767: goto L48;
                case 108511772: goto L3e;
                default: goto L3d;
            }     // Catch: java.lang.Exception -> L8d
        L3d:
            goto L65
        L3e:
            java.lang.String r8 = "right"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Exception -> L8d
            if (r6 == 0) goto L65
            r7 = 2
            goto L65
        L48:
            java.lang.String r8 = "left"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Exception -> L8d
            if (r6 == 0) goto L65
            r7 = 0
            goto L65
        L52:
            java.lang.String r8 = "top"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Exception -> L8d
            if (r6 == 0) goto L65
            r7 = 1
            goto L65
        L5c:
            java.lang.String r8 = "bottom"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Exception -> L8d
            if (r6 == 0) goto L65
            r7 = 3
        L65:
            if (r7 == 0) goto L83
            if (r7 == r11) goto L7c
            if (r7 == r10) goto L75
            if (r7 == r9) goto L6e
            goto L89
        L6e:
            int r5 = r5.getInt(r12)     // Catch: java.lang.Exception -> L8d
            r0.bottom = r5     // Catch: java.lang.Exception -> L8d
            goto L89
        L75:
            int r5 = r5.getInt(r12)     // Catch: java.lang.Exception -> L8d
            r0.right = r5     // Catch: java.lang.Exception -> L8d
            goto L89
        L7c:
            int r5 = r5.getInt(r12)     // Catch: java.lang.Exception -> L8d
            r0.top = r5     // Catch: java.lang.Exception -> L8d
            goto L89
        L83:
            int r5 = r5.getInt(r12)     // Catch: java.lang.Exception -> L8d
            r0.left = r5     // Catch: java.lang.Exception -> L8d
        L89:
            int r4 = r4 + 1
            goto L2a
        L8c:
            return r0
        L8d:
            java.lang.String r12 = "DrawableUtils"
            java.lang.String r0 = "Couldn't obtain the optical insets. Ignoring."
            android.util.Log.e(r12, r0)
        L94:
            android.graphics.Rect r12 = android.support.v7.widget.DrawableUtils.INSETS_NONE
            return r12
    }

    public static android.graphics.PorterDuff.Mode parseTintMode(int r1, android.graphics.PorterDuff.Mode r2) {
            r0 = 3
            if (r1 == r0) goto L1d
            r0 = 5
            if (r1 == r0) goto L1a
            r0 = 9
            if (r1 == r0) goto L17
            switch(r1) {
                case 14: goto L14;
                case 15: goto L11;
                case 16: goto Le;
                default: goto Ld;
            }
        Ld:
            return r2
        Le:
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.ADD
            return r1
        L11:
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SCREEN
            return r1
        L14:
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.MULTIPLY
            return r1
        L17:
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SRC_ATOP
            return r1
        L1a:
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SRC_IN
            return r1
        L1d:
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SRC_OVER
            return r1
    }
}
