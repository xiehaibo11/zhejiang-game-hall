package com.igexin.push.core.b;

import android.database.sqlite.SQLiteDatabase;
import java.util.HashMap;
import java.util.Map;

public class c implements b {
    private static c b;
    private Map<String, byte[]> a = new HashMap();

    private c() {
    }

    public static c a() {
        if (b == null) {
            b = new c();
        }
        return b;
    }

    @Override
    public void a(SQLiteDatabase sQLiteDatabase) {
    }

    @Override
    public void b(SQLiteDatabase sQLiteDatabase) {
    }

    @Override
    public void c(SQLiteDatabase sQLiteDatabase) {
    }
}
