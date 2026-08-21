package com.kwad.sdk.utils;

public final class ag {
    private static int aIR;
    private static boolean aIS;

    static {
            return
    }

    public static android.net.NetworkInfo ci(android.content.Context r2) {
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r0 = com.kwad.sdk.utils.SystemUtil.b(r2, r0)
            r1 = 0
            if (r0 != 0) goto Le
            return r1
        Le:
            java.lang.String r0 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2
            if (r2 != 0) goto L19
            return r1
        L19:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L1e
            return r2
        L1e:
            r2 = move-exception
            r2.printStackTrace()
            return r1
    }

    public static int cj(android.content.Context r4) {
            r0 = 0
            if (r4 == 0) goto L5e
            java.lang.String r1 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String[] r1 = new java.lang.String[]{r1}
            boolean r1 = com.kwad.sdk.utils.SystemUtil.b(r4, r1)
            if (r1 == 0) goto L5e
            java.lang.String r1 = "android.permission.READ_PHONE_STATE"
            java.lang.String[] r1 = new java.lang.String[]{r1}
            boolean r1 = com.kwad.sdk.utils.SystemUtil.b(r4, r1)
            if (r1 != 0) goto L1c
            goto L5e
        L1c:
            android.net.NetworkInfo r1 = ci(r4)     // Catch: java.lang.Exception -> L5e
            r2 = 1
            if (r1 == 0) goto L2b
            boolean r3 = r1.isConnected()     // Catch: java.lang.Exception -> L5e
            if (r3 == 0) goto L2b
            r3 = r2
            goto L2c
        L2b:
            r3 = r0
        L2c:
            if (r3 != 0) goto L2f
            return r0
        L2f:
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L5e
            if (r2 != r1) goto L38
            r4 = 100
            return r4
        L38:
            android.content.Context r1 = r4.getApplicationContext()     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = "phone"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Exception -> L5e
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L5e
            int r1 = r1.getNetworkType()     // Catch: java.lang.Exception -> L5e
            int r4 = l(r4, r1)     // Catch: java.lang.Exception -> L5e
            r1 = 20
            if (r4 == r1) goto L5c
            switch(r4) {
                case 1: goto L5a;
                case 2: goto L5a;
                case 3: goto L58;
                case 4: goto L5a;
                case 5: goto L58;
                case 6: goto L58;
                case 7: goto L5a;
                case 8: goto L58;
                case 9: goto L58;
                case 10: goto L58;
                case 11: goto L5a;
                case 12: goto L58;
                case 13: goto L56;
                case 14: goto L58;
                case 15: goto L58;
                case 16: goto L5a;
                default: goto L55;
            }
        L55:
            return r0
        L56:
            r4 = 4
            return r4
        L58:
            r4 = 3
            return r4
        L5a:
            r4 = 2
            return r4
        L5c:
            r4 = 5
            return r4
        L5e:
            return r0
    }

