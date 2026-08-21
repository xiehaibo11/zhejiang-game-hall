package com.meizu.cloud.pushsdk.c.e;

public class b extends com.meizu.cloud.pushsdk.c.c.j {
    private final com.meizu.cloud.pushsdk.c.c.j a;
    private com.meizu.cloud.pushsdk.c.g.c b;
    private com.meizu.cloud.pushsdk.c.e.d c;


    public b(com.meizu.cloud.pushsdk.c.c.j r1, com.meizu.cloud.pushsdk.c.d.a r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            if (r2 == 0) goto Le
            com.meizu.cloud.pushsdk.c.e.d r1 = new com.meizu.cloud.pushsdk.c.e.d
            r1.<init>(r2)
            r0.c = r1
        Le:
            return
    }

    static com.meizu.cloud.pushsdk.c.e.d a(com.meizu.cloud.pushsdk.c.e.b r0) {
            com.meizu.cloud.pushsdk.c.e.d r0 = r0.c
            return r0
    }

    private com.meizu.cloud.pushsdk.c.g.l a(com.meizu.cloud.pushsdk.c.g.l r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.e.b$1 r0 = new com.meizu.cloud.pushsdk.c.e.b$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public com.meizu.cloud.pushsdk.c.c.g a() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.j r0 = r1.a
            com.meizu.cloud.pushsdk.c.c.g r0 = r0.a()
            return r0
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.c.g.c r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.c r0 = r1.b
            if (r0 != 0) goto Le
            com.meizu.cloud.pushsdk.c.g.l r2 = r1.a(r2)
            com.meizu.cloud.pushsdk.c.g.c r2 = com.meizu.cloud.pushsdk.c.g.g.a(r2)
            r1.b = r2
        Le:
            com.meizu.cloud.pushsdk.c.c.j r2 = r1.a
            com.meizu.cloud.pushsdk.c.g.c r0 = r1.b
            r2.a(r0)
            com.meizu.cloud.pushsdk.c.g.c r2 = r1.b
            r2.flush()
            return
    }

    @Override
    public long b() {
            r2 = this;
            com.meizu.cloud.pushsdk.c.c.j r0 = r2.a
            long r0 = r0.b()
            return r0
    }
}
