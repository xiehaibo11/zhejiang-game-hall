package com.alipay.sdk.m.r;

public enum a extends java.lang.Enum<com.alipay.sdk.m.r.a> {
    public static final com.alipay.sdk.m.r.a b = null;
    public static final com.alipay.sdk.m.r.a c = null;
    public static final com.alipay.sdk.m.r.a d = null;
    public static final com.alipay.sdk.m.r.a e = null;
    public static final com.alipay.sdk.m.r.a f = null;
    public static final com.alipay.sdk.m.r.a g = null;
    public static final com.alipay.sdk.m.r.a[] h = null;
    public java.lang.String a;

    static {
            com.alipay.sdk.m.r.a r0 = new com.alipay.sdk.m.r.a
            r1 = 0
            java.lang.String r2 = "None"
            java.lang.String r3 = "none"
            r0.<init>(r2, r1, r3)
            com.alipay.sdk.m.r.a.b = r0
            com.alipay.sdk.m.r.a r0 = new com.alipay.sdk.m.r.a
            r2 = 1
            java.lang.String r3 = "WapPay"
            java.lang.String r4 = "js://wappay"
            r0.<init>(r3, r2, r4)
            com.alipay.sdk.m.r.a.c = r0
            com.alipay.sdk.m.r.a r0 = new com.alipay.sdk.m.r.a
            r3 = 2
            java.lang.String r4 = "Update"
            java.lang.String r5 = "js://update"
            r0.<init>(r4, r3, r5)
            com.alipay.sdk.m.r.a.d = r0
            com.alipay.sdk.m.r.a r0 = new com.alipay.sdk.m.r.a
            r4 = 3
            java.lang.String r5 = "OpenWeb"
            java.lang.String r6 = "loc:openweb"
            r0.<init>(r5, r4, r6)
            com.alipay.sdk.m.r.a.e = r0
            com.alipay.sdk.m.r.a r0 = new com.alipay.sdk.m.r.a
            r5 = 4
            java.lang.String r6 = "SetResult"
            java.lang.String r7 = "loc:setResult"
            r0.<init>(r6, r5, r7)
            com.alipay.sdk.m.r.a.f = r0
            com.alipay.sdk.m.r.a r0 = new com.alipay.sdk.m.r.a
            r6 = 5
            java.lang.String r7 = "Exit"
            java.lang.String r8 = "loc:exit"
            r0.<init>(r7, r6, r8)
            com.alipay.sdk.m.r.a.g = r0
            r7 = 6
            com.alipay.sdk.m.r.a[] r7 = new com.alipay.sdk.m.r.a[r7]
            com.alipay.sdk.m.r.a r8 = com.alipay.sdk.m.r.a.b
            r7[r1] = r8
            com.alipay.sdk.m.r.a r1 = com.alipay.sdk.m.r.a.c
            r7[r2] = r1
            com.alipay.sdk.m.r.a r1 = com.alipay.sdk.m.r.a.d
            r7[r3] = r1
            com.alipay.sdk.m.r.a r1 = com.alipay.sdk.m.r.a.e
            r7[r4] = r1
            com.alipay.sdk.m.r.a r1 = com.alipay.sdk.m.r.a.f
            r7[r5] = r1
            r7[r6] = r0
            com.alipay.sdk.m.r.a.h = r7
            return
    }

    a(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.alipay.sdk.m.r.a a(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L9
            com.alipay.sdk.m.r.a r6 = com.alipay.sdk.m.r.a.b
            return r6
        L9:
            com.alipay.sdk.m.r.a r0 = com.alipay.sdk.m.r.a.b
            com.alipay.sdk.m.r.a[] r1 = values()
            int r2 = r1.length
            r3 = 0
        L11:
            if (r3 >= r2) goto L22
            r4 = r1[r3]
            java.lang.String r5 = r4.a
            boolean r5 = r6.startsWith(r5)
            if (r5 == 0) goto L1f
            r0 = r4
            goto L22
        L1f:
            int r3 = r3 + 1
            goto L11
        L22:
            return r0
    }

    public static com.alipay.sdk.m.r.a valueOf(java.lang.String r1) {
            java.lang.Class<com.alipay.sdk.m.r.a> r0 = com.alipay.sdk.m.r.a.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alipay.sdk.m.r.a r1 = (com.alipay.sdk.m.r.a) r1
            return r1
    }

    public static com.alipay.sdk.m.r.a[] values() {
            com.alipay.sdk.m.r.a[] r0 = com.alipay.sdk.m.r.a.h
            java.lang.Object r0 = r0.clone()
            com.alipay.sdk.m.r.a[] r0 = (com.alipay.sdk.m.r.a[]) r0
            return r0
    }
}
