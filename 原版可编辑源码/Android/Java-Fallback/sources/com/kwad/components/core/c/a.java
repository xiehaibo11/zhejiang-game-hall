package com.kwad.components.core.c;

public class a {
    private static volatile com.kwad.components.core.c.a Ie;
    private final android.database.sqlite.SQLiteDatabase Id;

    static class a extends android.database.sqlite.SQLiteOpenHelper {
        private static int If = 1;
        private java.lang.String Ig;
        private java.lang.String Ih;

        static {
                return
        }

        public a(android.content.Context r4) {
                r3 = this;
                int r0 = com.kwad.components.core.c.a.a.If
                java.lang.String r1 = "ksadcache.db"
                r2 = 0
                r3.<init>(r4, r1, r2, r0)
                java.lang.String r4 = "CREATE TABLE IF NOT EXISTS ksad_ad_cache (creativeId VARCHAR PRIMARY KEY NOT NULL, posId TEXT, adJson TEXT, ecpm INTEGER, playAgainJson TEXT, adSenseJson TEXT, createTime INTEGER, expireTime INTEGER)"
                r3.Ig = r4
                java.lang.String r4 = "CREATE TABLE IF NOT EXISTS ksad_ad_cache_strategy(posId VARCHAR PRIMARY KEY NOT NULL, cacheSize INTEGER, cacheSecond INTEGER, strategyCode INTEGER, enable INTEGER)"
                r3.Ih = r4
                return
        }

        @Override
        public final void onCreate(android.database.sqlite.SQLiteDatabase r2) {
                r1 = this;
                java.lang.String r0 = r1.Ig
                r2.execSQL(r0)
                java.lang.String r0 = r1.Ih
                r2.execSQL(r0)
                return
        }

