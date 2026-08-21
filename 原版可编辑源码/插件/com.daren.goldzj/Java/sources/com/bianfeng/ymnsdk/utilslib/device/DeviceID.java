package com.bianfeng.ymnsdk.utilslib.device;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import java.io.File;
import java.util.UUID;

public class DeviceID {
    private static final String SAVE_DEVICE_ID_FILE_PATH = ".tidbf";
    private static final String SAVE_DEVICE_ID_SP_PATH = "pref.deviceid.key.bf";
    private Context context;
    private String mid;
    private String deviceidSp_id = "deviceid_sp_id";
    private String ANDROID_ID = "ANDROID_ID";
    private int sdk_int = Build.VERSION.SDK_INT;

    protected String getAndroidId() {
        return null;
    }

    protected String getMac() {
        return null;
    }

    public DeviceID(Context context) {
        this.context = context;
    }

    public String getDevcieId() {
        if (!SharedPreferencesUtils.isAgreeprivacy()) {
            return "";
        }
        if (!TextUtils.isEmpty(this.mid)) {
            return this.mid;
        }
        this.mid = getLocalDeviceId();
        if (!TextUtils.isEmpty(this.mid) && !"02:00:00:00:00:00".equalsIgnoreCase(this.mid)) {
            return this.mid;
        }
        this.mid = generateDeviceId();
        saveLocalDeviceId(this.mid);
        return this.mid;
    }

    private void saveLocalDeviceId(String str) {
        saveDeviceId(str);
        saveFile(str);
    }

    private void saveFile(String str) {
        if (FileUtils.isSDCardMounted()) {
            try {
                FileUtils.saveFileToSDCardPublicDir(str.getBytes(), "ymn-data-fun.tidbf");
            } catch (Exception unused) {
            }
            try {
                FileUtils.saveFileToSDCardPrivateFilesDir(str.getBytes(), "ymn-data-fun.ymntidbf");
            } catch (Exception unused2) {
            }
        }
    }

    private void saveDeviceId(String str) {
        try {
            SharedPreferencesUtils.put(this.deviceidSp_id, str);
        } catch (YmnException e) {
            e.printStackTrace();
        }
    }

    private boolean isEmulator() {
        try {
            if (!Build.MODEL.equals("sdk")) {
                if (!Build.MODEL.equals("google_sdk")) {
                    return false;
                }
            }
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    private String generateDeviceId() {
        String strReplace = UUID.randomUUID().toString().replace("-", "");
        if (!TextUtils.isEmpty(strReplace)) {
            return strReplace;
        }
        return "T" + System.currentTimeMillis();
    }

    private String getLocalDeviceId() {
        String bfDataLocal = getBfDataLocal();
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

    private String getBfDataLocal() {
        String deviceidFromBfdataSp = getDeviceidFromBfdataSp();
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

    private String getDeviceidFromBfdataSp() {
        return SharedPreferencesUtils.getStringFromBfData(this.context, SAVE_DEVICE_ID_SP_PATH);
    }

    private String getDeviceidFromSp() {
        return SharedPreferencesUtils.getString(this.deviceidSp_id);
    }

    public String getDeviceUUID() {
        try {
            return new UUID(("3883756" + (Build.BOARD.length() % 10) + (Build.BRAND.length() % 10) + (Build.DEVICE.length() % 10) + (Build.HARDWARE.length() % 10) + (Build.ID.length() % 10) + (Build.MODEL.length() % 10) + (Build.PRODUCT.length() % 10) + (Build.SERIAL.length() % 10)).hashCode(), Build.SERIAL.hashCode()).toString();
        } catch (Exception unused) {
            return "";
        }
    }
}
