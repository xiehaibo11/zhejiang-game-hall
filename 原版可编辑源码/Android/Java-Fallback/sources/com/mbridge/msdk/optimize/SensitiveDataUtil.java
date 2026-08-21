package com.mbridge.msdk.optimize;

public class SensitiveDataUtil {
    private static java.lang.String androidID;
    private static java.lang.String deviceid;
    private static java.lang.String imsi;
    private static boolean isAcquireAndroidId;
    private static boolean isAcquireIMEI;
    private static boolean isAcquireMac;
    private static boolean isAcquireOAID;
    private static boolean isAcquiredIMSI;
    private static java.lang.String mSelfId;
    private static java.lang.String macAddress;
    private static java.lang.String oaid;


    static final class a {
        private static java.lang.Object e;
        private static java.lang.Class<?> f;
        private static java.lang.reflect.Method g;
        private static java.lang.reflect.Method h;
        private static java.lang.reflect.Method i;
        private static java.lang.reflect.Method j;
        final java.lang.String a;
        final java.lang.String b;
        final java.lang.String c;
        final java.lang.String d;

        static {
                java.lang.String r0 = "com.android.id.impl.IdProviderImpl"
                java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L50
                com.mbridge.msdk.optimize.SensitiveDataUtil.a.f = r0     // Catch: java.lang.Throwable -> L50
                java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Throwable -> L50
                com.mbridge.msdk.optimize.SensitiveDataUtil.a.e = r0     // Catch: java.lang.Throwable -> L50
                java.lang.Class<?> r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.f     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "getUDID"
                r2 = 1
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
                java.lang.Class<android.content.Context> r4 = android.content.Context.class
                r5 = 0
                r3[r5] = r4     // Catch: java.lang.Throwable -> L50
                java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L50
                com.mbridge.msdk.optimize.SensitiveDataUtil.a.g = r0     // Catch: java.lang.Throwable -> L50
                java.lang.Class<?> r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.f     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "getOAID"
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
                java.lang.Class<android.content.Context> r4 = android.content.Context.class
                r3[r5] = r4     // Catch: java.lang.Throwable -> L50
                java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L50
                com.mbridge.msdk.optimize.SensitiveDataUtil.a.h = r0     // Catch: java.lang.Throwable -> L50
                java.lang.Class<?> r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.f     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "getVAID"
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
                java.lang.Class<android.content.Context> r4 = android.content.Context.class
                r3[r5] = r4     // Catch: java.lang.Throwable -> L50
                java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L50
                com.mbridge.msdk.optimize.SensitiveDataUtil.a.i = r0     // Catch: java.lang.Throwable -> L50
                java.lang.Class<?> r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.f     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "getAAID"
                java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
                java.lang.Class<android.content.Context> r3 = android.content.Context.class
                r2[r5] = r3     // Catch: java.lang.Throwable -> L50
                java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.Throwable -> L50
                com.mbridge.msdk.optimize.SensitiveDataUtil.a.j = r0     // Catch: java.lang.Throwable -> L50
            L50:
                return
        }

        a(android.content.Context r2) {
                r1 = this;
                r1.<init>()
                java.lang.reflect.Method r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.g
                java.lang.String r0 = a(r2, r0)
                r1.a = r0
                java.lang.reflect.Method r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.h
                java.lang.String r0 = a(r2, r0)
                r1.b = r0
                java.lang.reflect.Method r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.i
                java.lang.String r0 = a(r2, r0)
                r1.c = r0
                java.lang.reflect.Method r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.j
                java.lang.String r2 = a(r2, r0)
                r1.d = r2
                return
        }

        private static java.lang.String a(android.content.Context r3, java.lang.reflect.Method r4) {
                java.lang.Object r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.a.e
                if (r0 == 0) goto L15
                if (r4 == 0) goto L15
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L15
                r2 = 0
                r1[r2] = r3     // Catch: java.lang.Throwable -> L15
                java.lang.Object r3 = r4.invoke(r0, r1)     // Catch: java.lang.Throwable -> L15
                if (r3 == 0) goto L15
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L15
                return r3
            L15:
                r3 = 0
                return r3
        }
    }

    static {
            return
    }

    public SensitiveDataUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$002(java.lang.String r0) {
            com.mbridge.msdk.optimize.SensitiveDataUtil.oaid = r0
            return r0
    }

