package com.meizu.cloud.pushsdk.c.c;

public class k {
    private final com.meizu.cloud.pushsdk.c.c.i a;
    private final int b;
    private final java.lang.String c;
    private final com.meizu.cloud.pushsdk.c.c.c d;
    private final com.meizu.cloud.pushsdk.c.c.l e;
    private final com.meizu.cloud.pushsdk.c.c.k f;
    private final com.meizu.cloud.pushsdk.c.c.k g;
    private final com.meizu.cloud.pushsdk.c.c.k h;

    class 1 {
    }

    public class a {
        private com.meizu.cloud.pushsdk.c.c.i a;
        private int b;
        private java.lang.String c;
        private com.meizu.cloud.pushsdk.c.c.c.a d;
        private com.meizu.cloud.pushsdk.c.c.l e;
        private com.meizu.cloud.pushsdk.c.c.k f;
        private com.meizu.cloud.pushsdk.c.c.k g;
        private com.meizu.cloud.pushsdk.c.c.k h;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.b = r0
                com.meizu.cloud.pushsdk.c.c.c$a r0 = new com.meizu.cloud.pushsdk.c.c.c$a
                r0.<init>()
                r1.d = r0
                return
        }

        static com.meizu.cloud.pushsdk.c.c.i a(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                com.meizu.cloud.pushsdk.c.c.i r0 = r0.a
                return r0
        }

        static int b(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                int r0 = r0.b
                return r0
        }

        static java.lang.String c(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.c.a d(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                com.meizu.cloud.pushsdk.c.c.c$a r0 = r0.d
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.l e(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                com.meizu.cloud.pushsdk.c.c.l r0 = r0.e
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.k f(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                com.meizu.cloud.pushsdk.c.c.k r0 = r0.f
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.k g(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                com.meizu.cloud.pushsdk.c.c.k r0 = r0.g
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.k h(com.meizu.cloud.pushsdk.c.c.k.a r0) {
                com.meizu.cloud.pushsdk.c.c.k r0 = r0.h
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.k.a a(int r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.k.a a(com.meizu.cloud.pushsdk.c.c.c r1) {
                r0 = this;
                com.meizu.cloud.pushsdk.c.c.c$a r1 = r1.c()
                r0.d = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.k.a a(com.meizu.cloud.pushsdk.c.c.i r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.k.a a(com.meizu.cloud.pushsdk.c.c.l r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.k.a a(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.k a() {
                r3 = this;
                com.meizu.cloud.pushsdk.c.c.i r0 = r3.a
                if (r0 == 0) goto L28
                int r0 = r3.b
                if (r0 < 0) goto Lf
                com.meizu.cloud.pushsdk.c.c.k r0 = new com.meizu.cloud.pushsdk.c.c.k
                r1 = 0
                r0.<init>(r3, r1)
                return r0
            Lf:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "code < 0: "
                r1.append(r2)
                int r2 = r3.b
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
            L28:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "request == null"
                r0.<init>(r1)
                throw r0
        }
    }

    private k(com.meizu.cloud.pushsdk.c.c.k.a r2) {
            r1 = this;
            r1.<init>()
            com.meizu.cloud.pushsdk.c.c.i r0 = com.meizu.cloud.pushsdk.c.c.k.a.a(r2)
            r1.a = r0
            int r0 = com.meizu.cloud.pushsdk.c.c.k.a.b(r2)
            r1.b = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.c.c.k.a.c(r2)
            r1.c = r0
            com.meizu.cloud.pushsdk.c.c.c$a r0 = com.meizu.cloud.pushsdk.c.c.k.a.d(r2)
            com.meizu.cloud.pushsdk.c.c.c r0 = r0.a()
            r1.d = r0
            com.meizu.cloud.pushsdk.c.c.l r0 = com.meizu.cloud.pushsdk.c.c.k.a.e(r2)
            r1.e = r0
            com.meizu.cloud.pushsdk.c.c.k r0 = com.meizu.cloud.pushsdk.c.c.k.a.f(r2)
            r1.f = r0
            com.meizu.cloud.pushsdk.c.c.k r0 = com.meizu.cloud.pushsdk.c.c.k.a.g(r2)
            r1.g = r0
            com.meizu.cloud.pushsdk.c.c.k r2 = com.meizu.cloud.pushsdk.c.c.k.a.h(r2)
            r1.h = r2
            return
    }

    k(com.meizu.cloud.pushsdk.c.c.k.a r1, com.meizu.cloud.pushsdk.c.c.k.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public com.meizu.cloud.pushsdk.c.c.l b() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.l r0 = r1.e
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Response{protocol=, code="
            r0.append(r1)
            int r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", message="
            r0.append(r1)
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = ", url="
            r0.append(r1)
            com.meizu.cloud.pushsdk.c.c.i r1 = r2.a
            com.meizu.cloud.pushsdk.c.c.f r1 = r1.a()
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
