package com.qq.e.comm;

public class a {
    public static boolean a(android.content.Context r8) {
            r0 = 0
            java.lang.String r1 = "android.permission.INTERNET"
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String r3 = "android.permission.ACCESS_WIFI_STATE"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}     // Catch: java.lang.Throwable -> Lb2
            r2 = r0
        Lc:
            r3 = 1
            r4 = 3
            if (r2 >= r4) goto L32
            r4 = r1[r2]     // Catch: java.lang.Throwable -> L2a
            int r5 = r8.checkCallingOrSelfPermission(r4)     // Catch: java.lang.Throwable -> L2a
            r6 = -1
            if (r5 != r6) goto L27
            java.lang.String r1 = "Permission[%s]需要在AndroidManifest.xml中声明"
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L2a
            r2[r0] = r4     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Throwable -> L2a
            com.qq.e.comm.util.GDTLogger.e(r1)     // Catch: java.lang.Throwable -> L2a
            goto L30
        L27:
            int r2 = r2 + 1
            goto Lc
        L2a:
            r1 = move-exception
            java.lang.String r2 = "检查权限时发生异常"
            com.qq.e.comm.util.GDTLogger.e(r2, r1)     // Catch: java.lang.Throwable -> Lb2
        L30:
            r1 = r0
            goto L33
        L32:
            r1 = r3
        L33:
            if (r1 == 0) goto Lb1
            java.lang.Class[] r1 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r2 = com.qq.e.comm.constants.CustomPkgConstants.getADActivityName()     // Catch: java.lang.Throwable -> Lb2
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> Lb2
            r1[r0] = r2     // Catch: java.lang.Throwable -> Lb2
            boolean r1 = a(r8, r1)     // Catch: java.lang.Throwable -> Lb2
            if (r1 == 0) goto Lb1
            java.lang.Class[] r1 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r2 = com.qq.e.comm.constants.CustomPkgConstants.getPortraitADActivityName()     // Catch: java.lang.Throwable -> Lb2
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> Lb2
            r1[r0] = r2     // Catch: java.lang.Throwable -> Lb2
            boolean r1 = a(r8, r1)     // Catch: java.lang.Throwable -> Lb2
            if (r1 == 0) goto Lb1
            java.lang.Class[] r1 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r2 = com.qq.e.comm.constants.CustomPkgConstants.getLandscapeADActivityName()     // Catch: java.lang.Throwable -> Lb2
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> Lb2
            r1[r0] = r2     // Catch: java.lang.Throwable -> Lb2
            boolean r1 = a(r8, r1)     // Catch: java.lang.Throwable -> Lb2
            if (r1 == 0) goto Lb1
            java.lang.Class[] r1 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r2 = com.qq.e.comm.constants.CustomPkgConstants.getDownLoadServiceName()     // Catch: java.lang.Throwable -> Lb2
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> Lb2
            r1[r0] = r2     // Catch: java.lang.Throwable -> Lb2
            r2 = r0
        L78:
            if (r2 >= r3) goto Lad
            r4 = r1[r2]     // Catch: java.lang.Throwable -> La5
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> La5
            r5.<init>()     // Catch: java.lang.Throwable -> La5
            r5.setClass(r8, r4)     // Catch: java.lang.Throwable -> La5
            android.content.pm.PackageManager r6 = r8.getPackageManager()     // Catch: java.lang.Throwable -> La5
            r7 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r5 = r6.resolveService(r5, r7)     // Catch: java.lang.Throwable -> La5
            if (r5 != 0) goto La2
            java.lang.String r8 = "Service[%s]需要在AndroidManifest.xml中声明"
            java.lang.Object[] r1 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r4.getName()     // Catch: java.lang.Throwable -> La5
            r1[r0] = r2     // Catch: java.lang.Throwable -> La5
            java.lang.String r8 = java.lang.String.format(r8, r1)     // Catch: java.lang.Throwable -> La5
            com.qq.e.comm.util.GDTLogger.e(r8)     // Catch: java.lang.Throwable -> La5
            goto Lab
        La2:
            int r2 = r2 + 1
            goto L78
        La5:
            r8 = move-exception
            java.lang.String r1 = "检查Service时发生异常"
            com.qq.e.comm.util.GDTLogger.e(r1, r8)     // Catch: java.lang.Throwable -> Lb2
        Lab:
            r8 = r0
            goto Lae
        Lad:
            r8 = r3
        Lae:
            if (r8 == 0) goto Lb1
            r0 = r3
        Lb1:
            return r0
        Lb2:
            r8 = move-exception
            java.lang.String r1 = "检查AndroidManifest.xml时发生异常"
            com.qq.e.comm.util.GDTLogger.e(r1, r8)
            return r0
    }

    private static boolean a(android.content.Context r6, java.lang.Class<?>... r7) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r7.length     // Catch: java.lang.Throwable -> L34
            r3 = 1
            if (r1 >= r2) goto L33
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L34
            r2.<init>()     // Catch: java.lang.Throwable -> L34
            r4 = r7[r1]     // Catch: java.lang.Throwable -> L34
            r2.setClass(r6, r4)     // Catch: java.lang.Throwable -> L34
            android.content.pm.PackageManager r4 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L34
            r5 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r2 = r4.resolveActivity(r2, r5)     // Catch: java.lang.Throwable -> L34
            if (r2 != 0) goto L30
            java.lang.String r6 = "Activity[%s]需要在AndroidManifest.xml中声明"
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L34
            r7 = r7[r1]     // Catch: java.lang.Throwable -> L34
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Throwable -> L34
            r2[r0] = r7     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = java.lang.String.format(r6, r2)     // Catch: java.lang.Throwable -> L34
            com.qq.e.comm.util.GDTLogger.e(r6)     // Catch: java.lang.Throwable -> L34
            return r0
        L30:
            int r1 = r1 + 1
            goto L2
        L33:
            return r3
        L34:
            r6 = move-exception
            java.lang.String r7 = "检查Activity时发生异常"
            com.qq.e.comm.util.GDTLogger.e(r7, r6)
            return r0
    }
}
