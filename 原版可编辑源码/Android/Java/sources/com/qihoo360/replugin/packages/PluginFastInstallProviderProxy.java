package com.qihoo360.replugin.packages;

import android.content.ContentProviderClient;
import android.content.ContentResolver;
import android.content.Context;
import android.os.RemoteException;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginFastInstallProviderProxy {
    private static final byte[] LOCK = new byte[0];
    private static final String TAG = "PluginFastInstallPr";
    private static ContentProviderClient sProvider;

    public static boolean install(Context context, PluginInfo pluginInfo) {
        if (pluginInfo.isDexExtracted()) {
            if (LogDebug.LOG) {
                LogDebug.w(TAG, "install: Already loaded, no need to install. pi=" + pluginInfo);
            }
            return true;
        }
        ContentProviderClient provider = getProvider(context);
        if (provider == null) {
            return false;
        }
        try {
            int iUpdate = provider.update(PluginFastInstallProvider.CONTENT_URI, PluginFastInstallProvider.makeInstallValues(pluginInfo), PluginFastInstallProvider.SELECTION_INSTALL, null);
            if (LogDebug.LOG) {
                LogDebug.i(TAG, "install: Install. pi=" + pluginInfo + "; result=" + iUpdate);
            }
            return iUpdate > 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    private static ContentProviderClient getProvider(Context context) {
        ContentProviderClient contentProviderClient = sProvider;
        if (contentProviderClient != null) {
            return contentProviderClient;
        }
        synchronized (LOCK) {
            if (sProvider != null) {
                return sProvider;
            }
            ContentResolver contentResolver = context.getContentResolver();
            if (contentResolver == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "pipp.gp: cr n");
                return null;
            }
            ContentProviderClient contentProviderClientAcquireContentProviderClient = contentResolver.acquireContentProviderClient(PluginFastInstallProvider.CONTENT_URI);
            if (contentProviderClientAcquireContentProviderClient == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "pipp.gp: cpc n");
                return null;
            }
            sProvider = contentProviderClientAcquireContentProviderClient;
            return contentProviderClientAcquireContentProviderClient;
        }
    }
}
