package com.huawei.hms.hatool;

public class h {
    public static java.lang.String a(int r0, java.lang.String r1) {
            switch(r0) {
                case 1: goto L1f;
                case 2: goto L1f;
                case 3: goto L22;
                case 4: goto L1f;
                case 5: goto L22;
                case 6: goto L22;
                case 7: goto L1f;
                case 8: goto L22;
                case 9: goto L22;
                case 10: goto L22;
                case 11: goto L1f;
                case 12: goto L22;
                case 13: goto L1c;
                case 14: goto L22;
                case 15: goto L22;
                default: goto L3;
            }
        L3:
            java.lang.String r0 = "TD-SCDMA"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = "WCDMA"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = "CDMA2000"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L24
            goto L22
        L1c:
            java.lang.String r1 = "4G"
            goto L24
        L1f:
            java.lang.String r1 = "2G"
            goto L24
        L22:
            java.lang.String r1 = "3G"
        L24:
            return r1
    }

    public static java.lang.String a(android.content.Context r5) {
            java.lang.String r0 = ""
            java.lang.String r1 = "hmsSdk"
            if (r5 == 0) goto Lb5
            android.content.pm.PackageManager r2 = r5.getPackageManager()
            java.lang.String r3 = r5.getPackageName()
            java.lang.String r4 = "android.permission.ACCESS_NETWORK_STATE"
            int r2 = r2.checkPermission(r4, r3)
            if (r2 == 0) goto L18
            goto Lb5
        L18:
            java.lang.String r2 = "connectivity"
            java.lang.Object r5 = r5.getSystemService(r2)
            android.net.ConnectivityManager r5 = (android.net.ConnectivityManager) r5
            if (r5 == 0) goto Lb4
            android.net.NetworkInfo r5 = r5.getActiveNetworkInfo()
            if (r5 == 0) goto Lb4
            boolean r2 = r5.isConnected()
            if (r2 == 0) goto Lb4
            int r0 = r5.getType()
            r2 = 1
            if (r0 != r2) goto L39
            java.lang.String r0 = "WIFI"
            goto Lb4
        L39:
            int r0 = r5.getType()
            if (r0 != 0) goto L60
            java.lang.String r0 = r5.getSubtypeName()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Network getSubtypeName : "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.hatool.y.c(r1, r2)
            int r5 = r5.getSubtype()
            java.lang.String r0 = a(r5, r0)
            goto Lb4
        L60:
            int r0 = r5.getType()
            r2 = 16
            java.lang.String r3 = "type name = "
            if (r0 != r2) goto L7f
            java.lang.String r0 = "COMPANION_PROXY"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.huawei.hms.hatool.y.f(r1, r5)
            goto Lb4
        L7f:
            int r0 = r5.getType()
            r2 = 9
            if (r0 != r2) goto L9c
            java.lang.String r0 = "ETHERNET"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.huawei.hms.hatool.y.c(r1, r5)
            goto Lb4
        L9c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            int r5 = r5.getType()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.huawei.hms.hatool.y.c(r1, r5)
            java.lang.String r0 = "OTHER_NETWORK_TYPE"
        Lb4:
            return r0
        Lb5:
            java.lang.String r5 = "not have network state phone permission!"
            com.huawei.hms.hatool.y.f(r1, r5)
            return r0
    }
}
