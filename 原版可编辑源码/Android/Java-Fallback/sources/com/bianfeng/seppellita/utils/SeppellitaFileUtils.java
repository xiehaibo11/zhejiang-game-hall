package com.bianfeng.seppellita.utils;

public class SeppellitaFileUtils {
    public SeppellitaFileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void delFile() {
            java.lang.String r0 = com.bianfeng.seppellita.db.base.DBName.db_name
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.removeInsideFile(r0)
            return
    }

    public static java.lang.String getDbPath(java.lang.String r0) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.getInsideFilePath(r0)
            return r0
    }
}
