package com.tkay.expressad.exoplayer.h;

public interface aa {

    public static class a implements com.tkay.expressad.exoplayer.h.aa {
        private final java.util.Random a;
        private final int[] b;
        private final int[] c;

        public a() {
                r2 = this;
                java.util.Random r0 = new java.util.Random
                r0.<init>()
                r1 = 0
                r2.<init>(r1, r0)
                return
        }

        private a(int r2, long r3) {
                r1 = this;
                java.util.Random r0 = new java.util.Random
                r0.<init>(r3)
                r1.<init>(r2, r0)
                return
        }

        private a(int r1, java.util.Random r2) {
                r0 = this;
                int[] r1 = a(r1, r2)
                r0.<init>(r1, r2)
                return
        }

        private a(int[] r3, java.util.Random r4) {
                r2 = this;
                r2.<init>()
                r2.b = r3
                r2.a = r4
                int r4 = r3.length
                int[] r4 = new int[r4]
                r2.c = r4
                r4 = 0
            Ld:
                int r0 = r3.length
                if (r4 >= r0) goto L19
                int[] r0 = r2.c
                r1 = r3[r4]
                r0[r1] = r4
                int r4 = r4 + 1
                goto Ld
            L19:
                return
        }

        private static int[] a(int r5, java.util.Random r6) {
                int[] r0 = new int[r5]
                r1 = 0
            L3:
                if (r1 >= r5) goto L13
                int r2 = r1 + 1
                int r3 = r6.nextInt(r2)
                r4 = r0[r3]
                r0[r1] = r4
                r0[r3] = r1
                r1 = r2
                goto L3
            L13:
                return r0
        }

        @Override
        public final int a() {
                r1 = this;
                int[] r0 = r1.b
                int r0 = r0.length
                return r0
        }

