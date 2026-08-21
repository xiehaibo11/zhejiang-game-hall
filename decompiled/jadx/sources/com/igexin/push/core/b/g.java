package com.igexin.push.core.b;

import android.content.ContentValues;

/* JADX INFO: loaded from: classes2.dex */
class g extends com.igexin.push.b.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ long f2530a;
    final /* synthetic */ e b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    g(e eVar, ContentValues contentValues, long j) {
        super(contentValues);
        this.b = eVar;
        this.f2530a = j;
    }

    @Override // com.igexin.push.b.d
    public void a() {
        this.d.delete("ral", "id=?", new String[]{String.valueOf(this.f2530a)});
    }
}
