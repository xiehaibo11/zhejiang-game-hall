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
            r4 = this;
            java.lang.String r0 = r4.getAndroidId()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L12
            java.lang.String r1 = "9774d56d682e549c"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L16
        L12:
            java.lang.String r0 = r4.getMac()
        L16:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L24
            java.lang.String r1 = "02:00:00:00:00:00"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L28
        L24:
            java.lang.String r0 = r4.getDeviceUUID()
        L28:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L36
            java.lang.String r1 = "unknown"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L46
        L36:
            java.util.UUID r1 = java.util.UUID.randomUUID()
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "-"
            java.lang.String r3 = ""
            java.lang.String r0 = r1.replace(r2, r3)
        L46:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L61
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "T"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r0 = r1.toString()
        L61:
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
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L44
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L44
            r2.<init>()     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.getSDCardBaseDir()     // Catch: java.lang.Exception -> L44
            r2.append(r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Exception -> L44
            r2.append(r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = ".tidbf"
            r2.append(r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L44
            byte[] r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.loadFileFromSDCard(r2)     // Catch: java.lang.Exception -> L44
            r1.<init>(r2)     // Catch: java.lang.Exception -> L44
            r0 = r1
            goto L45
        L44:
            r1 = move-exception
        L45:
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
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isSDCardMounted()     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L13
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "ymn-data-fun.tidbf"
            byte[] r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.readFileToSDCardPublicDir(r2)     // Catch: java.lang.Exception -> L27
            r1.<init>(r2)     // Catch: java.lang.Exception -> L27
            r0 = r1
        L13:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L25
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "ymn-data-fun.ymntidbf"
            byte[] r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.readFileToSDCardPrivateFilesDir(r2)     // Catch: java.lang.Exception -> L27
            r1.<init>(r2)     // Catch: java.lang.Exception -> L27
            r0 = r1
        L25:
            return r0
        L27:
            r1 = move-exception
            r2 = 0
            return r2
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
            r1 = 0
            return r1
    }

    private boolean isEmulator() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = android.os.Build.MODEL     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = "sdk"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L17
            if (r1 != 0) goto L15
            java.lang.String r1 = android.os.Build.MODEL     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = "google_sdk"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L17
            if (r1 == 0) goto L16
        L15:
            r0 = 1
        L16:
            return r0
        L17:
            r1 = move-exception
            return r0
    }

    private void saveDeviceId(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.deviceidSp_id     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L6
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            return
    }

    private void saveFile(java.lang.String r3) {
            r2 = this;
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isSDCardMounted()
            if (r0 == 0) goto L1c
            byte[] r0 = r3.getBytes()     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = "ymn-data-fun.tidbf"
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.saveFileToSDCardPublicDir(r0, r1)     // Catch: java.lang.Exception -> L10
            goto L11
        L10:
            r0 = move-exception
        L11:
            byte[] r0 = r3.getBytes()     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "ymn-data-fun.ymntidbf"
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.saveFileToSDCardPrivateFilesDir(r0, r1)     // Catch: java.lang.Exception -> L1b
            goto L1c
        L1b:
            r0 = move-exception
        L1c:
            return
    }

    private void saveLocalDeviceId(java.lang.String r1) {
            r0 = this;
            r0.saveDeviceId(r1)
            r0.saveFile(r1)
            return
    }

    protected java.lang.String getAndroidId() {
            r4 = this;
            java.lang.String r0 = r4.ANDROID_ID
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            if (r0 == 0) goto Le
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L45
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "bfdata_"
            r1.append(r2)     // Catch: java.lang.Exception -> L41
            android.content.Context r2 = r4.context     // Catch: java.lang.Exception -> L41
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "android_id"
            java.lang.String r2 = android.provider.Settings.Secure.getString(r2, r3)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = ""
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.encrypt(r2, r3)     // Catch: java.lang.Exception -> L41
            r1.append(r2)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L41
            r0 = r1
            java.lang.String r1 = r4.ANDROID_ID     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r1, r0)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_androidid     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r1, r2, r0)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r1 = move-exception
            r1.printStackTrace()
        L45:
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
            int r2 = r0.hashCode()     // Catch: java.lang.Exception -> L7c
            long r2 = (long) r2     // Catch: java.lang.Exception -> L7c
            java.lang.String r4 = android.os.Build.SERIAL     // Catch: java.lang.Exception -> L7c
            int r4 = r4.hashCode()     // Catch: java.lang.Exception -> L7c
            long r4 = (long) r4     // Catch: java.lang.Exception -> L7c
            r1.<init>(r2, r4)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L7c
            return r1
        L7c:
            r0 = move-exception
            java.lang.String r1 = ""
            return r1
    }

    protected java.lang.String getMac() {
            r1 = this;
            r0 = 0
            return r0
    }
}
