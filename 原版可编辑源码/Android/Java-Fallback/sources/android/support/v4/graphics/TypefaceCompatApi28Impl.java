package android.support.v4.graphics;

public class TypefaceCompatApi28Impl extends android.support.v4.graphics.TypefaceCompatApi26Impl {
    private static final java.lang.String CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD = "createFromFamiliesWithDefault";
    private static final java.lang.String DEFAULT_FAMILY = "sans-serif";
    private static final int RESOLVE_BY_FONT_TABLE = -1;
    private static final java.lang.String TAG = "TypefaceCompatApi28Impl";

    public TypefaceCompatApi28Impl() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected android.graphics.Typeface createFromFamiliesWithDefault(java.lang.Object r6) {
            r5 = this;
            java.lang.Class r0 = r5.mFontFamily     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r1 = 1
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r2 = 0
            java.lang.reflect.Array.set(r0, r2, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            java.lang.reflect.Method r6 = r5.mCreateFromFamiliesWithDefault     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r3 = 0
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r4[r2] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            java.lang.String r0 = "sans-serif"
            r4[r1] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r0 = 2
            r1 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r4[r0] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r0 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            r4[r0] = r1     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            java.lang.Object r6 = r6.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            android.graphics.Typeface r6 = (android.graphics.Typeface) r6     // Catch: java.lang.reflect.InvocationTargetException -> L2d java.lang.IllegalAccessException -> L2f
            return r6
        L2d:
            r6 = move-exception
            goto L30
        L2f:
            r6 = move-exception
        L30:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r6)
            throw r0
    }

    @Override
    protected java.lang.reflect.Method obtainCreateFromFamiliesWithDefaultMethod(java.lang.Class r5) throws java.lang.NoSuchMethodException {
            r4 = this;
            r0 = 1
            java.lang.Object r5 = java.lang.reflect.Array.newInstance(r5, r0)
            java.lang.Class<android.graphics.Typeface> r1 = android.graphics.Typeface.class
            r2 = 4
            java.lang.Class[] r2 = new java.lang.Class[r2]
            java.lang.Class r5 = r5.getClass()
            r3 = 0
            r2[r3] = r5
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r2[r0] = r5
            java.lang.Class r5 = java.lang.Integer.TYPE
            r3 = 2
            r2[r3] = r5
            java.lang.Class r5 = java.lang.Integer.TYPE
            r3 = 3
            r2[r3] = r5
            java.lang.String r5 = "createFromFamiliesWithDefault"
            java.lang.reflect.Method r5 = r1.getDeclaredMethod(r5, r2)
            r5.setAccessible(r0)
            return r5
    }
}
