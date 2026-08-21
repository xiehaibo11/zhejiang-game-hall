package com.alipay.sdk.m.a0;

public final class d {
    public static final java.util.Map<java.lang.String, com.alipay.sdk.m.a0.d.a> a = null;

    public static class a {
        public java.lang.String a;
        public long b;
        public long c;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.alipay.sdk.m.a0.d.a = r0
            return
    }

    public static java.lang.String a(java.lang.String r8) {
            java.util.Map<java.lang.String, com.alipay.sdk.m.a0.d$a> r0 = com.alipay.sdk.m.a0.d.a
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.Object r0 = r0.get(r8)
            com.alipay.sdk.m.a0.d$a r0 = (com.alipay.sdk.m.a0.d.a) r0
            if (r0 != 0) goto Lf
            return r1
        Lf:
            long r2 = r0.b
            long r4 = r0.c
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r2
            int r2 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r2 >= 0) goto L1e
            r2 = 1
            goto L1f
        L1e:
            r2 = 0
        L1f:
            if (r2 == 0) goto L26
            java.lang.String r0 = r0.a
            if (r0 == 0) goto L26
            return r0
        L26:
            java.util.Map<java.lang.String, com.alipay.sdk.m.a0.d$a> r0 = com.alipay.sdk.m.a0.d.a
            r0.remove(r8)
            return r1
    }

    public static void a(java.lang.String r3, java.lang.String r4) {
            if (r4 != 0) goto L4
            java.lang.String r4 = ""
        L4:
            java.util.Map<java.lang.String, com.alipay.sdk.m.a0.d$a> r0 = com.alipay.sdk.m.a0.d.a
            java.lang.Object r0 = r0.get(r3)
            com.alipay.sdk.m.a0.d$a r0 = (com.alipay.sdk.m.a0.d.a) r0
            if (r0 != 0) goto L13
            com.alipay.sdk.m.a0.d$a r0 = new com.alipay.sdk.m.a0.d$a
            r0.<init>()
        L13:
            r0.a = r4
            r1 = 86400000(0x5265c00, double:4.2687272E-316)
            r0.c = r1
            long r1 = java.lang.System.currentTimeMillis()
            r0.b = r1
            java.util.Map<java.lang.String, com.alipay.sdk.m.a0.d$a> r4 = com.alipay.sdk.m.a0.d.a
            r4.put(r3, r0)
            return
    }
}
