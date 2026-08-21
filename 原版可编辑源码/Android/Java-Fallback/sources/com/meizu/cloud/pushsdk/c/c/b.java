package com.meizu.cloud.pushsdk.c.c;

public class b extends com.meizu.cloud.pushsdk.c.c.j {
    private static final com.meizu.cloud.pushsdk.c.c.g a = null;
    private final java.util.List<java.lang.String> b;
    private final java.util.List<java.lang.String> c;

    class 1 {
    }

    public final class a {
        private final java.util.List<java.lang.String> a;
        private final java.util.List<java.lang.String> b;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.a = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.b = r0
                return
        }

        public com.meizu.cloud.pushsdk.c.c.b.a a(java.lang.String r8, java.lang.String r9) {
                r7 = this;
                java.util.List<java.lang.String> r0 = r7.a
                java.lang.String r2 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r3 = 0
                r4 = 0
                r5 = 1
                r6 = 1
                r1 = r8
                java.lang.String r8 = com.meizu.cloud.pushsdk.c.c.f.a(r1, r2, r3, r4, r5, r6)
                r0.add(r8)
                java.util.List<java.lang.String> r8 = r7.b
                java.lang.String r1 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r2 = 0
                r4 = 1
                r0 = r9
                java.lang.String r9 = com.meizu.cloud.pushsdk.c.c.f.a(r0, r1, r2, r3, r4, r5)
                r8.add(r9)
                return r7
        }

        public com.meizu.cloud.pushsdk.c.c.b a() {
                r4 = this;
                com.meizu.cloud.pushsdk.c.c.b r0 = new com.meizu.cloud.pushsdk.c.c.b
                java.util.List<java.lang.String> r1 = r4.a
                java.util.List<java.lang.String> r2 = r4.b
                r3 = 0
                r0.<init>(r1, r2, r3)
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.b.a b(java.lang.String r8, java.lang.String r9) {
                r7 = this;
                java.util.List<java.lang.String> r0 = r7.a
                java.lang.String r2 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r3 = 1
                r4 = 0
                r5 = 1
                r6 = 1
                r1 = r8
                java.lang.String r8 = com.meizu.cloud.pushsdk.c.c.f.a(r1, r2, r3, r4, r5, r6)
                r0.add(r8)
                java.util.List<java.lang.String> r8 = r7.b
                java.lang.String r1 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r2 = 1
                r3 = 0
                r4 = 1
                r0 = r9
                java.lang.String r9 = com.meizu.cloud.pushsdk.c.c.f.a(r0, r1, r2, r3, r4, r5)
                r8.add(r9)
                return r7
        }
    }

    static {
            java.lang.String r0 = "application/x-www-form-urlencoded"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.b.a = r0
            return
    }

    private b(java.util.List<java.lang.String> r1, java.util.List<java.lang.String> r2) {
            r0 = this;
            r0.<init>()
            java.util.List r1 = com.meizu.cloud.pushsdk.c.c.m.a(r1)
            r0.b = r1
            java.util.List r1 = com.meizu.cloud.pushsdk.c.c.m.a(r2)
            r0.c = r1
            return
    }

    b(java.util.List r1, java.util.List r2, com.meizu.cloud.pushsdk.c.c.b.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private long a(com.meizu.cloud.pushsdk.c.g.c r4, boolean r5) {
            r3 = this;
            if (r5 == 0) goto L8
            com.meizu.cloud.pushsdk.c.g.b r4 = new com.meizu.cloud.pushsdk.c.g.b
            r4.<init>()
            goto Lc
        L8:
            com.meizu.cloud.pushsdk.c.g.b r4 = r4.b()
        Lc:
            r0 = 0
            java.util.List<java.lang.String> r1 = r3.b
            int r1 = r1.size()
        L13:
            if (r0 >= r1) goto L3a
            if (r0 <= 0) goto L1c
            r2 = 38
            r4.b(r2)
        L1c:
            java.util.List<java.lang.String> r2 = r3.b
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r4.a(r2)
            r2 = 61
            r4.b(r2)
            java.util.List<java.lang.String> r2 = r3.c
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r4.a(r2)
            int r0 = r0 + 1
            goto L13
        L3a:
            if (r5 == 0) goto L44
            long r0 = r4.a()
            r4.j()
            goto L46
        L44:
            r0 = 0
        L46:
            return r0
    }

    @Override
    public com.meizu.cloud.pushsdk.c.c.g a() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.b.a
            return r0
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.c.g.c r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    @Override
    public long b() {
            r2 = this;
            r0 = 0
            r1 = 1
            long r0 = r2.a(r0, r1)
            return r0
    }
}