    public static java.lang.String getAndroidID(android.content.Context r2) {
            java.lang.String r0 = ""
            boolean r1 = com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireAndroidId
            if (r1 == 0) goto L9
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.androidID
            return r2
        L9:
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = "android_id"
            java.lang.String r2 = android.provider.Settings.Secure.getString(r2, r1)     // Catch: java.lang.Exception -> L1a
            com.mbridge.msdk.optimize.SensitiveDataUtil.androidID = r2     // Catch: java.lang.Exception -> L1a
            if (r2 != 0) goto L1c
            com.mbridge.msdk.optimize.SensitiveDataUtil.androidID = r0     // Catch: java.lang.Exception -> L1a
            goto L1c
        L1a:
            com.mbridge.msdk.optimize.SensitiveDataUtil.androidID = r0
        L1c:
            r2 = 1
            com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireAndroidId = r2
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.androidID
            return r2
    }

    private static void getFormNewThread(android.content.Context r2, java.lang.String r3) {
            java.lang.Thread r0 = new java.lang.Thread
            com.mbridge.msdk.optimize.SensitiveDataUtil$1 r1 = new com.mbridge.msdk.optimize.SensitiveDataUtil$1
            r1.<init>(r3, r2)
            r0.<init>(r1)
            r0.start()
            return
    }

    public static java.lang.String getIMEI(android.content.Context r2) {
            java.lang.String r0 = ""
            boolean r1 = com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireIMEI
            if (r1 == 0) goto L9
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.deviceid
            return r2
        L9:
            java.lang.String r1 = "phone"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Throwable -> L1c
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = r2.getDeviceId()     // Catch: java.lang.Throwable -> L1c
            com.mbridge.msdk.optimize.SensitiveDataUtil.deviceid = r2     // Catch: java.lang.Throwable -> L1c
            if (r2 != 0) goto L1e
            com.mbridge.msdk.optimize.SensitiveDataUtil.deviceid = r0     // Catch: java.lang.Throwable -> L1c
            goto L1e
        L1c:
            com.mbridge.msdk.optimize.SensitiveDataUtil.deviceid = r0
        L1e:
            r2 = 1
            com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireIMEI = r2
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.deviceid
            return r2
    }

    public static java.lang.String getImsi(android.content.Context r2) {
            java.lang.String r0 = ""
            boolean r1 = com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquiredIMSI
            if (r1 == 0) goto L9
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.imsi
            return r2
        L9:
            java.lang.String r1 = "phone"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L1c
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = r2.getSubscriberId()     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.optimize.SensitiveDataUtil.imsi = r2     // Catch: java.lang.Exception -> L1c
            if (r2 != 0) goto L1e
            com.mbridge.msdk.optimize.SensitiveDataUtil.imsi = r0     // Catch: java.lang.Exception -> L1c
            goto L1e
        L1c:
            com.mbridge.msdk.optimize.SensitiveDataUtil.imsi = r0
        L1e:
            r2 = 1
            com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquiredIMSI = r2
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.imsi
            return r2
    }

    private static java.lang.String getMac() {
            java.lang.String r0 = ""
            java.util.Enumeration r1 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Exception -> L62
            java.util.ArrayList r1 = java.util.Collections.list(r1)     // Catch: java.lang.Exception -> L62
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L62
        Le:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L62
            if (r2 == 0) goto L66
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L62
            java.net.NetworkInterface r2 = (java.net.NetworkInterface) r2     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Exception -> L62
            java.lang.String r4 = "wlan0"
            boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> L62
            if (r3 != 0) goto L27
            goto Le
        L27:
            byte[] r1 = r2.getHardwareAddress()     // Catch: java.lang.Exception -> L62
            if (r1 != 0) goto L2e
            return r0
        L2e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L62
            r2.<init>()     // Catch: java.lang.Exception -> L62
            int r3 = r1.length     // Catch: java.lang.Exception -> L62
            r4 = 0
            r5 = r4
        L36:
            r6 = 1
            if (r5 >= r3) goto L4f
            r7 = r1[r5]     // Catch: java.lang.Exception -> L62
            java.lang.String r8 = "%02X:"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L62
            java.lang.Byte r7 = java.lang.Byte.valueOf(r7)     // Catch: java.lang.Exception -> L62
            r6[r4] = r7     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = java.lang.String.format(r8, r6)     // Catch: java.lang.Exception -> L62
            r2.append(r6)     // Catch: java.lang.Exception -> L62
            int r5 = r5 + 1
            goto L36
        L4f:
            int r1 = r2.length()     // Catch: java.lang.Exception -> L62
            if (r1 <= 0) goto L5d
            int r1 = r2.length()     // Catch: java.lang.Exception -> L62
            int r1 = r1 - r6
            r2.deleteCharAt(r1)     // Catch: java.lang.Exception -> L62
        L5d:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L62
            return r0
        L62:
            r1 = move-exception
            r1.printStackTrace()
        L66:
            return r0
    }

