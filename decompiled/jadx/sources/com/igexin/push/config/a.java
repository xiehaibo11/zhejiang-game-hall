package com.igexin.push.config;

import android.content.ContentValues;
import android.database.sqlite.SQLiteDatabase;

/* JADX INFO: loaded from: classes2.dex */
public class a implements com.igexin.push.core.b.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f2485a = a.class.getName();
    private static a b;

    public static a a() {
        if (b == null) {
            b = new a();
        }
        return b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(SQLiteDatabase sQLiteDatabase, int i, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", str);
        sQLiteDatabase.replace("config", null, contentValues);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(SQLiteDatabase sQLiteDatabase, int i, byte[] bArr) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", bArr);
        sQLiteDatabase.replace("config", null, contentValues);
    }

    @Override // com.igexin.push.core.b.b
    public void a(SQLiteDatabase sQLiteDatabase) {
    }

    public void a(String str) {
        com.igexin.b.a.b.c.b().a(new f(this, str), true, false);
    }

    public void b() {
        com.igexin.b.a.b.c.b().a(new b(this), false, true);
    }

    /* JADX WARN: Removed duplicated region for block: B:115:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x011e  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x00b2 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:94:0x004e A[SYNTHETIC] */
    @Override // com.igexin.push.core.b.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void b(android.database.sqlite.SQLiteDatabase r11) {
        /*
            Method dump skipped, instruction units count: 294
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.config.a.b(android.database.sqlite.SQLiteDatabase):void");
    }

    public void b(String str) {
        com.igexin.b.a.b.c.b().a(new g(this, str), true, false);
    }

    public void c() {
        com.igexin.b.a.b.c.b().a(new c(this), false, true);
    }

    @Override // com.igexin.push.core.b.b
    public void c(SQLiteDatabase sQLiteDatabase) {
        a(sQLiteDatabase, 1, String.valueOf(j.f2494a));
        a(sQLiteDatabase, 2, String.valueOf(j.b));
        a(sQLiteDatabase, 3, String.valueOf(j.c));
        a(sQLiteDatabase, 15, String.valueOf(j.d));
        a(sQLiteDatabase, 3, String.valueOf(j.c));
    }

    public void d() {
        com.igexin.b.a.b.c.b().a(new d(this), false, true);
    }

    public void e() {
        com.igexin.b.a.b.c.b().a(new e(this), false, true);
    }
}
