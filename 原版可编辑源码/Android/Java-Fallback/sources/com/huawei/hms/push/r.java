package com.huawei.hms.push;

public class r {
    public static int a(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            java.lang.String r2 = r2.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            if (r2 == 0) goto L20
            android.os.Bundle r2 = r2.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            if (r2 == 0) goto L20
            int r2 = r2.getInt(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            return r2
        L19:
            java.lang.String r2 = "ResourceLoader"
            java.lang.String r3 = "load meta data resource failed."
            com.huawei.hms.support.log.HMSLog.w(r2, r3)
        L20:
            r2 = 0
            return r2
    }

    public static int a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "ResourceLoader"
            java.lang.String r1 = "--resourceName="
            android.content.res.Resources r2 = r4.getResources()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r3 = r4.getPackageName()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            int r2 = r2.getIdentifier(r6, r5, r3)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            if (r2 != 0) goto L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r2.<init>()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r2.append(r4)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r4 = ".R$"
            r2.append(r4)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r2.append(r5)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r4 = r2.toString()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.reflect.Field r4 = r4.getField(r6)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r2 = r4.getName()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r4 = r4.toString()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            int r2 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            if (r2 != 0) goto L66
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r4.<init>()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r3 = "Error-resourceType="
            r4.append(r3)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r4.append(r5)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r4.append(r1)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r4.append(r6)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r3 = "--resourceId ="
            r4.append(r3)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            r4.append(r2)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            java.lang.String r4 = r4.toString()     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
            com.huawei.hms.support.log.HMSLog.i(r0, r4)     // Catch: java.lang.IllegalArgumentException -> L67 java.lang.IllegalAccessException -> L83 java.lang.NumberFormatException -> L9f java.lang.NoSuchFieldException -> Lbb java.lang.ClassNotFoundException -> Ld7
        L66:
            return r2
        L67:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "!!!! ResourceLoader: IllegalArgumentException-resourceType="
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5, r4)
            goto Lf2
        L83:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "!!!! ResourceLoader: IllegalAccessException-resourceType="
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5, r4)
            goto Lf2
        L9f:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "!!!! ResourceLoader: NumberFormatException-resourceType="
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5, r4)
            goto Lf2
        Lbb:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "!!!! ResourceLoader: NoSuchFieldException-resourceType="
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5, r4)
            goto Lf2
        Ld7:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "!!!! ResourceLoader: ClassNotFoundException-resourceType="
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5, r4)
        Lf2:
            r4 = 0
            return r4
    }
}
