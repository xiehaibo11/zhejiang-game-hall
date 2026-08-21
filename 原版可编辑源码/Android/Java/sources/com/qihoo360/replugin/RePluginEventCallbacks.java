package com.qihoo360.replugin;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginEventCallbacks {
    protected final Context mContext;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public enum InstallResult {
        SUCCEED,
        V5_FILE_BUILD_FAIL,
        V5_FILE_UPDATE_FAIL,
        READ_PKG_INFO_FAIL,
        VERIFY_SIGN_FAIL,
        VERIFY_VER_FAIL,
        COPY_APK_FAIL
    }

    public void onActivityDestroyed(Activity activity) {
    }

    public void onBinderReleased() {
    }

    public void onInstallPluginFailed(String str, InstallResult installResult) {
    }

    public void onInstallPluginStepInfo(String str, boolean z) {
    }

    public void onInstallPluginSucceed(PluginInfo pluginInfo) {
    }

    public void onPrepareAllocPitActivity(Intent intent) {
    }

    public void onPrepareStartPitActivity(Context context, Intent intent, Intent intent2) {
    }

    public void onStartActivityCompleted(String str, String str2, boolean z) {
    }

    public RePluginEventCallbacks(Context context) {
        this.mContext = context;
    }
}
