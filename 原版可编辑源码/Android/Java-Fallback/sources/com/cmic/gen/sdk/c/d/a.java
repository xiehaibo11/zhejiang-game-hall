package com.cmic.gen.sdk.c.d;

public class a {
    private int a;
    private java.lang.String b;

    private a(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static com.cmic.gen.sdk.c.d.a a(int r2) {
            java.lang.String r0 = "网络异常"
            switch(r2) {
                case 102102: goto L42;
                case 102223: goto L37;
                case 102508: goto L2c;
                case 200025: goto L21;
                case 200039: goto L16;
                case 200050: goto Lb;
                default: goto L5;
            }
        L5:
            com.cmic.gen.sdk.c.d.a r1 = new com.cmic.gen.sdk.c.d.a
            r1.<init>(r2, r0)
            return r1
        Lb:
            com.cmic.gen.sdk.c.d.a r2 = new com.cmic.gen.sdk.c.d.a
            r0 = 200050(0x30d72, float:2.8033E-40)
            java.lang.String r1 = "EOF异常"
            r2.<init>(r0, r1)
            return r2
        L16:
            com.cmic.gen.sdk.c.d.a r2 = new com.cmic.gen.sdk.c.d.a
            r0 = 200039(0x30d67, float:2.80314E-40)
            java.lang.String r1 = "电信取号接口失败"
            r2.<init>(r0, r1)
            return r2
        L21:
            com.cmic.gen.sdk.c.d.a r2 = new com.cmic.gen.sdk.c.d.a
            r0 = 200025(0x30d59, float:2.80295E-40)
            java.lang.String r1 = "登录超时"
            r2.<init>(r0, r1)
            return r2
        L2c:
            com.cmic.gen.sdk.c.d.a r2 = new com.cmic.gen.sdk.c.d.a
            r0 = 102508(0x1906c, float:1.43644E-40)
            java.lang.String r1 = "数据网络切换失败"
            r2.<init>(r0, r1)
            return r2
        L37:
            com.cmic.gen.sdk.c.d.a r2 = new com.cmic.gen.sdk.c.d.a
            r0 = 102223(0x18f4f, float:1.43245E-40)
            java.lang.String r1 = "数据解析异常"
            r2.<init>(r0, r1)
            return r2
        L42:
            com.cmic.gen.sdk.c.d.a r2 = new com.cmic.gen.sdk.c.d.a
            r1 = 102102(0x18ed6, float:1.43075E-40)
            r2.<init>(r1, r0)
            return r2
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }
}
