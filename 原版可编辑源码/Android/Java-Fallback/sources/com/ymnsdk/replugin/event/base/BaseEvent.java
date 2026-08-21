package com.ymnsdk.replugin.event.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class BaseEvent {
    private static final java.lang.String SAVE_DEVICE_ID_FILE_PATH = ".tidbf";
    private static final java.lang.String SAVE_DEVICE_ID_SP_PATH = "pref.deviceid.key.bf";
    private int app_use_memory;
    private java.lang.String cli_device;
    private java.lang.String cli_idfv;
    private java.lang.String cli_platform;
    private long cli_total_rom_memory;
    private java.lang.String cli_ver;
    private java.lang.String deviceidSp_id;
    private int event;
    private int event_sequence;
    private java.lang.String msg;
    private int rst_code;
    private java.lang.String sdk_package_ver;
    private java.lang.String sdk_third_ver;
    private java.lang.String sign;
    private java.lang.String svr_cluster;
    private java.lang.String svr_node;
    private java.lang.String time;
    private java.lang.String trace;

    public BaseEvent(android.app.Activity r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "deviceid_sp_id"
            r3.deviceidSp_id = r0
            r0 = 0
            r3.event = r0
            r1 = 0
            r3.cli_total_rom_memory = r1
            r3.event_sequence = r0
            r0 = -1
            r3.app_use_memory = r0
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getRepluginTrace()
            r3.trace = r0
            java.lang.String r0 = r3.getAndroid(r4)
            r3.cli_idfv = r0
            java.lang.String r4 = r3.getAndroid(r4)     // Catch: java.lang.Exception -> L37
            r3.cli_device = r4     // Catch: java.lang.Exception -> L37
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L37
            java.lang.Long r4 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L37
            java.lang.String r4 = com.bianfeng.ymnsdk.utilslib.SystemUtils.getRFC3339(r4)     // Catch: java.lang.Exception -> L37
            r3.time = r4     // Catch: java.lang.Exception -> L37
            goto L3b
        L37:
            r4 = move-exception
            r4.printStackTrace()
        L3b:
            java.lang.String r4 = com.ymnsdk.replugin.RePluginSdk.getFrameworkVersion()
            r3.sdk_third_ver = r4
            return
    }

    public BaseEvent(android.app.Activity r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.event = r2
            return
    }

    public BaseEvent(android.app.Activity r1, int r2, int r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.rst_code = r3
            r0.msg = r4
            r0.cli_ver = r5
            return
    }

    public BaseEvent(android.app.Activity r1, int r2, int r3, java.lang.String r4, java.lang.String r5, int r6, long r7, int r9) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.rst_code = r3
            r0.msg = r4
            r0.cli_ver = r5
            r0.event_sequence = r6
            r0.cli_total_rom_memory = r7
            r0.app_use_memory = r9
            return
    }

    public BaseEvent(android.app.Activity r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.svr_cluster = r3
            r0.svr_node = r4
            r0.sdk_package_ver = r5
            return
    }

    public BaseEvent(android.app.Activity r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            r0.cli_platform = r6
            return
    }

    private java.lang.String getAndroid(android.app.Activity r1) {
            r0 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getAndroidId()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setAndroidId(r1)
            return r1
    }

    private java.lang.String getBfDataLocal(android.app.Activity r4) {
            r3 = this;
            java.lang.String r4 = r3.getDeviceidFromBfdataSp(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bfdata-sp->"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            return r4
        L1f:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L43
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r1.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.getSDCardBaseDir()     // Catch: java.lang.Exception -> L43
            r1.append(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Exception -> L43
            r1.append(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = ".tidbf"
            r1.append(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L43
            byte[] r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.loadFileFromSDCard(r1)     // Catch: java.lang.Exception -> L43
            r0.<init>(r1)     // Catch: java.lang.Exception -> L43
            r4 = r0
        L43:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bfdata-file->"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            return r4
    }

    private java.lang.String getDeviceidFromBfdataSp(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = "pref.deviceid.key.bf"
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getStringFromBfData(r2, r0)
            return r2
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

    private java.lang.String getLocalDeviceId(android.app.Activity r3) {
            r2 = this;
            java.lang.String r3 = r2.getBfDataLocal(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto Lb
            return r3
        Lb:
            java.lang.String r3 = r2.getDeviceidFromSp()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Local-df-sp->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            return r3
        L2a:
            java.lang.String r3 = r2.getDeviceidFromFile()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Local-file-sp->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            return r3
        L49:
            r3 = 0
            return r3
    }

    private java.lang.String sign(java.lang.Object r9) {
            r8 = this;
            java.util.TreeMap r9 = r8.toTreeMap(r9)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Set r9 = r9.entrySet()
            java.util.Iterator r9 = r9.iterator()
        L11:
            boolean r1 = r9.hasNext()
            if (r1 == 0) goto Laf
            java.lang.Object r1 = r9.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            java.lang.String r2 = r2.toString()
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L32
            goto L11
        L32:
            java.lang.String r4 = "event"
            boolean r4 = r3.equals(r4)
            java.lang.String r5 = "cli_total_rom_memory"
            java.lang.String r6 = "&"
            java.lang.String r7 = "="
            if (r4 != 0) goto L71
            java.lang.String r4 = "rst_code"
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L71
            java.lang.String r4 = "event_sequence"
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L71
            java.lang.String r4 = "app_use_memory"
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L71
            boolean r4 = r3.equals(r5)
            if (r4 != 0) goto L71
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            r0.append(r7)
            r0.append(r2)
            r0.append(r6)
            goto L11
        L71:
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L93
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            r0.append(r7)
            long r1 = r2.longValue()
            r0.append(r1)
            r0.append(r6)
            goto L11
        L93:
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            r0.append(r7)
            int r1 = r2.intValue()
            r0.append(r1)
            r0.append(r6)
            goto L11
        Laf:
            java.lang.String r9 = "0a1b70067129eb9835b27b79d026b95c"
            r0.append(r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "签名前是："
            r9.append(r1)
            java.lang.String r1 = r0.toString()
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            java.lang.String r1 = "ymn"
            android.util.Log.d(r1, r9)
            java.lang.String r9 = r0.toString()
            java.lang.String r9 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r9)
            return r9
    }

    private java.util.TreeMap<java.lang.String, java.lang.Object> toTreeMap(java.lang.Object r3) {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L15
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L15
            java.lang.String r3 = r1.toJson(r3)     // Catch: java.lang.Exception -> L15
            java.lang.Class<java.util.TreeMap> r1 = java.util.TreeMap.class
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L15
            java.util.TreeMap r3 = (java.util.TreeMap) r3     // Catch: java.lang.Exception -> L15
            return r3
        L15:
            java.util.TreeMap r3 = new java.util.TreeMap
            r3.<init>()
            return r3
    }

    public int getApp_use_memory() {
            r1 = this;
            int r0 = r1.app_use_memory
            return r0
    }

    public java.lang.String getCli_device() {
            r1 = this;
            java.lang.String r0 = r1.cli_device
            return r0
    }

    public java.lang.String getCli_idfv() {
            r1 = this;
            java.lang.String r0 = r1.cli_idfv
            return r0
    }

    public java.lang.String getCli_platform() {
            r1 = this;
            java.lang.String r0 = r1.cli_platform
            return r0
    }

    public long getCli_total_rom_memory() {
            r2 = this;
            long r0 = r2.cli_total_rom_memory
            return r0
    }

    public java.lang.String getCli_ver() {
            r1 = this;
            java.lang.String r0 = r1.cli_ver
            return r0
    }

    public int getEvent() {
            r1 = this;
            int r0 = r1.event
            return r0
    }

    public int getEvent_sequence() {
            r1 = this;
            int r0 = r1.event_sequence
            return r0
    }

    public java.lang.String getMsg() {
            r1 = this;
            java.lang.String r0 = r1.msg
            return r0
    }

    public int getRst_code() {
            r1 = this;
            int r0 = r1.rst_code
            return r0
    }

    public java.lang.String getSdk_package_ver() {
            r1 = this;
            java.lang.String r0 = r1.sdk_package_ver
            return r0
    }

    public java.lang.String getSdk_third_ver() {
            r1 = this;
            java.lang.String r0 = r1.sdk_third_ver
            return r0
    }

    public java.lang.String getSign() {
            r1 = this;
            java.lang.String r0 = r1.sign
            return r0
    }

    public java.lang.String getSvr_cluster() {
            r1 = this;
            java.lang.String r0 = r1.svr_cluster
            return r0
    }

    public java.lang.String getSvr_node() {
            r1 = this;
            java.lang.String r0 = r1.svr_node
            return r0
    }

    public java.lang.String getTime() {
            r1 = this;
            java.lang.String r0 = r1.time
            return r0
    }

    public java.lang.String getTrace() {
            r1 = this;
            java.lang.String r0 = r1.trace
            return r0
    }

    public void setApp_use_memory(int r1) {
            r0 = this;
            r0.app_use_memory = r1
            return
    }

    public void setCli_device(java.lang.String r1) {
            r0 = this;
            r0.cli_device = r1
            return
    }

    public void setCli_idfv(java.lang.String r1) {
            r0 = this;
            r0.cli_idfv = r1
            return
    }

    public void setCli_platform(java.lang.String r1) {
            r0 = this;
            r0.cli_platform = r1
            return
    }

    public void setCli_total_rom_memory(long r1) {
            r0 = this;
            r0.cli_total_rom_memory = r1
            return
    }

    public void setCli_ver(java.lang.String r1) {
            r0 = this;
            r0.cli_ver = r1
            return
    }

    public void setEvent(int r1) {
            r0 = this;
            r0.event = r1
            return
    }

    public void setEvent_sequence(int r1) {
            r0 = this;
            r0.event_sequence = r1
            return
    }

    public void setMsg(java.lang.String r1) {
            r0 = this;
            r0.msg = r1
            return
    }

    public void setRst_code(int r1) {
            r0 = this;
            r0.rst_code = r1
            return
    }

    public void setSdk_package_ver(java.lang.String r1) {
            r0 = this;
            r0.sdk_package_ver = r1
            return
    }

    public void setSdk_third_ver(java.lang.String r1) {
            r0 = this;
            r0.sdk_third_ver = r1
            return
    }

    public void setSign(java.lang.String r1) {
            r0 = this;
            r0.sign = r1
            return
    }

    public void setSvr_cluster(java.lang.String r1) {
            r0 = this;
            r0.svr_cluster = r1
            return
    }

    public void setSvr_node(java.lang.String r1) {
            r0 = this;
            r0.svr_node = r1
            return
    }

    public void setTime(java.lang.String r1) {
            r0 = this;
            r0.time = r1
            return
    }

    public void setTrace(java.lang.String r1) {
            r0 = this;
            r0.trace = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.sign(r1)
            r1.sign = r0
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r0 = r0.toJson(r1)
            return r0
    }
}
