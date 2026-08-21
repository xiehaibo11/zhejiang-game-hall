package com.igexin.push.b;

public class b extends android.database.sqlite.SQLiteOpenHelper {
    private android.database.sqlite.SQLiteDatabase a;

    public b(android.content.Context r4) {
            r3 = this;
            r0 = 0
            java.lang.String r1 = "pushsdk.db"
            r2 = 5
            r3.<init>(r4, r1, r0, r2)
            r3.a = r0
            return
    }

    private java.lang.String a(java.lang.String[] r7, java.lang.String[] r8, int r9) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = " "
            r0.<init>(r1)
            int r1 = r7.length
            java.lang.String r2 = "'"
            java.lang.String r3 = " = '"
            r4 = 0
            r5 = 1
            if (r1 != r5) goto L2f
            r1 = r4
        L11:
            if (r1 >= r9) goto L4d
            r5 = r7[r4]
            r0.append(r5)
            r0.append(r3)
            r5 = r8[r1]
            r0.append(r5)
            r0.append(r2)
            int r5 = r9 + (-1)
            if (r1 >= r5) goto L2c
            java.lang.String r5 = " or "
            r0.append(r5)
        L2c:
            int r1 = r1 + 1
            goto L11
        L2f:
            if (r4 >= r9) goto L4d
            r1 = r7[r4]
            r0.append(r1)
            r0.append(r3)
            r1 = r8[r4]
            r0.append(r1)
            r0.append(r2)
            int r1 = r9 + (-1)
            if (r4 >= r1) goto L4a
            java.lang.String r1 = " and "
            r0.append(r1)
        L4a:
            int r4 = r4 + 1
            goto L2f
        L4d:
            java.lang.String r7 = r0.toString()
            return r7
    }

    private java.lang.String b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "delete from "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " where "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public int a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()
            r3.a = r0
            r0.beginTransaction()
            r0 = 0
            android.database.sqlite.SQLiteDatabase r1 = r3.a     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L40
            r2 = 0
            int r4 = r1.delete(r4, r5, r2)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L40
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            r5.<init>()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            java.lang.String r1 = "DBHelper|del "
            r5.append(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            r5.append(r4)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            java.lang.String r1 = " msg"
            r5.append(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            com.igexin.b.a.c.b.a(r5, r0)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            android.database.sqlite.SQLiteDatabase r5 = r3.a     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            r5.setTransactionSuccessful()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L39
            android.database.sqlite.SQLiteDatabase r5 = r3.a
            r5.endTransaction()
            goto L46
        L37:
            r0 = r4
            goto L40
        L39:
            r4 = move-exception
            android.database.sqlite.SQLiteDatabase r5 = r3.a
            r5.endTransaction()
            throw r4
        L40:
            android.database.sqlite.SQLiteDatabase r4 = r3.a
            r4.endTransaction()
            r4 = r0
        L46:
            return r4
    }

    public android.database.Cursor a(java.lang.String r9, java.lang.String[] r10, java.lang.String r11) {
            r8 = this;
            android.database.sqlite.SQLiteDatabase r0 = r8.getReadableDatabase()     // Catch: java.lang.Throwable -> L12
            r8.a = r0     // Catch: java.lang.Throwable -> L12
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r1 = r9
            r2 = r10
            r3 = r11
            android.database.Cursor r9 = r0.query(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L12
            return r9
        L12:
            r9 = 0
            return r9
    }

    public android.database.Cursor a(java.lang.String r12, java.lang.String[] r13, java.lang.String[] r14, java.lang.String[] r15, java.lang.String r16) {
            r11 = this;
            r1 = r11
            r0 = r13
            r6 = r14
            android.database.sqlite.SQLiteDatabase r2 = r11.getReadableDatabase()
            r1.a = r2
            r2.beginTransaction()
            r10 = 0
            if (r0 != 0) goto L1f
            android.database.sqlite.SQLiteDatabase r2 = r1.a     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r3 = r12
            r4 = r15
            r9 = r16
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
        L1d:
            r10 = r0
            goto L6e
        L1f:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r3 = 1
            if (r2 != r3) goto L5b
            int r2 = r6.length     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            if (r2 != r3) goto L48
            android.database.sqlite.SQLiteDatabase r2 = r1.a     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r3.<init>()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r4 = 0
            r0 = r0[r4]     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r3.append(r0)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            java.lang.String r0 = "= ?"
            r3.append(r0)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r7 = 0
            r8 = 0
            r3 = r12
            r4 = r15
            r6 = r14
            r9 = r16
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            goto L1d
        L48:
            android.database.sqlite.SQLiteDatabase r2 = r1.a     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            int r3 = r6.length     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            java.lang.String r5 = r11.a(r13, r14, r3)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r6 = 0
            r7 = 0
            r8 = 0
            r3 = r12
            r4 = r15
            r9 = r16
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            goto L1d
        L5b:
            android.database.sqlite.SQLiteDatabase r2 = r1.a     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            int r3 = r0.length     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            java.lang.String r5 = r11.a(r13, r14, r3)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r6 = 0
            r7 = 0
            r8 = 0
            r3 = r12
            r4 = r15
            r9 = r16
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            goto L1d
        L6e:
            android.database.sqlite.SQLiteDatabase r0 = r1.a     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            r0.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L7b
            goto L7b
        L74:
            r0 = move-exception
            android.database.sqlite.SQLiteDatabase r2 = r1.a
            r2.endTransaction()
            throw r0
        L7b:
            android.database.sqlite.SQLiteDatabase r0 = r1.a
            r0.endTransaction()
            return r10
    }

    public void a(java.lang.String r5, android.content.ContentValues r6, java.lang.String[] r7, java.lang.String[] r8) {
            r4 = this;
            android.database.sqlite.SQLiteDatabase r0 = r4.getWritableDatabase()
            r4.a = r0
            r0.beginTransaction()
            r0 = 0
            if (r7 != 0) goto L12
            android.database.sqlite.SQLiteDatabase r7 = r4.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r7.update(r5, r6, r0, r0)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            goto L4d
        L12:
            int r1 = r7.length     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r2 = 1
            if (r1 != r2) goto L45
            int r1 = r8.length     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            if (r1 != r2) goto L3d
            android.database.sqlite.SQLiteDatabase r1 = r4.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r2.<init>()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r3 = 0
            r7 = r7[r3]     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r2.append(r7)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            java.lang.String r7 = "='"
            r2.append(r7)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r7 = r8[r3]     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r2.append(r7)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            java.lang.String r7 = "'"
            r2.append(r7)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
        L39:
            r1.update(r5, r6, r7, r0)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            goto L4d
        L3d:
            android.database.sqlite.SQLiteDatabase r1 = r4.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            int r2 = r8.length     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            java.lang.String r7 = r4.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            goto L39
        L45:
            android.database.sqlite.SQLiteDatabase r1 = r4.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            int r2 = r7.length     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            java.lang.String r7 = r4.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            goto L39
        L4d:
            android.database.sqlite.SQLiteDatabase r5 = r4.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            r5.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L5a
            goto L5a
        L53:
            r5 = move-exception
            android.database.sqlite.SQLiteDatabase r6 = r4.a
            r6.endTransaction()
            throw r5
        L5a:
            android.database.sqlite.SQLiteDatabase r5 = r4.a
            r5.endTransaction()
            return
    }

    public void a(java.lang.String r4, java.lang.String[] r5, java.lang.String[] r6) {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()
            r3.a = r0
            r0.beginTransaction()
            if (r5 != 0) goto L12
            android.database.sqlite.SQLiteDatabase r5 = r3.a     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r6 = 0
            r5.delete(r4, r6, r6)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            goto L6d
        L12:
            int r0 = r5.length     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r1 = 1
            if (r0 != r1) goto L61
            int r0 = r6.length     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            if (r0 != r1) goto L52
            android.database.sqlite.SQLiteDatabase r0 = r3.a     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r1.<init>()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r2 = 0
            r5 = r5[r2]     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r1.append(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r5 = " = ?"
            r1.append(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            int r5 = r0.delete(r4, r5, r6)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r6.<init>()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r0 = "DBHelper|del "
            r6.append(r0)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r6.append(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r4 = " cnt = "
            r6.append(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r6.append(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            com.igexin.b.a.c.b.a(r4, r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            goto L6d
        L52:
            android.database.sqlite.SQLiteDatabase r0 = r3.a     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            int r1 = r6.length     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r5 = r3.a(r5, r6, r1)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r4 = r3.b(r4, r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
        L5d:
            r0.execSQL(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            goto L6d
        L61:
            android.database.sqlite.SQLiteDatabase r0 = r3.a     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            int r1 = r5.length     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r5 = r3.a(r5, r6, r1)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            java.lang.String r4 = r3.b(r4, r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            goto L5d
        L6d:
            android.database.sqlite.SQLiteDatabase r4 = r3.a     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            r4.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L7a
            goto L7a
        L73:
            r4 = move-exception
            android.database.sqlite.SQLiteDatabase r5 = r3.a
            r5.endTransaction()
            throw r4
        L7a:
            android.database.sqlite.SQLiteDatabase r4 = r3.a
            r4.endTransaction()
            return
    }

    public boolean a(java.lang.String r3, android.content.ContentValues r4) {
            r2 = this;
            android.database.sqlite.SQLiteDatabase r0 = r2.getWritableDatabase()
            r2.a = r0
            r0.beginTransaction()
            android.database.sqlite.SQLiteDatabase r0 = r2.a     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1d
            r1 = 0
            r0.insert(r3, r1, r4)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1d
            android.database.sqlite.SQLiteDatabase r3 = r2.a     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1d
            r3.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1d
            r3 = 1
            goto L1e
        L16:
            r3 = move-exception
            android.database.sqlite.SQLiteDatabase r4 = r2.a
            r4.endTransaction()
            throw r3
        L1d:
            r3 = 0
        L1e:
            android.database.sqlite.SQLiteDatabase r4 = r2.a
            r4.endTransaction()
            return r3
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            r2.beginTransaction()
            java.lang.String r0 = "create table if not exists config (id integer primary key,value text)"
            r2.execSQL(r0)     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L20
            java.lang.String r0 = "create table if not exists runtime (id integer primary key,value text)"
            r2.execSQL(r0)     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L20
            java.lang.String r0 = "create table if not exists message (id integer primary key autoincrement,messageid text,taskid text,appid text,info text,msgextra blob,key text,status integer,createtime integer)"
            r2.execSQL(r0)     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L20
            java.lang.String r0 = "create table if not exists ral (id integer primary key,data text,type integer,time integer)"
            r2.execSQL(r0)     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L20
            r2.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L20
            goto L20
        L1b:
            r0 = move-exception
            r2.endTransaction()
            throw r0
        L20:
            r2.endTransaction()
            return
    }

    @Override
    public void onDowngrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r0.onUpgrade(r1, r3, r2)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            com.igexin.push.core.b.i r2 = com.igexin.push.core.b.i.a()
            r2.d(r1)
            java.lang.String r2 = "drop table if exists config"
            r1.execSQL(r2)     // Catch: java.lang.Exception -> Lc
        Lc:
            java.lang.String r2 = "drop table if exists runtime"
            r1.execSQL(r2)     // Catch: java.lang.Exception -> L11
        L11:
            java.lang.String r2 = "drop table if exists message"
            r1.execSQL(r2)     // Catch: java.lang.Exception -> L16
        L16:
            java.lang.String r2 = "drop table if exists ral"
            r1.execSQL(r2)     // Catch: java.lang.Exception -> L1b
        L1b:
            r0.onCreate(r1)
            return
    }
}
