package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RepluginSharedPreferencesUtils {
    public static final String REPLUGIN_LOG = "bianfeng_replugin_log";
    private static volatile RepluginSharedPreferencesUtils preferencesUtils;

    public static RepluginSharedPreferencesUtils getInstance() {
        if (preferencesUtils == null) {
            synchronized (RepluginSharedPreferencesUtils.class) {
                if (preferencesUtils == null) {
                    preferencesUtils = new RepluginSharedPreferencesUtils();
                }
            }
        }
        return preferencesUtils;
    }

    public void setPluginLog(String str) {
        try {
            SharedPreferencesUtils.put(REPLUGIN_LOG, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public String getPluginLog() {
        return SharedPreferencesUtils.getString(REPLUGIN_LOG);
    }
}
