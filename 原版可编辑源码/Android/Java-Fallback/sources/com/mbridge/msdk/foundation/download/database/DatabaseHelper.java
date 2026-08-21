package com.mbridge.msdk.foundation.download.database;

public class DatabaseHelper implements com.mbridge.msdk.foundation.download.database.IDatabaseHelper {
    private volatile android.database.sqlite.SQLiteDatabase database;
    private final com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper databaseOpenHelper;
    private final android.os.Handler handler;
    private final java.lang.String tableName;










    public DatabaseHelper(android.content.Context r1, android.os.Handler r2, com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r3) {
            r0 = this;
            r0.<init>()
            r0.handler = r2
            r0.databaseOpenHelper = r3
            com.mbridge.msdk.foundation.download.core.GlobalComponent r1 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            java.lang.String r1 = r1.getDatabaseTableName()
            r0.tableName = r1
            return
    }

    static android.database.sqlite.SQLiteDatabase access$000(com.mbridge.msdk.foundation.download.database.DatabaseHelper r0) {
            android.database.sqlite.SQLiteDatabase r0 = r0.database
            return r0
    }

    static android.database.sqlite.SQLiteDatabase access$002(com.mbridge.msdk.foundation.download.database.DatabaseHelper r0, android.database.sqlite.SQLiteDatabase r1) {
            r0.database = r1
            return r1
    }

    static com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper access$100(com.mbridge.msdk.foundation.download.database.DatabaseHelper r0) {
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r0 = r0.databaseOpenHelper
            return r0
    }

    static java.lang.String access$200(com.mbridge.msdk.foundation.download.database.DatabaseHelper r0) {
            java.lang.String r0 = r0.tableName
            return r0
    }

