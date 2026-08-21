package com.igexin.push.b;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.igexin.b.a.d.e;
import com.igexin.push.config.i;

public abstract class d extends e {
    private static final String a = i.a;
    protected SQLiteDatabase d;
    protected Cursor e;
    protected ContentValues f;
    public c g;

    public d() {
        super(1);
    }

    public d(ContentValues contentValues) {
        super(1);
        this.f = contentValues;
    }

    public abstract void a();

    @Override
    public void b() {
        super.b();
        this.d = com.igexin.push.core.c.a().k().getWritableDatabase();
        a();
        if (this.g != null) {
            com.igexin.b.a.b.c.b().a(this.g);
            com.igexin.b.a.b.c.b().c();
        }
    }

    @Override
    public final int b_() {
        return -2147483640;
    }

    @Override
    public void c() {
        super.c();
        Cursor cursor = this.e;
        if (cursor == null || cursor.isClosed()) {
            return;
        }
        try {
            this.e.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void d() {
        this.n = true;
        this.I = true;
    }

    @Override
    protected void e() {
    }
}
