package com.vivo.push.b;

public final class t extends com.vivo.push.b.s {
    private java.util.ArrayList<java.lang.String> a;
    private java.util.ArrayList<java.lang.String> b;

    public t(int r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            r0.b = r1
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            java.util.ArrayList<java.lang.String> r0 = r2.a
            java.lang.String r1 = "content"
            r3.a(r1, r0)
            java.util.ArrayList<java.lang.String> r0 = r2.b
            java.lang.String r1 = "error_msg"
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
            java.lang.String r0 = "content"
            java.util.ArrayList r0 = r2.c(r0)
            r1.a = r0
            java.lang.String r0 = "error_msg"
            java.util.ArrayList r2 = r2.c(r0)
            r1.b = r2
            return
    }

    public final java.util.List<java.lang.String> e() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.b
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnSetTagsCommand"
            return r0
    }
}
