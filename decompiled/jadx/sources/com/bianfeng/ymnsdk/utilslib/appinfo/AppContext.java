package com.bianfeng.ymnsdk.utilslib.appinfo;

import android.app.Activity;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.os.Bundle;
import android.text.TextUtils;
import com.bianfeng.afext.Afexter;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

/* JADX INFO: loaded from: classes.dex */
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
        if (appContext == null) {
            synchronized (AppContext.class) {
                if (appContext == null) {
                    appContext = new AppContext();
                }
            }
        }
        return appContext;
    }

    public void init(Context context) {
        if (this.isFirst) {
            return;
        }
        try {
            this.pkgName = context.getPackageName();
            this.pm = context.getPackageManager();
            this.appId = getMetaDataValueInt(KEY_SDK_APP_ID);
            this.identify_id = getMetaDataValueInt(KEY_CONFIG_ID);
            this.deviceType = getMetaDataValueString(KEY_OS_TYPE);
            this.mConfiguration = context.getResources().getConfiguration();
            initChannel(context);
        } catch (Exception e) {
            e.printStackTrace();
        }
        this.isFirst = true;
    }

    private void initChannel(Context context) {
        String apkPath = getApkPath(context);
        try {
            if (!TextUtils.isEmpty(apkPath)) {
                this.channelId = Afexter.readChannel(apkPath);
                UtilsLogger.i("channelId from afexter " + this.channelId);
            }
            if (TextUtils.isEmpty(this.channelId)) {
                this.channelId = getMetaDataValueString(KEY_CHANNEL_ID);
            }
            if (TextUtils.isEmpty(this.channelId)) {
                this.channelId = getMetaDataValueString("channel_id");
            }
        } catch (Exception e) {
            this.channelId = "";
        }
    }

    public String getApkPath(Context context) {
        try {
            return context.getApplicationInfo().sourceDir;
        } catch (Throwable th) {
            return null;
        }
    }

    public String getChannelId() {
        return this.channelId;
    }

    public String getMetaDataValueString(String key) throws YmnException {
        try {
            ApplicationInfo ai = this.pm.getApplicationInfo(this.pkgName, 128);
            Bundle metaData = ai.metaData;
            if (metaData != null && metaData.containsKey(key)) {
                return String.valueOf(metaData.get(key));
            }
            return null;
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public int getMetaDataValueInt(String key) throws YmnException {
        try {
            ApplicationInfo ai = this.pm.getApplicationInfo(this.pkgName, 128);
            Bundle metaData = ai.metaData;
            if (metaData != null && metaData.containsKey(key)) {
                return metaData.getInt(key);
            }
            return 0;
        } catch (Exception e) {
            throw new YmnException(e);
        }
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

    public int getActivityOrientation(Activity activity) {
        try {
            ActivityInfo activityInfo = this.pm.getActivityInfo(activity.getComponentName(), 128);
            int screenOrientation = activityInfo.screenOrientation;
            return screenOrientation;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public boolean isLand(Activity activity) {
        int orientation = getActivityOrientation(activity);
        return orientation == 2;
    }

    public void setAppId(int appId) {
        this.appId = appId;
    }

    public void setIdentify_id(int identify_id) {
        this.identify_id = identify_id;
    }
}