        @Override
        public final void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
                r0 = this;
                return
        }
    }

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.c.a$a r0 = new com.kwad.components.core.c.a$a
            r0.<init>(r2)
            android.database.sqlite.SQLiteDatabase r2 = r0.getWritableDatabase()
            r1.Id = r2
            return
    }

    private <T extends com.kwad.components.core.c.h> void b(java.util.List<T> r6, java.lang.String r7) {
            r5 = this;
            android.database.sqlite.SQLiteDatabase r0 = r5.Id     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            r0.beginTransaction()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
        L9:
            boolean r0 = r6.hasNext()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            if (r0 == 0) goto L42
            java.lang.Object r0 = r6.next()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            com.kwad.components.core.c.h r0 = (com.kwad.components.core.c.h) r0     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            android.content.ContentValues r0 = r0.mt()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            android.database.sqlite.SQLiteDatabase r1 = r5.Id     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            r2 = 0
            r3 = 5
            long r0 = r1.insertWithOnConflict(r7, r2, r0, r3)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            java.lang.String r2 = "AdCacheDBManager"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            java.lang.String r4 = "insertData: "
            r3.<init>(r4)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            r3.append(r7)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            java.lang.String r4 = ", rowId: "
            r3.append(r4)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            r3.append(r0)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            com.kwad.sdk.core.e.c.d(r2, r0)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L54
            goto L9
        L3d:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            goto L9
        L42:
            android.database.sqlite.SQLiteDatabase r6 = r5.Id     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            r6.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            android.database.sqlite.SQLiteDatabase r6 = r5.Id
            if (r6 == 0) goto L66
            r6.endTransaction()     // Catch: java.lang.Exception -> L4f
            return
        L4f:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)
            return
        L54:
            r6 = move-exception
            goto L67
        L56:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)     // Catch: java.lang.Throwable -> L54
            android.database.sqlite.SQLiteDatabase r6 = r5.Id
            if (r6 == 0) goto L66
            r6.endTransaction()     // Catch: java.lang.Exception -> L62
            return
        L62:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)
        L66:
            return
        L67:
            android.database.sqlite.SQLiteDatabase r7 = r5.Id
            if (r7 == 0) goto L73
            r7.endTransaction()     // Catch: java.lang.Exception -> L6f
            goto L73
        L6f:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r7)
        L73:
            throw r6
    }

    public static com.kwad.components.core.c.a mg() {
            com.kwad.components.core.c.a r0 = com.kwad.components.core.c.a.Ie
            if (r0 != 0) goto L29
            java.lang.Class<com.kwad.components.core.c.a> r0 = com.kwad.components.core.c.a.class
            monitor-enter(r0)
            com.kwad.components.core.c.a r1 = com.kwad.components.core.c.a.Ie     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L24
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L24
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Throwable -> L26
            com.kwad.components.core.c.a r2 = new com.kwad.components.core.c.a     // Catch: android.database.sqlite.SQLiteException -> L1d java.lang.Throwable -> L26
            r2.<init>(r1)     // Catch: android.database.sqlite.SQLiteException -> L1d java.lang.Throwable -> L26
            com.kwad.components.core.c.a.Ie = r2     // Catch: android.database.sqlite.SQLiteException -> L1d java.lang.Throwable -> L26
            goto L24
        L1d:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)     // Catch: java.lang.Throwable -> L26
            r1 = 0
            com.kwad.components.core.c.a.Ie = r1     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            goto L29
        L26:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r1
        L29:
            com.kwad.components.core.c.a r0 = com.kwad.components.core.c.a.Ie
            return r0
    }

    public final void a(com.kwad.components.core.c.e r2) {
            r1 = this;
            java.util.List r2 = java.util.Collections.singletonList(r2)
            java.lang.String r0 = "ksad_ad_cache_strategy"
            r1.b(r2, r0)
            return
    }

    public final com.kwad.components.core.c.e ae(java.lang.String r7) {
            r6 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r6.Id     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            java.lang.String r2 = "select  * from ksad_ad_cache_strategy where posId=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            r4 = 0
            r3[r4] = r7     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            android.database.Cursor r7 = r1.rawQuery(r2, r3)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            java.util.List r1 = com.kwad.components.core.c.e.a(r7)     // Catch: java.lang.Exception -> L25 java.lang.Throwable -> L35
            if (r1 == 0) goto L31
            int r2 = r1.size()     // Catch: java.lang.Exception -> L25 java.lang.Throwable -> L35
            if (r2 <= 0) goto L31
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> L25 java.lang.Throwable -> L35
            com.kwad.components.core.c.e r1 = (com.kwad.components.core.c.e) r1     // Catch: java.lang.Exception -> L25 java.lang.Throwable -> L35
            com.kwad.sdk.crash.utils.b.closeQuietly(r7)
            return r1
        L25:
            r1 = move-exception
            goto L2e
        L27:
            r7 = move-exception
            r5 = r0
            r0 = r7
            r7 = r5
            goto L36
        L2c:
            r1 = move-exception
            r7 = r0
        L2e:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)     // Catch: java.lang.Throwable -> L35
        L31:
            com.kwad.sdk.crash.utils.b.closeQuietly(r7)
            return r0
        L35:
            r0 = move-exception
        L36:
            com.kwad.sdk.crash.utils.b.closeQuietly(r7)
            throw r0
    }

    public final java.util.List<com.kwad.components.core.c.g> b(java.lang.String r11, long r12, int r14) {
            r10 = this;
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.Id     // Catch: java.lang.Throwable -> L87 java.lang.Exception -> L89
            java.lang.String r2 = "select  * from ksad_ad_cache where posId=? order by createTime desc"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L87 java.lang.Exception -> L89
            r4 = 0
            r3[r4] = r11     // Catch: java.lang.Throwable -> L87 java.lang.Exception -> L89
            android.database.Cursor r1 = r1.rawQuery(r2, r3)     // Catch: java.lang.Throwable -> L87 java.lang.Exception -> L89
            java.util.List r2 = com.kwad.components.core.c.g.a(r1)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            if (r2 != 0) goto L19
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L19:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.lang.String r6 = "(posId = "
            r5.<init>(r6)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            r5.append(r11)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.lang.String r11 = ") AND ("
            r5.append(r11)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.lang.String r11 = r5.toString()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            r3.<init>(r11)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            r11.<init>()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.util.Iterator r5 = r2.iterator()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            r6 = r4
        L3b:
            boolean r7 = r5.hasNext()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            if (r7 == 0) goto L72
            java.lang.Object r7 = r5.next()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            com.kwad.components.core.c.g r7 = (com.kwad.components.core.c.g) r7     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            int r6 = r6 + 1
            if (r6 > r14) goto L57
            long r8 = r7.mz()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            int r8 = (r8 > r12 ? 1 : (r8 == r12 ? 0 : -1))
            if (r8 < 0) goto L3b
            r11.add(r7)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            goto L3b
        L57:
            java.lang.String r8 = " creativeId = "
            r3.append(r8)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.lang.String r7 = r7.mB()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            r3.append(r7)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            int r7 = r2.size()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            if (r6 != r7) goto L6f
            java.lang.String r7 = ")"
        L6b:
            r3.append(r7)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            goto L3b
        L6f:
            java.lang.String r7 = " OR"
            goto L6b
        L72:
            if (r6 <= r14) goto L81
            java.lang.String r12 = r3.toString()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            android.database.sqlite.SQLiteDatabase r13 = r10.Id     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            java.lang.String r14 = "ksad_ad_cache"
            java.lang.String[] r2 = new java.lang.String[r4]     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
            r13.delete(r14, r12, r2)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L92
        L81:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r11
        L85:
            r11 = move-exception
            goto L8b
        L87:
            r11 = move-exception
            goto L94
        L89:
            r11 = move-exception
            r1 = r0
        L8b:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r11)     // Catch: java.lang.Throwable -> L92
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L92:
            r11 = move-exception
            r0 = r1
        L94:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r11
    }

    public final void g(java.util.List<com.kwad.components.core.c.g> r2) {
            r1 = this;
            java.lang.String r0 = "ksad_ad_cache"
            r1.b(r2, r0)
            return
    }

    public final void mh() {
            r7 = this;
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1b
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            android.database.sqlite.SQLiteDatabase r2 = r7.Id     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = "ksad_ad_cache"
            java.lang.String r4 = "expireTime<?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Exception -> L1b
            r6 = 0
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L1b
            r5[r6] = r0     // Catch: java.lang.Exception -> L1b
            r2.delete(r3, r4, r5)     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    public final void o(long r6) {
            r5 = this;
            android.database.sqlite.SQLiteDatabase r0 = r5.Id     // Catch: java.lang.Exception -> L28
            java.lang.String r1 = "ksad_ad_cache"
            java.lang.String r2 = "creativeId=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Exception -> L28
            r4 = 0
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> L28
            r3[r4] = r6     // Catch: java.lang.Exception -> L28
            int r6 = r0.delete(r1, r2, r3)     // Catch: java.lang.Exception -> L28
            java.lang.String r7 = "AdCacheDBManager"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28
            java.lang.String r1 = "deleteCachedAdByCreativeId result: "
            r0.<init>(r1)     // Catch: java.lang.Exception -> L28
            r0.append(r6)     // Catch: java.lang.Exception -> L28
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L28
            com.kwad.sdk.core.e.c.d(r7, r6)     // Catch: java.lang.Exception -> L28
            return
        L28:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)
            return
    }
}
