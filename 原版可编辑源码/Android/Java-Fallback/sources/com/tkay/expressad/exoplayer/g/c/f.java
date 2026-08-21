package com.tkay.expressad.exoplayer.g.c;

public final class f extends com.tkay.expressad.exoplayer.g.c.b {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.c.f> CREATOR = null;
    public final java.util.List<com.tkay.expressad.exoplayer.g.c.f.b> a;


    public static final class a {
        public final int a;
        public final long b;

        private a(int r1, long r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        a(int r1, long r2, byte r4) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static com.tkay.expressad.exoplayer.g.c.f.a a(android.os.Parcel r4) {
                com.tkay.expressad.exoplayer.g.c.f$a r0 = new com.tkay.expressad.exoplayer.g.c.f$a
                int r1 = r4.readInt()
                long r2 = r4.readLong()
                r0.<init>(r1, r2)
                return r0
        }

        static void a(com.tkay.expressad.exoplayer.g.c.f.a r2, android.os.Parcel r3) {
                int r0 = r2.a
                r3.writeInt(r0)
                long r0 = r2.b
                r3.writeLong(r0)
                return
        }

        private static com.tkay.expressad.exoplayer.g.c.f.a b(android.os.Parcel r4) {
                com.tkay.expressad.exoplayer.g.c.f$a r0 = new com.tkay.expressad.exoplayer.g.c.f$a
                int r1 = r4.readInt()
                long r2 = r4.readLong()
                r0.<init>(r1, r2)
                return r0
        }

        private void c(android.os.Parcel r3) {
                r2 = this;
                int r0 = r2.a
                r3.writeInt(r0)
                long r0 = r2.b
                r3.writeLong(r0)
                return
        }
    }

    public static final class b {
        public final long a;
        public final boolean b;
        public final boolean c;
        public final boolean d;
        public final long e;
        public final java.util.List<com.tkay.expressad.exoplayer.g.c.f.a> f;
        public final boolean g;
        public final long h;
        public final int i;
        public final int j;
        public final int k;

        private b(long r1, boolean r3, boolean r4, boolean r5, java.util.List<com.tkay.expressad.exoplayer.g.c.f.a> r6, long r7, boolean r9, long r10, int r12, int r13, int r14) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                r0.c = r4
                r0.d = r5
                java.util.List r1 = java.util.Collections.unmodifiableList(r6)
                r0.f = r1
                r0.e = r7
                r0.g = r9
                r0.h = r10
                r0.i = r12
                r0.j = r13
                r0.k = r14
                return
        }

        private b(android.os.Parcel r7) {
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
                int r0 = r7.readInt()
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>(r0)
                r4 = r1
            L36:
                if (r4 >= r0) goto L42
                com.tkay.expressad.exoplayer.g.c.f$a r5 = com.tkay.expressad.exoplayer.g.c.f.a.a(r7)
                r3.add(r5)
                int r4 = r4 + 1
                goto L36
            L42:
                java.util.List r0 = java.util.Collections.unmodifiableList(r3)
                r6.f = r0
                long r3 = r7.readLong()
                r6.e = r3
                byte r0 = r7.readByte()
                if (r0 != r2) goto L55
                r1 = r2
            L55:
                r6.g = r1
                long r0 = r7.readLong()
                r6.h = r0
                int r0 = r7.readInt()
                r6.i = r0
                int r0 = r7.readInt()
                r6.j = r0
                int r7 = r7.readInt()
                r6.k = r7
                return
        }

        static com.tkay.expressad.exoplayer.g.c.f.b a(android.os.Parcel r1) {
                com.tkay.expressad.exoplayer.g.c.f$b r0 = new com.tkay.expressad.exoplayer.g.c.f$b
                r0.<init>(r1)
                return r0
        }

