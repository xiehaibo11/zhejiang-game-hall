package com.cmic.gen.sdk.c.a;

public class c implements com.cmic.gen.sdk.c.a.b {
    private com.cmic.gen.sdk.c.a.b a;
    private com.cmic.gen.sdk.c.d.c b;
    private final com.cmic.gen.sdk.c.b c;


    public c() {
            r1 = this;
            r1.<init>()
            com.cmic.gen.sdk.c.b r0 = new com.cmic.gen.sdk.c.b
            r0.<init>()
            r1.c = r0
            return
    }

    static com.cmic.gen.sdk.c.b a(com.cmic.gen.sdk.c.a.c r0) {
            com.cmic.gen.sdk.c.b r0 = r0.c
            return r0
    }

    public void a(com.cmic.gen.sdk.c.a.b r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void a(com.cmic.gen.sdk.c.c.c r1, com.cmic.gen.sdk.c.d.c r2, com.cmic.gen.sdk.a r3) {
            r0 = this;
            r0.b(r1, r2, r3)
            return
    }

    public void b(com.cmic.gen.sdk.c.c.c r2, com.cmic.gen.sdk.c.d.c r3, com.cmic.gen.sdk.a r4) {
            r1 = this;
            com.cmic.gen.sdk.c.a.b r0 = r1.a
            if (r0 == 0) goto L23
            com.cmic.gen.sdk.c.a.c$1 r0 = new com.cmic.gen.sdk.c.a.c$1
            r0.<init>(r1, r2, r4, r3)
            r1.b = r0
            boolean r0 = r2.g()
            if (r0 == 0) goto L19
            com.cmic.gen.sdk.c.a.b r3 = r1.a
            com.cmic.gen.sdk.c.d.c r0 = r1.b
            r3.a(r2, r0, r4)
            goto L23
        L19:
            r2 = 200025(0x30d59, float:2.80295E-40)
            com.cmic.gen.sdk.c.d.a r2 = com.cmic.gen.sdk.c.d.a.a(r2)
            r3.a(r2)
        L23:
            return
    }
}
