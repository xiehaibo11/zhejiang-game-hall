package com.huawei.hms.framework.network.grs.c;

public class b {
    protected com.huawei.hms.framework.network.grs.c.f a;
    private java.lang.String b;
    private com.huawei.hms.framework.network.grs.c.a c;
    private int d;
    private android.content.Context e;
    private java.lang.String f;
    private com.huawei.hms.framework.network.grs.GrsBaseInfo g;
    private com.huawei.hms.framework.network.grs.a.c h;

    private enum a extends java.lang.Enum<com.huawei.hms.framework.network.grs.c.b.a> {
        public static final com.huawei.hms.framework.network.grs.c.b.a a = null;
        public static final com.huawei.hms.framework.network.grs.c.b.a b = null;
        public static final com.huawei.hms.framework.network.grs.c.b.a c = null;
        private static final com.huawei.hms.framework.network.grs.c.b.a[] d = null;

        static {
                com.huawei.hms.framework.network.grs.c.b$a r0 = new com.huawei.hms.framework.network.grs.c.b$a
                r1 = 0
                java.lang.String r2 = "GRSPOST"
                r0.<init>(r2, r1)
                com.huawei.hms.framework.network.grs.c.b.a.a = r0
                com.huawei.hms.framework.network.grs.c.b$a r0 = new com.huawei.hms.framework.network.grs.c.b$a
                r2 = 1
                java.lang.String r3 = "GRSGET"
                r0.<init>(r3, r2)
                com.huawei.hms.framework.network.grs.c.b.a.b = r0
                com.huawei.hms.framework.network.grs.c.b$a r0 = new com.huawei.hms.framework.network.grs.c.b$a
                r3 = 2
                java.lang.String r4 = "GRSDEFAULT"
                r0.<init>(r4, r3)
                com.huawei.hms.framework.network.grs.c.b.a.c = r0
                r4 = 3
                com.huawei.hms.framework.network.grs.c.b$a[] r4 = new com.huawei.hms.framework.network.grs.c.b.a[r4]
                com.huawei.hms.framework.network.grs.c.b$a r5 = com.huawei.hms.framework.network.grs.c.b.a.a
                r4[r1] = r5
                com.huawei.hms.framework.network.grs.c.b$a r1 = com.huawei.hms.framework.network.grs.c.b.a.b
                r4[r2] = r1
                r4[r3] = r0
                com.huawei.hms.framework.network.grs.c.b.a.d = r4
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.hms.framework.network.grs.c.b.a valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.hms.framework.network.grs.c.b$a> r0 = com.huawei.hms.framework.network.grs.c.b.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.hms.framework.network.grs.c.b$a r1 = (com.huawei.hms.framework.network.grs.c.b.a) r1
                return r1
        }

        public static com.huawei.hms.framework.network.grs.c.b.a[] values() {
                com.huawei.hms.framework.network.grs.c.b$a[] r0 = com.huawei.hms.framework.network.grs.c.b.a.d
                java.lang.Object r0 = r0.clone()
                com.huawei.hms.framework.network.grs.c.b$a[] r0 = (com.huawei.hms.framework.network.grs.c.b.a[]) r0
                return r0
        }
    }

    public b(java.lang.String r1, int r2, com.huawei.hms.framework.network.grs.c.a r3, android.content.Context r4, java.lang.String r5, com.huawei.hms.framework.network.grs.GrsBaseInfo r6, com.huawei.hms.framework.network.grs.a.c r7) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r3
            r0.d = r2
            r0.e = r4
            r0.f = r5
            r0.g = r6
            r0.h = r7
            return
    }

    private java.lang.String a(java.lang.String r1) {
            r0 = this;
            android.net.Uri r1 = android.net.Uri.parse(r1)
            java.lang.String r1 = r1.getPath()
            return r1
    }

    private com.huawei.hms.framework.network.grs.c.b.a h() {
            r2 = this;
            java.lang.String r0 = r2.b
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lb
            com.huawei.hms.framework.network.grs.c.b$a r0 = com.huawei.hms.framework.network.grs.c.b.a.c
            return r0
        Lb:
            java.lang.String r0 = r2.b
            java.lang.String r0 = r2.a(r0)
            java.lang.String r1 = "1.0"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L1c
            com.huawei.hms.framework.network.grs.c.b$a r0 = com.huawei.hms.framework.network.grs.c.b.a.b
            return r0
        L1c:
            java.lang.String r1 = "2.0"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L27
            com.huawei.hms.framework.network.grs.c.b$a r0 = com.huawei.hms.framework.network.grs.c.b.a.a
            return r0
        L27:
            com.huawei.hms.framework.network.grs.c.b$a r0 = com.huawei.hms.framework.network.grs.c.b.a.c
            return r0
    }

    public com.huawei.hms.framework.network.grs.c.a a() {
            r1 = this;
            com.huawei.hms.framework.network.grs.c.a r0 = r1.c
            return r0
    }

    public android.content.Context b() {
            r1 = this;
            android.content.Context r0 = r1.e
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public int d() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public com.huawei.hms.framework.network.grs.a.c f() {
            r1 = this;
            com.huawei.hms.framework.network.grs.a.c r0 = r1.h
            return r0
    }

    public java.util.concurrent.Callable<com.huawei.hms.framework.network.grs.c.f> g() {
            r17 = this;
            r0 = r17
            com.huawei.hms.framework.network.grs.c.b$a r1 = com.huawei.hms.framework.network.grs.c.b.a.c
            com.huawei.hms.framework.network.grs.c.b$a r2 = r17.h()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L10
            r1 = 0
            return r1
        L10:
            com.huawei.hms.framework.network.grs.c.b$a r1 = com.huawei.hms.framework.network.grs.c.b.a.b
            com.huawei.hms.framework.network.grs.c.b$a r2 = r17.h()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L2f
            com.huawei.hms.framework.network.grs.c.i r1 = new com.huawei.hms.framework.network.grs.c.i
            java.lang.String r3 = r0.b
            int r4 = r0.d
            com.huawei.hms.framework.network.grs.c.a r5 = r0.c
            android.content.Context r6 = r0.e
            java.lang.String r7 = r0.f
            com.huawei.hms.framework.network.grs.GrsBaseInfo r8 = r0.g
            r2 = r1
            r2.<init>(r3, r4, r5, r6, r7, r8)
            return r1
        L2f:
            com.huawei.hms.framework.network.grs.c.j r1 = new com.huawei.hms.framework.network.grs.c.j
            java.lang.String r10 = r0.b
            int r11 = r0.d
            com.huawei.hms.framework.network.grs.c.a r12 = r0.c
            android.content.Context r13 = r0.e
            java.lang.String r14 = r0.f
            com.huawei.hms.framework.network.grs.GrsBaseInfo r15 = r0.g
            com.huawei.hms.framework.network.grs.a.c r2 = r0.h
            r9 = r1
            r16 = r2
            r9.<init>(r10, r11, r12, r13, r14, r15, r16)
            return r1
    }
}
