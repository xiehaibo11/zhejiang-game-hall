package com.czhj.sdk.common.Database;

public class SQLiteMTAHelper extends android.database.sqlite.SQLiteOpenHelper {
    public static final long DB_ERROR_BAD_INPUT = -2;
    public static final long DB_WRITE_ERROR = -1;
    public static final java.lang.String TABLE_POINT = "point";
    private static java.lang.String a = "sigmob_mta.db";
    private static final int b = 9;
    private static java.lang.String c = "CREATE TABLE point ( point_id integer  primary key  ,item text , encryption int);\n";
    private static final long d = -6;
    private static final long e = -5;
    private static final long f = -4;
    private static final long g = 0;
    private static com.czhj.sdk.common.Database.SQLiteMTAHelper h;
    private static android.database.sqlite.SQLiteDatabase i;

    public interface ExecCallBack {
        void onFailed(java.lang.Throwable r1);

        void onSuccess();
    }

    static {
            return
    }

    public SQLiteMTAHelper(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.a
            r1 = 0
            r2 = 9
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
            java.lang.String r0 = "DROP TABLE IF EXISTS point"
            r2.execSQL(r0)
            r1.onCreate(r2)
            return
    }

    public static com.czhj.sdk.common.Database.SQLiteMTAHelper getInstance() {
            com.czhj.sdk.common.Database.SQLiteMTAHelper r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.h
            return r0
    }

    public static void initialize(android.content.Context r2) {
            com.czhj.sdk.common.Database.SQLiteMTAHelper r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.h
            if (r0 != 0) goto L17
            java.lang.Class<com.czhj.sdk.common.Database.SQLiteMTAHelper> r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.class
            monitor-enter(r0)
            com.czhj.sdk.common.Database.SQLiteMTAHelper r1 = com.czhj.sdk.common.Database.SQLiteMTAHelper.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.czhj.sdk.common.Database.SQLiteMTAHelper r1 = new com.czhj.sdk.common.Database.SQLiteMTAHelper     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.czhj.sdk.common.Database.SQLiteMTAHelper.h = r1     // Catch: java.lang.Throwable -> L14
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

    public static void insert(android.database.sqlite.SQLiteDatabase r5, com.czhj.sdk.common.Database.SQLiteBuider.Insert r6, com.czhj.sdk.common.Database.SQLiteMTAHelper.ExecCallBack r7) {
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
    }

    public void clearDb() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = r1.getWritableDatabase()
            r1.b(r0)
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.c
            r2.execSQL(r0)
            return
    }

    @Override
    public void onDowngrade(android.database.sqlite.SQLiteDatabase r4, int r5, int r6) {
            r3 = this;
            java.lang.Class<com.czhj.sdk.common.Database.SQLiteMTAHelper> r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.class
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
            java.lang.Class<com.czhj.sdk.common.Database.SQLiteMTAHelper> r0 = com.czhj.sdk.common.Database.SQLiteMTAHelper.class
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
            r5 = 8
            if (r6 <= r5) goto L30
            java.lang.String r5 = "ALTER TABLE point ADD COLUMN 'encryption' int "
            r4.execSQL(r5)
        L30:
            return
    }

    public void transactionWriteExecSQL(android.database.sqlite.SQLiteDatabase r3, java.lang.String r4, com.czhj.sdk.common.Database.SQLiteMTAHelper.ExecCallBack r5) {
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
            r5.onFailed(r4)     // Catch: java.lang.Throwable -> L27
            goto Ld
        L1f:
            if (r0 == 0) goto L26
            if (r5 == 0) goto L26
            r5.onSuccess()
        L26:
            return
        L27:
            r4 = move-exception
            r3.endTransaction()
            throw r4
    }
}
