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
    private String ANDROID_ID;
    private Context context;
    private String deviceidSp_id;
    private String mid;
    private int sdk_int;

    protected String getAndroidId() {
        return null;
    }

    protected String getMac() {
        return null;
    }

    public DeviceID(Context r2) {
        this.deviceidSp_id = "deviceid_sp_id";
        this.ANDROID_ID = "ANDROID_ID";
        this.sdk_int = Build.VERSION.SDK_INT;
        this.context = r2;
    }

    public String getDevcieId() {
        if (SharedPreferencesUtils.isAgreeprivacy() == true) goto L7;
        return "";
    L7:
        if (TextUtils.isEmpty(this.mid) == false) goto L9;
        this.mid = getLocalDeviceId();
        if (TextUtils.isEmpty(this.mid) == false) goto L13;
    L16:
        this.mid = generateDeviceId();
        saveLocalDeviceId(this.mid);
        return this.mid;
    L13:
        if ("02:00:00:00:00:00".equalsIgnoreCase(this.mid) == true) goto L16;
        return this.mid;
    L9:
        return this.mid;
    }

    private void saveLocalDeviceId(String r1) {
        saveDeviceId(r1);
        saveFile(r1);
    }

    private void saveFile(String r3) {
        if (FileUtils.isSDCardMounted() == false) goto L13;
        FileUtils.saveFileToSDCardPublicDir(r3.getBytes(), "ymn-data-fun.tidbf");     // Catch: Exception -> L8
    L11:
        FileUtils.saveFileToSDCardPrivateFilesDir(r3.getBytes(), "ymn-data-fun.ymntidbf");     // Catch: Exception -> L7
        return;
    L14:
        return;
    }

    private void saveDeviceId(String r2) {
        SharedPreferencesUtils.put(this.deviceidSp_id, r2);     // Catch: YmnException -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    private boolean isEmulator() {
        if (Build.MODEL.equals("sdk") == true) goto L7;
        if (Build.MODEL.equals("google_sdk") == true) goto L7;
        return false;
    L7:
        return true;
    L13:
        return false;
    }

    private String generateDeviceId() {
        String r0 = UUID.randomUUID().toString().replace("-", "");
        if (TextUtils.isEmpty(r0) == true) goto L5;
        return r0;
    L5:
        return "T" + System.currentTimeMillis();
    }

    private String getLocalDeviceId() {
        String r0 = getBfDataLocal();
        if (TextUtils.isEmpty(r0) == true) goto L5;
        return r0;
    L5:
        String r02 = getDeviceidFromSp();
        if (TextUtils.isEmpty(r02) == true) goto L9;
        UtilsLogger.i("Local-df-sp->" + r02);
        return r02;
    L9:
        String r03 = getDeviceidFromFile();
        if (TextUtils.isEmpty(r03) == true) goto L13;
        UtilsLogger.i("Local-file-sp->" + r03);
        return r03;
    L13:
        return null;
    }

    private String getBfDataLocal() {
        String r0 = getDeviceidFromBfdataSp();
        if (TextUtils.isEmpty(r0) == true) goto L11;
        UtilsLogger.i("bfdata-sp->" + r0);
        return r0;
    L11:
        r0 = new String(FileUtils.loadFileFromSDCard(FileUtils.getSDCardBaseDir() + File.separator + SAVE_DEVICE_ID_FILE_PATH));     // Catch: Exception -> L10
    L8:
        UtilsLogger.i("bfdata-file->" + r0);
        return r0;
    }

    private String getDeviceidFromFile() {
    L11:
        return null;
    L4:
        if (FileUtils.isSDCardMounted() == false) goto L6;
        String r1 = new String(FileUtils.readFileToSDCardPublicDir("ymn-data-fun.tidbf"));     // Catch: Exception -> L11
    L8:
        if (TextUtils.isEmpty(r1) == false) goto L14;
        return new String(FileUtils.readFileToSDCardPrivateFilesDir("ymn-data-fun.ymntidbf"));
    L14:
        return r1;
    L6:
        r1 = null;
        goto L8
    }

    private String getDeviceidFromBfdataSp() {
        return SharedPreferencesUtils.getStringFromBfData(this.context, SAVE_DEVICE_ID_SP_PATH);
    }

    private String getDeviceidFromSp() {
        return SharedPreferencesUtils.getString(this.deviceidSp_id);
    }

    public String getDeviceUUID() {
        return new UUID(("3883756" + (Build.BOARD.length() % 10) + (Build.BRAND.length() % 10) + (Build.DEVICE.length() % 10) + (Build.HARDWARE.length() % 10) + (Build.ID.length() % 10) + (Build.MODEL.length() % 10) + (Build.PRODUCT.length() % 10) + (Build.SERIAL.length() % 10)).hashCode(), Build.SERIAL.hashCode()).toString();
    L4:
        return "";
    }
}
