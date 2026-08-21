package com.huawei.hms.framework.common;

public class NetworkUtil {
    private static final int INVALID_RSSI = -127;
    private static final java.lang.String TAG = null;
    private static final int TYPE_WIFI_P2P = 13;



    public static final class NetType {
        public static final int TYPE_2G = 2;
        public static final int TYPE_3G = 3;
        public static final int TYPE_4G = 4;
        public static final int TYPE_5G = 5;
        public static final int TYPE_NO_NETWORK = -1;
        public static final int TYPE_UNKNOWN = 0;
        public static final int TYPE_WIFI = 1;

        public NetType() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.huawei.hms.framework.common.NetworkUtil> r0 = com.huawei.hms.framework.common.NetworkUtil.class
            java.lang.String r0 = r0.getSimpleName()
            com.huawei.hms.framework.common.NetworkUtil.TAG = r0
            return
    }

    public NetworkUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getDnsServerIps(android.content.Context r0) {
            java.lang.String[] r0 = getDnsServerIpsFromConnectionManager(r0)
            java.lang.String r0 = java.util.Arrays.toString(r0)
            return r0
    }

    private static java.lang.String[] getDnsServerIpsFromConnectionManager(android.content.Context r10) {
            java.lang.String r0 = "getActiveNetworkInfo failed, exception:"
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 0
            r4 = 21
            if (r2 < r4) goto L9d
            if (r10 == 0) goto L9d
            java.lang.String r2 = "connectivity"
            java.lang.Object r10 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r10, r2)
            android.net.ConnectivityManager r10 = (android.net.ConnectivityManager) r10
            if (r10 == 0) goto L9d
            android.net.NetworkInfo r2 = r10.getActiveNetworkInfo()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            if (r2 == 0) goto L9d
            android.net.Network[] r4 = r10.getAllNetworks()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            int r5 = r4.length     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            r6 = r3
        L26:
            if (r6 >= r5) goto L9d
            r7 = r4[r6]     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            if (r7 != 0) goto L2d
            goto L5f
        L2d:
            android.net.NetworkInfo r8 = r10.getNetworkInfo(r7)     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            if (r8 == 0) goto L5f
            int r8 = r8.getType()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            int r9 = r2.getType()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            if (r8 != r9) goto L5f
            android.net.LinkProperties r7 = r10.getLinkProperties(r7)     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            if (r7 == 0) goto L5f
            java.util.List r7 = r7.getDnsServers()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
        L4b:
            boolean r8 = r7.hasNext()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            if (r8 == 0) goto L5f
            java.lang.Object r8 = r7.next()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            java.net.InetAddress r8 = (java.net.InetAddress) r8     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            java.lang.String r8 = r8.getHostAddress()     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            r1.add(r8)     // Catch: java.lang.RuntimeException -> L62 java.lang.SecurityException -> L80
            goto L4b
        L5f:
            int r6 = r6 + 1
            goto L26
        L62:
            r10 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.Class r10 = r10.getClass()
            java.lang.String r10 = r10.getSimpleName()
            r4.append(r10)
            java.lang.String r10 = r4.toString()
            com.huawei.hms.framework.common.Logger.i(r2, r10)
            goto L9d
        L80:
            r10 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.Class r10 = r10.getClass()
            java.lang.String r10 = r10.getSimpleName()
            r4.append(r10)
            java.lang.String r10 = r4.toString()
            com.huawei.hms.framework.common.Logger.i(r2, r10)
        L9d:
            boolean r10 = r1.isEmpty()
            if (r10 == 0) goto La6
            java.lang.String[] r10 = new java.lang.String[r3]
            goto Lb2
        La6:
            int r10 = r1.size()
            java.lang.String[] r10 = new java.lang.String[r10]
            java.lang.Object[] r10 = r1.toArray(r10)
            java.lang.String[] r10 = (java.lang.String[]) r10
        Lb2:
            return r10
    }

    public static java.lang.String getHost(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.net.URI r0 = new java.net.URI     // Catch: java.net.URISyntaxException -> L37
            r0.<init>(r2)     // Catch: java.net.URISyntaxException -> L37
            int r2 = r0.getPort()
            r1 = -1
            if (r2 != r1) goto L1a
            java.lang.String r2 = r0.getHost()
            return r2
        L1a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = r0.getHost()
            r2.append(r1)
            java.lang.String r1 = ":"
            r2.append(r1)
            int r0 = r0.getPort()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            return r2
        L37:
            r2 = move-exception
            java.lang.String r0 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.Class r2 = r2.getClass()
            java.lang.String r2 = r2.getSimpleName()
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
    }

    private static int getHwNetworkType(android.content.Context r3) {
            java.lang.String r0 = "com.huawei.android.os.BuildEx$VERSION"
            boolean r0 = com.huawei.hms.framework.common.ReflectionUtils.checkCompatible(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            if (r3 == 0) goto L3f
            java.lang.String r0 = "phone"
            java.lang.Object r3 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r3, r0)
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3
            if (r3 == 0) goto L3f
            int r0 = com.huawei.android.os.BuildEx.VERSION.EMUI_SDK_INT     // Catch: java.lang.NoClassDefFoundError -> L28 java.lang.NoSuchMethodError -> L30 java.lang.SecurityException -> L38
            r2 = 21
            if (r0 < r2) goto L3f
            android.telephony.ServiceState r3 = r3.getServiceState()     // Catch: java.lang.NoClassDefFoundError -> L28 java.lang.NoSuchMethodError -> L30 java.lang.SecurityException -> L38
            if (r3 == 0) goto L3f
            int r3 = com.huawei.android.telephony.ServiceStateEx.getConfigRadioTechnology(r3)     // Catch: java.lang.NoClassDefFoundError -> L28 java.lang.NoSuchMethodError -> L30 java.lang.SecurityException -> L38
            r1 = r3
            goto L3f
        L28:
            java.lang.String r3 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r0 = "NoClassDefFoundError occur in method getHwNetworkType."
            com.huawei.hms.framework.common.Logger.w(r3, r0)
            goto L3f
        L30:
            java.lang.String r3 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r0 = "NoSuchMethodError occur in method getHwNetworkType."
            com.huawei.hms.framework.common.Logger.w(r3, r0)
            goto L3f
        L38:
            java.lang.String r3 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r0 = "requires permission maybe missing."
            com.huawei.hms.framework.common.Logger.w(r3, r0)
        L3f:
            return r1
    }

    public static java.lang.String getMNC(android.content.Context r3) {
            java.lang.String r0 = "unknown"
            if (r3 != 0) goto L5
            return r0
        L5:
            boolean r1 = isSimReady(r3)
            if (r1 != 0) goto Lc
            return r0
        Lc:
            r1 = 0
            java.lang.String r2 = "phone"
            java.lang.Object r3 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r3, r2)
            boolean r2 = r3 instanceof android.telephony.TelephonyManager
            if (r2 == 0) goto L1a
            r1 = r3
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1
        L1a:
            if (r1 != 0) goto L24
            java.lang.String r3 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getSubscriptionOperatorType: other error!"
            com.huawei.hms.framework.common.Logger.e(r3, r1)
            return r0
        L24:
            java.lang.String r3 = r1.getNetworkOperator()
            java.lang.String r0 = "46001"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L84
            java.lang.String r0 = "46006"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L84
            java.lang.String r0 = "46009"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L41
            goto L84
        L41:
            java.lang.String r0 = "46000"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L81
            java.lang.String r0 = "46002"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L81
            java.lang.String r0 = "46004"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L81
            java.lang.String r0 = "46007"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L62
            goto L81
        L62:
            java.lang.String r0 = "46003"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L7e
            java.lang.String r0 = "46005"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L7e
            java.lang.String r0 = "46011"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L7b
            goto L7e
        L7b:
            java.lang.String r3 = "other"
            goto L86
        L7e:
            java.lang.String r3 = "China_Telecom"
            goto L86
        L81:
            java.lang.String r3 = "China_Mobile"
            goto L86
        L84:
            java.lang.String r3 = "China_Unicom"
        L86:
            return r3
    }

    public static int getMobileRsrp(android.content.Context r4) {
            android.telephony.SignalStrength r4 = getSignalStrength(r4)
            r0 = 0
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.Class<android.telephony.SignalStrength> r1 = android.telephony.SignalStrength.class
            java.lang.String r2 = "getDbm"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            com.huawei.hms.framework.common.NetworkUtil$1 r2 = new com.huawei.hms.framework.common.NetworkUtil$1     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            r2.<init>(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            java.security.AccessController.doPrivileged(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            java.lang.Object r4 = r1.invoke(r4, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            int r0 = r4.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L27 java.lang.IllegalAccessException -> L2f java.lang.NoSuchMethodException -> L37
            goto L3e
        L27:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getDbm: InvocationTargetException"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
            goto L3e
        L2f:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getDbm: cannot access"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
            goto L3e
        L37:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getDbm: function not found"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
        L3e:
            return r0
    }

    public static int getMobileRsrpLevel(android.content.Context r4) {
            android.telephony.SignalStrength r4 = getSignalStrength(r4)
            r0 = 0
            if (r4 == 0) goto L3d
            java.lang.Class<android.telephony.SignalStrength> r1 = android.telephony.SignalStrength.class
            java.lang.String r2 = "getLteLevel"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            com.huawei.hms.framework.common.NetworkUtil$2 r2 = new com.huawei.hms.framework.common.NetworkUtil$2     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            r2.<init>(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            java.security.AccessController.doPrivileged(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            java.lang.Object r4 = r1.invoke(r4, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            int r0 = r4.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalAccessException -> L2e java.lang.NoSuchMethodException -> L36
            goto L3d
        L26:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getLteLevel: InvocationTargetException"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
            goto L3d
        L2e:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getLteLevel: cannot access"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
            goto L3d
        L36:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getLteLevel: function not found"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
        L3d:
            return r0
    }

    public static android.net.NetworkInfo getNetworkInfo(android.content.Context r4) {
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r0 = com.huawei.hms.framework.common.ContextCompat.checkSelfPermission(r4, r0)
            r1 = 0
            if (r0 == 0) goto L3e
            java.lang.String r0 = "connectivity"
            java.lang.Object r4 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r4, r0)
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4
            if (r4 == 0) goto L3e
            android.net.NetworkInfo r1 = r4.getActiveNetworkInfo()     // Catch: java.lang.RuntimeException -> L18
            goto L3e
        L18:
            r4 = move-exception
            java.lang.String r0 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getActiveNetworkInfo failed, exception:"
            r2.append(r3)
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.framework.common.Logger.i(r0, r4)
        L3e:
            return r1
    }

    public static android.net.NetworkInfo.DetailedState getNetworkStatus(android.content.Context r4) {
            android.net.NetworkInfo$DetailedState r0 = android.net.NetworkInfo.DetailedState.IDLE
            if (r4 == 0) goto L52
            java.lang.String r1 = "connectivity"
            java.lang.Object r4 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r4, r1)
            boolean r1 = r4 instanceof android.net.ConnectivityManager
            if (r1 == 0) goto L4b
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4     // Catch: java.lang.RuntimeException -> L24
            android.net.NetworkInfo r4 = r4.getActiveNetworkInfo()     // Catch: java.lang.RuntimeException -> L24
            if (r4 == 0) goto L1c
            android.net.NetworkInfo$DetailedState r4 = r4.getDetailedState()     // Catch: java.lang.RuntimeException -> L24
            r0 = r4
            goto L52
        L1c:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG     // Catch: java.lang.RuntimeException -> L24
            java.lang.String r1 = "getNetworkStatus networkIsConnected netInfo is null!"
            com.huawei.hms.framework.common.Logger.i(r4, r1)     // Catch: java.lang.RuntimeException -> L24
            goto L52
        L24:
            r4 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getNetworkStatus exception"
            r2.append(r3)
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.framework.common.Logger.i(r1, r4)
            goto L52
        L4b:
            java.lang.String r4 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "getNetworkStatus ConnectivityManager is null!"
            com.huawei.hms.framework.common.Logger.i(r4, r1)
        L52:
            return r0
    }

    public static int getNetworkType(android.content.Context r1) {
            if (r1 == 0) goto Lb
            android.net.NetworkInfo r0 = getNetworkInfo(r1)
            int r1 = getNetworkType(r0, r1)
            goto Lc
        Lb:
            r1 = 0
        Lc:
            return r1
    }

    public static int getNetworkType(android.net.NetworkInfo r1) {
            r0 = 0
            int r1 = getNetworkType(r1, r0)
            return r1
    }

    public static int getNetworkType(android.net.NetworkInfo r5, android.content.Context r6) {
            r0 = 1
            r1 = 0
            if (r5 == 0) goto L60
            boolean r2 = r5.isConnected()
            if (r2 == 0) goto L60
            int r2 = r5.getType()
            if (r0 == r2) goto L61
            r3 = 13
            if (r3 != r2) goto L15
            goto L61
        L15:
            if (r2 != 0) goto L5e
            int r6 = getHwNetworkType(r6)
            java.lang.String r0 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getHwNetworkType return is: "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.framework.common.Logger.v(r0, r2)
            if (r6 != 0) goto L37
            int r6 = r5.getSubtype()
        L37:
            r5 = 20
            r0 = 3
            r2 = 2
            if (r6 == r5) goto L48
            switch(r6) {
                case 1: goto L46;
                case 2: goto L46;
                case 3: goto L44;
                case 4: goto L46;
                case 5: goto L44;
                case 6: goto L44;
                case 7: goto L46;
                case 8: goto L44;
                case 9: goto L44;
                case 10: goto L44;
                case 11: goto L46;
                case 12: goto L44;
                case 13: goto L42;
                case 14: goto L44;
                case 15: goto L44;
                default: goto L40;
            }
        L40:
            r5 = r1
            goto L49
        L42:
            r5 = 4
            goto L49
        L44:
            r5 = r0
            goto L49
        L46:
            r5 = r2
            goto L49
        L48:
            r5 = 5
        L49:
            if (r5 != 0) goto L5c
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 25
            if (r3 < r4) goto L5c
            r5 = 16
            if (r6 == r5) goto L5a
            r5 = 17
            if (r6 == r5) goto L61
            goto L5e
        L5a:
            r0 = r2
            goto L61
        L5c:
            r0 = r5
            goto L61
        L5e:
            r0 = r1
            goto L61
        L60:
            r0 = -1
        L61:
            return r0
    }

    private static android.telephony.SignalStrength getSignalStrength(android.content.Context r2) {
            if (r2 == 0) goto L21
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L21
            java.lang.String r0 = "phone"
            java.lang.Object r2 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r2, r0)
            boolean r0 = r2 instanceof android.telephony.TelephonyManager
            if (r0 == 0) goto L21
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2
            int r0 = android.telephony.SubscriptionManager.getDefaultDataSubscriptionId()
            android.telephony.TelephonyManager r2 = r2.createForSubscriptionId(r0)
            android.telephony.SignalStrength r2 = r2.getSignalStrength()
            return r2
        L21:
            r2 = 0
            return r2
    }

    public static java.lang.String getWifiGatewayIp(android.content.Context r4) {
            java.lang.String r0 = " "
            if (r4 == 0) goto L6c
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r1 = "wifi"
            java.lang.Object r4 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r4, r1)
            boolean r1 = r4 instanceof android.net.wifi.WifiManager
            if (r1 == 0) goto L6c
            android.net.wifi.WifiManager r4 = (android.net.wifi.WifiManager) r4
            android.net.DhcpInfo r4 = r4.getDhcpInfo()     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            int r4 = r4.gateway     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r1 = 4
            byte[] r1 = new byte[r1]     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r2 = 0
            r3 = r4 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r1[r2] = r3     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r2 = 1
            int r3 = r4 >> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r1[r2] = r3     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r2 = 2
            int r3 = r4 >> 16
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r1[r2] = r3     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r2 = 3
            int r4 = r4 >> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            r1[r2] = r4     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            java.net.InetAddress r4 = java.net.InetAddress.getByAddress(r1)     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            java.lang.String r0 = r4.getHostAddress()     // Catch: java.net.UnknownHostException -> L44 java.lang.RuntimeException -> L46
            goto L6c
        L44:
            r4 = move-exception
            goto L47
        L46:
            r4 = move-exception
        L47:
            java.lang.String r1 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getWifiGatewayIp error!"
            r2.append(r3)
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.framework.common.Logger.i(r1, r4)
        L6c:
            return r0
    }

    public static int getWifiRssi(android.content.Context r4) {
            r0 = -127(0xffffffffffffff81, float:NaN)
            if (r4 == 0) goto L4c
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r1 = "wifi"
            java.lang.Object r4 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r4, r1)
            boolean r1 = r4 instanceof android.net.wifi.WifiManager
            if (r1 == 0) goto L4c
            android.net.wifi.WifiManager r4 = (android.net.wifi.WifiManager) r4
            android.net.wifi.WifiInfo r4 = r4.getConnectionInfo()     // Catch: java.lang.RuntimeException -> L26
            if (r4 == 0) goto L4c
            java.lang.String r1 = r4.getBSSID()     // Catch: java.lang.RuntimeException -> L26
            if (r1 == 0) goto L4c
            int r4 = r4.getRssi()     // Catch: java.lang.RuntimeException -> L26
            r0 = r4
            goto L4c
        L26:
            r4 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getWifiRssiLevel did not has permission!"
            r2.append(r3)
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.framework.common.Logger.i(r1, r4)
        L4c:
            return r0
    }

    public static int getWifiRssiLevel(android.content.Context r1) {
            int r1 = getWifiRssi(r1)
            r0 = 5
            int r1 = android.net.wifi.WifiManager.calculateSignalLevel(r1, r0)
            return r1
    }

    @java.lang.Deprecated
    public static boolean isForeground(android.content.Context r0) {
            boolean r0 = com.huawei.hms.framework.common.ActivityUtil.isForeground(r0)
            return r0
    }

    public static boolean isNetworkAvailable(android.content.Context r2) {
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r0 = com.huawei.hms.framework.common.ContextCompat.checkSelfPermission(r2, r0)
            r1 = 1
            if (r0 == 0) goto L17
            android.net.NetworkInfo r2 = getNetworkInfo(r2)
            if (r2 == 0) goto L16
            boolean r2 = r2.isConnected()
            if (r2 == 0) goto L16
            goto L17
        L16:
            r1 = 0
        L17:
            return r1
    }

    public static boolean isSimReady(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r1, r0)
            boolean r0 = r1 instanceof android.telephony.TelephonyManager
            if (r0 == 0) goto Ld
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1
            goto Le
        Ld:
            r1 = 0
        Le:
            if (r1 == 0) goto L19
            int r1 = r1.getSimState()
            r0 = 5
            if (r1 != r0) goto L19
            r1 = 1
            goto L1a
        L19:
            r1 = 0
        L1a:
            return r1
    }

    public static boolean isUserUnlocked(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L1d
            java.lang.String r0 = "user"
            java.lang.Object r2 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r2, r0)
            android.os.UserManager r2 = (android.os.UserManager) r2
            if (r2 == 0) goto L1d
            boolean r2 = r2.isUserUnlocked()     // Catch: java.lang.RuntimeException -> L15
            return r2
        L15:
            r2 = move-exception
            java.lang.String r0 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r1 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r1, r2)
        L1d:
            r2 = 1
            return r2
    }

    @java.lang.Deprecated
    public static android.net.NetworkInfo.DetailedState networkStatus(android.content.Context r0) {
            android.net.NetworkInfo$DetailedState r0 = getNetworkStatus(r0)
            return r0
    }

    public static int readDataSaverMode(android.content.Context r3) {
            r0 = 0
            if (r3 == 0) goto L39
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r1 < r2) goto L39
            java.lang.String r1 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r1 = com.huawei.hms.framework.common.ContextCompat.checkSelfPermission(r3, r1)
            if (r1 == 0) goto L39
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r3, r1)
            boolean r1 = r3 instanceof android.net.ConnectivityManager
            if (r1 == 0) goto L39
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3
            boolean r1 = r3.isActiveNetworkMetered()     // Catch: java.lang.RuntimeException -> L31
            if (r1 == 0) goto L29
            int r3 = r3.getRestrictBackgroundStatus()     // Catch: java.lang.RuntimeException -> L31
            r0 = r3
            goto L39
        L29:
            java.lang.String r3 = com.huawei.hms.framework.common.NetworkUtil.TAG     // Catch: java.lang.RuntimeException -> L31
            java.lang.String r1 = "ConnectType is not Mobile Network!"
            com.huawei.hms.framework.common.Logger.v(r3, r1)     // Catch: java.lang.RuntimeException -> L31
            goto L39
        L31:
            r3 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.common.NetworkUtil.TAG
            java.lang.String r2 = "SystemServer error:"
            com.huawei.hms.framework.common.Logger.e(r1, r2, r3)
        L39:
            return r0
    }
}
