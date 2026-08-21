package com.huawei.updatesdk.a.a.d.h;

public class b extends com.huawei.updatesdk.a.b.c.c.b {
    private java.lang.String abis_;
    private java.lang.String deviceFeatures_;
    private int dpi_;
    private java.lang.String preferLan_;

    static class a {
    }

    public static class b {
        private final android.content.Context a;
        private boolean b;
        private java.util.Set<java.lang.String> c;
        private java.lang.String[] d;
        private boolean e;

        public b(android.content.Context r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        private java.lang.String b() {
                r4 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                android.content.Context r1 = r4.a
                java.util.List r1 = com.huawei.updatesdk.a.a.d.h.c.d(r1)
                r0.<init>(r1)
                java.util.Set<java.lang.String> r1 = r4.c
                if (r1 == 0) goto L29
                java.util.Iterator r1 = r1.iterator()
            L13:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L29
                java.lang.Object r2 = r1.next()
                java.lang.String r2 = (java.lang.String) r2
                boolean r3 = r0.contains(r2)
                if (r3 != 0) goto L13
                r0.add(r2)
                goto L13
            L29:
                boolean r1 = r4.e
                java.lang.String r2 = ","
                if (r1 == 0) goto L3a
                java.lang.String[] r1 = r4.d
                java.util.List r0 = com.huawei.updatesdk.a.a.d.h.c.a(r0, r1)
                java.lang.String r0 = com.huawei.updatesdk.a.a.d.e.a(r0, r2)
                return r0
            L3a:
                java.lang.String r0 = com.huawei.updatesdk.a.a.d.e.a(r0, r2)
                return r0
        }

        public com.huawei.updatesdk.a.a.d.h.b.b a(boolean r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.huawei.updatesdk.a.a.d.h.b a() {
                r3 = this;
                com.huawei.updatesdk.a.a.d.h.b r0 = new com.huawei.updatesdk.a.a.d.h.b
                r1 = 0
                r0.<init>(r1)
                java.lang.String[] r1 = com.huawei.updatesdk.a.a.d.h.c.f()
                java.lang.String r2 = ","
                java.lang.String r1 = com.huawei.updatesdk.a.a.d.e.a(r1, r2)
                com.huawei.updatesdk.a.a.d.h.b.a(r0, r1)
                android.content.Context r1 = r3.a
                java.lang.String r1 = com.huawei.updatesdk.a.a.d.h.c.f(r1)
                int r1 = java.lang.Integer.parseInt(r1)
                com.huawei.updatesdk.a.a.d.h.b.a(r0, r1)
                java.lang.String r1 = r3.b()
                com.huawei.updatesdk.a.a.d.h.b.b(r0, r1)
                boolean r1 = r3.b
                if (r1 == 0) goto L34
                android.content.Context r1 = r3.a
                java.lang.String r1 = com.huawei.updatesdk.a.a.d.h.c.a(r1)
                com.huawei.updatesdk.a.a.d.h.b.c(r0, r1)
            L34:
                return r0
        }
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    b(com.huawei.updatesdk.a.a.d.h.b.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static int a(com.huawei.updatesdk.a.a.d.h.b r0, int r1) {
            r0.dpi_ = r1
            return r1
    }

    static java.lang.String a(com.huawei.updatesdk.a.a.d.h.b r0, java.lang.String r1) {
            r0.abis_ = r1
            return r1
    }

    static java.lang.String b(com.huawei.updatesdk.a.a.d.h.b r0, java.lang.String r1) {
            r0.preferLan_ = r1
            return r1
    }

    static java.lang.String c(com.huawei.updatesdk.a.a.d.h.b r0, java.lang.String r1) {
            r0.deviceFeatures_ = r1
            return r1
    }
}
