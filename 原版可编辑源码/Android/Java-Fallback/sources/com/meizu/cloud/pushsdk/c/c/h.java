package com.meizu.cloud.pushsdk.c.c;

public final class h extends com.meizu.cloud.pushsdk.c.c.j {
    public static final com.meizu.cloud.pushsdk.c.c.g a = null;
    public static final com.meizu.cloud.pushsdk.c.c.g b = null;
    public static final com.meizu.cloud.pushsdk.c.c.g c = null;
    public static final com.meizu.cloud.pushsdk.c.c.g d = null;
    public static final com.meizu.cloud.pushsdk.c.c.g e = null;
    private static final byte[] f = null;
    private static final byte[] g = null;
    private static final byte[] h = null;
    private final com.meizu.cloud.pushsdk.c.g.e i;
    private final com.meizu.cloud.pushsdk.c.c.g j;
    private final com.meizu.cloud.pushsdk.c.c.g k;
    private final java.util.List<com.meizu.cloud.pushsdk.c.c.h.b> l;
    private long m;

    public final class a {
        private final com.meizu.cloud.pushsdk.c.g.e a;
        private com.meizu.cloud.pushsdk.c.c.g b;
        private final java.util.List<com.meizu.cloud.pushsdk.c.c.h.b> c;

        public a() {
                r1 = this;
                java.util.UUID r0 = java.util.UUID.randomUUID()
                java.lang.String r0 = r0.toString()
                r1.<init>(r0)
                return
        }

        public a(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.h.a
                r1.b = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.c = r0
                com.meizu.cloud.pushsdk.c.g.e r2 = com.meizu.cloud.pushsdk.c.g.e.a(r2)
                r1.a = r2
                return
        }

        public com.meizu.cloud.pushsdk.c.c.h.a a(com.meizu.cloud.pushsdk.c.c.c r1, com.meizu.cloud.pushsdk.c.c.j r2) {
                r0 = this;
                com.meizu.cloud.pushsdk.c.c.h$b r1 = com.meizu.cloud.pushsdk.c.c.h.b.a(r1, r2)
                com.meizu.cloud.pushsdk.c.c.h$a r1 = r0.a(r1)
                return r1
        }

        public com.meizu.cloud.pushsdk.c.c.h.a a(com.meizu.cloud.pushsdk.c.c.g r4) {
                r3 = this;
                if (r4 == 0) goto L28
                java.lang.String r0 = r4.a()
                java.lang.String r1 = "multipart"
                boolean r0 = r1.equals(r0)
                if (r0 == 0) goto L11
                r3.b = r4
                return r3
            L11:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "multipart != "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
            L28:
                java.lang.NullPointerException r4 = new java.lang.NullPointerException
                java.lang.String r0 = "type == null"
                r4.<init>(r0)
                throw r4
        }

        public com.meizu.cloud.pushsdk.c.c.h.a a(com.meizu.cloud.pushsdk.c.c.h.b r2) {
                r1 = this;
                if (r2 == 0) goto L8
                java.util.List<com.meizu.cloud.pushsdk.c.c.h$b> r0 = r1.c
                r0.add(r2)
                return r1
            L8:
                java.lang.NullPointerException r2 = new java.lang.NullPointerException
                java.lang.String r0 = "part == null"
                r2.<init>(r0)
                throw r2
        }

        public com.meizu.cloud.pushsdk.c.c.h a() {
                r4 = this;
                java.util.List<com.meizu.cloud.pushsdk.c.c.h$b> r0 = r4.c
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L14
                com.meizu.cloud.pushsdk.c.c.h r0 = new com.meizu.cloud.pushsdk.c.c.h
                com.meizu.cloud.pushsdk.c.g.e r1 = r4.a
                com.meizu.cloud.pushsdk.c.c.g r2 = r4.b
                java.util.List<com.meizu.cloud.pushsdk.c.c.h$b> r3 = r4.c
                r0.<init>(r1, r2, r3)
                return r0
            L14:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "Multipart body must have at least one part."
                r0.<init>(r1)
                throw r0
        }
    }

