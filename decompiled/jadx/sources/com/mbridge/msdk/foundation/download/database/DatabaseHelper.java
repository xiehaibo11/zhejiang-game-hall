package com.mbridge.msdk.foundation.download.database;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Handler;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.download.core.GlobalComponent;
import com.mbridge.msdk.foundation.download.database.IDatabaseHelper;
import com.mbridge.msdk.foundation.download.utils.Objects;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class DatabaseHelper implements IDatabaseHelper {
    private volatile SQLiteDatabase database;
    private final IDatabaseOpenHelper databaseOpenHelper;
    private final Handler handler;
    private final String tableName = GlobalComponent.getInstance().getDatabaseTableName();

    public DatabaseHelper(Context context, Handler handler, IDatabaseOpenHelper iDatabaseOpenHelper) {
        this.handler = handler;
        this.databaseOpenHelper = iDatabaseOpenHelper;
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void find(final String str, final String str2, final IDatabaseHelper.IDatabaseListener iDatabaseListener) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.1
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.String] */
            /* JADX WARN: Type inference failed for: r0v4, types: [android.database.Cursor] */
            /* JADX WARN: Type inference failed for: r0v6 */
            @Override // java.lang.Runnable
            public void run() throws Throwable {
                Cursor cursorRawQuery;
                IDatabaseHelper.IDatabaseListener iDatabaseListener2;
                ?? r0 = " = '";
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                DownloadModel downloadModelCreate = null;
                if (!Objects.isNull(DatabaseHelper.this.database)) {
                    try {
                        if (DatabaseHelper.this.database.isOpen()) {
                            try {
                                cursorRawQuery = DatabaseHelper.this.database.rawQuery("SELECT * FROM " + DatabaseHelper.this.tableName + " WHERE download_id = '" + str + "' AND " + DownloadModel.DIRECTORY_PATH + " = '" + str2 + "'", null);
                                if (cursorRawQuery != null) {
                                    try {
                                        if (cursorRawQuery.moveToFirst()) {
                                            downloadModelCreate = DownloadModel.create(cursorRawQuery);
                                        }
                                    } catch (Exception e) {
                                        e = e;
                                        if (MBridgeConstans.DEBUG) {
                                            e.printStackTrace();
                                        }
                                        if (cursorRawQuery != null) {
                                            cursorRawQuery.close();
                                        }
                                        iDatabaseListener2 = iDatabaseListener;
                                        if (iDatabaseListener2 == null) {
                                            return;
                                        }
                                    }
                                }
                                if (cursorRawQuery != null) {
                                    cursorRawQuery.close();
                                }
                                iDatabaseListener2 = iDatabaseListener;
                                if (iDatabaseListener2 == null) {
                                    return;
                                }
                            } catch (Exception e2) {
                                e = e2;
                                cursorRawQuery = null;
                            } catch (Throwable th) {
                                th = th;
                                r0 = 0;
                                if (r0 != 0) {
                                    r0.close();
                                }
                                IDatabaseHelper.IDatabaseListener iDatabaseListener3 = iDatabaseListener;
                                if (iDatabaseListener3 != null) {
                                    iDatabaseListener3.onDatabase(null);
                                }
                                throw th;
                            }
                            iDatabaseListener2.onDatabase(downloadModelCreate);
                            return;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                    }
                }
                if (Objects.isNotNull(iDatabaseListener)) {
                    iDatabaseListener.onDatabase(null);
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void findByDownloadUrl(final String str, final IDatabaseHelper.IDatabaseListener iDatabaseListener) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.2
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Type inference failed for: r0v11, types: [boolean] */
            /* JADX WARN: Type inference failed for: r0v12, types: [android.database.Cursor] */
            /* JADX WARN: Type inference failed for: r0v14 */
            @Override // java.lang.Runnable
            public void run() throws Throwable {
                Cursor cursorRawQuery;
                IDatabaseHelper.IDatabaseListener iDatabaseListener2;
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                DownloadModel downloadModelCreate = null;
                if (!Objects.isNull(DatabaseHelper.this.database)) {
                    ?? IsOpen = DatabaseHelper.this.database.isOpen();
                    try {
                        if (IsOpen != 0) {
                            try {
                                cursorRawQuery = DatabaseHelper.this.database.rawQuery("SELECT * FROM " + DatabaseHelper.this.tableName + " WHERE download_url = '" + str + "'", null);
                                if (cursorRawQuery != null) {
                                    try {
                                        if (cursorRawQuery.moveToFirst()) {
                                            downloadModelCreate = DownloadModel.create(cursorRawQuery);
                                        }
                                    } catch (Exception e) {
                                        e = e;
                                        if (MBridgeConstans.DEBUG) {
                                            e.printStackTrace();
                                        }
                                        if (cursorRawQuery != null) {
                                            cursorRawQuery.close();
                                        }
                                        iDatabaseListener2 = iDatabaseListener;
                                        if (iDatabaseListener2 == null) {
                                            return;
                                        }
                                    }
                                }
                                if (cursorRawQuery != null) {
                                    cursorRawQuery.close();
                                }
                                iDatabaseListener2 = iDatabaseListener;
                                if (iDatabaseListener2 == null) {
                                    return;
                                }
                            } catch (Exception e2) {
                                e = e2;
                                cursorRawQuery = null;
                            } catch (Throwable th) {
                                th = th;
                                IsOpen = 0;
                                if (IsOpen != 0) {
                                    IsOpen.close();
                                }
                                IDatabaseHelper.IDatabaseListener iDatabaseListener3 = iDatabaseListener;
                                if (iDatabaseListener3 != null) {
                                    iDatabaseListener3.onDatabase(null);
                                }
                                throw th;
                            }
                            iDatabaseListener2.onDatabase(downloadModelCreate);
                            return;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                    }
                }
                if (Objects.isNotNull(iDatabaseListener)) {
                    iDatabaseListener.onDatabase(null);
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void insert(final DownloadModel downloadModel) {
        this.handler.postAtFrontOfQueue(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.3
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    return;
                }
                try {
                    try {
                        if (DatabaseHelper.this.database.isOpen()) {
                            try {
                                DatabaseHelper.this.database.beginTransaction();
                                DatabaseHelper.this.database.insert(DatabaseHelper.this.tableName, null, DownloadModel.create(downloadModel));
                                DatabaseHelper.this.database.setTransactionSuccessful();
                                DatabaseHelper.this.database.endTransaction();
                            } catch (Exception e) {
                                if (MBridgeConstans.DEBUG) {
                                    e.printStackTrace();
                                }
                                DatabaseHelper.this.database.endTransaction();
                            }
                        }
                    } catch (Throwable th) {
                        try {
                            DatabaseHelper.this.database.endTransaction();
                        } catch (Throwable th2) {
                            z.d(IDatabaseHelper.TAG, th2.getMessage());
                        }
                        throw th;
                    }
                } catch (Throwable th3) {
                    z.d(IDatabaseHelper.TAG, th3.getMessage());
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void update(final DownloadModel downloadModel, final String str) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.4
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database) || !DatabaseHelper.this.database.isOpen()) {
                    return;
                }
                try {
                    DatabaseHelper.this.database.update(DatabaseHelper.this.tableName, DownloadModel.create(downloadModel), "download_id = ? AND director_path = ?", new String[]{downloadModel.getDownloadId(), str});
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void updateProgress(final String str, final String str2, final DownloadModel downloadModel) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.5
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database) || !DatabaseHelper.this.database.isOpen()) {
                    return;
                }
                try {
                    DatabaseHelper.this.database.update(DatabaseHelper.this.tableName, DownloadModel.create(downloadModel), "download_id = ? AND director_path = ?", new String[]{str, str2});
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void remove(final String str, final String str2) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.6
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database) || !DatabaseHelper.this.database.isOpen()) {
                    return;
                }
                try {
                    DatabaseHelper.this.database.execSQL("DELETE FROM " + DatabaseHelper.this.tableName + " WHERE download_id = '" + str + "' AND " + DownloadModel.DIRECTORY_PATH + " = '" + str2 + "'");
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void remove(final String str) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.7
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database) || !DatabaseHelper.this.database.isOpen()) {
                    return;
                }
                try {
                    DatabaseHelper.this.database.execSQL("DELETE FROM " + DatabaseHelper.this.tableName + " WHERE download_id = '" + str + "'");
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x007c A[PHI: r1
      0x007c: PHI (r1v3 android.database.Cursor) = (r1v1 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:26:0x007a, B:17:0x006c] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.util.List<com.mbridge.msdk.foundation.download.database.DownloadModel> getUnwantedModels(long r6) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.download.database.DatabaseHelper.getUnwantedModels(long):java.util.List");
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void updateUnzipResource(final String str, String str2, long j) {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.8
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database) || !DatabaseHelper.this.database.isOpen()) {
                    return;
                }
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("download_id", str);
                    DatabaseHelper.this.database.update(DatabaseHelper.this.tableName, contentValues, "download_id = '" + str + "'", null);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public Cursor rawQuery(String str, String[] strArr) {
        try {
            try {
                if (Objects.isNull(this.database)) {
                    this.database = this.databaseOpenHelper.getWritableDatabase();
                }
                if (!Objects.isNull(this.database) && this.database.isOpen()) {
                    this.database.beginTransaction();
                    Cursor cursorRawQuery = this.database.rawQuery(str, strArr);
                    this.database.setTransactionSuccessful();
                    return cursorRawQuery;
                }
                try {
                    this.database.endTransaction();
                } catch (Throwable th) {
                    if (MBridgeConstans.DEBUG) {
                        th.printStackTrace();
                    }
                }
                return null;
            } finally {
                try {
                    this.database.endTransaction();
                } catch (Throwable th2) {
                    if (MBridgeConstans.DEBUG) {
                        th2.printStackTrace();
                    }
                }
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
            try {
                this.database.endTransaction();
            } catch (Throwable th3) {
                if (MBridgeConstans.DEBUG) {
                    th3.printStackTrace();
                }
            }
            return null;
        }
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public List<DownloadModel> findAll() {
        ArrayList arrayList = new ArrayList();
        Cursor cursorRawQuery = null;
        try {
            try {
                if (Objects.isNull(this.database)) {
                    this.database = this.databaseOpenHelper.getWritableDatabase();
                }
                if (!Objects.isNull(this.database) && this.database.isOpen()) {
                    cursorRawQuery = rawQuery("SELECT * FROM " + this.tableName, null);
                    if (cursorRawQuery != null) {
                        while (cursorRawQuery.moveToNext()) {
                            arrayList.add(DownloadModel.create(cursorRawQuery));
                        }
                    }
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                }
                return arrayList;
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
                return arrayList;
            }
        } catch (Throwable unused) {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return arrayList;
        }
    }

    @Override // com.mbridge.msdk.foundation.download.database.IDatabaseHelper
    public void clear() {
        this.handler.post(new Runnable() { // from class: com.mbridge.msdk.foundation.download.database.DatabaseHelper.9
            @Override // java.lang.Runnable
            public void run() {
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    DatabaseHelper databaseHelper = DatabaseHelper.this;
                    databaseHelper.database = databaseHelper.databaseOpenHelper.getWritableDatabase();
                }
                if (Objects.isNull(DatabaseHelper.this.database)) {
                    return;
                }
                try {
                    try {
                        if (DatabaseHelper.this.database.isOpen()) {
                            try {
                                DatabaseHelper.this.database.beginTransaction();
                                DatabaseHelper.this.database.delete(DatabaseHelper.this.tableName, null, null);
                                DatabaseHelper.this.database.setTransactionSuccessful();
                                DatabaseHelper.this.database.endTransaction();
                            } catch (Exception e) {
                                if (MBridgeConstans.DEBUG) {
                                    e.printStackTrace();
                                }
                                DatabaseHelper.this.database.endTransaction();
                            }
                        }
                    } catch (Throwable th) {
                        try {
                            DatabaseHelper.this.database.endTransaction();
                        } catch (Throwable th2) {
                            z.d(IDatabaseHelper.TAG, th2.getMessage());
                        }
                        throw th;
                    }
                } catch (Throwable th3) {
                    z.d(IDatabaseHelper.TAG, th3.getMessage());
                }
            }
        });
    }
}
