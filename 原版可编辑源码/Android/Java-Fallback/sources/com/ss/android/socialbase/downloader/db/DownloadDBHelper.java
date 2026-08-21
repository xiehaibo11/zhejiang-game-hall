package com.ss.android.socialbase.downloader.db;

public class DownloadDBHelper extends android.database.sqlite.SQLiteOpenHelper {
    private static volatile com.ss.android.socialbase.downloader.db.DownloadDBHelper instance;
    private boolean tempDirSetted;

    private DownloadDBHelper() {
            r4 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r1 = "downloader.db"
            r2 = 0
            r3 = 15
            r4.<init>(r0, r1, r2, r3)
            r0 = 0
            r4.tempDirSetted = r0
            return
    }

    public static com.ss.android.socialbase.downloader.db.DownloadDBHelper getInstance() {
            com.ss.android.socialbase.downloader.db.DownloadDBHelper r0 = com.ss.android.socialbase.downloader.db.DownloadDBHelper.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.db.DownloadDBHelper> r0 = com.ss.android.socialbase.downloader.db.DownloadDBHelper.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.db.DownloadDBHelper r1 = com.ss.android.socialbase.downloader.db.DownloadDBHelper.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.db.DownloadDBHelper r1 = new com.ss.android.socialbase.downloader.db.DownloadDBHelper     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.db.DownloadDBHelper.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.db.DownloadDBHelper r0 = com.ss.android.socialbase.downloader.db.DownloadDBHelper.instance
            return r0
    }