    @Override
    public void clear() {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$9 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$9
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    @Override
    public void find(java.lang.String r3, java.lang.String r4, com.mbridge.msdk.foundation.download.database.IDatabaseHelper.IDatabaseListener r5) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$1 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$1
            r1.<init>(r2, r5, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    public java.util.List<com.mbridge.msdk.foundation.download.database.DownloadModel> findAll() {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r4.database     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            boolean r2 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r2)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            if (r2 == 0) goto L16
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r2 = r4.databaseOpenHelper     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            r4.database = r2     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
        L16:
            android.database.sqlite.SQLiteDatabase r2 = r4.database     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            boolean r2 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r2)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            if (r2 != 0) goto L53
            android.database.sqlite.SQLiteDatabase r2 = r4.database     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            boolean r2 = r2.isOpen()     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            if (r2 != 0) goto L27
            goto L53
        L27:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            r2.<init>()     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            java.lang.String r3 = "SELECT * FROM "
            r2.append(r3)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            java.lang.String r3 = r4.tableName     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            r2.append(r3)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            android.database.Cursor r1 = r4.rawQuery(r2, r1)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            if (r1 == 0) goto L4e
        L40:
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            if (r2 == 0) goto L4e
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r1)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            r0.add(r2)     // Catch: java.lang.Exception -> L54 java.lang.Throwable -> L5d
            goto L40
        L4e:
            if (r1 == 0) goto L53
            r1.close()
        L53:
            return r0
        L54:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L5d
            if (r3 == 0) goto L5c
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L5d
        L5c:
            return r0
        L5d:
            if (r1 == 0) goto L62
            r1.close()
        L62:
            return r0
    }

    @Override
    public void findByDownloadUrl(java.lang.String r3, com.mbridge.msdk.foundation.download.database.IDatabaseHelper.IDatabaseListener r4) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$2 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$2
            r1.<init>(r2, r4, r3)
            r0.post(r1)
            return
    }

    @Override
    public java.util.List<com.mbridge.msdk.foundation.download.database.DownloadModel> getUnwantedModels(long r6) {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r5.database     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            boolean r2 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            if (r2 == 0) goto L16
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r2 = r5.databaseOpenHelper     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            android.database.sqlite.SQLiteDatabase r2 = r2.getWritableDatabase()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r5.database = r2     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
        L16:
            android.database.sqlite.SQLiteDatabase r2 = r5.database     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            boolean r2 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            if (r2 != 0) goto L6f
            android.database.sqlite.SQLiteDatabase r2 = r5.database     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            boolean r2 = r2.isOpen()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            if (r2 != 0) goto L27
            goto L6f
        L27:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            long r2 = r2 - r6
            android.database.sqlite.SQLiteDatabase r6 = r5.database     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r7.<init>()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.String r4 = "SELECT * FROM "
            r7.append(r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.String r4 = r5.tableName     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r7.append(r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.String r4 = " WHERE "
            r7.append(r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.String r4 = "last_modified_time"
            r7.append(r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.String r4 = " <= "
            r7.append(r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r7.append(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            android.database.Cursor r1 = r6.rawQuery(r7, r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            if (r1 == 0) goto L6c
            boolean r6 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            if (r6 == 0) goto L6c
        L5f:
            com.mbridge.msdk.foundation.download.database.DownloadModel r6 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r0.add(r6)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            boolean r6 = r1.moveToNext()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            if (r6 != 0) goto L5f
        L6c:
            if (r1 == 0) goto L7f
            goto L7c
        L6f:
            return r0
        L70:
            r6 = move-exception
            goto L80
        L72:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L70
            if (r7 == 0) goto L7a
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L70
        L7a:
            if (r1 == 0) goto L7f
        L7c:
            r1.close()
        L7f:
            return r0
        L80:
            if (r1 == 0) goto L85
            r1.close()
        L85:
            throw r6
    }

    @Override
    public void insert(com.mbridge.msdk.foundation.download.database.DownloadModel r3) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$3 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$3
            r1.<init>(r2, r3)
            r0.postAtFrontOfQueue(r1)
            return
    }

    @Override
    public android.database.Cursor rawQuery(java.lang.String r3, java.lang.String[] r4) {
            r2 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r2.database     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            boolean r1 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r1)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            if (r1 == 0) goto L11
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r1 = r2.databaseOpenHelper     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            r2.database = r1     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
        L11:
            android.database.sqlite.SQLiteDatabase r1 = r2.database     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            boolean r1 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r1)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            if (r1 != 0) goto L41
            android.database.sqlite.SQLiteDatabase r1 = r2.database     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            boolean r1 = r1.isOpen()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            if (r1 != 0) goto L22
            goto L41
        L22:
            android.database.sqlite.SQLiteDatabase r1 = r2.database     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            r1.beginTransaction()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            android.database.sqlite.SQLiteDatabase r1 = r2.database     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            android.database.Cursor r3 = r1.rawQuery(r3, r4)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            android.database.sqlite.SQLiteDatabase r4 = r2.database     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            r4.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
            android.database.sqlite.SQLiteDatabase r4 = r2.database     // Catch: java.lang.Throwable -> L38
            r4.endTransaction()     // Catch: java.lang.Throwable -> L38
            goto L40
        L38:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L40
            r4.printStackTrace()
        L40:
            return r3
        L41:
            android.database.sqlite.SQLiteDatabase r3 = r2.database     // Catch: java.lang.Throwable -> L47
            r3.endTransaction()     // Catch: java.lang.Throwable -> L47
            goto L4f
        L47:
            r3 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L4f
            r3.printStackTrace()
        L4f:
            return r0
        L50:
            r3 = move-exception
            goto L69
        L52:
            r3 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L50
            if (r4 == 0) goto L5a
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L50
        L5a:
            android.database.sqlite.SQLiteDatabase r3 = r2.database     // Catch: java.lang.Throwable -> L60
            r3.endTransaction()     // Catch: java.lang.Throwable -> L60
            goto L68
        L60:
            r3 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L68
            r3.printStackTrace()
        L68:
            return r0
        L69:
            android.database.sqlite.SQLiteDatabase r4 = r2.database     // Catch: java.lang.Throwable -> L6f
            r4.endTransaction()     // Catch: java.lang.Throwable -> L6f
            goto L77
        L6f:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L77
            r4.printStackTrace()
        L77:
            throw r3
    }

    @Override
    public void remove(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$7 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$7
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    @Override
    public void remove(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$6 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$6
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    public void update(com.mbridge.msdk.foundation.download.database.DownloadModel r3, java.lang.String r4) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$4 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$4
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    public void updateProgress(java.lang.String r3, java.lang.String r4, com.mbridge.msdk.foundation.download.database.DownloadModel r5) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$5 r1 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$5
            r1.<init>(r2, r5, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    public void updateUnzipResource(java.lang.String r1, java.lang.String r2, long r3) {
            r0 = this;
            android.os.Handler r2 = r0.handler
            com.mbridge.msdk.foundation.download.database.DatabaseHelper$8 r3 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper$8
            r3.<init>(r0, r1)
            r2.post(r3)
            return
    }
}
