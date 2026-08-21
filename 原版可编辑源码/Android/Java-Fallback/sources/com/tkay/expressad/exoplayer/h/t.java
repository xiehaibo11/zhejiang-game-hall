package com.tkay.expressad.exoplayer.h;

public interface t {

    public static final class a {
        public final int a;
        public final com.tkay.expressad.exoplayer.h.s.a b;
        private final java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t.a.a> c;
        private final long d;










        private static final class a {
            public final android.os.Handler a;
            public final com.tkay.expressad.exoplayer.h.t b;

            public a(android.os.Handler r1, com.tkay.expressad.exoplayer.h.t r2) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    r0.b = r2
                    return
            }
        }

        public a() {
                r6 = this;
                java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
                r1.<init>()
                r2 = 0
                r3 = 0
                r4 = 0
                r0 = r6
                r0.<init>(r1, r2, r3, r4)
                return
        }

        private a(java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t.a.a> r1, int r2, com.tkay.expressad.exoplayer.h.s.a r3, long r4) {
                r0 = this;
                r0.<init>()
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.d = r4
                return
        }

        private long a(long r4) {
                r3 = this;
                long r4 = com.tkay.expressad.exoplayer.b.a(r4)
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
                if (r2 != 0) goto Le
                return r0
            Le:
                long r0 = r3.d
                long r0 = r0 + r4
                return r0
        }

        private static void a(android.os.Handler r2, java.lang.Runnable r3) {
                android.os.Looper r0 = r2.getLooper()
                android.os.Looper r1 = android.os.Looper.myLooper()
                if (r0 != r1) goto Le
                r3.run()
                return
            Le:
                r2.post(r3)
                return
        }

        private void a(com.tkay.expressad.exoplayer.j.k r14, int r15, long r16) {
                r13 = this;
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0 = r13
                r1 = r14
                r2 = r15
                r11 = r16
                r0.a(r1, r2, r3, r4, r5, r6, r7, r9, r11)
                return
        }

        private void a(com.tkay.expressad.exoplayer.j.k r18, int r19, long r20, long r22, long r24) {
                r17 = this;
                r0 = r17
                r1 = r18
                r2 = r19
                r11 = r20
                r13 = r22
                r15 = r24
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0.a(r1, r2, r3, r4, r5, r6, r7, r9, r11, r13, r15)
                return
        }

        private void b(com.tkay.expressad.exoplayer.j.k r18, int r19, long r20, long r22, long r24) {
                r17 = this;
                r0 = r17
                r1 = r18
                r2 = r19
                r11 = r20
                r13 = r22
                r15 = r24
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0.b(r1, r2, r3, r4, r5, r6, r7, r9, r11, r13, r15)
                return
        }

        public final com.tkay.expressad.exoplayer.h.t.a a(int r8, com.tkay.expressad.exoplayer.h.s.a r9, long r10) {
                r7 = this;
                com.tkay.expressad.exoplayer.h.t$a r6 = new com.tkay.expressad.exoplayer.h.t$a
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r1 = r7.c
                r0 = r6
                r2 = r8
                r3 = r9
                r4 = r10
                r0.<init>(r1, r2, r3, r4)
                return r6
        }

