package android.support.v4.widget;

public final class PopupWindowCompat {
    private static final java.lang.String TAG = "PopupWindowCompatApi21";
    private static java.lang.reflect.Method sGetWindowLayoutTypeMethod;
    private static boolean sGetWindowLayoutTypeMethodAttempted;
    private static java.lang.reflect.Field sOverlapAnchorField;
    private static boolean sOverlapAnchorFieldAttempted;
    private static java.lang.reflect.Method sSetWindowLayoutTypeMethod;
    private static boolean sSetWindowLayoutTypeMethodAttempted;

    private PopupWindowCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getOverlapAnchor(@android.support.annotation.NonNull android.widget.PopupWindow r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            boolean r4 = r4.getOverlapAnchor()
            return r4
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L45
            boolean r0 = android.support.v4.widget.PopupWindowCompat.sOverlapAnchorFieldAttempted
            java.lang.String r1 = "PopupWindowCompatApi21"
            if (r0 != 0) goto L30
            r0 = 1
            java.lang.Class<android.widget.PopupWindow> r2 = android.widget.PopupWindow.class
            java.lang.String r3 = "mOverlapAnchor"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L28
            android.support.v4.widget.PopupWindowCompat.sOverlapAnchorField = r2     // Catch: java.lang.NoSuchFieldException -> L28
            java.lang.reflect.Field r2 = android.support.v4.widget.PopupWindowCompat.sOverlapAnchorField     // Catch: java.lang.NoSuchFieldException -> L28
            r2.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L28
            goto L2e
        L28:
            r2 = move-exception
            java.lang.String r3 = "Could not fetch mOverlapAnchor field from PopupWindow"
            android.util.Log.i(r1, r3, r2)
        L2e:
            android.support.v4.widget.PopupWindowCompat.sOverlapAnchorFieldAttempted = r0
        L30:
            java.lang.reflect.Field r0 = android.support.v4.widget.PopupWindowCompat.sOverlapAnchorField
            if (r0 == 0) goto L45
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.IllegalAccessException -> L3f
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.IllegalAccessException -> L3f
            boolean r4 = r4.booleanValue()     // Catch: java.lang.IllegalAccessException -> L3f
            return r4
        L3f:
            r4 = move-exception
            java.lang.String r0 = "Could not get overlap anchor field in PopupWindow"
            android.util.Log.i(r1, r0, r4)
        L45:
            r4 = 0
            return r4
    }

    public static int getWindowLayoutType(@android.support.annotation.NonNull android.widget.PopupWindow r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            int r5 = r5.getWindowLayoutType()
            return r5
        Lb:
            boolean r0 = android.support.v4.widget.PopupWindowCompat.sGetWindowLayoutTypeMethodAttempted
            r1 = 0
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.widget.PopupWindow> r2 = android.widget.PopupWindow.class
            java.lang.String r3 = "getWindowLayoutType"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L22
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L22
            android.support.v4.widget.PopupWindowCompat.sGetWindowLayoutTypeMethod = r2     // Catch: java.lang.Exception -> L22
            java.lang.reflect.Method r2 = android.support.v4.widget.PopupWindowCompat.sGetWindowLayoutTypeMethod     // Catch: java.lang.Exception -> L22
            r2.setAccessible(r0)     // Catch: java.lang.Exception -> L22
        L22:
            android.support.v4.widget.PopupWindowCompat.sGetWindowLayoutTypeMethodAttempted = r0
        L24:
            java.lang.reflect.Method r0 = android.support.v4.widget.PopupWindowCompat.sGetWindowLayoutTypeMethod
            if (r0 == 0) goto L35
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L35
            java.lang.Object r5 = r0.invoke(r5, r2)     // Catch: java.lang.Exception -> L35
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Exception -> L35
            int r5 = r5.intValue()     // Catch: java.lang.Exception -> L35
            return r5
        L35:
            return r1
    }

    public static void setOverlapAnchor(@android.support.annotation.NonNull android.widget.PopupWindow r4, boolean r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r4.setOverlapAnchor(r5)
            goto L41
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L41
            boolean r0 = android.support.v4.widget.PopupWindowCompat.sOverlapAnchorFieldAttempted
            java.lang.String r1 = "PopupWindowCompatApi21"
            if (r0 != 0) goto L2f
            r0 = 1
            java.lang.Class<android.widget.PopupWindow> r2 = android.widget.PopupWindow.class
            java.lang.String r3 = "mOverlapAnchor"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L27
            android.support.v4.widget.PopupWindowCompat.sOverlapAnchorField = r2     // Catch: java.lang.NoSuchFieldException -> L27
            java.lang.reflect.Field r2 = android.support.v4.widget.PopupWindowCompat.sOverlapAnchorField     // Catch: java.lang.NoSuchFieldException -> L27
            r2.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L27
            goto L2d
        L27:
            r2 = move-exception
            java.lang.String r3 = "Could not fetch mOverlapAnchor field from PopupWindow"
            android.util.Log.i(r1, r3, r2)
        L2d:
            android.support.v4.widget.PopupWindowCompat.sOverlapAnchorFieldAttempted = r0
        L2f:
            java.lang.reflect.Field r0 = android.support.v4.widget.PopupWindowCompat.sOverlapAnchorField
            if (r0 == 0) goto L41
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.IllegalAccessException -> L3b
            r0.set(r4, r5)     // Catch: java.lang.IllegalAccessException -> L3b
            goto L41
        L3b:
            r4 = move-exception
            java.lang.String r5 = "Could not set overlap anchor field in PopupWindow"
            android.util.Log.i(r1, r5, r4)
        L41:
            return
    }

    public static void setWindowLayoutType(@android.support.annotation.NonNull android.widget.PopupWindow r6, int r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto La
            r6.setWindowLayoutType(r7)
            return
        La:
            boolean r0 = android.support.v4.widget.PopupWindowCompat.sSetWindowLayoutTypeMethodAttempted
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L27
            java.lang.Class<android.widget.PopupWindow> r0 = android.widget.PopupWindow.class
            java.lang.String r3 = "setWindowLayoutType"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L25
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L25
            r4[r1] = r5     // Catch: java.lang.Exception -> L25
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L25
            android.support.v4.widget.PopupWindowCompat.sSetWindowLayoutTypeMethod = r0     // Catch: java.lang.Exception -> L25
            java.lang.reflect.Method r0 = android.support.v4.widget.PopupWindowCompat.sSetWindowLayoutTypeMethod     // Catch: java.lang.Exception -> L25
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L25
        L25:
            android.support.v4.widget.PopupWindowCompat.sSetWindowLayoutTypeMethodAttempted = r2
        L27:
            java.lang.reflect.Method r0 = android.support.v4.widget.PopupWindowCompat.sSetWindowLayoutTypeMethod
            if (r0 == 0) goto L36
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L36
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L36
            r2[r1] = r7     // Catch: java.lang.Exception -> L36
            r0.invoke(r6, r2)     // Catch: java.lang.Exception -> L36
        L36:
            return
    }

    public static void showAsDropDown(@android.support.annotation.NonNull android.widget.PopupWindow r2, @android.support.annotation.NonNull android.view.View r3, int r4, int r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r2.showAsDropDown(r3, r4, r5, r6)
            goto L24
        La:
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r3)
            int r6 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r6, r0)
            r6 = r6 & 7
            r0 = 5
            if (r6 != r0) goto L21
            int r6 = r2.getWidth()
            int r0 = r3.getWidth()
            int r6 = r6 - r0
            int r4 = r4 - r6
        L21:
            r2.showAsDropDown(r3, r4, r5)
        L24:
            return
    }
}
