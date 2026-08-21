package com.bianfeng.seppellita.utils;

import com.bianfeng.seppellita.db.base.DBName;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;

/* JADX INFO: loaded from: classes.dex */
public class SeppellitaFileUtils {
    public static String getDbPath(String str) {
        return FileUtils.getInsideFilePath(str);
    }

    public static void delFile() {
        FileUtils.removeInsideFile(DBName.db_name);
    }
}
