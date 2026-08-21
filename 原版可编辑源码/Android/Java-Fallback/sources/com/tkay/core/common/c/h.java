package com.tkay.core.common.c;

public class h extends com.tkay.core.common.c.a<com.tkay.core.common.f.o> {
    private static final java.lang.String b = null;
    private static volatile com.tkay.core.common.c.h c;
    private int d;

    public static class a {
        public static final java.lang.String a = "inspect_info";
        public static final java.lang.String b = "inspect_id";
        public static final java.lang.String c = "update_time";
        public static final java.lang.String d = "CREATE TABLE IF NOT EXISTS inspect_info(inspect_id TEXT, update_time INTEGER )";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.common.c.h> r0 = com.tkay.core.common.c.h.class
            java.lang.String r0 = r0.getName()
            com.tkay.core.common.c.h.b = r0
            return
    }

    private h(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 100
            r0.d = r1
            return
    }

    public static com.tkay.core.common.c.h a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.h r0 = com.tkay.core.common.c.h.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.h> r0 = com.tkay.core.common.c.h.class
            monitor-enter(r0)
            com.tkay.core.common.c.h r1 = com.tkay.core.common.c.h.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.h r1 = new com.tkay.core.common.c.h     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.h.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.h r2 = com.tkay.core.common.c.h.c
            return r2
    }

    private synchronized boolean b(java.lang.String r12) {
            r11 = this;
            monitor-enter(r11)
            r0 = 0
            if (r12 != 0) goto L6
            monitor-exit(r11)
            return r0
        L6:
            r1 = 0
            android.database.sqlite.SQLiteDatabase r2 = r11.a()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "inspect_info"
            java.lang.String r4 = "inspect_id"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = "inspect_id=?"
            r10 = 1
            java.lang.String[] r6 = new java.lang.String[r10]     // Catch: java.lang.Throwable -> L36
            r6[r0] = r12     // Catch: java.lang.Throwable -> L36
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L33
            int r12 = r1.getCount()     // Catch: java.lang.Throwable -> L36
            if (r12 <= 0) goto L33
            r1.close()     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L31
            r1.close()     // Catch: java.lang.Throwable -> L3c
        L31:
            monitor-exit(r11)
            return r10
        L33:
            if (r1 == 0) goto L3f
            goto L38
        L36:
            if (r1 == 0) goto L3f
        L38:
            r1.close()     // Catch: java.lang.Throwable -> L3c
            goto L3f
        L3c:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
        L3f:
            monitor-exit(r11)
            return r0
    }

    public final synchronized long a(java.lang.String r9) {
            r8 = this;
            monitor-enter(r8)
            android.database.sqlite.SQLiteDatabase r0 = r8.b()     // Catch: java.lang.Throwable -> L4c
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r8)
            return r1
        Lb:
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            r0.<init>()     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            java.lang.String r3 = "inspect_id"
            r0.put(r3, r9)     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            java.lang.String r3 = "update_time"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            boolean r3 = r8.b(r9)     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            if (r3 == 0) goto L3d
            java.lang.String r3 = "inspect_id = ? "
            android.database.sqlite.SQLiteDatabase r4 = r8.b()     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            java.lang.String r5 = "inspect_info"
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            r7 = 0
            r6[r7] = r9     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            int r9 = r4.update(r5, r0, r3, r6)     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            long r0 = (long) r9
            monitor-exit(r8)
            return r0
        L3d:
            android.database.sqlite.SQLiteDatabase r9 = r8.b()     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            java.lang.String r3 = "inspect_info"
            r4 = 0
            long r0 = r9.insert(r3, r4, r0)     // Catch: java.lang.Exception -> L4a java.lang.Throwable -> L4c
            monitor-exit(r8)
            return r0
        L4a:
            monitor-exit(r8)
            return r1
        L4c:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final synchronized void c() {
            r12 = this;
            monitor-enter(r12)
            r0 = 0
            r1 = -1
            android.database.sqlite.SQLiteDatabase r3 = r12.a()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            java.lang.String r4 = "inspect_info"
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            java.lang.String r10 = "update_time DESC"
            int r11 = r12.d     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            android.database.Cursor r0 = r3.query(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            if (r0 == 0) goto L35
            int r3 = r0.getCount()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            int r4 = r12.d     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            if (r3 < r4) goto L35
            r0.moveToLast()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            java.lang.String r3 = "update_time"
            int r3 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            long r1 = r0.getLong(r3)     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
            r0.close()     // Catch: java.lang.Throwable -> L38 java.lang.OutOfMemoryError -> L3e java.lang.Exception -> L4b
        L35:
            if (r0 == 0) goto L51
            goto L4d
        L38:
            if (r0 == 0) goto L51
        L3a:
            r0.close()     // Catch: java.lang.Throwable -> L4e
            goto L51
        L3e:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L51
            goto L4d
        L44:
            r1 = move-exception
            if (r0 == 0) goto L4a
            r0.close()     // Catch: java.lang.Throwable -> L4e
        L4a:
            throw r1     // Catch: java.lang.Throwable -> L4e
        L4b:
            if (r0 == 0) goto L51
        L4d:
            goto L3a
        L4e:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
        L51:
            r3 = 0
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L6e
            android.database.sqlite.SQLiteDatabase r0 = r12.b()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = "inspect_info"
            java.lang.String r4 = "update_time<?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L6e
            r6 = 0
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L6e
            r5[r6] = r1     // Catch: java.lang.Throwable -> L6e
            r0.delete(r3, r4, r5)     // Catch: java.lang.Throwable -> L6e
            monitor-exit(r12)
            return
        L6e:
            monitor-exit(r12)
            return
    }

    public final synchronized java.util.List<com.tkay.core.common.f.o> d() {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L56 java.lang.OutOfMemoryError -> L5d java.lang.Exception -> L6b
            java.lang.String r2 = "inspect_info"
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L56 java.lang.OutOfMemoryError -> L5d java.lang.Exception -> L6b
            if (r1 == 0) goto L53
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            if (r2 <= 0) goto L53
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r2.<init>()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
        L20:
            boolean r3 = r1.moveToNext()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            if (r3 == 0) goto L49
            com.tkay.core.common.f.o r3 = new com.tkay.core.common.f.o     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r3.<init>()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            java.lang.String r4 = "inspect_id"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            java.lang.String r5 = "update_time"
            int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            long r5 = r1.getLong(r5)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r3.a(r4)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r3.a(r5)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            r2.add(r3)     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            goto L20
        L49:
            r1.close()     // Catch: java.lang.Throwable -> L57 java.lang.OutOfMemoryError -> L5e java.lang.Exception -> L6c
            if (r1 == 0) goto L51
            r1.close()     // Catch: java.lang.Throwable -> L6f
        L51:
            monitor-exit(r10)
            return r2
        L53:
            if (r1 == 0) goto L72
            goto L6e
        L56:
            r1 = r0
        L57:
            if (r1 == 0) goto L72
        L59:
            r1.close()     // Catch: java.lang.Throwable -> L6f
            goto L72
        L5d:
            r1 = r0
        L5e:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L72
            goto L6e
        L64:
            r0 = move-exception
            if (r1 == 0) goto L6a
            r1.close()     // Catch: java.lang.Throwable -> L6f
        L6a:
            throw r0     // Catch: java.lang.Throwable -> L6f
        L6b:
            r1 = r0
        L6c:
            if (r1 == 0) goto L72
        L6e:
            goto L59
        L6f:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
        L72:
            monitor-exit(r10)
            return r0
    }
}
