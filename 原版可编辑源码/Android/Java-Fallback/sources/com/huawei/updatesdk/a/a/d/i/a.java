package com.huawei.updatesdk.a.a.d.i;

public class a {
    private static android.net.ConnectivityManager a;

    public static int a(android.net.NetworkInfo r4) {
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L25
            boolean r2 = r4.isConnected()
            if (r2 == 0) goto L25
            int r2 = r4.getType()
            if (r0 == r2) goto L26
            r3 = 13
            if (r3 != r2) goto L15
            goto L26
        L15:
            if (r2 != 0) goto L25
            int r4 = r4.getSubtype()
            switch(r4) {
                case 1: goto L23;
                case 2: goto L23;
                case 3: goto L21;
                case 4: goto L23;
                case 5: goto L21;
                case 6: goto L21;
                case 7: goto L23;
                case 8: goto L21;
                case 9: goto L21;
                case 10: goto L21;
                case 11: goto L23;
                case 12: goto L21;
                case 13: goto L1f;
                case 14: goto L21;
                case 15: goto L21;
                default: goto L1e;
            }
        L1e:
            goto L25
        L1f:
            r0 = 4
            goto L26
        L21:
            r0 = 3
            goto L26
        L23:
            r0 = 2
            goto L26
        L25:
            r0 = r1
        L26:
            return r0
    }

    public static android.net.NetworkInfo a(android.content.Context r0) {
            android.net.ConnectivityManager r0 = b(r0)
            if (r0 == 0) goto Lb
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    private static android.net.ConnectivityManager b(android.content.Context r1) {
            android.net.ConnectivityManager r0 = com.huawei.updatesdk.a.a.d.i.a.a
            if (r0 != 0) goto L12
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            com.huawei.updatesdk.a.a.d.i.a.a = r1
        L12:
            android.net.ConnectivityManager r1 = com.huawei.updatesdk.a.a.d.i.a.a
            return r1
    }

    public static int c(android.content.Context r0) {
            android.net.NetworkInfo r0 = a(r0)
            int r0 = a(r0)
            return r0
    }

    public static boolean d(android.content.Context r0) {
            if (r0 == 0) goto L16
            android.net.ConnectivityManager r0 = b(r0)
            if (r0 == 0) goto L16
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()
            if (r0 == 0) goto L16
            boolean r0 = r0.isConnected()
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }
}
