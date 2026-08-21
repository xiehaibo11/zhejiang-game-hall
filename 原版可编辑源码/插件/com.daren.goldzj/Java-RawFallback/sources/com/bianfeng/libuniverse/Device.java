package com.bianfeng.libuniverse;

public class Device {
    public static final java.lang.String NETWORN_2G = "2G";
    public static final java.lang.String NETWORN_3G = "3G";
    public static final java.lang.String NETWORN_4G = "4G";
    public static final java.lang.String NETWORN_MOBILE = "mobile";
    public static final java.lang.String NETWORN_NONE = "none";
    public static final java.lang.String NETWORN_WIFI = "wifi";
    static int mBatterylevel = 100;
    static int mBatteryplugged = 0;
    static int mBatteryscale = 100;
    static int mBatterystatus = 1;
    private static java.lang.String sUuid = "";
    private static java.lang.String sUuidFIle = "/INSTALLATION";
    private android.content.BroadcastReceiver mBroadcastReceiver;


    static {
            return
    }

    public Device() {
            r1 = this;
            r1.<init>()
            com.bianfeng.libuniverse.Device$1 r0 = new com.bianfeng.libuniverse.Device$1
            r0.<init>(r1)
            r1.mBroadcastReceiver = r0
            return
    }

    public static void createNotification(java.lang.String r0, int r1, int r2) {
            return
    }

    private static java.lang.String getAppVersion() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            android.content.pm.PackageManager r1 = r0.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            java.lang.String r0 = r0.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            r2 = 0
            android.content.pm.PackageInfo r0 = r1.getPackageInfo(r0, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            int r0 = r0.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            java.lang.String r0 = java.lang.Integer.toString(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            return r0
        L18:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    public static int[] getBatteryState() {
            r0 = 4
            int[] r0 = new int[r0]
            int r1 = com.bianfeng.libuniverse.Device.mBatterylevel
            r2 = 0
            r0[r2] = r1
            int r1 = com.bianfeng.libuniverse.Device.mBatteryscale
            r2 = 1
            r0[r2] = r1
            int r1 = com.bianfeng.libuniverse.Device.mBatterystatus
            r2 = 2
            r0[r2] = r1
            int r1 = com.bianfeng.libuniverse.Device.mBatteryplugged
            r2 = 3
            r0[r2] = r1
            return r0
    }

    public static java.lang.String getCarrierName() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            java.lang.String r1 = "phone"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            java.lang.String r1 = ""
            if (r0 == 0) goto L7e
            int r2 = r0.getPhoneType()
            if (r2 != 0) goto L17
            return r1
        L17:
            int r2 = r0.getSimState()
            r3 = 1
            if (r3 != r2) goto L1f
            return r1
        L1f:
            java.lang.String r2 = r0.getSubscriberId()
            if (r2 == 0) goto L29
            java.lang.String r2 = r0.getSimOperator()
        L29:
            if (r2 == 0) goto L7e
            java.lang.String r0 = "46000"
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "46002"
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "46007"
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "46020"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L4c
            goto L7b
        L4c:
            java.lang.String r0 = "46001"
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto L78
            java.lang.String r0 = "46006"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L5d
            goto L78
        L5d:
            java.lang.String r0 = "46003"
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto L75
            java.lang.String r0 = "46005"
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto L75
            java.lang.String r0 = "46011"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L7e
        L75:
            java.lang.String r0 = "中国电信"
            return r0
        L78:
            java.lang.String r0 = "中国联通"
            return r0
        L7b:
            java.lang.String r0 = "中国移动"
            return r0
        L7e:
            return r1
    }

    private static java.lang.String getDeviceId() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            java.lang.String r1 = "phone"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            if (r0 == 0) goto L15
            java.lang.String r0 = r0.getDeviceId()     // Catch: java.lang.SecurityException -> L15
            if (r0 == 0) goto L15
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String getDeviceName() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.BRAND
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String getHardwareCode() {
            java.lang.String r0 = getUUID()
            return r0
    }

    public static java.lang.String getIosIDFA() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            java.lang.String r1 = "phone"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            java.lang.String r0 = r0.getDeviceId()
            if (r0 == 0) goto L18
            int r1 = r0.length()
            if (r1 > 0) goto L1c
        L18:
            java.lang.String r0 = getMacAddress()
        L1c:
            if (r0 == 0) goto L2c
            int r1 = r0.length()
            if (r1 <= 0) goto L2c
            java.lang.String r1 = "1"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3a
        L2c:
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r1 = "android_id"
            java.lang.String r0 = android.provider.Settings.Secure.getString(r0, r1)
        L3a:
            return r0
    }

