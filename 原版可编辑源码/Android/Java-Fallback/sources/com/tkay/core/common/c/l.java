package com.tkay.core.common.c;

public class l extends com.tkay.core.common.c.a<com.tkay.core.common.f.ad> {
    private static volatile com.tkay.core.common.c.l c;
    private final java.lang.String b;

    public static class a {
        public static final java.lang.String a = "placement_ad_impression";
        public static final java.lang.String b = "format";
        public static final java.lang.String c = "placement_id";
        public static final java.lang.String d = "adsource_id";
        public static final java.lang.String e = "hour_time";
        public static final java.lang.String f = "hour_imp";
        public static final java.lang.String g = "date_time";
        public static final java.lang.String h = "date_imp";
        public static final java.lang.String i = "show_time";
        public static final java.lang.String j = "CREATE TABLE IF NOT EXISTS placement_ad_impression(format INTEGER ,placement_id TEXT ,adsource_id TEXT ,hour_time TEXT ,hour_imp INTEGER ,date_time TEXT ,date_imp INTEGER , show_time INTEGER)";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private l(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class<com.tkay.core.common.c.l> r1 = com.tkay.core.common.c.l.class
            java.lang.String r1 = r1.getName()
            r0.b = r1
            return
    }

    public static com.tkay.core.common.c.l a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.l r0 = com.tkay.core.common.c.l.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.l> r0 = com.tkay.core.common.c.l.class
            monitor-enter(r0)
            com.tkay.core.common.c.l r1 = com.tkay.core.common.c.l.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.l r1 = new com.tkay.core.common.c.l     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.l.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.l r2 = com.tkay.core.common.c.l.c
            return r2
    }

    private static com.tkay.core.common.f.ad a(android.database.Cursor r6, java.lang.String r7, java.lang.String r8) {
            if (r6 == 0) goto Lba
            int r0 = r6.getCount()
            if (r0 <= 0) goto Lba
            com.tkay.core.common.f.ad r0 = new com.tkay.core.common.f.ad
            r0.<init>()
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r0.f = r1
        L14:
            boolean r1 = r6.moveToNext()
            if (r1 == 0) goto Lb9
            java.lang.String r1 = "format"
            int r1 = r6.getColumnIndex(r1)
            int r1 = r6.getInt(r1)
            r0.a = r1
            java.lang.String r1 = "placement_id"
            int r1 = r6.getColumnIndex(r1)
            java.lang.String r1 = r6.getString(r1)
            r0.b = r1
            com.tkay.core.common.f.ad$a r1 = new com.tkay.core.common.f.ad$a
            r1.<init>()
            java.lang.String r2 = "adsource_id"
            int r2 = r6.getColumnIndex(r2)
            java.lang.String r2 = r6.getString(r2)
            r1.a = r2
            java.lang.String r2 = "hour_time"
            int r2 = r6.getColumnIndex(r2)
            java.lang.String r2 = r6.getString(r2)
            r1.b = r2
            java.lang.String r2 = "date_time"
            int r2 = r6.getColumnIndex(r2)
            java.lang.String r2 = r6.getString(r2)
            r1.c = r2
            java.lang.String r2 = r1.b
            boolean r2 = android.text.TextUtils.equals(r2, r8)
            r3 = 0
            if (r2 != 0) goto L67
            r1.e = r3
            goto L73
        L67:
            java.lang.String r2 = "hour_imp"
            int r2 = r6.getColumnIndex(r2)
            int r2 = r6.getInt(r2)
            r1.e = r2
        L73:
            int r2 = r0.d
            int r4 = r1.e
            int r2 = r2 + r4
            r0.d = r2
            java.lang.String r2 = r1.c
            boolean r2 = android.text.TextUtils.equals(r2, r7)
            if (r2 != 0) goto L85
            r1.d = r3
            goto L91
        L85:
            java.lang.String r2 = "date_imp"
            int r2 = r6.getColumnIndex(r2)
            int r2 = r6.getInt(r2)
            r1.d = r2
        L91:
            int r2 = r0.c
            int r3 = r1.d
            int r2 = r2 + r3
            r0.c = r2
            java.lang.String r2 = "show_time"
            int r2 = r6.getColumnIndex(r2)
            long r2 = r6.getLong(r2)
            r1.f = r2
            long r2 = r1.f
            long r4 = r0.e
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto Lb0
            long r2 = r1.f
            r0.e = r2
        Lb0:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ad$a> r2 = r0.f
            java.lang.String r3 = r1.a
            r2.put(r3, r1)
            goto L14
        Lb9:
            return r0
        Lba:
            r6 = 0
            return r6
    }

