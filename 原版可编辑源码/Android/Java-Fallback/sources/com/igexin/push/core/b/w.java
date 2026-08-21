package com.igexin.push.core.b;

class w extends com.igexin.push.b.d {
    final boolean a;
    final java.lang.String b;
    final com.igexin.push.core.b.i c;

    w(com.igexin.push.core.b.i r1, boolean r2, java.lang.String r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void a() {
            r5 = this;
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            android.database.sqlite.SQLiteDatabase r1 = r5.d
            boolean r2 = r5.a
            if (r2 == 0) goto Ld
            r2 = 50
            goto Lf
        Ld:
            r2 = 49
        Lf:
            com.igexin.push.core.b.i r3 = r5.c
            java.lang.String r4 = r5.b
            byte[] r3 = com.igexin.push.core.b.i.a(r3, r4)
            com.igexin.push.core.b.i.a(r0, r1, r2, r3)
            return
    }
}