    @Override
    public android.database.sqlite.SQLiteDatabase getReadableDatabase() {
            r3 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r1 = r3.tempDirSetted
            if (r1 != 0) goto L48
            if (r0 == 0) goto L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3f
            r1.<init>()     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = "/data/data/"
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L3f
            r1.append(r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r0 = "/database/main/"
            r1.append(r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L3f
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3f
            r1.<init>(r0)     // Catch: java.lang.Exception -> L3f
            boolean r0 = r1.exists()     // Catch: java.lang.Exception -> L3f
            if (r0 != 0) goto L32
            r1.mkdir()     // Catch: java.lang.Exception -> L3f
        L32:
            android.database.sqlite.SQLiteDatabase r0 = super.getReadableDatabase()     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = "PRAGMA temp_store_directory = tempDir"
            r0.execSQL(r1)     // Catch: java.lang.Exception -> L3f
            r0 = 1
            r3.tempDirSetted = r0     // Catch: java.lang.Exception -> L3f
            goto L43
        L3f:
            r0 = move-exception
            r0.printStackTrace()
        L43:
            android.database.sqlite.SQLiteDatabase r0 = super.getReadableDatabase()
            return r0
        L48:
            android.database.sqlite.SQLiteDatabase r0 = super.getReadableDatabase()
            return r0
    }

    @Override
    public void onConfigure(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            super.onConfigure(r3)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "disable_sqlite_wal"
            int r0 = r0.optInt(r1)
            if (r0 <= 0) goto L18
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 != r1) goto L18
            r3.disableWriteAheadLogging()
        L18:
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS downloader( _id INTEGER PRIMARY KEY, url TEXT, savePath TEXT, tempPath TEXT, name TEXT, chunkCount INTEGER, status INTEGER, curBytes INTEGER, totalBytes INTEGER, eTag TEXT, onlyWifi INTEGER, force INTEGER, retryCount INTEGER, extra TEXT, mimeType TEXT, title TEXT, notificationEnable INTEGER, notificationVisibility INTEGER, isFirstDownload INTEGER, isFirstSuccess INTEGER, needHttpsToHttpRetry INTEGER, downloadTime INTEGER, packageName TEXT, md5 TEXT, retryDelay INTEGER, curRetryTime INTEGER, retryDelayStatus INTEGER, defaultHttpServiceBackUp INTEGER, chunkRunnableReuse INTEGER, retryDelayTimeArray TEXT, chunkDowngradeRetry INTEGER, backUpUrlsStr TEXT, backUpUrlRetryCount INTEGER, realDownloadTime INTEGER, retryScheduleMinutes INTEGER, independentProcess INTEGER, auxiliaryJsonobjectString TEXT, iconUrl TEXT, appVersionCode INTEGER, taskId TEXT)"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS downloadChunk( _id INTEGER, chunkIndex INTEGER, startOffset INTEGER, curOffset INTEGER, endOffset INTEGER, chunkContentLen INTEGER, hostChunkIndex INTEGER )"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS segments( _id INTEGER PRIMARY KEY,info TEXT )"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onDowngrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            boolean r1 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r1 == 0) goto Lb
            java.lang.String r1 = "onDowngrade"
            com.ss.android.socialbase.downloader.logger.Logger.d(r1)
        Lb:
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            switch(r2) {
                case 1: goto L5;
                case 2: goto L19;
                case 3: goto L1e;
                case 4: goto L23;
                case 5: goto L2d;
                case 6: goto L37;
                case 7: goto L4b;
                case 8: goto L55;
                case 9: goto L5a;
                case 10: goto L5f;
                case 11: goto L7d;
                case 12: goto L82;
                case 13: goto L8c;
                case 14: goto L91;
                default: goto L3;
            }
        L3:
            goto L96
        L5:
            java.lang.String r2 = "ALTER TABLE downloader ADD mimeType TEXT"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD title TEXT"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD notificationEnable INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD notificationVisibility INTEGER"
            r1.execSQL(r2)
        L19:
            java.lang.String r2 = "ALTER TABLE downloader ADD isFirstDownload INTEGER"
            r1.execSQL(r2)
        L1e:
            java.lang.String r2 = "ALTER TABLE downloader ADD isFirstSuccess INTEGER"
            r1.execSQL(r2)
        L23:
            java.lang.String r2 = "ALTER TABLE downloader ADD needHttpsToHttpRetry INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD downloadTime INTEGER"
            r1.execSQL(r2)
        L2d:
            java.lang.String r2 = "ALTER TABLE downloader ADD packageName TEXT"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD md5 TEXT"
            r1.execSQL(r2)
        L37:
            java.lang.String r2 = "ALTER TABLE downloader ADD retryDelay INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD curRetryTime INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD retryDelayStatus INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD defaultHttpServiceBackUp INTEGER"
            r1.execSQL(r2)
        L4b:
            java.lang.String r2 = "ALTER TABLE downloadChunk ADD chunkContentLen INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloadChunk ADD hostChunkIndex INTEGER"
            r1.execSQL(r2)
        L55:
            java.lang.String r2 = "ALTER TABLE downloader ADD chunkRunnableReuse INTEGER"
            r1.execSQL(r2)
        L5a:
            java.lang.String r2 = "ALTER TABLE downloader ADD retryDelayTimeArray TEXT"
            r1.execSQL(r2)
        L5f:
            java.lang.String r2 = "ALTER TABLE downloader ADD chunkDowngradeRetry INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD backUpUrlsStr TEXT"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD backUpUrlRetryCount INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD realDownloadTime INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD retryScheduleMinutes INTEGER"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD independentProcess INTEGER"
            r1.execSQL(r2)
        L7d:
            java.lang.String r2 = "ALTER TABLE downloader ADD auxiliaryJsonobjectString TEXT"
            r1.execSQL(r2)
        L82:
            java.lang.String r2 = "ALTER TABLE downloader ADD iconUrl TEXT"
            r1.execSQL(r2)
            java.lang.String r2 = "ALTER TABLE downloader ADD appVersionCode INTEGER"
            r1.execSQL(r2)
        L8c:
            java.lang.String r2 = "CREATE TABLE IF NOT EXISTS segments( _id INTEGER PRIMARY KEY,info TEXT )"
            r1.execSQL(r2)
        L91:
            java.lang.String r2 = "ALTER TABLE downloader ADD taskId TEXT"
            r1.execSQL(r2)
        L96:
            return
    }
}
