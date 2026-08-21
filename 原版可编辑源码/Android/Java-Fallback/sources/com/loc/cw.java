package com.loc;

public final class cw extends com.loc.cv {
    public cw() {
            r1 = this;
            r0 = 2048(0x800, float:2.87E-42)
            r1.<init>(r0)
            return
    }

    private int a(long r18, java.util.List<com.loc.eg> r20) {
            r17 = this;
            r0 = r17
            b(r20)
            int r1 = r20.size()
            if (r1 <= 0) goto L57
            int[] r2 = new int[r1]
            r3 = 0
            r4 = 0
        Lf:
            if (r4 >= r1) goto L4a
            r5 = r20
            java.lang.Object r6 = r5.get(r4)
            com.loc.eg r6 = (com.loc.eg) r6
            com.loc.cx r7 = r0.a
            java.lang.String r8 = r6.b
            int r14 = r7.a(r8)
            long r7 = r6.a
            int r9 = (r7 > r18 ? 1 : (r7 == r18 ? 0 : -1))
            if (r9 != 0) goto L32
            long r7 = r6.a
            r9 = -1
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 == 0) goto L32
            r7 = 1
            r10 = 1
            goto L33
        L32:
            r10 = 0
        L33:
            com.loc.cx r9 = r0.a
            long r11 = r6.a
            int r7 = r6.c
            short r13 = (short) r7
            short r15 = r6.g
            int r6 = r6.d
            short r6 = (short) r6
            r16 = r6
            int r6 = com.loc.ds.a(r9, r10, r11, r13, r14, r15, r16)
            r2[r4] = r6
            int r4 = r4 + 1
            goto Lf
        L4a:
            com.loc.cx r1 = r0.a
            int r1 = com.loc.dr.a(r1, r2)
            com.loc.cx r2 = r0.a
            int r1 = com.loc.dr.a(r2, r1)
            goto L58
        L57:
            r1 = -1
        L58:
            return r1
    }

    private int a(com.loc.cz.a r22) {
            r21 = this;
            r0 = r21
            r1 = r22
            java.util.List<com.loc.dz> r2 = r1.f
            a(r2)
            java.util.List<com.loc.dz> r2 = r1.f
            int r2 = r2.size()
            int[] r3 = new int[r2]
            r5 = 0
        L12:
            r6 = 2
            if (r5 >= r2) goto Lfb
            java.util.List<com.loc.dz> r8 = r1.f
            java.lang.Object r8 = r8.get(r5)
            com.loc.dz r8 = (com.loc.dz) r8
            boolean r9 = r8 instanceof com.loc.eb
            if (r9 == 0) goto L62
            r6 = r8
            com.loc.eb r6 = (com.loc.eb) r6
            boolean r9 = r6.i
            if (r9 != 0) goto L37
            com.loc.cx r9 = r0.a
            int r11 = r6.j
            int r12 = r6.k
            int r13 = r6.c
            int r6 = r6.l
            int r6 = com.loc.dm.a(r9, r11, r12, r13, r6)
            goto L5d
        L37:
            com.loc.cx r11 = r0.a
            int r12 = r6.b()
            int r13 = r6.c()
            int r14 = r6.j
            int r15 = r6.k
            int r9 = r6.c
            int r4 = r6.m
            int r7 = r6.n
            int r10 = r6.d
            int r6 = r6.l
            r16 = r9
            r17 = r4
            r18 = r7
            r19 = r10
            r20 = r6
            int r6 = com.loc.dm.a(r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)
        L5d:
            r14 = r6
            r4 = -1
            r13 = 1
            goto Le3
        L62:
            boolean r4 = r8 instanceof com.loc.ec
            if (r4 == 0) goto L8c
            r6 = 3
            r4 = r8
            com.loc.ec r4 = (com.loc.ec) r4
            com.loc.cx r9 = r0.a
            int r10 = r4.b()
            int r11 = r4.c()
            int r12 = r4.j
            int r13 = r4.k
            int r14 = r4.l
            int r15 = r4.c
            int r7 = r4.m
            int r4 = r4.d
            r16 = r7
            r17 = r4
            int r4 = com.loc.dn.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)
            r14 = r4
            r4 = -1
            r13 = 3
            goto Le3
        L8c:
            boolean r4 = r8 instanceof com.loc.ea
            if (r4 == 0) goto Lb6
            r4 = r8
            com.loc.ea r4 = (com.loc.ea) r4
            boolean r7 = r4.i
            com.loc.cx r9 = r0.a
            int r10 = r4.j
            int r11 = r4.k
            int r12 = r4.l
            int r13 = r4.m
            int r14 = r4.n
            int r15 = r4.c
            if (r7 != 0) goto Laa
            int r4 = com.loc.dg.a(r9, r10, r11, r12, r13, r14, r15)
            goto Lb2
        Laa:
            int r4 = r4.d
            r16 = r4
            int r4 = com.loc.dg.a(r9, r10, r11, r12, r13, r14, r15, r16)
        Lb2:
            r14 = r4
            r4 = -1
            r13 = 2
            goto Le3
        Lb6:
            boolean r4 = r8 instanceof com.loc.ed
            if (r4 == 0) goto Le0
            r6 = 4
            r4 = r8
            com.loc.ed r4 = (com.loc.ed) r4
            com.loc.cx r9 = r0.a
            int r10 = r4.b()
            int r11 = r4.c()
            int r12 = r4.j
            int r13 = r4.k
            int r14 = r4.l
            int r15 = r4.c
            int r7 = r4.m
            int r4 = r4.d
            r16 = r7
            r17 = r4
            int r4 = com.loc.dq.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)
            r14 = r4
            r4 = -1
            r13 = 4
            goto Le3
        Le0:
            r4 = -1
            r13 = 0
            r14 = -1
        Le3:
            if (r14 == r4) goto Lfa
            boolean r4 = r8.h
            byte r10 = (byte) r4
            boolean r4 = r8.i
            byte r11 = (byte) r4
            com.loc.cx r9 = r0.a
            int r4 = r8.g
            short r12 = (short) r4
            int r4 = com.loc.dj.a(r9, r10, r11, r12, r13, r14)
            r3[r5] = r4
            int r5 = r5 + 1
            goto L12
        Lfa:
            return r4
        Lfb:
            com.loc.cx r2 = r0.a
            java.lang.String r4 = r1.b
            int r2 = r2.a(r4)
            com.loc.cx r4 = r0.a
            int r3 = com.loc.dh.a(r4, r3)
            java.util.List<com.loc.dz> r4 = r1.g
            int r4 = r4.size()
            int[] r5 = new int[r4]
            r7 = 0
        L112:
            if (r7 >= r4) goto L185
            java.util.List<com.loc.dz> r8 = r1.g
            java.lang.Object r8 = r8.get(r7)
            com.loc.dz r8 = (com.loc.dz) r8
            long r9 = android.os.SystemClock.elapsedRealtime()
            long r11 = r8.e
            long r9 = r9 - r11
            r11 = 1000(0x3e8, double:4.94E-321)
            long r9 = r9 / r11
            r11 = 32767(0x7fff, double:1.6189E-319)
            int r13 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r13 > 0) goto L132
            r13 = 0
            int r15 = (r9 > r13 ? 1 : (r9 == r13 ? 0 : -1))
            if (r15 >= 0) goto L133
        L132:
            r9 = r11
        L133:
            boolean r11 = r8 instanceof com.loc.eb
            if (r11 == 0) goto L147
            com.loc.eb r8 = (com.loc.eb) r8
            com.loc.cx r11 = r0.a
            int r12 = r8.j
            int r8 = r8.k
        L13f:
            int r10 = (int) r9
            short r9 = (short) r10
            int r8 = com.loc.dp.a(r11, r12, r8, r9)
            r9 = 1
            goto L179
        L147:
            boolean r11 = r8 instanceof com.loc.ec
            if (r11 == 0) goto L154
            com.loc.ec r8 = (com.loc.ec) r8
            com.loc.cx r11 = r0.a
            int r12 = r8.j
            int r8 = r8.k
            goto L13f
        L154:
            boolean r11 = r8 instanceof com.loc.ea
            if (r11 == 0) goto L16a
            com.loc.ea r8 = (com.loc.ea) r8
            com.loc.cx r11 = r0.a
            int r12 = r8.j
            int r13 = r8.k
            int r8 = r8.l
            int r10 = (int) r9
            short r9 = (short) r10
            int r8 = com.loc.do.a(r11, r12, r13, r8, r9)
            r9 = 2
            goto L179
        L16a:
            boolean r11 = r8 instanceof com.loc.ed
            if (r11 == 0) goto L177
            com.loc.ed r8 = (com.loc.ed) r8
            com.loc.cx r11 = r0.a
            int r12 = r8.j
            int r8 = r8.k
            goto L13f
        L177:
            r8 = 0
            r9 = 0
        L179:
            com.loc.cx r10 = r0.a
            byte r9 = (byte) r9
            int r8 = com.loc.di.a(r10, r9, r8)
            r5[r7] = r8
            int r7 = r7 + 1
            goto L112
        L185:
            com.loc.cx r4 = r0.a
            int r4 = com.loc.dh.b(r4, r5)
            com.loc.cx r5 = r0.a
            byte r1 = r1.a
            int r1 = com.loc.dh.a(r5, r2, r1, r3, r4)
            return r1
    }

    private int a(com.loc.ef r13) {
            r12 = this;
            long r3 = r13.k
            long r1 = r13.c
            double r5 = r13.e
            r7 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            double r5 = r5 * r7
            int r5 = (int) r5
            double r9 = r13.d
            double r9 = r9 * r7
            int r6 = (int) r9
            double r7 = r13.f
            int r7 = (int) r7
            float r0 = r13.i
            int r8 = (int) r0
            float r0 = r13.g
            int r9 = (int) r0
            float r0 = r13.h
            int r0 = (int) r0
            short r10 = (short) r0
            byte r11 = r13.l
            com.loc.cx r0 = r12.a
            int r13 = com.loc.dl.a(r0, r1, r3, r5, r6, r7, r8, r9, r10, r11)
            return r13
    }

    private static void a(java.util.List<com.loc.dz> r3) {
            if (r3 == 0) goto L53
            int r0 = r3.size()
            if (r0 != 0) goto L9
            goto L53
        L9:
            java.util.Iterator r3 = r3.iterator()
        Ld:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L53
            java.lang.Object r0 = r3.next()
            com.loc.dz r0 = (com.loc.dz) r0
            boolean r1 = r0 instanceof com.loc.eb
            if (r1 == 0) goto L2f
            r1 = r0
            com.loc.eb r1 = (com.loc.eb) r1
            int r2 = r1.j
            int r1 = r1.k
        L24:
            long r1 = com.loc.dv.a(r2, r1)
            short r1 = com.loc.dv.a(r1)
            r0.g = r1
            goto Ld
        L2f:
            boolean r1 = r0 instanceof com.loc.ec
            if (r1 == 0) goto L3b
            r1 = r0
            com.loc.ec r1 = (com.loc.ec) r1
            int r2 = r1.j
            int r1 = r1.k
            goto L24
        L3b:
            boolean r1 = r0 instanceof com.loc.ed
            if (r1 == 0) goto L47
            r1 = r0
            com.loc.ed r1 = (com.loc.ed) r1
            int r2 = r1.j
            int r1 = r1.k
            goto L24
        L47:
            boolean r1 = r0 instanceof com.loc.ea
            if (r1 == 0) goto Ld
            r1 = r0
            com.loc.ea r1 = (com.loc.ea) r1
            int r2 = r1.k
            int r1 = r1.l
            goto L24
        L53:
            return
    }

    private static void b(java.util.List<com.loc.eg> r3) {
            java.util.Iterator r3 = r3.iterator()
        L4:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L19
            java.lang.Object r0 = r3.next()
            com.loc.eg r0 = (com.loc.eg) r0
            long r1 = r0.a
            short r1 = com.loc.dv.b(r1)
            r0.g = r1
            goto L4
        L19:
            return
    }

    public final byte[] a(com.loc.ef r3, com.loc.cz.a r4, long r5, java.util.List<com.loc.eg> r7) {
            r2 = this;
            super.a()
            int r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L52
            r0 = -1
            if (r4 == 0) goto L1b
            java.util.List<com.loc.dz> r1 = r4.f     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto L1b
            java.util.List<com.loc.dz> r1 = r4.f     // Catch: java.lang.Throwable -> L52
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L52
            if (r1 <= 0) goto L1b
            int r4 = r2.a(r4)     // Catch: java.lang.Throwable -> L52
            goto L1c
        L1b:
            r4 = -1
        L1c:
            if (r7 == 0) goto L28
            int r1 = r7.size()     // Catch: java.lang.Throwable -> L52
            if (r1 <= 0) goto L28
            int r0 = r2.a(r5, r7)     // Catch: java.lang.Throwable -> L52
        L28:
            com.loc.cx r5 = r2.a     // Catch: java.lang.Throwable -> L52
            com.loc.de.a(r5)     // Catch: java.lang.Throwable -> L52
            com.loc.cx r5 = r2.a     // Catch: java.lang.Throwable -> L52
            com.loc.de.a(r5, r3)     // Catch: java.lang.Throwable -> L52
            if (r4 <= 0) goto L39
            com.loc.cx r3 = r2.a     // Catch: java.lang.Throwable -> L52
            com.loc.de.c(r3, r4)     // Catch: java.lang.Throwable -> L52
        L39:
            if (r0 <= 0) goto L40
            com.loc.cx r3 = r2.a     // Catch: java.lang.Throwable -> L52
            com.loc.de.b(r3, r0)     // Catch: java.lang.Throwable -> L52
        L40:
            com.loc.cx r3 = r2.a     // Catch: java.lang.Throwable -> L52
            int r3 = com.loc.de.b(r3)     // Catch: java.lang.Throwable -> L52
            com.loc.cx r4 = r2.a     // Catch: java.lang.Throwable -> L52
            r4.c(r3)     // Catch: java.lang.Throwable -> L52
            com.loc.cx r3 = r2.a     // Catch: java.lang.Throwable -> L52
            byte[] r3 = r3.c()     // Catch: java.lang.Throwable -> L52
            goto L57
        L52:
            r3 = move-exception
            com.loc.ej.a(r3)
            r3 = 0
        L57:
            return r3
    }
}
