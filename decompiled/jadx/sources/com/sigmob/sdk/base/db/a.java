package com.sigmob.sdk.base.db;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.Build;
import android.util.Log;
import com.sigmob.sdk.base.utils.b;

/* JADX INFO: loaded from: classes3.dex */
public class a extends SQLiteOpenHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f4881a = "ads";
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

    /* JADX INFO: renamed from: com.sigmob.sdk.base.db.a$a, reason: collision with other inner class name */
    public interface InterfaceC0329a {
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
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(android.database.sqlite.SQLiteDatabase r6, com.czhj.sdk.common.Database.SQLiteBuider.Insert r7, com.sigmob.sdk.base.db.a.InterfaceC0329a r8) {
        /*
            r5 = this;
            r6.beginTransaction()
            r0 = 1
            java.lang.String r1 = r7.getSql()     // Catch: java.lang.Throwable -> L7b
            android.database.sqlite.SQLiteStatement r1 = r6.compileStatement(r1)     // Catch: java.lang.Throwable -> L7b
            r2 = r0
        Ld:
            java.util.List r3 = r7.getColumns()     // Catch: java.lang.Throwable -> L7b
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L7b
            if (r2 > r3) goto L63
            java.util.List r3 = r7.getColumns()     // Catch: java.lang.Throwable -> L7b
            int r4 = r2 + (-1)
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7b
            java.util.Map r4 = r7.getValues()     // Catch: java.lang.Throwable -> L7b
            java.lang.Object r3 = r4.get(r3)     // Catch: java.lang.Throwable -> L7b
            if (r3 != 0) goto L31
        L2d:
            r1.bindNull(r2)     // Catch: java.lang.Throwable -> L7b
            goto L60
        L31:
            boolean r4 = r3 instanceof java.lang.String     // Catch: java.lang.Throwable -> L7b
            if (r4 == 0) goto L3b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7b
            r1.bindString(r2, r3)     // Catch: java.lang.Throwable -> L7b
            goto L60
        L3b:
            boolean r4 = r3 instanceof java.lang.Double     // Catch: java.lang.Throwable -> L7b
            if (r4 == 0) goto L49
            java.lang.Double r3 = (java.lang.Double) r3     // Catch: java.lang.Throwable -> L7b
            double r3 = r3.doubleValue()     // Catch: java.lang.Throwable -> L7b
            r1.bindDouble(r2, r3)     // Catch: java.lang.Throwable -> L7b
            goto L60
        L49:
            boolean r4 = r3 instanceof java.lang.Number     // Catch: java.lang.Throwable -> L7b
            if (r4 == 0) goto L57
            java.lang.Number r3 = (java.lang.Number) r3     // Catch: java.lang.Throwable -> L7b
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L7b
            r1.bindLong(r2, r3)     // Catch: java.lang.Throwable -> L7b
            goto L60
        L57:
            boolean r4 = r3 instanceof byte[]     // Catch: java.lang.Throwable -> L7b
            if (r4 == 0) goto L2d
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Throwable -> L7b
            r1.bindBlob(r2, r3)     // Catch: java.lang.Throwable -> L7b
        L60:
            int r2 = r2 + 1
            goto Ld
        L63:
            r1.execute()     // Catch: java.lang.Throwable -> L7b
            r6.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L7b
            r6.endTransaction()     // Catch: java.lang.Throwable -> L6d
            goto L9a
        L6d:
            r6 = move-exception
            java.lang.String r7 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
            if (r8 == 0) goto L9a
            r8.a(r6)
            goto L9a
        L7b:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()     // Catch: java.lang.Throwable -> La2
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Throwable -> La2
            if (r8 == 0) goto L88
            r8.a(r7)     // Catch: java.lang.Throwable -> La2
        L88:
            r6.endTransaction()     // Catch: java.lang.Throwable -> L8c
            goto L99
        L8c:
            r6 = move-exception
            java.lang.String r7 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
            if (r8 == 0) goto L99
            r8.a(r6)
        L99:
            r0 = 0
        L9a:
            if (r0 == 0) goto La1
            if (r8 == 0) goto La1
            r8.a()
        La1:
            return
        La2:
            r7 = move-exception
            r6.endTransaction()     // Catch: java.lang.Throwable -> La7
            goto Lb4
        La7:
            r6 = move-exception
            java.lang.String r0 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            if (r8 == 0) goto Lb4
            r8.a(r6)
        Lb4:
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.db.a.a(android.database.sqlite.SQLiteDatabase, com.czhj.sdk.common.Database.SQLiteBuider$Insert, com.sigmob.sdk.base.db.a$a):void");
    }

    public void a(SQLiteDatabase sQLiteDatabase, String str, InterfaceC0329a interfaceC0329a) {
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
        if (!z || interfaceC0329a == null) {
            return;
        }
        interfaceC0329a.a();
    }

    public void b() {
        b(getWritableDatabase());
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL(k);
        sQLiteDatabase.execSQL(l);
        sQLiteDatabase.execSQL(m);
        sQLiteDatabase.execSQL(n);
        sQLiteDatabase.execSQL(o);
        sQLiteDatabase.execSQL(p);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onDowngrade(SQLiteDatabase sQLiteDatabase, int i2, int i3) {
        Log.w(a.class.getName(), "Downgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
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
        Log.w(a.class.getName(), "Upgrading database from version " + i2 + " to " + i3 + ", which will destroy all old data");
        b(sQLiteDatabase);
    }
}
