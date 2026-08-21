package a.a.a.a;

public class g {
    public static boolean a(android.content.Context r1) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = "com.oppo.feature.screen.heteromorphism"
            boolean r1 = r1.hasSystemFeature(r0)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static boolean b(android.content.Context r6) {
            java.lang.String r0 = "ymnsdk "
            r1 = 0
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.String r2 = "android.util.FtFeature"
            java.lang.Class r6 = r6.loadClass(r2)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.String r2 = "isFeatureSupport"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            r4[r1] = r5     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.reflect.Method r2 = r6.getMethod(r2, r4)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            r4 = 32
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            r3[r1] = r4     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.Object r6 = r2.invoke(r6, r3)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            boolean r6 = r6.booleanValue()     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L35 java.lang.ClassNotFoundException -> L3b java.lang.Throwable -> L40
            return r6
        L2f:
            java.lang.String r6 = "VivoAndOppoUtils hasNotchAtVivo Exception"
            android.util.Log.e(r0, r6)     // Catch: java.lang.Throwable -> L40
            return r1
        L35:
            java.lang.String r6 = "VivoAndOppoUtils hasNotchAtVivo NoSuchMethodException"
            android.util.Log.e(r0, r6)     // Catch: java.lang.Throwable -> L40
            return r1
        L3b:
            java.lang.String r6 = "VivoAndOppoUtils hasNotchAtVivo ClassNotFoundException"
            android.util.Log.e(r0, r6)     // Catch: java.lang.Throwable -> L40
        L40:
            return r1
    }
}