    public static java.lang.String getIp() {
            java.util.Enumeration r0 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Exception -> L2f
        L4:
            boolean r1 = r0.hasMoreElements()     // Catch: java.lang.Exception -> L2f
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.Exception -> L2f
            java.net.NetworkInterface r1 = (java.net.NetworkInterface) r1     // Catch: java.lang.Exception -> L2f
            java.util.Enumeration r1 = r1.getInetAddresses()     // Catch: java.lang.Exception -> L2f
        L14:
            boolean r2 = r1.hasMoreElements()     // Catch: java.lang.Exception -> L2f
            if (r2 == 0) goto L4
            java.lang.Object r2 = r1.nextElement()     // Catch: java.lang.Exception -> L2f
            java.net.InetAddress r2 = (java.net.InetAddress) r2     // Catch: java.lang.Exception -> L2f
            boolean r3 = r2.isLoopbackAddress()     // Catch: java.lang.Exception -> L2f
            if (r3 != 0) goto L14
            boolean r3 = r2 instanceof java.net.Inet4Address     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L14
            java.lang.String r0 = r2.getHostAddress()     // Catch: java.lang.Exception -> L2f
            return r0
        L2f:
            r0 = move-exception
            r0.printStackTrace()
        L33:
            java.lang.String r0 = "nan"
            return r0
    }

