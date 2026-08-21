package com.igexin.push.extension.distribution.basic.e;

public class b extends android.database.sqlite.SQLiteOpenHelper {
    android.database.sqlite.SQLiteDatabase a;
    private boolean b;

    public b(android.content.Context r4) {
            r3 = this;
            r0 = 0
            java.lang.String r1 = "pushsdk.db"
            r2 = 5
            r3.<init>(r4, r1, r0, r2)
            r3.a = r0
            r4 = 1
            r3.b = r4
            return
    }

    private java.lang.String a(java.lang.String r3, java.lang.String r4) {
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

    public void a(java.lang.String r2, java.lang.String r3, android.content.ContentValues r4) {
            r1 = this;
            android.database.sqlite.SQLiteDatabase r0 = r1.getWritableDatabase()
            r1.a = r0
            r0.replace(r2, r3, r4)     // Catch: java.lang.Exception -> L9
        L9:
            return
    }

    public void a(java.lang.String r4, java.lang.String[] r5, java.lang.String[] r6) {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.getWritableDatabase()
            r3.a = r0
            r0.beginTransaction()
            if (r5 != 0) goto L12
            android.database.sqlite.SQLiteDatabase r5 = r3.a     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r6 = 0
            r5.delete(r4, r6, r6)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L4e
        L12:
            int r0 = r5.length     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r1 = 1
            if (r0 != r1) goto L42
            int r0 = r6.length     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            if (r0 != r1) goto L33
            android.database.sqlite.SQLiteDatabase r0 = r3.a     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r2 = 0
            r5 = r5[r2]     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r1.append(r5)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.String r5 = " = ?"
            r1.append(r5)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r0.delete(r4, r5, r6)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L4e
        L33:
            android.database.sqlite.SQLiteDatabase r0 = r3.a     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            int r1 = r6.length     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.String r5 = r3.a(r5, r6, r1)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.String r4 = r3.a(r4, r5)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
        L3e:
            r0.execSQL(r4)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L4e
        L42:
            android.database.sqlite.SQLiteDatabase r0 = r3.a     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            int r1 = r5.length     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.String r5 = r3.a(r5, r6, r1)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            java.lang.String r4 = r3.a(r4, r5)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L3e
        L4e:
            android.database.sqlite.SQLiteDatabase r4 = r3.a     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r4.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L5b
        L54:
            r4 = move-exception
            android.database.sqlite.SQLiteDatabase r5 = r3.a
            r5.endTransaction()
            throw r4
        L5b:
            android.database.sqlite.SQLiteDatabase r4 = r3.a
            r4.endTransaction()
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            r1 = 0
            r0.b = r1
            return
    }

    @Override
    public void onDowngrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r1 = 0
            r0.b = r1
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r1 = 0
            r0.b = r1
            return
    }
}
