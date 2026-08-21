package com.alipay.sdk.app;

public enum k extends java.lang.Enum<com.alipay.sdk.app.k> {
    public static final com.alipay.sdk.app.k a = null;
    public static final com.alipay.sdk.app.k b = null;
    public static final com.alipay.sdk.app.k c = null;
    public static final com.alipay.sdk.app.k d = null;
    public static final com.alipay.sdk.app.k e = null;
    public static final com.alipay.sdk.app.k f = null;
    public static final com.alipay.sdk.app.k g = null;
    private static final com.alipay.sdk.app.k[] j = null;
    private int h;
    private java.lang.String i;

    static {
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r1 = 0
            java.lang.String r2 = "SUCCEEDED"
            r3 = 9000(0x2328, float:1.2612E-41)
            java.lang.String r4 = "处理成功"
            r0.<init>(r2, r1, r3, r4)
            com.alipay.sdk.app.k.a = r0
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r2 = 1
            java.lang.String r3 = "FAILED"
            r4 = 4000(0xfa0, float:5.605E-42)
            java.lang.String r5 = "系统繁忙，请稍后再试"
            r0.<init>(r3, r2, r4, r5)
            com.alipay.sdk.app.k.b = r0
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r3 = 2
            java.lang.String r4 = "CANCELED"
            r5 = 6001(0x1771, float:8.409E-42)
            java.lang.String r6 = "用户取消"
            r0.<init>(r4, r3, r5, r6)
            com.alipay.sdk.app.k.c = r0
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r4 = 3
            java.lang.String r5 = "NETWORK_ERROR"
            r6 = 6002(0x1772, float:8.41E-42)
            java.lang.String r7 = "网络连接异常"
            r0.<init>(r5, r4, r6, r7)
            com.alipay.sdk.app.k.d = r0
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r5 = 4
            java.lang.String r6 = "PARAMS_ERROR"
            r7 = 4001(0xfa1, float:5.607E-42)
            java.lang.String r8 = "参数错误"
            r0.<init>(r6, r5, r7, r8)
            com.alipay.sdk.app.k.e = r0
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r6 = 5
            java.lang.String r7 = "DOUBLE_REQUEST"
            r8 = 5000(0x1388, float:7.006E-42)
            java.lang.String r9 = "重复请求"
            r0.<init>(r7, r6, r8, r9)
            com.alipay.sdk.app.k.f = r0
            com.alipay.sdk.app.k r0 = new com.alipay.sdk.app.k
            r7 = 6
            java.lang.String r8 = "PAY_WAITTING"
            r9 = 8000(0x1f40, float:1.121E-41)
            java.lang.String r10 = "支付结果确认中"
            r0.<init>(r8, r7, r9, r10)
            com.alipay.sdk.app.k.g = r0
            r0 = 7
            com.alipay.sdk.app.k[] r0 = new com.alipay.sdk.app.k[r0]
            com.alipay.sdk.app.k r8 = com.alipay.sdk.app.k.a
            r0[r1] = r8
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.b
            r0[r2] = r1
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.c
            r0[r3] = r1
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.d
            r0[r4] = r1
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.e
            r0[r5] = r1
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.f
            r0[r6] = r1
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.g
            r0[r7] = r1
            com.alipay.sdk.app.k.j = r0
            return
    }

    k(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.h = r3
            r0.i = r4
            return
    }

    public static com.alipay.sdk.app.k b(int r1) {
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
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.b
            return r1
        L1b:
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.d
            return r1
        L1e:
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.c
            return r1
        L21:
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.a
            return r1
        L24:
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.g
            return r1
        L27:
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.f
            return r1
        L2a:
            com.alipay.sdk.app.k r1 = com.alipay.sdk.app.k.e
            return r1
    }

    public static com.alipay.sdk.app.k valueOf(java.lang.String r1) {
            java.lang.Class<com.alipay.sdk.app.k> r0 = com.alipay.sdk.app.k.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alipay.sdk.app.k r1 = (com.alipay.sdk.app.k) r1
            return r1
    }

    public static com.alipay.sdk.app.k[] values() {
            com.alipay.sdk.app.k[] r0 = com.alipay.sdk.app.k.j
            java.lang.Object r0 = r0.clone()
            com.alipay.sdk.app.k[] r0 = (com.alipay.sdk.app.k[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }
}
