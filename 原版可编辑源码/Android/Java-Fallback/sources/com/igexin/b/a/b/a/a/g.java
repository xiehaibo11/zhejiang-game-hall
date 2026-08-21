package com.igexin.b.a.b.a.a;

class g implements com.igexin.b.a.b.a.a.a.d {
    final com.igexin.b.a.b.a.a.f a;

    g(com.igexin.b.a.b.a.a.f r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a(com.igexin.b.a.b.e r2) {
            r1 = this;
            com.igexin.b.a.b.a.a.f r2 = r1.a
            android.os.Handler r2 = com.igexin.b.a.b.a.a.f.a(r2)
            com.igexin.b.a.b.a.a.q r0 = com.igexin.b.a.b.a.a.q.f
            int r0 = r0.ordinal()
            r2.sendEmptyMessage(r0)
            return
    }

    @Override
    public void a(java.lang.Exception r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "GS-M|c ex = "
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            com.igexin.b.a.b.a.a.f r3 = r2.a
            com.igexin.b.a.b.a.a.f.b(r3)
            return
    }

    @Override
    public void a(java.lang.String r2) {
            r1 = this;
            com.igexin.b.a.b.a.a.f r2 = r1.a
            android.os.Handler r2 = com.igexin.b.a.b.a.a.f.a(r2)
            com.igexin.b.a.b.a.a.q r0 = com.igexin.b.a.b.a.a.q.e
            int r0 = r0.ordinal()
            r2.sendEmptyMessage(r0)
            return
    }

    @Override
    public void a(java.net.Socket r2) {
            r1 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r0.obj = r2
            com.igexin.b.a.b.a.a.q r2 = com.igexin.b.a.b.a.a.q.c
            int r2 = r2.ordinal()
            r0.what = r2
            com.igexin.b.a.b.a.a.f r2 = r1.a
            android.os.Handler r2 = com.igexin.b.a.b.a.a.f.a(r2)
            r2.sendMessage(r0)
            return
    }
}
