package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RepluginSharedPreferencesUtils {
    public static final java.lang.String REPLUGIN_LOG = "bianfeng_replugin_log";
    private static volatile com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils preferencesUtils;

    public RepluginSharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils getInstance() {
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r0 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.preferencesUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils> r0 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.class
            monitor-enter(r0)
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r1 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.preferencesUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r1 = new com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.preferencesUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r0 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.preferencesUtils
            return r0
    }

    public java.lang.String getPluginLog() {
            r1 = this;
            java.lang.String r0 = "bianfeng_replugin_log"
            java.lang.String r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public void setPluginLog(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "bianfeng_replugin_log"
            com.qihoo360.replugin.utils.SharedPreferencesUtils.put(r0, r2)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r2 = move-exception
            r2.printStackTrace()
        La:
            return
    }
}
