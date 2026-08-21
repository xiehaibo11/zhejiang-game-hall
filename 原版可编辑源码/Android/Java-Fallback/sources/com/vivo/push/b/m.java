package com.vivo.push.b;

public final class m extends com.vivo.push.b.s {
    private java.util.ArrayList<java.lang.String> a;

    public m() {
            r1 = this;
            r0 = 8
            r1.<init>(r0)
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            java.util.ArrayList<java.lang.String> r0 = r2.a
            java.lang.String r1 = "tags_list"
            r3.a(r1, r0)
            return
    }

    public final java.util.ArrayList<java.lang.String> d() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r2) {
            r1 = this;
            super.d(r2)
            java.lang.String r0 = "tags_list"
            java.util.ArrayList r2 = r2.c(r0)
            r1.a = r2
            return
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnListTagCommand"
            return r0
    }
}
