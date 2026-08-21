package com.bytedance.pangle.activity;

public final class a implements android.view.View.OnClickListener {
    private final android.app.Activity a;
    private final java.lang.String b;
    private final int c;
    private java.lang.reflect.Method d;

    public a(android.app.Activity r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r3
            r0.c = r2
            return
    }

    @Override
    public final void onClick(android.view.View r7) {
            r6 = this;
            java.lang.reflect.Method r0 = r6.d
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L3d
            android.app.Activity r0 = r6.a
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.String r3 = r6.b     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Class<android.view.View> r5 = android.view.View.class
            r4[r1] = r5     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.reflect.Method r0 = r0.getMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L1d
            if (r0 == 0) goto L1d
            r6.d = r0     // Catch: java.lang.NoSuchMethodException -> L1d
            goto L3d
        L1d:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Could not find method "
            r0.<init>(r1)
            java.lang.String r1 = r6.b
            r0.append(r1)
            java.lang.String r1 = "(View) in a parent or ancestor Context for android:onClick attribute defined on view "
            r0.append(r1)
            int r1 = r6.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            throw r7
        L3d:
            java.lang.reflect.Method r0 = r6.d     // Catch: java.lang.reflect.InvocationTargetException -> L49 java.lang.IllegalAccessException -> L52
            android.app.Activity r3 = r6.a     // Catch: java.lang.reflect.InvocationTargetException -> L49 java.lang.IllegalAccessException -> L52
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L49 java.lang.IllegalAccessException -> L52
            r2[r1] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L49 java.lang.IllegalAccessException -> L52
            r0.invoke(r3, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L49 java.lang.IllegalAccessException -> L52
            return
        L49:
            r7 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Could not execute method for android:onClick"
            r0.<init>(r1, r7)
            throw r0
        L52:
            r7 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Could not execute non-public method for android:onClick"
            r0.<init>(r1, r7)
            throw r0
    }
}
