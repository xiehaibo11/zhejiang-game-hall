package com.huawei.hms.utils;

public abstract class NetWorkUtil {

    public static final class NetType {
        public static final int NET = -2;
        public static final int TYPE_2G = 2;
        public static final int TYPE_3G = 3;
        public static final int TYPE_4G = 4;
        public static final int TYPE_5G = 5;
        public static final int TYPE_ETHERNET = 9;
        public static final int TYPE_NEED_INIT = -1;
        public static final int TYPE_OTHER = 6;
        public static final int TYPE_UNKNOWN = 0;
        public static final int TYPE_WIFI = 1;
        public static final int WAP = -3;

        public NetType() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public NetWorkUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.net.NetworkInfo r3) {
            r0 = 9
            r1 = 1
            if (r3 == 0) goto L35
            boolean r2 = r3.isConnected()
            if (r2 == 0) goto L35
            int r2 = r3.getType()
            if (r2 != r1) goto L13
            r0 = r1
            goto L36
        L13:
            int r1 = r3.getType()
            if (r1 != 0) goto L2e
            int r3 = r3.getSubtype()
            r0 = 20
            if (r3 == r0) goto L2c
            switch(r3) {
                case 1: goto L2a;
                case 2: goto L2a;
                case 3: goto L28;
                case 4: goto L2a;
                case 5: goto L28;
                case 6: goto L28;
                case 7: goto L28;
                case 8: goto L28;
                case 9: goto L28;
                case 10: goto L28;
                case 11: goto L28;
                case 12: goto L28;
                case 13: goto L26;
                case 14: goto L26;
                case 15: goto L28;
                default: goto L24;
            }
        L24:
            r0 = 6
            goto L36
        L26:
            r0 = 4
            goto L36
        L28:
            r0 = 3
            goto L36
        L2a:
            r0 = 2
            goto L36
        L2c:
            r0 = 5
            goto L36
        L2e:
            int r3 = r3.getType()
            if (r0 != r3) goto L35
            goto L36
        L35:
            r0 = 0
        L36:
            return r0
    }

    public static android.net.NetworkInfo a(android.content.Context r1) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            if (r1 == 0) goto Lf
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    public static int getNetworkType(android.content.Context r0) {
            android.net.NetworkInfo r0 = a(r0)
            int r0 = a(r0)
            return r0
    }
}
