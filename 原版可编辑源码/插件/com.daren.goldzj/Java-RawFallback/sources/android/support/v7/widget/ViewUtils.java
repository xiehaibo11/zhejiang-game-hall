package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ViewUtils {
    private static final java.lang.String TAG = "ViewUtils";
    private static java.lang.reflect.Method sComputeFitSystemWindowsMethod;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L32
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "computeFitSystemWindows"
            r2 = 2
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L2b
            r3 = 0
            java.lang.Class<android.graphics.Rect> r4 = android.graphics.Rect.class
            r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L2b
            java.lang.Class<android.graphics.Rect> r3 = android.graphics.Rect.class
            r4 = 1
            r2[r4] = r3     // Catch: java.lang.NoSuchMethodException -> L2b
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L2b
            android.support.v7.widget.ViewUtils.sComputeFitSystemWindowsMethod = r0     // Catch: java.lang.NoSuchMethodException -> L2b
            java.lang.reflect.Method r0 = android.support.v7.widget.ViewUtils.sComputeFitSystemWindowsMethod     // Catch: java.lang.NoSuchMethodException -> L2b
            boolean r0 = r0.isAccessible()     // Catch: java.lang.NoSuchMethodException -> L2b
            if (r0 != 0) goto L32
            java.lang.reflect.Method r0 = android.support.v7.widget.ViewUtils.sComputeFitSystemWindowsMethod     // Catch: java.lang.NoSuchMethodException -> L2b
            r0.setAccessible(r4)     // Catch: java.lang.NoSuchMethodException -> L2b
            goto L32
        L2b:
            java.lang.String r0 = "ViewUtils"
            java.lang.String r1 = "Could not find method computeFitSystemWindows. Oh well."
            android.util.Log.d(r0, r1)
        L32:
            return
    }

    private ViewUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void computeFitSystemWindows(android.view.View r3, android.graphics.Rect r4, android.graphics.Rect r5) {
            java.lang.reflect.Method r0 = android.support.v7.widget.ViewUtils.sComputeFitSystemWindowsMethod
            if (r0 == 0) goto L19
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L11
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L11
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L11
            r0.invoke(r3, r1)     // Catch: java.lang.Exception -> L11
            goto L19
        L11:
            r3 = move-exception
            java.lang.String r4 = "ViewUtils"
            java.lang.String r5 = "Could not invoke computeFitSystemWindows"
            android.util.Log.d(r4, r5, r3)
        L19:
            return
    }

    public static boolean isLayoutRtl(android.view.View r1) {
            int r1 = android.support.v4.view.ViewCompat.getLayoutDirection(r1)
            r0 = 1
            if (r1 != r0) goto L8
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static void makeOptionalFitsSystemWindows(android.view.View r6) {
            java.lang.String r0 = "Could not invoke makeOptionalFitsSystemWindows"
            java.lang.String r1 = "ViewUtils"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r2 < r3) goto L36
            java.lang.Class r2 = r6.getClass()     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
            java.lang.String r3 = "makeOptionalFitsSystemWindows"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
            boolean r3 = r2.isAccessible()     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
            if (r3 != 0) goto L21
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
        L21:
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
            r2.invoke(r6, r3)     // Catch: java.lang.IllegalAccessException -> L27 java.lang.reflect.InvocationTargetException -> L2c java.lang.NoSuchMethodException -> L31
            goto L36
        L27:
            r6 = move-exception
            android.util.Log.d(r1, r0, r6)
            goto L36
        L2c:
            r6 = move-exception
            android.util.Log.d(r1, r0, r6)
            goto L36
        L31:
            java.lang.String r6 = "Could not find method makeOptionalFitsSystemWindows. Oh well..."
            android.util.Log.d(r1, r6)
        L36:
            return
    }
}
