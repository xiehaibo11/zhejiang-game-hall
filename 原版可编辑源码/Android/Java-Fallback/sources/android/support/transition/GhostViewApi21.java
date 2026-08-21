package android.support.transition;

class GhostViewApi21 implements android.support.transition.GhostViewImpl {
    private static final java.lang.String TAG = "GhostViewApi21";
    private static java.lang.reflect.Method sAddGhostMethod;
    private static boolean sAddGhostMethodFetched;
    private static java.lang.Class<?> sGhostViewClass;
    private static boolean sGhostViewClassFetched;
    private static java.lang.reflect.Method sRemoveGhostMethod;
    private static boolean sRemoveGhostMethodFetched;
    private final android.view.View mGhostView;

    private GhostViewApi21(android.view.View r1) {
            r0 = this;
            r0.<init>()
            r0.mGhostView = r1
            return
    }

    static android.support.transition.GhostViewImpl addGhost(android.view.View r5, android.view.ViewGroup r6, android.graphics.Matrix r7) {
            fetchAddGhostMethod()
            java.lang.reflect.Method r0 = android.support.transition.GhostViewApi21.sAddGhostMethod
            r1 = 0
            if (r0 == 0) goto L2b
            android.support.transition.GhostViewApi21 r2 = new android.support.transition.GhostViewApi21     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            r4 = 0
            r3[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            r5 = 1
            r3[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            r5 = 2
            r3[r5] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            java.lang.Object r5 = r0.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            r2.<init>(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L20 java.lang.IllegalAccessException -> L2b
            return r2
        L20:
            r5 = move-exception
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.Throwable r5 = r5.getCause()
            r6.<init>(r5)
            throw r6
        L2b:
            return r1
    }

    private static void fetchAddGhostMethod() {
            boolean r0 = android.support.transition.GhostViewApi21.sAddGhostMethodFetched
            if (r0 != 0) goto L31
            r0 = 1
            fetchGhostViewClass()     // Catch: java.lang.NoSuchMethodException -> L27
            java.lang.Class<?> r1 = android.support.transition.GhostViewApi21.sGhostViewClass     // Catch: java.lang.NoSuchMethodException -> L27
            java.lang.String r2 = "addGhost"
            r3 = 3
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L27
            r4 = 0
            java.lang.Class<android.view.View> r5 = android.view.View.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L27
            java.lang.Class<android.view.ViewGroup> r4 = android.view.ViewGroup.class
            r3[r0] = r4     // Catch: java.lang.NoSuchMethodException -> L27
            r4 = 2
            java.lang.Class<android.graphics.Matrix> r5 = android.graphics.Matrix.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L27
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L27
            android.support.transition.GhostViewApi21.sAddGhostMethod = r1     // Catch: java.lang.NoSuchMethodException -> L27
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L27
            goto L2f
        L27:
            r1 = move-exception
            java.lang.String r2 = "GhostViewApi21"
            java.lang.String r3 = "Failed to retrieve addGhost method"
            android.util.Log.i(r2, r3, r1)
        L2f:
            android.support.transition.GhostViewApi21.sAddGhostMethodFetched = r0
        L31:
            return
    }

    private static void fetchGhostViewClass() {
            boolean r0 = android.support.transition.GhostViewApi21.sGhostViewClassFetched
            if (r0 != 0) goto L18
            java.lang.String r0 = "android.view.GhostView"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> Ld
            android.support.transition.GhostViewApi21.sGhostViewClass = r0     // Catch: java.lang.ClassNotFoundException -> Ld
            goto L15
        Ld:
            r0 = move-exception
            java.lang.String r1 = "GhostViewApi21"
            java.lang.String r2 = "Failed to retrieve GhostView class"
            android.util.Log.i(r1, r2, r0)
        L15:
            r0 = 1
            android.support.transition.GhostViewApi21.sGhostViewClassFetched = r0
        L18:
            return
    }

    private static void fetchRemoveGhostMethod() {
            boolean r0 = android.support.transition.GhostViewApi21.sRemoveGhostMethodFetched
            if (r0 != 0) goto L27
            r0 = 1
            fetchGhostViewClass()     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Class<?> r1 = android.support.transition.GhostViewApi21.sGhostViewClass     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.String r2 = "removeGhost"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1d
            r4 = 0
            java.lang.Class<android.view.View> r5 = android.view.View.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1d
            android.support.transition.GhostViewApi21.sRemoveGhostMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1d
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1d
            goto L25
        L1d:
            r1 = move-exception
            java.lang.String r2 = "GhostViewApi21"
            java.lang.String r3 = "Failed to retrieve removeGhost method"
            android.util.Log.i(r2, r3, r1)
        L25:
            android.support.transition.GhostViewApi21.sRemoveGhostMethodFetched = r0
        L27:
            return
    }

    static void removeGhost(android.view.View r4) {
            fetchRemoveGhostMethod()
            java.lang.reflect.Method r0 = android.support.transition.GhostViewApi21.sRemoveGhostMethod
            if (r0 == 0) goto L1d
            r1 = 0
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L1d
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L1d
            r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L1d
            goto L1d
        L12:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.Throwable r4 = r4.getCause()
            r0.<init>(r4)
            throw r0
        L1d:
            return
    }

    @Override
    public void reserveEndViewTransition(android.view.ViewGroup r1, android.view.View r2) {
            r0 = this;
            return
    }

    @Override
    public void setVisibility(int r2) {
            r1 = this;
            android.view.View r0 = r1.mGhostView
            r0.setVisibility(r2)
            return
    }
}
