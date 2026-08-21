package com.igexin.push.core;

import android.content.ContentValues;

/* JADX INFO: loaded from: classes2.dex */
class p implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ContentValues f2581a;
    final /* synthetic */ n b;

    p(n nVar, ContentValues contentValues) {
        this.b = nVar;
        this.f2581a = contentValues;
    }

    @Override // java.lang.Runnable
    public void run() {
        c.a().k().a("message", this.f2581a);
    }
}
