package com.tkay.core.common.c;

public class f extends com.tkay.core.common.c.a<com.tkay.core.common.a.f> {
    private static volatile com.tkay.core.common.c.f d;
    private final java.lang.String b;
    private final long c;

    public static class a {
        public static final java.lang.String a = "dsp_offer_show_record";
        public static final java.lang.String b = "dsp_id";
        public static final java.lang.String c = "dsp_offer_id";
        public static final java.lang.String d = "show_limit";
        public static final java.lang.String e = "show_count";
        public static final java.lang.String f = "create_time";
        public static final java.lang.String g = "last_update_time";
        public static final java.lang.String h = "CREATE TABLE IF NOT EXISTS dsp_offer_show_record(dsp_id TEXT ,dsp_offer_id TEXT ,show_limit INTEGER ,show_count INTEGER ,create_time INTEGER ,last_update_time INTEGER)";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private f(com.tkay.core.common.c.b r3) {
            r2 = this;
            r2.<init>(r3)
            java.lang.Class<com.tkay.core.common.c.f> r3 = com.tkay.core.common.c.f.class
            java.lang.String r3 = r3.getName()
            r2.b = r3
            r0 = 86400000(0x5265c00, double:4.2687272E-316)
            r2.c = r0
            return
    }

    private synchronized com.tkay.core.common.a.f a(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            java.lang.String r2 = "dsp_offer_show_record"
            r3 = 0
            java.lang.String r4 = "dsp_id = ?  AND dsp_offer_id = ? "
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            r9 = 0
            r5[r9] = r11     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            r11 = 1
            r5[r11] = r12     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3f java.lang.Exception -> L4d
            java.util.List r12 = r10.a(r11)     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            r11.close()     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            int r1 = r12.size()     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            if (r1 <= 0) goto L35
            java.lang.Object r12 = r12.get(r9)     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            com.tkay.core.common.a.f r12 = (com.tkay.core.common.a.f) r12     // Catch: java.lang.Throwable -> L39 java.lang.OutOfMemoryError -> L40 java.lang.Exception -> L4e
            if (r11 == 0) goto L33
            r11.close()     // Catch: java.lang.Throwable -> L51
        L33:
            monitor-exit(r10)
            return r12
        L35:
            if (r11 == 0) goto L54
            goto L50
        L38:
            r11 = r0
        L39:
            if (r11 == 0) goto L54
        L3b:
            r11.close()     // Catch: java.lang.Throwable -> L51
            goto L54
        L3f:
            r11 = r0
        L40:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L46
            if (r11 == 0) goto L54
            goto L50
        L46:
            r12 = move-exception
            if (r11 == 0) goto L4c
            r11.close()     // Catch: java.lang.Throwable -> L51
        L4c:
            throw r12     // Catch: java.lang.Throwable -> L51
        L4d:
            r11 = r0
        L4e:
            if (r11 == 0) goto L54
        L50:
            goto L3b
        L51:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        L54:
            monitor-exit(r10)
            return r0
    }

    public static com.tkay.core.common.c.f a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.f r0 = com.tkay.core.common.c.f.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.f> r0 = com.tkay.core.common.c.f.class
            monitor-enter(r0)
            com.tkay.core.common.c.f r1 = com.tkay.core.common.c.f.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.f r1 = new com.tkay.core.common.c.f     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.f.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.f r2 = com.tkay.core.common.c.f.d
            return r2
    }

