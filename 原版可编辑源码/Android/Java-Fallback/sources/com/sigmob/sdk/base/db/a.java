package com.sigmob.sdk.base.db;

public class a extends android.database.sqlite.SQLiteOpenHelper {
    public static final java.lang.String a = "ads";
    public static final java.lang.String b = "file_reference";
    public static final java.lang.String c = "trigger_insert";
    public static final java.lang.String d = "trigger_delete";
    public static final java.lang.String e = "tracks";
    public static final java.lang.String f = "adload_event";
    public static final java.lang.String g = "wind.db";
    public static final long h = -2;
    public static final long i = -1;
    private static final int j = 10;
    private static java.lang.String k = "CREATE TABLE ads ( endcard_md5 text  ,video_md5 text  ,ad blob  ,ad_source_channel text  ,ad_type integer  ,create_time integer  ,crid text  ,load_id text  ,adTrackersMap blob  ,adslot_id text  ,camp_id text  ,request_id text , primary key ( crid ,adslot_id) ); \n";
    private static java.lang.String l = "CREATE TRIGGER trigger_insert after insert on ads begin insert or replace into file_reference (crid,adslot_id,video_md5,endcard_md5) values(new.crid,new.adslot_id,new.video_md5,new.endcard_md5) ; end; \n";
    private static java.lang.String m = "CREATE TRIGGER trigger_delete after delete on ads begin delete from file_reference where crid = old.crid  and adslot_id == old.adslot_id; end;\n";
    private static java.lang.String n = "CREATE TABLE file_reference ( endcard_md5 blob  ,video_md5 blob  ,crid text  ,adslot_id text  , primary key ( crid ,adslot_id ) );\n";
    private static java.lang.String o = "CREATE TABLE tracks ( id integer primary key AUTOINCREMENT ,retryNum integer   ,source text   ,event text   ,request_id text   ,url text   ,timestamp integer   );\n";
    private static java.lang.String p = "CREATE TABLE adload_event ( id integer primary key AUTOINCREMENT , adslot_id text  , error_code integer ,timestamp integer  );\n";
    private static final long q = -6;
    private static final long r = -5;
    private static final long s = -4;
    private static final long t = 0;
    private static com.sigmob.sdk.base.db.a u;
    private static android.database.sqlite.SQLiteDatabase v;

    public interface a {
        void a();

        void a(java.lang.Throwable r1);
    }

    static {
            return
    }

