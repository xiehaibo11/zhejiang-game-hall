package com.xiaomi.push;

public final class dw {

    public final class a extends com.xiaomi.push.e {
        private int a;
        private java.util.List<java.lang.String> a;
        private boolean a;
        private int b;
        private boolean b;
        private int c;
        private boolean c;
        private boolean d;
        private boolean e;
        private boolean f;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.c = r0
                r1.b = r0
                r1.f = r0
                java.util.List r0 = java.util.Collections.emptyList()
                r1.a = r0
                r0 = -1
                r1.c = r0
                return
        }

        public static com.xiaomi.push.dw.a a(byte[] r1) {
                com.xiaomi.push.dw$a r0 = new com.xiaomi.push.dw$a
                r0.<init>()
                com.xiaomi.push.e r1 = r0.a(r1)
                com.xiaomi.push.dw$a r1 = (com.xiaomi.push.dw.a) r1
                com.xiaomi.push.dw$a r1 = (com.xiaomi.push.dw.a) r1
                return r1
        }

        public static com.xiaomi.push.dw.a b(com.xiaomi.push.b r1) {
                com.xiaomi.push.dw$a r0 = new com.xiaomi.push.dw$a
                r0.<init>()
                com.xiaomi.push.dw$a r1 = r0.a(r1)
                return r1
        }

        @Override
        public int a() {
                r1 = this;
                int r0 = r1.c
                if (r0 >= 0) goto L7
                r1.b()
            L7:
                int r0 = r1.c
                return r0
        }

        public com.xiaomi.push.dw.a a(int r2) {
                r1 = this;
                r0 = 1
                r1.a = r0
                r1.a = r2
                return r1
        }

        @Override
        public com.xiaomi.push.dw.a a(com.xiaomi.push.b r3) {
                r2 = this;
            L0:
                int r0 = r3.a()
                if (r0 == 0) goto L49
                r1 = 8
                if (r0 == r1) goto L41
                r1 = 16
                if (r0 == r1) goto L39
                r1 = 24
                if (r0 == r1) goto L31
                r1 = 32
                if (r0 == r1) goto L29
                r1 = 42
                if (r0 == r1) goto L21
                boolean r0 = r2.a(r3, r0)
                if (r0 != 0) goto L0
                return r2
            L21:
                java.lang.String r0 = r3.a()
                r2.a(r0)
                goto L0
            L29:
                boolean r0 = r3.a()
                r2.b(r0)
                goto L0
            L31:
                int r0 = r3.b()
                r2.b(r0)
                goto L0
            L39:
                boolean r0 = r3.a()
                r2.a(r0)
                goto L0
            L41:
                int r0 = r3.c()
                r2.a(r0)
                goto L0
            L49:
                return r2
        }

        public com.xiaomi.push.dw.a a(java.lang.String r2) {
                r1 = this;
                if (r2 == 0) goto L17
                java.util.List<java.lang.String> r0 = r1.a
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L11
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.a = r0
            L11:
                java.util.List<java.lang.String> r0 = r1.a
                r0.add(r2)
                return r1
            L17:
                r2 = 0
                throw r2
        }

        public com.xiaomi.push.dw.a a(boolean r2) {
                r1 = this;
                r0 = 1
                r1.b = r0
                r1.c = r2
                return r1
        }

        @Override
        public com.xiaomi.push.e a(com.xiaomi.push.b r1) {
                r0 = this;
                com.xiaomi.push.dw$a r1 = r0.a(r1)
                return r1
        }

        public java.util.List<java.lang.String> a() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.a
                return r0
        }

        @Override
        public void a(com.xiaomi.push.c r4) {
                r3 = this;
                boolean r0 = r3.a()
                if (r0 == 0) goto Le
                r0 = 1
                int r1 = r3.c()
                r4.b(r0, r1)
            Le:
                boolean r0 = r3.c()
                if (r0 == 0) goto L1c
                r0 = 2
                boolean r1 = r3.b()
                r4.a(r0, r1)
            L1c:
                boolean r0 = r3.d()
                if (r0 == 0) goto L2a
                r0 = 3
                int r1 = r3.d()
                r4.a(r0, r1)
            L2a:
                boolean r0 = r3.f()
                if (r0 == 0) goto L38
                r0 = 4
                boolean r1 = r3.e()
                r4.a(r0, r1)
            L38:
                java.util.List r0 = r3.a()
                java.util.Iterator r0 = r0.iterator()
            L40:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L51
                java.lang.Object r1 = r0.next()
                java.lang.String r1 = (java.lang.String) r1
                r2 = 5
                r4.a(r2, r1)
                goto L40
            L51:
                return
        }

        public boolean a() {
                r1 = this;
                boolean r0 = r1.a
                return r0
        }

        @Override
        public int b() {
                r5 = this;
                boolean r0 = r5.a()
                r1 = 1
                r2 = 0
                if (r0 == 0) goto L12
                int r0 = r5.c()
                int r0 = com.xiaomi.push.c.b(r1, r0)
                int r0 = r0 + r2
                goto L13
            L12:
                r0 = r2
            L13:
                boolean r3 = r5.c()
                if (r3 == 0) goto L23
                r3 = 2
                boolean r4 = r5.b()
                int r3 = com.xiaomi.push.c.a(r3, r4)
                int r0 = r0 + r3
            L23:
                boolean r3 = r5.d()
                if (r3 == 0) goto L33
                r3 = 3
                int r4 = r5.d()
                int r3 = com.xiaomi.push.c.a(r3, r4)
                int r0 = r0 + r3
            L33:
                boolean r3 = r5.f()
                if (r3 == 0) goto L43
                r3 = 4
                boolean r4 = r5.e()
                int r3 = com.xiaomi.push.c.a(r3, r4)
                int r0 = r0 + r3
            L43:
                java.util.List r3 = r5.a()
                java.util.Iterator r3 = r3.iterator()
            L4b:
                boolean r4 = r3.hasNext()
                if (r4 == 0) goto L5d
                java.lang.Object r4 = r3.next()
                java.lang.String r4 = (java.lang.String) r4
                int r4 = com.xiaomi.push.c.a(r4)
                int r2 = r2 + r4
                goto L4b
            L5d:
                int r0 = r0 + r2
                java.util.List r2 = r5.a()
                int r2 = r2.size()
                int r2 = r2 * r1
                int r0 = r0 + r2
                r5.c = r0
                return r0
        }

        public com.xiaomi.push.dw.a b(int r2) {
                r1 = this;
                r0 = 1
                r1.d = r0
                r1.b = r2
                return r1
        }

        public com.xiaomi.push.dw.a b(boolean r2) {
                r1 = this;
                r0 = 1
                r1.e = r0
                r1.f = r2
                return r1
        }

        public boolean b() {
                r1 = this;
                boolean r0 = r1.c
                return r0
        }

        public int c() {
                r1 = this;
                int r0 = r1.a
                return r0
        }

        public boolean c() {
                r1 = this;
                boolean r0 = r1.b
                return r0
        }

        public int d() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        public boolean d() {
                r1 = this;
                boolean r0 = r1.d
                return r0
        }

        public int e() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.a
                int r0 = r0.size()
                return r0
        }

        public boolean e() {
                r1 = this;
                boolean r0 = r1.f
                return r0
        }

        public boolean f() {
                r1 = this;
                boolean r0 = r1.e
                return r0
        }
    }
}