    private static com.tkay.core.common.f.ad.a b(android.database.Cursor r2, java.lang.String r3, java.lang.String r4) {
            if (r2 == 0) goto L70
            int r0 = r2.getCount()
            if (r0 <= 0) goto L70
            r2.moveToNext()
            com.tkay.core.common.f.ad$a r0 = new com.tkay.core.common.f.ad$a
            r0.<init>()
            java.lang.String r1 = "adsource_id"
            int r1 = r2.getColumnIndex(r1)
            java.lang.String r1 = r2.getString(r1)
            r0.a = r1
            java.lang.String r1 = "hour_time"
            int r1 = r2.getColumnIndex(r1)
            java.lang.String r1 = r2.getString(r1)
            r0.b = r1
            java.lang.String r1 = "date_time"
            int r1 = r2.getColumnIndex(r1)
            java.lang.String r1 = r2.getString(r1)
            r0.c = r1
            java.lang.String r1 = r0.b
            boolean r4 = android.text.TextUtils.equals(r1, r4)
            r1 = 0
            if (r4 != 0) goto L40
            r0.e = r1
            goto L4c
        L40:
            java.lang.String r4 = "hour_imp"
            int r4 = r2.getColumnIndex(r4)
            int r4 = r2.getInt(r4)
            r0.e = r4
        L4c:
            java.lang.String r4 = r0.c
            boolean r3 = android.text.TextUtils.equals(r4, r3)
            if (r3 != 0) goto L57
            r0.d = r1
            goto L63
        L57:
            java.lang.String r3 = "date_imp"
            int r3 = r2.getColumnIndex(r3)
            int r3 = r2.getInt(r3)
            r0.d = r3
        L63:
            java.lang.String r3 = "show_time"
            int r3 = r2.getColumnIndex(r3)
            long r2 = r2.getLong(r3)
            r0.f = r2
            return r0
        L70:
            r2 = 0
            return r2
    }

    private boolean b(java.lang.String r11) {
            r10 = this;
            android.database.sqlite.SQLiteDatabase r0 = r10.a()
            java.lang.String r1 = "adsource_id"
            java.lang.String[] r2 = new java.lang.String[]{r1}
            r8 = 1
            java.lang.String[] r4 = new java.lang.String[r8]
            r9 = 0
            r4[r9] = r11
            java.lang.String r1 = "placement_ad_impression"
            java.lang.String r3 = "adsource_id=?"
            java.lang.String r5 = "adsource_id"
            r6 = 0
            r7 = 0
            android.database.Cursor r11 = r0.query(r1, r2, r3, r4, r5, r6, r7)
            if (r11 == 0) goto L28
            int r0 = r11.getCount()
            if (r0 <= 0) goto L28
            r11.close()
            return r8
        L28:
            if (r11 == 0) goto L2d
            r11.close()
        L2d:
            return r9
    }

