package com.kwad.components.core.t;

public final class i {
    private static java.lang.reflect.Method Rm;
    private static java.lang.reflect.Method Rn;
    private static java.lang.reflect.Field Ro;
    private static int SYSTEM_UI_FLAG_LIGHT_STATUS_BAR;

    static {
            java.lang.String r0 = "setStatusBarDarkIcon"
            r1 = 0
            r2 = 1
            java.lang.Class<android.app.Activity> r3 = android.app.Activity.class
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L13
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L13
            r4[r1] = r5     // Catch: java.lang.NoSuchMethodException -> L13
            java.lang.reflect.Method r3 = r3.getMethod(r0, r4)     // Catch: java.lang.NoSuchMethodException -> L13
            com.kwad.components.core.t.i.Rm = r3     // Catch: java.lang.NoSuchMethodException -> L13
            goto L17
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            java.lang.Class<android.app.Activity> r3 = android.app.Activity.class
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L26
            java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> L26
            r2[r1] = r4     // Catch: java.lang.NoSuchMethodException -> L26
            java.lang.reflect.Method r0 = r3.getMethod(r0, r2)     // Catch: java.lang.NoSuchMethodException -> L26
            com.kwad.components.core.t.i.Rn = r0     // Catch: java.lang.NoSuchMethodException -> L26
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()
        L2a:
            java.lang.Class<android.view.WindowManager$LayoutParams> r0 = android.view.WindowManager.LayoutParams.class
            java.lang.String r1 = "statusBarColor"
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.NoSuchFieldException -> L35
            com.kwad.components.core.t.i.Ro = r0     // Catch: java.lang.NoSuchFieldException -> L35
            goto L39
        L35:
            r0 = move-exception
            r0.printStackTrace()
        L39:
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "SYSTEM_UI_FLAG_LIGHT_STATUS_BAR"
            java.lang.Object r0 = com.kwad.sdk.utils.s.c(r0, r1)     // Catch: java.lang.Exception -> L4a
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L4a
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L4a
            com.kwad.components.core.t.i.SYSTEM_UI_FLAG_LIGHT_STATUS_BAR = r0     // Catch: java.lang.Exception -> L4a
            return
        L4a:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private static void a(android.app.Activity r2, boolean r3, boolean r4) {
            java.lang.reflect.Method r4 = com.kwad.components.core.t.i.Rn
            if (r4 == 0) goto L1c
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L17
            r1 = 0
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L17
            r0[r1] = r3     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L17
            r4.invoke(r2, r0)     // Catch: java.lang.reflect.InvocationTargetException -> L12 java.lang.IllegalAccessException -> L17
            return
        L12:
            r2 = move-exception
            r2.printStackTrace()
            return
        L17:
            r2 = move-exception
            r2.printStackTrace()
            return
        L1c:
            android.view.Window r2 = r2.getWindow()
            a(r2, r3)
            return
    }

    private static void a(android.view.Window r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 >= r1) goto L10
            android.view.WindowManager$LayoutParams r2 = r2.getAttributes()
            java.lang.String r0 = "MEIZU_FLAG_DARK_STATUS_BAR_ICON"
            a(r2, r0, r3)
            return
        L10:
            android.view.View r0 = r2.getDecorView()
            if (r0 == 0) goto L1d
            g(r0, r3)
            r3 = 0
            setStatusBarColor(r2, r3)
        L1d:
            return
    }

    private static boolean a(android.view.WindowManager.LayoutParams r2, java.lang.String r3, boolean r4) {
            java.lang.String r0 = "meizuFlags"
            java.lang.Object r3 = com.kwad.sdk.utils.s.f(r2, r3)     // Catch: java.lang.Throwable -> L27
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L27
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L27
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r2, r0)     // Catch: java.lang.Throwable -> L27
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L27
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L27
            if (r4 == 0) goto L1a
            r3 = r3 | r1
            goto L1c
        L1a:
            int r3 = ~r3     // Catch: java.lang.Throwable -> L27
            r3 = r3 & r1
        L1c:
            if (r1 == r3) goto L2b
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L27
            com.kwad.sdk.utils.s.a(r2, r0, r3)     // Catch: java.lang.Throwable -> L27
            r2 = 1
            return r2
        L27:
            r2 = move-exception
            r2.printStackTrace()
        L2b:
            r2 = 0
            return r2
    }

    public static void b(android.app.Activity r0, boolean r1) {
            r1 = 1
            a(r0, r1, r1)
            return
    }

    private static void g(android.view.View r1, boolean r2) {
            int r0 = r1.getSystemUiVisibility()
            if (r2 == 0) goto La
            int r2 = com.kwad.components.core.t.i.SYSTEM_UI_FLAG_LIGHT_STATUS_BAR
            r2 = r2 | r0
            goto Le
        La:
            int r2 = com.kwad.components.core.t.i.SYSTEM_UI_FLAG_LIGHT_STATUS_BAR
            int r2 = ~r2
            r2 = r2 & r0
        Le:
            if (r2 == r0) goto L13
            r1.setSystemUiVisibility(r2)
        L13:
            return
    }

    private static void setStatusBarColor(android.view.Window r2, int r3) {
            android.view.WindowManager$LayoutParams r3 = r2.getAttributes()
            java.lang.reflect.Field r0 = com.kwad.components.core.t.i.Ro
            if (r0 == 0) goto L20
            int r0 = r0.getInt(r3)     // Catch: java.lang.IllegalAccessException -> L1c
            if (r0 == 0) goto L1b
            java.lang.reflect.Field r0 = com.kwad.components.core.t.i.Ro     // Catch: java.lang.IllegalAccessException -> L1c
            r1 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.IllegalAccessException -> L1c
            r0.set(r3, r1)     // Catch: java.lang.IllegalAccessException -> L1c
            r2.setAttributes(r3)     // Catch: java.lang.IllegalAccessException -> L1c
        L1b:
            return
        L1c:
            r2 = move-exception
            r2.printStackTrace()
        L20:
            return
    }
}
