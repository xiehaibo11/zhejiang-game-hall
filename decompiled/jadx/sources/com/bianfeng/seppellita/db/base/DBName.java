package com.bianfeng.seppellita.db.base;

import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;

/* JADX INFO: loaded from: classes.dex */
public class DBName {
    private static String[] old_db_name = {"_seppellita.db", "_seppellita_v1.db"};
    public static String db_name = AppContext.getInstance().getPkgName() + "_seppellita.db";
    public static String DB_TABLE_DATA = "db_seppellita_data";
}
