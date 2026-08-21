package com.loc;

public final class az {
    private static java.util.Map<java.lang.Class<? extends com.loc.ay>, com.loc.ay> d;
    private com.loc.bc a;
    private android.database.sqlite.SQLiteDatabase b;
    private com.loc.ay c;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.loc.az.d = r0
            return
    }

    public az(android.content.Context r3, com.loc.ay r4) {
            r2 = this;
            r2.<init>()
            com.loc.bc r0 = new com.loc.bc     // Catch: java.lang.Throwable -> L13
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L13
            java.lang.String r1 = r4.a()     // Catch: java.lang.Throwable -> L13
            r0.<init>(r3, r1, r4)     // Catch: java.lang.Throwable -> L13
            r2.a = r0     // Catch: java.lang.Throwable -> L13
            goto L17
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            r2.c = r4
            return
    }

    private static android.content.ContentValues a(java.lang.Object r5, com.loc.ba r6) {
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Class r1 = r5.getClass()
            boolean r6 = r6.b()
            java.lang.reflect.Field[] r6 = a(r1, r6)
            int r1 = r6.length
            r2 = 0
        L13:
            if (r2 >= r1) goto L21
            r3 = r6[r2]
            r4 = 1
            r3.setAccessible(r4)
            a(r5, r3, r0)
            int r2 = r2 + 1
            goto L13
        L21:
            return r0
    }

    private android.database.sqlite.SQLiteDatabase a() {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.b     // Catch: java.lang.Throwable -> Ld
            if (r0 != 0) goto L15
            com.loc.bc r0 = r3.a     // Catch: java.lang.Throwable -> Ld
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()     // Catch: java.lang.Throwable -> Ld
            r3.b = r0     // Catch: java.lang.Throwable -> Ld
            goto L15
        Ld:
            r0 = move-exception
            java.lang.String r1 = "dbs"
            java.lang.String r2 = "grd"
            com.loc.as.a(r0, r1, r2)
        L15:
            android.database.sqlite.SQLiteDatabase r0 = r3.b
            return r0
    }

    public static synchronized com.loc.ay a(java.lang.Class<? extends com.loc.ay> r3) throws java.lang.IllegalAccessException, java.lang.InstantiationException {
            java.lang.Class<com.loc.az> r0 = com.loc.az.class
            monitor-enter(r0)
            java.util.Map<java.lang.Class<? extends com.loc.ay>, com.loc.ay> r1 = com.loc.az.d     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L14
            java.util.Map<java.lang.Class<? extends com.loc.ay>, com.loc.ay> r1 = com.loc.az.d     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r2 = r3.newInstance()     // Catch: java.lang.Throwable -> L1e
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L1e
        L14:
            java.util.Map<java.lang.Class<? extends com.loc.ay>, com.loc.ay> r1 = com.loc.az.d     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L1e
            com.loc.ay r3 = (com.loc.ay) r3     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)
            return r3
        L1e:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static <T> T a(android.database.Cursor r6, java.lang.Class<T> r7, com.loc.ba r8) throws java.lang.IllegalAccessException, java.lang.InstantiationException, java.lang.NoSuchMethodException, java.lang.reflect.InvocationTargetException {
            boolean r8 = r8.b()
            java.lang.reflect.Field[] r8 = a(r7, r8)
            r0 = 0
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.reflect.Constructor r7 = r7.getDeclaredConstructor(r1)
            r1 = 1
            r7.setAccessible(r1)
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.Object r7 = r7.newInstance(r2)
            int r2 = r8.length
        L1a:
            if (r0 >= r2) goto L7a
            r3 = r8[r0]
            r3.setAccessible(r1)
            java.lang.Class<com.loc.bb> r4 = com.loc.bb.class
            java.lang.annotation.Annotation r4 = r3.getAnnotation(r4)
            if (r4 == 0) goto L77
            com.loc.bb r4 = (com.loc.bb) r4
            int r5 = r4.b()
            java.lang.String r4 = r4.a()
            int r4 = r6.getColumnIndex(r4)
            switch(r5) {
                case 1: goto L6c;
                case 2: goto L63;
                case 3: goto L5a;
                case 4: goto L51;
                case 5: goto L48;
                case 6: goto L43;
                case 7: goto L3b;
                default: goto L3a;
            }
        L3a:
            goto L77
        L3b:
            byte[] r4 = r6.getBlob(r4)
            r3.set(r7, r4)
            goto L77
        L43:
            java.lang.String r4 = r6.getString(r4)
            goto L74
        L48:
            long r4 = r6.getLong(r4)
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            goto L74
        L51:
            double r4 = r6.getDouble(r4)
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            goto L74
        L5a:
            float r4 = r6.getFloat(r4)
            java.lang.Float r4 = java.lang.Float.valueOf(r4)
            goto L74
        L63:
            int r4 = r6.getInt(r4)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            goto L74
        L6c:
            short r4 = r6.getShort(r4)
            java.lang.Short r4 = java.lang.Short.valueOf(r4)
        L74:
            r3.set(r7, r4)
        L77:
            int r0 = r0 + 1
            goto L1a
        L7a:
            return r7
    }

    private static <T> java.lang.String a(com.loc.ba r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.lang.String r0 = r0.a()
            return r0
    }

    private static <T> void a(android.database.sqlite.SQLiteDatabase r3, T r4) {
            java.lang.Class r0 = r4.getClass()
            com.loc.ba r0 = b(r0)
            java.lang.String r1 = a(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L13
            return
        L13:
            if (r4 == 0) goto L20
            if (r3 != 0) goto L18
            goto L20
        L18:
            android.content.ContentValues r4 = a(r4, r0)
            r0 = 0
            r3.insert(r1, r0, r4)
        L20:
            return
    }

    private <T> void a(T r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    private static void a(java.lang.Object r2, java.lang.reflect.Field r3, android.content.ContentValues r4) {
            java.lang.Class<com.loc.bb> r0 = com.loc.bb.class
            java.lang.annotation.Annotation r0 = r3.getAnnotation(r0)
            if (r0 != 0) goto L9
            return
        L9:
            com.loc.bb r0 = (com.loc.bb) r0
            int r1 = r0.b()
            switch(r1) {
                case 1: goto L6f;
                case 2: goto L5f;
                case 3: goto L4f;
                case 4: goto L3f;
                case 5: goto L2f;
                case 6: goto L21;
                case 7: goto L13;
                default: goto L12;
            }
        L12:
            goto L83
        L13:
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            byte[] r2 = (byte[]) r2     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r3 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r3, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            goto L83
        L21:
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r3 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r3, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            return
        L2f:
            long r2 = r3.getLong(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r0 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r0, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            return
        L3f:
            double r2 = r3.getDouble(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r0 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.Double r2 = java.lang.Double.valueOf(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r0, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            return
        L4f:
            float r2 = r3.getFloat(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r3 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.Float r2 = java.lang.Float.valueOf(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r3, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            return
        L5f:
            int r2 = r3.getInt(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r3 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r3, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            return
        L6f:
            short r2 = r3.getShort(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.String r3 = r0.a()     // Catch: java.lang.IllegalAccessException -> L7f
            java.lang.Short r2 = java.lang.Short.valueOf(r2)     // Catch: java.lang.IllegalAccessException -> L7f
            r4.put(r3, r2)     // Catch: java.lang.IllegalAccessException -> L7f
            return
        L7f:
            r2 = move-exception
            r2.printStackTrace()
        L83:
            return
    }

    private <T> void a(java.lang.String r5, java.lang.Object r6) {
            r4 = this;
            com.loc.ay r0 = r4.c
            monitor-enter(r0)
            if (r6 != 0) goto L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5a
            return
        L7:
            java.lang.Class r1 = r6.getClass()     // Catch: java.lang.Throwable -> L5a
            com.loc.ba r1 = b(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = a(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5a
            return
        L1b:
            android.content.ContentValues r6 = a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            android.database.sqlite.SQLiteDatabase r1 = r4.b()     // Catch: java.lang.Throwable -> L5a
            r4.b = r1     // Catch: java.lang.Throwable -> L5a
            if (r1 != 0) goto L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5a
            return
        L29:
            r3 = 0
            r1.update(r2, r6, r5, r3)     // Catch: java.lang.Throwable -> L39
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L5a
            if (r5 == 0) goto L4b
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L5a
            r5.close()     // Catch: java.lang.Throwable -> L5a
        L36:
            r4.b = r3     // Catch: java.lang.Throwable -> L5a
            goto L4b
        L39:
            r5 = move-exception
            java.lang.String r6 = "dbs"
            java.lang.String r1 = "udd"
            com.loc.as.a(r5, r6, r1)     // Catch: java.lang.Throwable -> L4d
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L5a
            if (r5 == 0) goto L4b
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L5a
            r5.close()     // Catch: java.lang.Throwable -> L5a
            goto L36
        L4b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5a
            return
        L4d:
            r5 = move-exception
            android.database.sqlite.SQLiteDatabase r6 = r4.b     // Catch: java.lang.Throwable -> L5a
            if (r6 == 0) goto L59
            android.database.sqlite.SQLiteDatabase r6 = r4.b     // Catch: java.lang.Throwable -> L5a
            r6.close()     // Catch: java.lang.Throwable -> L5a
            r4.b = r3     // Catch: java.lang.Throwable -> L5a
        L59:
            throw r5     // Catch: java.lang.Throwable -> L5a
        L5a:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5a
            throw r5
    }

    private static java.lang.reflect.Field[] a(java.lang.Class<?> r0, boolean r1) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            if (r1 == 0) goto Lf
            java.lang.Class r0 = r0.getSuperclass()
            java.lang.reflect.Field[] r0 = r0.getDeclaredFields()
            return r0
        Lf:
            java.lang.reflect.Field[] r0 = r0.getDeclaredFields()
            return r0
    }

    private android.database.sqlite.SQLiteDatabase b() {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.b     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto Lc
            android.database.sqlite.SQLiteDatabase r0 = r3.b     // Catch: java.lang.Throwable -> L1e
            boolean r0 = r0.isReadOnly()     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L26
        Lc:
            android.database.sqlite.SQLiteDatabase r0 = r3.b     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L15
            android.database.sqlite.SQLiteDatabase r0 = r3.b     // Catch: java.lang.Throwable -> L1e
            r0.close()     // Catch: java.lang.Throwable -> L1e
        L15:
            com.loc.bc r0 = r3.a     // Catch: java.lang.Throwable -> L1e
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L1e
            r3.b = r0     // Catch: java.lang.Throwable -> L1e
            goto L26
        L1e:
            r0 = move-exception
            java.lang.String r1 = "dbs"
            java.lang.String r2 = "gwd"
            com.loc.as.a(r0, r1, r2)
        L26:
            android.database.sqlite.SQLiteDatabase r0 = r3.b
            return r0
    }

    private static <T> com.loc.ba b(java.lang.Class<T> r1) {
            java.lang.Class<com.loc.ba> r0 = com.loc.ba.class
            java.lang.annotation.Annotation r1 = r1.getAnnotation(r0)
            if (r1 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            if (r0 != 0) goto Lf
            r1 = 0
            return r1
        Lf:
            com.loc.ba r1 = (com.loc.ba) r1
            return r1
    }

    private <T> java.util.List<T> b(java.lang.String r13, java.lang.Class<T> r14) {
            r12 = this;
            com.loc.ay r0 = r12.c
            monitor-enter(r0)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Le6
            r1.<init>()     // Catch: java.lang.Throwable -> Le6
            com.loc.ba r2 = b(r14)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r4 = a(r2)     // Catch: java.lang.Throwable -> Le6
            android.database.sqlite.SQLiteDatabase r3 = r12.b     // Catch: java.lang.Throwable -> Le6
            if (r3 != 0) goto L1a
            android.database.sqlite.SQLiteDatabase r3 = r12.a()     // Catch: java.lang.Throwable -> Le6
            r12.b = r3     // Catch: java.lang.Throwable -> Le6
        L1a:
            android.database.sqlite.SQLiteDatabase r3 = r12.b     // Catch: java.lang.Throwable -> Le6
            if (r3 == 0) goto Le4
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Le6
            if (r3 != 0) goto Le4
            if (r13 != 0) goto L28
            goto Le4
        L28:
            r11 = 0
            android.database.sqlite.SQLiteDatabase r3 = r12.b     // Catch: java.lang.Throwable -> L95
            r5 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r6 = r13
            android.database.Cursor r13 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L95
            if (r13 != 0) goto L62
            android.database.sqlite.SQLiteDatabase r14 = r12.b     // Catch: java.lang.Throwable -> L93
            r14.close()     // Catch: java.lang.Throwable -> L93
            r12.b = r11     // Catch: java.lang.Throwable -> L93
            if (r13 == 0) goto L4c
            r13.close()     // Catch: java.lang.Throwable -> L44
            goto L4c
        L44:
            r13 = move-exception
            java.lang.String r14 = "dbs"
            java.lang.String r2 = "sld"
            com.loc.as.a(r13, r14, r2)     // Catch: java.lang.Throwable -> Le6
        L4c:
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> L58
            if (r13 == 0) goto L60
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> L58
            r13.close()     // Catch: java.lang.Throwable -> L58
            r12.b = r11     // Catch: java.lang.Throwable -> L58
            goto L60
        L58:
            r13 = move-exception
            java.lang.String r14 = "dbs"
            java.lang.String r2 = "sld"
            com.loc.as.a(r13, r14, r2)     // Catch: java.lang.Throwable -> Le6
        L60:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le6
            return r1
        L62:
            boolean r3 = r13.moveToNext()     // Catch: java.lang.Throwable -> L93
            if (r3 == 0) goto L70
            java.lang.Object r3 = a(r13, r14, r2)     // Catch: java.lang.Throwable -> L93
            r1.add(r3)     // Catch: java.lang.Throwable -> L93
            goto L62
        L70:
            if (r13 == 0) goto L7e
            r13.close()     // Catch: java.lang.Throwable -> L76
            goto L7e
        L76:
            r13 = move-exception
            java.lang.String r14 = "dbs"
            java.lang.String r2 = "sld"
            com.loc.as.a(r13, r14, r2)     // Catch: java.lang.Throwable -> Le6
        L7e:
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> L8a
            if (r13 == 0) goto Lbe
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> L8a
            r13.close()     // Catch: java.lang.Throwable -> L8a
            r12.b = r11     // Catch: java.lang.Throwable -> L8a
            goto Lbe
        L8a:
            r13 = move-exception
            java.lang.String r14 = "dbs"
            java.lang.String r2 = "sld"
        L8f:
            com.loc.as.a(r13, r14, r2)     // Catch: java.lang.Throwable -> Le6
            goto Lbe
        L93:
            r14 = move-exception
            goto L97
        L95:
            r14 = move-exception
            r13 = r11
        L97:
            java.lang.String r2 = "dbs"
            java.lang.String r3 = "sld"
            com.loc.as.a(r14, r2, r3)     // Catch: java.lang.Throwable -> Lc0
            if (r13 == 0) goto Lac
            r13.close()     // Catch: java.lang.Throwable -> La4
            goto Lac
        La4:
            r13 = move-exception
            java.lang.String r14 = "dbs"
            java.lang.String r2 = "sld"
            com.loc.as.a(r13, r14, r2)     // Catch: java.lang.Throwable -> Le6
        Lac:
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> Lb8
            if (r13 == 0) goto Lbe
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> Lb8
            r13.close()     // Catch: java.lang.Throwable -> Lb8
            r12.b = r11     // Catch: java.lang.Throwable -> Lb8
            goto Lbe
        Lb8:
            r13 = move-exception
            java.lang.String r14 = "dbs"
            java.lang.String r2 = "sld"
            goto L8f
        Lbe:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le6
            return r1
        Lc0:
            r14 = move-exception
            if (r13 == 0) goto Lcf
            r13.close()     // Catch: java.lang.Throwable -> Lc7
            goto Lcf
        Lc7:
            r13 = move-exception
            java.lang.String r1 = "dbs"
            java.lang.String r2 = "sld"
            com.loc.as.a(r13, r1, r2)     // Catch: java.lang.Throwable -> Le6
        Lcf:
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> Ldb
            if (r13 == 0) goto Le3
            android.database.sqlite.SQLiteDatabase r13 = r12.b     // Catch: java.lang.Throwable -> Ldb
            r13.close()     // Catch: java.lang.Throwable -> Ldb
            r12.b = r11     // Catch: java.lang.Throwable -> Ldb
            goto Le3
        Ldb:
            r13 = move-exception
            java.lang.String r1 = "dbs"
            java.lang.String r2 = "sld"
            com.loc.as.a(r13, r1, r2)     // Catch: java.lang.Throwable -> Le6
        Le3:
            throw r14     // Catch: java.lang.Throwable -> Le6
        Le4:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le6
            return r1
        Le6:
            r13 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le6
            throw r13
    }

    private <T> void b(T r5) {
            r4 = this;
            com.loc.ay r0 = r4.c
            monitor-enter(r0)
            android.database.sqlite.SQLiteDatabase r1 = r4.b()     // Catch: java.lang.Throwable -> L3e
            r4.b = r1     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return
        Ld:
            r2 = 0
            a(r1, r5)     // Catch: java.lang.Throwable -> L1d
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L3e
            if (r5 == 0) goto L2f
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L3e
            r5.close()     // Catch: java.lang.Throwable -> L3e
        L1a:
            r4.b = r2     // Catch: java.lang.Throwable -> L3e
            goto L2f
        L1d:
            r5 = move-exception
            java.lang.String r1 = "dbs"
            java.lang.String r3 = "itd"
            com.loc.as.a(r5, r1, r3)     // Catch: java.lang.Throwable -> L31
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L3e
            if (r5 == 0) goto L2f
            android.database.sqlite.SQLiteDatabase r5 = r4.b     // Catch: java.lang.Throwable -> L3e
            r5.close()     // Catch: java.lang.Throwable -> L3e
            goto L1a
        L2f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return
        L31:
            r5 = move-exception
            android.database.sqlite.SQLiteDatabase r1 = r4.b     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L3d
            android.database.sqlite.SQLiteDatabase r1 = r4.b     // Catch: java.lang.Throwable -> L3e
            r1.close()     // Catch: java.lang.Throwable -> L3e
            r4.b = r2     // Catch: java.lang.Throwable -> L3e
        L3d:
            throw r5     // Catch: java.lang.Throwable -> L3e
        L3e:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r5
    }

    private <T> void b(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            r0.a(r1, r2)
            return
    }

    public final <T> java.util.List<T> a(java.lang.String r1, java.lang.Class<T> r2) {
            r0 = this;
            java.util.List r1 = r0.b(r1, r2)
            return r1
    }

    public final void a(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.loc.ay r0 = r2.c
            monitor-enter(r0)
            java.lang.Class r1 = r3.getClass()     // Catch: java.lang.Throwable -> L1d
            java.util.List r1 = r2.a(r4, r1)     // Catch: java.lang.Throwable -> L1d
            if (r1 == 0) goto L18
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L1d
            if (r1 != 0) goto L14
            goto L18
        L14:
            r2.b(r4, r3)     // Catch: java.lang.Throwable -> L1d
            goto L1b
        L18:
            r2.a(r3)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r3
    }
}
