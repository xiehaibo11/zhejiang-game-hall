package android.support.v4.graphics.drawable;

public class IconCompat extends androidx.versionedparcelable.CustomVersionedParcelable {
    private static final float ADAPTIVE_ICON_INSET_FACTOR = 0.25f;
    private static final int AMBIENT_SHADOW_ALPHA = 30;
    private static final float BLUR_FACTOR = 0.010416667f;
    static final android.graphics.PorterDuff.Mode DEFAULT_TINT_MODE = null;
    private static final float DEFAULT_VIEW_PORT_SCALE = 0.6666667f;
    private static final java.lang.String EXTRA_INT1 = "int1";
    private static final java.lang.String EXTRA_INT2 = "int2";
    private static final java.lang.String EXTRA_OBJ = "obj";
    private static final java.lang.String EXTRA_TINT_LIST = "tint_list";
    private static final java.lang.String EXTRA_TINT_MODE = "tint_mode";
    private static final java.lang.String EXTRA_TYPE = "type";
    private static final float ICON_DIAMETER_FACTOR = 0.9166667f;
    private static final int KEY_SHADOW_ALPHA = 61;
    private static final float KEY_SHADOW_OFFSET_FACTOR = 0.020833334f;
    private static final java.lang.String TAG = "IconCompat";
    public static final int TYPE_UNKNOWN = -1;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public byte[] mData;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public int mInt1;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public int mInt2;
    java.lang.Object mObj1;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public android.os.Parcelable mParcelable;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public android.content.res.ColorStateList mTintList;
    android.graphics.PorterDuff.Mode mTintMode;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public java.lang.String mTintModeStr;

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public int mType;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public @interface IconType {
    }

    static {
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.SRC_IN
            android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE = r0
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public IconCompat() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mTintList = r0
            android.graphics.PorterDuff$Mode r0 = android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE
            r1.mTintMode = r0
            return
    }

    private IconCompat(int r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mTintList = r0
            android.graphics.PorterDuff$Mode r0 = android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE
            r1.mTintMode = r0
            r1.mType = r2
            return
    }

    @android.support.annotation.Nullable
    public static android.support.v4.graphics.drawable.IconCompat createFromBundle(@android.support.annotation.NonNull android.os.Bundle r4) {
            java.lang.String r0 = "type"
            int r0 = r4.getInt(r0)
            android.support.v4.graphics.drawable.IconCompat r1 = new android.support.v4.graphics.drawable.IconCompat
            r1.<init>(r0)
            java.lang.String r2 = "int1"
            int r2 = r4.getInt(r2)
            r1.mInt1 = r2
            java.lang.String r2 = "int2"
            int r2 = r4.getInt(r2)
            r1.mInt2 = r2
            java.lang.String r2 = "tint_list"
            boolean r3 = r4.containsKey(r2)
            if (r3 == 0) goto L2b
            android.os.Parcelable r2 = r4.getParcelable(r2)
            android.content.res.ColorStateList r2 = (android.content.res.ColorStateList) r2
            r1.mTintList = r2
        L2b:
            java.lang.String r2 = "tint_mode"
            boolean r3 = r4.containsKey(r2)
            if (r3 == 0) goto L3d
            java.lang.String r2 = r4.getString(r2)
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.valueOf(r2)
            r1.mTintMode = r2
        L3d:
            r2 = -1
            java.lang.String r3 = "obj"
            if (r0 == r2) goto L77
            r2 = 1
            if (r0 == r2) goto L77
            r2 = 2
            if (r0 == r2) goto L70
            r2 = 3
            if (r0 == r2) goto L69
            r2 = 4
            if (r0 == r2) goto L70
            r2 = 5
            if (r0 == r2) goto L77
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "Unknown type "
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "IconCompat"
            android.util.Log.w(r0, r4)
            r4 = 0
            return r4
        L69:
            byte[] r4 = r4.getByteArray(r3)
            r1.mObj1 = r4
            goto L7d
        L70:
            java.lang.String r4 = r4.getString(r3)
            r1.mObj1 = r4
            goto L7d
        L77:
            android.os.Parcelable r4 = r4.getParcelable(r3)
            r1.mObj1 = r4
        L7d:
            return r1
    }

    @android.support.annotation.RequiresApi(23)
    @android.support.annotation.Nullable
    public static android.support.v4.graphics.drawable.IconCompat createFromIcon(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull android.graphics.drawable.Icon r3) {
            android.support.v4.util.Preconditions.checkNotNull(r3)
            int r0 = getType(r3)
            r1 = 2
            if (r0 == r1) goto L1f
            r2 = 4
            if (r0 == r2) goto L16
            android.support.v4.graphics.drawable.IconCompat r2 = new android.support.v4.graphics.drawable.IconCompat
            r0 = -1
            r2.<init>(r0)
            r2.mObj1 = r3
            return r2
        L16:
            android.net.Uri r2 = getUri(r3)
            android.support.v4.graphics.drawable.IconCompat r2 = createWithContentUri(r2)
            return r2
        L1f:
            java.lang.String r0 = getResPackage(r3)
            android.content.res.Resources r2 = getResources(r2, r0)     // Catch: android.content.res.Resources.NotFoundException -> L30
            int r3 = getResId(r3)     // Catch: android.content.res.Resources.NotFoundException -> L30
            android.support.v4.graphics.drawable.IconCompat r2 = createWithResource(r2, r0, r3)     // Catch: android.content.res.Resources.NotFoundException -> L30
            return r2
        L30:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Icon resource cannot be found"
            r2.<init>(r3)
            throw r2
    }

