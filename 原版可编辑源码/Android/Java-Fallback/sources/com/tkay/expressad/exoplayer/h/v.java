package com.tkay.expressad.exoplayer.h;

public final class v extends com.tkay.expressad.exoplayer.h.f<java.lang.Integer> {
    private static final int a = -1;
    private final com.tkay.expressad.exoplayer.h.s[] b;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> c;
    private final com.tkay.expressad.exoplayer.h.h d;
    private com.tkay.expressad.exoplayer.ae e;
    private java.lang.Object f;
    private int g;
    private com.tkay.expressad.exoplayer.h.v.a h;

    public static final class a extends java.io.IOException {
        public static final int a = 0;
        public final int b;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface a {
        }

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.b = r0
                return
        }
    }

    private v(com.tkay.expressad.exoplayer.h.h r1, com.tkay.expressad.exoplayer.h.s... r2) {
            r0 = this;
            r0.<init>()
            r0.b = r2
            r0.d = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.List r2 = java.util.Arrays.asList(r2)
            r1.<init>(r2)
            r0.c = r1
            r1 = -1
            r0.g = r1
            return
    }

    private v(com.tkay.expressad.exoplayer.h.s... r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.j r0 = new com.tkay.expressad.exoplayer.h.j
            r0.<init>()
            r1.<init>(r0, r2)
            return
    }

    private com.tkay.expressad.exoplayer.h.v.a a(com.tkay.expressad.exoplayer.ae r3) {
            r2 = this;
            int r0 = r2.g
            r1 = -1
            if (r0 != r1) goto Lc
            int r3 = r3.c()
            r2.g = r3
            goto L1a
        Lc:
            int r3 = r3.c()
            int r0 = r2.g
            if (r3 == r0) goto L1a
            com.tkay.expressad.exoplayer.h.v$a r3 = new com.tkay.expressad.exoplayer.h.v$a
            r3.<init>()
            return r3
        L1a:
            r3 = 0
            return r3
    }

    private void a(com.tkay.expressad.exoplayer.h.s r3, com.tkay.expressad.exoplayer.ae r4, java.lang.Object r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.h.v$a r0 = r2.h
            if (r0 != 0) goto L21
            int r0 = r2.g
            r1 = -1
            if (r0 != r1) goto L10
            int r0 = r4.c()
            r2.g = r0
            goto L1e
        L10:
            int r0 = r4.c()
            int r1 = r2.g
            if (r0 == r1) goto L1e
            com.tkay.expressad.exoplayer.h.v$a r0 = new com.tkay.expressad.exoplayer.h.v$a
            r0.<init>()
            goto L1f
        L1e:
            r0 = 0
        L1f:
            r2.h = r0
        L21:
            com.tkay.expressad.exoplayer.h.v$a r0 = r2.h
            if (r0 == 0) goto L26
            return
        L26:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> r0 = r2.c
            r0.remove(r3)
            com.tkay.expressad.exoplayer.h.s[] r0 = r2.b
            r1 = 0
            r0 = r0[r1]
            if (r3 != r0) goto L36
            r2.e = r4
            r2.f = r5
        L36:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> r3 = r2.c
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L45
            com.tkay.expressad.exoplayer.ae r3 = r2.e
            java.lang.Object r4 = r2.f
            r2.a(r3, r4)
        L45:
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r5, com.tkay.expressad.exoplayer.j.b r6) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.s[] r0 = r4.b
            int r0 = r0.length
            com.tkay.expressad.exoplayer.h.r[] r1 = new com.tkay.expressad.exoplayer.h.r[r0]
            r2 = 0
        L6:
            if (r2 >= r0) goto L15
            com.tkay.expressad.exoplayer.h.s[] r3 = r4.b
            r3 = r3[r2]
            com.tkay.expressad.exoplayer.h.r r3 = r3.a(r5, r6)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L6
        L15:
            com.tkay.expressad.exoplayer.h.u r5 = new com.tkay.expressad.exoplayer.h.u
            com.tkay.expressad.exoplayer.h.h r6 = r4.d
            r5.<init>(r6, r1)
            return r5
    }

    @Override
    public final void a() {
            r2 = this;
            super.a()
            r0 = 0
            r2.e = r0
            r2.f = r0
            r1 = -1
            r2.g = r1
            r2.h = r0
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> r0 = r2.c
            r0.clear()
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> r0 = r2.c
            com.tkay.expressad.exoplayer.h.s[] r1 = r2.b
            java.util.Collections.addAll(r0, r1)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.u r4 = (com.tkay.expressad.exoplayer.h.u) r4
            r0 = 0
        L3:
            com.tkay.expressad.exoplayer.h.s[] r1 = r3.b
            int r2 = r1.length
            if (r0 >= r2) goto L14
            r1 = r1[r0]
            com.tkay.expressad.exoplayer.h.r[] r2 = r4.a
            r2 = r2[r0]
            r1.a(r2)
            int r0 = r0 + 1
            goto L3
        L14:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h r2, boolean r3) {
            r1 = this;
            super.a(r2, r3)
            r2 = 0
        L4:
            com.tkay.expressad.exoplayer.h.s[] r3 = r1.b
            int r3 = r3.length
            if (r2 >= r3) goto L17
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            com.tkay.expressad.exoplayer.h.s[] r0 = r1.b
            r0 = r0[r2]
            r1.a(r3, r0)
            int r2 = r2 + 1
            goto L4
        L17:
            return
    }

    @Override
    protected final void a(java.lang.Integer r2, com.tkay.expressad.exoplayer.h.s r3, com.tkay.expressad.exoplayer.ae r4, java.lang.Object r5) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.v$a r2 = r1.h
            if (r2 != 0) goto L21
            int r2 = r1.g
            r0 = -1
            if (r2 != r0) goto L10
            int r2 = r4.c()
            r1.g = r2
            goto L1e
        L10:
            int r2 = r4.c()
            int r0 = r1.g
            if (r2 == r0) goto L1e
            com.tkay.expressad.exoplayer.h.v$a r2 = new com.tkay.expressad.exoplayer.h.v$a
            r2.<init>()
            goto L1f
        L1e:
            r2 = 0
        L1f:
            r1.h = r2
        L21:
            com.tkay.expressad.exoplayer.h.v$a r2 = r1.h
            if (r2 != 0) goto L44
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> r2 = r1.c
            r2.remove(r3)
            com.tkay.expressad.exoplayer.h.s[] r2 = r1.b
            r0 = 0
            r2 = r2[r0]
            if (r3 != r2) goto L35
            r1.e = r4
            r1.f = r5
        L35:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s> r2 = r1.c
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L44
            com.tkay.expressad.exoplayer.ae r2 = r1.e
            java.lang.Object r3 = r1.f
            r1.a(r2, r3)
        L44:
            return
    }

    @Override
    public final void b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.v$a r0 = r1.h
            if (r0 != 0) goto L8
            super.b()
            return
        L8:
            throw r0
    }
}
