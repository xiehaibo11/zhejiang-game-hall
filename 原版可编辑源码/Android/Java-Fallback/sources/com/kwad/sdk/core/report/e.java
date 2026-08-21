package com.kwad.sdk.core.report;

public abstract class e implements com.kwad.sdk.core.report.o<com.kwad.sdk.core.report.g> {
    protected com.kwad.sdk.core.report.d aqP;

    public e(com.kwad.sdk.core.report.d r1) {
            r0 = this;
            r0.<init>()
            r0.a(r1)
            return
    }

    private void a(com.kwad.sdk.core.report.d r1) {
            r0 = this;
            r0.aqP = r1
            return
    }

    private synchronized void c(com.kwad.sdk.core.report.g r6) {
            r5 = this;
            monitor-enter(r5)
            java.lang.String r0 = r5.getTag()     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "deleteAction action = "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L35
            r1.append(r6)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L35
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L35
            com.kwad.sdk.core.report.d r0 = r5.aqP     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            java.lang.String r1 = r5.BV()     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            java.lang.String r2 = "actionId=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            r4 = 0
            java.lang.String r6 = r6.actionId     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            r3[r4] = r6     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            r0.delete(r1, r2, r3)     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L35
            monitor-exit(r5)
            return
        L2f:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r5)
            return
        L35:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    protected abstract java.lang.String BV();

    protected abstract java.lang.String BW();

    @Override
    public final synchronized java.util.List<com.kwad.sdk.core.report.g> BX() {
            r7 = this;
            monitor-enter(r7)
            r0 = 0
            java.lang.String r1 = r7.BW()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            if (r2 != 0) goto L16
            com.kwad.sdk.core.report.d r2 = r7.aqP     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            android.database.sqlite.SQLiteDatabase r2 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            android.database.Cursor r0 = r2.rawQuery(r1, r0)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
        L16:
            if (r0 == 0) goto L74
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            r1.<init>()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
        L1d:
            boolean r2 = r0.moveToNext()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            if (r2 == 0) goto L30
            com.kwad.sdk.core.report.g r2 = r7.g(r0)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L78
            r1.add(r2)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L78
            goto L1d
        L2b:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            goto L1d
        L30:
            java.lang.String r2 = r7.getTag()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.String r4 = "read size= "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            int r4 = r1.size()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            r3.append(r4)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.util.Iterator r2 = r1.iterator()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
        L4d:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            if (r3 == 0) goto L6f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            com.kwad.sdk.core.report.g r3 = (com.kwad.sdk.core.report.g) r3     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.String r4 = r7.getTag()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.String r6 = "read action="
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            r5.append(r3)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            com.kwad.sdk.core.e.c.d(r4, r3)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7a
            goto L4d
        L6f:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r7)
            return r1
        L74:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L8a
            goto L7f
        L78:
            r1 = move-exception
            goto L86
        L7a:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)     // Catch: java.lang.Throwable -> L78
            goto L74
        L7f:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L8a
            r0.<init>()     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r7)
            return r0
        L86:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L8a
            throw r1     // Catch: java.lang.Throwable -> L8a
        L8a:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final synchronized void b(com.kwad.sdk.core.report.g r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r3.getTag()     // Catch: java.lang.Throwable -> L4a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "write = "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4a
            r1.append(r4)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L4a
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            r0.<init>()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            java.lang.String r1 = "actionId"
            java.lang.String r2 = r4.actionId     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            org.json.JSONObject r4 = r4.toJson()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            java.lang.String r1 = "aLog"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            com.kwad.sdk.core.report.d r4 = r3.aqP     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L4a
            android.database.sqlite.SQLiteDatabase r4 = r4.getReadableDatabase()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L4a
            java.lang.String r1 = r3.BV()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L4a
            r2 = 0
            r4.insert(r1, r2, r0)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L4a
            goto L48
        L3e:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)     // Catch: java.lang.Exception -> L44 java.lang.Throwable -> L4a
            monitor-exit(r3)
            return
        L44:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)     // Catch: java.lang.Throwable -> L4a
        L48:
            monitor-exit(r3)
            return
        L4a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    protected abstract com.kwad.sdk.core.report.g g(android.database.Cursor r1);

    protected abstract java.lang.String getTag();

    @Override
    public final void j(com.kwad.sdk.core.report.g r1) {
            r0 = this;
            com.kwad.sdk.core.report.g r1 = (com.kwad.sdk.core.report.g) r1
            r0.b(r1)
            return
    }

    @Override
    public final synchronized long size() {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            com.kwad.sdk.core.report.d r1 = r4.aqP     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            android.database.sqlite.SQLiteDatabase r1 = r1.getReadableDatabase()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            java.lang.String r3 = "select count(*) from "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            java.lang.String r3 = r4.BV()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            r2.append(r3)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            android.database.Cursor r0 = r1.rawQuery(r2, r0)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            r0.moveToFirst()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            r1 = 0
            long r1 = r0.getLong(r1)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2c
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L3b
            goto L35
        L2a:
            r1 = move-exception
            goto L37
        L2c:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)     // Catch: java.lang.Throwable -> L2a
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L3b
            r1 = 0
        L35:
            monitor-exit(r4)
            return r1
        L37:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L3b
            throw r1     // Catch: java.lang.Throwable -> L3b
        L3b:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final synchronized void t(java.util.List<com.kwad.sdk.core.report.g> r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r3.getTag()     // Catch: java.lang.Throwable -> L68
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = "delete size= "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L68
            int r2 = r4.size()     // Catch: java.lang.Throwable -> L68
            r1.append(r2)     // Catch: java.lang.Throwable -> L68
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L68
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L68
            r0 = 0
            com.kwad.sdk.core.report.d r1 = r3.aqP     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            android.database.sqlite.SQLiteDatabase r0 = r1.getReadableDatabase()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r0.beginTransaction()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
        L28:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            if (r1 == 0) goto L38
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            com.kwad.sdk.core.report.g r1 = (com.kwad.sdk.core.report.g) r1     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            r3.c(r1)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            goto L28
        L38:
            r0.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4a
            if (r0 == 0) goto L5b
            r0.endTransaction()     // Catch: java.lang.Exception -> L42 java.lang.Throwable -> L68
            monitor-exit(r3)
            return
        L42:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)     // Catch: java.lang.Throwable -> L68
            monitor-exit(r3)
            return
        L48:
            r4 = move-exception
            goto L5d
        L4a:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L5b
            r0.endTransaction()     // Catch: java.lang.Exception -> L55 java.lang.Throwable -> L68
            monitor-exit(r3)
            return
        L55:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)     // Catch: java.lang.Throwable -> L68
            monitor-exit(r3)
            return
        L5b:
            monitor-exit(r3)
            return
        L5d:
            if (r0 == 0) goto L67
            r0.endTransaction()     // Catch: java.lang.Exception -> L63 java.lang.Throwable -> L68
            goto L67
        L63:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)     // Catch: java.lang.Throwable -> L68
        L67:
            throw r4     // Catch: java.lang.Throwable -> L68
        L68:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
