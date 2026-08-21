package android.support.transition;

class ViewUtilsApi21 extends android.support.transition.ViewUtilsApi19 {
    private static final java.lang.String TAG = "ViewUtilsApi21";
    private static java.lang.reflect.Method sSetAnimationMatrixMethod;
    private static boolean sSetAnimationMatrixMethodFetched;
    private static java.lang.reflect.Method sTransformMatrixToGlobalMethod;
    private static boolean sTransformMatrixToGlobalMethodFetched;
    private static java.lang.reflect.Method sTransformMatrixToLocalMethod;
    private static boolean sTransformMatrixToLocalMethodFetched;

    ViewUtilsApi21() {
            r0 = this;
            r0.<init>()
            return
    }

    private void fetchSetAnimationMatrix() {
            r6 = this;
            boolean r0 = android.support.transition.ViewUtilsApi21.sSetAnimationMatrixMethodFetched
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "setAnimationMatrix"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1a
            r4 = 0
            java.lang.Class<android.graphics.Matrix> r5 = android.graphics.Matrix.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.transition.ViewUtilsApi21.sSetAnimationMatrixMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1a
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi21"
            java.lang.String r3 = "Failed to retrieve setAnimationMatrix method"
            android.util.Log.i(r2, r3, r1)
        L22:
            android.support.transition.ViewUtilsApi21.sSetAnimationMatrixMethodFetched = r0
        L24:
            return
    }

    private void fetchTransformMatrixToGlobalMethod() {
            r6 = this;
            boolean r0 = android.support.transition.ViewUtilsApi21.sTransformMatrixToGlobalMethodFetched
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "transformMatrixToGlobal"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1a
            r4 = 0
            java.lang.Class<android.graphics.Matrix> r5 = android.graphics.Matrix.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.transition.ViewUtilsApi21.sTransformMatrixToGlobalMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1a
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi21"
            java.lang.String r3 = "Failed to retrieve transformMatrixToGlobal method"
            android.util.Log.i(r2, r3, r1)
        L22:
            android.support.transition.ViewUtilsApi21.sTransformMatrixToGlobalMethodFetched = r0
        L24:
            return
    }

    private void fetchTransformMatrixToLocalMethod() {
            r6 = this;
            boolean r0 = android.support.transition.ViewUtilsApi21.sTransformMatrixToLocalMethodFetched
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "transformMatrixToLocal"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1a
            r4 = 0
            java.lang.Class<android.graphics.Matrix> r5 = android.graphics.Matrix.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.transition.ViewUtilsApi21.sTransformMatrixToLocalMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1a
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi21"
            java.lang.String r3 = "Failed to retrieve transformMatrixToLocal method"
            android.util.Log.i(r2, r3, r1)
        L22:
            android.support.transition.ViewUtilsApi21.sTransformMatrixToLocalMethodFetched = r0
        L24:
            return
    }

    @Override
    public void setAnimationMatrix(android.view.View r4, android.graphics.Matrix r5) {
            r3 = this;
            r3.fetchSetAnimationMatrix()
            java.lang.reflect.Method r0 = android.support.transition.ViewUtilsApi21.sSetAnimationMatrixMethod
            if (r0 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1c
            r2 = 0
            r1[r2] = r5     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1c
            r0.invoke(r4, r1)     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1c
            goto L1c
        L11:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.Throwable r4 = r4.getCause()
            r5.<init>(r4)
            throw r5
        L1c:
            return
    }

    @Override
    public void transformMatrixToGlobal(android.view.View r4, android.graphics.Matrix r5) {
            r3 = this;
            r3.fetchTransformMatrixToGlobalMethod()
            java.lang.reflect.Method r0 = android.support.transition.ViewUtilsApi21.sTransformMatrixToGlobalMethod
            if (r0 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L1c
            r2 = 0
            r1[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L1c
            r0.invoke(r4, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L1c
            goto L1c
        L11:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.Throwable r4 = r4.getCause()
            r5.<init>(r4)
            throw r5
        L1c:
            return
    }

    @Override
    public void transformMatrixToLocal(android.view.View r4, android.graphics.Matrix r5) {
            r3 = this;
            r3.fetchTransformMatrixToLocalMethod()
            java.lang.reflect.Method r0 = android.support.transition.ViewUtilsApi21.sTransformMatrixToLocalMethod
            if (r0 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L1c
            r2 = 0
            r1[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L1c
            r0.invoke(r4, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L1c
            goto L1c
        L11:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.Throwable r4 = r4.getCause()
            r5.<init>(r4)
            throw r5
        L1c:
            return
    }
}
