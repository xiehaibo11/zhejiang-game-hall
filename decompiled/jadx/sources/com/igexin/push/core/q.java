package com.igexin.push.core;

import android.content.ContentValues;

/* JADX INFO: loaded from: classes2.dex */
class q implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ContentValues f2582a;
    final /* synthetic */ String b;
    final /* synthetic */ n c;

    q(n nVar, ContentValues contentValues, String str) {
        this.c = nVar;
        this.f2582a = contentValues;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        c.a().k().a("message", this.f2582a, new String[]{"taskid"}, new String[]{this.b});
    }
}
