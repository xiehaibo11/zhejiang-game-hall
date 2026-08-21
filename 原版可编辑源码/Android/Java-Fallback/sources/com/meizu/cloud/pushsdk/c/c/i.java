package com.meizu.cloud.pushsdk.c.c;

public class i {
    private final com.meizu.cloud.pushsdk.c.c.f a;
    private final java.lang.String b;
    private final com.meizu.cloud.pushsdk.c.c.c c;
    private final com.meizu.cloud.pushsdk.c.c.j d;
    private final java.lang.Object e;

    class 1 {
    }

    public class a {
        private com.meizu.cloud.pushsdk.c.c.f a;
        private java.lang.String b;
        private com.meizu.cloud.pushsdk.c.c.c.a c;
        private com.meizu.cloud.pushsdk.c.c.j d;
        private java.lang.Object e;

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "GET"
                r1.b = r0
                com.meizu.cloud.pushsdk.c.c.c$a r0 = new com.meizu.cloud.pushsdk.c.c.c$a
                r0.<init>()
                r1.c = r0
                return
        }

        static com.meizu.cloud.pushsdk.c.c.f a(com.meizu.cloud.pushsdk.c.c.i.a r0) {
                com.meizu.cloud.pushsdk.c.c.f r0 = r0.a
                return r0
        }

