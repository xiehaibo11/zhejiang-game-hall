package com.bianfeng.ymnsdk.utilslib.appinfo;

import android.app.Activity;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.os.Bundle;
import android.text.TextUtils;
import com.bianfeng.afext.Afexter;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

public class AppContext {
    private static final String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final String KEY_CONFIG_ID = "TD_CONFIG_ID";
    private static final String KEY_OS_TYPE = "TD_CLIENT_TYPE";
    private static final String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    private static volatile AppContext appContext;
    private int appId;
    private String appName;
    private String channelId;
    private String deviceType;
    private int identify_id;
    private boolean isFirst;
    private Configuration mConfiguration;
    private PackageInfo pi;
    private String pkgName;
    private PackageManager pm;
    private String verCode;
    private String verName;

    private AppContext() {
    }

    public static AppContext getInstance() {
        if (appContext != null) goto L15;
        monitor-enter(AppContext.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (appContext != null) goto L9;
        appContext = new AppContext();     // Catch: Throwable -> L11
    L9:
        monitor-exit(AppContext.class);     // Catch: Throwable -> L11
    L15:
        return appContext;
    }

    public void init(Context r4) {
        if (this.isFirst == false) goto L11;
        return;
    L11:
        this.pkgName = r4.getPackageName();     // Catch: Exception -> L7
        this.pm = r4.getPackageManager();     // Catch: Exception -> L7
        this.pi = this.pm.getPackageInfo(this.pkgName, 0);     // Catch: Exception -> L7
        this.appId = getMetaDataValueInt(KEY_SDK_APP_ID);     // Catch: Exception -> L7
        this.identify_id = getMetaDataValueInt(KEY_CONFIG_ID);     // Catch: Exception -> L7
        this.deviceType = getMetaDataValueString(KEY_OS_TYPE);     // Catch: Exception -> L7
        this.verName = this.pi.versionName;     // Catch: Exception -> L7
        this.verCode = this.pi.versionCode + "";     // Catch: Exception -> L7
        this.mConfiguration = r4.getResources().getConfiguration();     // Catch: Exception -> L7
        this.appName = this.pm.getApplicationLabel(this.pi.applicationInfo).toString();     // Catch: Exception -> L7
        initChannel(r4);     // Catch: Exception -> L7
    L9:
        this.isFirst = true;
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
        goto L9
    }

    private void initChannel(Context r2) {
        String r22 = getApkPath(r2);
    L13:
        this.channelId = "";
        return;
    L4:
        if (TextUtils.isEmpty(r22) == true) goto L7;
        this.channelId = Afexter.readChannel(r22);     // Catch: Exception -> L13
        UtilsLogger.i("channelId from afexter " + this.channelId);     // Catch: Exception -> L13
    L7:
        if (TextUtils.isEmpty(this.channelId) == false) goto L10;
        this.channelId = getMetaDataValueString(KEY_CHANNEL_ID);     // Catch: Exception -> L13
    L10:
        if (TextUtils.isEmpty(this.channelId) == false) goto L17;
        this.channelId = getMetaDataValueString(KEY_CHANNEL_ID_FIX);     // Catch: Exception -> L13
        return;
    }

    public String getApkPath(Context r1) {
        return r1.getApplicationInfo().sourceDir;
    L4:
        return null;
    }

    public String getChannelId() {
        return this.channelId;
    }

    public String getMetaDataValueString(String r4) throws YmnException {
        Bundle r0 = this.pm.getApplicationInfo(this.pkgName, 128).metaData;     // Catch: Exception -> L11
        if (r0 != null) goto L5;
        return null;
    L5:
        if (r0.containsKey(r4) == false) goto L16;
        return String.valueOf(r0.get(r4));
    L16:
        return null;
    L11:
        e = move-exception;
        throw new YmnException(e);
    }

    public int getMetaDataValueInt(String r4) throws YmnException {
        Bundle r0 = this.pm.getApplicationInfo(this.pkgName, 128).metaData;     // Catch: Exception -> L11
        if (r0 != null) goto L5;
        return 0;
    L5:
        if (r0.containsKey(r4) == false) goto L16;
        return r0.getInt(r4);
    L16:
        return 0;
    L11:
        e = move-exception;
        throw new YmnException(e);
    }

    public String getPkgName() {
        return this.pkgName;
    }

    public String getVerCode() {
        return this.verCode;
    }

    public String getVerName() {
        return this.verName;
    }

    public int getAppId() {
        return this.appId;
    }

    public int getIdentify_id() {
        return this.identify_id;
    }

    public String getDeviceType() {
        return this.deviceType;
    }

    public String getAppName() {
        return this.appName;
    }

    public int getActivityOrientation(Activity r3) {
        return this.pm.getActivityInfo(r3.getComponentName(), 128).screenOrientation;
    L4:
        e = move-exception;
        e.printStackTrace();
        return 0;
    }

    public boolean isLand(Activity r2) {
        int r22 = getActivityOrientation(r2);
        Configuration r0 = this.mConfiguration;
        if (r22 != 2) goto L5;
        return true;
    L5:
        return false;
    }

    public void setAppId(int r1) {
        this.appId = r1;
    }

    public void setIdentify_id(int r1) {
        this.identify_id = r1;
    }
}
