package com.bianfeng.seppellita.utils;

public class SeppellitaSharedPreferencesUtils {
    private static java.lang.String delBD = "seppellita_delbd";
    private static java.lang.String isNew = "seppellita_is_new_user_";
    private static java.lang.String seppellita_aaid = "seppellita_aaid";
    private static java.lang.String seppellita_oaid = "seppellita_oaid";
    private static java.lang.String seppellita_vaid = "seppellita_vaid";

    static {
            return
    }

    public SeppellitaSharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAaid() {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.seppellita_aaid     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static int getDelDb() {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.delBD
            int r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getInt(r0)
            return r0
    }

    public static boolean getIsNew() {
            r0 = 0
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.isNew     // Catch: java.lang.Exception -> L11
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r1)     // Catch: java.lang.Exception -> L11
            if (r1 == 0) goto La
            return r0
        La:
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.isNew     // Catch: java.lang.Exception -> L11
            r2 = 1
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r1, r2)     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static java.lang.String getOaid() {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.seppellita_oaid     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static java.lang.String getVaid() {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.seppellita_vaid     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static void putDelDb(int r1) {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.delBD     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L5
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L5
        L5:
            return
    }

    public static void saveAaid(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.seppellita_aaid     // Catch: java.lang.Exception -> L5
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    public static void saveOaid(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.seppellita_oaid     // Catch: java.lang.Exception -> L5
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    public static void saveVaid(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.seppellita_vaid     // Catch: java.lang.Exception -> L5
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L5
        L5:
            return
    }
}
