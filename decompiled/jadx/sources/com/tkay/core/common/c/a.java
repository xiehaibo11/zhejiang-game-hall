package com.tkay.core.common.c;

import android.database.sqlite.SQLiteDatabase;

/* JADX INFO: loaded from: classes3.dex */
public class a<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected b f6095a;

    public a(b bVar) {
        this.f6095a = null;
        this.f6095a = bVar;
    }

    protected final synchronized SQLiteDatabase a() {
        return this.f6095a.a();
    }

    protected final synchronized SQLiteDatabase b() {
        return this.f6095a.b();
    }
}
