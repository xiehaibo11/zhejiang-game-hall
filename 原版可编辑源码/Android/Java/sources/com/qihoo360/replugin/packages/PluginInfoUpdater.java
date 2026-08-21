package com.qihoo360.replugin.packages;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.text.TextUtils;
import com.qihoo360.loader2.MP;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginInfoUpdater {
    public static final String ACTION_UNINSTALL_PLUGIN = "ACTION_UNINSTALL_PLUGIN";
    private static final String ACTION_UPDATE_INFO = "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO";
    private static final String TAG = "PluginInfoUpdater";

    public static void register(Context context) {
        LocalBroadcastManager.getInstance(context).registerReceiver(new UpdateReceiver(), new IntentFilter(ACTION_UPDATE_INFO));
    }

    static void updateIsUsed(Context context, String str, boolean z) {
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "updateIsUsed: Prepare to send broadcast, pn=" + str + "; used=" + z);
        }
        Intent intent = new Intent(ACTION_UPDATE_INFO);
        intent.putExtra("pn", str);
        intent.putExtra(PluginInfo.PI_USED, z);
        IPC.sendLocalBroadcast2AllSync(context, intent);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class UpdateReceiver extends BroadcastReceiver {
        private UpdateReceiver() {
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            if (TextUtils.equals(intent.getAction(), PluginInfoUpdater.ACTION_UPDATE_INFO)) {
                PluginInfoUpdater.onReceiveUpdateInfo(intent);
            }
        }
    }

    private static boolean onReceiveUpdateInfo(Intent intent) {
        PluginInfo plugin;
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "onReceiveUpdateInfo: in=" + intent);
        }
        String stringExtra = intent.getStringExtra("pn");
        if (TextUtils.isEmpty(stringExtra) || (plugin = MP.getPlugin(stringExtra, false)) == null) {
            return false;
        }
        if (!intent.hasExtra(PluginInfo.PI_USED)) {
            return true;
        }
        boolean booleanExtra = intent.getBooleanExtra(PluginInfo.PI_USED, false);
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "onReceiveUpdateInfo: pn=" + stringExtra + "; setIsUsed=" + booleanExtra);
        }
        plugin.setIsUsed(booleanExtra);
        return true;
    }
}
