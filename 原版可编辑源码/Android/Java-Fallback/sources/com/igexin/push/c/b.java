package com.igexin.push.c;

class b implements java.util.Comparator<com.igexin.push.c.j> {
    final com.igexin.push.c.a a;

    b(com.igexin.push.c.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    public int a(com.igexin.push.c.j r3, com.igexin.push.c.j r4) {
            r2 = this;
            long r0 = r3.e()
            long r3 = r4.e()
            long r0 = r0 - r3
            int r3 = (int) r0
            return r3
    }

    @Override
    public int compare(com.igexin.push.c.j r1, com.igexin.push.c.j r2) {
            r0 = this;
            com.igexin.push.c.j r1 = (com.igexin.push.c.j) r1
            com.igexin.push.c.j r2 = (com.igexin.push.c.j) r2
            int r1 = r0.a(r1, r2)
            return r1
    }
}