        static com.tkay.expressad.exoplayer.g.c.f.b a(com.tkay.expressad.exoplayer.k.s r21) {
                long r1 = r21.h()
                int r0 = r21.d()
                r0 = r0 & 128(0x80, float:1.8E-43)
                r4 = 0
                if (r0 == 0) goto Lf
                r5 = 1
                goto L10
            Lf:
                r5 = r4
            L10:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                if (r5 != 0) goto La8
                int r8 = r21.d()
                r9 = r8 & 128(0x80, float:1.8E-43)
                if (r9 == 0) goto L21
                r9 = 1
                goto L22
            L21:
                r9 = r4
            L22:
                r10 = r8 & 64
                if (r10 == 0) goto L28
                r10 = 1
                goto L29
            L28:
                r10 = r4
            L29:
                r11 = 32
                r8 = r8 & r11
                if (r8 == 0) goto L30
                r8 = 1
                goto L31
            L30:
                r8 = r4
            L31:
                if (r10 == 0) goto L38
                long r12 = r21.h()
                goto L3d
            L38:
                r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            L3d:
                if (r10 != 0) goto L61
                int r0 = r21.d()
                java.util.ArrayList r14 = new java.util.ArrayList
                r14.<init>(r0)
                r15 = r4
            L49:
                if (r15 >= r0) goto L60
                int r3 = r21.d()
                long r6 = r21.h()
                com.tkay.expressad.exoplayer.g.c.f$a r11 = new com.tkay.expressad.exoplayer.g.c.f$a
                r11.<init>(r3, r6, r4)
                r14.add(r11)
                int r15 = r15 + 1
                r11 = 32
                goto L49
            L60:
                r0 = r14
            L61:
                if (r8 == 0) goto L87
                int r3 = r21.d()
                long r6 = (long) r3
                r14 = 128(0x80, double:6.3E-322)
                long r14 = r14 & r6
                r16 = 0
                int r3 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
                if (r3 == 0) goto L73
                r3 = 1
                goto L74
            L73:
                r3 = r4
            L74:
                r14 = 1
                long r6 = r6 & r14
                r4 = 32
                long r6 = r6 << r4
                long r14 = r21.h()
                long r6 = r6 | r14
                r14 = 1000(0x3e8, double:4.94E-321)
                long r6 = r6 * r14
                r14 = 90
                long r6 = r6 / r14
                r4 = r3
                goto L8c
            L87:
                r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            L8c:
                int r3 = r21.e()
                int r8 = r21.d()
                int r11 = r21.d()
                r16 = r6
                r14 = r11
                r6 = r0
                r18 = r12
                r12 = r3
                r13 = r8
                r7 = r18
                r20 = r9
                r9 = r4
                r4 = r20
                goto Lb8
            La8:
                r6 = r0
                r9 = r4
                r10 = r9
                r12 = r10
                r13 = r12
                r14 = r13
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r16 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            Lb8:
                com.tkay.expressad.exoplayer.g.c.f$b r15 = new com.tkay.expressad.exoplayer.g.c.f$b
                r0 = r15
                r3 = r5
                r5 = r10
                r10 = r16
                r0.<init>(r1, r3, r4, r5, r6, r7, r9, r10, r12, r13, r14)
                return r15
        }

        private static void a(com.tkay.expressad.exoplayer.g.c.f.b r3, android.os.Parcel r4) {
                long r0 = r3.a
                r4.writeLong(r0)
                boolean r0 = r3.b
                byte r0 = (byte) r0
                r4.writeByte(r0)
                boolean r0 = r3.c
                byte r0 = (byte) r0
                r4.writeByte(r0)
                boolean r0 = r3.d
                byte r0 = (byte) r0
                r4.writeByte(r0)
                java.util.List<com.tkay.expressad.exoplayer.g.c.f$a> r0 = r3.f
                int r0 = r0.size()
                r4.writeInt(r0)
                r1 = 0
            L21:
                if (r1 >= r0) goto L31
                java.util.List<com.tkay.expressad.exoplayer.g.c.f$a> r2 = r3.f
                java.lang.Object r2 = r2.get(r1)
                com.tkay.expressad.exoplayer.g.c.f$a r2 = (com.tkay.expressad.exoplayer.g.c.f.a) r2
                com.tkay.expressad.exoplayer.g.c.f.a.a(r2, r4)
                int r1 = r1 + 1
                goto L21
            L31:
                long r0 = r3.e
                r4.writeLong(r0)
                boolean r0 = r3.g
                byte r0 = (byte) r0
                r4.writeByte(r0)
                long r0 = r3.h
                r4.writeLong(r0)
                int r0 = r3.i
                r4.writeInt(r0)
                int r0 = r3.j
                r4.writeInt(r0)
                int r3 = r3.k
                r4.writeInt(r3)
                return
        }

