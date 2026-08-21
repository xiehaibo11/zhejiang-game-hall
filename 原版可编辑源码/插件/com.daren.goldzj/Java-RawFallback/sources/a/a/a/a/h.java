package a.a.a.a;

public class h {
    public static void a(android.view.Window r6) {
            java.lang.Class<android.view.Window> r0 = android.view.Window.class
            java.lang.String r1 = "addExtraFlags"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L1e
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L1e
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L1e
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L1e
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L1e
            r2 = 768(0x300, float:1.076E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L1e
            r1[r5] = r2     // Catch: java.lang.Exception -> L1e
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L1e
            goto L25
        L1e:
            java.lang.String r6 = "ymnsdk "
            java.lang.String r0 = "addExtraFlags not found."
            android.util.Log.e(r6, r0)
        L25:
            return
    }

    public static boolean a(android.content.Context r6) {
            r0 = 0
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r6 = r6.loadClass(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.String r1 = "getInt"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r0] = r4     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            r5 = 1
            r3[r5] = r4     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.reflect.Method r1 = r6.getMethod(r1, r3)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.String r3 = "ro.miui.notch"
            r2[r0] = r3     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            r2[r5] = r3     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Object r6 = r1.invoke(r6, r2)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            if (r6 != r5) goto L36
            r0 = 1
        L36:
            return r0
        L37:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L3b
        L3b:
            return r0
    }
}
