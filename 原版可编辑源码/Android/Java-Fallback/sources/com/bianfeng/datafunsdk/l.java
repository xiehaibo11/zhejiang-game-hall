package com.bianfeng.datafunsdk;

/* JADX WARN: Unexpected interfaces in signature: [java.lang.Object<T>] */
public class l<T> {
    public android.database.sqlite.SQLiteDatabase a;
    public boolean b;
    public java.lang.Class<T> c;
    public java.lang.String d;
    public java.util.Map<java.lang.String, java.lang.reflect.Field> e;

    public l() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.b()     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    public int a(T r8) throws com.bianfeng.datafunsdk.n {
            r7 = this;
            java.lang.Class<com.bianfeng.datafunsdk.l> r0 = com.bianfeng.datafunsdk.l.class
            monitor-enter(r0)
            r7.c()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.util.Map<java.lang.String, java.lang.reflect.Field> r1 = r7.e     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r2 = "_id"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.reflect.Field r1 = (java.lang.reflect.Field) r1     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.Object r8 = r1.get(r8)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            android.database.sqlite.SQLiteDatabase r1 = r7.a     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r3 = r7.d     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r4 = "_id=?"
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r5 = 0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r6.<init>()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r6.append(r8)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r8 = ""
            r6.append(r8)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r2[r5] = r8     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            int r8 = r1.delete(r3, r4, r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return r8
        L3e:
            r8 = move-exception
            goto L4c
        L40:
            r8 = move-exception
            java.lang.String r1 = "delete出现异常"
            com.bianfeng.datafunsdk.x.a(r1)     // Catch: java.lang.Throwable -> L3e
            com.bianfeng.datafunsdk.n r1 = new com.bianfeng.datafunsdk.n     // Catch: java.lang.Throwable -> L3e
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L3e
            throw r1     // Catch: java.lang.Throwable -> L3e
        L4c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r8
    }

    public java.util.List<T> a(java.lang.String r12, java.lang.String r13) throws com.bianfeng.datafunsdk.n {
            r11 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r11.c()     // Catch: java.lang.Exception -> Lcd
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcd
            r1.<init>()     // Catch: java.lang.Exception -> Lcd
            java.lang.String r2 = "间隔时间fromData: "
            r1.append(r2)     // Catch: java.lang.Exception -> Lcd
            r1.append(r12)     // Catch: java.lang.Exception -> Lcd
            java.lang.String r2 = ",toData:"
            r1.append(r2)     // Catch: java.lang.Exception -> Lcd
            r1.append(r13)     // Catch: java.lang.Exception -> Lcd
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lcd
            com.bianfeng.datafunsdk.x.a(r1)     // Catch: java.lang.Exception -> Lcd
            android.database.sqlite.SQLiteDatabase r2 = r11.a     // Catch: java.lang.Exception -> Lcd
            java.lang.String r3 = r11.d     // Catch: java.lang.Exception -> Lcd
            r4 = 0
            java.lang.String r5 = "db_datafun_dataTime between ? and ?"
            r1 = 2
            java.lang.String[] r6 = new java.lang.String[r1]     // Catch: java.lang.Exception -> Lcd
            r1 = 0
            r6[r1] = r12     // Catch: java.lang.Exception -> Lcd
            r12 = 1
            r6[r12] = r13     // Catch: java.lang.Exception -> Lcd
            r7 = 0
            r8 = 0
            r9 = 0
            java.lang.String r10 = "100"
            android.database.Cursor r13 = r2.query(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Lcd
        L3d:
            boolean r1 = r13.moveToNext()     // Catch: java.lang.Exception -> Lcd
            if (r1 == 0) goto Lc9
            java.lang.Class<T> r1 = r11.c     // Catch: java.lang.Exception -> Lcd
            java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> Lcd
            java.util.Map<java.lang.String, java.lang.reflect.Field> r2 = r11.e     // Catch: java.lang.Exception -> Lcd
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Exception -> Lcd
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> Lcd
        L53:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> Lcd
            if (r3 == 0) goto Lc4
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> Lcd
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Exception -> Lcd
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Exception -> Lcd
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> Lcd
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Exception -> Lcd
            java.lang.reflect.Field r3 = (java.lang.reflect.Field) r3     // Catch: java.lang.Exception -> Lcd
            r3.setAccessible(r12)     // Catch: java.lang.Exception -> Lcd
            java.lang.Class r5 = r3.getType()     // Catch: java.lang.Exception -> Lcd
            int r4 = r13.getColumnIndex(r4)     // Catch: java.lang.Exception -> Lcd
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            if (r6 != r5) goto L82
            java.lang.String r4 = r13.getString(r4)     // Catch: java.lang.Exception -> Lcd
            r3.set(r1, r4)     // Catch: java.lang.Exception -> Lcd
            goto L53
        L82:
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> Lcd
            if (r6 != r5) goto L92
            int r4 = r13.getInt(r4)     // Catch: java.lang.Exception -> Lcd
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> Lcd
            r3.set(r1, r4)     // Catch: java.lang.Exception -> Lcd
            goto L53
        L92:
            java.lang.Class r6 = java.lang.Double.TYPE     // Catch: java.lang.Exception -> Lcd
            if (r6 != r5) goto La2
            double r4 = r13.getDouble(r4)     // Catch: java.lang.Exception -> Lcd
            java.lang.Double r4 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Exception -> Lcd
            r3.set(r1, r4)     // Catch: java.lang.Exception -> Lcd
            goto L53
        La2:
            java.lang.Class r6 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> Lcd
            if (r6 != r5) goto Lb2
            long r4 = r13.getLong(r4)     // Catch: java.lang.Exception -> Lcd
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> Lcd
            r3.set(r1, r4)     // Catch: java.lang.Exception -> Lcd
            goto L53
        Lb2:
            java.lang.Class<byte[]> r6 = byte[].class
            if (r6 != r5) goto Lbe
            byte[] r4 = r13.getBlob(r4)     // Catch: java.lang.Exception -> Lcd
            r3.set(r1, r4)     // Catch: java.lang.Exception -> Lcd
            goto L53
        Lbe:
            java.lang.String r3 = "不存在该数据类型"
            com.bianfeng.datafunsdk.x.a(r3)     // Catch: java.lang.Exception -> Lcd
            goto L53
        Lc4:
            r0.add(r1)     // Catch: java.lang.Exception -> Lcd
            goto L3d
        Lc9:
            r13.close()     // Catch: java.lang.Exception -> Lcd
            return r0
        Lcd:
            r12 = move-exception
            com.bianfeng.datafunsdk.n r13 = new com.bianfeng.datafunsdk.n
            r13.<init>(r12)
            throw r13
    }

    public final boolean a() throws com.bianfeng.datafunsdk.n {
            r9 = this;
            java.lang.Class<T> r0 = r9.c
            java.lang.Class<com.bianfeng.datafunsdk.c> r1 = com.bianfeng.datafunsdk.c.class
            java.lang.annotation.Annotation r0 = r0.getAnnotation(r1)
            com.bianfeng.datafunsdk.c r0 = (com.bianfeng.datafunsdk.c) r0
            java.lang.String r0 = r0.value()
            r9.d = r0
            java.lang.Class<T> r0 = r9.c
            java.lang.reflect.Field[] r0 = r0.getDeclaredFields()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "_id "
            r1.append(r2)
            java.lang.String r2 = "INTEGER PRIMARY KEY autoincrement"
            r1.append(r2)
            int r2 = r0.length
            r3 = 0
            r4 = 0
        L28:
            if (r4 >= r2) goto L9a
            r5 = r0[r4]
            java.lang.Class r6 = r5.getType()
            java.lang.Class<com.bianfeng.datafunsdk.b> r7 = com.bianfeng.datafunsdk.b.class
            java.lang.annotation.Annotation r5 = r5.getAnnotation(r7)
            com.bianfeng.datafunsdk.b r5 = (com.bianfeng.datafunsdk.b) r5
            if (r5 != 0) goto L3b
            goto L97
        L3b:
            java.lang.String r5 = r5.value()
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            java.lang.String r8 = ","
            if (r7 != r6) goto L51
            r1.append(r8)
            r1.append(r5)
            java.lang.String r5 = " TEXT"
            r1.append(r5)
            goto L97
        L51:
            java.lang.Class r7 = java.lang.Integer.TYPE
            if (r7 != r6) goto L61
            r1.append(r8)
            r1.append(r5)
            java.lang.String r5 = " INTEGER"
            r1.append(r5)
            goto L97
        L61:
            java.lang.Class r7 = java.lang.Double.TYPE
            if (r7 != r6) goto L71
            r1.append(r8)
            r1.append(r5)
            java.lang.String r5 = " DOUBLE"
            r1.append(r5)
            goto L97
        L71:
            java.lang.Class r7 = java.lang.Long.TYPE
            if (r7 != r6) goto L81
            r1.append(r8)
            r1.append(r5)
            java.lang.String r5 = " LONG"
            r1.append(r5)
            goto L97
        L81:
            java.lang.Class<byte[]> r7 = byte[].class
            if (r7 != r6) goto L91
            r1.append(r8)
            r1.append(r5)
            java.lang.String r5 = " BLOB"
            r1.append(r5)
            goto L97
        L91:
            java.lang.String r5 = "不存在该数据类型"
            com.bianfeng.datafunsdk.x.a(r5)
        L97:
            int r4 = r4 + 1
            goto L28
        L9a:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = r9.d
            r0[r3] = r2
            java.lang.String r1 = r1.toString()
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "CREATE TABLE IF NOT EXISTS %s (%s)"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            android.database.sqlite.SQLiteDatabase r1 = r9.a     // Catch: java.lang.Exception -> Lb4
            r1.execSQL(r0)     // Catch: java.lang.Exception -> Lb4
            return r2
        Lb4:
            r0 = move-exception
            com.bianfeng.datafunsdk.n r1 = new com.bianfeng.datafunsdk.n
            r1.<init>(r0)
            throw r1
    }

    public synchronized boolean a(java.lang.Class<T> r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.b     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto L20
            android.database.sqlite.SQLiteDatabase r0 = r2.a     // Catch: java.lang.Throwable -> L27
            r1 = 0
            if (r0 != 0) goto Lc
            monitor-exit(r2)
            return r1
        Lc:
            r2.c = r3     // Catch: java.lang.Throwable -> L27
            boolean r3 = r0.isOpen()     // Catch: java.lang.Throwable -> L27
            if (r3 != 0) goto L16
            monitor-exit(r2)
            return r1
        L16:
            r2.a()     // Catch: com.bianfeng.datafunsdk.n -> L1d java.lang.Throwable -> L27
            r3 = 1
            r2.b = r3     // Catch: java.lang.Throwable -> L27
            goto L20
        L1d:
            r3 = move-exception
            monitor-exit(r2)
            return r1
        L20:
            r2.d()     // Catch: java.lang.Throwable -> L27
            boolean r3 = r2.b     // Catch: java.lang.Throwable -> L27
            monitor-exit(r2)
            return r3
        L27:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public java.lang.Long b(T r8) throws com.bianfeng.datafunsdk.n {
            r7 = this;
            r7.c()
            java.lang.Class<com.bianfeng.datafunsdk.l> r0 = com.bianfeng.datafunsdk.l.class
            monitor-enter(r0)
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r1.<init>()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.util.Map<java.lang.String, java.lang.reflect.Field> r2 = r7.e     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
        L15:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            if (r3 == 0) goto L97
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.reflect.Field r3 = (java.lang.reflect.Field) r3     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r5 = 1
            r3.setAccessible(r5)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.String r5 = "_id"
            boolean r5 = r5.equals(r4)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            if (r5 == 0) goto L3a
            goto L15
        L3a:
            java.lang.Class r5 = r3.getType()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            if (r6 != r5) goto L4e
            java.lang.Object r3 = r3.get(r8)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            goto L15
        L4e:
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            if (r6 != r5) goto L5e
            int r3 = r3.getInt(r8)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            goto L15
        L5e:
            java.lang.Class r6 = java.lang.Double.TYPE     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            if (r6 != r5) goto L6e
            double r5 = r3.getDouble(r8)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Double r3 = java.lang.Double.valueOf(r5)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            goto L15
        L6e:
            java.lang.Class r6 = java.lang.Long.TYPE     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            if (r6 != r5) goto L7e
            long r5 = r3.getLong(r8)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Long r3 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            goto L15
        L7e:
            java.lang.Class<byte[]> r6 = byte[].class
            if (r6 != r5) goto L90
            java.lang.Object r3 = r3.get(r8)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.String r3 = java.util.Arrays.toString(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            goto L15
        L90:
            java.lang.String r3 = "不存在该数据类型"
            com.bianfeng.datafunsdk.x.a(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            goto L15
        L97:
            android.database.sqlite.SQLiteDatabase r8 = r7.a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.String r2 = r7.d     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            r3 = 0
            long r1 = r8.insert(r2, r3, r1)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            java.lang.Long r8 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            return r8
        La6:
            r8 = move-exception
            goto Lc7
        La8:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6
            r1.<init>()     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "插入的异常"
            r1.append(r2)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = r8.getMessage()     // Catch: java.lang.Throwable -> La6
            r1.append(r2)     // Catch: java.lang.Throwable -> La6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La6
            com.bianfeng.datafunsdk.x.a(r1)     // Catch: java.lang.Throwable -> La6
            com.bianfeng.datafunsdk.n r1 = new com.bianfeng.datafunsdk.n     // Catch: java.lang.Throwable -> La6
            r1.<init>(r8)     // Catch: java.lang.Throwable -> La6
            throw r1     // Catch: java.lang.Throwable -> La6
        Lc7:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            throw r8
    }

    public final void b() throws com.bianfeng.datafunsdk.n {
            r2 = this;
            r0 = 0
            java.lang.String r1 = com.bianfeng.datafunsdk.m.a     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = com.bianfeng.datafunsdk.v.a(r1)     // Catch: java.lang.Exception -> Le
            android.database.sqlite.SQLiteDatabase r1 = android.database.sqlite.SQLiteDatabase.openOrCreateDatabase(r1, r0)     // Catch: java.lang.Exception -> Le
            r2.a = r1     // Catch: java.lang.Exception -> Le
            return
        Le:
            r1 = move-exception
            r2.a = r0
            com.bianfeng.datafunsdk.n r0 = new com.bianfeng.datafunsdk.n
            r0.<init>(r1)
            throw r0
    }

    public final void c() {
            r2 = this;
            int r0 = com.bianfeng.datafunsdk.y.a()
            com.bianfeng.datafunsdk.g r1 = com.bianfeng.datafunsdk.g.c
            int r1 = r1.ordinal()
            if (r0 != r1) goto L25
            r2.b()     // Catch: com.bianfeng.datafunsdk.n -> L10
            goto L14
        L10:
            r0 = move-exception
            r0.printStackTrace()
        L14:
            r0 = 0
            r2.b = r0
            java.lang.Class<T> r0 = r2.c
            r2.a(r0)
            com.bianfeng.datafunsdk.g r0 = com.bianfeng.datafunsdk.g.a
            int r0 = r0.ordinal()
            com.bianfeng.datafunsdk.y.a(r0)
        L25:
            return
    }

    public final void d() {
            r11 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r11.e = r0
            android.database.sqlite.SQLiteDatabase r1 = r11.a
            java.lang.String r2 = r11.d
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6, r7, r8)
            java.lang.String[] r0 = r0.getColumnNames()
            java.lang.Class<T> r1 = r11.c
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()
            int r2 = r0.length
            r3 = 0
            r4 = 0
        L22:
            if (r4 >= r2) goto L5a
            r5 = r0[r4]
            java.lang.String r6 = "_id"
            boolean r7 = r6.equals(r5)
            if (r7 == 0) goto L2f
            goto L57
        L2f:
            int r7 = r1.length
            r8 = 0
        L31:
            if (r8 >= r7) goto L57
            r9 = r1[r8]
            java.lang.Class<com.bianfeng.datafunsdk.b> r10 = com.bianfeng.datafunsdk.b.class
            java.lang.annotation.Annotation r10 = r9.getAnnotation(r10)
            com.bianfeng.datafunsdk.b r10 = (com.bianfeng.datafunsdk.b) r10
            if (r10 != 0) goto L45
            java.util.Map<java.lang.String, java.lang.reflect.Field> r10 = r11.e
            r10.put(r6, r9)
            goto L54
        L45:
            java.lang.String r10 = r10.value()
            boolean r10 = r5.equals(r10)
            if (r10 == 0) goto L54
            java.util.Map<java.lang.String, java.lang.reflect.Field> r10 = r11.e
            r10.put(r5, r9)
        L54:
            int r8 = r8 + 1
            goto L31
        L57:
            int r4 = r4 + 1
            goto L22
        L5a:
            return
    }
}
