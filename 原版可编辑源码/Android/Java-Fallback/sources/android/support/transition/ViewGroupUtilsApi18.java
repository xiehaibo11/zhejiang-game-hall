package android.support.transition;

class ViewGroupUtilsApi18 {
    private static final java.lang.String TAG = "ViewUtilsApi18";
    private static java.lang.reflect.Method sSuppressLayoutMethod;
    private static boolean sSuppressLayoutMethodFetched;

    private ViewGroupUtilsApi18() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void fetchSuppressLayoutMethod() {
            boolean r0 = android.support.transition.ViewGroupUtilsApi18.sSuppressLayoutMethodFetched
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.view.ViewGroup> r1 = android.view.ViewGroup.class
            java.lang.String r2 = "suppressLayout"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1a
            r4 = 0
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> L1a
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.transition.ViewGroupUtilsApi18.sSuppressLayoutMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1a
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ViewUtilsApi18"
            java.lang.String r3 = "Failed to retrieve suppressLayout method"
            android.util.Log.i(r2, r3, r1)
        L22:
            android.support.transition.ViewGroupUtilsApi18.sSuppressLayoutMethodFetched = r0
        L24:
            return
    }

    static void suppressLayout(android.view.ViewGroup r4, boolean r5) {
            java.lang.String r0 = "ViewUtilsApi18"
            fetchSuppressLayoutMethod()
            java.lang.reflect.Method r1 = android.support.transition.ViewGroupUtilsApi18.sSuppressLayoutMethod
            if (r1 == 0) goto L24
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L1e
            r3 = 0
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L1e
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L1e
            r1.invoke(r4, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L1e
            goto L24
        L17:
            r4 = move-exception
            java.lang.String r5 = "Error invoking suppressLayout method"
            android.util.Log.i(r0, r5, r4)
            goto L24
        L1e:
            r4 = move-exception
            java.lang.String r5 = "Failed to invoke suppressLayout method"
            android.util.Log.i(r0, r5, r4)
        L24:
            return
    }
}
