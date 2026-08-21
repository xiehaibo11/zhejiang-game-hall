package com.qihoo360.loader2;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import com.qihoo360.replugin.utils.Charsets;
import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.IOUtils;
import java.io.InputStream;
import java.util.HashMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginDesc {
    public static final String ACTION_UPDATE = "com.qihoo360.mobilesafe.plugin_desc_update";
    private static volatile boolean sChanged;
    private static volatile HashMap<String, PluginDesc> sMap;
    private static volatile BroadcastReceiver sUpdateReceiver;
    private String mDesc;
    private String mDisplay;
    private boolean mLarge;
    private String mPlugin;
    private static final String TAG = PluginDesc.class.getSimpleName();
    private static final boolean DEBUG = BuildConfig.DEBUG;
    private static final byte[] INSTANCE_LOCKER = new byte[0];
    private static final byte[] REG_RECEIVER_LOCKER = new byte[0];

    public static PluginDesc get(String str) {
        return getCurrentMap().get(str);
    }

    private static HashMap<String, PluginDesc> getCurrentMap() {
        registerReceiverIfNeeded();
        if (sMap != null && !sChanged) {
            return sMap;
        }
        synchronized (INSTANCE_LOCKER) {
            if (sMap != null && !sChanged) {
                return sMap;
            }
            if (DEBUG) {
                Log.d(TAG, "load(): Change, Ready to load");
            }
            sMap = new HashMap<>();
            load(PMF.getApplicationContext());
            sChanged = false;
            return sMap;
        }
    }

    public PluginDesc(String str) {
        this.mPlugin = str;
    }

    public String getPluginName() {
        return this.mPlugin;
    }

    public String getDisplayName() {
        if (!TextUtils.isEmpty(this.mDisplay)) {
            return this.mDisplay;
        }
        return this.mPlugin;
    }

    public String getDescription() {
        return this.mDesc;
    }

    public boolean isLarge() {
        return this.mLarge;
    }

    private static boolean load(Context context) throws Throwable {
        JSONArray jSONArrayLoadArray = loadArray(context);
        if (jSONArrayLoadArray == null) {
            return false;
        }
        for (int i = 0; i < jSONArrayLoadArray.length(); i++) {
            JSONObject jSONObjectOptJSONObject = jSONArrayLoadArray.optJSONObject(i);
            if (jSONObjectOptJSONObject != null) {
                String strOptString = jSONObjectOptJSONObject.optString("name");
                if (!TextUtils.isEmpty(strOptString)) {
                    PluginDesc pluginDesc = new PluginDesc(strOptString);
                    pluginDesc.mDisplay = jSONObjectOptJSONObject.optString("display");
                    pluginDesc.mDesc = jSONObjectOptJSONObject.optString("desc");
                    pluginDesc.mLarge = jSONObjectOptJSONObject.optBoolean("large");
                    sMap.put(strOptString, pluginDesc);
                }
            }
        }
        return true;
    }

    private static JSONArray loadArray(Context context) throws Throwable {
        Throwable th;
        InputStream inputStreamOpenLatestFile;
        try {
            inputStreamOpenLatestFile = RePlugin.getConfig().getCallbacks().openLatestFile(context, "plugins-list.json");
            if (inputStreamOpenLatestFile != null) {
                try {
                    try {
                        JSONArray jSONArray = new JSONArray(IOUtils.toString(inputStreamOpenLatestFile, Charsets.UTF_8));
                        CloseableUtils.closeQuietly(inputStreamOpenLatestFile);
                        return jSONArray;
                    } catch (Exception e) {
                        e = e;
                        if (DEBUG) {
                            Log.e(TAG, e.getMessage(), e);
                        }
                        CloseableUtils.closeQuietly(inputStreamOpenLatestFile);
                        return null;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    CloseableUtils.closeQuietly(inputStreamOpenLatestFile);
                    throw th;
                }
            }
        } catch (Exception e2) {
            e = e2;
            inputStreamOpenLatestFile = null;
        } catch (Throwable th3) {
            th = th3;
            inputStreamOpenLatestFile = null;
            CloseableUtils.closeQuietly(inputStreamOpenLatestFile);
            throw th;
        }
        CloseableUtils.closeQuietly(inputStreamOpenLatestFile);
        return null;
    }

    private static void registerReceiverIfNeeded() {
        if (sUpdateReceiver != null) {
            return;
        }
        synchronized (REG_RECEIVER_LOCKER) {
            if (sUpdateReceiver != null) {
                return;
            }
            sUpdateReceiver = new BroadcastReceiver() {
                @Override
                public void onReceive(Context context, Intent intent) {
                    if (PluginDesc.DEBUG) {
                        Log.d(PluginDesc.TAG, "Receiver.onReceive(): Mark change!");
                    }
                    boolean unused = PluginDesc.sChanged = true;
                    PluginDesc.getCurrentMap();
                }
            };
            LocalBroadcastManager.getInstance(PMF.getApplicationContext()).registerReceiver(sUpdateReceiver, new IntentFilter(ACTION_UPDATE));
        }
    }
}
