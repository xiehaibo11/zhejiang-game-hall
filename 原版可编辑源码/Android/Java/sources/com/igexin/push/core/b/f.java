package com.igexin.push.core.b;

import android.content.ContentValues;

class f extends com.igexin.push.b.d {
    final e a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    f(e eVar, ContentValues contentValues) {
        super(contentValues);
        this.a = eVar;
    }

    @Override
    public void a() {
        this.d.replace("ral", null, this.f);
    }
}
