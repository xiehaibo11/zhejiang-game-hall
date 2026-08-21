package com.czhj.sdk.common.Database;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.database.sqlite.SQLiteStatement;
import android.os.Build;
import android.util.Log;
import com.czhj.sdk.common.Database.SQLiteBuider;
import com.czhj.sdk.logger.SigmobLog;

public class SQLiteMTAHelper extends SQLiteOpenHelper {
    public static final long DB_ERROR_BAD_INPUT = -2;
    public static final long DB_WRITE_ERROR = -1;
    public static final String TABLE_POINT = "point";
    private static String a = "sigmob_mta.db";
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
        super(context, a, (SQLiteDatabase.CursorFactory) null, 9);
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
    */
    public static void insert(SQLiteDatabase sQLiteDatabase, SQLiteBuider.Insert insert, ExecCallBack execCallBack) {
        sQLiteDatabase.beginTransaction();
        boolean z = true;
        try {
            SQLiteStatement sQLiteStatementCompileStatement = sQLiteDatabase.compileStatement(insert.b);
            for (int i2 = 1; i2 <= insert.d.size(); i2++) {
                Object obj = insert.c.get((String) insert.d.get(i2 - 1));
                if (obj != null) {
                    if (obj instanceof String) {
                        sQLiteStatementCompileStatement.bindString(i2, (String) obj);
                    } else if (obj instanceof Double) {
                        sQLiteStatementCompileStatement.bindDouble(i2, ((Double) obj).doubleValue());
                    } else if (obj instanceof Number) {
                        sQLiteStatementCompileStatement.bindLong(i2, ((Number) obj).longValue());
                    } else if (obj instanceof byte[]) {
                        sQLiteStatementCompileStatement.bindBlob(i2, (byte[]) obj);
                    } else {
                        sQLiteStatementCompileStatement.bindNull(i2);
                    }
                }
            }
            sQLiteStatementCompileStatement.execute();
            sQLiteDatabase.setTransactionSuccessful();
        } catch (Throwable th) {
            try {
                SigmobLog.e(th.getMessage());
                if (execCallBack != null) {
                    execCallBack.onFailed(th);
                }
                try {
                    sQLiteDatabase.endTransaction();
                } catch (Throwable th2) {
                    SigmobLog.e(th2.getMessage());
                    if (execCallBack != null) {
                        execCallBack.onFailed(th2);
                    }
                }
                z = false;
            } finally {
                try {
                    sQLiteDatabase.endTransaction();
                } catch (Throwable th3) {
                    SigmobLog.e(th3.getMessage());
                    if (execCallBack != null) {
                        execCallBack.onFailed(th3);
                    }
                }
            }
        }
        if (!z || execCallBack == null) {
            return;
        }
        execCallBack.onSuccess();
    }

    public void clearDb() {
        b(getWritableDatabase());
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL(c);
    }

    @Override
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i2, int i3) {
        Log.w(SQLiteMTAHelper.class.getName(), "Downgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
        b(sQLiteDatabase);
    }

    @Override
    public void onOpen(SQLiteDatabase sQLiteDatabase) {
        super.onOpen(sQLiteDatabase);
        if (Build.VERSION.SDK_INT >= 16) {
            setWriteAheadLoggingEnabled(true);
        } else {
            sQLiteDatabase.enableWriteAheadLogging();
        }
    }

    @Override
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
