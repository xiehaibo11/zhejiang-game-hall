package com.ss.android.socialbase.downloader.db;

public class TableStatements {
    private final java.lang.String[] allColumns;
    private final android.database.sqlite.SQLiteDatabase database;
    private android.database.sqlite.SQLiteStatement deleteStatement;
    private android.database.sqlite.SQLiteStatement insertOrReplaceStatement;
    private android.database.sqlite.SQLiteStatement insertStatement;
    private final java.lang.String[] pkColumns;
    private final java.lang.String tableName;
    private android.database.sqlite.SQLiteStatement updateStatement;

    public TableStatements(android.database.sqlite.SQLiteDatabase r1, java.lang.String r2, java.lang.String[] r3, java.lang.String[] r4) {
            r0 = this;
            r0.<init>()
            r0.database = r1
            r0.tableName = r2
            r0.allColumns = r3
            r0.pkColumns = r4
            return
    }

    public android.database.sqlite.SQLiteStatement getDeleteStatement() {
            r2 = this;
            android.database.sqlite.SQLiteStatement r0 = r2.deleteStatement
            if (r0 != 0) goto L25
            java.lang.String r0 = r2.tableName
            java.lang.String[] r1 = r2.pkColumns
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.SqlUtils.createSqlDelete(r0, r1)
            android.database.sqlite.SQLiteDatabase r1 = r2.database
            android.database.sqlite.SQLiteStatement r0 = r1.compileStatement(r0)
            monitor-enter(r2)
            android.database.sqlite.SQLiteStatement r1 = r2.deleteStatement     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L19
            r2.deleteStatement = r0     // Catch: java.lang.Throwable -> L22
        L19:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
            android.database.sqlite.SQLiteStatement r1 = r2.deleteStatement
            if (r1 == r0) goto L25
            r0.close()
            goto L25
        L22:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
            throw r0
        L25:
            android.database.sqlite.SQLiteStatement r0 = r2.deleteStatement
            return r0
    }

    public android.database.sqlite.SQLiteStatement getInsertOrReplaceStatement() {
            r3 = this;
            android.database.sqlite.SQLiteStatement r0 = r3.insertOrReplaceStatement
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.tableName
            java.lang.String[] r1 = r3.allColumns
            java.lang.String[] r2 = r3.pkColumns
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.SqlUtils.createSqlInsertOrReplace(r0, r1, r2)
            android.database.sqlite.SQLiteDatabase r1 = r3.database
            android.database.sqlite.SQLiteStatement r0 = r1.compileStatement(r0)
            monitor-enter(r3)
            android.database.sqlite.SQLiteStatement r1 = r3.insertOrReplaceStatement     // Catch: java.lang.Throwable -> L24
            if (r1 != 0) goto L1b
            r3.insertOrReplaceStatement = r0     // Catch: java.lang.Throwable -> L24
        L1b:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            android.database.sqlite.SQLiteStatement r1 = r3.insertOrReplaceStatement
            if (r1 == r0) goto L27
            r0.close()
            goto L27
        L24:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            throw r0
        L27:
            android.database.sqlite.SQLiteStatement r0 = r3.insertOrReplaceStatement
            return r0
    }

    public android.database.sqlite.SQLiteStatement getInsertStatement() {
            r3 = this;
            android.database.sqlite.SQLiteStatement r0 = r3.insertStatement
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.tableName
            java.lang.String[] r1 = r3.allColumns
            java.lang.String r2 = "INSERT INTO "
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.SqlUtils.createSqlInsert(r2, r0, r1)
            android.database.sqlite.SQLiteDatabase r1 = r3.database
            android.database.sqlite.SQLiteStatement r0 = r1.compileStatement(r0)
            monitor-enter(r3)
            android.database.sqlite.SQLiteStatement r1 = r3.insertStatement     // Catch: java.lang.Throwable -> L24
            if (r1 != 0) goto L1b
            r3.insertStatement = r0     // Catch: java.lang.Throwable -> L24
        L1b:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            android.database.sqlite.SQLiteStatement r1 = r3.insertStatement
            if (r1 == r0) goto L27
            r0.close()
            goto L27
        L24:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            throw r0
        L27:
            android.database.sqlite.SQLiteStatement r0 = r3.insertStatement
            return r0
    }

    public android.database.sqlite.SQLiteStatement getUpdateStatement() {
            r3 = this;
            android.database.sqlite.SQLiteStatement r0 = r3.updateStatement
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.tableName
            java.lang.String[] r1 = r3.allColumns
            java.lang.String[] r2 = r3.pkColumns
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.SqlUtils.createSqlUpdate(r0, r1, r2)
            android.database.sqlite.SQLiteDatabase r1 = r3.database
            android.database.sqlite.SQLiteStatement r0 = r1.compileStatement(r0)
            monitor-enter(r3)
            android.database.sqlite.SQLiteStatement r1 = r3.updateStatement     // Catch: java.lang.Throwable -> L24
            if (r1 != 0) goto L1b
            r3.updateStatement = r0     // Catch: java.lang.Throwable -> L24
        L1b:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            android.database.sqlite.SQLiteStatement r1 = r3.updateStatement
            if (r1 == r0) goto L27
            r0.close()
            goto L27
        L24:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            throw r0
        L27:
            android.database.sqlite.SQLiteStatement r0 = r3.updateStatement
            return r0
    }
}
