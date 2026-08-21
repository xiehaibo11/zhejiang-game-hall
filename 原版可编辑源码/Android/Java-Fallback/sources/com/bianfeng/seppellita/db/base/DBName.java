package com.bianfeng.seppellita.db.base;

public class DBName {
    public static java.lang.String DB_TABLE_DATA;
    public static java.lang.String db_name;
    private static java.lang.String[] old_db_name;

    static {
            java.lang.String r0 = "_seppellita.db"
            java.lang.String r1 = "_seppellita_v1.db"
            java.lang.String[] r1 = new java.lang.String[]{r0, r1}
            com.bianfeng.seppellita.db.base.DBName.old_db_name = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r2 = r2.getPkgName()
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.seppellita.db.base.DBName.db_name = r0
            java.lang.String r0 = "db_seppellita_data"
            com.bianfeng.seppellita.db.base.DBName.DB_TABLE_DATA = r0
            return
    }

    public DBName() {
            r0 = this;
            r0.<init>()
            return
    }
}
