package com.czhj.sdk.common.Database;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.Build;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class SQLiteMTAHelper extends SQLiteOpenHelper {
    public static final long DB_ERROR_BAD_INPUT = -2;
    public static final long DB_WRITE_ERROR = -1;
    public static final String TABLE_POINT = "point";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f1761a = "sigmob_mta.db";
    private static final int b = 9;
    private static String c = "CREATE TABLE point ( point_id integer  primary key  ,item text , encryption int);\n";
    private static final long d = -6;
    private static final long e = -5;
    private static final long f = -4;
    private static final long g = 0;
    private static SQLiteMTAHelper h;
    private static SQLiteDatabase i;

    public interface ExecCallBack {
        void onFailed(Throwable th);

        void onSuccess();
    }

    public SQLiteMTAHelper(Context context) {
        super(context, f1761a, (SQLiteDatabase.CursorFactory) null, 9);
    }

    private static long a(SQLiteDatabase sQLiteDatabase) {
        if (sQLiteDatabase == null) {
            return d;
        }
        if (!sQLiteDatabase.isOpen()) {
            return e;
        }
        if (sQLiteDatabase.isReadOnly()) {
            return f;
        }
        return 0L;
    }

    private void a(SQLiteDatabase sQLiteDatabase, String str, String str2) {
        sQLiteDatabase.execSQL("alter table " + str2 + " drop column " + str);
    }

    private void a(SQLiteDatabase sQLiteDatabase, String str, String str2, String str3) {
        sQLiteDatabase.execSQL("alter table " + str3 + " add " + str + " " + str2);
    }

    private void b(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS point");
        onCreate(sQLiteDatabase);
    }

    public static SQLiteMTAHelper getInstance() {
        return h;
    }

    public static void initialize(Context context) {
        if (h == null) {
            synchronized (SQLiteMTAHelper.class) {
                if (h == null) {
                    h = new SQLiteMTAHelper(context);
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x0025 A[Catch: all -> 0x0073, TryCatch #0 {all -> 0x0073, blocks: (B:3:0x0004, B:4:0x000b, B:6:0x0013, B:8:0x0025, B:21:0x0058, B:9:0x0029, B:11:0x002d, B:12:0x0033, B:14:0x0037, B:15:0x0041, B:17:0x0045, B:18:0x004f, B:20:0x0053, B:22:0x005b), top: B:52:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void insert(android.database.sqlite.SQLiteDatabase r5, com.czhj.sdk.common.Database.SQLiteBuider.Insert r6, com.czhj.sdk.common.Database.SQLiteMTAHelper.ExecCallBack r7) {
        /*
            r5.beginTransaction()
            r0 = 1
            java.lang.String r1 = r6.b     // Catch: java.lang.Throwable -> L73
            android.database.sqlite.SQLiteStatement r1 = r5.compileStatement(r1)     // Catch: java.lang.Throwable -> L73
            r2 = r0
        Lb:
            java.util.List<java.lang.Object> r3 = r6.d     // Catch: java.lang.Throwable -> L73
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L73
            if (r2 > r3) goto L5b
            java.util.List<java.lang.Object> r3 = r6.d     // Catch: java.lang.Throwable -> L73
            int r4 = r2 + (-1)
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L73
            java.util.Map<java.lang.String, java.lang.Object> r4 = r6.c     // Catch: java.lang.Throwable -> L73
            java.lang.Object r3 = r4.get(r3)     // Catch: java.lang.Throwable -> L73
            if (r3 != 0) goto L29
        L25:
            r1.bindNull(r2)     // Catch: java.lang.Throwable -> L73
            goto L58
        L29:
            boolean r4 = r3 instanceof java.lang.String     // Catch: java.lang.Throwable -> L73
            if (r4 == 0) goto L33
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L73
            r1.bindString(r2, r3)     // Catch: java.lang.Throwable -> L73
            goto L58
        L33:
            boolean r4 = r3 instanceof java.lang.Double     // Catch: java.lang.Throwable -> L73
            if (r4 == 0) goto L41
            java.lang.Double r3 = (java.lang.Double) r3     // Catch: java.lang.Throwable -> L73
            double r3 = r3.doubleValue()     // Catch: java.lang.Throwable -> L73
            r1.bindDouble(r2, r3)     // Catch: java.lang.Throwable -> L73
            goto L58
        L41:
            boolean r4 = r3 instanceof java.lang.Number     // Catch: java.lang.Throwable -> L73
            if (r4 == 0) goto L4f
            java.lang.Number r3 = (java.lang.Number) r3     // Catch: java.lang.Throwable -> L73
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L73
            r1.bindLong(r2, r3)     // Catch: java.lang.Throwable -> L73
            goto L58
        L4f:
            boolean r4 = r3 instanceof byte[]     // Catch: java.lang.Throwable -> L73
            if (r4 == 0) goto L25
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Throwable -> L73
            r1.bindBlob(r2, r3)     // Catch: java.lang.Throwable -> L73
        L58:
            int r2 = r2 + 1
            goto Lb
        L5b:
            r1.execute()     // Catch: java.lang.Throwable -> L73
            r5.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L73
            r5.endTransaction()     // Catch: java.lang.Throwable -> L65
            goto L92
        L65:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
            if (r7 == 0) goto L92
            r7.onFailed(r5)
            goto L92
        L73:
            r6 = move-exception
            java.lang.String r0 = r6.getMessage()     // Catch: java.lang.Throwable -> L9a
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Throwable -> L9a
            if (r7 == 0) goto L80
            r7.onFailed(r6)     // Catch: java.lang.Throwable -> L9a
        L80:
            r5.endTransaction()     // Catch: java.lang.Throwable -> L84
            goto L91
        L84:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
            if (r7 == 0) goto L91
            r7.onFailed(r5)
        L91:
            r0 = 0
        L92:
            if (r0 == 0) goto L99
            if (r7 == 0) goto L99
            r7.onSuccess()
        L99:
            return
        L9a:
            r6 = move-exception
            r5.endTransaction()     // Catch: java.lang.Throwable -> L9f
            goto Lac
        L9f:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            if (r7 == 0) goto Lac
            r7.onFailed(r5)
        Lac:
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.czhj.sdk.common.Database.SQLiteMTAHelper.insert(android.database.sqlite.SQLiteDatabase, com.czhj.sdk.common.Database.SQLiteBuider$Insert, com.czhj.sdk.common.Database.SQLiteMTAHelper$ExecCallBack):void");
    }

    public void clearDb() {
        b(getWritableDatabase());
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL(c);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i2, int i3) {
        Log.w(SQLiteMTAHelper.class.getName(), "Downgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
        b(sQLiteDatabase);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onOpen(SQLiteDatabase sQLiteDatabase) {
        super.onOpen(sQLiteDatabase);
        if (Build.VERSION.SDK_INT >= 16) {
            setWriteAheadLoggingEnabled(true);
        } else {
            sQLiteDatabase.enableWriteAheadLogging();
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i2, int i3) {
        Log.w(SQLiteMTAHelper.class.getName(), "Upgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
        if (i3 > 8) {
            sQLiteDatabase.execSQL("ALTER TABLE point ADD COLUMN 'encryption' int ");
        }
    }

    public void transactionWriteExecSQL(SQLiteDatabase sQLiteDatabase, String str, ExecCallBack execCallBack) {
        sQLiteDatabase.beginTransaction();
        boolean z = false;
        try {
            sQLiteDatabase.execSQL(str, new Object[0]);
            sQLiteDatabase.setTransactionSuccessful();
            z = true;
        } finally {
            try {
            } finally {
            }
        }
        if (!z || execCallBack == null) {
            return;
        }
        execCallBack.onSuccess();
    }
}
