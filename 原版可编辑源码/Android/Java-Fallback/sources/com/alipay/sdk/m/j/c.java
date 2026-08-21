package com.alipay.sdk.m.j;

public enum c extends java.lang.Enum<com.alipay.sdk.m.j.c> {
    public static final com.alipay.sdk.m.j.c c = null;
    public static final com.alipay.sdk.m.j.c d = null;
    public static final com.alipay.sdk.m.j.c e = null;
    public static final com.alipay.sdk.m.j.c f = null;
    public static final com.alipay.sdk.m.j.c g = null;
    public static final com.alipay.sdk.m.j.c h = null;
    public static final com.alipay.sdk.m.j.c i = null;
    public static final com.alipay.sdk.m.j.c j = null;
    public static final com.alipay.sdk.m.j.c[] k = null;
    public int a;
    public java.lang.String b;

    static {
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r1 = 0
            java.lang.String r2 = "SUCCEEDED"
            r3 = 9000(0x2328, float:1.2612E-41)
            java.lang.String r4 = "处理成功"
            r0.<init>(r2, r1, r3, r4)
            com.alipay.sdk.m.j.c.c = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r2 = 1
            java.lang.String r3 = "FAILED"
            r4 = 4000(0xfa0, float:5.605E-42)
            java.lang.String r5 = "系统繁忙，请稍后再试"
            r0.<init>(r3, r2, r4, r5)
            com.alipay.sdk.m.j.c.d = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r3 = 2
            java.lang.String r4 = "CANCELED"
            r5 = 6001(0x1771, float:8.409E-42)
            java.lang.String r6 = "用户取消"
            r0.<init>(r4, r3, r5, r6)
            com.alipay.sdk.m.j.c.e = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r4 = 3
            java.lang.String r5 = "NETWORK_ERROR"
            r6 = 6002(0x1772, float:8.41E-42)
            java.lang.String r7 = "网络连接异常"
            r0.<init>(r5, r4, r6, r7)
            com.alipay.sdk.m.j.c.f = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r5 = 4
            java.lang.String r6 = "ACTIVITY_NOT_START_EXIT"
            r7 = 6007(0x1777, float:8.418E-42)
            java.lang.String r8 = "支付未完成"
            r0.<init>(r6, r5, r7, r8)
            com.alipay.sdk.m.j.c.g = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r6 = 5
            java.lang.String r7 = "PARAMS_ERROR"
            r8 = 4001(0xfa1, float:5.607E-42)
            java.lang.String r9 = "参数错误"
            r0.<init>(r7, r6, r8, r9)
            com.alipay.sdk.m.j.c.h = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r7 = 6
            java.lang.String r8 = "DOUBLE_REQUEST"
            r9 = 5000(0x1388, float:7.006E-42)
            java.lang.String r10 = "重复请求"
            r0.<init>(r8, r7, r9, r10)
            com.alipay.sdk.m.j.c.i = r0
            com.alipay.sdk.m.j.c r0 = new com.alipay.sdk.m.j.c
            r8 = 7
            java.lang.String r9 = "PAY_WAITTING"
            r10 = 8000(0x1f40, float:1.121E-41)
            java.lang.String r11 = "支付结果确认中"
            r0.<init>(r9, r8, r10, r11)
            com.alipay.sdk.m.j.c.j = r0
            r9 = 8
            com.alipay.sdk.m.j.c[] r9 = new com.alipay.sdk.m.j.c[r9]
            com.alipay.sdk.m.j.c r10 = com.alipay.sdk.m.j.c.c
            r9[r1] = r10
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.d
            r9[r2] = r1
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.e
            r9[r3] = r1
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.f
            r9[r4] = r1
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.g
            r9[r5] = r1
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.h
            r9[r6] = r1
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.i
            r9[r7] = r1
            r9[r8] = r0
            com.alipay.sdk.m.j.c.k = r9
            return
    }

    c(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            r0.b = r4
            return
    }

    public static com.alipay.sdk.m.j.c b(int r1) {
            r0 = 4001(0xfa1, float:5.607E-42)
            if (r1 == r0) goto L2a
            r0 = 5000(0x1388, float:7.006E-42)
            if (r1 == r0) goto L27
            r0 = 8000(0x1f40, float:1.121E-41)
            if (r1 == r0) goto L24
            r0 = 9000(0x2328, float:1.2612E-41)
            if (r1 == r0) goto L21
            r0 = 6001(0x1771, float:8.409E-42)
            if (r1 == r0) goto L1e
            r0 = 6002(0x1772, float:8.41E-42)
            if (r1 == r0) goto L1b
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.d
            return r1
        L1b:
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.f
            return r1
        L1e:
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.e
            return r1
        L21:
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.c
            return r1
        L24:
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.j
            return r1
        L27:
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.i
            return r1
        L2a:
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.h
            return r1
    }

    public static com.alipay.sdk.m.j.c valueOf(java.lang.String r1) {
            java.lang.Class<com.alipay.sdk.m.j.c> r0 = com.alipay.sdk.m.j.c.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alipay.sdk.m.j.c r1 = (com.alipay.sdk.m.j.c) r1
            return r1
    }

    public static com.alipay.sdk.m.j.c[] values() {
            com.alipay.sdk.m.j.c[] r0 = com.alipay.sdk.m.j.c.k
            java.lang.Object r0 = r0.clone()
            com.alipay.sdk.m.j.c[] r0 = (com.alipay.sdk.m.j.c[]) r0
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
