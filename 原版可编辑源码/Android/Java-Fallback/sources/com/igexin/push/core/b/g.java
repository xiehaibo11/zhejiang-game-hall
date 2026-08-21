package com.igexin.push.core.b;

class g extends com.igexin.push.b.d {
    final long a;
    final com.igexin.push.core.b.e b;

    g(com.igexin.push.core.b.e r1, android.content.ContentValues r2, long r3) {
            r0 = this;
            r0.b = r1
            r0.a = r3
            r0.<init>(r2)
            return
    }

    @Override
    public void a() {
            r4 = this;
            android.database.sqlite.SQLiteDatabase r0 = r4.d
            r1 = 1
            java.lang.String[] r1 = new java.lang.String[r1]
            long r2 = r4.a
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "ral"
            java.lang.String r3 = "id=?"
            r0.delete(r2, r3, r1)
            return
    }
}
