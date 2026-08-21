package com.qihoo360.loader2.sp;

import android.os.Bundle;
import android.os.RemoteException;
import com.qihoo360.loader2.sp.IPref;
import com.qihoo360.replugin.helper.LogDebug;
import java.util.HashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class PrefImpl extends IPref.Stub {
    HashMap<String, Bundle> mBundles = new HashMap<>();

    private Bundle load(String str) {
        Bundle bundle;
        synchronized (this.mBundles) {
            bundle = this.mBundles.get(str);
            if (bundle == null) {
                bundle = new Bundle();
                this.mBundles.put(str, bundle);
            }
        }
        return bundle;
    }

    @Override
    public String get(String str, String str2, String str3) throws RemoteException {
        Bundle bundleLoad = load(str);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "get: category=" + str + " bundle=" + bundleLoad + " key=" + str2);
        }
        return bundleLoad.containsKey(str2) ? bundleLoad.getString(str2) : str3;
    }

    @Override
    public void set(String str, String str2, String str3) throws RemoteException {
        Bundle bundleLoad = load(str);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "set: category=" + str + " bundle=" + bundleLoad + " key=" + str2 + " value=" + str3);
        }
        bundleLoad.putString(str2, str3);
    }

    @Override
    public Bundle getAll(String str) throws RemoteException {
        Bundle bundleLoad = load(str);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "getAll: category=" + str + " bundle=" + bundleLoad);
        }
        return bundleLoad;
    }
}
