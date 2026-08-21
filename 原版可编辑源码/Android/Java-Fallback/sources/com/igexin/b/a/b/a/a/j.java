package com.igexin.b.a.b.a.a;

class j implements java.util.Comparator<com.igexin.b.a.b.a.a.m> {
    final com.igexin.b.a.b.a.a.f a;

    j(com.igexin.b.a.b.a.a.f r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    public int a(com.igexin.b.a.b.a.a.m r9, com.igexin.b.a.b.a.a.m r10) {
            r8 = this;
            r0 = 1
            if (r9 != 0) goto L4
            return r0
        L4:
            r1 = -1
            if (r10 != 0) goto L8
            return r1
        L8:
            int r2 = r9.y
            long r2 = (long) r2
            long r4 = r9.w
            long r2 = r2 + r4
            int r4 = r10.y
            long r4 = (long) r4
            long r6 = r10.w
            long r4 = r4 + r6
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L19
            goto L2c
        L19:
            int r0 = r9.y
            long r2 = (long) r0
            long r4 = r9.w
            long r2 = r2 + r4
            int r9 = r10.y
            long r4 = (long) r9
            long r9 = r10.w
            long r4 = r4 + r9
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 >= 0) goto L2b
            r0 = r1
            goto L2c
        L2b:
            r0 = 0
        L2c:
            return r0
    }

    @Override
    public int compare(com.igexin.b.a.b.a.a.m r1, com.igexin.b.a.b.a.a.m r2) {
            r0 = this;
            com.igexin.b.a.b.a.a.m r1 = (com.igexin.b.a.b.a.a.m) r1
            com.igexin.b.a.b.a.a.m r2 = (com.igexin.b.a.b.a.a.m) r2
            int r1 = r0.a(r1, r2)
            return r1
    }
}
