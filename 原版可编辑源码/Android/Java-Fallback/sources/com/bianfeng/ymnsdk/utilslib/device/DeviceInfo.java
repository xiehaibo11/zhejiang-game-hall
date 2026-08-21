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

    private java.lang.String initCarrier(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = "phone"
            java.lang.Object r0 = r5.getSystemService(r0)     // Catch: java.lang.Exception -> L1e
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = r0.getNetworkOperatorName()     // Catch: java.lang.Exception -> L1e
            r4.carrier = r1     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = r4.carrier     // Catch: java.lang.Exception -> L1e
            if (r1 == 0) goto L1d
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L1e
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_isp     // Catch: java.lang.Exception -> L1e
            java.lang.String r3 = r4.carrier     // Catch: java.lang.Exception -> L1e
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r1, r2, r3)     // Catch: java.lang.Exception -> L1e
        L1d:
            goto L23
        L1e:
            r0 = move-exception
            java.lang.String r1 = "unknown"
            r4.carrier = r1
        L23:
            java.lang.String r0 = r4.carrier
            return r0
    }

    private void initClientIp() {
            r8 = this;
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.isAgreeprivacy()
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Lb
            r8.clientIp = r1
            return
        Lb:
            java.util.Enumeration r0 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.net.SocketException -> L4b
            if (r0 != 0) goto L14
            r8.clientIp = r1     // Catch: java.net.SocketException -> L4b
            return
        L14:
            boolean r2 = r0.hasMoreElements()     // Catch: java.net.SocketException -> L4b
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r0.nextElement()     // Catch: java.net.SocketException -> L4b
            java.net.NetworkInterface r2 = (java.net.NetworkInterface) r2     // Catch: java.net.SocketException -> L4b
            java.util.Enumeration r3 = r2.getInetAddresses()     // Catch: java.net.SocketException -> L4b
        L24:
            boolean r4 = r3.hasMoreElements()     // Catch: java.net.SocketException -> L4b
            if (r4 == 0) goto L49
            java.lang.Object r4 = r3.nextElement()     // Catch: java.net.SocketException -> L4b
            java.net.InetAddress r4 = (java.net.InetAddress) r4     // Catch: java.net.SocketException -> L4b
            boolean r5 = r4.isLoopbackAddress()     // Catch: java.net.SocketException -> L4b
            if (r5 == 0) goto L37
            goto L24
        L37:
            java.lang.String r5 = r4.getHostAddress()     // Catch: java.net.SocketException -> L4b
            r8.clientIp = r5     // Catch: java.net.SocketException -> L4b
            java.lang.String r5 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.net.SocketException -> L4b
            java.lang.String r6 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_ip     // Catch: java.net.SocketException -> L4b
            java.lang.String r7 = r8.clientIp     // Catch: java.net.SocketException -> L4b
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r5, r6, r7)     // Catch: java.net.SocketException -> L4b
            goto L24
        L49:
            goto L14
        L4a:
            goto L51
        L4b:
            r0 = move-exception
            r0.printStackTrace()
            r8.clientIp = r1
        L51:
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
            r3 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_model
            java.lang.String r2 = android.os.Build.MODEL
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r1, r2)
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
            r2 = this;
            android.content.Context r0 = r2.mContext     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.getNetworkState(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.String r1 = ""
            return r1
    }

    public java.lang.String getOsVersion() {
            r5 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_os_version
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Android+"
            r2.append(r3)
            java.lang.String r4 = android.os.Build.VERSION.RELEASE
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r1, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
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

    public java.lang.String getUuidFormSP() {
            r5 = this;
            java.lang.String r0 = "ymnutils_uuid"
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            java.lang.String r2 = ""
            if (r2 == r1) goto Lb
            return r1
        Lb:
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "-"
            java.lang.String r1 = r3.replaceAll(r4, r2)
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L1e
            return r1
        L1e:
            r0 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            r2.<init>(r0)
            throw r2
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

    public void initDevicePixel(android.content.Context r5) {
            r4 = this;
            android.content.res.Resources r0 = r5.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r0.widthPixels
            r1.append(r2)
            java.lang.String r2 = "*"
            r1.append(r2)
            int r3 = r0.heightPixels
            r1.append(r3)
            r1.append(r2)
            int r2 = r0.densityDpi
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.devicePixel = r1
            return
    }

    public void setContext(android.content.Context r1) {
            r0 = this;
            r0.mContext = r1
            return
    }
}