    private a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "wind.db"
            r1 = 0
            r2 = 10
            r3.<init>(r4, r0, r1, r2)
            return
    }

    private static long a(android.database.sqlite.SQLiteDatabase r2) {
            if (r2 != 0) goto L5
            r0 = -6
            return r0
        L5:
            boolean r0 = r2.isOpen()
            if (r0 != 0) goto Le
            r0 = -5
            return r0
        Le:
            boolean r2 = r2.isReadOnly()
            if (r2 == 0) goto L17
            r0 = -4
            return r0
        L17:
            r0 = 0
            return r0
    }

    public static com.sigmob.sdk.base.db.a a() {
            com.sigmob.sdk.base.db.a r0 = com.sigmob.sdk.base.db.a.u
            return r0
    }

    public static void a(android.content.Context r2) {
            com.sigmob.sdk.base.db.a r0 = com.sigmob.sdk.base.db.a.u
            if (r0 != 0) goto L17
            java.lang.Class<com.sigmob.sdk.base.db.a> r0 = com.sigmob.sdk.base.db.a.class
            monitor-enter(r0)
            com.sigmob.sdk.base.db.a r1 = com.sigmob.sdk.base.db.a.u     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.sigmob.sdk.base.db.a r1 = new com.sigmob.sdk.base.db.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.sigmob.sdk.base.db.a.u = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            return
    }

    private void a(android.database.sqlite.SQLiteDatabase r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "alter table "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = " drop column "
            r0.append(r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.execSQL(r4)
            return
    }

    private void a(android.database.sqlite.SQLiteDatabase r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "alter table "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = " add "
            r0.append(r6)
            r0.append(r4)
            java.lang.String r4 = " "
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
            r3.execSQL(r4)
            return
    }

    private void b(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "DROP TABLE IF EXISTS ads"
            r2.execSQL(r0)
            java.lang.String r0 = "DROP TABLE IF EXISTS file_reference"
            r2.execSQL(r0)
            java.lang.String r0 = "DROP TABLE IF EXISTS tracks"
            r2.execSQL(r0)
            java.lang.String r0 = "DROP TABLE IF EXISTS adload_event"
            r2.execSQL(r0)
            java.lang.String r0 = "DROP TRIGGER IF EXISTS trigger_insert"
            r2.execSQL(r0)
            java.lang.String r0 = "DROP TRIGGER IF EXISTS trigger_delete"
            r2.execSQL(r0)
            com.sigmob.sdk.base.utils.b.h()
            r1.onCreate(r2)
            return
    }

    public void a(android.database.sqlite.SQLiteDatabase r6, com.czhj.sdk.common.Database.SQLiteBuider.Insert r7, com.sigmob.sdk.base.db.a.a r8) {
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
    }

    public void a(android.database.sqlite.SQLiteDatabase r3, java.lang.String r4, com.sigmob.sdk.base.db.a.a r5) {
            r2 = this;
            r3.beginTransaction()
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11
            r3.execSQL(r4, r1)     // Catch: java.lang.Throwable -> L11
            r3.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L11
            r0 = 1
        Ld:
            r3.endTransaction()
            goto L1f
        L11:
            r4 = move-exception
            java.lang.String r1 = r4.getMessage()     // Catch: java.lang.Throwable -> L27
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L27
            if (r5 == 0) goto Ld
            r5.a(r4)     // Catch: java.lang.Throwable -> L27
            goto Ld
        L1f:
            if (r0 == 0) goto L26
            if (r5 == 0) goto L26
            r5.a()
        L26:
            return
        L27:
            r4 = move-exception
            r3.endTransaction()
            throw r4
    }

    public void b() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = r1.getWritableDatabase()
            r1.b(r0)
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = com.sigmob.sdk.base.db.a.k
            r2.execSQL(r0)
            java.lang.String r0 = com.sigmob.sdk.base.db.a.l
            r2.execSQL(r0)
            java.lang.String r0 = com.sigmob.sdk.base.db.a.m
            r2.execSQL(r0)
            java.lang.String r0 = com.sigmob.sdk.base.db.a.n
            r2.execSQL(r0)
            java.lang.String r0 = com.sigmob.sdk.base.db.a.o
            r2.execSQL(r0)
            java.lang.String r0 = com.sigmob.sdk.base.db.a.p
            r2.execSQL(r0)
            return
    }

    @Override
    public void onDowngrade(android.database.sqlite.SQLiteDatabase r4, int r5, int r6) {
            r3 = this;
            java.lang.Class<com.sigmob.sdk.base.db.a> r0 = com.sigmob.sdk.base.db.a.class
            java.lang.String r0 = r0.getName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Downgrading database from version "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " to "
            r1.append(r5)
            r1.append(r6)
            java.lang.String r5 = ", which will destroy all old data"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            android.util.Log.w(r0, r5)
            r3.b(r4)
            return
    }

    @Override
    public void onOpen(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            super.onOpen(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Le
            r3 = 1
            r2.setWriteAheadLoggingEnabled(r3)
            goto L11
        Le:
            r3.enableWriteAheadLogging()
        L11:
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r4, int r5, int r6) {
            r3 = this;
            java.lang.Class<com.sigmob.sdk.base.db.a> r0 = com.sigmob.sdk.base.db.a.class
            java.lang.String r0 = r0.getName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Upgrading database from version "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " to "
            r1.append(r5)
            r1.append(r6)
            java.lang.String r5 = ", which will destroy all old data"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            android.util.Log.w(r0, r5)
            r3.b(r4)
            return
    }
}