    private synchronized java.util.List<com.tkay.core.common.a.f> a(android.database.Cursor r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L53
            r0.<init>()     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L51
            int r1 = r4.getCount()     // Catch: java.lang.Throwable -> L53
            if (r1 <= 0) goto L51
        Le:
            boolean r1 = r4.moveToNext()     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L51
            com.tkay.core.common.a.f r1 = new com.tkay.core.common.a.f     // Catch: java.lang.Throwable -> L51
            r1.<init>()     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = "dsp_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L51
            r1.a(r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = "dsp_offer_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L51
            r1.b(r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = "show_limit"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L51
            int r2 = r4.getInt(r2)     // Catch: java.lang.Throwable -> L51
            r1.a(r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = "show_count"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L51
            int r2 = r4.getInt(r2)     // Catch: java.lang.Throwable -> L51
            r1.b(r2)     // Catch: java.lang.Throwable -> L51
            r0.add(r1)     // Catch: java.lang.Throwable -> L51
            goto Le
        L51:
            monitor-exit(r3)
            return r0
        L53:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized long a(com.tkay.core.common.a.f r7) {
            r6 = this;
            monitor-enter(r6)
            android.database.sqlite.SQLiteDatabase r0 = r6.b()     // Catch: java.lang.Throwable -> Lac
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r6)
            return r1
        Lb:
            int r0 = r7.c()     // Catch: java.lang.Throwable -> Lac
            if (r0 > 0) goto L13
            monitor-exit(r6)
            return r1
        L13:
            java.lang.String r0 = r7.a()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = r7.b()     // Catch: java.lang.Throwable -> Lac
            com.tkay.core.common.a.f r0 = r6.a(r0, r3)     // Catch: java.lang.Throwable -> Lac
            if (r0 != 0) goto L90
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.<init>()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "dsp_id"
            java.lang.String r4 = r7.a()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "dsp_offer_id"
            java.lang.String r4 = r7.b()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "show_limit"
            int r4 = r7.c()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "show_count"
            r4 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "create_time"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "last_update_time"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.put(r3, r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r4 = "insertDspOfferShowRecord--insert dspid:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r4 = r7.a()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r3.append(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r4 = ",dspOfferId:"
            r3.append(r4)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r7 = r7.b()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r3.append(r7)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            android.database.sqlite.SQLiteDatabase r7 = r6.b()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "dsp_offer_show_record"
            r4 = 0
            long r0 = r7.insert(r3, r4, r0)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            monitor-exit(r6)
            return r0
        L90:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = "insertDspOfferShowRecord--had inserted...,dspid:"
            r0.<init>(r3)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = r7.a()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.append(r3)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r3 = ",dspOfferId:"
            r0.append(r3)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            java.lang.String r7 = r7.b()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
            r0.append(r7)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Lac
        Laa:
            monitor-exit(r6)
            return r1
        Lac:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized java.util.List<com.tkay.core.common.a.d> a(int r12) {
            r11 = this;
            monitor-enter(r11)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L54
            r0.<init>()     // Catch: java.lang.Throwable -> L54
            if (r12 > 0) goto La
            monitor-exit(r11)
            return r0
        La:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.a()     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            java.lang.String r3 = "dsp_offer_show_record"
            r4 = 0
            java.lang.String r5 = "show_count > show_limit"
            r6 = 0
            r7 = 0
            r8 = 0
            java.lang.String r9 = "last_update_time DESC"
            java.lang.String r10 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            java.util.List r12 = r11.a(r1)     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            java.lang.String r3 = "get limit show cap record list size:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            int r3 = r12.size()     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            r2.append(r3)     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            r1.close()     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            r0.addAll(r12)     // Catch: java.lang.Throwable -> L3f java.lang.OutOfMemoryError -> L42 java.lang.Exception -> L4f
            if (r1 == 0) goto L52
        L3b:
            r1.close()     // Catch: java.lang.Throwable -> L54
            goto L52
        L3f:
            if (r1 == 0) goto L52
            goto L3b
        L42:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L52
            goto L3b
        L48:
            r12 = move-exception
            if (r1 == 0) goto L4e
            r1.close()     // Catch: java.lang.Throwable -> L54
        L4e:
            throw r12     // Catch: java.lang.Throwable -> L54
        L4f:
            if (r1 == 0) goto L52
            goto L3b
        L52:
            monitor-exit(r11)
            return r0
        L54:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized long b(com.tkay.core.common.a.f r11) {
            r10 = this;
            monitor-enter(r10)
            android.database.sqlite.SQLiteDatabase r0 = r10.b()     // Catch: java.lang.Throwable -> Lb5
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r10)
            return r1
        Lb:
            int r0 = r11.c()     // Catch: java.lang.Throwable -> Lb5
            if (r0 > 0) goto L13
            monitor-exit(r10)
            return r1
        L13:
            java.lang.String r0 = r11.a()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r11.b()     // Catch: java.lang.Throwable -> Lb5
            com.tkay.core.common.a.f r0 = r10.a(r0, r3)     // Catch: java.lang.Throwable -> Lb5
            if (r0 == 0) goto Lb3
            android.content.ContentValues r3 = new android.content.ContentValues     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r3.<init>()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r4 = "dsp_id"
            java.lang.String r5 = r11.a()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r3.put(r4, r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r4 = "dsp_offer_id"
            java.lang.String r5 = r11.b()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r3.put(r4, r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r4 = "show_limit"
            int r5 = r11.c()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r3.put(r4, r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r4 = "show_count"
            int r5 = r0.d()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r6 = 1
            int r5 = r5 + r6
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r3.put(r4, r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r4 = "last_update_time"
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.Long r5 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r3.put(r4, r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r5 = "updateDspOfferShowRecord--update dspid:"
            r4.<init>(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r5 = r11.a()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r4.append(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r5 = ",dspOfferId:"
            r4.append(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r5 = r11.b()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r4.append(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r5 = ",cur show count:"
            r4.append(r5)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            int r0 = r0.d()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            int r0 = r0 + r6
            r4.append(r0)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r0 = ",limit show cap:"
            r4.append(r0)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            int r0 = r11.c()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r4.append(r0)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r0 = "dsp_id = ? and dsp_offer_id = ? "
            android.database.sqlite.SQLiteDatabase r4 = r10.b()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r5 = "dsp_offer_show_record"
            r7 = 2
            java.lang.String[] r7 = new java.lang.String[r7]     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r8 = 0
            java.lang.String r9 = r11.a()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r7[r8] = r9     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            java.lang.String r11 = r11.b()     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            r7[r6] = r11     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            int r11 = r4.update(r5, r3, r0, r7)     // Catch: java.lang.Exception -> Lb3 java.lang.Throwable -> Lb5
            long r0 = (long) r11
            monitor-exit(r10)
            return r0
        Lb3:
            monitor-exit(r10)
            return r1
        Lb5:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final void c() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "create_time < "
            r0.<init>(r1)     // Catch: java.lang.Exception -> L27
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L27
            r3 = 86400000(0x5265c00, double:4.2687272E-316)
            long r1 = r1 - r3
            r0.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L27
            android.database.sqlite.SQLiteDatabase r1 = r5.b()     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L1d
            return
        L1d:
            android.database.sqlite.SQLiteDatabase r1 = r5.b()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "dsp_offer_show_record"
            r3 = 0
            r1.delete(r2, r0, r3)     // Catch: java.lang.Exception -> L27
        L27:
            return
    }
}
