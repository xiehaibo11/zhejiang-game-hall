package a.a.a.a;

public class c {
    public static void a(android.view.Window r6) {
            if (r6 != 0) goto L3
            return
        L3:
            android.view.WindowManager$LayoutParams r6 = r6.getAttributes()
            java.lang.String r0 = "com.huawei.android.view.LayoutParamsEx"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3b
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.view.WindowManager$LayoutParams> r3 = android.view.WindowManager.LayoutParams.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r3[r4] = r6     // Catch: java.lang.Exception -> L3b
            java.lang.Object r6 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "addHwFlags"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L3b
            r3[r4] = r5     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r2 = 256(0x100, float:3.59E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3b
            r1[r4] = r2     // Catch: java.lang.Exception -> L3b
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L3b
            goto L56
        L3b:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "  setFullScreenWindowLayoutInDisplayCutout "
            r0.append(r1)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "HuaWeiUtils "
            android.util.Log.e(r0, r6)
        L56:
            return
    }

    public static boolean a(android.content.Context r4) {
            r0 = 0
            java.lang.ClassLoader r4 = r4.getClassLoader()     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            java.lang.String r1 = "com.huawei.android.util.HwNotchSizeUtil"
            java.lang.Class r4 = r4.loadClass(r1)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            java.lang.String r1 = "hasNotchInScreen"
            java.lang.Class[] r2 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            java.lang.reflect.Method r1 = r4.getMethod(r1, r2)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            java.lang.Object r4 = r1.invoke(r4, r2)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3b
            return r4
        L20:
            r4 = move-exception
            java.lang.String r1 = "HuaWeiUtils "
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b
            r2.<init>()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = " hasNotch "
            r2.append(r3)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L3b
            r2.append(r4)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L3b
            android.util.Log.e(r1, r4)     // Catch: java.lang.Throwable -> L3b
        L3b:
            return r0
    }
}
