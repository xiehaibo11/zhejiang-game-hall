package android.support.transition;

class ViewUtilsApi19 extends android.support.transition.ViewUtilsBase {
    private static final java.lang.String TAG = "ViewUtilsApi19";
    private static java.lang.reflect.Method sGetTransitionAlphaMethod;
    private static boolean sGetTransitionAlphaMethodFetched;
    private static java.lang.reflect.Method sSetTransitionAlphaMethod;
    private static boolean sSetTransitionAlphaMethodFetched;

    ViewUtilsApi19() {
            r0 = this;
            r0.<init>()
            return
    }

    private void fetchGetTransitionAlphaMethod() {
            r4 = this;
            boolean r0 = android.support.transition.ViewUtilsApi19.sGetTransitionAlphaMethodFetched
            if (r0 != 0) goto L20
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "getTransitionAlpha"
            r3 = 0
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L16
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L16
            android.support.transition.ViewUtilsApi19.sGetTransitionAlphaMethod = r1     // Catch: java.lang.NoSuchMethodException -> L16
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L16
            goto L1e
        L16:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi19"
            java.lang.String r3 = "Failed to retrieve getTransitionAlpha method"
            android.util.Log.i(r2, r3, r1)
        L1e:
            android.support.transition.ViewUtilsApi19.sGetTransitionAlphaMethodFetched = r0
        L20:
            return
    }

    private void fetchSetTransitionAlphaMethod() {
            r6 = this;
            boolean r0 = android.support.transition.ViewUtilsApi19.sSetTransitionAlphaMethodFetched
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "setTransitionAlpha"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1a
            r4 = 0
            java.lang.Class r5 = java.lang.Float.TYPE     // Catch: java.lang.NoSuchMethodException -> L1a
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.transition.ViewUtilsApi19.sSetTransitionAlphaMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1a
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi19"
            java.lang.String r3 = "Failed to retrieve setTransitionAlpha method"
            android.util.Log.i(r2, r3, r1)
        L22:
            android.support.transition.ViewUtilsApi19.sSetTransitionAlphaMethodFetched = r0
        L24:
            return
    }

    @Override
    public void clearNonTransitionAlpha(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public float getTransitionAlpha(android.view.View r3) {
            r2 = this;
            r2.fetchGetTransitionAlphaMethod()
            java.lang.reflect.Method r0 = android.support.transition.ViewUtilsApi19.sGetTransitionAlphaMethod
            if (r0 == 0) goto L20
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L20
            java.lang.Object r0 = r0.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L20
            java.lang.Float r0 = (java.lang.Float) r0     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L20
            float r3 = r0.floatValue()     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L20
            return r3
        L15:
            r3 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.Throwable r3 = r3.getCause()
            r0.<init>(r3)
            throw r0
        L20:
            float r3 = super.getTransitionAlpha(r3)
            return r3
    }

    @Override
    public void saveNonTransitionAlpha(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void setTransitionAlpha(android.view.View r4, float r5) {
            r3 = this;
            r3.fetchSetTransitionAlphaMethod()
            java.lang.reflect.Method r0 = android.support.transition.ViewUtilsApi19.sSetTransitionAlphaMethod
            if (r0 == 0) goto L20
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L23
            r2 = 0
            java.lang.Float r5 = java.lang.Float.valueOf(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L23
            r1[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L23
            r0.invoke(r4, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L15 java.lang.IllegalAccessException -> L23
            goto L23
        L15:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.Throwable r4 = r4.getCause()
            r5.<init>(r4)
            throw r5
        L20:
            r4.setAlpha(r5)
        L23:
            return
    }
}
