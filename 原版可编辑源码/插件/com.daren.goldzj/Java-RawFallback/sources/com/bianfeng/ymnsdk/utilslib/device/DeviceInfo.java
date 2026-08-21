package com.bianfeng.ymnsdk.utilslib.device;

public class DeviceInfo {
    private static volatile com.bianfeng.ymnsdk.utilslib.device.DeviceInfo deviceInfo;
    private int appMemory;
    private int appUsedMemory;
    private int availRamMemory;
    private int availRomMemory;
    private java.lang.String carrier;
    private java.lang.String clientIp;
    private java.lang.String devcieid;
    private com.bianfeng.ymnsdk.utilslib.device.DeviceID deviceID;
    private java.lang.String devicePixel;
    private android.content.Context mContext;
    private com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo memoryInfo;
    private int totalRamMemory;
    private int totalRomMemory;

    private DeviceInfo() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.devcieid = r0
            return
    }

    public static com.bianfeng.ymnsdk.utilslib.device.DeviceInfo getInstance() {
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.deviceInfo
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.device.DeviceInfo> r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.deviceInfo     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = new com.bianfeng.ymnsdk.utilslib.device.DeviceInfo     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.deviceInfo = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.deviceInfo
            return r0
    }

    private java.lang.String initCarrier(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Exception -> Lf
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Exception -> Lf
            java.lang.String r2 = r2.getNetworkOperatorName()     // Catch: java.lang.Exception -> Lf
            r1.carrier = r2     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            java.lang.String r2 = "unknown"
            r1.carrier = r2
        L13:
            java.lang.String r2 = r1.carrier
            return r2
    }

    private void initClientIp() {
            r5 = this;
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.isAgreeprivacy()
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Lb
            r5.clientIp = r1
            return
        Lb:
            java.util.Enumeration r0 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.net.SocketException -> L3e
            if (r0 != 0) goto L14
            r5.clientIp = r1     // Catch: java.net.SocketException -> L3e
            return
        L14:
            boolean r2 = r0.hasMoreElements()     // Catch: java.net.SocketException -> L3e
            if (r2 == 0) goto L44
            java.lang.Object r2 = r0.nextElement()     // Catch: java.net.SocketException -> L3e
            java.net.NetworkInterface r2 = (java.net.NetworkInterface) r2     // Catch: java.net.SocketException -> L3e
            java.util.Enumeration r2 = r2.getInetAddresses()     // Catch: java.net.SocketException -> L3e
        L24:
            boolean r3 = r2.hasMoreElements()     // Catch: java.net.SocketException -> L3e
            if (r3 == 0) goto L14
            java.lang.Object r3 = r2.nextElement()     // Catch: java.net.SocketException -> L3e
            java.net.InetAddress r3 = (java.net.InetAddress) r3     // Catch: java.net.SocketException -> L3e
            boolean r4 = r3.isLoopbackAddress()     // Catch: java.net.SocketException -> L3e
            if (r4 == 0) goto L37
            goto L24
        L37:
            java.lang.String r3 = r3.getHostAddress()     // Catch: java.net.SocketException -> L3e
            r5.clientIp = r3     // Catch: java.net.SocketException -> L3e
            goto L24
        L3e:
            r0 = move-exception
            r0.printStackTrace()
            r5.clientIp = r1
        L44:
            return
    }

    public java.lang.String getAndroidId() {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceID r0 = r2.deviceID
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAndroidId()
            return r0
        L9:
            com.bianfeng.ymnsdk.utilslib.device.DeviceID r0 = new com.bianfeng.ymnsdk.utilslib.device.DeviceID
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.deviceID = r0
            com.bianfeng.ymnsdk.utilslib.device.DeviceID r0 = r2.deviceID
            java.lang.String r0 = r0.getAndroidId()
            return r0
    }

    public int getAppMemory() {
            r1 = this;
            int r0 = r1.appMemory
            return r0
    }

    public int getAppUsedMemory() {
            r1 = this;
            int r0 = r1.appUsedMemory
            return r0
    }

    public java.lang.String getCarrier() {
            r1 = this;
            java.lang.String r0 = r1.carrier
            return r0
    }

    public java.lang.String getClientIp() {
            r1 = this;
            java.lang.String r0 = r1.clientIp
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            r1.initClientIp()
        Lb:
            java.lang.String r0 = r1.clientIp
            return r0
    }

    public java.lang.String getDevcieidWithH() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getDeviceId() {
            r1 = this;
            r1.initDevcieId()
            java.lang.String r0 = r1.devcieid
            return r0
    }

    public java.lang.String getDeviceModel() {
            r1 = this;
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    public java.lang.String getDeviceName() {
            r1 = this;
            java.lang.String r0 = android.os.Build.DEVICE
            return r0
    }

    public java.lang.String getDeviceOS() {
            r1 = this;
            java.lang.String r0 = "android"
            return r0
    }

    public java.lang.String getDevicePixel() {
            r1 = this;
            java.lang.String r0 = r1.devicePixel
            return r0
    }

    public java.lang.String getDeviceVersionCode() {
            r1 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getImei() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getMac() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getManufactory() {
            r1 = this;
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public java.lang.String getManufacturer() {
            r1 = this;
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public java.lang.String getNetChannelStr() {
            r1 = this;
            android.content.Context r0 = r1.mContext     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.getNetworkState(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getOsVersion() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Android+"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public int getRamAvailMem() {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r2.memoryInfo
            if (r0 == 0) goto L9
            int r0 = r0.getRamAvailMem()
            return r0
        L9:
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = new com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.memoryInfo = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r2.memoryInfo
            int r0 = r0.getRamAvailMem()
            return r0
    }

    public int getRomAvailMem() {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r2.memoryInfo
            if (r0 == 0) goto L9
            int r0 = r0.getRomAvailMem()
            return r0
        L9:
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = new com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.memoryInfo = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r2.memoryInfo
            int r0 = r0.getRomAvailMem()
            return r0
    }

    public int getTotalRamMemory() {
            r1 = this;
            int r0 = r1.totalRamMemory
            return r0
    }

    public int getTotalRomMemory() {
            r1 = this;
            int r0 = r1.totalRomMemory
            return r0
    }

    public java.lang.String getUuid() {
            r3 = this;
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "-"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replaceAll(r1, r2)
            return r0
    }

    public void init(android.content.Context r2) {
            r1 = this;
            r1.mContext = r2
            com.bianfeng.ymnsdk.utilslib.device.DeviceID r0 = new com.bianfeng.ymnsdk.utilslib.device.DeviceID
            r0.<init>(r2)
            r1.deviceID = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = new com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo
            r0.<init>(r2)
            r1.memoryInfo = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r1.memoryInfo
            int r0 = r0.getRamTotalMem()
            r1.totalRamMemory = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r1.memoryInfo
            int r0 = r0.getRomTotalMem()
            r1.totalRomMemory = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r1.memoryInfo
            int r0 = r0.getRamAvailMem()
            r1.availRamMemory = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r1.memoryInfo
            int r0 = r0.getRomAvailMem()
            r1.availRomMemory = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r1.memoryInfo
            int r0 = r0.getAppMem()
            r1.appMemory = r0
            com.bianfeng.ymnsdk.utilslib.device.UtilsMemoryInfo r0 = r1.memoryInfo
            int r0 = r0.getAppUsedMem()
            r1.appUsedMemory = r0
            r1.initDevicePixel(r2)
            r1.initCarrier(r2)
            return
    }

    public void initDevcieId() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceID r0 = r1.deviceID
            if (r0 == 0) goto L14
            java.lang.String r0 = r1.devcieid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L14
            com.bianfeng.ymnsdk.utilslib.device.DeviceID r0 = r1.deviceID
            java.lang.String r0 = r0.getDevcieId()
            r1.devcieid = r0
        L14:
            return
    }

    public void initDevicePixel(android.content.Context r4) {
            r3 = this;
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4.widthPixels
            r0.append(r1)
            java.lang.String r1 = "*"
            r0.append(r1)
            int r2 = r4.heightPixels
            r0.append(r2)
            r0.append(r1)
            int r4 = r4.densityDpi
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.devicePixel = r4
            return
    }
}
