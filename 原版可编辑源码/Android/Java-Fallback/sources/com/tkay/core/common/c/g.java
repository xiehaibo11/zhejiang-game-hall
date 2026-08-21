package com.tkay.core.common.c;

public class g extends com.tkay.core.common.c.a<com.tkay.core.common.f.n> {
    private static final java.lang.String b = null;
    private static com.tkay.core.common.c.g c;
    private int d;

    public static class a {
        public static final java.lang.String a = "request_info";
        public static final java.lang.String b = "id";
        public static final java.lang.String c = "req_type";
        public static final java.lang.String d = "req_url";
        public static final java.lang.String e = "req_head";
        public static final java.lang.String f = "req_content";
        public static final java.lang.String g = "time";
        public static final java.lang.String h = "extra";
        public static final java.lang.String i = "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.common.c.g> r0 = com.tkay.core.common.c.g.class
            java.lang.String r0 = r0.getName()
            com.tkay.core.common.c.g.b = r0
            return
    }

    private g(com.tkay.core.common.c.b r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.d = r1
            return
    }

    public static com.tkay.core.common.c.g a(com.tkay.core.common.c.b r2) {
            com.tkay.core.common.c.g r0 = com.tkay.core.common.c.g.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c.g> r0 = com.tkay.core.common.c.g.class
            monitor-enter(r0)
            com.tkay.core.common.c.g r1 = com.tkay.core.common.c.g.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c.g r1 = new com.tkay.core.common.c.g     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.g.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.c.g r2 = com.tkay.core.common.c.g.c
            return r2
    }

    private synchronized void d() {
            r3 = this;
            monitor-enter(r3)
            android.database.sqlite.SQLiteDatabase r0 = r3.b()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            if (r0 != 0) goto L9
            monitor-exit(r3)
            return
        L9:
            android.database.sqlite.SQLiteDatabase r0 = r3.b()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            java.lang.String r1 = "request_info"
            r2 = 0
            r0.delete(r1, r2, r2)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            monitor-exit(r3)
            return
        L15:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
        L18:
            monitor-exit(r3)
            return
    }

    public final synchronized long a(com.tkay.core.common.f.n r12) {
            r11 = this;
            monitor-enter(r11)
            android.database.sqlite.SQLiteDatabase r0 = r11.b()     // Catch: java.lang.Throwable -> L87
            r1 = -1
            if (r0 != 0) goto Lb
            monitor-exit(r11)
            return r1
        Lb:
            r0 = 0
            android.database.sqlite.SQLiteDatabase r3 = r11.a()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L37
            java.lang.String r4 = "request_info"
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            android.database.Cursor r3 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L37
            int r4 = r3.getCount()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L38
            int r5 = r11.d     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L38
            if (r4 < r5) goto L27
            r11.d()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L38
        L27:
            if (r3 == 0) goto L3b
        L29:
            r3.close()     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L87
            goto L3b
        L2d:
            r12 = move-exception
            r0 = r3
            goto L31
        L30:
            r12 = move-exception
        L31:
            if (r0 == 0) goto L36
            r0.close()     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L87
        L36:
            throw r12     // Catch: java.lang.Throwable -> L87
        L37:
            r3 = r0
        L38:
            if (r3 == 0) goto L3b
            goto L29
        L3b:
            android.content.ContentValues r3 = new android.content.ContentValues     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.<init>()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "id"
            java.lang.String r5 = r12.a     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "req_type"
            int r5 = r12.b     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "req_url"
            java.lang.String r5 = r12.d     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "req_head"
            java.lang.String r5 = r12.c     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "req_content"
            java.lang.String r5 = r12.e     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "time"
            long r5 = r12.f     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "extra"
            java.lang.String r12 = r12.g     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            r3.put(r4, r12)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            android.database.sqlite.SQLiteDatabase r12 = r11.b()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            java.lang.String r4 = "request_info"
            long r0 = r12.insert(r4, r0, r3)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L87
            monitor-exit(r11)
            return r0
        L85:
            monitor-exit(r11)
            return r1
        L87:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final synchronized int b(com.tkay.core.common.f.n r7) {
            r6 = this;
            monitor-enter(r6)
            android.database.sqlite.SQLiteDatabase r0 = r6.b()     // Catch: java.lang.Throwable -> L25
            r1 = -1
            if (r0 == 0) goto L23
            if (r7 != 0) goto Lb
            goto L23
        Lb:
            android.database.sqlite.SQLiteDatabase r0 = r6.b()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "request_info"
            java.lang.String r3 = "id=?"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L21
            r5 = 0
            java.lang.String r7 = r7.a     // Catch: java.lang.Throwable -> L21
            r4[r5] = r7     // Catch: java.lang.Throwable -> L21
            int r7 = r0.delete(r2, r3, r4)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r6)
            return r7
        L21:
            monitor-exit(r6)
            return r1
        L23:
            monitor-exit(r6)
            return r1
        L25:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized java.util.List<com.tkay.core.common.f.n> c() {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r10.a()     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            java.lang.String r2 = "request_info"
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            java.lang.String r8 = "time"
            java.lang.String r9 = "10"
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L96 java.lang.OutOfMemoryError -> L9a java.lang.Exception -> Lab
            if (r1 == 0) goto L8f
            int r2 = r1.getCount()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            if (r2 <= 0) goto L8f
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
        L22:
            boolean r3 = r1.moveToNext()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            if (r3 == 0) goto L85
            com.tkay.core.common.f.n r3 = new com.tkay.core.common.f.n     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.<init>()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "id"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.a = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_type"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            int r4 = r1.getInt(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.b = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_url"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.d = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_head"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.c = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "req_content"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.e = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "time"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            long r4 = r1.getLong(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.f = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = "extra"
            int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r3.g = r4     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            r2.add(r3)     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            goto L22
        L85:
            r1.close()     // Catch: java.lang.Throwable -> L97 java.lang.OutOfMemoryError -> L9b java.lang.Exception -> Lac
            if (r1 == 0) goto L8d
            r1.close()     // Catch: java.lang.Throwable -> Laf
        L8d:
            monitor-exit(r10)
            return r2
        L8f:
            if (r1 == 0) goto L94
            r1.close()     // Catch: java.lang.Throwable -> Laf
        L94:
            monitor-exit(r10)
            return r0
        L96:
            r1 = r0
        L97:
            if (r1 == 0) goto Lb2
            goto Lae
        L9a:
            r1 = r0
        L9b:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto Lb2
        La0:
            r1.close()     // Catch: java.lang.Throwable -> Laf
            goto Lb2
        La4:
            r0 = move-exception
            if (r1 == 0) goto Laa
            r1.close()     // Catch: java.lang.Throwable -> Laf
        Laa:
            throw r0     // Catch: java.lang.Throwable -> Laf
        Lab:
            r1 = r0
        Lac:
            if (r1 == 0) goto Lb2
        Lae:
            goto La0
        Laf:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
        Lb2:
            monitor-exit(r10)
            return r0
    }
}
