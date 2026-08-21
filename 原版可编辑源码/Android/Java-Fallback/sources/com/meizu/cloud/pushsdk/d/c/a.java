package com.meizu.cloud.pushsdk.d.c;

public class a {
    private final java.util.List<com.meizu.cloud.pushsdk.d.a.b> a;
    private final long b;
    private final java.lang.String c;

    public abstract class a<T extends com.meizu.cloud.pushsdk.d.c.a.a<T>> {
        private java.util.List<com.meizu.cloud.pushsdk.d.a.b> a;
        private long b;
        private java.lang.String c;

        public a() {
                r2 = this;
                r2.<init>()
                java.util.LinkedList r0 = new java.util.LinkedList
                r0.<init>()
                r2.a = r0
                long r0 = java.lang.System.currentTimeMillis()
                r2.b = r0
                java.lang.String r0 = com.meizu.cloud.pushsdk.d.f.e.b()
                r2.c = r0
                return
        }

        static java.util.List a(com.meizu.cloud.pushsdk.d.c.a.a r0) {
                java.util.List<com.meizu.cloud.pushsdk.d.a.b> r0 = r0.a
                return r0
        }

        static java.lang.String b(com.meizu.cloud.pushsdk.d.c.a.a r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        static long c(com.meizu.cloud.pushsdk.d.c.a.a r2) {
                long r0 = r2.b
                return r0
        }

        protected abstract T a();

        public T a(long r1) {
                r0 = this;
                r0.b = r1
                com.meizu.cloud.pushsdk.d.c.a$a r1 = r0.a()
                return r1
        }
    }

    protected a(com.meizu.cloud.pushsdk.d.c.a.a<?> r3) {
            r2 = this;
            r2.<init>()
            java.util.List r0 = com.meizu.cloud.pushsdk.d.c.a.a.a(r3)
            com.meizu.cloud.pushsdk.d.f.d.a(r0)
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.c.a.a.b(r3)
            com.meizu.cloud.pushsdk.d.f.d.a(r0)
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.c.a.a.b(r3)
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            java.lang.String r1 = "eventId cannot be empty"
            com.meizu.cloud.pushsdk.d.f.d.a(r0, r1)
            java.util.List r0 = com.meizu.cloud.pushsdk.d.c.a.a.a(r3)
            r2.a = r0
            long r0 = com.meizu.cloud.pushsdk.d.c.a.a.c(r3)
            r2.b = r0
            java.lang.String r3 = com.meizu.cloud.pushsdk.d.c.a.a.b(r3)
            r2.c = r3
            return
    }

    protected com.meizu.cloud.pushsdk.d.a.c a(com.meizu.cloud.pushsdk.d.a.c r3) {
            r2 = this;
            java.lang.String r0 = r2.c()
            java.lang.String r1 = "ei"
            r3.a(r1, r0)
            long r0 = r2.b()
            java.lang.String r0 = java.lang.Long.toString(r0)
            java.lang.String r1 = "ts"
            r3.a(r1, r0)
            return r3
    }

    public java.util.List<com.meizu.cloud.pushsdk.d.a.b> a() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<com.meizu.cloud.pushsdk.d.a.b> r1 = r2.a
            r0.<init>(r1)
            return r0
    }

    public long b() {
            r2 = this;
            long r0 = r2.b
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }
}
