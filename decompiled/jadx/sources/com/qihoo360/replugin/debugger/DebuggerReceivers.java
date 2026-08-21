package com.qihoo360.replugin.debugger;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.text.TextUtils;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DebuggerReceivers {
    private static final String TAG = "DebugReceivers";
    private String actionInstall;
    private String actionInstallWithPN;
    private String actionStartActivity;
    private String actionUninstall;
    private String packageName;
    private BroadcastReceiver sDebugerReceiver;
    private final String BR_LOGO = ".replugin";
    private final String BR_POSTFIX_INSTALL = ".install";
    private final String BR_POSTFIX_INSTALL_WITH_PN = ".install_with_pn";
    private final String BR_POSTFIX_UNINSTALL = ".uninstall";
    private final String BR_POSTFIX_ACTIVITY = ".start_activity";
    private final String PARAM_PATH = "path";
    private final String PARAM_IMMEDIATELY = "immediately";
    private final String PARAM_PLUGIN = IPluginManager.KEY_PLUGIN;
    private final String PARAM_ACTIVITY = "activity";

    public boolean registerReceivers(Context context) {
        if (this.sDebugerReceiver != null) {
            return true;
        }
        if (context == null) {
            return false;
        }
        this.packageName = context.getPackageName();
        this.actionInstall = this.packageName + ".replugin.install";
        this.actionUninstall = this.packageName + ".replugin.uninstall";
        this.actionInstallWithPN = this.packageName + ".replugin.install_with_pn";
        this.actionStartActivity = this.packageName + ".replugin.start_activity";
        this.sDebugerReceiver = new DebugerReceiver();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(this.actionInstall);
        intentFilter.addAction(this.actionUninstall);
        intentFilter.addAction(this.actionInstallWithPN);
        intentFilter.addAction(this.actionStartActivity);
        context.registerReceiver(this.sDebugerReceiver, intentFilter);
        return true;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    class DebugerReceiver extends BroadcastReceiver {
        DebugerReceiver() {
        }

        private boolean doActionInstall(Context context, Intent intent) {
            onInstallByApk(intent.getStringExtra("path"), TextUtils.equals(intent.getStringExtra("immediately"), "true"));
            return true;
        }

        private boolean doActionUninstall(Context context, Intent intent) {
            String stringExtra = intent.getStringExtra(IPluginManager.KEY_PLUGIN);
            if (TextUtils.isEmpty(stringExtra)) {
                return false;
            }
            return RePlugin.uninstall(stringExtra);
        }

        private boolean doActionInstallWithPN(Context context, Intent intent) {
            onInstallByPn(intent.getStringExtra("path"), TextUtils.equals(intent.getStringExtra("immediately"), "true"));
            return true;
        }

        private boolean doActionStartActivity(Context context, Intent intent) {
            String stringExtra = intent.getStringExtra(IPluginManager.KEY_PLUGIN);
            if (TextUtils.isEmpty(stringExtra)) {
                return false;
            }
            return onStartActivity(context, stringExtra, intent.getStringExtra("activity"));
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (!TextUtils.isEmpty(action) && RePlugin.isCurrentPersistentProcess()) {
                if (!action.equals(DebuggerReceivers.this.actionInstall)) {
                    if (!action.equals(DebuggerReceivers.this.actionUninstall)) {
                        if (!action.equals(DebuggerReceivers.this.actionInstallWithPN)) {
                            if (action.equals(DebuggerReceivers.this.actionStartActivity)) {
                                doActionStartActivity(context, intent);
                                return;
                            }
                            return;
                        }
                        doActionInstallWithPN(context, intent);
                        return;
                    }
                    doActionUninstall(context, intent);
                    return;
                }
                doActionInstall(context, intent);
            }
        }

        private boolean onInstallByApk(String str, boolean z) {
            return onInstall(str, z, false);
        }

        private boolean onInstallByPn(String str, boolean z) {
            String strConvertToPnFile = RePlugin.convertToPnFile(str);
            if (TextUtils.isEmpty(strConvertToPnFile)) {
                if (LogDebug.LOG) {
                    LogDebug.e(DebuggerReceivers.TAG, "onInstallByPn: Error! path=" + strConvertToPnFile);
                }
                return false;
            }
            return onInstall(strConvertToPnFile, z, false);
        }

        private boolean onInstall(String str, boolean z, boolean z2) {
            PluginInfo pluginInfoInstall = RePlugin.install(str, z2);
            if (pluginInfoInstall != null) {
                if (LogDebug.LOG) {
                    LogDebug.i(DebuggerReceivers.TAG, "onInstall: Install Success! cur=" + RePlugin.getPluginInfo(pluginInfoInstall.getName()));
                }
                if (!z) {
                    return false;
                }
                if (RePlugin.preload(pluginInfoInstall)) {
                    if (!LogDebug.LOG) {
                        return true;
                    }
                    LogDebug.i(DebuggerReceivers.TAG, "onInstall: Preload Success! pn=" + pluginInfoInstall.getName());
                    return true;
                }
                if (!LogDebug.LOG) {
                    return false;
                }
                LogDebug.e(DebuggerReceivers.TAG, "onInstall: Preload Error! pn=" + pluginInfoInstall.getName());
                return false;
            }
            if (!LogDebug.LOG) {
                return false;
            }
            LogDebug.e(DebuggerReceivers.TAG, "onInstall: Install Error! path=" + str);
            return false;
        }

        private boolean onStartActivity(Context context, String str, String str2) {
            if (TextUtils.isEmpty(str2)) {
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                return RePlugin.startActivity(context, intent, str, null);
            }
            return RePlugin.startActivity(context, RePlugin.createIntent(str, str2));
        }
    }
}