        static java.lang.String b(com.meizu.cloud.pushsdk.c.c.i.a r0) {
                java.lang.String r0 = r0.b
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.c.a c(com.meizu.cloud.pushsdk.c.c.i.a r0) {
                com.meizu.cloud.pushsdk.c.c.c$a r0 = r0.c
                return r0
        }

        static com.meizu.cloud.pushsdk.c.c.j d(com.meizu.cloud.pushsdk.c.c.i.a r0) {
                com.meizu.cloud.pushsdk.c.c.j r0 = r0.d
                return r0
        }

        static java.lang.Object e(com.meizu.cloud.pushsdk.c.c.i.a r0) {
                java.lang.Object r0 = r0.e
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a() {
                r2 = this;
                java.lang.String r0 = "GET"
                r1 = 0
                com.meizu.cloud.pushsdk.c.c.i$a r0 = r2.a(r0, r1)
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a(com.meizu.cloud.pushsdk.c.c.c r1) {
                r0 = this;
                com.meizu.cloud.pushsdk.c.c.c$a r1 = r1.c()
                r0.c = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a(com.meizu.cloud.pushsdk.c.c.f r2) {
                r1 = this;
                if (r2 == 0) goto L5
                r1.a = r2
                return r1
            L5:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "url == null"
                r2.<init>(r0)
                throw r2
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a(com.meizu.cloud.pushsdk.c.c.j r2) {
                r1 = this;
                java.lang.String r0 = "POST"
                com.meizu.cloud.pushsdk.c.c.i$a r2 = r1.a(r0, r2)
                return r2
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a(java.lang.String r7) {
                r6 = this;
                if (r7 == 0) goto L61
                r1 = 1
                r2 = 0
                r4 = 0
                r5 = 3
                java.lang.String r3 = "ws:"
                r0 = r7
                boolean r0 = r0.regionMatches(r1, r2, r3, r4, r5)
                if (r0 == 0) goto L26
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "http:"
                r0.append(r1)
                r1 = 3
            L1a:
                java.lang.String r7 = r7.substring(r1)
                r0.append(r7)
                java.lang.String r7 = r0.toString()
                goto L3f
            L26:
                r1 = 1
                r2 = 0
                r4 = 0
                r5 = 4
                java.lang.String r3 = "wss:"
                r0 = r7
                boolean r0 = r0.regionMatches(r1, r2, r3, r4, r5)
                if (r0 == 0) goto L3f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "https:"
                r0.append(r1)
                r1 = 4
                goto L1a
            L3f:
                com.meizu.cloud.pushsdk.c.c.f r0 = com.meizu.cloud.pushsdk.c.c.f.c(r7)
                if (r0 == 0) goto L4a
                com.meizu.cloud.pushsdk.c.c.i$a r7 = r6.a(r0)
                return r7
            L4a:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "unexpected url: "
                r1.append(r2)
                r1.append(r7)
                java.lang.String r7 = r1.toString()
                r0.<init>(r7)
                throw r0
            L61:
                java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "url == null"
                r7.<init>(r0)
                throw r7
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a(java.lang.String r3, com.meizu.cloud.pushsdk.c.c.j r4) {
                r2 = this;
                if (r3 == 0) goto L55
                int r0 = r3.length()
                if (r0 == 0) goto L55
                java.lang.String r0 = "method "
                if (r4 == 0) goto L2d
                boolean r1 = com.meizu.cloud.pushsdk.c.c.d.b(r3)
                if (r1 == 0) goto L13
                goto L2d
            L13:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                r1.append(r3)
                java.lang.String r3 = " must not have a request body."
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                r4.<init>(r3)
                throw r4
            L2d:
                if (r4 != 0) goto L50
                boolean r1 = com.meizu.cloud.pushsdk.c.c.d.a(r3)
                if (r1 != 0) goto L36
                goto L50
            L36:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                r1.append(r3)
                java.lang.String r3 = " must have a request body."
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                r4.<init>(r3)
                throw r4
            L50:
                r2.b = r3
                r2.d = r4
                return r2
            L55:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "method == null || method.length() == 0"
                r3.<init>(r4)
                throw r3
        }

        public com.meizu.cloud.pushsdk.c.c.i.a a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.meizu.cloud.pushsdk.c.c.c$a r0 = r1.c
                r0.a(r2, r3)
                return r1
        }

        public com.meizu.cloud.pushsdk.c.c.i.a b() {
                r2 = this;
                java.lang.String r0 = "HEAD"
                r1 = 0
                com.meizu.cloud.pushsdk.c.c.i$a r0 = r2.a(r0, r1)
                return r0
        }

        public com.meizu.cloud.pushsdk.c.c.i.a b(com.meizu.cloud.pushsdk.c.c.j r2) {
                r1 = this;
                java.lang.String r0 = "DELETE"
                com.meizu.cloud.pushsdk.c.c.i$a r2 = r1.a(r0, r2)
                return r2
        }

        public com.meizu.cloud.pushsdk.c.c.i.a c(com.meizu.cloud.pushsdk.c.c.j r2) {
                r1 = this;
                java.lang.String r0 = "PUT"
                com.meizu.cloud.pushsdk.c.c.i$a r2 = r1.a(r0, r2)
                return r2
        }

        public com.meizu.cloud.pushsdk.c.c.i c() {
                r2 = this;
                com.meizu.cloud.pushsdk.c.c.f r0 = r2.a
                if (r0 == 0) goto Lb
                com.meizu.cloud.pushsdk.c.c.i r0 = new com.meizu.cloud.pushsdk.c.c.i
                r1 = 0
                r0.<init>(r2, r1)
                return r0
            Lb:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "url == null"
                r0.<init>(r1)
                throw r0
        }

        public com.meizu.cloud.pushsdk.c.c.i.a d(com.meizu.cloud.pushsdk.c.c.j r2) {
                r1 = this;
                java.lang.String r0 = "PATCH"
                com.meizu.cloud.pushsdk.c.c.i$a r2 = r1.a(r0, r2)
                return r2
        }
    }

    private i(com.meizu.cloud.pushsdk.c.c.i.a r2) {
            r1 = this;
            r1.<init>()
            com.meizu.cloud.pushsdk.c.c.f r0 = com.meizu.cloud.pushsdk.c.c.i.a.a(r2)
            r1.a = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.c.c.i.a.b(r2)
            r1.b = r0
            com.meizu.cloud.pushsdk.c.c.c$a r0 = com.meizu.cloud.pushsdk.c.c.i.a.c(r2)
            com.meizu.cloud.pushsdk.c.c.c r0 = r0.a()
            r1.c = r0
            com.meizu.cloud.pushsdk.c.c.j r0 = com.meizu.cloud.pushsdk.c.c.i.a.d(r2)
            r1.d = r0
            java.lang.Object r0 = com.meizu.cloud.pushsdk.c.c.i.a.e(r2)
            if (r0 == 0) goto L2a
            java.lang.Object r2 = com.meizu.cloud.pushsdk.c.c.i.a.e(r2)
            goto L2b
        L2a:
            r2 = r1
        L2b:
            r1.e = r2
            return
    }

    i(com.meizu.cloud.pushsdk.c.c.i.a r1, com.meizu.cloud.pushsdk.c.c.i.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public com.meizu.cloud.pushsdk.c.c.f a() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.f r0 = r1.a
            return r0
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.c r0 = r1.c
            java.lang.String r2 = r0.a(r2)
            return r2
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public int c() {
            r2 = this;
            java.lang.String r0 = r2.b()
            java.lang.String r1 = "POST"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Le
            r0 = 1
            goto L47
        Le:
            java.lang.String r0 = r2.b()
            java.lang.String r1 = "PUT"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            r0 = 2
            goto L47
        L1c:
            java.lang.String r0 = r2.b()
            java.lang.String r1 = "DELETE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2a
            r0 = 3
            goto L47
        L2a:
            java.lang.String r0 = r2.b()
            java.lang.String r1 = "HEAD"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L38
            r0 = 4
            goto L47
        L38:
            java.lang.String r0 = r2.b()
            java.lang.String r1 = "PATCH"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L46
            r0 = 5
            goto L47
        L46:
            r0 = 0
        L47:
            return r0
    }

    public com.meizu.cloud.pushsdk.c.c.c d() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.c r0 = r1.c
            return r0
    }

    public com.meizu.cloud.pushsdk.c.c.j e() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.j r0 = r1.d
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Request{method="
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", url="
            r0.append(r1)
            com.meizu.cloud.pushsdk.c.c.f r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", tag="
            r0.append(r1)
            java.lang.Object r1 = r2.e
            if (r1 == r2) goto L23
            goto L24
        L23:
            r1 = 0
        L24:
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