        private static com.tkay.expressad.exoplayer.g.c.f.b b(com.tkay.expressad.exoplayer.k.s r21) {
                long r1 = r21.h()
                int r0 = r21.d()
                r0 = r0 & 128(0x80, float:1.8E-43)
                r4 = 0
                if (r0 == 0) goto Lf
                r5 = 1
                goto L10
            Lf:
                r5 = r4
            L10:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                if (r5 != 0) goto La8
                int r8 = r21.d()
                r9 = r8 & 128(0x80, float:1.8E-43)
                if (r9 == 0) goto L21
                r9 = 1
                goto L22
            L21:
                r9 = r4
            L22:
                r10 = r8 & 64
                if (r10 == 0) goto L28
                r10 = 1
                goto L29
            L28:
                r10 = r4
            L29:
                r11 = 32
                r8 = r8 & r11
                if (r8 == 0) goto L30
                r8 = 1
                goto L31
            L30:
                r8 = r4
            L31:
                if (r10 == 0) goto L38
                long r12 = r21.h()
                goto L3d
            L38:
                r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            L3d:
                if (r10 != 0) goto L61
                int r0 = r21.d()
                java.util.ArrayList r14 = new java.util.ArrayList
                r14.<init>(r0)
                r15 = r4
            L49:
                if (r15 >= r0) goto L60
                int r3 = r21.d()
                long r6 = r21.h()
                com.tkay.expressad.exoplayer.g.c.f$a r11 = new com.tkay.expressad.exoplayer.g.c.f$a
                r11.<init>(r3, r6, r4)
                r14.add(r11)
                int r15 = r15 + 1
                r11 = 32
                goto L49
            L60:
                r0 = r14
            L61:
                if (r8 == 0) goto L87
                int r3 = r21.d()
                long r6 = (long) r3
                r14 = 128(0x80, double:6.3E-322)
                long r14 = r14 & r6
                r16 = 0
                int r3 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
                if (r3 == 0) goto L73
                r3 = 1
                goto L74
            L73:
                r3 = r4
            L74:
                r14 = 1
                long r6 = r6 & r14
                r4 = 32
                long r6 = r6 << r4
                long r14 = r21.h()
                long r6 = r6 | r14
                r14 = 1000(0x3e8, double:4.94E-321)
                long r6 = r6 * r14
                r14 = 90
                long r6 = r6 / r14
                r4 = r3
                goto L8c
            L87:
                r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            L8c:
                int r3 = r21.e()
                int r8 = r21.d()
                int r11 = r21.d()
                r16 = r6
                r14 = r11
                r6 = r0
                r18 = r12
                r12 = r3
                r13 = r8
                r7 = r18
                r20 = r9
                r9 = r4
                r4 = r20
                goto Lb8
            La8:
                r6 = r0
                r9 = r4
                r10 = r9
                r12 = r10
                r13 = r12
                r14 = r13
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r16 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            Lb8:
                com.tkay.expressad.exoplayer.g.c.f$b r15 = new com.tkay.expressad.exoplayer.g.c.f$b
                r0 = r15
                r3 = r5
                r5 = r10
                r10 = r16
                r0.<init>(r1, r3, r4, r5, r6, r7, r9, r10, r12, r13, r14)
                return r15
        }

        private void b(android.os.Parcel r4) {
                r3 = this;
                long r0 = r3.a
                r4.writeLong(r0)
                boolean r0 = r3.b
                byte r0 = (byte) r0
                r4.writeByte(r0)
                boolean r0 = r3.c
                byte r0 = (byte) r0
                r4.writeByte(r0)
                boolean r0 = r3.d
                byte r0 = (byte) r0
                r4.writeByte(r0)
                java.util.List<com.tkay.expressad.exoplayer.g.c.f$a> r0 = r3.f
                int r0 = r0.size()
                r4.writeInt(r0)
                r1 = 0
            L21:
                if (r1 >= r0) goto L31
                java.util.List<com.tkay.expressad.exoplayer.g.c.f$a> r2 = r3.f
                java.lang.Object r2 = r2.get(r1)
                com.tkay.expressad.exoplayer.g.c.f$a r2 = (com.tkay.expressad.exoplayer.g.c.f.a) r2
                com.tkay.expressad.exoplayer.g.c.f.a.a(r2, r4)
                int r1 = r1 + 1
                goto L21
            L31:
                long r0 = r3.e
                r4.writeLong(r0)
                boolean r0 = r3.g
                byte r0 = (byte) r0
                r4.writeByte(r0)
                long r0 = r3.h
                r4.writeLong(r0)
                int r0 = r3.i
                r4.writeInt(r0)
                int r0 = r3.j
                r4.writeInt(r0)
                int r0 = r3.k
                r4.writeInt(r0)
                return
        }

