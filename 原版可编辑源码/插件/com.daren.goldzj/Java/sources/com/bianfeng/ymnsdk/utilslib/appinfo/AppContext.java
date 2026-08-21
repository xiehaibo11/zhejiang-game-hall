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
            this.pi = this.pm.getPackageInfo(this.pkgName, 0);
            this.appId = getMetaDataValueInt(KEY_SDK_APP_ID);
            this.identify_id = getMetaDataValueInt(KEY_CONFIG_ID);
            this.deviceType = getMetaDataValueString(KEY_OS_TYPE);
            this.verName = this.pi.versionName;
            this.verCode = this.pi.versionCode + "";
            this.mConfiguration = context.getResources().getConfiguration();
            this.appName = this.pm.getApplicationLabel(this.pi.applicationInfo).toString();
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
                this.channelId = getMetaDataValueString(KEY_CHANNEL_ID_FIX);
            }
        } catch (Exception unused) {
            this.channelId = "";
        }
    }

    public String getApkPath(Context context) {
        try {
            return context.getApplicationInfo().sourceDir;
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getChannelId() {
        return this.channelId;
    }

    public String getMetaDataValueString(String str) throws YmnException {
        try {
            Bundle bundle = this.pm.getApplicationInfo(this.pkgName, 128).metaData;
            if (bundle != null && bundle.containsKey(str)) {
                return String.valueOf(bundle.get(str));
            }
            return null;
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public int getMetaDataValueInt(String str) throws YmnException {
        try {
            Bundle bundle = this.pm.getApplicationInfo(this.pkgName, 128).metaData;
            if (bundle != null && bundle.containsKey(str)) {
                return bundle.getInt(str);
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
            return this.pm.getActivityInfo(activity.getComponentName(), 128).screenOrientation;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public boolean isLand(Activity activity) {
        int activityOrientation = getActivityOrientation(activity);
        Configuration configuration = this.mConfiguration;
        return activityOrientation == 2;
    }

    public void setAppId(int i) {
        this.appId = i;
    }

    public void setIdentify_id(int i) {
        this.identify_id = i;
    }
}