    private static java.lang.String getMD5(java.lang.String r2) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L1e
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L1e
            r0.update(r2)     // Catch: java.lang.Exception -> L1e
            java.math.BigInteger r2 = new java.math.BigInteger     // Catch: java.lang.Exception -> L1e
            r1 = 1
            byte[] r0 = r0.digest()     // Catch: java.lang.Exception -> L1e
            r2.<init>(r1, r0)     // Catch: java.lang.Exception -> L1e
            r0 = 16
            java.lang.String r2 = r2.toString(r0)     // Catch: java.lang.Exception -> L1e
            return r2
        L1e:
            java.lang.String r2 = ""
            return r2
    }

    private static java.lang.String getMac() {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
            java.lang.String r2 = "eth1"
            java.net.NetworkInterface r2 = java.net.NetworkInterface.getByName(r2)     // Catch: java.net.SocketException -> L48
            if (r2 != 0) goto L14
            java.lang.String r2 = "wlan0"
            java.net.NetworkInterface r2 = java.net.NetworkInterface.getByName(r2)     // Catch: java.net.SocketException -> L48
        L14:
            if (r2 == 0) goto L48
            byte[] r2 = r2.getHardwareAddress()     // Catch: java.net.SocketException -> L48
            int r3 = r2.length     // Catch: java.net.SocketException -> L48
            r4 = 0
            r5 = 0
        L1d:
            r6 = 1
            if (r5 >= r3) goto L36
            r7 = r2[r5]     // Catch: java.net.SocketException -> L48
            java.lang.String r8 = "%02X"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.net.SocketException -> L48
            java.lang.Byte r7 = java.lang.Byte.valueOf(r7)     // Catch: java.net.SocketException -> L48
            r6[r4] = r7     // Catch: java.net.SocketException -> L48
            java.lang.String r6 = java.lang.String.format(r8, r6)     // Catch: java.net.SocketException -> L48
            r0.append(r6)     // Catch: java.net.SocketException -> L48
            int r5 = r5 + 1
            goto L1d
        L36:
            int r2 = r0.length()     // Catch: java.net.SocketException -> L48
            if (r2 <= 0) goto L44
            int r2 = r0.length()     // Catch: java.net.SocketException -> L48
            int r2 = r2 - r6
            r0.deleteCharAt(r2)     // Catch: java.net.SocketException -> L48
        L44:
            java.lang.String r1 = r0.toString()     // Catch: java.net.SocketException -> L48
        L48:
            return r1
    }

    public static java.lang.String getMacAddress() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = "wifi"
            java.lang.Object r0 = r0.getSystemService(r1)     // Catch: java.lang.Exception -> L1d
            android.net.wifi.WifiManager r0 = (android.net.wifi.WifiManager) r0     // Catch: java.lang.Exception -> L1d
            android.net.wifi.WifiInfo r0 = r0.getConnectionInfo()     // Catch: java.lang.Exception -> L1d
            java.lang.String r0 = r0.getMacAddress()     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = ":"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replace(r1, r2)     // Catch: java.lang.Exception -> L1d
            return r0
        L1d:
            java.lang.String r0 = "1"
            return r0
    }

    public static java.lang.String getNetEnvName() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            java.lang.String r1 = "none"
            if (r0 != 0) goto L11
            return r1
        L11:
            android.net.NetworkInfo r2 = r0.getActiveNetworkInfo()
            if (r2 == 0) goto L7c
            boolean r3 = r2.isAvailable()
            if (r3 != 0) goto L1e
            goto L7c
        L1e:
            r3 = 1
            android.net.NetworkInfo r3 = r0.getNetworkInfo(r3)
            if (r3 == 0) goto L36
            android.net.NetworkInfo$State r3 = r3.getState()
            if (r3 == 0) goto L36
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTED
            if (r3 == r4) goto L33
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTING
            if (r3 != r4) goto L36
        L33:
            java.lang.String r0 = "wifi"
            return r0
        L36:
            r3 = 0
            android.net.NetworkInfo r0 = r0.getNetworkInfo(r3)
            if (r0 == 0) goto L7c
            android.net.NetworkInfo$State r3 = r0.getState()
            java.lang.String r0 = r0.getSubtypeName()
            if (r3 == 0) goto L7c
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTED
            if (r3 == r4) goto L4f
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTING
            if (r3 != r4) goto L7c
        L4f:
            int r1 = r2.getSubtype()
            java.lang.String r2 = "3G"
            switch(r1) {
                case 1: goto L75;
                case 2: goto L75;
                case 3: goto L74;
                case 4: goto L75;
                case 5: goto L74;
                case 6: goto L74;
                case 7: goto L75;
                case 8: goto L74;
                case 9: goto L74;
                case 10: goto L74;
                case 11: goto L75;
                case 12: goto L74;
                case 13: goto L71;
                case 14: goto L74;
                case 15: goto L74;
                default: goto L58;
            }
        L58:
            java.lang.String r1 = "TD-SCDMA"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "WCDMA"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "CDMA2000"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L78
            goto L7b
        L71:
            java.lang.String r0 = "4G"
            return r0
        L74:
            return r2
        L75:
            java.lang.String r0 = "2G"
            return r0
        L78:
            java.lang.String r0 = "mobile"
            return r0
        L7b:
            return r2
        L7c:
            return r1
    }

    public static java.lang.String getOsName() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Android "
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static int getOsVersion() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    private static java.lang.String getPackageName() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.getPackageName()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    private static java.lang.String getSerial() {
            java.lang.String r0 = android.os.Build.SERIAL
            java.lang.String r1 = "unknown"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String getSystemVersion() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            return r0
    }

    public static java.lang.String getUUID() {
            java.lang.String r0 = ""
            java.lang.String r1 = com.bianfeng.libuniverse.Device.sUuid
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L6c
            java.lang.String r1 = readUuidFile()     // Catch: java.io.IOException -> L66
            com.bianfeng.libuniverse.Device.sUuid = r1     // Catch: java.io.IOException -> L66
            java.lang.String r1 = com.bianfeng.libuniverse.Device.sUuid     // Catch: java.io.IOException -> L66
            boolean r1 = r1.isEmpty()     // Catch: java.io.IOException -> L66
            if (r1 == 0) goto L53
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L66
            r1.<init>()     // Catch: java.io.IOException -> L66
            java.lang.String r2 = getSerial()     // Catch: java.io.IOException -> L66
            r1.append(r2)     // Catch: java.io.IOException -> L66
            java.lang.String r2 = getDeviceId()     // Catch: java.io.IOException -> L66
            r1.append(r2)     // Catch: java.io.IOException -> L66
            java.lang.String r2 = getMac()     // Catch: java.io.IOException -> L66
            r1.append(r2)     // Catch: java.io.IOException -> L66
            int r2 = r1.length()     // Catch: java.io.IOException -> L66
            if (r2 > 0) goto L49
            java.util.UUID r2 = java.util.UUID.randomUUID()     // Catch: java.io.IOException -> L66
            java.lang.String r2 = r2.toString()     // Catch: java.io.IOException -> L66
            java.lang.String r3 = "-"
            java.lang.String r2 = r2.replace(r3, r0)     // Catch: java.io.IOException -> L66
            r1.append(r2)     // Catch: java.io.IOException -> L66
        L49:
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L66
            java.lang.String r1 = getMD5(r1)     // Catch: java.io.IOException -> L66
            com.bianfeng.libuniverse.Device.sUuid = r1     // Catch: java.io.IOException -> L66
        L53:
            java.lang.String r1 = com.bianfeng.libuniverse.Device.sUuid     // Catch: java.io.IOException -> L66
            boolean r1 = r1.isEmpty()     // Catch: java.io.IOException -> L66
            if (r1 != 0) goto L6c
            writeUuidFile()     // Catch: java.io.IOException -> L5f
            goto L6c
        L5f:
            r1 = move-exception
            com.bianfeng.libuniverse.Device.sUuid = r0     // Catch: java.io.IOException -> L66
            r1.printStackTrace()     // Catch: java.io.IOException -> L66
            goto L6c
        L66:
            r1 = move-exception
            com.bianfeng.libuniverse.Device.sUuid = r0
            r1.printStackTrace()
        L6c:
            java.lang.String r0 = com.bianfeng.libuniverse.Device.sUuid
            return r0
    }

    public static boolean isHaveApp(java.lang.String r4) {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            r1 = 0
            java.util.List r0 = r0.getInstalledPackages(r1)
            r2 = 0
        Le:
            int r3 = r0.size()
            if (r2 >= r3) goto L27
            java.lang.Object r3 = r0.get(r2)
            android.content.pm.PackageInfo r3 = (android.content.pm.PackageInfo) r3
            java.lang.String r3 = r3.packageName
            boolean r3 = r3.equalsIgnoreCase(r4)
            if (r3 == 0) goto L24
            r4 = 1
            return r4
        L24:
            int r2 = r2 + 1
            goto Le
        L27:
            return r1
    }

    public static int ping(java.lang.String r5, int r6) {
            java.lang.String r0 = "universe"
            java.lang.String r1 = "Start ping ..."
            android.util.Log.i(r0, r1)
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            r2 = -1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            r3.<init>()     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.lang.String r4 = "/system/bin/ping -c "
            r3.append(r4)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.lang.String r6 = java.lang.Integer.toString(r6)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            r3.append(r6)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.lang.String r6 = " "
            r3.append(r6)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            r3.append(r5)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.lang.String r5 = r3.toString()     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.lang.Process r5 = r1.exec(r5)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            int r6 = r5.waitFor()     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            if (r6 == 0) goto L34
            return r2
        L34:
            java.io.BufferedReader r6 = new java.io.BufferedReader     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            java.io.InputStream r5 = r5.getInputStream()     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            r1.<init>(r5)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            r6.<init>(r1)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
        L42:
            java.lang.String r5 = r6.readLine()     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            if (r5 == 0) goto L56
            int r1 = r5.length()     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            if (r1 <= 0) goto L42
            java.lang.String r1 = "/avg"
            boolean r1 = r5.contains(r1)     // Catch: java.io.IOException -> La4 java.lang.InterruptedException -> La9
            if (r1 == 0) goto L42
        L56:
            java.lang.String r6 = "="
            int r6 = r5.indexOf(r6)
            int r6 = r6 + 1
            int r1 = r5.length()
            java.lang.String r5 = r5.substring(r6, r1)
            java.lang.String r5 = r5.trim()
            java.lang.String r6 = "/"
            int r1 = r5.indexOf(r6)
            int r1 = r1 + 1
            int r3 = r5.length()
            java.lang.String r5 = r5.substring(r1, r3)
            java.lang.String r5 = r5.trim()
            r1 = 0
            int r6 = r5.indexOf(r6)
            java.lang.String r5 = r5.substring(r1, r6)
            java.lang.Double r5 = java.lang.Double.valueOf(r5)
            int r5 = r5.intValue()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "avgRtt = "
            r6.append(r1)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            android.util.Log.i(r0, r5)
            return r2
        La4:
            r5 = move-exception
            r5.printStackTrace()
            return r2
        La9:
            r5 = move-exception
            r5.printStackTrace()
            return r2
    }

    private static java.lang.String readUuidFile() throws java.io.IOException {
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = com.bianfeng.libuniverse.Universe.getContext()
            java.io.File r2 = r2.getFilesDir()
            r1.append(r2)
            java.lang.String r2 = com.bianfeng.libuniverse.Device.sUuidFIle
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "r"
            r0.<init>(r1, r2)
            long r1 = r0.length()
            int r2 = (int) r1
            byte[] r1 = new byte[r2]
            r0.readFully(r1)
            r0.close()
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    public static void startApp(java.lang.String r1) {
            boolean r0 = isHaveApp(r1)
            if (r0 == 0) goto L19
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.Intent r1 = r0.getLaunchIntentForPackage(r1)
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.getContext()
            r0.startActivity(r1)
        L19:
            return
    }

    private static void writeUuidFile() throws java.io.IOException {
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = com.bianfeng.libuniverse.Universe.getContext()
            java.io.File r2 = r2.getFilesDir()
            r1.append(r2)
            java.lang.String r2 = com.bianfeng.libuniverse.Device.sUuidFIle
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.String r1 = com.bianfeng.libuniverse.Device.sUuid
            byte[] r1 = r1.getBytes()
            r0.write(r1)
            r0.close()
            return
    }
}