        private static com.tkay.expressad.exoplayer.g.c.f.b c(android.os.Parcel r1) {
                com.tkay.expressad.exoplayer.g.c.f$b r0 = new com.tkay.expressad.exoplayer.g.c.f$b
                r0.<init>(r1)
                return r0
        }
    }

    static {
            com.tkay.expressad.exoplayer.g.c.f$1 r0 = new com.tkay.expressad.exoplayer.g.c.f$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.c.f.CREATOR = r0
            return
    }

    private f(android.os.Parcel r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.readInt()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2 = 0
        Ld:
            if (r2 >= r0) goto L19
            com.tkay.expressad.exoplayer.g.c.f$b r3 = com.tkay.expressad.exoplayer.g.c.f.b.a(r5)
            r1.add(r3)
            int r2 = r2 + 1
            goto Ld
        L19:
            java.util.List r5 = java.util.Collections.unmodifiableList(r1)
            r4.a = r5
            return
    }

    f(android.os.Parcel r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private f(java.util.List<com.tkay.expressad.exoplayer.g.c.f.b> r1) {
            r0 = this;
            r0.<init>()
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            r0.a = r1
            return
    }

    static com.tkay.expressad.exoplayer.g.c.f a(com.tkay.expressad.exoplayer.k.s r4) {
            int r0 = r4.d()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2 = 0
        La:
            if (r2 >= r0) goto L16
            com.tkay.expressad.exoplayer.g.c.f$b r3 = com.tkay.expressad.exoplayer.g.c.f.b.a(r4)
            r1.add(r3)
            int r2 = r2 + 1
            goto La
        L16:
            com.tkay.expressad.exoplayer.g.c.f r4 = new com.tkay.expressad.exoplayer.g.c.f
            r4.<init>(r1)
            return r4
    }

    @Override
    public final void writeToParcel(android.os.Parcel r7, int r8) {
            r6 = this;
            java.util.List<com.tkay.expressad.exoplayer.g.c.f$b> r8 = r6.a
            int r8 = r8.size()
            r7.writeInt(r8)
            r0 = 0
            r1 = r0
        Lb:
            if (r1 >= r8) goto L68
            java.util.List<com.tkay.expressad.exoplayer.g.c.f$b> r2 = r6.a
            java.lang.Object r2 = r2.get(r1)
            com.tkay.expressad.exoplayer.g.c.f$b r2 = (com.tkay.expressad.exoplayer.g.c.f.b) r2
            long r3 = r2.a
            r7.writeLong(r3)
            boolean r3 = r2.b
            byte r3 = (byte) r3
            r7.writeByte(r3)
            boolean r3 = r2.c
            byte r3 = (byte) r3
            r7.writeByte(r3)
            boolean r3 = r2.d
            byte r3 = (byte) r3
            r7.writeByte(r3)
            java.util.List<com.tkay.expressad.exoplayer.g.c.f$a> r3 = r2.f
            int r3 = r3.size()
            r7.writeInt(r3)
            r4 = r0
        L36:
            if (r4 >= r3) goto L46
            java.util.List<com.tkay.expressad.exoplayer.g.c.f$a> r5 = r2.f
            java.lang.Object r5 = r5.get(r4)
            com.tkay.expressad.exoplayer.g.c.f$a r5 = (com.tkay.expressad.exoplayer.g.c.f.a) r5
            com.tkay.expressad.exoplayer.g.c.f.a.a(r5, r7)
            int r4 = r4 + 1
            goto L36
        L46:
            long r3 = r2.e
            r7.writeLong(r3)
            boolean r3 = r2.g
            byte r3 = (byte) r3
            r7.writeByte(r3)
            long r3 = r2.h
            r7.writeLong(r3)
            int r3 = r2.i
            r7.writeInt(r3)
            int r3 = r2.j
            r7.writeInt(r3)
            int r2 = r2.k
            r7.writeInt(r2)
            int r1 = r1 + 1
            goto Lb
        L68:
            return
    }
}
