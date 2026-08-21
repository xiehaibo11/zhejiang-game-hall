package com.tkay.expressad.exoplayer.g.c;

public final class d extends com.tkay.expressad.exoplayer.g.c.b {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.c.d> CREATOR = null;
    public final long a;
    public final boolean b;
    public final boolean c;
    public final boolean d;
    public final boolean e;
    public final long f;
    public final long g;
    public final java.util.List<com.tkay.expressad.exoplayer.g.c.d.a> h;
    public final boolean i;
    public final long j;
    public final int k;
    public final int l;
    public final int m;


    public static final class a {
        public final int a;
        public final long b;
        public final long c;

        private a(int r1, long r2, long r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r4
                return
        }

        a(int r1, long r2, long r4, byte r6) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }

        public static com.tkay.expressad.exoplayer.g.c.d.a a(android.os.Parcel r7) {
                com.tkay.expressad.exoplayer.g.c.d$a r6 = new com.tkay.expressad.exoplayer.g.c.d$a
                int r1 = r7.readInt()
                long r2 = r7.readLong()
                long r4 = r7.readLong()
                r0 = r6
                r0.<init>(r1, r2, r4)
                return r6
        }

        private void b(android.os.Parcel r3) {
                r2 = this;
                int r0 = r2.a
                r3.writeInt(r0)
                long r0 = r2.b
                r3.writeLong(r0)
                long r0 = r2.c
                r3.writeLong(r0)
                return
        }
    }

    static {
            com.tkay.expressad.exoplayer.g.c.d$1 r0 = new com.tkay.expressad.exoplayer.g.c.d$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.c.d.CREATOR = r0
            return
    }

    private d(long r4, boolean r6, boolean r7, boolean r8, boolean r9, long r10, long r12, java.util.List<com.tkay.expressad.exoplayer.g.c.d.a> r14, boolean r15, long r16, int r18, int r19, int r20) {
            r3 = this;
            r0 = r3
            r3.<init>()
            r1 = r4
            r0.a = r1
            r1 = r6
            r0.b = r1
            r1 = r7
            r0.c = r1
            r1 = r8
            r0.d = r1
            r1 = r9
            r0.e = r1
            r1 = r10
            r0.f = r1
            r1 = r12
            r0.g = r1
            java.util.List r1 = java.util.Collections.unmodifiableList(r14)
            r0.h = r1
            r1 = r15
            r0.i = r1
            r1 = r16
            r0.j = r1
            r1 = r18
            r0.k = r1
            r1 = r19
            r0.l = r1
            r1 = r20
            r0.m = r1
            return
    }

    private d(android.os.Parcel r7) {
            r6 = this;
            r6.<init>()
            long r0 = r7.readLong()
            r6.a = r0
            byte r0 = r7.readByte()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L13
            r0 = r2
            goto L14
        L13:
            r0 = r1
        L14:
            r6.b = r0
            byte r0 = r7.readByte()
            if (r0 != r2) goto L1e
            r0 = r2
            goto L1f
        L1e:
            r0 = r1
        L1f:
            r6.c = r0
            byte r0 = r7.readByte()
            if (r0 != r2) goto L29
            r0 = r2
            goto L2a
        L29:
            r0 = r1
        L2a:
            r6.d = r0
            byte r0 = r7.readByte()
            if (r0 != r2) goto L34
            r0 = r2
            goto L35
        L34:
            r0 = r1
        L35:
            r6.e = r0
            long r3 = r7.readLong()
            r6.f = r3
            long r3 = r7.readLong()
            r6.g = r3
            int r0 = r7.readInt()
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>(r0)
            r4 = r1
        L4d:
            if (r4 >= r0) goto L59
            com.tkay.expressad.exoplayer.g.c.d$a r5 = com.tkay.expressad.exoplayer.g.c.d.a.a(r7)
            r3.add(r5)
            int r4 = r4 + 1
            goto L4d
        L59:
            java.util.List r0 = java.util.Collections.unmodifiableList(r3)
            r6.h = r0
            byte r0 = r7.readByte()
            if (r0 != r2) goto L66
            r1 = r2
        L66:
            r6.i = r1
            long r0 = r7.readLong()
            r6.j = r0
            int r0 = r7.readInt()
            r6.k = r0
            int r0 = r7.readInt()
            r6.l = r0
            int r7 = r7.readInt()
            r6.m = r7
            return
    }

    d(android.os.Parcel r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static com.tkay.expressad.exoplayer.g.c.d a(com.tkay.expressad.exoplayer.k.s r27, long r28, com.tkay.expressad.exoplayer.k.ac r30) {
            r0 = r30
            long r2 = r27.h()
            int r1 = r27.d()
            r1 = r1 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto L10
            r6 = 1
            goto L11
        L10:
            r6 = 0
        L11:
            java.util.List r1 = java.util.Collections.emptyList()
            if (r6 != 0) goto Lc9
            int r9 = r27.d()
            r10 = r9 & 128(0x80, float:1.8E-43)
            if (r10 == 0) goto L21
            r10 = 1
            goto L22
        L21:
            r10 = 0
        L22:
            r11 = r9 & 64
            if (r11 == 0) goto L28
            r11 = 1
            goto L29
        L28:
            r11 = 0
        L29:
            r12 = r9 & 32
            if (r12 == 0) goto L2f
            r12 = 1
            goto L30
        L2f:
            r12 = 0
        L30:
            r9 = r9 & 16
            if (r9 == 0) goto L36
            r9 = 1
            goto L37
        L36:
            r9 = 0
        L37:
            if (r11 == 0) goto L40
            if (r9 != 0) goto L40
            long r13 = com.tkay.expressad.exoplayer.g.c.g.a(r27, r28)
            goto L45
        L40:
            r13 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L45:
            if (r11 != 0) goto L7b
            int r1 = r27.d()
            java.util.ArrayList r15 = new java.util.ArrayList
            r15.<init>(r1)
            r4 = 0
        L51:
            if (r4 >= r1) goto L7a
            int r18 = r27.d()
            if (r9 != 0) goto L60
            long r19 = com.tkay.expressad.exoplayer.g.c.g.a(r27, r28)
            r7 = r19
            goto L65
        L60:
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L65:
            com.tkay.expressad.exoplayer.g.c.d$a r5 = new com.tkay.expressad.exoplayer.g.c.d$a
            long r21 = r0.a(r7)
            r23 = 0
            r17 = r5
            r19 = r7
            r17.<init>(r18, r19, r21, r23)
            r15.add(r5)
            int r4 = r4 + 1
            goto L51
        L7a:
            r1 = r15
        L7b:
            if (r12 == 0) goto La5
            int r4 = r27.d()
            long r4 = (long) r4
            r7 = 128(0x80, double:6.3E-322)
            long r7 = r7 & r4
            r17 = 0
            int r7 = (r7 > r17 ? 1 : (r7 == r17 ? 0 : -1))
            if (r7 == 0) goto L8e
            r16 = 1
            goto L90
        L8e:
            r16 = 0
        L90:
            r7 = 1
            long r4 = r4 & r7
            r7 = 32
            long r4 = r4 << r7
            long r7 = r27.h()
            long r4 = r4 | r7
            r7 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r7
            r7 = 90
            long r7 = r4 / r7
            r5 = r16
            goto Lab
        La5:
            r5 = 0
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        Lab:
            int r4 = r27.e()
            int r12 = r27.d()
            int r15 = r27.d()
            r16 = r4
            r24 = r11
            r17 = r12
            r18 = r15
            r12 = r1
            r25 = r13
            r13 = r5
            r14 = r7
            r7 = r9
            r5 = r10
            r8 = r25
            goto Ldf
        Lc9:
            r12 = r1
            r5 = 0
            r7 = 0
            r8 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r13 = 0
            r14 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r16 = 0
            r17 = 0
            r18 = 0
            r24 = 0
        Ldf:
            com.tkay.expressad.exoplayer.g.c.d r19 = new com.tkay.expressad.exoplayer.g.c.d
            r1 = r19
            long r10 = r0.a(r8)
            r4 = r6
            r6 = r24
            r1.<init>(r2, r4, r5, r6, r7, r8, r10, r12, r13, r14, r16, r17, r18)
            return r19
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            long r0 = r4.a
            r5.writeLong(r0)
            boolean r6 = r4.b
            byte r6 = (byte) r6
            r5.writeByte(r6)
            boolean r6 = r4.c
            byte r6 = (byte) r6
            r5.writeByte(r6)
            boolean r6 = r4.d
            byte r6 = (byte) r6
            r5.writeByte(r6)
            boolean r6 = r4.e
            byte r6 = (byte) r6
            r5.writeByte(r6)
            long r0 = r4.f
            r5.writeLong(r0)
            long r0 = r4.g
            r5.writeLong(r0)
            java.util.List<com.tkay.expressad.exoplayer.g.c.d$a> r6 = r4.h
            int r6 = r6.size()
            r5.writeInt(r6)
            r0 = 0
        L31:
            if (r0 >= r6) goto L4d
            java.util.List<com.tkay.expressad.exoplayer.g.c.d$a> r1 = r4.h
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.exoplayer.g.c.d$a r1 = (com.tkay.expressad.exoplayer.g.c.d.a) r1
            int r2 = r1.a
            r5.writeInt(r2)
            long r2 = r1.b
            r5.writeLong(r2)
            long r1 = r1.c
            r5.writeLong(r1)
            int r0 = r0 + 1
            goto L31
        L4d:
            boolean r6 = r4.i
            byte r6 = (byte) r6
            r5.writeByte(r6)
            long r0 = r4.j
            r5.writeLong(r0)
            int r6 = r4.k
            r5.writeInt(r6)
            int r6 = r4.l
            r5.writeInt(r6)
            int r6 = r4.m
            r5.writeInt(r6)
            return
    }
}
