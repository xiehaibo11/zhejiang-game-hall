package com.loc;

public abstract class co {
    com.loc.co c;

    public co() {
            r0 = this;
            r0.<init>()
            return
    }

    public co(com.loc.co r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            return
    }

    public void a(int r2) {
            r1 = this;
            com.loc.co r0 = r1.c
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void a(boolean r2) {
            r1 = this;
            com.loc.co r0 = r1.c
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    protected abstract boolean a();

    public int b() {
            r2 = this;
            com.loc.co r0 = r2.c
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 == 0) goto Lc
            int r0 = r0.b()
            goto Lf
        Lc:
            r0 = 2147483647(0x7fffffff, float:NaN)
        Lf:
            int r0 = java.lang.Math.min(r1, r0)
            return r0
    }

    public final boolean c() {
            r1 = this;
            com.loc.co r0 = r1.c
            if (r0 == 0) goto L9
            boolean r0 = r0.c()
            goto La
        L9:
            r0 = 1
        La:
            if (r0 != 0) goto Le
            r0 = 0
            return r0
        Le:
            boolean r0 = r1.a()
            return r0
    }
}
