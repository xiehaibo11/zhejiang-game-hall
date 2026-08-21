package com.meizu.cloud.pushsdk.c.g;

public abstract class f implements com.meizu.cloud.pushsdk.c.g.l {
    private final com.meizu.cloud.pushsdk.c.g.l a;

    public f(com.meizu.cloud.pushsdk.c.g.l r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.a = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "delegate == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.c.g.b r2, long r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.l r0 = r1.a
            r0.a(r2, r3)
            return
    }

    @Override
    public void close() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.l r0 = r1.a
            r0.close()
            return
    }

    @Override
    public void flush() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.l r0 = r1.a
            r0.flush()
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = "("
            r0.append(r1)
            com.meizu.cloud.pushsdk.c.g.l r1 = r2.a
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
