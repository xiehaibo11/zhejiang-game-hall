package com.ss.android.socialbase.downloader.utils;

public class SqlUtils {
    public SqlUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.StringBuilder appendColumn(java.lang.StringBuilder r1, java.lang.String r2) {
            r0 = 34
            r1.append(r0)
            r1.append(r2)
            r1.append(r0)
            return r1
    }

    public static java.lang.StringBuilder appendColumn(java.lang.StringBuilder r0, java.lang.String r1, java.lang.String r2) {
            r0.append(r1)
            java.lang.String r1 = ".\""
            r0.append(r1)
            r0.append(r2)
            r1 = 34
            r0.append(r1)
            return r0
    }

    public static java.lang.StringBuilder appendColumns(java.lang.StringBuilder r4, java.lang.String[] r5) {
            int r0 = r5.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L1d
            r2 = 34
            r4.append(r2)
            r3 = r5[r1]
            r4.append(r3)
            r4.append(r2)
            int r2 = r0 + (-1)
            if (r1 >= r2) goto L1a
            r2 = 44
            r4.append(r2)
        L1a:
            int r1 = r1 + 1
            goto L2
        L1d:
            return r4
    }

    public static java.lang.StringBuilder appendColumnsEqValue(java.lang.StringBuilder r3, java.lang.String r4, java.lang.String[] r5) {
            r0 = 0
        L1:
            int r1 = r5.length
            if (r0 >= r1) goto L1c
            r1 = r5[r0]
            java.lang.StringBuilder r1 = appendColumn(r3, r4, r1)
            java.lang.String r2 = "=?"
            r1.append(r2)
            int r1 = r5.length
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L19
            r1 = 44
            r3.append(r1)
        L19:
            int r0 = r0 + 1
            goto L1
        L1c:
            return r3
    }

    public static java.lang.StringBuilder appendColumnsEqualPlaceholders(java.lang.StringBuilder r3, java.lang.String[] r4) {
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L1c
            r1 = r4[r0]
            java.lang.StringBuilder r1 = appendColumn(r3, r1)
            java.lang.String r2 = "=?"
            r1.append(r2)
            int r1 = r4.length
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L19
            r1 = 44
            r3.append(r1)
        L19:
            int r0 = r0 + 1
            goto L1
        L1c:
            return r3
    }

    public static java.lang.StringBuilder appendPlaceholders(java.lang.StringBuilder r2, int r3) {
            r0 = 0
        L1:
            if (r0 >= r3) goto L15
            int r1 = r3 + (-1)
            if (r0 >= r1) goto Ld
            java.lang.String r1 = "?,"
            r2.append(r1)
            goto L12
        Ld:
            r1 = 63
            r2.append(r1)
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            return r2
    }

    public static java.lang.String createSqlDelete(java.lang.String r2, java.lang.String[] r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 34
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "DELETE FROM "
            r0.<init>(r1)
            r0.append(r2)
            if (r3 == 0) goto L2b
            int r1 = r3.length
            if (r1 <= 0) goto L2b
            java.lang.String r1 = " WHERE "
            r0.append(r1)
            appendColumnsEqValue(r0, r2, r3)
        L2b:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String createSqlInsert(java.lang.String r1, java.lang.String r2, java.lang.String[] r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r1 = 34
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = " ("
            r0.append(r1)
            appendColumns(r0, r3)
            java.lang.String r1 = ") VALUES ("
            r0.append(r1)
            int r1 = r3.length
            appendPlaceholders(r0, r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String createSqlInsertOrReplace(java.lang.String r2, java.lang.String[] r3, java.lang.String[] r4) {
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "INSERT OR REPLACE INTO "
            r4.<init>(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 34
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r0.toString()
            r4.append(r2)
            java.lang.String r2 = " ("
            r4.append(r2)
            appendColumns(r4, r3)
            java.lang.String r2 = ") VALUES ("
            r4.append(r2)
            int r2 = r3.length
            appendPlaceholders(r4, r2)
            r2 = 41
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            return r2
    }

    public static java.lang.String createSqlUpdate(java.lang.String r2, java.lang.String[] r3, java.lang.String[] r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 34
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "UPDATE "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r1 = " SET "
            r0.append(r1)
            appendColumnsEqualPlaceholders(r0, r3)
            if (r4 == 0) goto L33
            int r3 = r4.length
            if (r3 <= 0) goto L33
            java.lang.String r3 = " WHERE "
            r0.append(r3)
            appendColumnsEqValue(r0, r2, r4)
        L33:
            java.lang.String r2 = r0.toString()
            return r2
    }
}
