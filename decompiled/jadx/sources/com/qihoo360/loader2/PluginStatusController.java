package com.qihoo360.loader2;

import android.app.Application;
import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginStatusController {
    private static final String KEY_STATUS_NAME_PREFIX = "ps-";
    private static final String PREF_FILE = "plugins";
    public static final int STATUS_DISABLE_BY_CLOUD = -2;
    public static final int STATUS_DISABLE_BY_CRASH = -1;
    public static final int STATUS_OK = 0;
    private static Application sAppContext;

    public static void setStatus(String str, int i, int i2) {
        if (i2 == 0) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PStatusC.setStatus(): Status is OK, Clear. pn=" + str + "; ver=" + i);
            }
            removeStatusToPref(sAppContext, str);
            return;
        }
        addStatusToPref(sAppContext, str, new PluginStatus(str, i, i2).toJsonString());
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PStatusC.setStatus(): Set Status, pn=" + str + "; ver=" + i + "; st=" + i2);
        }
    }

    public static int getStatus(String str) {
        return getStatus(str, -1);
    }

    public static int getStatus(String str, int i) {
        PluginStatus statusImpl = getStatusImpl(str);
        if (statusImpl == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PStatusC.getStatus(): ps is null. pn=" + str);
            }
            return 0;
        }
        if (i != -1 && statusImpl.getVersion() != i) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PStatusC.getStatus(): ver not match. ver=" + i + "; expect=" + statusImpl.getVersion() + "; pn=" + str);
            }
            return 0;
        }
        int status = statusImpl.getStatus();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PStatusC.getStatus(): ver match. ver=" + i + "; pn=" + str + "; st=" + status);
        }
        return status;
    }

    public static void clearStatus() {
        SharedPreferences sharedPreferences = sAppContext.getSharedPreferences(PREF_FILE, 0);
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        for (String str : sharedPreferences.getAll().keySet()) {
            if (str.contains(KEY_STATUS_NAME_PREFIX)) {
                editorEdit.remove(str);
            }
        }
        editorEdit.commit();
    }

    public static void setAppContext(Application application) {
        sAppContext = application;
    }

    private static PluginStatus getStatusImpl(String str) {
        String statusFromPref = getStatusFromPref(sAppContext, str);
        if (TextUtils.isEmpty(statusFromPref)) {
            return null;
        }
        try {
            return new PluginStatus(statusFromPref);
        } catch (JSONException e) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PStatusC.getStatus(): json err.", e);
            }
            removeStatusToPref(sAppContext, str);
            return null;
        }
    }

    private static void addStatusToPref(Context context, String str, String str2) {
        context.getSharedPreferences(PREF_FILE, 0).edit().putString(KEY_STATUS_NAME_PREFIX + str, str2).commit();
    }

    private static void removeStatusToPref(Context context, String str) {
        context.getSharedPreferences(PREF_FILE, 0).edit().remove(KEY_STATUS_NAME_PREFIX + str).commit();
    }

    private static String getStatusFromPref(Context context, String str) {
        return context.getSharedPreferences(PREF_FILE, 0).getString(KEY_STATUS_NAME_PREFIX + str, null);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class PluginStatus {
        JSONObject mJo;

        PluginStatus(String str, int i, int i2) {
            try {
                JSONObject jSONObject = new JSONObject();
                this.mJo = jSONObject;
                jSONObject.put("pn", str);
                this.mJo.put(PluginInfo.PI_VER, i);
                this.mJo.put("ctime", System.currentTimeMillis());
                this.mJo.put("st", i2);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }

        PluginStatus(String str) throws JSONException {
            this.mJo = new JSONObject(str);
        }

        public int getVersion() {
            return this.mJo.optInt(PluginInfo.PI_VER);
        }

        public long getChangeTime() {
            return this.mJo.optLong("ctime");
        }

        public int getStatus() {
            return this.mJo.optInt("st");
        }

        String toJsonString() {
            return this.mJo.toString();
        }
    }
}
