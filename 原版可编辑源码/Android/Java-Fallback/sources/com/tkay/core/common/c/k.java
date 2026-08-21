package com.tkay.core.common.c;

public class k extends com.tkay.core.common.c.a<com.tkay.core.common.a.h> {
    private static volatile com.tkay.core.common.c.k c;
    private final java.lang.String b;

    public static class a {
        public static final java.lang.String a = "offer_data_cache";
        public static final java.lang.String b = "bid_id";
        public static final java.lang.String c = "adsource_id";
        public static final java.lang.String d = "network_firm_id";
        public static final java.lang.String e = "offer_data";
        public static final java.lang.String f = "CREATE TABLE IF NOT EXISTS offer_data_cache(bid_id TEXT ,adsource_id TEXT ,network_firm_id INTEGER ,offer_data TEXT)";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private k(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class<com.tkay.core.common.c.k> r1 = com.tkay.core.common.c.k.class
            java.lang.String r1 = r1.getName()
            r0.b = r1
            return
    }

    public static com.tkay.core.common.c.k a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.k r0 = com.tkay.core.common.c.k.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.k> r0 = com.tkay.core.common.c.k.class
            monitor-enter(r0)
            com.tkay.core.common.c.k r1 = com.tkay.core.common.c.k.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.k r1 = new com.tkay.core.common.c.k     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.k.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.k r2 = com.tkay.core.common.c.k.c
            return r2
    }

