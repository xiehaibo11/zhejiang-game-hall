package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class MainfestUtils {
    public MainfestUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getMetaData(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L20
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Exception -> L20
            android.os.Bundle r0 = r2.metaData     // Catch: java.lang.Exception -> L20
            java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L1d
            android.os.Bundle r2 = r2.metaData     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Exception -> L20
            goto L25
        L1d:
            java.lang.String r2 = ""
            return r2
        L20:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
        L25:
            return r2
    }

    public static java.lang.Boolean getMetaDataWithBool(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L27
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r1.getApplicationInfo(r3, r2)     // Catch: java.lang.Exception -> L27
            android.os.Bundle r1 = r3.metaData     // Catch: java.lang.Exception -> L27
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L26
            android.os.Bundle r3 = r3.metaData     // Catch: java.lang.Exception -> L27
            boolean r3 = r3.getBoolean(r4)     // Catch: java.lang.Exception -> L27
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L27
            goto L2b
        L26:
            return r0
        L27:
            r3 = move-exception
            r3.printStackTrace()
        L2b:
            return r0
    }
}
