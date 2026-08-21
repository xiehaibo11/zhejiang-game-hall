package com.igexin.push.b;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.igexin.b.a.d.e;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class a extends e {
    private static final String e = a.class.getName();
    protected SQLiteDatabase a;
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

    @Override
    public void b() {
        super.b();
        SQLiteDatabase writableDatabase = com.igexin.push.core.c.a().k().getWritableDatabase();
        this.a = writableDatabase;
        writableDatabase.setVersion(5);
        Iterator<com.igexin.push.core.b.b> it = this.c.iterator();
        while (it.hasNext()) {
            it.next().a(this.a);
        }
        for (com.igexin.push.core.b.b bVar : this.c) {
            if (this.d) {
                bVar.c(this.a);
            } else {
                bVar.b(this.a);
            }
        }
        com.igexin.b.a.b.c.b().a(new c(-980948));
        com.igexin.b.a.b.c.b().c();
    }

    @Override
    public final int b_() {
        return -2147483639;
    }

    @Override
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

    @Override
    public void d() {
        super.d();
        this.n = true;
        this.I = true;
    }

    @Override
    protected void e() {
    }
}
