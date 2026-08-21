package com.tencent.open.b;

public class a {
    protected static final android.net.Uri a = null;

    static {
            java.lang.String r0 = "content://telephony/carriers/preferapn"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.tencent.open.b.a.a = r0
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            int r0 = d(r2)
            r1 = 2
            if (r0 != r1) goto La
            java.lang.String r2 = "wifi"
            return r2
        La:
            r1 = 1
            if (r0 != r1) goto L10
            java.lang.String r2 = "cmwap"
            return r2
        L10:
            r1 = 4
            if (r0 != r1) goto L16
            java.lang.String r2 = "cmnet"
            return r2
        L16:
            r1 = 16
            if (r0 != r1) goto L1d
            java.lang.String r2 = "uniwap"
            return r2
        L1d:
            r1 = 8
            if (r0 != r1) goto L24
            java.lang.String r2 = "uninet"
            return r2
        L24:
            r1 = 64
            if (r0 != r1) goto L2b
            java.lang.String r2 = "wap"
            return r2
        L2b:
            r1 = 32
            if (r0 != r1) goto L32
            java.lang.String r2 = "net"
            return r2
        L32:
            r1 = 512(0x200, float:7.17E-43)
            if (r0 != r1) goto L39
            java.lang.String r2 = "ctwap"
            return r2
        L39:
            r1 = 256(0x100, float:3.59E-43)
            if (r0 != r1) goto L40
            java.lang.String r2 = "ctnet"
            return r2
        L40:
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 != r1) goto L47
            java.lang.String r2 = "3gnet"
            return r2
        L47:
            r1 = 1024(0x400, float:1.435E-42)
            if (r0 != r1) goto L4e
            java.lang.String r2 = "3gwap"
            return r2
        L4e:
            java.lang.String r2 = b(r2)
            if (r2 == 0) goto L5c
            int r0 = r2.length()
            if (r0 != 0) goto L5b
            goto L5c
        L5b:
            return r2
        L5c:
            java.lang.String r2 = "none"
            return r2
    }

    public static java.lang.String b(android.content.Context r0) {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String c(android.content.Context r6) {
            android.content.ContentResolver r0 = r6.getContentResolver()     // Catch: java.lang.SecurityException -> L31
            android.net.Uri r1 = com.tencent.open.b.a.a     // Catch: java.lang.SecurityException -> L31
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            android.database.Cursor r6 = r0.query(r1, r2, r3, r4, r5)     // Catch: java.lang.SecurityException -> L31
            r0 = 0
            if (r6 != 0) goto L12
            return r0
        L12:
            r6.moveToFirst()     // Catch: java.lang.SecurityException -> L31
            boolean r1 = r6.isAfterLast()     // Catch: java.lang.SecurityException -> L31
            if (r1 == 0) goto L21
            if (r6 == 0) goto L20
            r6.close()     // Catch: java.lang.SecurityException -> L31
        L20:
            return r0
        L21:
            java.lang.String r0 = "proxy"
            int r0 = r6.getColumnIndex(r0)     // Catch: java.lang.SecurityException -> L31
            java.lang.String r0 = r6.getString(r0)     // Catch: java.lang.SecurityException -> L31
            if (r6 == 0) goto L30
            r6.close()     // Catch: java.lang.SecurityException -> L31
        L30:
            return r0
        L31:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getApnProxy has exception: "
            r0.append(r1)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "openSDK_LOG.APNUtil"
            com.tencent.open.log.SLog.e(r0, r6)
            java.lang.String r6 = ""
            return r6
    }

    public static int d(android.content.Context r5) {
            r0 = 128(0x80, float:1.8E-43)
            android.net.NetworkInfo r1 = e(r5)     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto L9
            return r0
        L9:
            java.lang.String r2 = r1.getTypeName()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.toUpperCase()     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = "WIFI"
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L1b
            r5 = 2
            return r5
        L1b:
            java.lang.String r1 = r1.getExtraInfo()     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = "cmwap"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L2d
            r5 = 1
            return r5
        L2d:
            java.lang.String r2 = "cmnet"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 != 0) goto Lac
            java.lang.String r2 = "epc.tmobile.com"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L3e
            goto Lac
        L3e:
            java.lang.String r2 = "uniwap"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L49
            r5 = 16
            return r5
        L49:
            java.lang.String r2 = "uninet"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L54
            r5 = 8
            return r5
        L54:
            java.lang.String r2 = "wap"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L5f
            r5 = 64
            return r5
        L5f:
            java.lang.String r2 = "net"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L6a
            r5 = 32
            return r5
        L6a:
            java.lang.String r2 = "ctwap"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            r3 = 512(0x200, float:7.17E-43)
            if (r2 == 0) goto L75
            return r3
        L75:
            java.lang.String r2 = "ctnet"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            r4 = 256(0x100, float:3.59E-43)
            if (r2 == 0) goto L80
            return r4
        L80:
            java.lang.String r2 = "3gwap"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L8b
            r5 = 1024(0x400, float:1.435E-42)
            return r5
        L8b:
            java.lang.String r2 = "3gnet"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r2 == 0) goto L96
            r5 = 2048(0x800, float:2.87E-42)
            return r5
        L96:
            java.lang.String r2 = "#777"
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto Lc9
            java.lang.String r5 = c(r5)     // Catch: java.lang.Exception -> Lae
            if (r5 == 0) goto Lab
            int r5 = r5.length()     // Catch: java.lang.Exception -> Lae
            if (r5 <= 0) goto Lab
            return r3
        Lab:
            return r4
        Lac:
            r5 = 4
            return r5
        Lae:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getMProxyType has exception: "
            r1.append(r2)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = "openSDK_LOG.APNUtil"
            com.tencent.open.log.SLog.e(r1, r5)
        Lc9:
            return r0
    }

    static android.net.NetworkInfo e(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L11
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L11
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            return r0
    }
}
