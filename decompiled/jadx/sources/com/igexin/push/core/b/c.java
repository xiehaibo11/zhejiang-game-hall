package com.igexin.push.core.b;

import android.database.sqlite.SQLiteDatabase;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class c implements b {
    private static c b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, byte[]> f2526a = new HashMap();

    private c() {
    }

    public static c a() {
        if (b == null) {
            b = new c();
        }
        return b;
    }

    @Override // com.igexin.push.core.b.b
    public void a(SQLiteDatabase sQLiteDatabase) {
    }

    @Override // com.igexin.push.core.b.b
    public void b(SQLiteDatabase sQLiteDatabase) {
    }

    @Override // com.igexin.push.core.b.b
    public void c(SQLiteDatabase sQLiteDatabase) {
    }
}
