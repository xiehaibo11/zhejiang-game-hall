package com.ss.android.socialbase.downloader.db;

public class SqlDownloadCache extends com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub implements com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache {
    private static volatile android.database.sqlite.SQLiteDatabase database;
    private volatile boolean cacheSynced;
    com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl callback;
    private com.ss.android.socialbase.downloader.db.TableStatements chunkTableStatements;
    private com.ss.android.socialbase.downloader.db.TableStatements downloadTableStatements;
    private com.ss.android.socialbase.downloader.db.TableStatements segmentTableStatements;












    static {
            return
    }

    public SqlDownloadCache() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public SqlDownloadCache(boolean r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.callback = r0
            if (r2 != 0) goto L9
            return
        L9:
            r2 = 0
            r1.cacheSynced = r2
            r1.init()
            return
    }

    static void access$000(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0) {
            r0.ensureDataBaseInit()
            return
    }

    static android.database.sqlite.SQLiteDatabase access$100() {
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            return r0
    }

    static void access$1000(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, int r1, int r2, int r3, int r4, android.database.sqlite.SQLiteStatement r5) {
            r0.updateSubDownloadChunkIndexInner(r1, r2, r3, r4, r5)
            return
    }

    static com.ss.android.socialbase.downloader.db.TableStatements access$1100(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0) {
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r0.downloadTableStatements
            return r0
    }

    static void access$1200(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1, android.database.sqlite.SQLiteStatement r2) {
            r0.insertDownloadInfoInner(r1, r2)
            return
    }

    static void access$1300(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0.updateDownloadInfoForCurrentThread(r1)
            return
    }

    static void access$1400(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0) {
            r0.clearDataInSubThread()
            return
    }

    static void access$1500(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, int r1, android.content.ContentValues r2) {
            r0.updateInner(r1, r2)
            return
    }

    static void access$200(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, java.util.List r1) {
            r0.clearAntiHijackDirIfNeeded(r1)
            return
    }

    static void access$300(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, java.util.List r1, java.util.List r2, android.util.SparseArray r3, android.util.SparseArray r4, android.util.SparseArray r5) {
            r0.loadCacheFromDB(r1, r2, r3, r4, r5)
            return
    }

    static boolean access$402(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, boolean r1) {
            r0.cacheSynced = r1
            return r1
    }

    static com.ss.android.socialbase.downloader.db.TableStatements access$500(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0) {
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r0.chunkTableStatements
            return r0
    }

    static void access$600(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, int r1, android.database.sqlite.SQLiteStatement r2) {
            r0.deleteInner(r1, r2)
            return
    }

    static void access$700(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, com.ss.android.socialbase.downloader.model.DownloadChunk r1, android.database.sqlite.SQLiteStatement r2) {
            r0.insertDownloadChunkInner(r1, r2)
            return
    }

    static void access$800(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, int r1, int r2, long r3, android.database.sqlite.SQLiteStatement r5) {
            r0.updateDownloadChunkInner(r1, r2, r3, r5)
            return
    }

    static void access$900(com.ss.android.socialbase.downloader.db.SqlDownloadCache r0, int r1, int r2, int r3, long r4, android.database.sqlite.SQLiteStatement r6) {
            r0.updateSubDownloadChunkInner(r1, r2, r3, r4, r6)
            return
    }

