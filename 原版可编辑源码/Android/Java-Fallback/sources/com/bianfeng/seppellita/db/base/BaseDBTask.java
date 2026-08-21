package com.bianfeng.seppellita.db.base;

public class BaseDBTask implements com.bianfeng.seppellita.db.base.IDBTask {
    private android.database.sqlite.SQLiteDatabase database;
    private boolean init;
    private java.util.Map<java.lang.String, java.lang.String> selectMap;
    private java.lang.String tableName;
    private android.content.ContentValues values;

    protected BaseDBTask() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.init = r0
            java.lang.String r0 = "db_seppellita_bean"
            r1.tableName = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.selectMap = r0
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1.values = r0
            r1.createDb()     // Catch: java.lang.Exception -> L1c
            goto L20
        L1c:
            r0 = move-exception
            r0.printStackTrace()
        L20:
            return
    }

    private boolean autoCreateTable() throws com.bianfeng.seppellita.exception.SeppellitaException {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "_id "
            r0.append(r1)
            java.lang.String r1 = "INTEGER PRIMARY KEY autoincrement"
            r0.append(r1)
            java.lang.String r1 = ","
            r0.append(r1)
            java.lang.String r2 = "db_seppellita_data"
            r0.append(r2)
            java.lang.String r2 = " TEXT"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r3 = "db_seppellita_dataTime"
            r0.append(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "db_seppellita_time"
            r0.append(r1)
            java.lang.String r1 = " LONG"
            r0.append(r1)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r4.tableName
            r3 = 0
            r1[r3] = r2
            java.lang.String r0 = r0.toString()
            r2 = 1
            r1[r2] = r0
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS %s (%s)"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            android.database.sqlite.SQLiteDatabase r1 = r4.database     // Catch: java.lang.Exception -> L51
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L51
            return r2
        L51:
            r0 = move-exception
            com.bianfeng.seppellita.exception.SeppellitaException r1 = new com.bianfeng.seppellita.exception.SeppellitaException
            r1.<init>(r0)
            throw r1
    }

    private void createDb() throws com.bianfeng.seppellita.exception.SeppellitaException {
            r2 = this;
            r0 = 0
            java.lang.String r1 = com.bianfeng.seppellita.db.base.DBName.db_name     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaFileUtils.getDbPath(r1)     // Catch: java.lang.Exception -> Le
            android.database.sqlite.SQLiteDatabase r1 = android.database.sqlite.SQLiteDatabase.openOrCreateDatabase(r1, r0)     // Catch: java.lang.Exception -> Le
            r2.database = r1     // Catch: java.lang.Exception -> Le
            return
        Le:
            r1 = move-exception
            r2.database = r0
            com.bianfeng.seppellita.exception.SeppellitaException r0 = new com.bianfeng.seppellita.exception.SeppellitaException
            r0.<init>(r1)
            throw r0
    }

    private void initAfterDel() {
            r2 = this;
            int r0 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.getDelDb()
            com.bianfeng.seppellita.db.action.DelDbEnum r1 = com.bianfeng.seppellita.db.action.DelDbEnum.DELED
            int r1 = r1.ordinal()
            if (r0 != r1) goto L23
            r2.createDb()     // Catch: com.bianfeng.seppellita.exception.SeppellitaException -> L10
            goto L14
        L10:
            r0 = move-exception
            r0.printStackTrace()
        L14:
            r0 = 0
            r2.init = r0
            r2.init()
            com.bianfeng.seppellita.db.action.DelDbEnum r0 = com.bianfeng.seppellita.db.action.DelDbEnum.NO_NEED_DEL
            int r0 = r0.ordinal()
            com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.putDelDb(r0)
        L23:
            return
    }

    @Override
    public int delete(java.lang.String r8) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r7 = this;
            java.lang.Class<com.bianfeng.seppellita.db.base.BaseDBTask> r0 = com.bianfeng.seppellita.db.base.BaseDBTask.class
            monitor-enter(r0)
            android.database.sqlite.SQLiteDatabase r1 = r7.database     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r2 = r7.tableName     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r3 = "_id=?"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r5 = 0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r6.<init>()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r6.append(r8)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r8 = ""
            r6.append(r8)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r4[r5] = r8     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            int r8 = r1.delete(r2, r3, r4)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return r8
        L26:
            r8 = move-exception
            goto L34
        L28:
            r8 = move-exception
            java.lang.String r1 = "delete出现异常"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r1)     // Catch: java.lang.Throwable -> L26
            com.bianfeng.seppellita.exception.SeppellitaException r1 = new com.bianfeng.seppellita.exception.SeppellitaException     // Catch: java.lang.Throwable -> L26
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L26
            throw r1     // Catch: java.lang.Throwable -> L26
        L34:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r8
    }

    @Override
    public int deleteBeforeData(java.lang.String r8) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r7 = this;
            java.lang.Class<com.bianfeng.seppellita.db.base.BaseDBTask> r0 = com.bianfeng.seppellita.db.base.BaseDBTask.class
            monitor-enter(r0)
            android.database.sqlite.SQLiteDatabase r1 = r7.database     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r2 = r7.tableName     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r3 = "db_seppellita_dataTime < ?"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r5 = 0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r6.<init>()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r6.append(r8)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r8 = ""
            r6.append(r8)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r4[r5] = r8     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            int r8 = r1.delete(r2, r3, r4)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return r8
        L26:
            r8 = move-exception
            goto L34
        L28:
            r8 = move-exception
            java.lang.String r1 = "delete出现异常"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r1)     // Catch: java.lang.Throwable -> L26
            com.bianfeng.seppellita.exception.SeppellitaException r1 = new com.bianfeng.seppellita.exception.SeppellitaException     // Catch: java.lang.Throwable -> L26
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L26
            throw r1     // Catch: java.lang.Throwable -> L26
        L34:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r8
    }

    protected synchronized boolean init() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.init     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L1f
            android.database.sqlite.SQLiteDatabase r0 = r2.database     // Catch: java.lang.Throwable -> L23
            r1 = 0
            if (r0 != 0) goto Lc
            monitor-exit(r2)
            return r1
        Lc:
            android.database.sqlite.SQLiteDatabase r0 = r2.database     // Catch: java.lang.Throwable -> L23
            boolean r0 = r0.isOpen()     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L16
            monitor-exit(r2)
            return r1
        L16:
            r2.autoCreateTable()     // Catch: com.bianfeng.seppellita.exception.SeppellitaException -> L1d java.lang.Throwable -> L23
            r0 = 1
            r2.init = r0     // Catch: java.lang.Throwable -> L23
            goto L1f
        L1d:
            monitor-exit(r2)
            return r1
        L1f:
            boolean r0 = r2.init     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)
            return r0
        L23:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public java.lang.Long insert(java.lang.String r4, long r5, java.lang.String r7) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r3 = this;
            r3.initAfterDel()
            java.lang.Class<com.bianfeng.seppellita.db.base.BaseDBTask> r0 = com.bianfeng.seppellita.db.base.BaseDBTask.class
            monitor-enter(r0)
            android.content.ContentValues r1 = r3.values     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            r1.clear()     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.content.ContentValues r1 = r3.values     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r2 = "db_seppellita_data"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.content.ContentValues r4 = r3.values     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r1 = "db_seppellita_dataTime"
            r4.put(r1, r7)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.content.ContentValues r4 = r3.values     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r7 = "db_seppellita_time"
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            r4.put(r7, r5)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            android.database.sqlite.SQLiteDatabase r4 = r3.database     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.String r5 = r3.tableName     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            r6 = 0
            android.content.ContentValues r7 = r3.values     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            long r4 = r4.insert(r5, r6, r7)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L35 java.lang.Exception -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r4
        L35:
            r4 = move-exception
            goto L56
        L37:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r5.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r6 = "插入的异常"
            r5.append(r6)     // Catch: java.lang.Throwable -> L35
            java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L35
            r5.append(r6)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L35
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r5)     // Catch: java.lang.Throwable -> L35
            com.bianfeng.seppellita.exception.SeppellitaException r5 = new com.bianfeng.seppellita.exception.SeppellitaException     // Catch: java.lang.Throwable -> L35
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L35
            throw r5     // Catch: java.lang.Throwable -> L35
        L56:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            throw r4
    }

    @Override
    public java.util.List<java.lang.String> select() throws com.bianfeng.seppellita.exception.SeppellitaException {
            r11 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r11.selectMap     // Catch: java.lang.Exception -> L6b
            monitor-enter(r1)     // Catch: java.lang.Exception -> L6b
            java.util.Map<java.lang.String, java.lang.String> r2 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            r2.clear()     // Catch: java.lang.Throwable -> L68
            r11.initAfterDel()     // Catch: java.lang.Throwable -> L68
            android.database.sqlite.SQLiteDatabase r3 = r11.database     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = r11.tableName     // Catch: java.lang.Throwable -> L68
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            android.database.Cursor r2 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L68
        L1e:
            boolean r3 = r2.moveToNext()     // Catch: java.lang.Throwable -> L68
            if (r3 == 0) goto L63
            r3 = 0
            java.lang.String r3 = r2.getString(r3)     // Catch: java.lang.Throwable -> L68
            r4 = 1
            java.lang.String r4 = r2.getString(r4)     // Catch: java.lang.Throwable -> L68
            r5 = 2
            java.lang.String r5 = r2.getString(r5)     // Catch: java.lang.Throwable -> L68
            r6 = 3
            java.lang.String r6 = r2.getString(r6)     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, java.lang.String> r7 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            java.lang.String r8 = "id"
            r7.put(r8, r3)     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            java.lang.String r7 = "db_seppellita_data"
            r3.put(r7, r4)     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = "db_seppellita_dataTime"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = "db_seppellita_time"
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r3)     // Catch: java.lang.Throwable -> L68
            r0.add(r3)     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.selectMap     // Catch: java.lang.Throwable -> L68
            r3.clear()     // Catch: java.lang.Throwable -> L68
            goto L1e
        L63:
            r2.close()     // Catch: java.lang.Throwable -> L68
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L68
            return r0
        L68:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L68
            throw r0     // Catch: java.lang.Exception -> L6b
        L6b:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "select:"
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r1)
            com.bianfeng.seppellita.exception.SeppellitaException r1 = new com.bianfeng.seppellita.exception.SeppellitaException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.util.List<java.lang.String> select(java.lang.String r14, java.lang.String r15) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r13 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r13.initAfterDel()     // Catch: java.lang.Exception -> L76
            java.util.Map<java.lang.String, java.lang.String> r1 = r13.selectMap     // Catch: java.lang.Exception -> L76
            monitor-enter(r1)     // Catch: java.lang.Exception -> L76
            java.util.Map<java.lang.String, java.lang.String> r2 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            r2.clear()     // Catch: java.lang.Throwable -> L73
            r13.initAfterDel()     // Catch: java.lang.Throwable -> L73
            android.database.sqlite.SQLiteDatabase r3 = r13.database     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = r13.tableName     // Catch: java.lang.Throwable -> L73
            r5 = 0
            java.lang.String r6 = "db_seppellita_dataTime between ? and ?"
            r2 = 2
            java.lang.String[] r7 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L73
            r12 = 0
            r7[r12] = r14     // Catch: java.lang.Throwable -> L73
            r14 = 1
            r7[r14] = r15     // Catch: java.lang.Throwable -> L73
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r11 = "800"
            android.database.Cursor r15 = r3.query(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L73
        L2c:
            boolean r3 = r15.moveToNext()     // Catch: java.lang.Throwable -> L73
            if (r3 == 0) goto L6e
            java.lang.String r3 = r15.getString(r12)     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = r15.getString(r14)     // Catch: java.lang.Throwable -> L73
            java.lang.String r5 = r15.getString(r2)     // Catch: java.lang.Throwable -> L73
            r6 = 3
            java.lang.String r6 = r15.getString(r6)     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.String> r7 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            java.lang.String r8 = "id"
            r7.put(r8, r3)     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.String> r3 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            java.lang.String r7 = "db_seppellita_data"
            r3.put(r7, r4)     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.String> r3 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = "db_seppellita_dataTime"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.String> r3 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = "db_seppellita_time"
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.String> r3 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r3)     // Catch: java.lang.Throwable -> L73
            r0.add(r3)     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.String> r3 = r13.selectMap     // Catch: java.lang.Throwable -> L73
            r3.clear()     // Catch: java.lang.Throwable -> L73
            goto L2c
        L6e:
            r15.close()     // Catch: java.lang.Throwable -> L73
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L73
            return r0
        L73:
            r14 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L73
            throw r14     // Catch: java.lang.Exception -> L76
        L76:
            r14 = move-exception
            com.bianfeng.seppellita.exception.SeppellitaException r15 = new com.bianfeng.seppellita.exception.SeppellitaException
            r15.<init>(r14)
            throw r15
    }
}