    public final synchronized long a(int r13, java.lang.String r14, com.tkay.core.common.f.ad.a r15) {
            r12 = this;
            monitor-enter(r12)
            android.database.sqlite.SQLiteDatabase r0 = r12.b()     // Catch: java.lang.Throwable -> Laf
            r1 = -1
            if (r0 == 0) goto Lad
            if (r15 != 0) goto Ld
            goto Lad
        Ld:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.<init>()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r3 = "format"
            java.lang.Integer r13 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r3, r13)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "placement_id"
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "adsource_id"
            java.lang.String r14 = r15.a     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "hour_time"
            java.lang.String r14 = r15.b     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "hour_imp"
            int r14 = r15.e     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "date_time"
            java.lang.String r14 = r15.c     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "date_imp"
            int r14 = r15.d     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = "show_time"
            long r3 = r15.f     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.Long r14 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r0.put(r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r13 = r15.a     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            android.database.sqlite.SQLiteDatabase r3 = r12.a()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r4 = "placement_ad_impression"
            java.lang.String r14 = "adsource_id"
            java.lang.String[] r5 = new java.lang.String[]{r14}     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r6 = "adsource_id=?"
            r14 = 1
            java.lang.String[] r7 = new java.lang.String[r14]     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r11 = 0
            r7[r11] = r13     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r8 = "adsource_id"
            r9 = 0
            r10 = 0
            android.database.Cursor r13 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            if (r13 == 0) goto L81
            int r3 = r13.getCount()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            if (r3 <= 0) goto L81
            r13.close()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r13 = r14
            goto L87
        L81:
            if (r13 == 0) goto L86
            r13.close()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
        L86:
            r13 = r11
        L87:
            if (r13 == 0) goto L9e
            java.lang.String r13 = "adsource_id = ? "
            android.database.sqlite.SQLiteDatabase r3 = r12.b()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r4 = "placement_ad_impression"
            java.lang.String[] r14 = new java.lang.String[r14]     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r15 = r15.a     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            r14[r11] = r15     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            int r13 = r3.update(r4, r0, r13, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            long r13 = (long) r13
            monitor-exit(r12)
            return r13
        L9e:
            android.database.sqlite.SQLiteDatabase r13 = r12.b()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            java.lang.String r14 = "placement_ad_impression"
            r15 = 0
            long r13 = r13.insert(r14, r15, r0)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> Laf
            monitor-exit(r12)
            return r13
        Lab:
            monitor-exit(r12)
            return r1
        Lad:
            monitor-exit(r12)
            return r1
        Laf:
            r13 = move-exception
            monitor-exit(r12)
            throw r13
    }

    public final synchronized com.tkay.core.common.f.ad.a a(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            java.lang.String r2 = "placement_ad_impression"
            r3 = 0
            java.lang.String r4 = "adsource_id=? AND placement_id=?"
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            r9 = 0
            r5[r9] = r12     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            r12 = 1
            r5[r12] = r11     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L95 java.lang.OutOfMemoryError -> L99 java.lang.Exception -> Laa
            if (r11 == 0) goto L8a
            int r12 = r11.getCount()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r12 <= 0) goto L8a
            r11.moveToNext()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            com.tkay.core.common.f.ad$a r12 = new com.tkay.core.common.f.ad$a     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.<init>()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = "adsource_id"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.a = r1     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = "hour_time"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.b = r1     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = "date_time"
            int r1 = r11.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.c = r1     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r1 = r12.b     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            boolean r14 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r14 != 0) goto L5a
            r12.e = r9     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            goto L66
        L5a:
            java.lang.String r14 = "hour_imp"
            int r14 = r11.getColumnIndex(r14)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            int r14 = r11.getInt(r14)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.e = r14     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
        L66:
            java.lang.String r14 = r12.c     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            boolean r13 = android.text.TextUtils.equals(r14, r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r13 != 0) goto L71
            r12.d = r9     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            goto L7d
        L71:
            java.lang.String r13 = "date_imp"
            int r13 = r11.getColumnIndex(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            int r13 = r11.getInt(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.d = r13     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
        L7d:
            java.lang.String r13 = "show_time"
            int r13 = r11.getColumnIndex(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            long r13 = r11.getLong(r13)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            r12.f = r13     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            goto L8b
        L8a:
            r12 = r0
        L8b:
            r11.close()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r11 == 0) goto L93
            r11.close()     // Catch: java.lang.Throwable -> Lae
        L93:
            monitor-exit(r10)
            return r12
        L95:
            r11 = r0
        L96:
            if (r11 == 0) goto Lb1
            goto Lad
        L99:
            r11 = r0
        L9a:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> La3
            if (r11 == 0) goto Lb1
        L9f:
            r11.close()     // Catch: java.lang.Throwable -> Lae
            goto Lb1
        La3:
            r12 = move-exception
            if (r11 == 0) goto La9
            r11.close()     // Catch: java.lang.Throwable -> Lae
        La9:
            throw r12     // Catch: java.lang.Throwable -> Lae
        Laa:
            r11 = r0
        Lab:
            if (r11 == 0) goto Lb1
        Lad:
            goto L9f
        Lae:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        Lb1:
            monitor-exit(r10)
            return r0
    }

    public final synchronized com.tkay.core.common.f.ad a(java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> Ldb java.lang.OutOfMemoryError -> Ldf java.lang.Exception -> Lf0
            java.lang.String r2 = "placement_ad_impression"
            r3 = 0
            java.lang.String r4 = "placement_id=?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> Ldb java.lang.OutOfMemoryError -> Ldf java.lang.Exception -> Lf0
            r9 = 0
            r5[r9] = r11     // Catch: java.lang.Throwable -> Ldb java.lang.OutOfMemoryError -> Ldf java.lang.Exception -> Lf0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r11 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> Ldb java.lang.OutOfMemoryError -> Ldf java.lang.Exception -> Lf0
            if (r11 == 0) goto Ld0
            int r1 = r11.getCount()     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            if (r1 <= 0) goto Ld0
            com.tkay.core.common.f.ad r1 = new com.tkay.core.common.f.ad     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r1.<init>()     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.<init>()     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r1.f = r2     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
        L2c:
            boolean r2 = r11.moveToNext()     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            if (r2 == 0) goto Ld1
            java.lang.String r2 = "format"
            int r2 = r11.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r2 = r11.getInt(r2)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r1.a = r2     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r2 = "placement_id"
            int r2 = r11.getColumnIndex(r2)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r2 = r11.getString(r2)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r1.b = r2     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            com.tkay.core.common.f.ad$a r2 = new com.tkay.core.common.f.ad$a     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.<init>()     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = "adsource_id"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = r11.getString(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.a = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = "hour_time"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = r11.getString(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.b = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = "date_time"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = r11.getString(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.c = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = r2.b     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            boolean r3 = android.text.TextUtils.equals(r3, r13)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            if (r3 != 0) goto L7e
            r2.e = r9     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            goto L8a
        L7e:
            java.lang.String r3 = "hour_imp"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r3 = r11.getInt(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.e = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
        L8a:
            int r3 = r1.d     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r4 = r2.e     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r3 = r3 + r4
            r1.d = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = r2.c     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            boolean r3 = android.text.TextUtils.equals(r3, r12)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            if (r3 != 0) goto L9c
            r2.d = r9     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            goto La8
        L9c:
            java.lang.String r3 = "date_imp"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r3 = r11.getInt(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.d = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
        La8:
            int r3 = r1.c     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r4 = r2.d     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r3 = r3 + r4
            r1.c = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r3 = "show_time"
            int r3 = r11.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            long r3 = r11.getLong(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r2.f = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            long r3 = r2.f     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            long r5 = r1.e     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 < 0) goto Lc7
            long r3 = r2.f     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r1.e = r3     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
        Lc7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ad$a> r3 = r1.f     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            java.lang.String r4 = r2.a     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            goto L2c
        Ld0:
            r1 = r0
        Ld1:
            r11.close()     // Catch: java.lang.Throwable -> Ldc java.lang.OutOfMemoryError -> Le0 java.lang.Exception -> Lf1
            if (r11 == 0) goto Ld9
            r11.close()     // Catch: java.lang.Throwable -> Lf4
        Ld9:
            monitor-exit(r10)
            return r1
        Ldb:
            r11 = r0
        Ldc:
            if (r11 == 0) goto Lf7
            goto Lf3
        Ldf:
            r11 = r0
        Le0:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> Le9
            if (r11 == 0) goto Lf7
        Le5:
            r11.close()     // Catch: java.lang.Throwable -> Lf4
            goto Lf7
        Le9:
            r12 = move-exception
            if (r11 == 0) goto Lef
            r11.close()     // Catch: java.lang.Throwable -> Lf4
        Lef:
            throw r12     // Catch: java.lang.Throwable -> Lf4
        Lf0:
            r11 = r0
        Lf1:
            if (r11 == 0) goto Lf7
        Lf3:
            goto Le5
        Lf4:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        Lf7:
            monitor-exit(r10)
            return r0
    }

    public final synchronized java.util.Map<java.lang.String, com.tkay.core.common.f.ad> a(int r12, java.lang.String r13, java.lang.String r14) {
            r11 = this;
            monitor-enter(r11)
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L109
            r0.<init>()     // Catch: java.lang.Throwable -> L109
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.a()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = "placement_ad_impression"
            r4 = 0
            java.lang.String r5 = "format=?"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r10 = 0
            r6[r10] = r12     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r1 == 0) goto Lee
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r12 <= 0) goto Lee
        L29:
            boolean r12 = r1.moveToNext()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r12 == 0) goto Le4
            java.lang.String r12 = "placement_id"
            int r12 = r1.getColumnIndex(r12)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r12 = r1.getString(r12)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.Object r2 = r0.get(r12)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            com.tkay.core.common.f.ad r2 = (com.tkay.core.common.f.ad) r2     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r2 != 0) goto L5e
            com.tkay.core.common.f.ad r2 = new com.tkay.core.common.f.ad     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r2.<init>()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r2.b = r12     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = "format"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r3 = r1.getInt(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r2.a = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r3.<init>()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r2.f = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r0.put(r12, r2)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
        L5e:
            com.tkay.core.common.f.ad$a r12 = new com.tkay.core.common.f.ad$a     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.<init>()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = "adsource_id"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.a = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = "hour_time"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.b = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = "date_time"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.c = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = r12.b     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            boolean r3 = android.text.TextUtils.equals(r3, r14)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r3 != 0) goto L92
            r12.e = r10     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            goto L9e
        L92:
            java.lang.String r3 = "hour_imp"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r3 = r1.getInt(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.e = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
        L9e:
            int r3 = r2.d     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r4 = r12.e     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r3 = r3 + r4
            r2.d = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = r12.c     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            boolean r3 = android.text.TextUtils.equals(r3, r13)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r3 != 0) goto Lb0
            r12.d = r10     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            goto Lbc
        Lb0:
            java.lang.String r3 = "date_imp"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r3 = r1.getInt(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.d = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
        Lbc:
            int r3 = r2.c     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r4 = r12.d     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r3 = r3 + r4
            r2.c = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = "show_time"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            long r3 = r1.getLong(r3)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r12.f = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            long r3 = r12.f     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            long r5 = r2.e     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 < 0) goto Ldb
            long r3 = r12.f     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r2.e = r3     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
        Ldb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ad$a> r2 = r2.f     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            java.lang.String r3 = r12.a     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            r2.put(r3, r12)     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            goto L29
        Le4:
            r1.close()     // Catch: java.lang.Throwable -> Lf4 java.lang.OutOfMemoryError -> Lf7 java.lang.Exception -> L104
            if (r1 == 0) goto Lec
            r1.close()     // Catch: java.lang.Throwable -> L109
        Lec:
            monitor-exit(r11)
            return r0
        Lee:
            if (r1 == 0) goto L107
        Lf0:
            r1.close()     // Catch: java.lang.Throwable -> L109
            goto L107
        Lf4:
            if (r1 == 0) goto L107
            goto Lf0
        Lf7:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> Lfd
            if (r1 == 0) goto L107
            goto Lf0
        Lfd:
            r12 = move-exception
            if (r1 == 0) goto L103
            r1.close()     // Catch: java.lang.Throwable -> L109
        L103:
            throw r12     // Catch: java.lang.Throwable -> L109
        L104:
            if (r1 == 0) goto L107
            goto Lf0
        L107:
            monitor-exit(r11)
            return r0
        L109:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final void a(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.lang.String r1 = "date_time!='"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r0.append(r4)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.lang.String r4 = "'"
            r0.append(r4)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            android.database.sqlite.SQLiteDatabase r0 = r3.b()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            if (r0 != 0) goto L1c
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L27
            return
        L1c:
            android.database.sqlite.SQLiteDatabase r0 = r3.b()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            java.lang.String r1 = "placement_ad_impression"
            r2 = 0
            r0.delete(r1, r4, r2)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            goto L29
        L27:
            r4 = move-exception
            goto L2b
        L29:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L27
            return
        L2b:
            monitor-exit(r3)
            throw r4
    }
}
