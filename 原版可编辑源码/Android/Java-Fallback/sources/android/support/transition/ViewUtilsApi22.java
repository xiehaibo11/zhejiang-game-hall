package android.support.transition;

class ViewUtilsApi22 extends android.support.transition.ViewUtilsApi21 {
    private static final java.lang.String TAG = "ViewUtilsApi22";
    private static java.lang.reflect.Method sSetLeftTopRightBottomMethod;
    private static boolean sSetLeftTopRightBottomMethodFetched;

    ViewUtilsApi22() {
            r0 = this;
            r0.<init>()
            return
    }

    private void fetchSetLeftTopRightBottomMethod() {
            r6 = this;
            boolean r0 = android.support.transition.ViewUtilsApi22.sSetLeftTopRightBottomMethodFetched
            if (r0 != 0) goto L33
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "setLeftTopRightBottom"
            r3 = 4
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L29
            r4 = 0
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L29
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L29
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L29
            r3[r0] = r4     // Catch: java.lang.NoSuchMethodException -> L29
            r4 = 2
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L29
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L29
            r4 = 3
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L29
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L29
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L29
            android.support.transition.ViewUtilsApi22.sSetLeftTopRightBottomMethod = r1     // Catch: java.lang.NoSuchMethodException -> L29
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L29
            goto L31
        L29:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi22"
            java.lang.String r3 = "Failed to retrieve setLeftTopRightBottom method"
            android.util.Log.i(r2, r3, r1)
        L31:
            android.support.transition.ViewUtilsApi22.sSetLeftTopRightBottomMethodFetched = r0
        L33:
            return
    }

    @Override
    public void setLeftTopRightBottom(android.view.View r4, int r5, int r6, int r7, int r8) {
            r3 = this;
            r3.fetchSetLeftTopRightBottomMethod()
            java.lang.reflect.Method r0 = android.support.transition.ViewUtilsApi22.sSetLeftTopRightBottomMethod
            if (r0 == 0) goto L35
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r2 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r1[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r5 = 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r5 = 2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r5 = 3
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            r0.invoke(r4, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2a java.lang.IllegalAccessException -> L35
            goto L35
        L2a:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.Throwable r4 = r4.getCause()
            r5.<init>(r4)
            throw r5
        L35:
            return
    }
}
