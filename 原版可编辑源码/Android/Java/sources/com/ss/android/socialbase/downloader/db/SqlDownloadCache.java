package com.ss.android.socialbase.downloader.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteStatement;
import android.text.TextUtils;
import android.util.Log;
import android.util.SparseArray;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator;
import com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadChunk;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.segment.Segment;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import org.json.JSONArray;

public class SqlDownloadCache extends ISqlDownloadCacheAidl.Stub implements ISqlDownloadCache {
    private static volatile SQLiteDatabase database;
    private volatile boolean cacheSynced;
    ISqlCacheLoadCompleteCallbackAidl callback;
    private TableStatements chunkTableStatements;
    private TableStatements downloadTableStatements;
    private TableStatements segmentTableStatements;

    @Override
    public boolean ensureDownloadCacheSyncSuccess() {
        return false;
    }

    @Override
    public List<DownloadInfo> getAllDownloadInfo() {
        return null;
    }

    @Override
    public List<DownloadInfo> getFailedDownloadInfosWithMimeType(String str) {
        return null;
    }

    @Override
    public List<DownloadInfo> getSuccessedDownloadInfosWithMimeType(String str) {
        return null;
    }

    @Override
    public List<DownloadInfo> getUnCompletedDownloadInfosWithMimeType(String str) {
        return null;
    }

    @Override
    public DownloadInfo onDownloadTaskStart(int i) {
        return null;
    }

    @Override
    public void syncDownloadChunks(int i, List<DownloadChunk> list) {
    }

    @Override
    public void syncDownloadInfo(DownloadInfo downloadInfo) {
    }

    public SqlDownloadCache() {
        this(false);
    }

    public SqlDownloadCache(boolean z) {
        this.callback = null;
        if (z) {
            this.cacheSynced = false;
            init();
        }
    }