    public final class b {
        private final com.meizu.cloud.pushsdk.c.c.c a;
        private final com.meizu.cloud.pushsdk.c.c.j b;

        private b(com.meizu.cloud.pushsdk.c.c.c r1, com.meizu.cloud.pushsdk.c.c.j r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        static com.meizu.cloud.pushsdk.c.c.c a(com.meizu.cloud.pushsdk.c.c.h.b r0) {
                com.meizu.cloud.pushsdk.c.c.c r0 = r0.a
                return r0
        }

        public static com.meizu.cloud.pushsdk.c.c.h.b a(com.meizu.cloud.pushsdk.c.c.c r1, com.meizu.cloud.pushsdk.c.c.j r2) {
                if (r2 == 0) goto L2e
                if (r1 == 0) goto L15
                java.lang.String r0 = "Content-Type"
                java.lang.String r0 = r1.a(r0)
                if (r0 != 0) goto Ld
                goto L15
            Ld:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Unexpected header: Content-Type"
                r1.<init>(r2)
                throw r1
            L15:
                if (r1 == 0) goto L28
                java.lang.String r0 = "Content-Length"
                java.lang.String r0 = r1.a(r0)
                if (r0 != 0) goto L20
                goto L28
            L20:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Unexpected header: Content-Length"
                r1.<init>(r2)
                throw r1
            L28:
                com.meizu.cloud.pushsdk.c.c.h$b r0 = new com.meizu.cloud.pushsdk.c.c.h$b
                r0.<init>(r1, r2)
                return r0
            L2e:
                java.lang.NullPointerException r1 = new java.lang.NullPointerException
                java.lang.String r2 = "body == null"
                r1.<init>(r2)
                throw r1
        }

        static com.meizu.cloud.pushsdk.c.c.j b(com.meizu.cloud.pushsdk.c.c.h.b r0) {
                com.meizu.cloud.pushsdk.c.c.j r0 = r0.b
                return r0
        }
    }

