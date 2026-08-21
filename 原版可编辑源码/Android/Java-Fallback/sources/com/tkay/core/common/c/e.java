package com.tkay.core.common.c;

public class e extends com.tkay.core.common.c.a<com.tkay.core.common.a.e> {
    private static volatile com.tkay.core.common.c.e c;
    private final java.lang.String b;

    public static class a {
        public static final java.lang.String a = "dsp_offer_install_record";
        public static final java.lang.String b = "dsp_id";
        public static final java.lang.String c = "dsp_offer_id";
        public static final java.lang.String d = "package_name";
        public static final java.lang.String e = "last_update_time";
        public static final java.lang.String f = "CREATE TABLE IF NOT EXISTS dsp_offer_install_record(dsp_id TEXT ,dsp_offer_id TEXT ,package_name TEXT ,last_update_time INTEGER)";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private e(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class<com.tkay.core.common.c.e> r1 = com.tkay.core.common.c.e.class
            java.lang.String r1 = r1.getName()
            r0.b = r1
            return
    }

    public static com.tkay.core.common.c.e a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.e r0 = com.tkay.core.common.c.e.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.e> r0 = com.tkay.core.common.c.e.class
            monitor-enter(r0)
            com.tkay.core.common.c.e r1 = com.tkay.core.common.c.e.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.e r1 = new com.tkay.core.common.c.e     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.e.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.e r2 = com.tkay.core.common.c.e.c
            return r2
    }

    private synchronized java.util.List<com.tkay.core.common.a.e> a(android.database.Cursor r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            if (r4 == 0) goto L44
            int r1 = r4.getCount()     // Catch: java.lang.Throwable -> L46
            if (r1 <= 0) goto L44
        Le:
            boolean r1 = r4.moveToNext()     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L44
            com.tkay.core.common.a.e r1 = new com.tkay.core.common.a.e     // Catch: java.lang.Throwable -> L44
            r1.<init>()     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "dsp_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L44
            r1.a(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "dsp_offer_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L44
            r1.b(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "package_name"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L44
            r1.c(r2)     // Catch: java.lang.Throwable -> L44
            r0.add(r1)     // Catch: java.lang.Throwable -> L44
            goto Le
        L44:
            monitor-exit(r3)
            return r0
        L46:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private synchronized boolean a(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r10.a()     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            java.lang.String r3 = "dsp_offer_install_record"
            r4 = 0
            java.lang.String r5 = "dsp_id = ?  AND dsp_offer_id = ? "
            r6 = 2
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            r6[r0] = r11     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            r11 = 1
            r6[r11] = r12     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            if (r1 == 0) goto L2d
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            if (r12 <= 0) goto L2d
            r1.close()     // Catch: java.lang.Throwable -> L30 java.lang.OutOfMemoryError -> L36 java.lang.Exception -> L43
            if (r1 == 0) goto L2b
            r1.close()     // Catch: java.lang.Throwable -> L46
        L2b:
            monitor-exit(r10)
            return r11
        L2d:
            if (r1 == 0) goto L49
            goto L45
        L30:
            if (r1 == 0) goto L49
        L32:
            r1.close()     // Catch: java.lang.Throwable -> L46
            goto L49
        L36:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L49
            goto L45
        L3c:
            r11 = move-exception
            if (r1 == 0) goto L42
            r1.close()     // Catch: java.lang.Throwable -> L46
        L42:
            throw r11     // Catch: java.lang.Throwable -> L46
        L43:
            if (r1 == 0) goto L49
        L45:
            goto L32
        L46:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
        L49:
            monitor-exit(r10)
            return r0
    }

    public final synchronized long a(com.tkay.core.common.a.e r7) {
            r6 = this;
            monitor-enter(r6)
            android.database.sqlite.SQLiteDatabase r0 = r6.b()     // Catch: java.lang.Throwable -> La1
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r6)
            return r1
        Lb:
            java.lang.String r0 = r7.a()     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r7.b()     // Catch: java.lang.Throwable -> La1
            boolean r0 = r6.a(r0, r3)     // Catch: java.lang.Throwable -> La1
            if (r0 != 0) goto L79
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r0.<init>()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r3 = "dsp_id"
            java.lang.String r4 = r7.a()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r3 = "dsp_offer_id"
            java.lang.String r4 = r7.b()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r3 = "package_name"
            java.lang.String r4 = r7.c()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r3 = "last_update_time"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r4 = "insertDspOfferInstallRecord--insert,dspid:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r4 = r7.a()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r3.append(r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r4 = ",dspoferrId:"
            r3.append(r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r4 = r7.b()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r3.append(r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r4 = ",packagename:"
            r3.append(r4)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r7 = r7.c()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            r3.append(r7)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            android.database.sqlite.SQLiteDatabase r7 = r6.b()     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            java.lang.String r3 = "dsp_offer_install_record"
            r4 = 0
            long r0 = r7.insert(r3, r4, r0)     // Catch: java.lang.Exception -> L9f java.lang.Throwable -> La1
            monitor-exit(r6)
            return r0
        L79:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "insertDspOfferInstallRecord--had inserted...,dspid:"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r7.a()     // Catch: java.lang.Throwable -> La1
            r0.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = ",dspoferrId:"
            r0.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r7.b()     // Catch: java.lang.Throwable -> La1
            r0.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = ",packagename:"
            r0.append(r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = r7.c()     // Catch: java.lang.Throwable -> La1
            r0.append(r7)     // Catch: java.lang.Throwable -> La1
        L9f:
            monitor-exit(r6)
            return r1
        La1:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized java.util.List<com.tkay.core.common.a.d> a(int r12) {
            r11 = this;
            monitor-enter(r11)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L53
            r0.<init>()     // Catch: java.lang.Throwable -> L53
            if (r12 > 0) goto La
            monitor-exit(r11)
            return r0
        La:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.a()     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            java.lang.String r3 = "dsp_offer_install_record"
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            java.lang.String r9 = "last_update_time DESC"
            java.lang.String r10 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            java.util.List r12 = r11.a(r1)     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            r1.close()     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            java.lang.String r3 = "get limit install record list size:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            int r3 = r12.size()     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            r0.addAll(r12)     // Catch: java.lang.Throwable -> L3e java.lang.OutOfMemoryError -> L41 java.lang.Exception -> L4e
            if (r1 == 0) goto L51
        L3a:
            r1.close()     // Catch: java.lang.Throwable -> L53
            goto L51
        L3e:
            if (r1 == 0) goto L51
            goto L3a
        L41:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L51
            goto L3a
        L47:
            r12 = move-exception
            if (r1 == 0) goto L4d
            r1.close()     // Catch: java.lang.Throwable -> L53
        L4d:
            throw r12     // Catch: java.lang.Throwable -> L53
        L4e:
            if (r1 == 0) goto L51
            goto L3a
        L51:
            monitor-exit(r11)
            return r0
        L53:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }
}
