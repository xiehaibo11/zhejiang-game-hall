package com.igexin.push.config;

public class m {
    public static void a() {
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L55
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L55
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L55
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo(r2, r3)     // Catch: java.lang.Exception -> L55
            android.os.Bundle r1 = r1.metaData     // Catch: java.lang.Exception -> L55
            if (r1 == 0) goto L5f
            java.util.Set r2 = r1.keySet()     // Catch: java.lang.Exception -> L55
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L55
        L1f:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L55
            if (r3 == 0) goto L5f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L55
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = "PUSH_DOMAIN"
            boolean r4 = r3.equals(r4)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L1f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r2.<init>()     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = "PUSH_DOMAIN:"
            r2.append(r4)     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = r1.getString(r3)     // Catch: java.lang.Exception -> L55
            r2.append(r4)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L55
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L55
            com.igexin.b.a.c.b.a(r2, r4)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r1.getString(r3)     // Catch: java.lang.Exception -> L55
            a(r1)     // Catch: java.lang.Exception -> L55
            goto L5f
        L55:
            r1 = move-exception
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        L5f:
            return
    }

    private static void a(java.lang.String r5) {
            r0 = 1
            java.lang.String[] r1 = new java.lang.String[r0]
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "socket://xfr."
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = ":5224"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r4 = 0
            r1[r4] = r2
            com.igexin.push.config.SDKUrlConfig.setXfrAddressIps(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "XFR_ADDRESS_IPS:"
            r1.append(r2)
            java.lang.String[] r2 = com.igexin.push.config.SDKUrlConfig.getXfrAddress()
            r2 = r2[r4]
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r2 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r1, r2)
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "socket://xfr_bak."
            r1.append(r2)
            r1.append(r5)
            r1.append(r3)
            java.lang.String r5 = r1.toString()
            r0[r4] = r5
            com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK = r0
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "XFR_ADDRESS_IPS_BAK:"
            r5.append(r0)
            java.lang.String[] r0 = com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK
            r0 = r0[r4]
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r0 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r5, r0)
            return
    }
}