    private void ensureDataBaseInit() {
        if (database == null) {
            synchronized (SqlDownloadCache.class) {
                if (database == null) {
                    try {
                        database = DownloadDBHelper.getInstance().getWritableDatabase();
                        this.downloadTableStatements = new TableStatements(database, DBDefinition.DOWNLOAD_TABLE_NAME, DBDefinition.DOWNLOAD_ALL_COLUMNS, DBDefinition.DOWNLOAD_PK_COLUMNS);
                        this.chunkTableStatements = new TableStatements(database, DBDefinition.CHUNK_TABLE_NAME, DBDefinition.CHUNK_ALL_COLUMNS, DBDefinition.CHUNK_PK_COLUMNS);
                        this.segmentTableStatements = new TableStatements(database, DBDefinition.SEGMENT_TABLE_NAME, DBDefinition.SEGMENT_ALL_COLUMNS, DBDefinition.SEGMENT_PK_COLUMNS);
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            }
        }
    }

    @Override
    public void init() {
        init(new SparseArray<>(), new SparseArray<>(), null);
    }

    @Override
    public void init(final SparseArray<DownloadInfo> sparseArray, final SparseArray<List<DownloadChunk>> sparseArray2, final SqlCacheLoadCompleteCallback sqlCacheLoadCompleteCallback) {
        try {
            Runnable runnable = new Runnable() {
                /* JADX WARN: Removed duplicated region for block: B:167:0x033d A[PHI: r0
                  0x033d: PHI (r0v13 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback) = 
                  (r0v12 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback)
                  (r0v17 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback)
                 binds: [B:166:0x033b, B:161:0x0332] A[DONT_GENERATE, DONT_INLINE]] */
                /* JADX WARN: Removed duplicated region for block: B:84:0x01a6 A[DONT_GENERATE, PHI: r0
                  0x01a6: PHI (r0v28 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback) = 
                  (r0v25 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback)
                  (r0v27 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback)
                  (r0v38 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback)
                  (r0v40 com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback)
                 binds: [B:125:0x0279, B:120:0x026f, B:83:0x01a4, B:78:0x019b] A[DONT_GENERATE, DONT_INLINE]] */
                @Override
                /*
                    Code decompiled incorrectly, please refer to instructions dump.
                */
                public void run() {
                    SqlCacheLoadCompleteCallback sqlCacheLoadCompleteCallback2;
                    SqlCacheLoadCompleteCallback sqlCacheLoadCompleteCallback3;
                    boolean z;
                    SqlDownloadCache.this.ensureDataBaseInit();
                    if (SqlDownloadCache.database == null) {
                        return;
                    }
                    IDownloadIdGenerator idGenerator = DownloadComponentManager.getIdGenerator();
                    SparseArray sparseArray3 = new SparseArray();
                    ArrayList arrayList = new ArrayList();
                    ArrayList arrayList2 = new ArrayList();
                    Cursor cursorRawQuery = null;
                    int i = 0;
                    try {
                        cursorRawQuery = SqlDownloadCache.database.rawQuery("SELECT * FROM downloader", null);
                        while (cursorRawQuery.moveToNext()) {
                            DownloadInfo downloadInfo = new DownloadInfo(cursorRawQuery);
                            downloadInfo.setStatusAtDbInit(downloadInfo.getRealStatus());
                            if (downloadInfo.isCanResumeFromBreakPointStatus()) {
                                downloadInfo.setStatus(-5);
                                if (DownloadSetting.obtainGlobal().optBugFix(DownloadSettingKeys.BugFix.STATUS_NOT_UPDATE_TO_DB, true)) {
                                    sparseArray3.put(downloadInfo.getId(), downloadInfo);
                                }
                            }
                            if (TextUtils.isEmpty(downloadInfo.getSavePath()) || TextUtils.isEmpty(downloadInfo.getName())) {
                                z = true;
                            } else {
                                if (downloadInfo.getStatus() != 1 || downloadInfo.getCurBytes() > 0) {
                                    if (downloadInfo.getStatus() != -3 && downloadInfo.getStatus() != 11 && !downloadInfo.isFileDataValid()) {
                                        downloadInfo.reset();
                                    }
                                    z = false;
                                } else {
                                    z = true;
                                }
                                if (downloadInfo.getStatus() == 11) {
                                    downloadInfo.setStatus(-5);
                                }
                                if (DownloadUtils.isDownloadSuccessAndFileNotExist(downloadInfo.getStatus(), downloadInfo.getSavePath(), downloadInfo.getName())) {
                                    if (DownloadExpSwitchCode.isSwitchEnable(DownloadExpSwitchCode.BACK_CLEAR_DATA)) {
                                        z = true;
                                    } else {
                                        downloadInfo.erase();
                                    }
                                }
                            }
                            if (z) {
                                arrayList.add(Integer.valueOf(downloadInfo.getId()));
                                arrayList2.add(downloadInfo);
                            } else {
                                int id = downloadInfo.getId();
                                int iGenerate = idGenerator != null ? idGenerator.generate(downloadInfo.getUrl(), downloadInfo.getSavePath()) : 0;
                                if (iGenerate != id) {
                                    downloadInfo.setId(iGenerate);
                                    sparseArray3.put(id, downloadInfo);
                                }
                                sparseArray.put(downloadInfo.getId(), downloadInfo);
                            }
                        }
                        DownloadUtils.safeClose(cursorRawQuery);
                        SqlDownloadCache.this.clearAntiHijackDirIfNeeded(arrayList2);
                        SqlDownloadCache.this.loadCacheFromDB(arrayList2, arrayList, sparseArray3, sparseArray, sparseArray2);
                        try {
                            ArrayList arrayList3 = new ArrayList();
                            if (sparseArray != null) {
                                while (i < sparseArray.size()) {
                                    int iKeyAt = sparseArray.keyAt(i);
                                    if (iKeyAt != 0) {
                                        DownloadInfo downloadInfo2 = (DownloadInfo) sparseArray.get(iKeyAt);
                                        if (DownloadExpSwitchCode.isSwitchEnable(8192)) {
                                            if (downloadInfo2 != null && !downloadInfo2.isChunkBreakpointAvailable() && downloadInfo2.getStatus() != -3) {
                                                arrayList3.add(Integer.valueOf(downloadInfo2.getId()));
                                                sparseArray2.remove(downloadInfo2.getId());
                                            }
                                        } else if (downloadInfo2 != null && !downloadInfo2.isChunkBreakpointAvailable()) {
                                            arrayList3.add(Integer.valueOf(downloadInfo2.getId()));
                                            sparseArray2.remove(downloadInfo2.getId());
                                        }
                                    }
                                    Iterator it = arrayList3.iterator();
                                    while (it.hasNext()) {
                                        sparseArray.remove(((Integer) it.next()).intValue());
                                    }
                                    i++;
                                }
                            }
                            sqlCacheLoadCompleteCallback3 = sqlCacheLoadCompleteCallback;
                        } catch (Throwable th) {
                            try {
                                th.printStackTrace();
                            } finally {
                            }
                        }
                    } catch (Throwable th2) {
                        try {
                            th2.printStackTrace();
                            DownloadUtils.safeClose(cursorRawQuery);
                            SqlDownloadCache.this.clearAntiHijackDirIfNeeded(arrayList2);
                            SqlDownloadCache.this.loadCacheFromDB(arrayList2, arrayList, sparseArray3, sparseArray, sparseArray2);
                            try {
                                ArrayList arrayList4 = new ArrayList();
                                if (sparseArray != null) {
                                    while (i < sparseArray.size()) {
                                        int iKeyAt2 = sparseArray.keyAt(i);
                                        if (iKeyAt2 != 0) {
                                            DownloadInfo downloadInfo3 = (DownloadInfo) sparseArray.get(iKeyAt2);
                                            if (DownloadExpSwitchCode.isSwitchEnable(8192)) {
                                                if (downloadInfo3 != null && !downloadInfo3.isChunkBreakpointAvailable() && downloadInfo3.getStatus() != -3) {
                                                    arrayList4.add(Integer.valueOf(downloadInfo3.getId()));
                                                    sparseArray2.remove(downloadInfo3.getId());
                                                }
                                            } else if (downloadInfo3 != null && !downloadInfo3.isChunkBreakpointAvailable()) {
                                                arrayList4.add(Integer.valueOf(downloadInfo3.getId()));
                                                sparseArray2.remove(downloadInfo3.getId());
                                            }
                                        }
                                        Iterator it2 = arrayList4.iterator();
                                        while (it2.hasNext()) {
                                            sparseArray.remove(((Integer) it2.next()).intValue());
                                        }
                                        i++;
                                    }
                                }
                                sqlCacheLoadCompleteCallback3 = sqlCacheLoadCompleteCallback;
                                if (sqlCacheLoadCompleteCallback3 != null) {
                                }
                            } catch (Throwable th3) {
                                try {
                                    th3.printStackTrace();
                                    sqlCacheLoadCompleteCallback3 = sqlCacheLoadCompleteCallback;
                                    if (sqlCacheLoadCompleteCallback3 != null) {
                                    }
                                } finally {
                                    SqlCacheLoadCompleteCallback sqlCacheLoadCompleteCallback4 = sqlCacheLoadCompleteCallback;
                                    if (sqlCacheLoadCompleteCallback4 != null) {
                                        sqlCacheLoadCompleteCallback4.callback();
                                        SqlDownloadCache.this.cacheSynced = true;
                                    }
                                    SqlDownloadCache.this.onInitFinish(sparseArray, sparseArray2);
                                }
                            }
                        } catch (Throwable th4) {
                            DownloadUtils.safeClose(cursorRawQuery);
                            SqlDownloadCache.this.clearAntiHijackDirIfNeeded(arrayList2);
                            SqlDownloadCache.this.loadCacheFromDB(arrayList2, arrayList, sparseArray3, sparseArray, sparseArray2);
                            try {
                                ArrayList arrayList5 = new ArrayList();
                                if (sparseArray != null) {
                                    while (i < sparseArray.size()) {
                                        int iKeyAt3 = sparseArray.keyAt(i);
                                        if (iKeyAt3 != 0) {
                                            DownloadInfo downloadInfo4 = (DownloadInfo) sparseArray.get(iKeyAt3);
                                            if (DownloadExpSwitchCode.isSwitchEnable(8192)) {
                                                if (downloadInfo4 != null && !downloadInfo4.isChunkBreakpointAvailable() && downloadInfo4.getStatus() != -3) {
                                                    arrayList5.add(Integer.valueOf(downloadInfo4.getId()));
                                                    sparseArray2.remove(downloadInfo4.getId());
                                                }
                                            } else if (downloadInfo4 != null && !downloadInfo4.isChunkBreakpointAvailable()) {
                                                arrayList5.add(Integer.valueOf(downloadInfo4.getId()));
                                                sparseArray2.remove(downloadInfo4.getId());
                                            }
                                        }
                                        Iterator it3 = arrayList5.iterator();
                                        while (it3.hasNext()) {
                                            sparseArray.remove(((Integer) it3.next()).intValue());
                                        }
                                        i++;
                                    }
                                }
                                sqlCacheLoadCompleteCallback2 = sqlCacheLoadCompleteCallback;
                                if (sqlCacheLoadCompleteCallback2 != null) {
                                }
                            } catch (Throwable th5) {
                                try {
                                    th5.printStackTrace();
                                    sqlCacheLoadCompleteCallback2 = sqlCacheLoadCompleteCallback;
                                    if (sqlCacheLoadCompleteCallback2 != null) {
                                        sqlCacheLoadCompleteCallback2.callback();
                                        SqlDownloadCache.this.cacheSynced = true;
                                    }
                                } finally {
                                    SqlCacheLoadCompleteCallback sqlCacheLoadCompleteCallback5 = sqlCacheLoadCompleteCallback;
                                    if (sqlCacheLoadCompleteCallback5 != null) {
                                        sqlCacheLoadCompleteCallback5.callback();
                                        SqlDownloadCache.this.cacheSynced = true;
                                    }
                                    SqlDownloadCache.this.onInitFinish(sparseArray, sparseArray2);
                                }
                            }
                            SqlDownloadCache.this.onInitFinish(sparseArray, sparseArray2);
                            throw th4;
                        }
                    }
                    if (sqlCacheLoadCompleteCallback3 != null) {
                    }
                }
            };
            ExecutorService dBThreadExecutorService = DownloadComponentManager.getDBThreadExecutorService();
            if (dBThreadExecutorService != null) {
                dBThreadExecutorService.execute(runnable);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void clearAntiHijackDirIfNeeded(List<DownloadInfo> list) {
        if (list == null) {
            return;
        }
        try {
            for (DownloadInfo downloadInfo : list) {
                if (downloadInfo != null && downloadInfo.isSavePathRedirected()) {
                    DownloadUtils.clearAntiHijackDir(downloadInfo);
                }
            }
        } catch (Throwable unused) {
        }
    }

    private void safeBeginTransaction() {
        database.beginTransaction();
    }

    private void loadCacheFromDB(List<DownloadInfo> list, List<Integer> list2, SparseArray<DownloadInfo> sparseArray, SparseArray<DownloadInfo> sparseArray2, SparseArray<List<DownloadChunk>> sparseArray3) {
        int size = sparseArray.size();
        if (size < 0 || database == null) {
            return;
        }
        synchronized (database) {
            try {
                try {
                    safeBeginTransaction();
                    if (!list.isEmpty()) {
                        if (DownloadSetting.obtainGlobal().optBugFix(DownloadSettingKeys.BugFix.BUGFIX_CLEAR_INVALID_TASK_ERROR)) {
                            String[] strArr = new String[list.size()];
                            for (int i = 0; i < list.size(); i++) {
                                strArr[i] = String.valueOf(list.get(i));
                            }
                            String str = "CAST(_id AS TEXT) IN (" + new String(new char[list.size() - 1]).replace("\u0000", "?,") + "?)";
                            database.delete(DBDefinition.DOWNLOAD_TABLE_NAME, str, strArr);
                            database.delete(DBDefinition.CHUNK_TABLE_NAME, str, strArr);
                        } else {
                            String strJoin = TextUtils.join(", ", list2);
                            database.delete(DBDefinition.DOWNLOAD_TABLE_NAME, "_id IN (?)", new String[]{strJoin});
                            database.delete(DBDefinition.CHUNK_TABLE_NAME, "_id IN (?)", new String[]{strJoin});
                        }
                    }
                    for (int i2 = 0; i2 < size; i2++) {
                        int iKeyAt = sparseArray.keyAt(i2);
                        DownloadInfo downloadInfo = sparseArray.get(iKeyAt);
                        database.delete(DBDefinition.DOWNLOAD_TABLE_NAME, "_id = ?", new String[]{String.valueOf(iKeyAt)});
                        database.insert(DBDefinition.DOWNLOAD_TABLE_NAME, null, downloadInfo.toContentValues());
                        if (downloadInfo.getChunkCount() > 1) {
                            List<DownloadChunk> downloadChunk = getDownloadChunk(iKeyAt);
                            if (downloadChunk.size() > 0) {
                                database.delete(DBDefinition.CHUNK_TABLE_NAME, "_id = ?", new String[]{String.valueOf(iKeyAt)});
                                for (DownloadChunk downloadChunk2 : downloadChunk) {
                                    downloadChunk2.setId(downloadInfo.getId());
                                    database.insert(DBDefinition.CHUNK_TABLE_NAME, null, downloadChunk2.toContentValues());
                                }
                            }
                        }
                    }
                    if (sparseArray2 != null && sparseArray3 != null) {
                        int size2 = sparseArray2.size();
                        for (int i3 = 0; i3 < size2; i3++) {
                            int id = sparseArray2.valueAt(i3).getId();
                            List<DownloadChunk> hostChunkList = DownloadUtils.parseHostChunkList(getDownloadChunk(id));
                            if (hostChunkList != null && hostChunkList.size() > 0) {
                                sparseArray3.put(id, hostChunkList);
                            }
                        }
                    }
                    database.setTransactionSuccessful();
                } finally {
                    try {
                    } finally {
                    }
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    @Override
    public boolean cacheExist(int i) {
        try {
            return getDownloadInfo(i) != null;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    @Override
    public DownloadInfo getDownloadInfo(int i) {
        Cursor cursorRawQuery;
        ensureDataBaseInit();
        if (database != null) {
            try {
                cursorRawQuery = database.rawQuery(String.format("SELECT * FROM %s WHERE %s = ?", DBDefinition.DOWNLOAD_TABLE_NAME, "_id"), new String[]{Integer.toString(i)});
                try {
                    if (cursorRawQuery.moveToNext()) {
                        DownloadInfo downloadInfo = new DownloadInfo(cursorRawQuery);
                        DownloadUtils.safeClose(cursorRawQuery);
                        return downloadInfo;
                    }
                    DownloadUtils.safeClose(cursorRawQuery);
                } catch (Throwable th) {
                    th = th;
                    try {
                        th.printStackTrace();
                        DownloadUtils.safeClose(cursorRawQuery);
                    } catch (Throwable th2) {
                        DownloadUtils.safeClose(cursorRawQuery);
                        throw th2;
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                cursorRawQuery = null;
            }
        }
        return null;
    }

    @Override
    public List<DownloadInfo> getDownloadInfoList(String str) {
        ensureDataBaseInit();
        ArrayList arrayList = new ArrayList();
        if (database != null) {
            Cursor cursorRawQuery = null;
            try {
                cursorRawQuery = database.rawQuery(String.format("SELECT * FROM %s WHERE %s = ?", DBDefinition.DOWNLOAD_TABLE_NAME, "url"), new String[]{str});
                if (cursorRawQuery.moveToNext()) {
                    arrayList.add(new DownloadInfo(cursorRawQuery));
                }
                DownloadUtils.safeClose(cursorRawQuery);
            } catch (Throwable th) {
                try {
                    th.printStackTrace();
                    DownloadUtils.safeClose(cursorRawQuery);
                } catch (Throwable th2) {
                    DownloadUtils.safeClose(cursorRawQuery);
                    throw th2;
                }
            }
        }
        return arrayList;
    }

    @Override
    public List<DownloadChunk> getDownloadChunk(int i) {
        ArrayList arrayList = new ArrayList();
        ensureDataBaseInit();
        if (database != null) {
            Cursor cursorRawQuery = null;
            try {
                cursorRawQuery = database.rawQuery(String.format("SELECT * FROM %s WHERE %s = ?", DBDefinition.CHUNK_TABLE_NAME, "_id"), new String[]{Integer.toString(i)});
                while (cursorRawQuery.moveToNext()) {
                    arrayList.add(new DownloadChunk(cursorRawQuery));
                }
                DownloadUtils.safeClose(cursorRawQuery);
            } catch (Throwable th) {
                try {
                    th.printStackTrace();
                    DownloadUtils.safeClose(cursorRawQuery);
                } catch (Throwable th2) {
                    DownloadUtils.safeClose(cursorRawQuery);
                    throw th2;
                }
            }
        }
        return arrayList;
    }

    @Override
    public void removeAllDownloadChunk(final int i) {
        ensureDataBaseInit();
        if (database == null || this.chunkTableStatements == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                try {
                    SqlDownloadCache.this.deleteInner(i, SqlDownloadCache.this.chunkTableStatements.getDeleteStatement());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    private void deleteInner(int i, SQLiteStatement sQLiteStatement) {
        if (sQLiteStatement == null) {
            return;
        }
        try {
            synchronized (sQLiteStatement) {
                sQLiteStatement.bindLong(1, i);
                sQLiteStatement.execute();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public void addDownloadChunk(final DownloadChunk downloadChunk) {
        ensureDataBaseInit();
        if (database == null || this.chunkTableStatements == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                try {
                    SqlDownloadCache.this.insertDownloadChunkInner(downloadChunk, SqlDownloadCache.this.chunkTableStatements.getInsertStatement());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    @Override
    public void addSubDownloadChunk(DownloadChunk downloadChunk) {
        addDownloadChunk(downloadChunk);
    }

    private void insertDownloadInfoInner(DownloadInfo downloadInfo, SQLiteStatement sQLiteStatement) {
        if (downloadInfo == null || sQLiteStatement == null) {
            return;
        }
        try {
            synchronized (sQLiteStatement) {
                downloadInfo.bindValue(sQLiteStatement);
                sQLiteStatement.executeInsert();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void insertDownloadChunkInner(DownloadChunk downloadChunk, SQLiteStatement sQLiteStatement) {
        if (downloadChunk == null || sQLiteStatement == null) {
            return;
        }
        try {
            synchronized (sQLiteStatement) {
                downloadChunk.bindValue(sQLiteStatement);
                sQLiteStatement.executeInsert();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public void updateDownloadChunk(final int i, final int i2, final long j) {
        ensureDataBaseInit();
        if (i == 0 || i2 < 0 || j < 0 || database == null || this.chunkTableStatements == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                try {
                    SqlDownloadCache.this.updateDownloadChunkInner(i, i2, j, SqlDownloadCache.this.chunkTableStatements.getUpdateStatement());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    @Override
    public void updateSubDownloadChunk(final int i, final int i2, final int i3, final long j) {
        ensureDataBaseInit();
        if (i == 0 || i2 < 0 || i3 < 0 || j < 0 || database == null || this.chunkTableStatements == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                try {
                    SqlDownloadCache.this.updateSubDownloadChunkInner(i, i2, i3, j, SqlDownloadCache.this.chunkTableStatements.getUpdateStatement());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    @Override
    public void updateSubDownloadChunkIndex(final int i, final int i2, final int i3, final int i4) {
        ensureDataBaseInit();
        if (i == 0 || i3 < 0 || i4 == i2 || i4 < 0 || database == null || this.chunkTableStatements == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                try {
                    SqlDownloadCache.this.updateSubDownloadChunkIndexInner(i, i2, i3, i4, SqlDownloadCache.this.chunkTableStatements.getUpdateStatement());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    private void updateSubDownloadChunkIndexInner(int i, int i2, int i3, int i4, SQLiteStatement sQLiteStatement) {
        try {
            synchronized (sQLiteStatement) {
                ContentValues contentValues = new ContentValues();
                contentValues.put(DBDefinition.CHUNK_INDEX, Integer.valueOf(i4));
                database.update(DBDefinition.CHUNK_TABLE_NAME, contentValues, "_id = ? AND chunkIndex = ? AND hostChunkIndex = ?", new String[]{Integer.toString(i), Integer.toString(i2), Integer.toString(i3)});
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void updateDownloadChunkInner(int i, int i2, long j, SQLiteStatement sQLiteStatement) {
        try {
            synchronized (sQLiteStatement) {
                ContentValues contentValues = new ContentValues();
                contentValues.put(DBDefinition.CUR_OFFSET, Long.valueOf(j));
                database.update(DBDefinition.CHUNK_TABLE_NAME, contentValues, "_id = ? AND chunkIndex = ?", new String[]{Integer.toString(i), Integer.toString(i2)});
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void updateSubDownloadChunkInner(int i, int i2, int i3, long j, SQLiteStatement sQLiteStatement) {
        try {
            synchronized (sQLiteStatement) {
                ContentValues contentValues = new ContentValues();
                contentValues.put(DBDefinition.CUR_OFFSET, Long.valueOf(j));
                database.update(DBDefinition.CHUNK_TABLE_NAME, contentValues, "_id = ? AND chunkIndex = ? AND hostChunkIndex = ?", new String[]{Integer.toString(i), Integer.toString(i2), Integer.toString(i3)});
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void updateDownloadInfoInner(DownloadInfo downloadInfo, SQLiteStatement sQLiteStatement) {
        if (downloadInfo == null || sQLiteStatement == null) {
            return;
        }
        try {
            synchronized (sQLiteStatement) {
                downloadInfo.bindValue(sQLiteStatement);
                sQLiteStatement.bindLong(downloadInfo.getBindValueCount() + 1, downloadInfo.getId());
                sQLiteStatement.execute();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public DownloadInfo updateChunkCount(int i, int i2) {
        ensureDataBaseInit();
        if (database == null) {
            return null;
        }
        int i3 = 10;
        while (database.isDbLockedByCurrentThread() && i3 - 1 >= 0) {
            try {
                try {
                    Thread.sleep(5L);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put(DBDefinition.CHUNK_COUNT, Integer.valueOf(i2));
        database.update(DBDefinition.DOWNLOAD_TABLE_NAME, contentValues, "_id = ? ", new String[]{Integer.toString(i)});
        return null;
    }

    private void addDownloadInfo(final DownloadInfo downloadInfo) {
        ensureDataBaseInit();
        if (database == null || this.downloadTableStatements == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                try {
                    SqlDownloadCache.this.insertDownloadInfoInner(downloadInfo, SqlDownloadCache.this.downloadTableStatements.getInsertStatement());
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    @Override
    public boolean updateDownloadInfo(final DownloadInfo downloadInfo) {
        ensureDataBaseInit();
        if (downloadInfo == null || database == null) {
            return false;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                SqlDownloadCache.this.updateDownloadInfoForCurrentThread(downloadInfo);
            }
        });
        return true;
    }

    private synchronized void updateDownloadInfoForCurrentThread(DownloadInfo downloadInfo) {
        if (downloadInfo == null) {
            return;
        }
        try {
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (!cacheExist(downloadInfo.getId())) {
            addDownloadInfo(downloadInfo);
        } else {
            if (this.downloadTableStatements == null) {
                return;
            }
            try {
                updateDownloadInfoInner(downloadInfo, this.downloadTableStatements.getUpdateStatement());
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
    }

    private void safeEndTransaction() {
        try {
            if (database == null || !database.inTransaction()) {
                return;
            }
            database.endTransaction();
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public boolean removeDownloadInfo(int i) {
        TableStatements tableStatements;
        ensureDataBaseInit();
        if (database != null && (tableStatements = this.downloadTableStatements) != null) {
            try {
                deleteInner(i, tableStatements.getDeleteStatement());
                return true;
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return false;
    }

    @Override
    public boolean removeDownloadTaskData(final int i) {
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                SqlDownloadCache.this.removeDownloadInfo(i);
                SqlDownloadCache.this.removeAllDownloadChunk(i);
                SqlDownloadCache.this.removeSegments(i);
            }
        });
        return true;
    }

    @Override
    public void clearData() {
        ensureDataBaseInit();
        if (database == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                SqlDownloadCache.this.clearDataInSubThread();
            }
        });
    }

    private synchronized void clearDataInSubThread() {
        try {
            safeBeginTransaction();
            database.delete(DBDefinition.DOWNLOAD_TABLE_NAME, null, null);
            database.delete(DBDefinition.CHUNK_TABLE_NAME, null, null);
            database.setTransactionSuccessful();
        } finally {
            try {
            } finally {
            }
        }
    }

    @Override
    public DownloadInfo OnDownloadTaskConnected(int i, long j, String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) 3);
        contentValues.put(DBDefinition.TOTAL_BYTES, Long.valueOf(j));
        contentValues.put(DBDefinition.ETAG, str);
        if (!TextUtils.isEmpty(str2)) {
            contentValues.put("name", str2);
        }
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskProgress(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) 4);
        contentValues.put(DBDefinition.CUR_BYTES, Long.valueOf(j));
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskError(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) (-1));
        contentValues.put(DBDefinition.CUR_BYTES, Long.valueOf(j));
        if (j > 0) {
            contentValues.put(DBDefinition.FIRST_DOWNLOAD, (Integer) 0);
        }
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskRetry(int i) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) 5);
        contentValues.put(DBDefinition.FIRST_DOWNLOAD, (Integer) 0);
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskCompleted(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) (-3));
        contentValues.put(DBDefinition.CUR_BYTES, Long.valueOf(j));
        contentValues.put(DBDefinition.FIRST_DOWNLOAD, (Integer) 0);
        contentValues.put(DBDefinition.FIRST_SUCCESS, (Integer) 0);
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskPause(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) (-2));
        contentValues.put(DBDefinition.CUR_BYTES, Long.valueOf(j));
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskCancel(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) (-4));
        contentValues.put(DBDefinition.CUR_BYTES, Long.valueOf(j));
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskPrepare(int i) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) 1);
        update(i, contentValues);
        return null;
    }

    @Override
    public DownloadInfo OnDownloadTaskIntercept(int i) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) (-7));
        update(i, contentValues);
        return null;
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
        return this.cacheSynced;
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int i, List<DownloadChunk> list) {
        try {
            removeAllDownloadChunk(i);
            if (list != null) {
                for (DownloadChunk downloadChunk : list) {
                    if (downloadChunk != null) {
                        addDownloadChunk(downloadChunk);
                        if (downloadChunk.hasChunkDivided()) {
                            Iterator<DownloadChunk> it = downloadChunk.getSubChunkList().iterator();
                            while (it.hasNext()) {
                                addDownloadChunk(it.next());
                            }
                        }
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public ArrayList<Segment> getSegments(int i) {
        Map<Long, Segment> segmentMap = getSegmentMap(i);
        if (segmentMap == null || segmentMap.isEmpty()) {
            return null;
        }
        return new ArrayList<>(segmentMap.values());
    }

    @Override
    public Map<Long, Segment> getSegmentMap(int i) {
        Cursor cursorRawQuery;
        ensureDataBaseInit();
        if (database != null) {
            try {
                cursorRawQuery = database.rawQuery(String.format("SELECT * FROM %s WHERE %s = ?", DBDefinition.SEGMENT_TABLE_NAME, "_id"), new String[]{Integer.toString(i)});
                try {
                    if (cursorRawQuery.moveToNext()) {
                        int columnIndex = cursorRawQuery.getColumnIndex(DBDefinition.SEGMENT_INFO);
                        String string = columnIndex >= 0 ? cursorRawQuery.getString(columnIndex) : null;
                        HashMap map = new HashMap();
                        JSONArray jSONArray = new JSONArray(string);
                        for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                            Segment segment = new Segment(jSONArray.getJSONObject(i2));
                            map.put(Long.valueOf(segment.getStartOffset()), segment);
                        }
                        DownloadUtils.safeClose(cursorRawQuery);
                        return map;
                    }
                    DownloadUtils.safeClose(cursorRawQuery);
                } catch (Throwable th) {
                    th = th;
                    try {
                        th.printStackTrace();
                        DownloadUtils.safeClose(cursorRawQuery);
                    } catch (Throwable th2) {
                        DownloadUtils.safeClose(cursorRawQuery);
                        throw th2;
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                cursorRawQuery = null;
            }
        }
        return null;
    }

    @Override
    public boolean updateSegments(int i, Map<Long, Segment> map) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        ensureDataBaseInit();
        if (database == null) {
            return false;
        }
        JSONArray jSONArray = new JSONArray();
        try {
            Iterator<Long> it = map.keySet().iterator();
            while (it.hasNext()) {
                jSONArray.put(map.get(Long.valueOf(it.next().longValue())).toJson());
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        Log.d("SqlDownloadCache", "json=" + jSONArray);
        SQLiteStatement insertOrReplaceStatement = this.segmentTableStatements.getInsertOrReplaceStatement();
        synchronized (insertOrReplaceStatement) {
            insertOrReplaceStatement.clearBindings();
            insertOrReplaceStatement.bindLong(1, i);
            insertOrReplaceStatement.bindString(2, jSONArray.toString());
            insertOrReplaceStatement.execute();
        }
        Logger.d("SqlDownloadCache", "updateSegments cost=" + DownloadUtils.cost(jCurrentTimeMillis));
        return false;
    }

    @Override
    public void removeSegments(int i) {
        ensureDataBaseInit();
        if (database == null) {
            return;
        }
        try {
            deleteInner(i, this.segmentTableStatements.getDeleteStatement());
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void update(final int i, final ContentValues contentValues) {
        ensureDataBaseInit();
        if (database == null) {
            return;
        }
        DownloadComponentManager.submitDBTask(new Runnable() {
            @Override
            public void run() {
                SqlDownloadCache.this.updateInner(i, contentValues);
            }
        });
    }

    private void updateInner(int i, ContentValues contentValues) {
        int i2 = 10;
        while (database.isDbLockedByCurrentThread() && i2 - 1 >= 0) {
            try {
                try {
                    Thread.sleep(5L);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
                return;
            }
        }
        try {
            database.update(DBDefinition.DOWNLOAD_TABLE_NAME, contentValues, "_id = ? ", new String[]{String.valueOf(i)});
        } catch (Throwable th3) {
            th3.printStackTrace();
        }
    }

    @Override
    public void setInitCallback(ISqlCacheLoadCompleteCallbackAidl iSqlCacheLoadCompleteCallbackAidl) {
        this.callback = iSqlCacheLoadCompleteCallbackAidl;
    }

    public void onInitFinish(SparseArray<DownloadInfo> sparseArray, SparseArray<List<DownloadChunk>> sparseArray2) {
        try {
            HashMap mapSparseArrayToHashMap = DownloadUtils.sparseArrayToHashMap(sparseArray);
            HashMap mapSparseArrayToHashMap2 = DownloadUtils.sparseArrayToHashMap(sparseArray2);
            if (this.callback != null) {
                this.callback.callback(mapSparseArrayToHashMap, mapSparseArrayToHashMap2);
            }
        } catch (Throwable unused) {
        }
    }
}
