package com.igexin.push.core.b;

class z extends com.igexin.push.b.d {
    final com.igexin.push.core.b.i a;

    z(com.igexin.push.core.b.i r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a() {
            r4 = this;
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            android.database.sqlite.SQLiteDatabase r1 = r4.d
            long r2 = com.igexin.push.core.d.t
            java.lang.String r2 = java.lang.String.valueOf(r2)
            byte[] r2 = r2.getBytes()
            byte[] r2 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r2)
            r3 = 1
            com.igexin.push.core.b.i.a(r0, r1, r3, r2)
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            android.database.sqlite.SQLiteDatabase r1 = r4.d
            com.igexin.push.core.b.i r2 = r4.a
            java.lang.String r3 = com.igexin.push.core.d.u
            byte[] r2 = com.igexin.push.core.b.i.a(r2, r3)
            r3 = 20
            com.igexin.push.core.b.i.a(r0, r1, r3, r2)
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r2 = com.igexin.push.core.d.u
            r0.b(r1, r2)
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            long r2 = com.igexin.push.core.d.t
            r0.a(r1, r2)
            return
    }
}
