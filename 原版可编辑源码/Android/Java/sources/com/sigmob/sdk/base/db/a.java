package com.sigmob.sdk.base.db;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.database.sqlite.SQLiteStatement;
import android.os.Build;
import android.util.Log;
import com.czhj.sdk.common.Database.SQLiteBuider;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.utils.b;

public class a extends SQLiteOpenHelper {
    public static final String a = "ads";
    public static final String b = "file_reference";
    public static final String c = "trigger_insert";
    public static final String d = "trigger_delete";
    public static final String e = "tracks";
    public static final String f = "adload_event";
    public static final String g = "wind.db";
    public static final long h = -2;
    public static final long i = -1;
    private static final int j = 10;
    private static String k = "CREATE TABLE ads ( endcard_md5 text  ,video_md5 text  ,ad blob  ,ad_source_channel text  ,ad_type integer  ,create_time integer  ,crid text  ,load_id text  ,adTrackersMap blob  ,adslot_id text  ,camp_id text  ,request_id text , primary key ( crid ,adslot_id) ); \n";
    private static String l = "CREATE TRIGGER trigger_insert after insert on ads begin insert or replace into file_reference (crid,adslot_id,video_md5,endcard_md5) values(new.crid,new.adslot_id,new.video_md5,new.endcard_md5) ; end; \n";
    private static String m = "CREATE TRIGGER trigger_delete after delete on ads begin delete from file_reference where crid = old.crid  and adslot_id == old.adslot_id; end;\n";
    private static String n = "CREATE TABLE file_reference ( endcard_md5 blob  ,video_md5 blob  ,crid text  ,adslot_id text  , primary key ( crid ,adslot_id ) );\n";
    private static String o = "CREATE TABLE tracks ( id integer primary key AUTOINCREMENT ,retryNum integer   ,source text   ,event text   ,request_id text   ,url text   ,timestamp integer   );\n";
    private static String p = "CREATE TABLE adload_event ( id integer primary key AUTOINCREMENT , adslot_id text  , error_code integer ,timestamp integer  );\n";
    private static final long q = -6;
    private static final long r = -5;
    private static final long s = -4;
    private static final long t = 0;
    private static a u;
    private static SQLiteDatabase v;

    public interface a {
        void a();

        void a(Throwable th);
    }

    private a(Context context) {
        super(context, g, (SQLiteDatabase.CursorFactory) null, 10);
    }

    private static long a(SQLiteDatabase sQLiteDatabase) {
        if (sQLiteDatabase == null) {
            return q;
        }
        if (!sQLiteDatabase.isOpen()) {
            return r;
        }
        if (sQLiteDatabase.isReadOnly()) {
            return s;
        }
        return 0L;
    }

    public static a a() {
        return u;
    }

    public static void a(Context context) {
        if (u == null) {
            synchronized (a.class) {
                if (u == null) {
                    u = new a(context);
                }
            }
        }
    }

    private void a(SQLiteDatabase sQLiteDatabase, String str, String str2) {
        sQLiteDatabase.execSQL("alter table " + str2 + " drop column " + str);
    }

    private void a(SQLiteDatabase sQLiteDatabase, String str, String str2, String str3) {
        sQLiteDatabase.execSQL("alter table " + str3 + " add " + str + " " + str2);
    }

    private void b(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS ads");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS file_reference");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tracks");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS adload_event");
        sQLiteDatabase.execSQL("DROP TRIGGER IF EXISTS trigger_insert");
        sQLiteDatabase.execSQL("DROP TRIGGER IF EXISTS trigger_delete");
        b.h();
        onCreate(sQLiteDatabase);
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x002d A[Catch: all -> 0x007b, TryCatch #2 {all -> 0x007b, blocks: (B:3:0x0004, B:4:0x000d, B:6:0x0017, B:8:0x002d, B:21:0x0060, B:9:0x0031, B:11:0x0035, B:12:0x003b, B:14:0x003f, B:15:0x0049, B:17:0x004d, B:18:0x0057, B:20:0x005b, B:22:0x0063), top: B:56:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(SQLiteDatabase sQLiteDatabase, SQLiteBuider.Insert insert, a aVar) {
        sQLiteDatabase.beginTransaction();
        boolean z = true;
        try {
            SQLiteStatement sQLiteStatementCompileStatement = sQLiteDatabase.compileStatement(insert.getSql());
            for (int i2 = 1; i2 <= insert.getColumns().size(); i2++) {
                Object obj = insert.getValues().get((String) insert.getColumns().get(i2 - 1));
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
                if (aVar != null) {
                    aVar.a(th);
                }
                try {
                    sQLiteDatabase.endTransaction();
                } catch (Throwable th2) {
                    SigmobLog.e(th2.getMessage());
                    if (aVar != null) {
                        aVar.a(th2);
                    }
                }
                z = false;
            } finally {
                try {
                    sQLiteDatabase.endTransaction();
                } catch (Throwable th3) {
                    SigmobLog.e(th3.getMessage());
                    if (aVar != null) {
                        aVar.a(th3);
                    }
                }
            }
        }
        if (!z || aVar == null) {
            return;
        }
        aVar.a();
    }

    public void a(SQLiteDatabase sQLiteDatabase, String str, a aVar) {
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
        if (!z || aVar == null) {
            return;
        }
        aVar.a();
    }

    public void b() {
        b(getWritableDatabase());
    }

    @Override
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL(k);
        sQLiteDatabase.execSQL(l);
        sQLiteDatabase.execSQL(m);
        sQLiteDatabase.execSQL(n);
        sQLiteDatabase.execSQL(o);
        sQLiteDatabase.execSQL(p);
    }

    @Override
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i2, int i3) {
        Log.w(a.class.getName(), "Downgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
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
        Log.w(a.class.getName(), "Upgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
        b(sQLiteDatabase);
    }
}
