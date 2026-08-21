package com.ymnsdk.replugin.event.base;

import android.app.Activity;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.SystemUtils;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.bianfeng.ymnsdk.utilslib.security.Md5Utils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.ymnsdk.replugin.RePluginSdk;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import java.io.File;
import java.util.Map;
import java.util.TreeMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class BaseEvent {
    private static final String SAVE_DEVICE_ID_FILE_PATH = ".tidbf";
    private static final String SAVE_DEVICE_ID_SP_PATH = "pref.deviceid.key.bf";
    private int app_use_memory;
    private String cli_device;
    private String cli_idfv;
    private String cli_platform;
    private long cli_total_rom_memory;
    private String cli_ver;
    private String deviceidSp_id;
    private int event;
    private int event_sequence;
    private String msg;
    private int rst_code;
    private String sdk_package_ver;
    private String sdk_third_ver;
    private String sign;
    private String svr_cluster;
    private String svr_node;
    private String time;
    private String trace;

    public BaseEvent(Activity activity) {
        this.deviceidSp_id = "deviceid_sp_id";
        this.event = 0;
        this.cli_total_rom_memory = 0L;
        this.event_sequence = 0;
        this.app_use_memory = -1;
        SharedPreferencesUtils.getInstance();
        this.trace = SharedPreferencesUtils.getRepluginTrace();
        this.cli_idfv = getAndroid(activity);
        try {
            this.cli_device = getAndroid(activity);
            this.time = SystemUtils.getRFC3339(Long.valueOf(System.currentTimeMillis()));
        } catch (Exception e) {
            e.printStackTrace();
        }
        this.sdk_third_ver = RePluginSdk.getFrameworkVersion();
    }

    public BaseEvent(Activity activity, int i) {
        this(activity);
        this.event = i;
    }

    public BaseEvent(Activity activity, int i, int i2, String str, String str2) {
        this(activity, i);
        this.rst_code = i2;
        this.msg = str;
        this.cli_ver = str2;
    }

    public BaseEvent(Activity activity, int i, int i2, String str, String str2, int i3, long j, int i4) {
        this(activity, i);
        this.rst_code = i2;
        this.msg = str;
        this.cli_ver = str2;
        this.event_sequence = i3;
        this.cli_total_rom_memory = j;
        this.app_use_memory = i4;
    }

    public BaseEvent(Activity activity, int i, String str, String str2, String str3) {
        this(activity, i);
        this.svr_cluster = str;
        this.svr_node = str2;
        this.sdk_package_ver = str3;
    }

    public BaseEvent(Activity activity, int i, String str, String str2, String str3, String str4) {
        this(activity, i, str, str2, str3);
        this.cli_platform = str4;
    }

    public String getTrace() {
        return this.trace;
    }

    public void setTrace(String str) {
        this.trace = str;
    }

    public int getEvent() {
        return this.event;
    }

    public void setEvent(int i) {
        this.event = i;
    }

    public String getTime() {
        return this.time;
    }

    public void setTime(String str) {
        this.time = str;
    }

    public String getSign() {
        return this.sign;
    }

    public void setSign(String str) {
        this.sign = str;
    }

    public String getCli_idfv() {
        return this.cli_idfv;
    }

    public void setCli_idfv(String str) {
        this.cli_idfv = str;
    }

    public String getCli_device() {
        return this.cli_device;
    }

    public void setCli_device(String str) {
        this.cli_device = str;
    }

    public int getRst_code() {
        return this.rst_code;
    }

    public void setRst_code(int i) {
        this.rst_code = i;
    }

    public String getMsg() {
        return this.msg;
    }

    public void setMsg(String str) {
        this.msg = str;
    }

    public String getSdk_third_ver() {
        return this.sdk_third_ver;
    }

    public void setSdk_third_ver(String str) {
        this.sdk_third_ver = str;
    }

    public String getCli_platform() {
        return this.cli_platform;
    }

    public void setCli_platform(String str) {
        this.cli_platform = str;
    }

    public String getSvr_cluster() {
        return this.svr_cluster;
    }

    public void setSvr_cluster(String str) {
        this.svr_cluster = str;
    }

    public String getSvr_node() {
        return this.svr_node;
    }

    public void setSvr_node(String str) {
        this.svr_node = str;
    }

    public String getCli_ver() {
        return this.cli_ver;
    }

    public void setCli_ver(String str) {
        this.cli_ver = str;
    }

    public String getSdk_package_ver() {
        return this.sdk_package_ver;
    }

    public void setSdk_package_ver(String str) {
        this.sdk_package_ver = str;
    }

    public long getCli_total_rom_memory() {
        return this.cli_total_rom_memory;
    }

    public void setCli_total_rom_memory(long j) {
        this.cli_total_rom_memory = j;
    }

    public int getEvent_sequence() {
        return this.event_sequence;
    }

    public void setEvent_sequence(int i) {
        this.event_sequence = i;
    }

    public int getApp_use_memory() {
        return this.app_use_memory;
    }

    public void setApp_use_memory(int i) {
        this.app_use_memory = i;
    }

    private String getAndroid(Activity activity) {
        String androidId = DeviceInfo.getInstance().getAndroidId();
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setAndroidId(androidId);
        return androidId;
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

    private String sign(Object obj) {
        TreeMap<String, Object> treeMap = toTreeMap(obj);
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, Object> entry : treeMap.entrySet()) {
            String string = entry.getValue().toString();
            String key = entry.getKey();
            if (!TextUtils.isEmpty(string)) {
                if (!key.equals("event") && !key.equals("rst_code") && !key.equals("event_sequence") && !key.equals("app_use_memory") && !key.equals("cli_total_rom_memory")) {
                    stringBuffer.append(entry.getKey());
                    stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    stringBuffer.append(string);
                    stringBuffer.append("&");
                } else if (key.equals("cli_total_rom_memory")) {
                    Double dValueOf = Double.valueOf(string);
                    stringBuffer.append(entry.getKey());
                    stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    stringBuffer.append(dValueOf.longValue());
                    stringBuffer.append("&");
                } else {
                    Double dValueOf2 = Double.valueOf(string);
                    stringBuffer.append(entry.getKey());
                    stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    stringBuffer.append(dValueOf2.intValue());
                    stringBuffer.append("&");
                }
            }
        }
        stringBuffer.append("0a1b70067129eb9835b27b79d026b95c");
        Log.d(HostConstant.ymn, "签名前是：" + stringBuffer.toString());
        return Md5Utils.md5(stringBuffer.toString());
    }

    private TreeMap<String, Object> toTreeMap(Object obj) {
        try {
            return (TreeMap) UtilsSdk.getGsonUtils().fromJson(UtilsSdk.getGsonUtils().toJson(obj), TreeMap.class);
        } catch (Exception unused) {
            return new TreeMap<>();
        }
    }

    public String toString() {
        this.sign = sign(this);
        return UtilsSdk.getGsonUtils().toJson(this);
    }
}