        @Override
        public final int a(int r3) {
                r2 = this;
                int[] r0 = r2.c
                r3 = r0[r3]
                int r3 = r3 + 1
                int[] r0 = r2.b
                int r1 = r0.length
                if (r3 >= r1) goto Le
                r3 = r0[r3]
                return r3
            Le:
                r3 = -1
                return r3
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.aa a(int r9, int r10) {
                r8 = this;
                int[] r0 = new int[r10]
                int[] r1 = new int[r10]
                r2 = 0
                r3 = r2
            L6:
                if (r3 >= r10) goto L26
                java.util.Random r4 = r8.a
                int[] r5 = r8.b
                int r5 = r5.length
                int r5 = r5 + 1
                int r4 = r4.nextInt(r5)
                r0[r3] = r4
                java.util.Random r4 = r8.a
                int r5 = r3 + 1
                int r4 = r4.nextInt(r5)
                r6 = r1[r4]
                r1[r3] = r6
                int r3 = r3 + r9
                r1[r4] = r3
                r3 = r5
                goto L6
            L26:
                java.util.Arrays.sort(r0)
                int[] r3 = r8.b
                int r3 = r3.length
                int r3 = r3 + r10
                int[] r3 = new int[r3]
                r4 = r2
                r5 = r4
            L31:
                int[] r6 = r8.b
                int r6 = r6.length
                int r6 = r6 + r10
                if (r2 >= r6) goto L5a
                if (r4 >= r10) goto L45
                r6 = r0[r4]
                if (r5 != r6) goto L45
                int r6 = r4 + 1
                r4 = r1[r4]
                r3[r2] = r4
                r4 = r6
                goto L57
            L45:
                int[] r6 = r8.b
                int r7 = r5 + 1
                r5 = r6[r5]
                r3[r2] = r5
                r5 = r3[r2]
                if (r5 < r9) goto L56
                r5 = r3[r2]
                int r5 = r5 + r10
                r3[r2] = r5
            L56:
                r5 = r7
            L57:
                int r2 = r2 + 1
                goto L31
            L5a:
                com.tkay.expressad.exoplayer.h.aa$a r9 = new com.tkay.expressad.exoplayer.h.aa$a
                java.util.Random r10 = new java.util.Random
                java.util.Random r0 = r8.a
                long r0 = r0.nextLong()
                r10.<init>(r0)
                r9.<init>(r3, r10)
                return r9
        }

        @Override
        public final int b() {
                r2 = this;
                int[] r0 = r2.b
                int r1 = r0.length
                if (r1 <= 0) goto Lb
                int r1 = r0.length
                int r1 = r1 + (-1)
                r0 = r0[r1]
                return r0
            Lb:
                r0 = -1
                return r0
        }

        @Override
        public final int b(int r2) {
                r1 = this;
                int[] r0 = r1.c
                r2 = r0[r2]
                r0 = -1
                int r2 = r2 + r0
                if (r2 < 0) goto Ld
                int[] r0 = r1.b
                r2 = r0[r2]
                return r2
            Ld:
                return r0
        }

        @Override
        public final int c() {
                r2 = this;
                int[] r0 = r2.b
                int r1 = r0.length
                if (r1 <= 0) goto L9
                r1 = 0
                r0 = r0[r1]
                return r0
            L9:
                r0 = -1
                return r0
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.aa c(int r8) {
                r7 = this;
                int[] r0 = r7.b
                int r0 = r0.length
                r1 = 1
                int r0 = r0 - r1
                int[] r0 = new int[r0]
                r2 = 0
                r3 = r2
            L9:
                int[] r4 = r7.b
                int r5 = r4.length
                if (r2 >= r5) goto L2b
                r4 = r4[r2]
                if (r4 != r8) goto L14
                r3 = r1
                goto L28
            L14:
                if (r3 == 0) goto L19
                int r4 = r2 + (-1)
                goto L1a
            L19:
                r4 = r2
            L1a:
                int[] r5 = r7.b
                r6 = r5[r2]
                if (r6 <= r8) goto L24
                r5 = r5[r2]
                int r5 = r5 - r1
                goto L26
            L24:
                r5 = r5[r2]
            L26:
                r0[r4] = r5
            L28:
                int r2 = r2 + 1
                goto L9
            L2b:
                com.tkay.expressad.exoplayer.h.aa$a r8 = new com.tkay.expressad.exoplayer.h.aa$a
                java.util.Random r1 = new java.util.Random
                java.util.Random r2 = r7.a
                long r2 = r2.nextLong()
                r1.<init>(r2)
                r8.<init>(r0, r1)
                return r8
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.aa d() {
                r4 = this;
                com.tkay.expressad.exoplayer.h.aa$a r0 = new com.tkay.expressad.exoplayer.h.aa$a
                java.util.Random r1 = new java.util.Random
                java.util.Random r2 = r4.a
                long r2 = r2.nextLong()
                r1.<init>(r2)
                r2 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    public static final class b implements com.tkay.expressad.exoplayer.h.aa {
        private final int a;

        public b(int r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public final int a() {
                r1 = this;
                int r0 = r1.a
                return r0
        }

        @Override
        public final int a(int r2) {
                r1 = this;
                int r2 = r2 + 1
                int r0 = r1.a
                if (r2 >= r0) goto L7
                return r2
            L7:
                r2 = -1
                return r2
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.aa a(int r2, int r3) {
                r1 = this;
                com.tkay.expressad.exoplayer.h.aa$b r2 = new com.tkay.expressad.exoplayer.h.aa$b
                int r0 = r1.a
                int r0 = r0 + r3
                r2.<init>(r0)
                return r2
        }

        @Override
        public final int b() {
                r1 = this;
                int r0 = r1.a
                if (r0 <= 0) goto L7
                int r0 = r0 + (-1)
                return r0
            L7:
                r0 = -1
                return r0
        }

        @Override
        public final int b(int r2) {
                r1 = this;
                r0 = -1
                int r2 = r2 + r0
                if (r2 < 0) goto L5
                return r2
            L5:
                return r0
        }

        @Override
        public final int c() {
                r1 = this;
                int r0 = r1.a
                if (r0 <= 0) goto L6
                r0 = 0
                return r0
            L6:
                r0 = -1
                return r0
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.aa c(int r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.h.aa$b r2 = new com.tkay.expressad.exoplayer.h.aa$b
                int r0 = r1.a
                int r0 = r0 + (-1)
                r2.<init>(r0)
                return r2
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.aa d() {
                r2 = this;
                com.tkay.expressad.exoplayer.h.aa$b r0 = new com.tkay.expressad.exoplayer.h.aa$b
                r1 = 0
                r0.<init>(r1)
                return r0
        }
    }

    int a();

    int a(int r1);

    com.tkay.expressad.exoplayer.h.aa a(int r1, int r2);

    int b();

    int b(int r1);

    int c();

    com.tkay.expressad.exoplayer.h.aa c(int r1);

    com.tkay.expressad.exoplayer.h.aa d();
}
