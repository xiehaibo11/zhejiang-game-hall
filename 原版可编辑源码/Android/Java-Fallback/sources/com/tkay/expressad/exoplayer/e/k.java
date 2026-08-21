package com.tkay.expressad.exoplayer.e;

public interface k {

    public static final class a {
        public final com.tkay.expressad.exoplayer.e.l a;
        public final com.tkay.expressad.exoplayer.e.l b;

        public a(com.tkay.expressad.exoplayer.e.l r1) {
                r0 = this;
                r0.<init>(r1, r1)
                return
        }

        public a(com.tkay.expressad.exoplayer.e.l r1, com.tkay.expressad.exoplayer.e.l r2) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
                com.tkay.expressad.exoplayer.e.l r1 = (com.tkay.expressad.exoplayer.e.l) r1
                r0.a = r1
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r2)
                com.tkay.expressad.exoplayer.e.l r1 = (com.tkay.expressad.exoplayer.e.l) r1
                r0.b = r1
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L29
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L29
            L12:
                com.tkay.expressad.exoplayer.e.k$a r5 = (com.tkay.expressad.exoplayer.e.k.a) r5
                com.tkay.expressad.exoplayer.e.l r2 = r4.a
                com.tkay.expressad.exoplayer.e.l r3 = r5.a
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L29
                com.tkay.expressad.exoplayer.e.l r2 = r4.b
                com.tkay.expressad.exoplayer.e.l r5 = r5.b
                boolean r5 = r2.equals(r5)
                if (r5 == 0) goto L29
                return r0
            L29:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                com.tkay.expressad.exoplayer.e.l r0 = r2.a
                int r0 = r0.hashCode()
                int r0 = r0 * 31
                com.tkay.expressad.exoplayer.e.l r1 = r2.b
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                return r0
        }

        public final java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "["
                r0.<init>(r1)
                com.tkay.expressad.exoplayer.e.l r1 = r3.a
                r0.append(r1)
                com.tkay.expressad.exoplayer.e.l r1 = r3.a
                com.tkay.expressad.exoplayer.e.l r2 = r3.b
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L19
                java.lang.String r1 = ""
                goto L29
            L19:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = ", "
                r1.<init>(r2)
                com.tkay.expressad.exoplayer.e.l r2 = r3.b
                r1.append(r2)
                java.lang.String r1 = r1.toString()
            L29:
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public static final class b implements com.tkay.expressad.exoplayer.e.k {
        private final long a;
        private final com.tkay.expressad.exoplayer.e.k.a b;

        private b(long r3) {
                r2 = this;
                r0 = 0
                r2.<init>(r3, r0)
                return
        }

        public b(long r3, long r5) {
                r2 = this;
                r2.<init>()
                r2.a = r3
                com.tkay.expressad.exoplayer.e.k$a r3 = new com.tkay.expressad.exoplayer.e.k$a
                r0 = 0
                int r4 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r4 != 0) goto L10
                com.tkay.expressad.exoplayer.e.l r4 = com.tkay.expressad.exoplayer.e.l.a
                goto L15
            L10:
                com.tkay.expressad.exoplayer.e.l r4 = new com.tkay.expressad.exoplayer.e.l
                r4.<init>(r0, r5)
            L15:
                r3.<init>(r4)
                r2.b = r3
                return
        }

        @Override
        public final com.tkay.expressad.exoplayer.e.k.a a(long r1) {
                r0 = this;
                com.tkay.expressad.exoplayer.e.k$a r1 = r0.b
                return r1
        }

        @Override
        public final boolean a() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final long b() {
                r2 = this;
                long r0 = r2.a
                return r0
        }
    }

    com.tkay.expressad.exoplayer.e.k.a a(long r1);

    boolean a();

    long b();
}
