package com.czhj.sdk.common.Database;

public class DBOperator {
    private static final com.czhj.sdk.common.Database.DBOperator a = null;
    private final java.util.concurrent.ThreadPoolExecutor b;
    private final java.lang.Object c;

    public interface DataSQLiteLisenter {
        void onFailed(java.lang.Error r1);

        void onSuccess(java.util.List<java.util.Map> r1);
    }

    private class SQLiteDeleteThread implements java.lang.Runnable {
        final com.czhj.sdk.common.Database.DBOperator a;
        private final java.lang.String b;
        private final java.lang.String c;
        private final com.czhj.sdk.common.Database.SQLiteLisenter d;
        private final android.database.sqlite.SQLiteDatabase e;

        SQLiteDeleteThread(com.czhj.sdk.common.Database.DBOperator r1, android.database.sqlite.SQLiteDatabase r2, java.lang.String r3, java.lang.String r4, com.czhj.sdk.common.Database.SQLiteLisenter r5) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r3
                r0.e = r2
                r0.c = r4
                r0.d = r5
                return
        }

        @Override
        public void run() {
                r4 = this;
                android.database.sqlite.SQLiteDatabase r0 = r4.e     // Catch: java.lang.Throwable -> L14
                java.lang.String r1 = r4.b     // Catch: java.lang.Throwable -> L14
                java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L14
                r3 = 0
                r0.delete(r1, r2, r3)     // Catch: java.lang.Throwable -> L14
                com.czhj.sdk.common.Database.SQLiteLisenter r0 = r4.d     // Catch: java.lang.Throwable -> L14
                if (r0 == 0) goto L25
                com.czhj.sdk.common.Database.SQLiteLisenter r0 = r4.d     // Catch: java.lang.Throwable -> L14
                r0.onSuccess(r3)     // Catch: java.lang.Throwable -> L14
                goto L25
            L14:
                r0 = move-exception
                com.czhj.sdk.common.Database.SQLiteLisenter r1 = r4.d
                if (r1 == 0) goto L25
                java.lang.Error r2 = new java.lang.Error
                java.lang.String r0 = r0.getMessage()
                r2.<init>(r0)
                r1.onFailed(r2)
            L25:
                return
        }
    }

    private class SQLiteThread implements java.lang.Runnable {
        final com.czhj.sdk.common.Database.DBOperator a;
        private final java.lang.String b;
        private final java.lang.String[] c;
        private final java.lang.String d;
        private final java.lang.String[] e;
        private final java.lang.String f;
        private final java.lang.String g;
        private final java.lang.String h;
        private final java.lang.String i;
        private final android.database.sqlite.SQLiteDatabase j;
        private final com.czhj.sdk.common.Database.DBOperator.DataSQLiteLisenter k;

        SQLiteThread(com.czhj.sdk.common.Database.DBOperator r1, android.database.sqlite.SQLiteDatabase r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5, java.lang.String[] r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, com.czhj.sdk.common.Database.DBOperator.DataSQLiteLisenter r11) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r3
                r0.j = r2
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.f = r7
                r0.g = r8
                r0.h = r9
                r0.i = r10
                r0.k = r11
                return
        }

        private java.util.List<java.util.Map> a(android.database.Cursor r9) {
                r8 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
            L5:
                boolean r1 = r9.moveToNext()
                if (r1 == 0) goto L67
                java.lang.String[] r1 = r9.getColumnNames()
                java.util.HashMap r2 = new java.util.HashMap
                r2.<init>()
                int r3 = r1.length
                r4 = 0
            L16:
                if (r4 >= r3) goto L63
                r5 = r1[r4]
                int r6 = r9.getColumnIndex(r5)
                int r6 = r9.getType(r6)
                r7 = 1
                if (r6 == r7) goto L51
                r7 = 2
                if (r6 == r7) goto L44
                r7 = 3
                if (r6 == r7) goto L3b
                r7 = 4
                if (r6 == r7) goto L2f
                goto L60
            L2f:
                int r6 = r9.getColumnIndex(r5)
                byte[] r6 = r9.getBlob(r6)
                r2.put(r5, r6)
                goto L60
            L3b:
                int r6 = r9.getColumnIndex(r5)
                java.lang.String r6 = r9.getString(r6)
                goto L5d
            L44:
                int r6 = r9.getColumnIndex(r5)
                double r6 = r9.getDouble(r6)
                java.lang.Double r6 = java.lang.Double.valueOf(r6)
                goto L5d
            L51:
                int r6 = r9.getColumnIndex(r5)
                long r6 = r9.getLong(r6)
                java.lang.Long r6 = java.lang.Long.valueOf(r6)
            L5d:
                r2.put(r5, r6)
            L60:
                int r4 = r4 + 1
                goto L16
            L63:
                r0.add(r2)
                goto L5
            L67:
                return r0
        }

        @Override
        public void run() {
                r10 = this;
                r0 = 0
                android.database.sqlite.SQLiteDatabase r1 = r10.j     // Catch: java.lang.Throwable -> L27
                java.lang.String r2 = r10.b     // Catch: java.lang.Throwable -> L27
                java.lang.String[] r3 = r10.c     // Catch: java.lang.Throwable -> L27
                java.lang.String r4 = r10.d     // Catch: java.lang.Throwable -> L27
                java.lang.String[] r5 = r10.e     // Catch: java.lang.Throwable -> L27
                java.lang.String r6 = r10.f     // Catch: java.lang.Throwable -> L27
                java.lang.String r7 = r10.g     // Catch: java.lang.Throwable -> L27
                java.lang.String r8 = r10.h     // Catch: java.lang.Throwable -> L27
                java.lang.String r9 = r10.i     // Catch: java.lang.Throwable -> L27
                android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L27
                java.util.List r1 = r10.a(r0)     // Catch: java.lang.Throwable -> L27
                com.czhj.sdk.common.Database.DBOperator$DataSQLiteLisenter r2 = r10.k     // Catch: java.lang.Throwable -> L27
                if (r2 == 0) goto L24
                com.czhj.sdk.common.Database.DBOperator$DataSQLiteLisenter r2 = r10.k     // Catch: java.lang.Throwable -> L27
                r2.onSuccess(r1)     // Catch: java.lang.Throwable -> L27
            L24:
                if (r0 == 0) goto L3f
                goto L3c
            L27:
                r1 = move-exception
                com.czhj.sdk.common.Database.DBOperator$DataSQLiteLisenter r2 = r10.k     // Catch: java.lang.Throwable -> L40
                if (r2 == 0) goto L3a
                com.czhj.sdk.common.Database.DBOperator$DataSQLiteLisenter r2 = r10.k     // Catch: java.lang.Throwable -> L40
                java.lang.Error r3 = new java.lang.Error     // Catch: java.lang.Throwable -> L40
                java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L40
                r3.<init>(r1)     // Catch: java.lang.Throwable -> L40
                r2.onFailed(r3)     // Catch: java.lang.Throwable -> L40
            L3a:
                if (r0 == 0) goto L3f
            L3c:
                r0.close()
            L3f:
                return
            L40:
                r1 = move-exception
                if (r0 == 0) goto L46
                r0.close()
            L46:
                throw r1
        }
    }

    static {
            com.czhj.sdk.common.Database.DBOperator r0 = new com.czhj.sdk.common.Database.DBOperator
            r0.<init>()
            com.czhj.sdk.common.Database.DBOperator.a = r0
            return
    }

    private DBOperator() {
            r8 = this;
            r8.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r8.c = r0
            java.util.concurrent.ArrayBlockingQueue r7 = new java.util.concurrent.ArrayBlockingQueue
            r0 = 10
            r7.<init>(r0)
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MINUTES
            r2 = 0
            r3 = 2147483647(0x7fffffff, float:NaN)
            r4 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            r8.b = r0
            return
    }

    public static synchronized com.czhj.sdk.common.Database.DBOperator getInstance() {
            java.lang.Class<com.czhj.sdk.common.Database.DBOperator> r0 = com.czhj.sdk.common.Database.DBOperator.class
            monitor-enter(r0)
            com.czhj.sdk.common.Database.DBOperator r1 = com.czhj.sdk.common.Database.DBOperator.a     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public int count(android.database.sqlite.SQLiteDatabase r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            int r2 = r1.count(r2, r3, r0)
            return r2
    }

    public int count(android.database.sqlite.SQLiteDatabase r10, java.lang.String r11, java.lang.String r12) {
            r9 = this;
            r2 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r0 = r10
            r1 = r11
            r3 = r12
            android.database.Cursor r10 = r0.query(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L19
            int r11 = r10.getCount()     // Catch: java.lang.Throwable -> L17
            if (r10 == 0) goto L28
            r10.close()
            goto L28
        L17:
            r11 = move-exception
            goto L1b
        L19:
            r11 = move-exception
            r10 = 0
        L1b:
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Throwable -> L29
            com.czhj.sdk.logger.SigmobLog.e(r11)     // Catch: java.lang.Throwable -> L29
            if (r10 == 0) goto L27
            r10.close()
        L27:
            r11 = 0
        L28:
            return r11
        L29:
            r11 = move-exception
            if (r10 == 0) goto L2f
            r10.close()
        L2f:
            throw r11
    }

    public void delete(android.database.sqlite.SQLiteDatabase r8, java.lang.String r9, java.lang.String r10, com.czhj.sdk.common.Database.SQLiteLisenter r11) {
            r7 = this;
            com.czhj.sdk.common.Database.DBOperator$SQLiteDeleteThread r6 = new com.czhj.sdk.common.Database.DBOperator$SQLiteDeleteThread     // Catch: java.lang.Throwable -> L11
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L11
            java.util.concurrent.ThreadPoolExecutor r8 = r7.b     // Catch: java.lang.Throwable -> L11
            r8.submit(r6)     // Catch: java.lang.Throwable -> L11
            goto L25
        L11:
            r8 = move-exception
            java.lang.String r9 = r8.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r9)
            java.lang.Error r9 = new java.lang.Error
            java.lang.String r8 = r8.getMessage()
            r9.<init>(r8)
            r11.onFailed(r9)
        L25:
            return
    }

    public void find(android.database.sqlite.SQLiteDatabase r14, java.lang.String r15, java.lang.String[] r16, java.lang.String r17, java.lang.String[] r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22, com.czhj.sdk.common.Database.DBOperator.DataSQLiteLisenter r23) {
            r13 = this;
            com.czhj.sdk.common.Database.DBOperator$SQLiteThread r12 = new com.czhj.sdk.common.Database.DBOperator$SQLiteThread
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r11 = r23
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r0 = r13
            java.util.concurrent.ThreadPoolExecutor r1 = r0.b
            r1.submit(r12)
            return
    }
}
