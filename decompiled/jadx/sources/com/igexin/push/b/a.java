package com.igexin.push.b;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.igexin.b.a.d.e;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class a extends e {
    private static final String e = a.class.getName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected SQLiteDatabase f2464a;
    protected Cursor b;
    List<com.igexin.push.core.b.b> c;
    boolean d;

    public a() {
        super(1);
        this.c = new LinkedList();
    }

    public void a(com.igexin.push.core.b.b bVar) {
        this.c.add(bVar);
    }

    @Override // com.igexin.b.a.d.e
    public void b() {
        super.b();
        SQLiteDatabase writableDatabase = com.igexin.push.core.c.a().k().getWritableDatabase();
        this.f2464a = writableDatabase;
        writableDatabase.setVersion(5);
        Iterator<com.igexin.push.core.b.b> it = this.c.iterator();
        while (it.hasNext()) {
            it.next().a(this.f2464a);
        }
        for (com.igexin.push.core.b.b bVar : this.c) {
            if (this.d) {
                bVar.c(this.f2464a);
            } else {
                bVar.b(this.f2464a);
            }
        }
        com.igexin.b.a.b.c.b().a(new c(-980948));
        com.igexin.b.a.b.c.b().c();
    }

    @Override // com.igexin.b.a.d.a.e
    public final int b_() {
        return -2147483639;
    }

    @Override // com.igexin.b.a.d.e
    public void c() {
        super.c();
        Cursor cursor = this.b;
        if (cursor != null) {
            try {
                cursor.close();
            } catch (Exception unused) {
            }
        }
    }

    @Override // com.igexin.b.a.d.e
    public void d() {
        super.d();
        this.n = true;
        this.I = true;
    }

    @Override // com.igexin.b.a.d.e
    protected void e() {
    }
}
