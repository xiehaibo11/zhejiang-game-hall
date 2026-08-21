package com.meizu.cloud.pushsdk.d.d;

public class a implements com.meizu.cloud.pushsdk.d.d.d {
    private static final java.lang.String a = null;
    private android.database.sqlite.SQLiteDatabase b;
    private final com.meizu.cloud.pushsdk.d.d.b c;
    private final java.lang.String[] d;
    private long e;
    private final int f;

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.d.a> r0 = com.meizu.cloud.pushsdk.d.d.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.d.a.a = r0
            return
    }

    public a(android.content.Context r4, int r5) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "id"
            java.lang.String r1 = "eventData"
            java.lang.String r2 = "dateCreated"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            r3.d = r0
            r0 = -1
            r3.e = r0
            java.lang.String r0 = r3.a(r4)
            com.meizu.cloud.pushsdk.d.d.b r4 = com.meizu.cloud.pushsdk.d.d.b.a(r4, r0)
            r3.c = r4
            r3.b()
            r3.f = r5
            return
    }

    private java.lang.String a(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getProcessName(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = "PushEvents.db"
            if (r0 == 0) goto Ld
            return r1
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(byte[] r2) {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            r0.<init>(r2)     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            java.io.ObjectInputStream r2 = new java.io.ObjectInputStream     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            r2.<init>(r0)     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            java.lang.Object r1 = r2.readObject()     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            java.util.HashMap r1 = (java.util.HashMap) r1     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            r2.close()     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            r0.close()     // Catch: java.io.IOException -> L17 java.lang.ClassNotFoundException -> L19
            return r1
        L17:
            r2 = move-exception
            goto L1a
        L19:
            r2 = move-exception
        L1a:
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public static byte[] a(java.util.Map<java.lang.String, java.lang.String> r2) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L18
            r0.<init>()     // Catch: java.io.IOException -> L18
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream     // Catch: java.io.IOException -> L18
            r1.<init>(r0)     // Catch: java.io.IOException -> L18
            r1.writeObject(r2)     // Catch: java.io.IOException -> L18
            r1.close()     // Catch: java.io.IOException -> L18
            r0.close()     // Catch: java.io.IOException -> L18
            byte[] r2 = r0.toByteArray()     // Catch: java.io.IOException -> L18
            return r2
        L18:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public java.util.List<java.util.Map<java.lang.String, java.lang.Object>> a(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "id ASC LIMIT "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.util.List r3 = r2.a(r0, r3)
            return r3
    }

    public java.util.List<java.util.Map<java.lang.String, java.lang.Object>> a(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = r10.e()
            if (r1 == 0) goto L59
            android.database.sqlite.SQLiteDatabase r2 = r10.b
            java.lang.String[] r4 = r10.d
            r6 = 0
            r7 = 0
            r8 = 0
            java.lang.String r3 = "events"
            r5 = r11
            r9 = r12
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)
            r11.moveToFirst()
        L1d:
            boolean r12 = r11.isAfterLast()
            if (r12 != 0) goto L56
            java.util.HashMap r12 = new java.util.HashMap
            r1 = 4
            r12.<init>(r1)
            r1 = 0
            long r1 = r11.getLong(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "id"
            r12.put(r2, r1)
            r1 = 1
            byte[] r1 = r11.getBlob(r1)
            java.util.Map r1 = a(r1)
            java.lang.String r2 = "eventData"
            r12.put(r2, r1)
            r1 = 2
            java.lang.String r1 = r11.getString(r1)
            java.lang.String r2 = "dateCreated"
            r12.put(r2, r1)
            r11.moveToNext()
            r0.add(r12)
            goto L1d
        L56:
            r11.close()
        L59:
            return r0
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.d.a.a r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            boolean r0 = r1.e()
            return r0
    }

    @Override
    public boolean a(long r5) {
            r4 = this;
            boolean r0 = r4.e()
            if (r0 == 0) goto L21
            android.database.sqlite.SQLiteDatabase r0 = r4.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "id="
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.String r3 = "events"
            int r0 = r0.delete(r3, r1, r2)
            goto L22
        L21:
            r0 = -1
        L22:
            java.lang.String r1 = com.meizu.cloud.pushsdk.d.d.a.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Removed event from database: "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r6 = 0
            java.lang.Object[] r2 = new java.lang.Object[r6]
            com.meizu.cloud.pushsdk.d.f.c.b(r1, r5, r2)
            r5 = 1
            if (r0 != r5) goto L3f
            r6 = r5
        L3f:
            return r6
    }

    public long b(com.meizu.cloud.pushsdk.d.a.a r4) {
            r3 = this;
            boolean r0 = r3.e()
            if (r0 == 0) goto L24
            java.util.Map r4 = r4.a()
            byte[] r4 = a(r4)
            android.content.ContentValues r0 = new android.content.ContentValues
            r1 = 2
            r0.<init>(r1)
            java.lang.String r1 = "eventData"
            r0.put(r1, r4)
            android.database.sqlite.SQLiteDatabase r4 = r3.b
            r1 = 0
            java.lang.String r2 = "events"
            long r0 = r4.insert(r2, r1, r0)
            r3.e = r0
        L24:
            java.lang.String r4 = com.meizu.cloud.pushsdk.d.d.a.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Added event to database: "
            r0.append(r1)
            long r1 = r3.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.meizu.cloud.pushsdk.d.f.c.b(r4, r0, r1)
            long r0 = r3.e
            return r0
    }

    public void b() {
            r4 = this;
            boolean r0 = r4.e()
            if (r0 != 0) goto L30
            com.meizu.cloud.pushsdk.d.d.b r0 = r4.c     // Catch: java.lang.Exception -> L12
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Exception -> L12
            r4.b = r0     // Catch: java.lang.Exception -> L12
            r0.enableWriteAheadLogging()     // Catch: java.lang.Exception -> L12
            goto L30
        L12:
            r0 = move-exception
            java.lang.String r1 = com.meizu.cloud.pushsdk.d.d.a.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = " open database error "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.meizu.cloud.pushsdk.d.f.c.a(r1, r0, r2)
        L30:
            return
    }

    @Override
    public long c() {
            r2 = this;
            boolean r0 = r2.e()
            if (r0 == 0) goto Lf
            android.database.sqlite.SQLiteDatabase r0 = r2.b
            java.lang.String r1 = "events"
            long r0 = android.database.DatabaseUtils.queryNumEntries(r0, r1)
            goto L11
        Lf:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public com.meizu.cloud.pushsdk.d.b.c d() {
            r6 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r6.f
            java.util.List r2 = r6.a(r2)
            java.util.Iterator r2 = r2.iterator()
        L14:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L3f
            java.lang.Object r3 = r2.next()
            java.util.Map r3 = (java.util.Map) r3
            com.meizu.cloud.pushsdk.d.a.c r4 = new com.meizu.cloud.pushsdk.d.a.c
            r4.<init>()
            java.lang.String r5 = "eventData"
            java.lang.Object r5 = r3.get(r5)
            java.util.Map r5 = (java.util.Map) r5
            r4.a(r5)
            java.lang.String r5 = "id"
            java.lang.Object r3 = r3.get(r5)
            java.lang.Long r3 = (java.lang.Long) r3
            r0.add(r3)
            r1.add(r4)
            goto L14
        L3f:
            com.meizu.cloud.pushsdk.d.b.c r2 = new com.meizu.cloud.pushsdk.d.b.c
            r2.<init>(r1, r0)
            return r2
    }

    public boolean e() {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = r1.b
            if (r0 == 0) goto Lc
            boolean r0 = r0.isOpen()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }
}
