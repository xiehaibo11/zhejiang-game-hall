package com.ymnsdk.replugin.event.base;

import android.app.Activity;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import java.io.File;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class SepperllitaEvent {
    private static final String SAVE_DEVICE_ID_FILE_PATH = ".tidbf";
    private static final String SAVE_DEVICE_ID_SP_PATH = "pref.deviceid.key.bf";
    private String act;
    private String an;
    private String bl;
    private String blk;
    private String cust;
    private String did;
    private String dur;
    private String eid;
    private String label;
    private String pg;
    private String pkg;
    private String rv;
    private String st;
    private String uid;
    private String deviceidSp_id = "deviceid_sp_id";
    private final String SEPPELLITA_SITE = "sl_site";
    private String et = System.currentTimeMillis() + "";

    public SepperllitaEvent(Activity activity) {
        try {
            this.did = getAndroid(activity);
        } catch (Exception e) {
            e.printStackTrace();
        }
        String str = this.did;
        if (str == null || str.isEmpty()) {
            this.did = getAndroid(activity);
        }
        this.an = AppContext.getInstance().getAppName();
        this.pkg = AppContext.getInstance().getPkgName();
        try {
            this.st = AppContext.getInstance().getMetaDataValueString("sl_site");
        } catch (Exception e2) {
            e2.printStackTrace();
            this.st = "";
        }
        SharedPreferencesUtils.getInstance();
        this.uid = SharedPreferencesUtils.getUserId();
    }

    public String getAct() {
        return this.act;
    }

    public void setAct(String str) {
        this.act = str;
    }

    public String getPg() {
        return this.pg;
    }

    public void setPg(String str) {
        this.pg = str;
    }

    public String getEid() {
        return this.eid;
    }

    public void setEid(String str) {
        this.eid = str;
    }

    public String getEt() {
        return this.et;
    }

    public void setEt(String str) {
        this.et = str;
    }

    public String getUid() {
        return this.uid;
    }

    public void setUid(String str) {
        this.uid = str;
    }

    public String getDid() {
        return this.did;
    }

    public void setDid(String str) {
        this.did = str;
    }

    public String getSt() {
        return this.st;
    }

    public void setSt(String str) {
        this.st = str;
    }

    public String getRv() {
        return this.rv;
    }

    public void setRv(String str) {
        if (str.isEmpty()) {
            return;
        }
        this.rv = str;
    }

    public String getDur() {
        return this.dur;
    }

    public void setDur(String str) {
        this.dur = str;
    }

    public String getAn() {
        return this.an;
    }

    public void setAn(String str) {
        this.an = str;
    }

    public String getPkg() {
        return this.pkg;
    }

    public void setPkg(String str) {
        this.pkg = str;
    }

    public String getBlk() {
        return this.blk;
    }

    public void setBlk(String str) {
        this.blk = str;
    }

    public String getBl() {
        return this.bl;
    }

    public void setBl(String str) {
        this.bl = str;
    }

    public String getLabel() {
        return this.label;
    }

    public void setLabel(String str) {
        this.label = str;
    }

    public String getCust() {
        return this.cust;
    }

    public void setCust(String str) {
        this.cust = str;
    }

    private String getLocalDeviceId(Activity activity) {
        String bfDataLocal = getBfDataLocal(activity);
        if (!TextUtils.isEmpty(bfDataLocal)) {
            return bfDataLocal;
        }
        String deviceidFromSp = getDeviceidFromSp();
        if (!TextUtils.isEmpty(deviceidFromSp)) {
            UtilsLogger.i("Local-df-sp->" + deviceidFromSp);
            return deviceidFromSp;
        }
        String deviceidFromFile = getDeviceidFromFile();
        if (TextUtils.isEmpty(deviceidFromFile)) {
            return null;
        }
        UtilsLogger.i("Local-file-sp->" + deviceidFromFile);
        return deviceidFromFile;
    }

    private String getBfDataLocal(Activity activity) {
        String deviceidFromBfdataSp = getDeviceidFromBfdataSp(activity);
        if (!TextUtils.isEmpty(deviceidFromBfdataSp)) {
            UtilsLogger.i("bfdata-sp->" + deviceidFromBfdataSp);
            return deviceidFromBfdataSp;
        }
        try {
            deviceidFromBfdataSp = new String(FileUtils.loadFileFromSDCard(FileUtils.getSDCardBaseDir() + File.separator + SAVE_DEVICE_ID_FILE_PATH));
        } catch (Exception unused) {
        }
        UtilsLogger.i("bfdata-file->" + deviceidFromBfdataSp);
        return deviceidFromBfdataSp;
    }

    private String getDeviceidFromFile() {
        try {
            String str = FileUtils.isSDCardMounted() ? new String(FileUtils.readFileToSDCardPublicDir("ymn-data-fun.tidbf")) : null;
            return TextUtils.isEmpty(str) ? new String(FileUtils.readFileToSDCardPrivateFilesDir("ymn-data-fun.ymntidbf")) : str;
        } catch (Exception unused) {
            return null;
        }
    }

    private String getDeviceidFromBfdataSp(Activity activity) {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getStringFromBfData(activity, SAVE_DEVICE_ID_SP_PATH);
    }

    private String getDeviceidFromSp() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(this.deviceidSp_id);
    }

    private String getAndroid(Activity activity) {
        String androidId = DeviceInfo.getInstance().getAndroidId();
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setAndroidId(androidId);
        return androidId;
    }
}