    static {
            java.lang.String r0 = "multipart/mixed"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.h.a = r0
            java.lang.String r0 = "multipart/alternative"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.h.b = r0
            java.lang.String r0 = "multipart/digest"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.h.c = r0
            java.lang.String r0 = "multipart/parallel"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.h.d = r0
            java.lang.String r0 = "multipart/form-data"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.h.e = r0
            r0 = 2
            byte[] r1 = new byte[r0]
            r1 = {x0040: FILL_ARRAY_DATA , data: [58, 32} // fill-array
            com.meizu.cloud.pushsdk.c.c.h.f = r1
            byte[] r1 = new byte[r0]
            r1 = {x0046: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            com.meizu.cloud.pushsdk.c.c.h.g = r1
            byte[] r0 = new byte[r0]
            r0 = {x004c: FILL_ARRAY_DATA , data: [45, 45} // fill-array
            com.meizu.cloud.pushsdk.c.c.h.h = r0
            return
    }

    h(com.meizu.cloud.pushsdk.c.g.e r3, com.meizu.cloud.pushsdk.c.c.g r4, java.util.List<com.meizu.cloud.pushsdk.c.c.h.b> r5) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.m = r0
            r2.i = r3
            r2.j = r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "; boundary="
            r0.append(r4)
            java.lang.String r3 = r3.a()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.meizu.cloud.pushsdk.c.c.g r3 = com.meizu.cloud.pushsdk.c.c.g.a(r3)
            r2.k = r3
            java.util.List r3 = com.meizu.cloud.pushsdk.c.c.m.a(r5)
            r2.l = r3
            return
    }

    private long a(com.meizu.cloud.pushsdk.c.g.c r13, boolean r14) {
            r12 = this;
            if (r14 == 0) goto L9
            com.meizu.cloud.pushsdk.c.g.b r13 = new com.meizu.cloud.pushsdk.c.g.b
            r13.<init>()
            r0 = r13
            goto La
        L9:
            r0 = 0
        La:
            java.util.List<com.meizu.cloud.pushsdk.c.c.h$b> r1 = r12.l
            int r1 = r1.size()
            r2 = 0
            r3 = 0
            r5 = r2
        L14:
            if (r5 >= r1) goto Laa
            java.util.List<com.meizu.cloud.pushsdk.c.c.h$b> r6 = r12.l
            java.lang.Object r6 = r6.get(r5)
            com.meizu.cloud.pushsdk.c.c.h$b r6 = (com.meizu.cloud.pushsdk.c.c.h.b) r6
            com.meizu.cloud.pushsdk.c.c.c r7 = com.meizu.cloud.pushsdk.c.c.h.b.a(r6)
            com.meizu.cloud.pushsdk.c.c.j r6 = com.meizu.cloud.pushsdk.c.c.h.b.b(r6)
            byte[] r8 = com.meizu.cloud.pushsdk.c.c.h.h
            r13.c(r8)
            com.meizu.cloud.pushsdk.c.g.e r8 = r12.i
            r13.b(r8)
            byte[] r8 = com.meizu.cloud.pushsdk.c.c.h.g
            r13.c(r8)
            if (r7 == 0) goto L5c
            int r8 = r7.a()
            r9 = r2
        L3c:
            if (r9 >= r8) goto L5c
            java.lang.String r10 = r7.a(r9)
            com.meizu.cloud.pushsdk.c.g.c r10 = r13.b(r10)
            byte[] r11 = com.meizu.cloud.pushsdk.c.c.h.f
            com.meizu.cloud.pushsdk.c.g.c r10 = r10.c(r11)
            java.lang.String r11 = r7.b(r9)
            com.meizu.cloud.pushsdk.c.g.c r10 = r10.b(r11)
            byte[] r11 = com.meizu.cloud.pushsdk.c.c.h.g
            r10.c(r11)
            int r9 = r9 + 1
            goto L3c
        L5c:
            com.meizu.cloud.pushsdk.c.c.g r7 = r6.a()
            if (r7 == 0) goto L75
            java.lang.String r8 = "Content-Type: "
            com.meizu.cloud.pushsdk.c.g.c r8 = r13.b(r8)
            java.lang.String r7 = r7.toString()
            com.meizu.cloud.pushsdk.c.g.c r7 = r8.b(r7)
            byte[] r8 = com.meizu.cloud.pushsdk.c.c.h.g
            r7.c(r8)
        L75:
            long r7 = r6.b()
            r9 = -1
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 == 0) goto L8f
            java.lang.String r9 = "Content-Length: "
            com.meizu.cloud.pushsdk.c.g.c r9 = r13.b(r9)
            com.meizu.cloud.pushsdk.c.g.c r9 = r9.e(r7)
            byte[] r10 = com.meizu.cloud.pushsdk.c.c.h.g
            r9.c(r10)
            goto L95
        L8f:
            if (r14 == 0) goto L95
            r0.j()
            return r9
        L95:
            byte[] r9 = com.meizu.cloud.pushsdk.c.c.h.g
            r13.c(r9)
            if (r14 == 0) goto L9e
            long r3 = r3 + r7
            goto La1
        L9e:
            r6.a(r13)
        La1:
            byte[] r6 = com.meizu.cloud.pushsdk.c.c.h.g
            r13.c(r6)
            int r5 = r5 + 1
            goto L14
        Laa:
            byte[] r1 = com.meizu.cloud.pushsdk.c.c.h.h
            r13.c(r1)
            com.meizu.cloud.pushsdk.c.g.e r1 = r12.i
            r13.b(r1)
            byte[] r1 = com.meizu.cloud.pushsdk.c.c.h.h
            r13.c(r1)
            byte[] r1 = com.meizu.cloud.pushsdk.c.c.h.g
            r13.c(r1)
            if (r14 == 0) goto Lc8
            long r13 = r0.a()
            long r3 = r3 + r13
            r0.j()
        Lc8:
            return r3
    }

    @Override
    public com.meizu.cloud.pushsdk.c.c.g a() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.g r0 = r1.k
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
            r4 = this;
            long r0 = r4.m
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L9
            return r0
        L9:
            r0 = 0
            r1 = 1
            long r0 = r4.a(r0, r1)
            r4.m = r0
            return r0
    }
}