        public final void a() {
                r4 = this;
                com.tkay.expressad.exoplayer.h.s$a r0 = r4.b
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.tkay.expressad.exoplayer.k.a.b(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L29
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$1 r3 = new com.tkay.expressad.exoplayer.h.t$a$1
                r3.<init>(r4, r2)
                a(r1, r3)
                goto L10
            L29:
                return
        }

        public final void a(int r13, long r14, long r16) {
                r12 = this;
                r0 = r12
                com.tkay.expressad.exoplayer.h.t$c r11 = new com.tkay.expressad.exoplayer.h.t$c
                r1 = r14
                long r7 = r12.a(r14)
                r1 = r16
                long r9 = r12.a(r1)
                r2 = 1
                r4 = 0
                r5 = 3
                r6 = 0
                r1 = r11
                r3 = r13
                r1.<init>(r2, r3, r4, r5, r6, r7, r9)
                r12.a(r11)
                return
        }

        public final void a(int r13, com.tkay.expressad.exoplayer.m r14, int r15, java.lang.Object r16, long r17) {
                r12 = this;
                r0 = r12
                com.tkay.expressad.exoplayer.h.t$c r11 = new com.tkay.expressad.exoplayer.h.t$c
                r1 = r17
                long r7 = r12.a(r1)
                r2 = 1
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r1 = r11
                r3 = r13
                r4 = r14
                r5 = r15
                r6 = r16
                r1.<init>(r2, r3, r4, r5, r6, r7, r9)
                r12.b(r11)
                return
        }

        public final void a(android.os.Handler r3, com.tkay.expressad.exoplayer.h.t r4) {
                r2 = this;
                if (r3 == 0) goto L6
                if (r4 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r2.c
                com.tkay.expressad.exoplayer.h.t$a$a r1 = new com.tkay.expressad.exoplayer.h.t$a$a
                r1.<init>(r3, r4)
                r0.add(r1)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.h.t.b r5, com.tkay.expressad.exoplayer.h.t.c r6) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$3 r3 = new com.tkay.expressad.exoplayer.h.t$a$3
                r3.<init>(r4, r2, r5, r6)
                a(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.h.t.b r11, com.tkay.expressad.exoplayer.h.t.c r12, java.io.IOException r13, boolean r14) {
                r10 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r10.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L25
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r4 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$6 r9 = new com.tkay.expressad.exoplayer.h.t$a$6
                r2 = r9
                r3 = r10
                r5 = r11
                r6 = r12
                r7 = r13
                r8 = r14
                r2.<init>(r3, r4, r5, r6, r7, r8)
                a(r1, r9)
                goto L6
            L25:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.h.t.c r5) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$8 r3 = new com.tkay.expressad.exoplayer.h.t$a$8
                r3.<init>(r4, r2, r5)
                a(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.h.t r4) {
                r3 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r3.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                if (r2 != r4) goto L6
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r2 = r3.c
                r2.remove(r1)
                goto L6
            L1c:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.j.k r21, int r22, int r23, com.tkay.expressad.exoplayer.m r24, int r25, java.lang.Object r26, long r27, long r29, long r31) {
                r20 = this;
                r0 = r20
                com.tkay.expressad.exoplayer.h.t$b r9 = new com.tkay.expressad.exoplayer.h.t$b
                r5 = 0
                r7 = 0
                r1 = r9
                r2 = r21
                r3 = r31
                r1.<init>(r2, r3, r5, r7)
                com.tkay.expressad.exoplayer.h.t$c r1 = new com.tkay.expressad.exoplayer.h.t$c
                r2 = r27
                long r16 = r0.a(r2)
                r2 = r29
                long r18 = r0.a(r2)
                r10 = r1
                r11 = r22
                r12 = r23
                r13 = r24
                r14 = r25
                r15 = r26
                r10.<init>(r11, r12, r13, r14, r15, r16, r18)
                r0.a(r9, r1)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.j.k r11, int r12, int r13, com.tkay.expressad.exoplayer.m r14, int r15, java.lang.Object r16, long r17, long r19, long r21, long r23, long r25) {
                r10 = this;
                r0 = r10
                com.tkay.expressad.exoplayer.h.t$b r9 = new com.tkay.expressad.exoplayer.h.t$b
                r1 = r9
                r2 = r11
                r3 = r21
                r5 = r23
                r7 = r25
                r1.<init>(r2, r3, r5, r7)
                com.tkay.expressad.exoplayer.h.t$c r1 = new com.tkay.expressad.exoplayer.h.t$c
                r2 = r17
                long r2 = r10.a(r2)
                r4 = r19
                long r4 = r10.a(r4)
                r17 = r1
                r18 = r12
                r19 = r13
                r20 = r14
                r21 = r15
                r22 = r16
                r23 = r2
                r25 = r4
                r17.<init>(r18, r19, r20, r21, r22, r23, r25)
                r10.b(r9, r1)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.j.k r11, int r12, int r13, com.tkay.expressad.exoplayer.m r14, int r15, java.lang.Object r16, long r17, long r19, long r21, long r23, long r25, java.io.IOException r27, boolean r28) {
                r10 = this;
                r0 = r10
                com.tkay.expressad.exoplayer.h.t$b r9 = new com.tkay.expressad.exoplayer.h.t$b
                r1 = r9
                r2 = r11
                r3 = r21
                r5 = r23
                r7 = r25
                r1.<init>(r2, r3, r5, r7)
                com.tkay.expressad.exoplayer.h.t$c r1 = new com.tkay.expressad.exoplayer.h.t$c
                r2 = r17
                long r2 = r10.a(r2)
                r4 = r19
                long r4 = r10.a(r4)
                r17 = r1
                r18 = r12
                r19 = r13
                r20 = r14
                r21 = r15
                r22 = r16
                r23 = r2
                r25 = r4
                r17.<init>(r18, r19, r20, r21, r22, r23, r25)
                r2 = r27
                r3 = r28
                r10.a(r9, r1, r2, r3)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.j.k r20, java.io.IOException r21) {
                r19 = this;
                r0 = r19
                r1 = r20
                r17 = r21
                r2 = 6
                r3 = -1
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r11 = -1
                r13 = 0
                r15 = 0
                r18 = 1
                r0.a(r1, r2, r3, r4, r5, r6, r7, r9, r11, r13, r15, r17, r18)
                return
        }

        public final void b() {
                r4 = this;
                com.tkay.expressad.exoplayer.h.s$a r0 = r4.b
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.tkay.expressad.exoplayer.k.a.b(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L29
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$2 r3 = new com.tkay.expressad.exoplayer.h.t$a$2
                r3.<init>(r4, r2)
                a(r1, r3)
                goto L10
            L29:
                return
        }

        public final void b(com.tkay.expressad.exoplayer.h.t.b r5, com.tkay.expressad.exoplayer.h.t.c r6) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$4 r3 = new com.tkay.expressad.exoplayer.h.t$a$4
                r3.<init>(r4, r2, r5, r6)
                a(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void b(com.tkay.expressad.exoplayer.h.t.c r5) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$9 r3 = new com.tkay.expressad.exoplayer.h.t$a$9
                r3.<init>(r4, r2, r5)
                a(r1, r3)
                goto L6
            L1f:
                return
        }

        public final void b(com.tkay.expressad.exoplayer.j.k r11, int r12, int r13, com.tkay.expressad.exoplayer.m r14, int r15, java.lang.Object r16, long r17, long r19, long r21, long r23, long r25) {
                r10 = this;
                r0 = r10
                com.tkay.expressad.exoplayer.h.t$b r9 = new com.tkay.expressad.exoplayer.h.t$b
                r1 = r9
                r2 = r11
                r3 = r21
                r5 = r23
                r7 = r25
                r1.<init>(r2, r3, r5, r7)
                com.tkay.expressad.exoplayer.h.t$c r1 = new com.tkay.expressad.exoplayer.h.t$c
                r2 = r17
                long r2 = r10.a(r2)
                r4 = r19
                long r4 = r10.a(r4)
                r17 = r1
                r18 = r12
                r19 = r13
                r20 = r14
                r21 = r15
                r22 = r16
                r23 = r2
                r25 = r4
                r17.<init>(r18, r19, r20, r21, r22, r23, r25)
                r10.c(r9, r1)
                return
        }

        public final void c() {
                r4 = this;
                com.tkay.expressad.exoplayer.h.s$a r0 = r4.b
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.tkay.expressad.exoplayer.k.a.b(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L29
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$7 r3 = new com.tkay.expressad.exoplayer.h.t$a$7
                r3.<init>(r4, r2)
                a(r1, r3)
                goto L10
            L29:
                return
        }

        public final void c(com.tkay.expressad.exoplayer.h.t.b r5, com.tkay.expressad.exoplayer.h.t.c r6) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.h.t$a$a> r0 = r4.c
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.h.t$a$a r1 = (com.tkay.expressad.exoplayer.h.t.a.a) r1
                com.tkay.expressad.exoplayer.h.t r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.h.t$a$5 r3 = new com.tkay.expressad.exoplayer.h.t$a$5
                r3.<init>(r4, r2, r5, r6)
                a(r1, r3)
                goto L6
            L1f:
                return
        }
    }

    public static final class b {
        public final com.tkay.expressad.exoplayer.j.k a;
        public final long b;
        public final long c;
        public final long d;

        public b(com.tkay.expressad.exoplayer.j.k r1, long r2, long r4, long r6) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r4
                r0.d = r6
                return
        }
    }

    public static final class c {
        public final int a;
        public final int b;
        public final com.tkay.expressad.exoplayer.m c;
        public final int d;
        public final java.lang.Object e;
        public final long f;
        public final long g;

        public c(int r1, int r2, com.tkay.expressad.exoplayer.m r3, int r4, java.lang.Object r5, long r6, long r8) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r8
                return
        }
    }

    void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2);

    void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4);

    void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4, java.io.IOException r5, boolean r6);

    void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.c r3);

    void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2);

    void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4);

    void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.c r3);

    void c(int r1, com.tkay.expressad.exoplayer.h.s.a r2);

    void c(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4);
}
