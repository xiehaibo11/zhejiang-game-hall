package com.bianfeng.utilslib.screen;

public class VivoAndOppoUtils {
    public static final int VIVO_FILLET = 8;
    public static final int VIVO_NOTCH = 32;

    public VivoAndOppoUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean hasOppoNotch(android.content.Context r1) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = "com.oppo.feature.screen.heteromorphism"
            boolean r1 = r1.hasSystemFeature(r0)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static boolean hasVivoNotch(android.content.Context r6) {
            java.lang.String r0 = "VivoAndOppoUtils"
            r1 = 0
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.String r2 = "android.util.FtFeature"
            java.lang.Class r6 = r6.loadClass(r2)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.String r2 = "isFeatureSupport"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            r4[r1] = r5     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.reflect.Method r2 = r6.getMethod(r2, r4)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            r4 = 32
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            r3[r1] = r4     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.Object r6 = r2.invoke(r6, r3)     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            boolean r6 = r6.booleanValue()     // Catch: java.lang.Exception -> L2f java.lang.NoSuchMethodException -> L39 java.lang.ClassNotFoundException -> L43 java.lang.Throwable -> L4c
            return r6
        L2f:
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "hasNotchAtVivo Exception"
            r6.e(r0, r2)     // Catch: java.lang.Throwable -> L4c
            return r1
        L39:
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "hasNotchAtVivo NoSuchMethodException"
            r6.e(r0, r2)     // Catch: java.lang.Throwable -> L4c
            return r1
        L43:
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "hasNotchAtVivo ClassNotFoundException"
            r6.e(r0, r2)     // Catch: java.lang.Throwable -> L4c
        L4c:
            return r1
    }
}
