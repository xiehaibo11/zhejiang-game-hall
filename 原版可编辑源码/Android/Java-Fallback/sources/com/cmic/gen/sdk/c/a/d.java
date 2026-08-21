package com.cmic.gen.sdk.c.a;

public class d implements com.cmic.gen.sdk.c.a.b {
    private com.cmic.gen.sdk.c.a.b a;



    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public void a(com.cmic.gen.sdk.c.a.b r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void a(com.cmic.gen.sdk.c.c.c r9, com.cmic.gen.sdk.c.d.c r10, com.cmic.gen.sdk.a r11) {
            r8 = this;
            boolean r0 = r9.b()
            if (r0 != 0) goto La
            r8.b(r9, r10, r11)
            return
        La:
            r0 = 0
            com.cmic.gen.sdk.e.r r0 = com.cmic.gen.sdk.e.r.a(r0)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L24
            com.cmic.gen.sdk.c.a.d$1 r7 = new com.cmic.gen.sdk.c.a.d$1
            r1 = r7
            r2 = r8
            r3 = r11
            r4 = r9
            r5 = r10
            r6 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            goto L35
        L24:
            java.lang.String r9 = "WifiChangeInterceptor"
            java.lang.String r11 = "低版本不在支持wifi切换"
            com.cmic.gen.sdk.e.c.a(r9, r11)
            r9 = 102508(0x1906c, float:1.43644E-40)
            com.cmic.gen.sdk.c.d.a r9 = com.cmic.gen.sdk.c.d.a.a(r9)
            r10.a(r9)
        L35:
            return
    }

    public void b(com.cmic.gen.sdk.c.c.c r3, com.cmic.gen.sdk.c.d.c r4, com.cmic.gen.sdk.a r5) {
            r2 = this;
            com.cmic.gen.sdk.c.a.b r0 = r2.a
            if (r0 == 0) goto Lc
            com.cmic.gen.sdk.c.a.d$2 r1 = new com.cmic.gen.sdk.c.a.d$2
            r1.<init>(r2, r4)
            r0.a(r3, r1, r5)
        Lc:
            return
    }
}
