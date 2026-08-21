package com.bianfeng.ymnsdk.utilslib.device;

public class DeviceID {
    private static final java.lang.String SAVE_DEVICE_ID_FILE_PATH = ".tidbf";
    private static final java.lang.String SAVE_DEVICE_ID_SP_PATH = "pref.deviceid.key.bf";
    private java.lang.String ANDROID_ID;
    private android.content.Context context;
    private java.lang.String deviceidSp_id;
    private java.lang.String mid;
    private int sdk_int;

    public DeviceID(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "deviceid_sp_id"
            r1.deviceidSp_id = r0
            java.lang.String r0 = "ANDROID_ID"
            r1.ANDROID_ID = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1.sdk_int = r0
            r1.context = r2
            return
    }

    private java.lang.String generateDeviceId() {
            r3 = this;
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "-"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replace(r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L2b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "T"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L2b:
            return r0
    }

    private java.lang.String getBfDataLocal() {
            r4 = this;
            java.lang.String r0 = r4.getDeviceidFromBfdataSp()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "bfdata-sp->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            return r0
        L1f:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r2.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.getSDCardBaseDir()     // Catch: java.lang.Exception -> L43
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Exception -> L43
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = ".tidbf"
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L43
            byte[] r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.loadFileFromSDCard(r2)     // Catch: java.lang.Exception -> L43
            r1.<init>(r2)     // Catch: java.lang.Exception -> L43
            r0 = r1
        L43:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "bfdata-file->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            return r0
    }

    private java.lang.String getDeviceidFromBfdataSp() {
            r2 = this;
            android.content.Context r0 = r2.context
            java.lang.String r1 = "pref.deviceid.key.bf"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getStringFromBfData(r0, r1)
            return r0
    }

    private java.lang.String getDeviceidFromFile() {
            r3 = this;
            r0 = 0
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isSDCardMounted()     // Catch: java.lang.Exception -> L26
            if (r1 == 0) goto L13
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = "ymn-data-fun.tidbf"
            byte[] r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.readFileToSDCardPublicDir(r2)     // Catch: java.lang.Exception -> L26
            r1.<init>(r2)     // Catch: java.lang.Exception -> L26
            goto L14
        L13:
            r1 = r0
        L14:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L26
            if (r2 == 0) goto L25
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = "ymn-data-fun.ymntidbf"
            byte[] r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.readFileToSDCardPrivateFilesDir(r2)     // Catch: java.lang.Exception -> L26
            r1.<init>(r2)     // Catch: java.lang.Exception -> L26
        L25:
            return r1
        L26:
            return r0
    }

    private java.lang.String getDeviceidFromSp() {
            r1 = this;
            java.lang.String r0 = r1.deviceidSp_id
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    private java.lang.String getLocalDeviceId() {
            r3 = this;
            java.lang.String r0 = r3.getBfDataLocal()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = r3.getDeviceidFromSp()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Local-df-sp->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            return r0
        L2a:
            java.lang.String r0 = r3.getDeviceidFromFile()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L49
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Local-file-sp->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            return r0
        L49:
            r0 = 0
            return r0
    }

    private boolean isEmulator() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = android.os.Build.MODEL     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = "sdk"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L16
            if (r1 != 0) goto L15
            java.lang.String r1 = android.os.Build.MODEL     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = "google_sdk"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L16
            if (r1 == 0) goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }

    private void saveDeviceId(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.deviceidSp_id     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L6
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L6
            goto La
        L6:
            r2 = move-exception
            r2.printStackTrace()
        La:
            return
    }

    private void saveFile(java.lang.String r3) {
            r2 = this;
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isSDCardMounted()
            if (r0 == 0) goto L18
            byte[] r0 = r3.getBytes()     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = "ymn-data-fun.tidbf"
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.saveFileToSDCardPublicDir(r0, r1)     // Catch: java.lang.Exception -> Lf
        Lf:
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L18
            java.lang.String r0 = "ymn-data-fun.ymntidbf"
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.saveFileToSDCardPrivateFilesDir(r3, r0)     // Catch: java.lang.Exception -> L18
        L18:
            return
    }

    private void saveLocalDeviceId(java.lang.String r1) {
            r0 = this;
            r0.saveDeviceId(r1)
            r0.saveFile(r1)
            return
    }

    protected java.lang.String getAndroidId() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getDevcieId() {
            r2 = this;
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.isAgreeprivacy()
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            return r0
        L9:
            java.lang.String r0 = r2.mid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            java.lang.String r0 = r2.mid
            return r0
        L14:
            java.lang.String r0 = r2.getLocalDeviceId()
            r2.mid = r0
            java.lang.String r0 = r2.mid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r2.mid
            java.lang.String r1 = "02:00:00:00:00:00"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r2.mid
            return r0
        L2f:
            java.lang.String r0 = r2.generateDeviceId()
            r2.mid = r0
            java.lang.String r0 = r2.mid
            r2.saveLocalDeviceId(r0)
            java.lang.String r0 = r2.mid
            return r0
    }

    public java.lang.String getDeviceUUID() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7c
            r0.<init>()     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = "3883756"
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.BOARD     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.BRAND     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.DEVICE     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.HARDWARE     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.ID     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.MODEL     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.PRODUCT     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = android.os.Build.SERIAL     // Catch: java.lang.Exception -> L7c
            int r1 = r1.length()     // Catch: java.lang.Exception -> L7c
            int r1 = r1 % 10
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L7c
            java.util.UUID r1 = new java.util.UUID     // Catch: java.lang.Exception -> L7c
            int r0 = r0.hashCode()     // Catch: java.lang.Exception -> L7c
            long r2 = (long) r0     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = android.os.Build.SERIAL     // Catch: java.lang.Exception -> L7c
            int r0 = r0.hashCode()     // Catch: java.lang.Exception -> L7c
            long r4 = (long) r0     // Catch: java.lang.Exception -> L7c
            r1.<init>(r2, r4)     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L7c
            return r0
        L7c:
            java.lang.String r0 = ""
            return r0
    }

    protected java.lang.String getMac() {
            r1 = this;
            r0 = 0
            return r0
    }
}
