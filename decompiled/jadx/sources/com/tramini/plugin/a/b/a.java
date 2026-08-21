package com.tramini.plugin.a.b;

import android.database.sqlite.SQLiteDatabase;

/* JADX INFO: loaded from: classes4.dex */
public abstract class a<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f7831a;

    public abstract long a();

    public abstract long b();

    protected abstract boolean c();

    private a(b bVar) {
        this.f7831a = bVar;
    }

    private SQLiteDatabase d() {
        return this.f7831a.a();
    }

    private SQLiteDatabase e() {
        return this.f7831a.b();
    }
}