    private synchronized boolean b(com.tkay.core.common.a.h r14) {
            r13 = this;
            monitor-enter(r13)
            r0 = 0
            if (r14 != 0) goto L6
            monitor-exit(r13)
            return r0
        L6:
            r1 = 0
            int r2 = r14.c()     // Catch: java.lang.Throwable -> L61
            r3 = 67
            r4 = 1
            if (r2 != r3) goto L2e
            android.database.sqlite.SQLiteDatabase r5 = r13.a()     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = "offer_data_cache"
            java.lang.String r2 = "offer_data"
            java.lang.String[] r7 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L61
            java.lang.String r8 = "adsource_id=?"
            java.lang.String[] r9 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L61
            java.lang.String r14 = r14.b()     // Catch: java.lang.Throwable -> L61
            r9[r0] = r14     // Catch: java.lang.Throwable -> L61
            r10 = 0
            r11 = 0
            r12 = 0
            android.database.Cursor r14 = r5.query(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L61
            goto L4b
        L2e:
            android.database.sqlite.SQLiteDatabase r5 = r13.a()     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = "offer_data_cache"
            java.lang.String r2 = "offer_data"
            java.lang.String[] r7 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L61
            java.lang.String r8 = "bid_id=?"
            java.lang.String[] r9 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L61
            java.lang.String r14 = r14.a()     // Catch: java.lang.Throwable -> L61
            r9[r0] = r14     // Catch: java.lang.Throwable -> L61
            r10 = 0
            r11 = 0
            r12 = 0
            android.database.Cursor r14 = r5.query(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L61
        L4b:
            r1 = r14
            if (r1 == 0) goto L5e
            int r14 = r1.getCount()     // Catch: java.lang.Throwable -> L61
            if (r14 <= 0) goto L5e
            r1.close()     // Catch: java.lang.Throwable -> L61
            if (r1 == 0) goto L5c
            r1.close()     // Catch: java.lang.Throwable -> L67
        L5c:
            monitor-exit(r13)
            return r4
        L5e:
            if (r1 == 0) goto L6a
            goto L63
        L61:
            if (r1 == 0) goto L6a
        L63:
            r1.close()     // Catch: java.lang.Throwable -> L67
            goto L6a
        L67:
            r14 = move-exception
            monitor-exit(r13)
            throw r14
        L6a:
            monitor-exit(r13)
            return r0
    }

    public final synchronized long a(com.tkay.core.common.a.h r9) {
            r8 = this;
            monitor-enter(r8)
            android.database.sqlite.SQLiteDatabase r0 = r8.b()     // Catch: java.lang.Throwable -> Lc3
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r8)
            return r1
        Lb:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r0.<init>()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "bid_id"
            java.lang.String r4 = r9.a()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "adsource_id"
            java.lang.String r4 = r9.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "network_firm_id"
            java.lang.String r4 = r9.a()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "offer_data"
            java.lang.String r4 = r9.d()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            boolean r3 = r8.b(r9)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            if (r3 == 0) goto L9a
            int r3 = r9.c()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r4 = 67
            r5 = 0
            r6 = 1
            if (r3 != r4) goto L75
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = "OfferDataCache update(Directly) new BidId:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = r9.a()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r3.append(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = ",old adSourceId:"
            r3.append(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = r9.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r3.append(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "adsource_id = ? "
            android.database.sqlite.SQLiteDatabase r4 = r8.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r7 = "offer_data_cache"
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r9 = r9.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r6[r5] = r9     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            int r9 = r4.update(r7, r0, r3, r6)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            long r0 = (long) r9
            monitor-exit(r8)
            return r0
        L75:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = "OfferDataCache update(Adx) BidId:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = r9.a()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r3.append(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "bid_id = ? "
            android.database.sqlite.SQLiteDatabase r4 = r8.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r7 = "offer_data_cache"
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r9 = r9.a()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r6[r5] = r9     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            int r9 = r4.update(r7, r0, r3, r6)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            long r0 = (long) r9
            monitor-exit(r8)
            return r0
        L9a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = "OfferDataCache insert BidId:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = r9.a()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r3.append(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r4 = ",adSourceId:"
            r3.append(r4)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r9 = r9.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            r3.append(r9)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            android.database.sqlite.SQLiteDatabase r9 = r8.b()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            java.lang.String r3 = "offer_data_cache"
            r4 = 0
            long r0 = r9.insert(r3, r4, r0)     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lc3
            monitor-exit(r8)
            return r0
        Lc1:
            monitor-exit(r8)
            return r1
        Lc3:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final synchronized void a(java.lang.String r6) {
            r5 = this;
            monitor-enter(r5)
            java.lang.String r0 = "bid_id = ? "
            android.database.sqlite.SQLiteDatabase r1 = r5.b()     // Catch: java.lang.Throwable -> L14
            java.lang.String r2 = "offer_data_cache"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L14
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L14
            r1.delete(r2, r0, r3)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r5)
            return
        L14:
            r6 = move-exception
            java.lang.String r0 = "Error_SQL_DELETE"
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = r1.q()     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.k.c.a(r0, r6, r1)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r5)
            return
        L28:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized java.lang.String b(java.lang.String r10) {
            r9 = this;
            monitor-enter(r9)
            android.database.sqlite.SQLiteDatabase r0 = r9.a()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r1 = "offer_data_cache"
            java.lang.String r2 = "offer_data"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = "bid_id=?"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L3b
            r8 = 0
            r4[r8] = r10     // Catch: java.lang.Throwable -> L3b
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r10 = r0.query(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3b
            if (r10 == 0) goto L35
            int r0 = r10.getCount()     // Catch: java.lang.Throwable -> L3c
            if (r0 <= 0) goto L35
            r10.moveToNext()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = r10.getString(r8)     // Catch: java.lang.Throwable -> L3c
            r10.close()     // Catch: java.lang.Throwable -> L3c
            if (r10 == 0) goto L33
            r10.close()     // Catch: java.lang.Throwable -> L43
        L33:
            monitor-exit(r9)
            return r0
        L35:
            if (r10 == 0) goto L3f
        L37:
            r10.close()     // Catch: java.lang.Throwable -> L43
            goto L3f
        L3b:
            r10 = 0
        L3c:
            if (r10 == 0) goto L3f
            goto L37
        L3f:
            java.lang.String r10 = ""
            monitor-exit(r9)
            return r10
        L43:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }
}
