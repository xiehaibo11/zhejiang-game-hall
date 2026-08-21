package com.tkay.expressad.exoplayer.j.a;

public final class f {
    public static final int a = 131072;

    public static class a {
        public volatile long a;
        public volatile long b;
        public volatile long c;

        public a() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.c = r0
                return
        }

        private long a() {
                r4 = this;
                long r0 = r4.a
                long r2 = r4.b
                long r0 = r0 + r2
                return r0
        }
    }

    private f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static long a(com.tkay.expressad.exoplayer.j.k r16, long r17, long r19, com.tkay.expressad.exoplayer.j.h r21, byte[] r22, com.tkay.expressad.exoplayer.k.v r23, com.tkay.expressad.exoplayer.j.a.f.a r24) {
            r1 = r21
            r0 = r22
            r2 = r24
            r3 = r16
        L8:
            if (r23 == 0) goto Ld
            r23.b()
        Ld:
            boolean r4 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            if (r4 != 0) goto L87
            com.tkay.expressad.exoplayer.j.k r4 = new com.tkay.expressad.exoplayer.j.k     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            android.net.Uri r6 = r3.c     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            byte[] r7 = r3.d     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            long r8 = r3.f     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            long r8 = r8 + r17
            long r10 = r3.e     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            long r10 = r8 - r10
            r12 = -1
            java.lang.String r14 = r3.h     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            int r5 = r3.i     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            r15 = r5 | 2
            r5 = r4
            r8 = r17
            r5.<init>(r6, r7, r8, r10, r12, r14, r15)     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            long r5 = r1.a(r4)     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r7 = r2.c     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            r9 = -1
            int r3 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r3 != 0) goto L44
            int r3 = (r5 > r9 ? 1 : (r5 == r9 ? 0 : -1))
            if (r3 == 0) goto L44
            long r7 = r4.e     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r7 = r7 + r5
            r2.c = r7     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
        L44:
            r5 = 0
        L46:
            int r3 = (r5 > r19 ? 1 : (r5 == r19 ? 0 : -1))
            if (r3 == 0) goto L81
            boolean r3 = java.lang.Thread.interrupted()     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            if (r3 != 0) goto L7b
            r3 = 0
            int r7 = (r19 > r9 ? 1 : (r19 == r9 ? 0 : -1))
            if (r7 == 0) goto L5f
            int r7 = r0.length     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r7 = (long) r7     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r11 = r19 - r5
            long r7 = java.lang.Math.min(r7, r11)     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            int r7 = (int) r7     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            goto L60
        L5f:
            int r7 = r0.length     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
        L60:
            int r3 = r1.a(r0, r3, r7)     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            r7 = -1
            if (r3 != r7) goto L73
            long r7 = r2.c     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            int r3 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r3 != 0) goto L81
            long r7 = r4.e     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r7 = r7 + r5
            r2.c = r7     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            goto L81
        L73:
            long r7 = (long) r3     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r5 = r5 + r7
            long r11 = r2.b     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            long r11 = r11 + r7
            r2.b = r11     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            goto L46
        L7b:
            java.lang.InterruptedException r3 = new java.lang.InterruptedException     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            r3.<init>()     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
            throw r3     // Catch: com.tkay.expressad.exoplayer.k.v.a -> L85 java.lang.Throwable -> L8d
        L81:
            com.tkay.expressad.exoplayer.k.af.a(r21)
            return r5
        L85:
            r3 = r4
            goto L92
        L87:
            java.lang.InterruptedException r4 = new java.lang.InterruptedException     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            r4.<init>()     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
            throw r4     // Catch: java.lang.Throwable -> L8d com.tkay.expressad.exoplayer.k.v.a -> L92
        L8d:
            r0 = move-exception
            com.tkay.expressad.exoplayer.k.af.a(r21)
            throw r0
        L92:
            com.tkay.expressad.exoplayer.k.af.a(r21)
            goto L8
    }

    private static java.lang.String a(android.net.Uri r0) {
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String a(com.tkay.expressad.exoplayer.j.k r1) {
            java.lang.String r0 = r1.h
            if (r0 == 0) goto L7
            java.lang.String r1 = r1.h
            return r1
        L7:
            android.net.Uri r1 = r1.c
            java.lang.String r1 = r1.toString()
            return r1
    }

    private static void a(com.tkay.expressad.exoplayer.j.a.a r1, java.lang.String r2) {
            java.util.NavigableSet r2 = r1.a(r2)
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r2.next()
            com.tkay.expressad.exoplayer.j.a.e r0 = (com.tkay.expressad.exoplayer.j.a.e) r0
            r1.b(r0)     // Catch: com.tkay.expressad.exoplayer.j.a.a.a -> L8
            goto L8
        L18:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.j.k r26, com.tkay.expressad.exoplayer.j.a.a r27, com.tkay.expressad.exoplayer.j.a.c r28, byte[] r29, com.tkay.expressad.exoplayer.k.v r30, com.tkay.expressad.exoplayer.j.a.f.a r31, java.util.concurrent.atomic.AtomicBoolean r32) {
            r9 = r26
            r10 = r27
            r6 = r31
            com.tkay.expressad.exoplayer.k.a.a(r28)
            com.tkay.expressad.exoplayer.k.a.a(r29)
            r11 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r13 = -1
            r7 = 0
            if (r6 == 0) goto L62
            java.lang.String r15 = a(r26)
            long r0 = r9.e
            long r2 = r9.g
            int r2 = (r2 > r13 ? 1 : (r2 == r13 ? 0 : -1))
            if (r2 == 0) goto L26
            long r2 = r9.g
            goto L2a
        L26:
            long r2 = r10.b(r15)
        L2a:
            r6.c = r2
            r6.a = r7
            r6.b = r7
            r16 = r0
            r18 = r2
        L34:
            int r0 = (r18 > r7 ? 1 : (r18 == r7 ? 0 : -1))
            if (r0 == 0) goto L60
            int r20 = (r18 > r13 ? 1 : (r18 == r13 ? 0 : -1))
            if (r20 == 0) goto L3f
            r4 = r18
            goto L40
        L3f:
            r4 = r11
        L40:
            r0 = r27
            r1 = r15
            r2 = r16
            long r0 = r0.b(r1, r2, r4)
            int r2 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r2 <= 0) goto L53
            long r2 = r6.a
            long r2 = r2 + r0
            r6.a = r2
            goto L58
        L53:
            long r0 = -r0
            int r2 = (r0 > r11 ? 1 : (r0 == r11 ? 0 : -1))
            if (r2 == 0) goto L60
        L58:
            long r16 = r16 + r0
            if (r20 != 0) goto L5d
            r0 = r7
        L5d:
            long r18 = r18 - r0
            goto L34
        L60:
            r15 = r6
            goto L68
        L62:
            com.tkay.expressad.exoplayer.j.a.f$a r0 = new com.tkay.expressad.exoplayer.j.a.f$a
            r0.<init>()
            r15 = r0
        L68:
            java.lang.String r6 = a(r26)
            long r0 = r9.e
            long r2 = r9.g
            int r2 = (r2 > r13 ? 1 : (r2 == r13 ? 0 : -1))
            if (r2 == 0) goto L77
            long r2 = r9.g
            goto L7b
        L77:
            long r2 = r10.b(r6)
        L7b:
            r16 = r0
            r18 = r2
        L7f:
            int r0 = (r18 > r7 ? 1 : (r18 == r7 ? 0 : -1))
            if (r0 == 0) goto Ld6
            if (r32 == 0) goto L92
            boolean r0 = r32.get()
            if (r0 != 0) goto L8c
            goto L92
        L8c:
            java.lang.InterruptedException r0 = new java.lang.InterruptedException
            r0.<init>()
            throw r0
        L92:
            int r20 = (r18 > r13 ? 1 : (r18 == r13 ? 0 : -1))
            if (r20 == 0) goto L99
            r4 = r18
            goto L9a
        L99:
            r4 = r11
        L9a:
            r0 = r27
            r1 = r6
            r2 = r16
            long r0 = r0.b(r1, r2, r4)
            int r2 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r2 > 0) goto Lc4
            long r3 = -r0
            r0 = r26
            r1 = r16
            r21 = r3
            r5 = r28
            r23 = r6
            r6 = r29
            r24 = r7
            r7 = r30
            r8 = r15
            long r0 = a(r0, r1, r3, r5, r6, r7, r8)
            int r0 = (r0 > r21 ? 1 : (r0 == r21 ? 0 : -1))
            if (r0 < 0) goto Ld6
            r7 = r21
            goto Lc9
        Lc4:
            r23 = r6
            r24 = r7
            r7 = r0
        Lc9:
            long r16 = r16 + r7
            if (r20 != 0) goto Lcf
            r7 = r24
        Lcf:
            long r18 = r18 - r7
            r6 = r23
            r7 = r24
            goto L7f
        Ld6:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.j.k r20, com.tkay.expressad.exoplayer.j.a.a r21, com.tkay.expressad.exoplayer.j.a.f.a r22) {
            r0 = r20
            r1 = r22
            java.lang.String r8 = a(r20)
            long r2 = r0.e
            long r4 = r0.g
            r9 = -1
            int r4 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r4 == 0) goto L17
            long r4 = r0.g
            r0 = r21
            goto L1d
        L17:
            r0 = r21
            long r4 = r0.b(r8)
        L1d:
            r1.c = r4
            r11 = 0
            r1.a = r11
            r1.b = r11
            r13 = r2
            r15 = r4
        L27:
            int r2 = (r15 > r11 ? 1 : (r15 == r11 ? 0 : -1))
            if (r2 == 0) goto L56
            int r17 = (r15 > r9 ? 1 : (r15 == r9 ? 0 : -1))
            r18 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            if (r17 == 0) goto L36
            r6 = r15
            goto L38
        L36:
            r6 = r18
        L38:
            r2 = r21
            r3 = r8
            r4 = r13
            long r2 = r2.b(r3, r4, r6)
            int r4 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r4 <= 0) goto L4a
            long r4 = r1.a
            long r4 = r4 + r2
            r1.a = r4
            goto L50
        L4a:
            long r2 = -r2
            int r4 = (r2 > r18 ? 1 : (r2 == r18 ? 0 : -1))
            if (r4 != 0) goto L50
            return
        L50:
            long r13 = r13 + r2
            if (r17 != 0) goto L54
            r2 = r11
        L54:
            long r15 = r15 - r2
            goto L27
        L56:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.j.k r29, com.tkay.expressad.exoplayer.j.a.a r30, com.tkay.expressad.exoplayer.j.h r31, com.tkay.expressad.exoplayer.j.a.f.a r32, java.util.concurrent.atomic.AtomicBoolean r33) {
            r9 = r29
            r10 = r30
            r6 = r32
            com.tkay.expressad.exoplayer.j.a.c r11 = new com.tkay.expressad.exoplayer.j.a.c
            r0 = r31
            r11.<init>(r10, r0)
            r0 = 131072(0x20000, float:1.83671E-40)
            byte[] r12 = new byte[r0]
            com.tkay.expressad.exoplayer.k.a.a(r11)
            com.tkay.expressad.exoplayer.k.a.a(r12)
            r13 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r15 = -1
            r7 = 0
            if (r6 == 0) goto L75
            java.lang.String r4 = a(r29)
            long r0 = r9.e
            long r2 = r9.g
            int r2 = (r2 > r15 ? 1 : (r2 == r15 ? 0 : -1))
            if (r2 == 0) goto L31
            long r2 = r9.g
            goto L35
        L31:
            long r2 = r10.b(r4)
        L35:
            r6.c = r2
            r6.a = r7
            r6.b = r7
            r17 = r0
            r19 = r2
        L3f:
            int r0 = (r19 > r7 ? 1 : (r19 == r7 ? 0 : -1))
            if (r0 == 0) goto L72
            int r21 = (r19 > r15 ? 1 : (r19 == r15 ? 0 : -1))
            if (r21 == 0) goto L4a
            r22 = r19
            goto L4c
        L4a:
            r22 = r13
        L4c:
            r0 = r30
            r1 = r4
            r2 = r17
            r24 = r4
            r4 = r22
            long r0 = r0.b(r1, r2, r4)
            int r2 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r2 <= 0) goto L63
            long r2 = r6.a
            long r2 = r2 + r0
            r6.a = r2
            goto L68
        L63:
            long r0 = -r0
            int r2 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r2 == 0) goto L72
        L68:
            long r17 = r17 + r0
            if (r21 != 0) goto L6d
            r0 = r7
        L6d:
            long r19 = r19 - r0
            r4 = r24
            goto L3f
        L72:
            r17 = r6
            goto L7c
        L75:
            com.tkay.expressad.exoplayer.j.a.f$a r0 = new com.tkay.expressad.exoplayer.j.a.f$a
            r0.<init>()
            r17 = r0
        L7c:
            java.lang.String r6 = a(r29)
            long r0 = r9.e
            long r2 = r9.g
            int r2 = (r2 > r15 ? 1 : (r2 == r15 ? 0 : -1))
            if (r2 == 0) goto L8b
            long r2 = r9.g
            goto L8f
        L8b:
            long r2 = r10.b(r6)
        L8f:
            r18 = r0
            r20 = r2
        L93:
            int r0 = (r20 > r7 ? 1 : (r20 == r7 ? 0 : -1))
            if (r0 == 0) goto Leb
            if (r33 == 0) goto La6
            boolean r0 = r33.get()
            if (r0 != 0) goto La0
            goto La6
        La0:
            java.lang.InterruptedException r0 = new java.lang.InterruptedException
            r0.<init>()
            throw r0
        La6:
            int r22 = (r20 > r15 ? 1 : (r20 == r15 ? 0 : -1))
            if (r22 == 0) goto Lad
            r4 = r20
            goto Lae
        Lad:
            r4 = r13
        Lae:
            r0 = r30
            r1 = r6
            r2 = r18
            long r0 = r0.b(r1, r2, r4)
            int r2 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r2 > 0) goto Ld9
            long r3 = -r0
            r23 = 0
            r0 = r29
            r1 = r18
            r24 = r3
            r5 = r11
            r26 = r6
            r6 = r12
            r27 = r7
            r7 = r23
            r8 = r17
            long r0 = a(r0, r1, r3, r5, r6, r7, r8)
            int r0 = (r0 > r24 ? 1 : (r0 == r24 ? 0 : -1))
            if (r0 < 0) goto Leb
            r7 = r24
            goto Lde
        Ld9:
            r26 = r6
            r27 = r7
            r7 = r0
        Lde:
            long r18 = r18 + r7
            if (r22 != 0) goto Le4
            r7 = r27
        Le4:
            long r20 = r20 - r7
            r6 = r26
            r7 = r27
            goto L93
        Leb:
            return
    }
}
