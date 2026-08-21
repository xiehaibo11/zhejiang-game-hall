package com.ymnsdk.replugin.event.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SepperllitaEvent {
    private static final java.lang.String SAVE_DEVICE_ID_FILE_PATH = ".tidbf";
    private static final java.lang.String SAVE_DEVICE_ID_SP_PATH = "pref.deviceid.key.bf";
    private final java.lang.String SEPPELLITA_SITE;
    private java.lang.String act;
    private java.lang.String an;
    private java.lang.String bl;
    private java.lang.String blk;
    private java.lang.String cust;
    private java.lang.String deviceidSp_id;
    private java.lang.String did;
    private java.lang.String dur;
    private java.lang.String eid;
    private java.lang.String et;
    private java.lang.String label;
    private java.lang.String pg;
    private java.lang.String pkg;
    private java.lang.String rv;
    private java.lang.String st;
    private java.lang.String uid;

    public SepperllitaEvent(android.app.Activity r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "deviceid_sp_id"
            r4.deviceidSp_id = r0
            java.lang.String r0 = "sl_site"
            r4.SEPPELLITA_SITE = r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.et = r1
            java.lang.String r1 = r4.getAndroid(r5)     // Catch: java.lang.Exception -> L29
            r4.did = r1     // Catch: java.lang.Exception -> L29
            goto L2d
        L29:
            r1 = move-exception
            r1.printStackTrace()
        L2d:
            java.lang.String r1 = r4.did
            if (r1 == 0) goto L37
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L3d
        L37:
            java.lang.String r5 = r4.getAndroid(r5)
            r4.did = r5
        L3d:
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r5 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r5 = r5.getAppName()
            r4.an = r5
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r5 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r5 = r5.getPkgName()
            r4.pkg = r5
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r5 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L5c
            java.lang.String r5 = r5.getMetaDataValueString(r0)     // Catch: java.lang.Exception -> L5c
            r4.st = r5     // Catch: java.lang.Exception -> L5c
            goto L62
        L5c:
            r5 = move-exception
            r5.printStackTrace()
            r4.st = r2
        L62:
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r5 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getUserId()
            r4.uid = r5
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

    public java.lang.String getAct() {
            r1 = this;
            java.lang.String r0 = r1.act
            return r0
    }

    public java.lang.String getAn() {
            r1 = this;
            java.lang.String r0 = r1.an
            return r0
    }

    public java.lang.String getBl() {
            r1 = this;
            java.lang.String r0 = r1.bl
            return r0
    }

    public java.lang.String getBlk() {
            r1 = this;
            java.lang.String r0 = r1.blk
            return r0
    }

    public java.lang.String getCust() {
            r1 = this;
            java.lang.String r0 = r1.cust
            return r0
    }

    public java.lang.String getDid() {
            r1 = this;
            java.lang.String r0 = r1.did
            return r0
    }

    public java.lang.String getDur() {
            r1 = this;
            java.lang.String r0 = r1.dur
            return r0
    }

    public java.lang.String getEid() {
            r1 = this;
            java.lang.String r0 = r1.eid
            return r0
    }

    public java.lang.String getEt() {
            r1 = this;
            java.lang.String r0 = r1.et
            return r0
    }

    public java.lang.String getLabel() {
            r1 = this;
            java.lang.String r0 = r1.label
            return r0
    }

    public java.lang.String getPg() {
            r1 = this;
            java.lang.String r0 = r1.pg
            return r0
    }

    public java.lang.String getPkg() {
            r1 = this;
            java.lang.String r0 = r1.pkg
            return r0
    }

    public java.lang.String getRv() {
            r1 = this;
            java.lang.String r0 = r1.rv
            return r0
    }

    public java.lang.String getSt() {
            r1 = this;
            java.lang.String r0 = r1.st
            return r0
    }

    public java.lang.String getUid() {
            r1 = this;
            java.lang.String r0 = r1.uid
            return r0
    }

    public void setAct(java.lang.String r1) {
            r0 = this;
            r0.act = r1
            return
    }

    public void setAn(java.lang.String r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public void setBl(java.lang.String r1) {
            r0 = this;
            r0.bl = r1
            return
    }

    public void setBlk(java.lang.String r1) {
            r0 = this;
            r0.blk = r1
            return
    }

    public void setCust(java.lang.String r1) {
            r0 = this;
            r0.cust = r1
            return
    }

    public void setDid(java.lang.String r1) {
            r0 = this;
            r0.did = r1
            return
    }

    public void setDur(java.lang.String r1) {
            r0 = this;
            r0.dur = r1
            return
    }

    public void setEid(java.lang.String r1) {
            r0 = this;
            r0.eid = r1
            return
    }

    public void setEt(java.lang.String r1) {
            r0 = this;
            r0.et = r1
            return
    }

    public void setLabel(java.lang.String r1) {
            r0 = this;
            r0.label = r1
            return
    }

    public void setPg(java.lang.String r1) {
            r0 = this;
            r0.pg = r1
            return
    }

    public void setPkg(java.lang.String r1) {
            r0 = this;
            r0.pkg = r1
            return
    }

    public void setRv(java.lang.String r2) {
            r1 = this;
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L8
            r1.rv = r2
        L8:
            return
    }

    public void setSt(java.lang.String r1) {
            r0 = this;
            r0.st = r1
            return
    }

    public void setUid(java.lang.String r1) {
            r0 = this;
            r0.uid = r1
            return
    }
}