    public static java.lang.String getMacAddress(android.content.Context r3) {
            java.lang.String r0 = ""
            boolean r1 = com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireMac
            if (r1 == 0) goto L9
            java.lang.String r3 = com.mbridge.msdk.optimize.SensitiveDataUtil.macAddress
            return r3
        L9:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L37
            r2 = 23
            if (r1 < r2) goto L14
            java.lang.String r3 = getMac()     // Catch: java.lang.Exception -> L37
            goto L24
        L14:
            java.lang.String r1 = "wifi"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L37
            android.net.wifi.WifiManager r3 = (android.net.wifi.WifiManager) r3     // Catch: java.lang.Exception -> L37
            android.net.wifi.WifiInfo r3 = r3.getConnectionInfo()     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = r3.getMacAddress()     // Catch: java.lang.Exception -> L37
        L24:
            if (r3 != 0) goto L27
            return r0
        L27:
            java.lang.String r1 = ":"
            java.lang.String r3 = r3.replaceAll(r1, r0)     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Exception -> L37
            com.mbridge.msdk.optimize.SensitiveDataUtil.macAddress = r3     // Catch: java.lang.Exception -> L37
            r0 = 1
            com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireMac = r0
            return r3
        L37:
            return r0
    }

    public static java.lang.String getOaid(android.content.Context r13) {
            boolean r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireOAID
            if (r0 == 0) goto L7
            java.lang.String r13 = com.mbridge.msdk.optimize.SensitiveDataUtil.oaid
            return r13
        L7:
            java.lang.String r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.oaid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            java.lang.String r13 = com.mbridge.msdk.optimize.SensitiveDataUtil.oaid
            return r13
        L12:
            com.mbridge.msdk.optimize.SensitiveDataUtil$a r0 = new com.mbridge.msdk.optimize.SensitiveDataUtil$a     // Catch: java.lang.Throwable -> L93
            r0.<init>(r13)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = r0.b     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.optimize.SensitiveDataUtil.oaid = r0     // Catch: java.lang.Throwable -> L93
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L93
            if (r0 != 0) goto L24
            java.lang.String r13 = com.mbridge.msdk.optimize.SensitiveDataUtil.oaid     // Catch: java.lang.Throwable -> L93
            return r13
        L24:
            java.lang.String r0 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L93
            boolean r1 = isFreeMeOS()     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L2f
            java.lang.String r0 = "FERRMEOS"
            goto L37
        L2f:
            boolean r1 = isSSUIOS()     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L37
            java.lang.String r0 = "SSUI"
        L37:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L93
            if (r1 != 0) goto L97
            java.lang.String r0 = r0.toUpperCase()     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = "ASUS"
            java.lang.String r2 = "HUAWEI"
            java.lang.String r3 = "HONOR"
            java.lang.String r4 = "OPPO"
            java.lang.String r5 = "ONEPLUS"
            java.lang.String r6 = "ZTE"
            java.lang.String r7 = "FERRMEOS"
            java.lang.String r8 = "SSUI"
            java.lang.String r9 = "SAMSUNG"
            java.lang.String r10 = "MEIZU"
            java.lang.String r11 = "MOTOLORA"
            java.lang.String r12 = "LENOVO"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12}     // Catch: java.lang.Throwable -> L93
            java.util.List r1 = java.util.Arrays.asList(r1)     // Catch: java.lang.Throwable -> L93
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L6b
            getFormNewThread(r13, r0)     // Catch: java.lang.Throwable -> L93
            goto L97
        L6b:
            java.lang.String r1 = "VIVO"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L7f
            com.mbridge.msdk.optimize.a.a.h r0 = new com.mbridge.msdk.optimize.a.a.h     // Catch: java.lang.Throwable -> L93
            r0.<init>(r13)     // Catch: java.lang.Throwable -> L93
            java.lang.String r13 = r0.a()     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.optimize.SensitiveDataUtil.oaid = r13     // Catch: java.lang.Throwable -> L93
            goto L97
        L7f:
            java.lang.String r1 = "NUBIA"
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L97
            com.mbridge.msdk.optimize.a.a.d r0 = new com.mbridge.msdk.optimize.a.a.d     // Catch: java.lang.Throwable -> L93
            r0.<init>(r13)     // Catch: java.lang.Throwable -> L93
            java.lang.String r13 = r0.a()     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.optimize.SensitiveDataUtil.oaid = r13     // Catch: java.lang.Throwable -> L93
            goto L97
        L93:
            java.lang.String r13 = ""
            com.mbridge.msdk.optimize.SensitiveDataUtil.oaid = r13
        L97:
            r13 = 1
            com.mbridge.msdk.optimize.SensitiveDataUtil.isAcquireOAID = r13
            java.lang.String r13 = com.mbridge.msdk.optimize.SensitiveDataUtil.oaid
            return r13
    }

    private static java.lang.String getProperty(java.lang.String r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "get"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L2c
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2c
            r3[r6] = r8     // Catch: java.lang.Exception -> L2c
            java.lang.String r8 = "unknown"
            r3[r7] = r8     // Catch: java.lang.Exception -> L2c
            java.lang.Object r8 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L2c
            r0 = r8
        L2c:
            return r0
    }

    public static java.lang.String getSelfId(android.content.Context r3) {
            java.lang.String r0 = com.mbridge.msdk.optimize.SensitiveDataUtil.mSelfId
            if (r0 != 0) goto L2b
            java.io.File r0 = new java.io.File
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "/.a/track_id.bin"
            r0.<init>(r1, r2)
            boolean r1 = r0.exists()     // Catch: java.io.IOException -> L27
            if (r1 != 0) goto L20
            java.lang.String r3 = writeInstallationFile(r3, r0)     // Catch: java.io.IOException -> L27
            com.mbridge.msdk.optimize.SensitiveDataUtil.mSelfId = r3     // Catch: java.io.IOException -> L27
            goto L2b
        L20:
            java.lang.String r3 = readInstallationFile(r0)     // Catch: java.io.IOException -> L27
            com.mbridge.msdk.optimize.SensitiveDataUtil.mSelfId = r3     // Catch: java.io.IOException -> L27
            goto L2b
        L27:
            r3 = move-exception
            r3.printStackTrace()
        L2b:
            java.lang.String r3 = com.mbridge.msdk.optimize.SensitiveDataUtil.mSelfId
            if (r3 != 0) goto L31
            java.lang.String r3 = ""
        L31:
            return r3
    }

    public static boolean isFreeMeOS() {
            java.lang.String r0 = "ro.build.freeme.label"
            java.lang.String r0 = getProperty(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "FREEMEOS"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    public static boolean isSSUIOS() {
            java.lang.String r0 = "ro.ssui.product"
            java.lang.String r0 = getProperty(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "unknown"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    private static java.lang.String readInstallationFile(java.io.File r4) throws java.io.IOException {
            r0 = 0
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = "r"
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L1d
            long r2 = r1.length()     // Catch: java.lang.Throwable -> L1b
            int r4 = (int) r2     // Catch: java.lang.Throwable -> L1b
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L1b
            r1.readFully(r4)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L1b
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L1b
            r1.close()
            return r2
        L1b:
            r4 = move-exception
            goto L1f
        L1d:
            r4 = move-exception
            r1 = r0
        L1f:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L27
            r1.close()
        L27:
            return r0
        L28:
            r4 = move-exception
            if (r1 == 0) goto L2e
            r1.close()
        L2e:
            throw r4
    }

    private static void writeFile(android.content.Context r1, java.io.File r2, java.lang.String r3) throws java.io.IOException {
            java.io.File r1 = r2.getParentFile()
            boolean r1 = r1.exists()
            if (r1 != 0) goto L11
            java.io.File r1 = r2.getParentFile()
            r1.mkdirs()
        L11:
            r2.createNewFile()
            r1 = 0
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L24
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L24
            byte[] r1 = r3.getBytes()     // Catch: java.lang.Throwable -> L22
            r0.write(r1)     // Catch: java.lang.Throwable -> L22
            goto L2c
        L22:
            r1 = move-exception
            goto L27
        L24:
            r2 = move-exception
            r0 = r1
            r1 = r2
        L27:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L2f
        L2c:
            r0.close()
        L2f:
            return
        L30:
            r1 = move-exception
            if (r0 == 0) goto L36
            r0.close()
        L36:
            throw r1
    }

    private static java.lang.String writeInstallationFile(android.content.Context r2, java.io.File r3) throws java.io.IOException {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r1 = r0.toString()
            writeFile(r2, r3, r1)
            java.lang.String r2 = r0.toString()
            return r2
    }
}
