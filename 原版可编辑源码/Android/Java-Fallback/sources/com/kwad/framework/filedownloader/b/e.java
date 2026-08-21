package com.kwad.framework.filedownloader.b;

public final class e extends android.database.sqlite.SQLiteOpenHelper {
    public e(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "ksad_file_download.db"
            r1 = 0
            r2 = 1
            r3.<init>(r4, r0, r1, r2)
            return
    }

    @Override
    public final void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS ksad_file_download( _id INTEGER PRIMARY KEY, url VARCHAR, path VARCHAR, status TINYINT(7), sofar INTEGER, total INTEGER, errMsg VARCHAR, etag VARCHAR, pathAsDirectory TINYINT(1) DEFAULT 0, filename VARCHAR, connectionCount INTEGER DEFAULT 1)"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS ksad_file_download_connection( id INTEGER, connectionIndex INTEGER, startOffset INTEGER, currentOffset INTEGER, endOffset INTEGER, PRIMARY KEY ( id, connectionIndex ))"
            r2.execSQL(r0)
            return
    }

    @Override
    public final void onDowngrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r2 = 0
            java.lang.String r3 = "ksad_file_download"
            r1.delete(r3, r2, r2)
            java.lang.String r3 = "ksad_file_download_connection"
            r1.delete(r3, r2, r2)
            return
    }

    @Override
    public final void onOpen(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            super.onOpen(r1)
            r1 = 1
            r0.setWriteAheadLoggingEnabled(r1)
            return
    }

    @Override
    public final void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r3 = 2
            if (r2 >= r3) goto Ld
            java.lang.String r3 = "ALTER TABLE ksad_file_download ADD COLUMN pathAsDirectory TINYINT(1) DEFAULT 0"
            r1.execSQL(r3)
            java.lang.String r3 = "ALTER TABLE ksad_file_download ADD COLUMN filename VARCHAR"
            r1.execSQL(r3)
        Ld:
            r3 = 3
            if (r2 >= r3) goto L1a
            java.lang.String r2 = "ALTER TABLE ksad_file_download ADD COLUMN connectionCount INTEGER DEFAULT 1"
            r1.execSQL(r2)
            java.lang.String r2 = "CREATE TABLE IF NOT EXISTS ksad_file_download_connection( id INTEGER, connectionIndex INTEGER, startOffset INTEGER, currentOffset INTEGER, endOffset INTEGER, PRIMARY KEY ( id, connectionIndex ))"
            r1.execSQL(r2)
        L1a:
            return
    }
}