    @android.support.annotation.RequiresApi(23)
    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public static android.support.v4.graphics.drawable.IconCompat createFromIcon(@android.support.annotation.NonNull android.graphics.drawable.Icon r2) {
            android.support.v4.util.Preconditions.checkNotNull(r2)
            int r0 = getType(r2)
            r1 = 2
            if (r0 == r1) goto L1f
            r1 = 4
            if (r0 == r1) goto L16
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r1 = -1
            r0.<init>(r1)
            r0.mObj1 = r2
            return r0
        L16:
            android.net.Uri r2 = getUri(r2)
            android.support.v4.graphics.drawable.IconCompat r2 = createWithContentUri(r2)
            return r2
        L1f:
            r0 = 0
            java.lang.String r1 = getResPackage(r2)
            int r2 = getResId(r2)
            android.support.v4.graphics.drawable.IconCompat r2 = createWithResource(r0, r1, r2)
            return r2
    }

    @android.support.annotation.VisibleForTesting
    static android.graphics.Bitmap createLegacyIconFromAdaptiveIcon(android.graphics.Bitmap r9, boolean r10) {
            int r0 = r9.getWidth()
            int r1 = r9.getHeight()
            int r0 = java.lang.Math.min(r0, r1)
            float r0 = (float) r0
            r1 = 1059760811(0x3f2aaaab, float:0.6666667)
            float r0 = r0 * r1
            int r0 = (int) r0
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r0, r0, r1)
            android.graphics.Canvas r2 = new android.graphics.Canvas
            r2.<init>(r1)
            android.graphics.Paint r3 = new android.graphics.Paint
            r4 = 3
            r3.<init>(r4)
            float r4 = (float) r0
            r5 = 1056964608(0x3f000000, float:0.5)
            float r5 = r5 * r4
            r6 = 1063955115(0x3f6aaaab, float:0.9166667)
            float r6 = r6 * r5
            if (r10 == 0) goto L52
            r10 = 1009429163(0x3c2aaaab, float:0.010416667)
            float r10 = r10 * r4
            r7 = 0
            r3.setColor(r7)
            r7 = 1017817771(0x3caaaaab, float:0.020833334)
            float r4 = r4 * r7
            r7 = 1023410176(0x3d000000, float:0.03125)
            r8 = 0
            r3.setShadowLayer(r10, r8, r4, r7)
            r2.drawCircle(r5, r5, r6, r3)
            r4 = 503316480(0x1e000000, float:6.7762636E-21)
            r3.setShadowLayer(r10, r8, r8, r4)
            r2.drawCircle(r5, r5, r6, r3)
            r3.clearShadowLayer()
        L52:
            r10 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3.setColor(r10)
            android.graphics.BitmapShader r10 = new android.graphics.BitmapShader
            android.graphics.Shader$TileMode r4 = android.graphics.Shader.TileMode.CLAMP
            android.graphics.Shader$TileMode r7 = android.graphics.Shader.TileMode.CLAMP
            r10.<init>(r9, r4, r7)
            android.graphics.Matrix r4 = new android.graphics.Matrix
            r4.<init>()
            int r7 = r9.getWidth()
            int r7 = r7 - r0
            int r7 = -r7
            int r7 = r7 / 2
            float r7 = (float) r7
            int r9 = r9.getHeight()
            int r9 = r9 - r0
            int r9 = -r9
            int r9 = r9 / 2
            float r9 = (float) r9
            r4.setTranslate(r7, r9)
            r10.setLocalMatrix(r4)
            r3.setShader(r10)
            r2.drawCircle(r5, r5, r6, r3)
            r9 = 0
            r2.setBitmap(r9)
            return r1
    }

    public static android.support.v4.graphics.drawable.IconCompat createWithAdaptiveBitmap(android.graphics.Bitmap r2) {
            if (r2 == 0) goto Lb
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r1 = 5
            r0.<init>(r1)
            r0.mObj1 = r2
            return r0
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Bitmap must not be null."
            r2.<init>(r0)
            throw r2
    }

    public static android.support.v4.graphics.drawable.IconCompat createWithBitmap(android.graphics.Bitmap r2) {
            if (r2 == 0) goto Lb
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r1 = 1
            r0.<init>(r1)
            r0.mObj1 = r2
            return r0
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Bitmap must not be null."
            r2.<init>(r0)
            throw r2
    }

    public static android.support.v4.graphics.drawable.IconCompat createWithContentUri(android.net.Uri r1) {
            if (r1 == 0) goto Lb
            java.lang.String r1 = r1.toString()
            android.support.v4.graphics.drawable.IconCompat r1 = createWithContentUri(r1)
            return r1
        Lb:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Uri must not be null."
            r1.<init>(r0)
            throw r1
    }

    public static android.support.v4.graphics.drawable.IconCompat createWithContentUri(java.lang.String r2) {
            if (r2 == 0) goto Lb
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r1 = 4
            r0.<init>(r1)
            r0.mObj1 = r2
            return r0
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Uri must not be null."
            r2.<init>(r0)
            throw r2
    }

    public static android.support.v4.graphics.drawable.IconCompat createWithData(byte[] r2, int r3, int r4) {
            if (r2 == 0) goto Lf
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r1 = 3
            r0.<init>(r1)
            r0.mObj1 = r2
            r0.mInt1 = r3
            r0.mInt2 = r4
            return r0
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Data must not be null."
            r2.<init>(r3)
            throw r2
    }

    public static android.support.v4.graphics.drawable.IconCompat createWithResource(android.content.Context r1, @android.support.annotation.DrawableRes int r2) {
            if (r1 == 0) goto Lf
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r1 = r1.getPackageName()
            android.support.v4.graphics.drawable.IconCompat r1 = createWithResource(r0, r1, r2)
            return r1
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Context must not be null."
            r1.<init>(r2)
            throw r1
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
    public static android.support.v4.graphics.drawable.IconCompat createWithResource(android.content.res.Resources r2, java.lang.String r3, @android.support.annotation.DrawableRes int r4) {
            if (r3 == 0) goto L28
            if (r4 == 0) goto L20
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r1 = 2
            r0.<init>(r1)
            r0.mInt1 = r4
            if (r2 == 0) goto L1d
            java.lang.String r2 = r2.getResourceName(r4)     // Catch: android.content.res.Resources.NotFoundException -> L15
            r0.mObj1 = r2     // Catch: android.content.res.Resources.NotFoundException -> L15
            goto L1f
        L15:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Icon resource cannot be found"
            r2.<init>(r3)
            throw r2
        L1d:
            r0.mObj1 = r3
        L1f:
            return r0
        L20:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Drawable resource ID must not be 0"
            r2.<init>(r3)
            throw r2
        L28:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Package must not be null."
            r2.<init>(r3)
            throw r2
    }

    @android.support.annotation.DrawableRes
    @android.support.annotation.RequiresApi(23)
    @android.support.annotation.IdRes
    private static int getResId(@android.support.annotation.NonNull android.graphics.drawable.Icon r6) {
            java.lang.String r0 = "Unable to get icon resource"
            java.lang.String r1 = "IconCompat"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 28
            if (r2 < r3) goto Lf
            int r6 = r6.getResId()
            return r6
        Lf:
            r2 = 0
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            java.lang.String r4 = "getResId"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            java.lang.reflect.Method r3 = r3.getMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            java.lang.Object r6 = r3.invoke(r6, r4)     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            int r6 = r6.intValue()     // Catch: java.lang.NoSuchMethodException -> L29 java.lang.reflect.InvocationTargetException -> L2e java.lang.IllegalAccessException -> L33
            return r6
        L29:
            r6 = move-exception
            android.util.Log.e(r1, r0, r6)
            return r2
        L2e:
            r6 = move-exception
            android.util.Log.e(r1, r0, r6)
            return r2
        L33:
            r6 = move-exception
            android.util.Log.e(r1, r0, r6)
            return r2
    }

    @android.support.annotation.RequiresApi(23)
    @android.support.annotation.Nullable
    private static java.lang.String getResPackage(@android.support.annotation.NonNull android.graphics.drawable.Icon r7) {
            java.lang.String r0 = "Unable to get icon package"
            java.lang.String r1 = "IconCompat"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 28
            if (r2 < r3) goto Lf
            java.lang.String r7 = r7.getResPackage()
            return r7
        Lf:
            r2 = 0
            java.lang.Class r3 = r7.getClass()     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.String r4 = "getResPackage"
            r5 = 0
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.reflect.Method r3 = r3.getMethod(r4, r6)     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.Object r7 = r3.invoke(r7, r4)     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            return r7
        L26:
            r7 = move-exception
            android.util.Log.e(r1, r0, r7)
            return r2
        L2b:
            r7 = move-exception
            android.util.Log.e(r1, r0, r7)
            return r2
        L30:
            r7 = move-exception
            android.util.Log.e(r1, r0, r7)
            return r2
    }

    private static android.content.res.Resources getResources(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "android"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto Ld
            android.content.res.Resources r3 = android.content.res.Resources.getSystem()
            return r3
        Ld:
            android.content.pm.PackageManager r3 = r3.getPackageManager()
            r0 = 8192(0x2000, float:1.148E-41)
            r1 = 0
            android.content.pm.ApplicationInfo r0 = r3.getApplicationInfo(r4, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L20
            if (r0 == 0) goto L1f
            android.content.res.Resources r3 = r3.getResourcesForApplication(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L20
            return r3
        L1f:
            return r1
        L20:
            r3 = move-exception
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2 = 0
            r0[r2] = r4
            java.lang.String r4 = "Unable to find pkg=%s for icon"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            java.lang.String r0 = "IconCompat"
            android.util.Log.e(r0, r4, r3)
            return r1
    }

    @android.support.annotation.RequiresApi(23)
    private static int getType(@android.support.annotation.NonNull android.graphics.drawable.Icon r7) {
            java.lang.String r0 = "Unable to get icon type "
            java.lang.String r1 = "IconCompat"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 28
            if (r2 < r3) goto Lf
            int r7 = r7.getType()
            return r7
        Lf:
            r2 = -1
            java.lang.Class r3 = r7.getClass()     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            java.lang.String r4 = "getType"
            r5 = 0
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            java.lang.reflect.Method r3 = r3.getMethod(r4, r6)     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            java.lang.Object r3 = r3.invoke(r7, r4)     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            int r7 = r3.intValue()     // Catch: java.lang.NoSuchMethodException -> L2a java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L52
            return r7
        L2a:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            r4.append(r7)
            java.lang.String r7 = r4.toString()
            android.util.Log.e(r1, r7, r3)
            return r2
        L3e:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            r4.append(r7)
            java.lang.String r7 = r4.toString()
            android.util.Log.e(r1, r7, r3)
            return r2
        L52:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            r4.append(r7)
            java.lang.String r7 = r4.toString()
            android.util.Log.e(r1, r7, r3)
            return r2
    }

    @android.support.annotation.RequiresApi(23)
    @android.support.annotation.Nullable
    private static android.net.Uri getUri(@android.support.annotation.NonNull android.graphics.drawable.Icon r7) {
            java.lang.String r0 = "Unable to get icon uri"
            java.lang.String r1 = "IconCompat"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 28
            if (r2 < r3) goto Lf
            android.net.Uri r7 = r7.getUri()
            return r7
        Lf:
            r2 = 0
            java.lang.Class r3 = r7.getClass()     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.String r4 = "getUri"
            r5 = 0
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.reflect.Method r3 = r3.getMethod(r4, r6)     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            java.lang.Object r7 = r3.invoke(r7, r4)     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            android.net.Uri r7 = (android.net.Uri) r7     // Catch: java.lang.NoSuchMethodException -> L26 java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
            return r7
        L26:
            r7 = move-exception
            android.util.Log.e(r1, r0, r7)
            return r2
        L2b:
            r7 = move-exception
            android.util.Log.e(r1, r0, r7)
            return r2
        L30:
            r7 = move-exception
            android.util.Log.e(r1, r0, r7)
            return r2
    }

    private android.graphics.drawable.Drawable loadDrawableInner(android.content.Context r8) {
            r7 = this;
            int r0 = r7.mType
            r1 = 1
            if (r0 == r1) goto Lec
            r2 = 0
            r3 = 0
            r4 = 2
            java.lang.String r5 = "IconCompat"
            if (r0 == r4) goto Lb6
            r1 = 3
            if (r0 == r1) goto L9e
            r1 = 4
            if (r0 == r1) goto L29
            r1 = 5
            if (r0 == r1) goto L17
            goto Leb
        L17:
            android.graphics.drawable.BitmapDrawable r0 = new android.graphics.drawable.BitmapDrawable
            android.content.res.Resources r8 = r8.getResources()
            java.lang.Object r1 = r7.mObj1
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            android.graphics.Bitmap r1 = createLegacyIconFromAdaptiveIcon(r1, r2)
            r0.<init>(r8, r1)
            return r0
        L29:
            java.lang.Object r0 = r7.mObj1
            java.lang.String r0 = (java.lang.String) r0
            android.net.Uri r0 = android.net.Uri.parse(r0)
            java.lang.String r1 = r0.getScheme()
            java.lang.String r2 = "content"
            boolean r2 = r2.equals(r1)
            if (r2 != 0) goto L6c
            java.lang.String r2 = "file"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L46
            goto L6c
        L46:
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L56
            java.io.File r2 = new java.io.File     // Catch: java.io.FileNotFoundException -> L56
            java.lang.Object r4 = r7.mObj1     // Catch: java.io.FileNotFoundException -> L56
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.io.FileNotFoundException -> L56
            r2.<init>(r4)     // Catch: java.io.FileNotFoundException -> L56
            r1.<init>(r2)     // Catch: java.io.FileNotFoundException -> L56
            r0 = r1
            goto L8e
        L56:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "Unable to load image from path: "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.w(r5, r0, r1)
            goto L8d
        L6c:
            r8.getContentResolver()     // Catch: java.lang.Exception -> L78
            android.content.Context r1 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.lang.Exception -> L78
            java.io.InputStream r0 = com.qihoo360.replugin.loader.p.PluginProviderClient.openInputStream(r1, r0)     // Catch: java.lang.Exception -> L78
            goto L8e
        L78:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "Unable to load image from URI: "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.w(r5, r0, r1)
        L8d:
            r0 = r3
        L8e:
            if (r0 == 0) goto Leb
            android.graphics.drawable.BitmapDrawable r1 = new android.graphics.drawable.BitmapDrawable
            android.content.res.Resources r8 = r8.getResources()
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeStream(r0)
            r1.<init>(r8, r0)
            return r1
        L9e:
            android.graphics.drawable.BitmapDrawable r0 = new android.graphics.drawable.BitmapDrawable
            android.content.res.Resources r8 = r8.getResources()
            java.lang.Object r1 = r7.mObj1
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            int r2 = r7.mInt1
            int r3 = r7.mInt2
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeByteArray(r1, r2, r3)
            r0.<init>(r8, r1)
            return r0
        Lb6:
            java.lang.String r0 = r7.getResPackage()
            boolean r6 = android.text.TextUtils.isEmpty(r0)
            if (r6 == 0) goto Lc4
            java.lang.String r0 = r8.getPackageName()
        Lc4:
            android.content.res.Resources r0 = getResources(r8, r0)
            int r6 = r7.mInt1     // Catch: java.lang.RuntimeException -> Ld3
            android.content.res.Resources$Theme r8 = r8.getTheme()     // Catch: java.lang.RuntimeException -> Ld3
            android.graphics.drawable.Drawable r8 = android.support.v4.content.res.ResourcesCompat.getDrawable(r0, r6, r8)     // Catch: java.lang.RuntimeException -> Ld3
            return r8
        Ld3:
            r8 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r4]
            int r4 = r7.mInt1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r0[r2] = r4
            java.lang.Object r2 = r7.mObj1
            r0[r1] = r2
            java.lang.String r1 = "Unable to load resource 0x%08x from pkg=%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            android.util.Log.e(r5, r0, r8)
        Leb:
            return r3
        Lec:
            android.graphics.drawable.BitmapDrawable r0 = new android.graphics.drawable.BitmapDrawable
            android.content.res.Resources r8 = r8.getResources()
            java.lang.Object r1 = r7.mObj1
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            r0.<init>(r8, r1)
            return r0
    }

    private static java.lang.String typeToString(int r1) {
            r0 = 1
            if (r1 == r0) goto L1e
            r0 = 2
            if (r1 == r0) goto L1b
            r0 = 3
            if (r1 == r0) goto L18
            r0 = 4
            if (r1 == r0) goto L15
            r0 = 5
            if (r1 == r0) goto L12
            java.lang.String r1 = "UNKNOWN"
            return r1
        L12:
            java.lang.String r1 = "BITMAP_MASKABLE"
            return r1
        L15:
            java.lang.String r1 = "URI"
            return r1
        L18:
            java.lang.String r1 = "DATA"
            return r1
        L1b:
            java.lang.String r1 = "RESOURCE"
            return r1
        L1e:
            java.lang.String r1 = "BITMAP"
            return r1
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void addToShortcutIntent(@android.support.annotation.NonNull android.content.Intent r5, @android.support.annotation.Nullable android.graphics.drawable.Drawable r6, @android.support.annotation.NonNull android.content.Context r7) {
            r4 = this;
            r4.checkResource(r7)
            int r0 = r4.mType
            r1 = 1
            if (r0 == r1) goto L99
            r2 = 2
            if (r0 == r2) goto L20
            r7 = 5
            if (r0 != r7) goto L18
            java.lang.Object r7 = r4.mObj1
            android.graphics.Bitmap r7 = (android.graphics.Bitmap) r7
            android.graphics.Bitmap r7 = createLegacyIconFromAdaptiveIcon(r7, r1)
            goto La7
        L18:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Icon type not supported for intent shortcuts"
            r5.<init>(r6)
            throw r5
        L20:
            java.lang.String r0 = r4.getResPackage()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            r1 = 0
            android.content.Context r7 = r7.createPackageContext(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            if (r6 != 0) goto L37
            java.lang.String r6 = "android.intent.extra.shortcut.ICON_RESOURCE"
            int r0 = r4.mInt1     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.content.Intent$ShortcutIconResource r7 = android.content.Intent.ShortcutIconResource.fromContext(r7, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            r5.putExtra(r6, r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            return
        L37:
            int r0 = r4.mInt1     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.graphics.drawable.Drawable r0 = android.support.v4.content.ContextCompat.getDrawable(r7, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            int r2 = r0.getIntrinsicWidth()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            if (r2 <= 0) goto L59
            int r2 = r0.getIntrinsicHeight()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            if (r2 > 0) goto L4a
            goto L59
        L4a:
            int r7 = r0.getIntrinsicWidth()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            int r2 = r0.getIntrinsicHeight()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createBitmap(r7, r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            goto L6b
        L59:
            java.lang.String r2 = "activity"
            java.lang.Object r7 = r7.getSystemService(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.app.ActivityManager r7 = (android.app.ActivityManager) r7     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            int r7 = r7.getLauncherLargeIconSize()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createBitmap(r7, r7, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
        L6b:
            int r2 = r7.getWidth()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            int r3 = r7.getHeight()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            r0.setBounds(r1, r1, r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            android.graphics.Canvas r1 = new android.graphics.Canvas     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            r1.<init>(r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            r0.draw(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f
            goto La7
        L7f:
            r5 = move-exception
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Can't find package "
            r7.append(r0)
            java.lang.Object r0 = r4.mObj1
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7, r5)
            throw r6
        L99:
            java.lang.Object r7 = r4.mObj1
            android.graphics.Bitmap r7 = (android.graphics.Bitmap) r7
            if (r6 == 0) goto La7
            android.graphics.Bitmap$Config r0 = r7.getConfig()
            android.graphics.Bitmap r7 = r7.copy(r0, r1)
        La7:
            if (r6 == 0) goto Lc0
            int r0 = r7.getWidth()
            int r1 = r7.getHeight()
            int r2 = r0 / 2
            int r3 = r1 / 2
            r6.setBounds(r2, r3, r0, r1)
            android.graphics.Canvas r0 = new android.graphics.Canvas
            r0.<init>(r7)
            r6.draw(r0)
        Lc0:
            java.lang.String r6 = "android.intent.extra.shortcut.ICON"
            r5.putExtra(r6, r7)
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void checkResource(android.content.Context r9) {
            r8 = this;
            int r0 = r8.mType
            r1 = 2
            if (r0 != r1) goto L5b
            java.lang.Object r0 = r8.mObj1
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = ":"
            boolean r2 = r0.contains(r1)
            if (r2 != 0) goto L12
            return
        L12:
            r2 = -1
            java.lang.String[] r3 = r0.split(r1, r2)
            r4 = 1
            r3 = r3[r4]
            java.lang.String r5 = "/"
            java.lang.String[] r6 = r3.split(r5, r2)
            r7 = 0
            r6 = r6[r7]
            java.lang.String[] r3 = r3.split(r5, r2)
            r3 = r3[r4]
            java.lang.String[] r0 = r0.split(r1, r2)
            r0 = r0[r7]
            android.content.res.Resources r9 = getResources(r9, r0)
            java.lang.String r1 = "com.daren.goldzj"
            int r9 = r9.getIdentifier(r3, r6, r1)
            int r1 = r8.mInt1
            if (r1 == r9) goto L5b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Id has changed for "
            r1.append(r2)
            r1.append(r0)
            r1.append(r5)
            r1.append(r3)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "IconCompat"
            android.util.Log.i(r1, r0)
            r8.mInt1 = r9
        L5b:
            return
    }

    @android.support.annotation.IdRes
    public int getResId() {
            r3 = this;
            int r0 = r3.mType
            r1 = -1
            if (r0 != r1) goto L14
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L14
            java.lang.Object r0 = r3.mObj1
            android.graphics.drawable.Icon r0 = (android.graphics.drawable.Icon) r0
            int r0 = getResId(r0)
            return r0
        L14:
            int r0 = r3.mType
            r1 = 2
            if (r0 != r1) goto L1c
            int r0 = r3.mInt1
            return r0
        L1c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "called getResId() on "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @android.support.annotation.NonNull
    public java.lang.String getResPackage() {
            r3 = this;
            int r0 = r3.mType
            r1 = -1
            if (r0 != r1) goto L14
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r0 < r2) goto L14
            java.lang.Object r0 = r3.mObj1
            android.graphics.drawable.Icon r0 = (android.graphics.drawable.Icon) r0
            java.lang.String r0 = getResPackage(r0)
            return r0
        L14:
            int r0 = r3.mType
            r2 = 2
            if (r0 != r2) goto L27
            java.lang.Object r0 = r3.mObj1
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r2 = ":"
            java.lang.String[] r0 = r0.split(r2, r1)
            r1 = 0
            r0 = r0[r1]
            return r0
        L27:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "called getResPackage() on "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public int getType() {
            r2 = this;
            int r0 = r2.mType
            r1 = -1
            if (r0 != r1) goto L14
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L14
            java.lang.Object r0 = r2.mObj1
            android.graphics.drawable.Icon r0 = (android.graphics.drawable.Icon) r0
            int r0 = getType(r0)
            return r0
        L14:
            int r0 = r2.mType
            return r0
    }

    @android.support.annotation.NonNull
    public android.net.Uri getUri() {
            r2 = this;
            int r0 = r2.mType
            r1 = -1
            if (r0 != r1) goto L14
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L14
            java.lang.Object r0 = r2.mObj1
            android.graphics.drawable.Icon r0 = (android.graphics.drawable.Icon) r0
            android.net.Uri r0 = getUri(r0)
            return r0
        L14:
            java.lang.Object r0 = r2.mObj1
            java.lang.String r0 = (java.lang.String) r0
            android.net.Uri r0 = android.net.Uri.parse(r0)
            return r0
    }

    public android.graphics.drawable.Drawable loadDrawable(android.content.Context r3) {
            r2 = this;
            r2.checkResource(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L12
            android.graphics.drawable.Icon r0 = r2.toIcon()
            android.graphics.drawable.Drawable r3 = r0.loadDrawable(r3)
            return r3
        L12:
            android.graphics.drawable.Drawable r3 = r2.loadDrawableInner(r3)
            if (r3 == 0) goto L2f
            android.content.res.ColorStateList r0 = r2.mTintList
            if (r0 != 0) goto L22
            android.graphics.PorterDuff$Mode r0 = r2.mTintMode
            android.graphics.PorterDuff$Mode r1 = android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE
            if (r0 == r1) goto L2f
        L22:
            r3.mutate()
            android.content.res.ColorStateList r0 = r2.mTintList
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r3, r0)
            android.graphics.PorterDuff$Mode r0 = r2.mTintMode
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r3, r0)
        L2f:
            return r3
    }

    @Override
    public void onPostParceling() {
            r3 = this;
            java.lang.String r0 = r3.mTintModeStr
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.valueOf(r0)
            r3.mTintMode = r0
            int r0 = r3.mType
            r1 = -1
            if (r0 == r1) goto L46
            r1 = 1
            r2 = 3
            if (r0 == r1) goto L32
            r1 = 2
            if (r0 == r1) goto L22
            if (r0 == r2) goto L1d
            r1 = 4
            if (r0 == r1) goto L22
            r1 = 5
            if (r0 == r1) goto L32
            goto L4c
        L1d:
            byte[] r0 = r3.mData
            r3.mObj1 = r0
            goto L4c
        L22:
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r3.mData
            java.lang.String r2 = "UTF-16"
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            r0.<init>(r1, r2)
            r3.mObj1 = r0
            goto L4c
        L32:
            android.os.Parcelable r0 = r3.mParcelable
            if (r0 == 0) goto L39
            r3.mObj1 = r0
            goto L4c
        L39:
            byte[] r0 = r3.mData
            r3.mObj1 = r0
            r3.mType = r2
            r1 = 0
            r3.mInt1 = r1
            int r0 = r0.length
            r3.mInt2 = r0
            goto L4c
        L46:
            android.os.Parcelable r0 = r3.mParcelable
            if (r0 == 0) goto L4d
            r3.mObj1 = r0
        L4c:
            return
        L4d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Invalid icon"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void onPreParceling(boolean r4) {
            r3 = this;
            android.graphics.PorterDuff$Mode r0 = r3.mTintMode
            java.lang.String r0 = r0.name()
            r3.mTintModeStr = r0
            int r0 = r3.mType
            r1 = -1
            if (r0 == r1) goto L68
            r1 = 1
            if (r0 == r1) goto L48
            r1 = 2
            java.lang.String r2 = "UTF-16"
            if (r0 == r1) goto L39
            r1 = 3
            if (r0 == r1) goto L30
            r1 = 4
            if (r0 == r1) goto L1f
            r1 = 5
            if (r0 == r1) goto L48
            goto L70
        L1f:
            java.lang.Object r4 = r3.mObj1
            java.lang.String r4 = r4.toString()
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r2)
            byte[] r4 = r4.getBytes(r0)
            r3.mData = r4
            goto L70
        L30:
            java.lang.Object r4 = r3.mObj1
            byte[] r4 = (byte[]) r4
            byte[] r4 = (byte[]) r4
            r3.mData = r4
            goto L70
        L39:
            java.lang.Object r4 = r3.mObj1
            java.lang.String r4 = (java.lang.String) r4
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r2)
            byte[] r4 = r4.getBytes(r0)
            r3.mData = r4
            goto L70
        L48:
            if (r4 == 0) goto L61
            java.lang.Object r4 = r3.mObj1
            android.graphics.Bitmap r4 = (android.graphics.Bitmap) r4
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.PNG
            r2 = 90
            r4.compress(r1, r2, r0)
            byte[] r4 = r0.toByteArray()
            r3.mData = r4
            goto L70
        L61:
            java.lang.Object r4 = r3.mObj1
            android.os.Parcelable r4 = (android.os.Parcelable) r4
            r3.mParcelable = r4
            goto L70
        L68:
            if (r4 != 0) goto L71
            java.lang.Object r4 = r3.mObj1
            android.os.Parcelable r4 = (android.os.Parcelable) r4
            r3.mParcelable = r4
        L70:
            return
        L71:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Can't serialize Icon created with IconCompat#createFromIcon"
            r4.<init>(r0)
            throw r4
    }

    public android.support.v4.graphics.drawable.IconCompat setTint(@android.support.annotation.ColorInt int r1) {
            r0 = this;
            android.content.res.ColorStateList r1 = android.content.res.ColorStateList.valueOf(r1)
            android.support.v4.graphics.drawable.IconCompat r1 = r0.setTintList(r1)
            return r1
    }

    public android.support.v4.graphics.drawable.IconCompat setTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.mTintList = r1
            return r0
    }

    public android.support.v4.graphics.drawable.IconCompat setTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.mTintMode = r1
            return r0
    }

    public android.os.Bundle toBundle() {
            r4 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            int r1 = r4.mType
            r2 = -1
            java.lang.String r3 = "obj"
            if (r1 == r2) goto L3e
            r2 = 1
            if (r1 == r2) goto L36
            r2 = 2
            if (r1 == r2) goto L2e
            r2 = 3
            if (r1 == r2) goto L24
            r2 = 4
            if (r1 == r2) goto L2e
            r2 = 5
            if (r1 != r2) goto L1c
            goto L36
        L1c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Invalid icon"
            r0.<init>(r1)
            throw r0
        L24:
            java.lang.Object r1 = r4.mObj1
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            r0.putByteArray(r3, r1)
            goto L45
        L2e:
            java.lang.Object r1 = r4.mObj1
            java.lang.String r1 = (java.lang.String) r1
            r0.putString(r3, r1)
            goto L45
        L36:
            java.lang.Object r1 = r4.mObj1
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            r0.putParcelable(r3, r1)
            goto L45
        L3e:
            java.lang.Object r1 = r4.mObj1
            android.os.Parcelable r1 = (android.os.Parcelable) r1
            r0.putParcelable(r3, r1)
        L45:
            int r1 = r4.mType
            java.lang.String r2 = "type"
            r0.putInt(r2, r1)
            int r1 = r4.mInt1
            java.lang.String r2 = "int1"
            r0.putInt(r2, r1)
            int r1 = r4.mInt2
            java.lang.String r2 = "int2"
            r0.putInt(r2, r1)
            android.content.res.ColorStateList r1 = r4.mTintList
            if (r1 == 0) goto L63
            java.lang.String r2 = "tint_list"
            r0.putParcelable(r2, r1)
        L63:
            android.graphics.PorterDuff$Mode r1 = r4.mTintMode
            android.graphics.PorterDuff$Mode r2 = android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE
            if (r1 == r2) goto L72
            java.lang.String r1 = r1.name()
            java.lang.String r2 = "tint_mode"
            r0.putString(r2, r1)
        L72:
            return r0
    }

    @android.support.annotation.RequiresApi(23)
    public android.graphics.drawable.Icon toIcon() {
            r3 = this;
            int r0 = r3.mType
            r1 = -1
            if (r0 == r1) goto L75
            r1 = 1
            if (r0 == r1) goto L5c
            r1 = 2
            if (r0 == r1) goto L51
            r1 = 3
            if (r0 == r1) goto L42
            r1 = 4
            if (r0 == r1) goto L39
            r1 = 5
            if (r0 != r1) goto L31
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L23
            java.lang.Object r0 = r3.mObj1
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithAdaptiveBitmap(r0)
            goto L64
        L23:
            java.lang.Object r0 = r3.mObj1
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            r1 = 0
            android.graphics.Bitmap r0 = createLegacyIconFromAdaptiveIcon(r0, r1)
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithBitmap(r0)
            goto L64
        L31:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Unknown type"
            r0.<init>(r1)
            throw r0
        L39:
            java.lang.Object r0 = r3.mObj1
            java.lang.String r0 = (java.lang.String) r0
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithContentUri(r0)
            goto L64
        L42:
            java.lang.Object r0 = r3.mObj1
            byte[] r0 = (byte[]) r0
            byte[] r0 = (byte[]) r0
            int r1 = r3.mInt1
            int r2 = r3.mInt2
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithData(r0, r1, r2)
            goto L64
        L51:
            java.lang.String r0 = r3.getResPackage()
            int r1 = r3.mInt1
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithResource(r0, r1)
            goto L64
        L5c:
            java.lang.Object r0 = r3.mObj1
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            android.graphics.drawable.Icon r0 = android.graphics.drawable.Icon.createWithBitmap(r0)
        L64:
            android.content.res.ColorStateList r1 = r3.mTintList
            if (r1 == 0) goto L6b
            r0.setTintList(r1)
        L6b:
            android.graphics.PorterDuff$Mode r1 = r3.mTintMode
            android.graphics.PorterDuff$Mode r2 = android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE
            if (r1 == r2) goto L74
            r0.setTintMode(r1)
        L74:
            return r0
        L75:
            java.lang.Object r0 = r3.mObj1
            android.graphics.drawable.Icon r0 = (android.graphics.drawable.Icon) r0
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            int r0 = r4.mType
            r1 = -1
            if (r0 != r1) goto Lc
            java.lang.Object r0 = r4.mObj1
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Icon(typ="
            r0.<init>(r1)
            int r1 = r4.mType
            java.lang.String r1 = typeToString(r1)
            r0.append(r1)
            int r1 = r4.mType
            r2 = 1
            if (r1 == r2) goto L7a
            r3 = 2
            if (r1 == r3) goto L52
            r2 = 3
            if (r1 == r2) goto L39
            r2 = 4
            if (r1 == r2) goto L2e
            r2 = 5
            if (r1 == r2) goto L7a
            goto L9a
        L2e:
            java.lang.String r1 = " uri="
            r0.append(r1)
            java.lang.Object r1 = r4.mObj1
            r0.append(r1)
            goto L9a
        L39:
            java.lang.String r1 = " len="
            r0.append(r1)
            int r1 = r4.mInt1
            r0.append(r1)
            int r1 = r4.mInt2
            if (r1 == 0) goto L9a
            java.lang.String r1 = " off="
            r0.append(r1)
            int r1 = r4.mInt2
            r0.append(r1)
            goto L9a
        L52:
            java.lang.String r1 = " pkg="
            r0.append(r1)
            java.lang.String r1 = r4.getResPackage()
            r0.append(r1)
            java.lang.String r1 = " id="
            r0.append(r1)
            java.lang.Object[] r1 = new java.lang.Object[r2]
            r2 = 0
            int r3 = r4.getResId()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.lang.String r2 = "0x%08x"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            goto L9a
        L7a:
            java.lang.String r1 = " size="
            r0.append(r1)
            java.lang.Object r1 = r4.mObj1
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            int r1 = r1.getWidth()
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            java.lang.Object r1 = r4.mObj1
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            int r1 = r1.getHeight()
            r0.append(r1)
        L9a:
            android.content.res.ColorStateList r1 = r4.mTintList
            if (r1 == 0) goto La8
            java.lang.String r1 = " tint="
            r0.append(r1)
            android.content.res.ColorStateList r1 = r4.mTintList
            r0.append(r1)
        La8:
            android.graphics.PorterDuff$Mode r1 = r4.mTintMode
            android.graphics.PorterDuff$Mode r2 = android.support.v4.graphics.drawable.IconCompat.DEFAULT_TINT_MODE
            if (r1 == r2) goto Lb8
            java.lang.String r1 = " mode="
            r0.append(r1)
            android.graphics.PorterDuff$Mode r1 = r4.mTintMode
            r0.append(r1)
        Lb8:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
