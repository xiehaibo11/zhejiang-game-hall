package com.igexin.push.core.b;

import android.content.ContentValues;

class h extends com.igexin.push.b.d {
    final long a;
    final e b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    h(e eVar, ContentValues contentValues, long j) {
        super(contentValues);
        this.b = eVar;
        this.a = j;
    }

    @Override
    public void a() {
        this.d.update("ral", this.f, "id=?", new String[]{String.valueOf(this.a)});
    }
}