    private void addDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            r1.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 == 0) goto L14
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r1.downloadTableStatements
            if (r0 != 0) goto Lc
            goto L14
        Lc:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$7 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$7
            r0.<init>(r1, r2)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
        L14:
            return
    }

    private void clearAntiHijackDirIfNeeded(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L1f
        L7:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L7
            boolean r1 = r0.isSavePathRedirected()     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L7
            com.ss.android.socialbase.downloader.utils.DownloadUtils.clearAntiHijackDir(r0)     // Catch: java.lang.Throwable -> L1f
            goto L7
        L1f:
            return
    }

    private synchronized void clearDataInSubThread() {
            r3 = this;
            monitor-enter(r3)
            r3.safeBeginTransaction()     // Catch: java.lang.Throwable -> L1c
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "downloader"
            r2 = 0
            r0.delete(r1, r2, r2)     // Catch: java.lang.Throwable -> L1c
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "downloadChunk"
            r0.delete(r1, r2, r2)     // Catch: java.lang.Throwable -> L1c
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L1c
            r0.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L1c
        L18:
            r3.safeEndTransaction()     // Catch: java.lang.Throwable -> L23
            goto L21
        L1c:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L25
            goto L18
        L21:
            monitor-exit(r3)
            return
        L23:
            r0 = move-exception
            goto L2a
        L25:
            r0 = move-exception
            r3.safeEndTransaction()     // Catch: java.lang.Throwable -> L23
            throw r0     // Catch: java.lang.Throwable -> L23
        L2a:
            monitor-exit(r3)
            throw r0
    }

    private void deleteInner(int r4, android.database.sqlite.SQLiteStatement r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L11
            r0 = 1
            long r1 = (long) r4
            r5.bindLong(r0, r1)     // Catch: java.lang.Throwable -> Le
            r5.execute()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Le
            goto L15
        Le:
            r4 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Le
            throw r4     // Catch: java.lang.Throwable -> L11
        L11:
            r4 = move-exception
            r4.printStackTrace()
        L15:
            return
    }

    private void ensureDataBaseInit() {
            r6 = this;
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 != 0) goto L4c
            java.lang.Class<com.ss.android.socialbase.downloader.db.SqlDownloadCache> r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.class
            monitor-enter(r0)
            android.database.sqlite.SQLiteDatabase r1 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L49
            if (r1 != 0) goto L47
            com.ss.android.socialbase.downloader.db.DownloadDBHelper r1 = com.ss.android.socialbase.downloader.db.DownloadDBHelper.getInstance()     // Catch: java.lang.Throwable -> L43
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> L43
            com.ss.android.socialbase.downloader.db.SqlDownloadCache.database = r1     // Catch: java.lang.Throwable -> L43
            com.ss.android.socialbase.downloader.db.TableStatements r1 = new com.ss.android.socialbase.downloader.db.TableStatements     // Catch: java.lang.Throwable -> L43
            android.database.sqlite.SQLiteDatabase r2 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = "downloader"
            java.lang.String[] r4 = com.ss.android.socialbase.downloader.constants.DBDefinition.DOWNLOAD_ALL_COLUMNS     // Catch: java.lang.Throwable -> L43
            java.lang.String[] r5 = com.ss.android.socialbase.downloader.constants.DBDefinition.DOWNLOAD_PK_COLUMNS     // Catch: java.lang.Throwable -> L43
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L43
            r6.downloadTableStatements = r1     // Catch: java.lang.Throwable -> L43
            com.ss.android.socialbase.downloader.db.TableStatements r1 = new com.ss.android.socialbase.downloader.db.TableStatements     // Catch: java.lang.Throwable -> L43
            android.database.sqlite.SQLiteDatabase r2 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = "downloadChunk"
            java.lang.String[] r4 = com.ss.android.socialbase.downloader.constants.DBDefinition.CHUNK_ALL_COLUMNS     // Catch: java.lang.Throwable -> L43
            java.lang.String[] r5 = com.ss.android.socialbase.downloader.constants.DBDefinition.CHUNK_PK_COLUMNS     // Catch: java.lang.Throwable -> L43
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L43
            r6.chunkTableStatements = r1     // Catch: java.lang.Throwable -> L43
            com.ss.android.socialbase.downloader.db.TableStatements r1 = new com.ss.android.socialbase.downloader.db.TableStatements     // Catch: java.lang.Throwable -> L43
            android.database.sqlite.SQLiteDatabase r2 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = "segments"
            java.lang.String[] r4 = com.ss.android.socialbase.downloader.constants.DBDefinition.SEGMENT_ALL_COLUMNS     // Catch: java.lang.Throwable -> L43
            java.lang.String[] r5 = com.ss.android.socialbase.downloader.constants.DBDefinition.SEGMENT_PK_COLUMNS     // Catch: java.lang.Throwable -> L43
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L43
            r6.segmentTableStatements = r1     // Catch: java.lang.Throwable -> L43
            goto L47
        L43:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L49
        L47:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            goto L4c
        L49:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            throw r1
        L4c:
            return
    }

    private void insertDownloadChunkInner(com.ss.android.socialbase.downloader.model.DownloadChunk r1, android.database.sqlite.SQLiteStatement r2) {
            r0 = this;
            if (r1 == 0) goto L15
            if (r2 != 0) goto L5
            goto L15
        L5:
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L11
            r1.bindValue(r2)     // Catch: java.lang.Throwable -> Le
            r2.executeInsert()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            goto L15
        Le:
            r1 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            throw r1     // Catch: java.lang.Throwable -> L11
        L11:
            r1 = move-exception
            r1.printStackTrace()
        L15:
            return
    }

    private void insertDownloadInfoInner(com.ss.android.socialbase.downloader.model.DownloadInfo r1, android.database.sqlite.SQLiteStatement r2) {
            r0 = this;
            if (r1 == 0) goto L15
            if (r2 != 0) goto L5
            goto L15
        L5:
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L11
            r1.bindValue(r2)     // Catch: java.lang.Throwable -> Le
            r2.executeInsert()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            goto L15
        Le:
            r1 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            throw r1     // Catch: java.lang.Throwable -> L11
        L11:
            r1 = move-exception
            r1.printStackTrace()
        L15:
            return
    }

    private void loadCacheFromDB(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r17, java.util.List<java.lang.Integer> r18, android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r19, android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r20, android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r21) {
            r16 = this;
            r1 = r16
            r0 = r19
            r2 = r20
            r3 = r21
            int r4 = r19.size()
            if (r4 < 0) goto L15e
            android.database.sqlite.SQLiteDatabase r5 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r5 != 0) goto L14
            goto L15e
        L14:
            android.database.sqlite.SQLiteDatabase r5 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            monitor-enter(r5)
            r16.safeBeginTransaction()     // Catch: java.lang.Throwable -> L14d
            boolean r6 = r17.isEmpty()     // Catch: java.lang.Throwable -> L14d
            r7 = 0
            r8 = 1
            if (r6 != 0) goto La7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r9 = "clear_invalid_task_error"
            boolean r6 = r6.optBugFix(r9)     // Catch: java.lang.Throwable -> L14d
            if (r6 == 0) goto L85
            int r6 = r17.size()     // Catch: java.lang.Throwable -> L14d
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L14d
            r9 = r7
        L35:
            int r10 = r17.size()     // Catch: java.lang.Throwable -> L14d
            if (r9 >= r10) goto L4a
            r10 = r17
            java.lang.Object r11 = r10.get(r9)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L14d
            r6[r9] = r11     // Catch: java.lang.Throwable -> L14d
            int r9 = r9 + 1
            goto L35
        L4a:
            r10 = r17
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14d
            r9.<init>()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r11 = "CAST(_id AS TEXT) IN ("
            r9.append(r11)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> L14d
            int r10 = r17.size()     // Catch: java.lang.Throwable -> L14d
            int r10 = r10 - r8
            char[] r10 = new char[r10]     // Catch: java.lang.Throwable -> L14d
            r11.<init>(r10)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r10 = "\u0000"
            java.lang.String r12 = "?,"
            java.lang.String r10 = r11.replace(r10, r12)     // Catch: java.lang.Throwable -> L14d
            r9.append(r10)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r10 = "?)"
            r9.append(r10)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r10 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r11 = "downloader"
            r10.delete(r11, r9, r6)     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r10 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r11 = "downloadChunk"
            r10.delete(r11, r9, r6)     // Catch: java.lang.Throwable -> L14d
            goto La7
        L85:
            java.lang.String r6 = ", "
            r9 = r18
            java.lang.String r6 = android.text.TextUtils.join(r6, r9)     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r9 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r10 = "downloader"
            java.lang.String r11 = "_id IN (?)"
            java.lang.String[] r12 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L14d
            r12[r7] = r6     // Catch: java.lang.Throwable -> L14d
            r9.delete(r10, r11, r12)     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r9 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r10 = "downloadChunk"
            java.lang.String r11 = "_id IN (?)"
            java.lang.String[] r12 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L14d
            r12[r7] = r6     // Catch: java.lang.Throwable -> L14d
            r9.delete(r10, r11, r12)     // Catch: java.lang.Throwable -> L14d
        La7:
            r6 = r7
        La8:
            if (r6 >= r4) goto L11a
            int r9 = r0.keyAt(r6)     // Catch: java.lang.Throwable -> L14d
            java.lang.Object r10 = r0.get(r9)     // Catch: java.lang.Throwable -> L14d
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r10     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r11 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r12 = "downloader"
            java.lang.String r13 = "_id = ?"
            java.lang.String[] r14 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L14d
            java.lang.String r15 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L14d
            r14[r7] = r15     // Catch: java.lang.Throwable -> L14d
            r11.delete(r12, r13, r14)     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r11 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r12 = "downloader"
            android.content.ContentValues r13 = r10.toContentValues()     // Catch: java.lang.Throwable -> L14d
            r14 = 0
            r11.insert(r12, r14, r13)     // Catch: java.lang.Throwable -> L14d
            int r11 = r10.getChunkCount()     // Catch: java.lang.Throwable -> L14d
            if (r11 <= r8) goto L117
            java.util.List r11 = r1.getDownloadChunk(r9)     // Catch: java.lang.Throwable -> L14d
            int r12 = r11.size()     // Catch: java.lang.Throwable -> L14d
            if (r12 > 0) goto Le2
            goto L117
        Le2:
            android.database.sqlite.SQLiteDatabase r12 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r13 = "downloadChunk"
            java.lang.String r15 = "_id = ?"
            java.lang.String[] r14 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L14d
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L14d
            r14[r7] = r9     // Catch: java.lang.Throwable -> L14d
            r12.delete(r13, r15, r14)     // Catch: java.lang.Throwable -> L14d
            java.util.Iterator r9 = r11.iterator()     // Catch: java.lang.Throwable -> L14d
        Lf7:
            boolean r11 = r9.hasNext()     // Catch: java.lang.Throwable -> L14d
            if (r11 == 0) goto L117
            java.lang.Object r11 = r9.next()     // Catch: java.lang.Throwable -> L14d
            com.ss.android.socialbase.downloader.model.DownloadChunk r11 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r11     // Catch: java.lang.Throwable -> L14d
            int r12 = r10.getId()     // Catch: java.lang.Throwable -> L14d
            r11.setId(r12)     // Catch: java.lang.Throwable -> L14d
            android.database.sqlite.SQLiteDatabase r12 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            java.lang.String r13 = "downloadChunk"
            android.content.ContentValues r11 = r11.toContentValues()     // Catch: java.lang.Throwable -> L14d
            r14 = 0
            r12.insert(r13, r14, r11)     // Catch: java.lang.Throwable -> L14d
            goto Lf7
        L117:
            int r6 = r6 + 1
            goto La8
        L11a:
            if (r2 == 0) goto L144
            if (r3 == 0) goto L144
            int r0 = r20.size()     // Catch: java.lang.Throwable -> L14d
        L122:
            if (r7 >= r0) goto L144
            java.lang.Object r4 = r2.valueAt(r7)     // Catch: java.lang.Throwable -> L14d
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r4     // Catch: java.lang.Throwable -> L14d
            int r4 = r4.getId()     // Catch: java.lang.Throwable -> L14d
            java.util.List r6 = r1.getDownloadChunk(r4)     // Catch: java.lang.Throwable -> L14d
            java.util.List r6 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parseHostChunkList(r6)     // Catch: java.lang.Throwable -> L14d
            if (r6 == 0) goto L141
            int r8 = r6.size()     // Catch: java.lang.Throwable -> L14d
            if (r8 <= 0) goto L141
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> L14d
        L141:
            int r7 = r7 + 1
            goto L122
        L144:
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L14d
            r0.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L14d
        L149:
            r16.safeEndTransaction()     // Catch: java.lang.Throwable -> L154
            goto L152
        L14d:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L156
            goto L149
        L152:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L154
            return
        L154:
            r0 = move-exception
            goto L15c
        L156:
            r0 = move-exception
            r2 = r0
            r16.safeEndTransaction()     // Catch: java.lang.Throwable -> L154
            throw r2     // Catch: java.lang.Throwable -> L154
        L15c:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L154
            throw r0
        L15e:
            return
    }

    private void safeBeginTransaction() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            r0.beginTransaction()
            return
    }

    private void safeEndTransaction() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L16
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L12
            boolean r0 = r0.inTransaction()     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L16
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L12
            r0.endTransaction()     // Catch: java.lang.Throwable -> L12
            goto L16
        L12:
            r0 = move-exception
            r0.printStackTrace()
        L16:
            return
    }

    private void update(int r2, android.content.ContentValues r3) {
            r1 = this;
            r1.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 != 0) goto L8
            return
        L8:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$11 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$11
            r0.<init>(r1, r2, r3)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
            return
    }

    private void updateDownloadChunkInner(int r5, int r6, long r7, android.database.sqlite.SQLiteStatement r9) {
            r4 = this;
            monitor-enter(r9)     // Catch: java.lang.Throwable -> L2e
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L2b
            r0.<init>()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "curOffset"
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L2b
            r0.put(r1, r7)     // Catch: java.lang.Throwable -> L2b
            android.database.sqlite.SQLiteDatabase r7 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L2b
            java.lang.String r8 = "downloadChunk"
            java.lang.String r1 = "_id = ? AND chunkIndex = ?"
            r2 = 2
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L2b
            r3 = 0
            java.lang.String r5 = java.lang.Integer.toString(r5)     // Catch: java.lang.Throwable -> L2b
            r2[r3] = r5     // Catch: java.lang.Throwable -> L2b
            r5 = 1
            java.lang.String r6 = java.lang.Integer.toString(r6)     // Catch: java.lang.Throwable -> L2b
            r2[r5] = r6     // Catch: java.lang.Throwable -> L2b
            r7.update(r8, r0, r1, r2)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L2b
            goto L32
        L2b:
            r5 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L2b
            throw r5     // Catch: java.lang.Throwable -> L2e
        L2e:
            r5 = move-exception
            r5.printStackTrace()
        L32:
            return
    }

    private synchronized void updateDownloadInfoForCurrentThread(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 != 0) goto L5
            monitor-exit(r1)
            return
        L5:
            int r0 = r2.getId()     // Catch: java.lang.Throwable -> L28
            boolean r0 = r1.cacheExist(r0)     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L13
            r1.addDownloadInfo(r2)     // Catch: java.lang.Throwable -> L28
            goto L2c
        L13:
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r1.downloadTableStatements     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L19
            monitor-exit(r1)
            return
        L19:
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r1.downloadTableStatements     // Catch: java.lang.Throwable -> L23
            android.database.sqlite.SQLiteStatement r0 = r0.getUpdateStatement()     // Catch: java.lang.Throwable -> L23
            r1.updateDownloadInfoInner(r2, r0)     // Catch: java.lang.Throwable -> L23
            goto L2c
        L23:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L28
            goto L2c
        L28:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r1)
            return
        L2e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private void updateDownloadInfoInner(com.ss.android.socialbase.downloader.model.DownloadInfo r4, android.database.sqlite.SQLiteStatement r5) {
            r3 = this;
            if (r4 == 0) goto L23
            if (r5 != 0) goto L5
            goto L23
        L5:
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L1f
            r4.bindValue(r5)     // Catch: java.lang.Throwable -> L1c
            int r0 = r4.getBindValueCount()     // Catch: java.lang.Throwable -> L1c
            int r0 = r0 + 1
            int r4 = r4.getId()     // Catch: java.lang.Throwable -> L1c
            long r1 = (long) r4     // Catch: java.lang.Throwable -> L1c
            r5.bindLong(r0, r1)     // Catch: java.lang.Throwable -> L1c
            r5.execute()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L1c
            goto L23
        L1c:
            r4 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L1c
            throw r4     // Catch: java.lang.Throwable -> L1f
        L1f:
            r4 = move-exception
            r4.printStackTrace()
        L23:
            return
    }

    private void updateInner(int r6, android.content.ContentValues r7) {
            r5 = this;
            r0 = 10
        L2:
            android.database.sqlite.SQLiteDatabase r1 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L32
            boolean r1 = r1.isDbLockedByCurrentThread()     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L19
            int r0 = r0 + (-1)
            if (r0 < 0) goto L19
            r1 = 5
            java.lang.Thread.sleep(r1)     // Catch: java.lang.Throwable -> L14
            goto L2
        L14:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L32
            goto L2
        L19:
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "downloader"
            java.lang.String r2 = "_id = ? "
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L2d
            r4 = 0
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L2d
            r3[r4] = r6     // Catch: java.lang.Throwable -> L2d
            r0.update(r1, r7, r2, r3)     // Catch: java.lang.Throwable -> L2d
            goto L36
        L2d:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L32
            goto L36
        L32:
            r6 = move-exception
            r6.printStackTrace()
        L36:
            return
    }

    private void updateSubDownloadChunkIndexInner(int r6, int r7, int r8, int r9, android.database.sqlite.SQLiteStatement r10) {
            r5 = this;
            monitor-enter(r10)     // Catch: java.lang.Throwable -> L35
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L32
            r0.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "chunkIndex"
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L32
            r0.put(r1, r9)     // Catch: java.lang.Throwable -> L32
            android.database.sqlite.SQLiteDatabase r9 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "downloadChunk"
            java.lang.String r2 = "_id = ? AND chunkIndex = ? AND hostChunkIndex = ?"
            r3 = 3
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L32
            r4 = 0
            java.lang.String r6 = java.lang.Integer.toString(r6)     // Catch: java.lang.Throwable -> L32
            r3[r4] = r6     // Catch: java.lang.Throwable -> L32
            r6 = 1
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> L32
            r3[r6] = r7     // Catch: java.lang.Throwable -> L32
            r6 = 2
            java.lang.String r7 = java.lang.Integer.toString(r8)     // Catch: java.lang.Throwable -> L32
            r3[r6] = r7     // Catch: java.lang.Throwable -> L32
            r9.update(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L32
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L32
            goto L39
        L32:
            r6 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L32
            throw r6     // Catch: java.lang.Throwable -> L35
        L35:
            r6 = move-exception
            r6.printStackTrace()
        L39:
            return
    }

    private void updateSubDownloadChunkInner(int r5, int r6, int r7, long r8, android.database.sqlite.SQLiteStatement r10) {
            r4 = this;
            monitor-enter(r10)     // Catch: java.lang.Throwable -> L35
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L32
            r0.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "curOffset"
            java.lang.Long r8 = java.lang.Long.valueOf(r8)     // Catch: java.lang.Throwable -> L32
            r0.put(r1, r8)     // Catch: java.lang.Throwable -> L32
            android.database.sqlite.SQLiteDatabase r8 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L32
            java.lang.String r9 = "downloadChunk"
            java.lang.String r1 = "_id = ? AND chunkIndex = ? AND hostChunkIndex = ?"
            r2 = 3
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L32
            r3 = 0
            java.lang.String r5 = java.lang.Integer.toString(r5)     // Catch: java.lang.Throwable -> L32
            r2[r3] = r5     // Catch: java.lang.Throwable -> L32
            r5 = 1
            java.lang.String r6 = java.lang.Integer.toString(r6)     // Catch: java.lang.Throwable -> L32
            r2[r5] = r6     // Catch: java.lang.Throwable -> L32
            r5 = 2
            java.lang.String r6 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> L32
            r2[r5] = r6     // Catch: java.lang.Throwable -> L32
            r8.update(r9, r0, r1, r2)     // Catch: java.lang.Throwable -> L32
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L32
            goto L39
        L32:
            r5 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L32
            throw r5     // Catch: java.lang.Throwable -> L35
        L35:
            r5 = move-exception
            r5.printStackTrace()
        L39:
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = -4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "curBytes"
            r0.put(r6, r5)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = -3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "curBytes"
            r0.put(r6, r5)
            r5 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            java.lang.String r6 = "isFirstDownload"
            r0.put(r6, r5)
            java.lang.String r6 = "isFirstSuccess"
            r0.put(r6, r5)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r4, long r5, java.lang.String r7, java.lang.String r8) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "totalBytes"
            r0.put(r6, r5)
            java.lang.String r5 = "eTag"
            r0.put(r5, r7)
            boolean r5 = android.text.TextUtils.isEmpty(r8)
            if (r5 != 0) goto L28
            java.lang.String r5 = "name"
            r0.put(r5, r8)
        L28:
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = -1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r5)
            java.lang.String r2 = "curBytes"
            r0.put(r2, r1)
            r1 = 0
            int r5 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r5 <= 0) goto L28
            r5 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            java.lang.String r6 = "isFirstDownload"
            r0.put(r6, r5)
        L28:
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r4) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = -7
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = -2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "curBytes"
            r0.put(r6, r5)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r4) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "curBytes"
            r0.put(r6, r5)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r4) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = 5
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            r1 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "isFirstDownload"
            r0.put(r2, r1)
            r3.update(r4, r0)
            r4 = 0
            return r4
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) {
            r1 = this;
            r1.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 == 0) goto L14
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r1.chunkTableStatements
            if (r0 != 0) goto Lc
            goto L14
        Lc:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$3 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$3
            r0.<init>(r1, r2)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
        L14:
            return
    }

    @Override
    public void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) {
            r0 = this;
            r0.addDownloadChunk(r1)
            return
    }

    @Override
    public boolean cacheExist(int r2) {
            r1 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)     // Catch: java.lang.Throwable -> L9
            if (r2 == 0) goto L8
            r0 = 1
        L8:
            return r0
        L9:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    @Override
    public void clearData() {
            r1 = this;
            r1.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 != 0) goto L8
            return
        L8:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$10 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$10
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
            return
    }

    @Override
    public boolean ensureDownloadCacheSyncSuccess() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r9) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r8.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r1 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r1 == 0) goto L5a
            r1 = 0
            r2 = 0
            r3 = 1
            android.database.sqlite.SQLiteDatabase r4 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = "SELECT * FROM %s WHERE %s = ?"
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L45
            java.lang.String r7 = "downloadChunk"
            r6[r2] = r7     // Catch: java.lang.Throwable -> L45
            java.lang.String r7 = "_id"
            r6[r3] = r7     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = java.lang.String.format(r5, r6)     // Catch: java.lang.Throwable -> L45
            java.lang.String[] r6 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L45
            java.lang.String r9 = java.lang.Integer.toString(r9)     // Catch: java.lang.Throwable -> L45
            r6[r2] = r9     // Catch: java.lang.Throwable -> L45
            android.database.Cursor r1 = r4.rawQuery(r5, r6)     // Catch: java.lang.Throwable -> L45
        L2e:
            boolean r9 = r1.moveToNext()     // Catch: java.lang.Throwable -> L45
            if (r9 == 0) goto L3d
            com.ss.android.socialbase.downloader.model.DownloadChunk r9 = new com.ss.android.socialbase.downloader.model.DownloadChunk     // Catch: java.lang.Throwable -> L45
            r9.<init>(r1)     // Catch: java.lang.Throwable -> L45
            r0.add(r9)     // Catch: java.lang.Throwable -> L45
            goto L2e
        L3d:
            android.database.Cursor[] r9 = new android.database.Cursor[r3]
            r9[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r9)
            goto L5a
        L45:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L51
            android.database.Cursor[] r9 = new android.database.Cursor[r3]
            r9[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r9)
            goto L5a
        L51:
            r9 = move-exception
            android.database.Cursor[] r0 = new android.database.Cursor[r3]
            r0[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            throw r9
        L5a:
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r8) {
            r7 = this;
            r7.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            r1 = 0
            if (r0 == 0) goto L5c
            r0 = 0
            r2 = 1
            android.database.sqlite.SQLiteDatabase r3 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = "SELECT * FROM %s WHERE %s = ?"
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L46
            java.lang.String r6 = "downloader"
            r5[r0] = r6     // Catch: java.lang.Throwable -> L46
            java.lang.String r6 = "_id"
            r5[r2] = r6     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Throwable -> L46
            java.lang.String[] r5 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L46
            java.lang.String r8 = java.lang.Integer.toString(r8)     // Catch: java.lang.Throwable -> L46
            r5[r0] = r8     // Catch: java.lang.Throwable -> L46
            android.database.Cursor r8 = r3.rawQuery(r4, r5)     // Catch: java.lang.Throwable -> L46
            boolean r3 = r8.moveToNext()     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L3c
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = new com.ss.android.socialbase.downloader.model.DownloadInfo     // Catch: java.lang.Throwable -> L44
            r3.<init>(r8)     // Catch: java.lang.Throwable -> L44
            android.database.Cursor[] r1 = new android.database.Cursor[r2]
            r1[r0] = r8
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r1)
            return r3
        L3c:
            android.database.Cursor[] r2 = new android.database.Cursor[r2]
            r2[r0] = r8
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            goto L5c
        L44:
            r3 = move-exception
            goto L48
        L46:
            r3 = move-exception
            r8 = r1
        L48:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L53
            android.database.Cursor[] r2 = new android.database.Cursor[r2]
            r2[r0] = r8
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            goto L5c
        L53:
            r1 = move-exception
            android.database.Cursor[] r2 = new android.database.Cursor[r2]
            r2[r0] = r8
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r1
        L5c:
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r9) {
            r8 = this;
            r8.ensureDataBaseInit()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.database.sqlite.SQLiteDatabase r1 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r1 == 0) goto L55
            r1 = 0
            r2 = 0
            r3 = 1
            android.database.sqlite.SQLiteDatabase r4 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = "SELECT * FROM %s WHERE %s = ?"
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L40
            java.lang.String r7 = "downloader"
            r6[r2] = r7     // Catch: java.lang.Throwable -> L40
            java.lang.String r7 = "url"
            r6[r3] = r7     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = java.lang.String.format(r5, r6)     // Catch: java.lang.Throwable -> L40
            java.lang.String[] r6 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L40
            r6[r2] = r9     // Catch: java.lang.Throwable -> L40
            android.database.Cursor r1 = r4.rawQuery(r5, r6)     // Catch: java.lang.Throwable -> L40
            boolean r9 = r1.moveToNext()     // Catch: java.lang.Throwable -> L40
            if (r9 == 0) goto L38
            com.ss.android.socialbase.downloader.model.DownloadInfo r9 = new com.ss.android.socialbase.downloader.model.DownloadInfo     // Catch: java.lang.Throwable -> L40
            r9.<init>(r1)     // Catch: java.lang.Throwable -> L40
            r0.add(r9)     // Catch: java.lang.Throwable -> L40
        L38:
            android.database.Cursor[] r9 = new android.database.Cursor[r3]
            r9[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r9)
            goto L55
        L40:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L4c
            android.database.Cursor[] r9 = new android.database.Cursor[r3]
            r9[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r9)
            goto L55
        L4c:
            r9 = move-exception
            android.database.Cursor[] r0 = new android.database.Cursor[r3]
            r0[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            throw r9
        L55:
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> getSegmentMap(int r11) {
            r10 = this;
            r10.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            r1 = 0
            if (r0 == 0) goto L8d
            r0 = 0
            r2 = 1
            android.database.sqlite.SQLiteDatabase r3 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L77
            java.lang.String r4 = "SELECT * FROM %s WHERE %s = ?"
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "segments"
            r5[r0] = r6     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "_id"
            r5[r2] = r6     // Catch: java.lang.Throwable -> L77
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Throwable -> L77
            java.lang.String[] r5 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L77
            java.lang.String r11 = java.lang.Integer.toString(r11)     // Catch: java.lang.Throwable -> L77
            r5[r0] = r11     // Catch: java.lang.Throwable -> L77
            android.database.Cursor r11 = r3.rawQuery(r4, r5)     // Catch: java.lang.Throwable -> L77
            boolean r3 = r11.moveToNext()     // Catch: java.lang.Throwable -> L75
            if (r3 == 0) goto L6d
            java.lang.String r3 = "info"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L75
            if (r3 < 0) goto L3c
            java.lang.String r3 = r11.getString(r3)     // Catch: java.lang.Throwable -> L75
            goto L3d
        L3c:
            r3 = r1
        L3d:
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L75
            r4.<init>()     // Catch: java.lang.Throwable -> L75
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L75
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L75
            r3 = r0
        L48:
            int r6 = r5.length()     // Catch: java.lang.Throwable -> L75
            if (r3 >= r6) goto L65
            org.json.JSONObject r6 = r5.getJSONObject(r3)     // Catch: java.lang.Throwable -> L75
            com.ss.android.socialbase.downloader.segment.Segment r7 = new com.ss.android.socialbase.downloader.segment.Segment     // Catch: java.lang.Throwable -> L75
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L75
            long r8 = r7.getStartOffset()     // Catch: java.lang.Throwable -> L75
            java.lang.Long r6 = java.lang.Long.valueOf(r8)     // Catch: java.lang.Throwable -> L75
            r4.put(r6, r7)     // Catch: java.lang.Throwable -> L75
            int r3 = r3 + 1
            goto L48
        L65:
            android.database.Cursor[] r1 = new android.database.Cursor[r2]
            r1[r0] = r11
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r1)
            return r4
        L6d:
            android.database.Cursor[] r2 = new android.database.Cursor[r2]
            r2[r0] = r11
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            goto L8d
        L75:
            r3 = move-exception
            goto L79
        L77:
            r3 = move-exception
            r11 = r1
        L79:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L84
            android.database.Cursor[] r2 = new android.database.Cursor[r2]
            r2[r0] = r11
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            goto L8d
        L84:
            r1 = move-exception
            android.database.Cursor[] r2 = new android.database.Cursor[r2]
            r2[r0] = r11
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r2)
            throw r1
        L8d:
            return r1
    }

    @Override
    public java.util.ArrayList<com.ss.android.socialbase.downloader.segment.Segment> getSegments(int r2) {
            r1 = this;
            java.util.Map r2 = r1.getSegmentMap(r2)
            if (r2 == 0) goto L17
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto Ld
            goto L17
        Ld:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Collection r2 = r2.values()
            r0.<init>(r2)
            return r0
        L17:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List getSegments(int r1) {
            r0 = this;
            java.util.ArrayList r1 = r0.getSegments(r1)
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void init() {
            r3 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            r2 = 0
            r3.init(r0, r1, r2)
            return
    }

    @Override
    public void init(android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2, android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r3, com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$1 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$1     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Lf
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDBThreadExecutorService()     // Catch: java.lang.Throwable -> Lf
            if (r2 == 0) goto L13
            r2.execute(r0)     // Catch: java.lang.Throwable -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            boolean r0 = r1.cacheSynced
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void onInitFinish(android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2, android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r3) {
            r1 = this;
            java.util.HashMap r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sparseArrayToHashMap(r2)     // Catch: java.lang.Throwable -> L11
            java.util.HashMap r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sparseArrayToHashMap(r3)     // Catch: java.lang.Throwable -> L11
            com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r0 = r1.callback     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L11
            com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r0 = r1.callback     // Catch: java.lang.Throwable -> L11
            r0.callback(r2, r3)     // Catch: java.lang.Throwable -> L11
        L11:
            return
    }

    @Override
    public void removeAllDownloadChunk(int r2) {
            r1 = this;
            r1.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 == 0) goto L14
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r1.chunkTableStatements
            if (r0 != 0) goto Lc
            goto L14
        Lc:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$2 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$2
            r0.<init>(r1, r2)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
        L14:
            return
    }

    @Override
    public boolean removeDownloadInfo(int r3) {
            r2 = this;
            r2.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            r1 = 0
            if (r0 == 0) goto L1a
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r2.downloadTableStatements
            if (r0 != 0) goto Ld
            goto L1a
        Ld:
            android.database.sqlite.SQLiteStatement r0 = r0.getDeleteStatement()     // Catch: java.lang.Throwable -> L16
            r2.deleteInner(r3, r0)     // Catch: java.lang.Throwable -> L16
            r3 = 1
            return r3
        L16:
            r3 = move-exception
            r3.printStackTrace()
        L1a:
            return r1
    }

    @Override
    public boolean removeDownloadTaskData(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$9 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$9
            r0.<init>(r1, r2)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
            r2 = 1
            return r2
    }

    @Override
    public void removeSegments(int r2) {
            r1 = this;
            r1.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 != 0) goto L8
            return
        L8:
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r1.segmentTableStatements     // Catch: java.lang.Throwable -> L12
            android.database.sqlite.SQLiteStatement r0 = r0.getDeleteStatement()     // Catch: java.lang.Throwable -> L12
            r1.deleteInner(r2, r0)     // Catch: java.lang.Throwable -> L12
            goto L16
        L12:
            r2 = move-exception
            r2.printStackTrace()
        L16:
            return
    }

    @Override
    public void setInitCallback(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    @Override
    public void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) {
            r0 = this;
            return
    }

    @Override
    public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            r1.removeAllDownloadChunk(r2)     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L3d
            java.util.Iterator r2 = r3.iterator()     // Catch: java.lang.Throwable -> L39
        L9:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L3d
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L39
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3     // Catch: java.lang.Throwable -> L39
            if (r3 != 0) goto L18
            goto L9
        L18:
            r1.addDownloadChunk(r3)     // Catch: java.lang.Throwable -> L39
            boolean r0 = r3.hasChunkDivided()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L9
            java.util.List r3 = r3.getSubChunkList()     // Catch: java.lang.Throwable -> L39
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L39
        L29:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L9
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L39
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0     // Catch: java.lang.Throwable -> L39
            r1.addDownloadChunk(r0)     // Catch: java.lang.Throwable -> L39
            goto L29
        L39:
            r2 = move-exception
            r2.printStackTrace()
        L3d:
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r7, int r8) {
            r6 = this;
            r6.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            r1 = 0
            if (r0 != 0) goto L9
            return r1
        L9:
            r0 = 10
        Lb:
            android.database.sqlite.SQLiteDatabase r2 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L44
            boolean r2 = r2.isDbLockedByCurrentThread()     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L22
            int r0 = r0 + (-1)
            if (r0 < 0) goto L22
            r2 = 5
            java.lang.Thread.sleep(r2)     // Catch: java.lang.Throwable -> L1d
            goto Lb
        L1d:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L44
            goto Lb
        L22:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L44
            r0.<init>()     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "chunkCount"
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L44
            r0.put(r2, r8)     // Catch: java.lang.Throwable -> L44
            android.database.sqlite.SQLiteDatabase r8 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "downloader"
            java.lang.String r3 = "_id = ? "
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L44
            r5 = 0
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> L44
            r4[r5] = r7     // Catch: java.lang.Throwable -> L44
            r8.update(r2, r0, r3, r4)     // Catch: java.lang.Throwable -> L44
            goto L48
        L44:
            r7 = move-exception
            r7.printStackTrace()
        L48:
            return r1
    }

    @Override
    public void updateDownloadChunk(int r8, int r9, long r10) {
            r7 = this;
            r7.ensureDataBaseInit()
            if (r8 == 0) goto L23
            if (r9 < 0) goto L23
            r0 = 0
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 < 0) goto L23
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 == 0) goto L23
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r7.chunkTableStatements
            if (r0 != 0) goto L16
            goto L23
        L16:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$4 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$4
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r1.<init>(r2, r3, r4, r5)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
        L23:
            return
    }

    @Override
    public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            r1.ensureDataBaseInit()
            if (r2 == 0) goto L14
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 != 0) goto La
            goto L14
        La:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$8 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$8
            r0.<init>(r1, r2)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
            r2 = 1
            return r2
        L14:
            r2 = 0
            return r2
    }

    @Override
    public boolean updateSegments(int r8, java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> r9) {
            r7 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r7.ensureDataBaseInit()
            android.database.sqlite.SQLiteDatabase r2 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            r3 = 0
            if (r2 != 0) goto Ld
            return r3
        Ld:
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            java.util.Set r4 = r9.keySet()     // Catch: java.lang.Throwable -> L3c
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L3c
        L1a:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L3c
            if (r5 == 0) goto L40
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L3c
            java.lang.Long r5 = (java.lang.Long) r5     // Catch: java.lang.Throwable -> L3c
            long r5 = r5.longValue()     // Catch: java.lang.Throwable -> L3c
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r5 = r9.get(r5)     // Catch: java.lang.Throwable -> L3c
            com.ss.android.socialbase.downloader.segment.Segment r5 = (com.ss.android.socialbase.downloader.segment.Segment) r5     // Catch: java.lang.Throwable -> L3c
            org.json.JSONObject r5 = r5.toJson()     // Catch: java.lang.Throwable -> L3c
            r2.put(r5)     // Catch: java.lang.Throwable -> L3c
            goto L1a
        L3c:
            r9 = move-exception
            r9.printStackTrace()
        L40:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r4 = "json="
            r9.append(r4)
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            java.lang.String r4 = "SqlDownloadCache"
            android.util.Log.d(r4, r9)
            com.ss.android.socialbase.downloader.db.TableStatements r9 = r7.segmentTableStatements
            android.database.sqlite.SQLiteStatement r9 = r9.getInsertOrReplaceStatement()
            monitor-enter(r9)
            r9.clearBindings()     // Catch: java.lang.Throwable -> L8c
            r4 = 1
            long r5 = (long) r8     // Catch: java.lang.Throwable -> L8c
            r9.bindLong(r4, r5)     // Catch: java.lang.Throwable -> L8c
            r8 = 2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8c
            r9.bindString(r8, r2)     // Catch: java.lang.Throwable -> L8c
            r9.execute()     // Catch: java.lang.Throwable -> L8c
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L8c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "updateSegments cost="
            r8.append(r9)
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.cost(r0)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "SqlDownloadCache"
            com.ss.android.socialbase.downloader.logger.Logger.d(r9, r8)
            return r3
        L8c:
            r8 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L8c
            throw r8
    }

    @Override
    public void updateSubDownloadChunk(int r9, int r10, int r11, long r12) {
            r8 = this;
            r8.ensureDataBaseInit()
            if (r9 == 0) goto L26
            if (r10 < 0) goto L26
            if (r11 < 0) goto L26
            r0 = 0
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 < 0) goto L26
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 == 0) goto L26
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r8.chunkTableStatements
            if (r0 != 0) goto L18
            goto L26
        L18:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$5 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$5
            r1 = r0
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
        L26:
            return
    }

    @Override
    public void updateSubDownloadChunkIndex(int r8, int r9, int r10, int r11) {
            r7 = this;
            r7.ensureDataBaseInit()
            if (r8 == 0) goto L22
            if (r10 < 0) goto L22
            if (r11 == r9) goto L22
            if (r11 < 0) goto L22
            android.database.sqlite.SQLiteDatabase r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCache.database
            if (r0 == 0) goto L22
            com.ss.android.socialbase.downloader.db.TableStatements r0 = r7.chunkTableStatements
            if (r0 != 0) goto L14
            goto L22
        L14:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache$6 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache$6
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitDBTask(r0)
        L22:
            return
    }
}
