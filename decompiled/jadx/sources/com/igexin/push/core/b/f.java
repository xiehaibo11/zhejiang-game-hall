package com.igexin.push.core.b;

import android.content.ContentValues;

/* JADX INFO: loaded from: classes2.dex */
class f extends com.igexin.push.b.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ e f2529a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    f(e eVar, ContentValues contentValues) {
        super(contentValues);
        this.f2529a = eVar;
    }

    @Override // com.igexin.push.b.d
    public void a() {
        this.d.replace("ral", null, this.f);
    }
}