    public static int d(android.content.Context r10, java.lang.String r11, boolean r12) {
            if (r10 == 0) goto Le8
            int r0 = com.kwad.sdk.utils.ag.aIR
            if (r0 > 0) goto Le8
            boolean r0 = com.kwad.sdk.utils.ag.aIS
            if (r0 == 0) goto Lc
            goto Le8
        Lc:
            java.lang.String r0 = "46003"
            java.lang.String r1 = "46001"
            java.lang.String r2 = "46002"
            java.lang.String r3 = "46000"
            r4 = 2
            r5 = 3
            r6 = 1
            r7 = 0
            if (r12 != 0) goto La2
            android.content.Context r10 = r10.getApplicationContext()     // Catch: java.lang.Exception -> Ld9
            java.lang.String r12 = "phone"
            java.lang.Object r10 = r10.getSystemService(r12)     // Catch: java.lang.Exception -> Ld9
            android.telephony.TelephonyManager r10 = (android.telephony.TelephonyManager) r10     // Catch: java.lang.Exception -> Ld9
            int r12 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Ld9
            r8 = 22
            if (r12 < r8) goto Lad
            java.lang.String r10 = r10.getSimOperator()     // Catch: java.lang.Exception -> Ld9
            r12 = -1
            int r8 = r10.hashCode()     // Catch: java.lang.Exception -> Ld9
            r9 = 49679502(0x2f60c8e, float:3.6153657E-37)
            if (r8 == r9) goto L95
            switch(r8) {
                case 49679470: goto L8d;
                case 49679471: goto L85;
                case 49679472: goto L7d;
                case 49679473: goto L75;
                default: goto L3d;
            }     // Catch: java.lang.Exception -> Ld9
        L3d:
            switch(r8) {
                case 49679475: goto L6a;
                case 49679476: goto L60;
                case 49679477: goto L56;
                case 49679478: goto L4c;
                case 49679479: goto L42;
                default: goto L40;
            }     // Catch: java.lang.Exception -> Ld9
        L40:
            goto L9f
        L42:
            java.lang.String r8 = "46009"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = 6
            goto L9f
        L4c:
            java.lang.String r8 = "46008"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = r5
            goto L9f
        L56:
            java.lang.String r8 = "46007"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = r4
            goto L9f
        L60:
            java.lang.String r8 = "46006"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = 5
            goto L9f
        L6a:
            java.lang.String r8 = "46005"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = 8
            goto L9f
        L75:
            boolean r10 = r10.equals(r0)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = 7
            goto L9f
        L7d:
            boolean r10 = r10.equals(r2)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = r6
            goto L9f
        L85:
            boolean r10 = r10.equals(r1)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = 4
            goto L9f
        L8d:
            boolean r10 = r10.equals(r3)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = r7
            goto L9f
        L95:
            java.lang.String r8 = "46011"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto L9f
            r12 = 9
        L9f:
            switch(r12) {
                case 0: goto Lab;
                case 1: goto Lab;
                case 2: goto Lab;
                case 3: goto Lab;
                case 4: goto La8;
                case 5: goto La8;
                case 6: goto La8;
                case 7: goto La5;
                case 8: goto La5;
                case 9: goto La5;
                default: goto La2;
            }     // Catch: java.lang.Exception -> Ld9
        La2:
            com.kwad.sdk.utils.ag.aIR = r7     // Catch: java.lang.Exception -> Ld9
            goto Lad
        La5:
            com.kwad.sdk.utils.ag.aIR = r4     // Catch: java.lang.Exception -> Ld9
            goto Lad
        La8:
            com.kwad.sdk.utils.ag.aIR = r5     // Catch: java.lang.Exception -> Ld9
            goto Lad
        Lab:
            com.kwad.sdk.utils.ag.aIR = r6     // Catch: java.lang.Exception -> Ld9
        Lad:
            int r10 = com.kwad.sdk.utils.ag.aIR     // Catch: java.lang.Exception -> Ld9
            if (r10 != 0) goto Ldd
            boolean r10 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> Ld9
            if (r10 != 0) goto Ldd
            boolean r10 = r11.startsWith(r3)     // Catch: java.lang.Exception -> Ld9
            if (r10 != 0) goto Ld6
            boolean r10 = r11.startsWith(r2)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto Lc4
            goto Ld6
        Lc4:
            boolean r10 = r11.startsWith(r1)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto Lcd
            com.kwad.sdk.utils.ag.aIR = r5     // Catch: java.lang.Exception -> Ld9
            goto Ldd
        Lcd:
            boolean r10 = r11.startsWith(r0)     // Catch: java.lang.Exception -> Ld9
            if (r10 == 0) goto Ldd
            com.kwad.sdk.utils.ag.aIR = r4     // Catch: java.lang.Exception -> Ld9
            goto Ldd
        Ld6:
            com.kwad.sdk.utils.ag.aIR = r6     // Catch: java.lang.Exception -> Ld9
            goto Ldd
        Ld9:
            r10 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r10)
        Ldd:
            int r10 = com.kwad.sdk.utils.ag.aIR
            if (r10 != 0) goto Le2
            goto Le3
        Le2:
            r6 = r7
        Le3:
            com.kwad.sdk.utils.ag.aIS = r6
            int r10 = com.kwad.sdk.utils.ag.aIR
            return r10
        Le8:
            int r10 = com.kwad.sdk.utils.ag.aIR
            return r10
    }

    private static boolean fA(java.lang.String r1) {
            java.lang.String r0 = "nrState=NOT_RESTRICTED"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "nrState=CONNECTED"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    public static boolean fB(java.lang.String r1) {
            r0 = 3000(0xbb8, float:4.204E-42)
            boolean r1 = p(r1, r0)
            return r1
    }

    public static int getActiveNetworkType(android.content.Context r1) {
            r0 = -1
            android.net.NetworkInfo r1 = ci(r1)     // Catch: java.lang.Exception -> Ld
            if (r1 != 0) goto L8
            return r0
        L8:
            int r1 = r1.getType()
            return r1
        Ld:
            return r0
    }

    private static int getSubId() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            int r0 = android.telephony.SubscriptionManager.getDefaultDataSubscriptionId()
            goto Lc
        Lb:
            r0 = -1
        Lc:
            return r0
    }

    public static boolean isMobileConnected(android.content.Context r2) {
            r0 = 0
            android.net.NetworkInfo r2 = ci(r2)     // Catch: java.lang.Exception -> L15
            if (r2 == 0) goto L15
            boolean r1 = r2.isConnected()     // Catch: java.lang.Exception -> L15
            if (r1 == 0) goto L15
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L15
            if (r2 != 0) goto L15
            r2 = 1
            return r2
        L15:
            return r0
    }

    public static boolean isNetworkConnected(android.content.Context r1) {
            r0 = 0
            android.net.NetworkInfo r1 = ci(r1)     // Catch: java.lang.Exception -> L10
            if (r1 == 0) goto Lf
            boolean r1 = r1.isConnected()     // Catch: java.lang.Exception -> L10
            if (r1 == 0) goto Lf
            r1 = 1
            return r1
        Lf:
            return r0
        L10:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean isWifiConnected(android.content.Context r2) {
            r0 = 0
            android.net.NetworkInfo r2 = ci(r2)     // Catch: java.lang.Exception -> L16
            if (r2 == 0) goto L1a
            boolean r1 = r2.isConnected()     // Catch: java.lang.Exception -> L16
            if (r1 == 0) goto L1a
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L16
            r1 = 1
            if (r1 != r2) goto L15
            return r1
        L15:
            return r0
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            return r0
    }

    private static int l(android.content.Context r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L75
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r0 = com.kwad.sdk.utils.SystemUtil.b(r5, r0)
            if (r0 == 0) goto L75
            java.lang.String r0 = "phone"
            java.lang.Object r0 = r5.getSystemService(r0)     // Catch: java.lang.Exception -> L75
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0     // Catch: java.lang.Exception -> L75
            if (r0 != 0) goto L1d
            return r6
        L1d:
            int r1 = getSubId()     // Catch: java.lang.Exception -> L75
            r2 = -1
            r3 = 0
            r4 = 1
            if (r1 != r2) goto L2b
        L26:
            android.telephony.ServiceState r5 = r0.getServiceState()     // Catch: java.lang.Exception -> L75
            goto L4a
        L2b:
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()     // Catch: java.lang.Exception -> L75
            int r5 = r5.targetSdkVersion     // Catch: java.lang.Exception -> L75
            r2 = 29
            if (r5 < r2) goto L3a
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L75
            if (r5 < r2) goto L3a
            goto L26
        L3a:
            java.lang.String r5 = "getServiceStateForSubscriber"
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L26
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L26
            r2[r3] = r1     // Catch: java.lang.Throwable -> L26
            java.lang.Object r5 = com.kwad.sdk.utils.s.f(r0, r5, r2)     // Catch: java.lang.Throwable -> L26
            android.telephony.ServiceState r5 = (android.telephony.ServiceState) r5     // Catch: java.lang.Throwable -> L26
        L4a:
            if (r5 != 0) goto L4d
            return r6
        L4d:
            boolean r0 = com.kwad.sdk.utils.as.IS()     // Catch: java.lang.Exception -> L75
            if (r0 == 0) goto L69
            java.lang.String r0 = "com.huawei.android.telephony.ServiceStateEx"
            java.lang.String r1 = "getConfigRadioTechnology"
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L75
            r2[r3] = r5     // Catch: java.lang.Exception -> L75
            java.lang.Object r5 = com.kwad.sdk.utils.s.a(r0, r1, r2)     // Catch: java.lang.Exception -> L75
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Exception -> L75
            if (r5 == 0) goto L75
            int r5 = r5.intValue()     // Catch: java.lang.Exception -> L75
            r6 = r5
            goto L75
        L69:
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L75
            boolean r5 = fA(r5)     // Catch: java.lang.Exception -> L75
            if (r5 == 0) goto L75
            r6 = 20
        L75:
            return r6
    }

    private static boolean p(java.lang.String r0, int r1) {
            java.net.InetAddress r0 = java.net.InetAddress.getByName(r0)     // Catch: java.lang.Throwable -> Lb
            r1 = 3000(0xbb8, float:4.204E-42)
            boolean r0 = r0.isReachable(r1)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            return r0
    }
}
