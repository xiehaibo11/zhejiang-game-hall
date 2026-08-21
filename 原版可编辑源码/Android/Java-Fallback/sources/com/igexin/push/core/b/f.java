package com.igexin.push.core.b;

class f extends com.igexin.push.b.d {
    final com.igexin.push.core.b.e a;

    f(com.igexin.push.core.b.e r1, android.content.ContentValues r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void a() {
            r4 = this;
            android.database.sqlite.SQLiteDatabase r0 = r4.d
            android.content.ContentValues r1 = r4.f
            java.lang.String r2 = "ral"
            r3 = 0
            r0.replace(r2, r3, r1)
            return
    }
}
