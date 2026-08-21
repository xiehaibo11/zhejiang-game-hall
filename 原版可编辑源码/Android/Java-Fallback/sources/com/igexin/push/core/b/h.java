package com.igexin.push.core.b;

class h extends com.igexin.push.b.d {
    final long a;
    final com.igexin.push.core.b.e b;

    h(com.igexin.push.core.b.e r1, android.content.ContentValues r2, long r3) {
            r0 = this;
            r0.b = r1
            r0.a = r3
            r0.<init>(r2)
            return
    }

    @Override
    public void a() {
            r5 = this;
            android.database.sqlite.SQLiteDatabase r0 = r5.d
            android.content.ContentValues r1 = r5.f
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            long r3 = r5.a
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "ral"
            java.lang.String r4 = "id=?"
            r0.update(r3, r1, r4, r2)
            return
    }
}
