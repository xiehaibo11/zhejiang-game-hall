package com.mbridge.msdk.foundation.db;

public class BatchReportDao extends com.mbridge.msdk.foundation.db.a<com.mbridge.msdk.foundation.same.report.BatchReportMessage> implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    private static volatile com.mbridge.msdk.foundation.db.BatchReportDao instance;

    protected BatchReportDao(com.mbridge.msdk.foundation.db.h r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.BatchReportDao getInstance(android.content.Context r2) {
            com.mbridge.msdk.foundation.db.BatchReportDao r0 = com.mbridge.msdk.foundation.db.BatchReportDao.instance
            if (r0 != 0) goto L1b
            java.lang.Class<com.mbridge.msdk.foundation.db.BatchReportDao> r0 = com.mbridge.msdk.foundation.db.BatchReportDao.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.BatchReportDao r1 = com.mbridge.msdk.foundation.db.BatchReportDao.instance     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.mbridge.msdk.foundation.db.BatchReportDao r1 = new com.mbridge.msdk.foundation.db.BatchReportDao     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.db.BatchReportDao.instance = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.mbridge.msdk.foundation.db.BatchReportDao r2 = com.mbridge.msdk.foundation.db.BatchReportDao.instance
            return r2
    }

    public static com.mbridge.msdk.foundation.db.BatchReportDao getInstance(com.mbridge.msdk.foundation.db.h r2) {
            com.mbridge.msdk.foundation.db.BatchReportDao r0 = com.mbridge.msdk.foundation.db.BatchReportDao.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.db.BatchReportDao> r0 = com.mbridge.msdk.foundation.db.BatchReportDao.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.BatchReportDao r1 = com.mbridge.msdk.foundation.db.BatchReportDao.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.db.BatchReportDao r1 = new com.mbridge.msdk.foundation.db.BatchReportDao     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.db.BatchReportDao.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.foundation.db.BatchReportDao r2 = com.mbridge.msdk.foundation.db.BatchReportDao.instance
            return r2
    }

    public void addReportMessage(java.lang.String r6) {
            r5 = this;
            android.database.sqlite.SQLiteDatabase r0 = r5.getWritableDatabase()
            if (r0 != 0) goto L7
            return
        L7:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Exception -> L44
            r1.<init>()     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = "report_message"
            r1.put(r2, r6)     // Catch: java.lang.Exception -> L44
            java.lang.String r6 = "time"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L44
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L44
            r1.put(r6, r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r6 = "uuid"
            java.util.UUID r2 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = "-"
            java.lang.String r4 = ""
            java.lang.String r2 = r2.replace(r3, r4)     // Catch: java.lang.Exception -> L44
            r1.put(r6, r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r6 = "report_state"
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L44
            r1.put(r6, r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r6 = "batch_report"
            r2 = 0
            r0.insert(r6, r2, r1)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r6 = move-exception
            r6.printStackTrace()
        L48:
            return
    }

    public void deleteBatchReportMessagesByTimestamp(long r4) {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.getReadableDatabase()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "delete from "
            r1.append(r2)
            java.lang.String r2 = "batch_report"
            r1.append(r2)
            java.lang.String r2 = " where "
            r1.append(r2)
            java.lang.String r2 = "time"
            r1.append(r2)
            java.lang.String r2 = " <= "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L31
            r5 = 0
            r0.rawQuery(r4, r5)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r4 = move-exception
            r4.printStackTrace()
        L35:
            return
    }

    public java.util.ArrayList<com.mbridge.msdk.foundation.same.report.BatchReportMessage> getBatchReportMessages(long r13) {
            r12 = this;
            android.database.sqlite.SQLiteDatabase r0 = r12.getReadableDatabase()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "SELECT * FROM "
            r3.append(r4)
            java.lang.String r4 = "batch_report"
            r3.append(r4)
            java.lang.String r5 = " WHERE "
            r3.append(r5)
            java.lang.String r5 = "time"
            r3.append(r5)
            java.lang.String r6 = " <= "
            r3.append(r6)
            r3.append(r13)
            java.lang.String r6 = " AND "
            r3.append(r6)
            java.lang.String r6 = "report_state"
            r3.append(r6)
            java.lang.String r7 = " = 0"
            r3.append(r7)
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L7b java.lang.Exception -> L7d
            android.database.Cursor r3 = r0.rawQuery(r3, r1)     // Catch: java.lang.Throwable -> L7b java.lang.Exception -> L7d
            if (r3 == 0) goto L75
        L47:
            boolean r7 = r3.moveToNext()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            if (r7 == 0) goto L75
            com.mbridge.msdk.foundation.same.report.BatchReportMessage r7 = new com.mbridge.msdk.foundation.same.report.BatchReportMessage     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            java.lang.String r8 = "uuid"
            int r8 = r3.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            java.lang.String r8 = r3.getString(r8)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            java.lang.String r9 = "report_message"
            int r9 = r3.getColumnIndex(r9)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            java.lang.String r9 = r3.getString(r9)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            int r10 = r3.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            long r10 = r3.getLong(r10)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            r7.<init>(r8, r9, r10)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            r2.add(r7)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L7d
            goto L47
        L72:
            r13 = move-exception
            r1 = r3
            goto La8
        L75:
            if (r3 == 0) goto L81
            r3.close()     // Catch: java.lang.Exception -> L81
            goto L81
        L7b:
            r13 = move-exception
            goto La8
        L7d:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L7b
        L81:
            android.content.ContentValues r3 = new android.content.ContentValues     // Catch: java.lang.Exception -> La3
            r3.<init>()     // Catch: java.lang.Exception -> La3
            r5 = 1
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> La3
            r3.put(r6, r5)     // Catch: java.lang.Exception -> La3
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            r5.<init>()     // Catch: java.lang.Exception -> La3
            java.lang.String r6 = "time <= "
            r5.append(r6)     // Catch: java.lang.Exception -> La3
            r5.append(r13)     // Catch: java.lang.Exception -> La3
            java.lang.String r13 = r5.toString()     // Catch: java.lang.Exception -> La3
            r0.update(r4, r3, r13, r1)     // Catch: java.lang.Exception -> La3
            goto La7
        La3:
            r13 = move-exception
            r13.printStackTrace()
        La7:
            return r2
        La8:
            if (r1 == 0) goto Lad
            r1.close()     // Catch: java.lang.Exception -> Lad
        Lad:
            throw r13
    }

    public void updateMessagesReportState(java.util.ArrayList<com.mbridge.msdk.foundation.same.report.BatchReportMessage> r7) {
            r6 = this;
            android.database.sqlite.SQLiteDatabase r0 = r6.getWritableDatabase()
            if (r7 == 0) goto L54
            int r1 = r7.size()
            if (r1 == 0) goto L54
            if (r0 != 0) goto Lf
            goto L54
        Lf:
            java.util.Iterator r7 = r7.iterator()
        L13:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L54
            java.lang.Object r1 = r7.next()
            com.mbridge.msdk.foundation.same.report.BatchReportMessage r1 = (com.mbridge.msdk.foundation.same.report.BatchReportMessage) r1
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Exception -> L4f
            r2.<init>()     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = "report_state"
            r4 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L4f
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = "batch_report"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4f
            r4.<init>()     // Catch: java.lang.Exception -> L4f
            java.lang.String r5 = "uuid = '"
            r4.append(r5)     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = r1.getUuid()     // Catch: java.lang.Exception -> L4f
            r4.append(r1)     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = "'"
            r4.append(r1)     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L4f
            r4 = 0
            r0.update(r3, r2, r1, r4)     // Catch: java.lang.Exception -> L4f
            goto L13
        L4f:
            r1 = move-exception
            r1.printStackTrace()
            goto L13
        L54:
            return
    }
}
