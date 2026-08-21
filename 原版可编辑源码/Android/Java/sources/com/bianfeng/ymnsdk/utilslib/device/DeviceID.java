package com.bianfeng.ymnsdk.utilslib.device;

import android.content.Context;
import android.os.Build;
import android.provider.Settings;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.bianfeng.ymnsdk.utilslib.security.AESGCM256;
import com.xiaomi.mipush.sdk.Constants;
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

    private void saveLocalDeviceId(String deviceid) {
        saveDeviceId(deviceid);
        saveFile(deviceid);
    }

    private void saveFile(String deviceid) {
        if (FileUtils.isSDCardMounted()) {
            try {
                FileUtils.saveFileToSDCardPublicDir(deviceid.getBytes(), "ymn-data-fun.tidbf");
            } catch (Exception e) {
            }
            try {
                FileUtils.saveFileToSDCardPrivateFilesDir(deviceid.getBytes(), "ymn-data-fun.ymntidbf");
            } catch (Exception e2) {
            }
        }
    }

    private void saveDeviceId(String deviceid) {
        try {
            SharedPreferencesUtils.put(this.deviceidSp_id, deviceid);
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
        } catch (Exception e) {
            return false;
        }
    }

    private String generateDeviceId() {
        String deviceid = getAndroidId();
        if (TextUtils.isEmpty(deviceid) || "9774d56d682e549c".equals(deviceid)) {
            deviceid = getMac();
        }
        if (TextUtils.isEmpty(deviceid) || "02:00:00:00:00:00".equalsIgnoreCase(deviceid)) {
            deviceid = getDeviceUUID();
        }
        if (TextUtils.isEmpty(deviceid) || EnvironmentCompat.MEDIA_UNKNOWN.equalsIgnoreCase(deviceid)) {
            deviceid = UUID.randomUUID().toString().replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
        }
        if (TextUtils.isEmpty(deviceid)) {
            return "T" + System.currentTimeMillis();
        }
        return deviceid;
    }

    protected String getAndroidId() {
        String androidId = SharedPreferencesUtils.getString(this.ANDROID_ID);
        if (androidId == null || androidId.isEmpty()) {
            try {
                androidId = "bfdata_" + AESGCM256.encrypt(Settings.Secure.getString(this.context.getContentResolver(), "android_id"), "");
                SharedPreferencesUtils.put(this.ANDROID_ID, androidId);
                SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_androidid, androidId);
                return androidId;
            } catch (Exception e) {
                e.printStackTrace();
                return androidId;
            }
        }
        return androidId;
    }

    protected String getMac() {
        return null;
    }

    private String getLocalDeviceId() {
        String deviceidLocal = getBfDataLocal();
        if (!TextUtils.isEmpty(deviceidLocal)) {
            return deviceidLocal;
        }
        String deviceidLocal2 = getDeviceidFromSp();
        if (!TextUtils.isEmpty(deviceidLocal2)) {
            UtilsLogger.i("Local-df-sp->" + deviceidLocal2);
            return deviceidLocal2;
        }
        String deviceidLocal3 = getDeviceidFromFile();
        if (!TextUtils.isEmpty(deviceidLocal3)) {
            UtilsLogger.i("Local-file-sp->" + deviceidLocal3);
            return deviceidLocal3;
        }
        return null;
    }

    private String getBfDataLocal() {
        String mid = getDeviceidFromBfdataSp();
        if (!TextUtils.isEmpty(mid)) {
            UtilsLogger.i("bfdata-sp->" + mid);
            return mid;
        }
        try {
            mid = new String(FileUtils.loadFileFromSDCard(FileUtils.getSDCardBaseDir() + File.separator + SAVE_DEVICE_ID_FILE_PATH));
        } catch (Exception e) {
        }
        UtilsLogger.i("bfdata-file->" + mid);
        return mid;
    }

    private String getDeviceidFromFile() {
        String deviceid = null;
        try {
            if (FileUtils.isSDCardMounted()) {
                deviceid = new String(FileUtils.readFileToSDCardPublicDir("ymn-data-fun.tidbf"));
            }
            if (TextUtils.isEmpty(deviceid)) {
                String deviceid2 = new String(FileUtils.readFileToSDCardPrivateFilesDir("ymn-data-fun.ymntidbf"));
                return deviceid2;
            }
            return deviceid;
        } catch (Exception e) {
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
            String dev = "3883756" + (Build.BOARD.length() % 10) + (Build.BRAND.length() % 10) + (Build.DEVICE.length() % 10) + (Build.HARDWARE.length() % 10) + (Build.ID.length() % 10) + (Build.MODEL.length() % 10) + (Build.PRODUCT.length() % 10) + (Build.SERIAL.length() % 10);
            return new UUID(dev.hashCode(), Build.SERIAL.hashCode()).toString();
        } catch (Exception e) {
            return "";
        }
    }
}
