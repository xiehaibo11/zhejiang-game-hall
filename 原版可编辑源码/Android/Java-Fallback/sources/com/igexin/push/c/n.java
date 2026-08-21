package com.igexin.push.c;

class n implements java.util.Comparator<java.util.Map.Entry<java.lang.String, com.igexin.push.c.j>> {
    final com.igexin.push.c.m a;

    n(com.igexin.push.c.m r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    public int a(java.util.Map.Entry<java.lang.String, com.igexin.push.c.j> r3, java.util.Map.Entry<java.lang.String, com.igexin.push.c.j> r4) {
            r2 = this;
            java.lang.Object r3 = r3.getValue()
            com.igexin.push.c.j r3 = (com.igexin.push.c.j) r3
            long r0 = r3.e()
            java.lang.Object r3 = r4.getValue()
            com.igexin.push.c.j r3 = (com.igexin.push.c.j) r3
            long r3 = r3.e()
            long r0 = r0 - r3
            int r3 = (int) r0
            return r3
    }

    @Override
    public int compare(java.util.Map.Entry<java.lang.String, com.igexin.push.c.j> r1, java.util.Map.Entry<java.lang.String, com.igexin.push.c.j> r2) {
            r0 = this;
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            int r1 = r0.a(r1, r2)
            return r1
    }
}
