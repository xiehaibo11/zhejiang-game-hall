package com.tkay.expressad.exoplayer;

public final class m implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.m> CREATOR = null;
    public static final int a = -1;
    public static final long b = Long.MAX_VALUE;
    public final java.lang.String A;
    public final int B;
    private int C;
    public final java.lang.String c;
    public final int d;
    public final java.lang.String e;
    public final com.tkay.expressad.exoplayer.g.a f;
    public final java.lang.String g;
    public final java.lang.String h;
    public final int i;
    public final java.util.List<byte[]> j;
    public final com.tkay.expressad.exoplayer.d.e k;
    public final long l;
    public final int m;
    public final int n;
    public final float o;
    public final int p;
    public final float q;
    public final int r;
    public final byte[] s;
    public final com.tkay.expressad.exoplayer.l.b t;
    public final int u;
    public final int v;
    public final int w;
    public final int x;
    public final int y;
    public final int z;


    static {
            com.tkay.expressad.exoplayer.m$1 r0 = new com.tkay.expressad.exoplayer.m$1
            r0.<init>()
            com.tkay.expressad.exoplayer.m.CREATOR = r0
            return
    }

    m(android.os.Parcel r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = r5.readString()
            r4.c = r0
            java.lang.String r0 = r5.readString()
            r4.g = r0
            java.lang.String r0 = r5.readString()
            r4.h = r0
            java.lang.String r0 = r5.readString()
            r4.e = r0
            int r0 = r5.readInt()
            r4.d = r0
            int r0 = r5.readInt()
            r4.i = r0
            int r0 = r5.readInt()
            r4.m = r0
            int r0 = r5.readInt()
            r4.n = r0
            float r0 = r5.readFloat()
            r4.o = r0
            int r0 = r5.readInt()
            r4.p = r0
            float r0 = r5.readFloat()
            r4.q = r0
            boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r5)
            if (r0 == 0) goto L50
            byte[] r0 = r5.createByteArray()
            goto L51
        L50:
            r0 = 0
        L51:
            r4.s = r0
            int r0 = r5.readInt()
            r4.r = r0
            java.lang.Class<com.tkay.expressad.exoplayer.l.b> r0 = com.tkay.expressad.exoplayer.l.b.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r5.readParcelable(r0)
            com.tkay.expressad.exoplayer.l.b r0 = (com.tkay.expressad.exoplayer.l.b) r0
            r4.t = r0
            int r0 = r5.readInt()
            r4.u = r0
            int r0 = r5.readInt()
            r4.v = r0
            int r0 = r5.readInt()
            r4.w = r0
            int r0 = r5.readInt()
            r4.x = r0
            int r0 = r5.readInt()
            r4.y = r0
            int r0 = r5.readInt()
            r4.z = r0
            java.lang.String r0 = r5.readString()
            r4.A = r0
            int r0 = r5.readInt()
            r4.B = r0
            long r0 = r5.readLong()
            r4.l = r0
            int r0 = r5.readInt()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r4.j = r1
            r1 = 0
        La9:
            if (r1 >= r0) goto Lb7
            java.util.List<byte[]> r2 = r4.j
            byte[] r3 = r5.createByteArray()
            r2.add(r3)
            int r1 = r1 + 1
            goto La9
        Lb7:
            java.lang.Class<com.tkay.expressad.exoplayer.d.e> r0 = com.tkay.expressad.exoplayer.d.e.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r5.readParcelable(r0)
            com.tkay.expressad.exoplayer.d.e r0 = (com.tkay.expressad.exoplayer.d.e) r0
            r4.k = r0
            java.lang.Class<com.tkay.expressad.exoplayer.g.a> r0 = com.tkay.expressad.exoplayer.g.a.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r5 = r5.readParcelable(r0)
            com.tkay.expressad.exoplayer.g.a r5 = (com.tkay.expressad.exoplayer.g.a) r5
            r4.f = r5
            return
    }

    private m(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, int r9, int r10, int r11, int r12, float r13, int r14, float r15, byte[] r16, int r17, com.tkay.expressad.exoplayer.l.b r18, int r19, int r20, int r21, int r22, int r23, int r24, java.lang.String r25, int r26, long r27, java.util.List<byte[]> r29, com.tkay.expressad.exoplayer.d.e r30, com.tkay.expressad.exoplayer.g.a r31) {
            r4 = this;
            r0 = r4
            r4.<init>()
            r1 = r5
            r0.c = r1
            r1 = r6
            r0.g = r1
            r1 = r7
            r0.h = r1
            r1 = r8
            r0.e = r1
            r1 = r9
            r0.d = r1
            r1 = r10
            r0.i = r1
            r1 = r11
            r0.m = r1
            r1 = r12
            r0.n = r1
            r1 = r13
            r0.o = r1
            r1 = 0
            r2 = -1
            r3 = r14
            if (r3 != r2) goto L25
            r3 = r1
        L25:
            r0.p = r3
            r3 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r3 = (r15 > r3 ? 1 : (r15 == r3 ? 0 : -1))
            if (r3 != 0) goto L30
            r3 = 1065353216(0x3f800000, float:1.0)
            goto L31
        L30:
            r3 = r15
        L31:
            r0.q = r3
            r3 = r16
            r0.s = r3
            r3 = r17
            r0.r = r3
            r3 = r18
            r0.t = r3
            r3 = r19
            r0.u = r3
            r3 = r20
            r0.v = r3
            r3 = r21
            r0.w = r3
            r3 = r22
            if (r3 != r2) goto L50
            r3 = r1
        L50:
            r0.x = r3
            r3 = r23
            if (r3 != r2) goto L57
            goto L58
        L57:
            r1 = r3
        L58:
            r0.y = r1
            r1 = r24
            r0.z = r1
            r1 = r25
            r0.A = r1
            r1 = r26
            r0.B = r1
            r1 = r27
            r0.l = r1
            if (r29 != 0) goto L71
            java.util.List r1 = java.util.Collections.emptyList()
            goto L73
        L71:
            r1 = r29
        L73:
            r0.j = r1
            r1 = r30
            r0.k = r1
            r1 = r31
            r0.f = r1
            return
    }

    public static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30) {
            r1 = r29
            r3 = r30
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r2 = 0
            r4 = 0
            r5 = -1
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r20 = 0
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r11, java.lang.String r12, int r13, java.lang.String r14) {
            java.util.List r10 = java.util.Collections.emptyList()
            r7 = 0
            r2 = 0
            r3 = -1
            r6 = -1
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r11
            r1 = r12
            r4 = r13
            r5 = r14
            com.tkay.expressad.exoplayer.m r11 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r11
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r11, java.lang.String r12, int r13, java.lang.String r14, com.tkay.expressad.exoplayer.d.e r15) {
            java.util.List r10 = java.util.Collections.emptyList()
            r2 = 0
            r3 = -1
            r6 = -1
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r11
            r1 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            com.tkay.expressad.exoplayer.m r11 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r11
    }

    public static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, int r34, int r35, float r36, java.util.List<byte[]> r37, int r38, float r39, byte[] r40, int r41, com.tkay.expressad.exoplayer.l.b r42, com.tkay.expressad.exoplayer.d.e r43) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r6 = r33
            r7 = r34
            r8 = r35
            r9 = r36
            r25 = r37
            r10 = r38
            r11 = r39
            r12 = r40
            r13 = r41
            r14 = r42
            r26 = r43
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r2 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r20 = 0
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r15, java.lang.String r16, java.lang.String r17, int r18, int r19, int r20, int r21, float r22, java.util.List<byte[]> r23, com.tkay.expressad.exoplayer.d.e r24) {
            r9 = -1
            r10 = -1082130432(0xffffffffbf800000, float:-1.0)
            r11 = 0
            r12 = -1
            r13 = 0
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r14 = r24
            com.tkay.expressad.exoplayer.m r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    private com.tkay.expressad.exoplayer.m a(java.lang.String r32, java.lang.String r33, java.lang.String r34, int r35, int r36, int r37, int r38, java.lang.String r39) {
            r31 = this;
            r0 = r31
            r2 = r32
            r4 = r33
            r5 = r34
            r6 = r35
            r8 = r36
            r9 = r37
            r21 = r38
            r22 = r39
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r3 = r0.g
            int r7 = r0.i
            float r10 = r0.o
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r32 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.B
            r23 = r1
            r30 = r2
            long r1 = r0.l
            r24 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.d.e r1 = r0.k
            r27 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public static com.tkay.expressad.exoplayer.m a(java.lang.String r11, java.lang.String r12, java.lang.String r13, int r14, int r15, int r16, int r17, java.util.List<byte[]> r18, com.tkay.expressad.exoplayer.d.e r19, java.lang.String r20) {
            r10 = 0
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            com.tkay.expressad.exoplayer.m r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, int r34, int r35, java.util.List<byte[]> r36, com.tkay.expressad.exoplayer.d.e r37, java.lang.String r38, com.tkay.expressad.exoplayer.g.a r39) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r15 = r33
            r16 = r34
            r17 = r35
            r25 = r36
            r26 = r37
            r21 = r38
            r27 = r39
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r2 = 0
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r18 = -1
            r19 = -1
            r20 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.tkay.expressad.exoplayer.m a(java.lang.String r10, java.lang.String r11, java.lang.String r12, int r13, int r14, int r15, java.util.List<byte[]> r16, com.tkay.expressad.exoplayer.d.e r17, java.lang.String r18) {
            r6 = -1
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            com.tkay.expressad.exoplayer.m r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r11, java.lang.String r12, java.lang.String r13, int r14, int r15, java.lang.String r16, int r17, com.tkay.expressad.exoplayer.d.e r18) {
            java.util.List r10 = java.util.Collections.emptyList()
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            com.tkay.expressad.exoplayer.m r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r0
    }

    public static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, java.lang.String r34, int r35, com.tkay.expressad.exoplayer.d.e r36, long r37, java.util.List<byte[]> r39) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r20 = r33
            r21 = r34
            r22 = r35
            r26 = r36
            r23 = r37
            r25 = r39
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r2 = 0
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r11, java.lang.String r12, java.lang.String r13, int r14, int r15, java.lang.String r16, com.tkay.expressad.exoplayer.d.e r17, long r18) {
            java.util.List r10 = java.util.Collections.emptyList()
            r6 = -1
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r7 = r17
            r8 = r18
            com.tkay.expressad.exoplayer.m r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r0
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, java.util.List<byte[]> r34, java.lang.String r35, com.tkay.expressad.exoplayer.d.e r36) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r20 = r33
            r25 = r34
            r21 = r35
            r26 = r36
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r2 = 0
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, com.tkay.expressad.exoplayer.d.e r32) {
            r1 = r29
            r3 = r30
            r4 = r31
            r26 = r32
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r2 = 0
            r5 = -1
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r20 = 0
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, int r35, float r36, java.util.List<byte[]> r37, int r38) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r7 = r34
            r8 = r35
            r9 = r36
            r25 = r37
            r20 = r38
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r6 = -1
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, int r35, java.util.List<byte[]> r36, int r37, java.lang.String r38) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r15 = r34
            r16 = r35
            r25 = r36
            r20 = r37
            r21 = r38
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m a(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, java.lang.String r35) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r20 = r34
            r21 = r35
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private com.tkay.expressad.exoplayer.m b(int r32) {
            r31 = this;
            r0 = r31
            r11 = r32
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            java.lang.String r5 = r0.e
            int r6 = r0.d
            int r7 = r0.i
            int r8 = r0.m
            int r9 = r0.n
            float r10 = r0.o
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r32 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.z
            r21 = r1
            java.lang.String r1 = r0.A
            r22 = r1
            int r1 = r0.B
            r23 = r1
            r30 = r2
            long r1 = r0.l
            r24 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.d.e r1 = r0.k
            r27 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    private static com.tkay.expressad.exoplayer.m b(java.lang.String r15, java.lang.String r16, java.lang.String r17, int r18, int r19, int r20, int r21, float r22, java.util.List<byte[]> r23, com.tkay.expressad.exoplayer.d.e r24) {
            r9 = -1
            r10 = -1082130432(0xffffffffbf800000, float:-1.0)
            r11 = 0
            r12 = -1
            r13 = 0
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r14 = r24
            com.tkay.expressad.exoplayer.m r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    private static com.tkay.expressad.exoplayer.m b(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, java.lang.String r35) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r20 = r34
            r21 = r35
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    private static com.tkay.expressad.exoplayer.m c(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, java.lang.String r35) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r20 = r34
            r21 = r35
            com.tkay.expressad.exoplayer.m r28 = new com.tkay.expressad.exoplayer.m
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static java.lang.String c(com.tkay.expressad.exoplayer.m r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = "null"
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "id="
            r0.append(r1)
            java.lang.String r1 = r4.c
            r0.append(r1)
            java.lang.String r1 = ", mimeType="
            r0.append(r1)
            java.lang.String r1 = r4.h
            r0.append(r1)
            int r1 = r4.d
            r2 = -1
            if (r1 == r2) goto L2d
            java.lang.String r1 = ", bitrate="
            r0.append(r1)
            int r1 = r4.d
            r0.append(r1)
        L2d:
            int r1 = r4.m
            if (r1 == r2) goto L49
            int r1 = r4.n
            if (r1 == r2) goto L49
            java.lang.String r1 = ", res="
            r0.append(r1)
            int r1 = r4.m
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            int r1 = r4.n
            r0.append(r1)
        L49:
            float r1 = r4.o
            r3 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L5b
            java.lang.String r1 = ", fps="
            r0.append(r1)
            float r1 = r4.o
            r0.append(r1)
        L5b:
            int r1 = r4.u
            if (r1 == r2) goto L69
            java.lang.String r1 = ", channels="
            r0.append(r1)
            int r1 = r4.u
            r0.append(r1)
        L69:
            int r1 = r4.v
            if (r1 == r2) goto L77
            java.lang.String r1 = ", sample_rate="
            r0.append(r1)
            int r1 = r4.v
            r0.append(r1)
        L77:
            java.lang.String r1 = r4.A
            if (r1 == 0) goto L85
            java.lang.String r1 = ", language="
            r0.append(r1)
            java.lang.String r4 = r4.A
            r0.append(r4)
        L85:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public final int a() {
            r3 = this;
            int r0 = r3.m
            r1 = -1
            if (r0 == r1) goto Lc
            int r2 = r3.n
            if (r2 != r1) goto La
            goto Lc
        La:
            int r0 = r0 * r2
            return r0
        Lc:
            return r1
    }

    public final com.tkay.expressad.exoplayer.m a(int r32) {
            r31 = this;
            r0 = r31
            r7 = r32
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            java.lang.String r5 = r0.e
            int r6 = r0.d
            int r8 = r0.m
            int r9 = r0.n
            float r10 = r0.o
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r32 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.z
            r21 = r1
            java.lang.String r1 = r0.A
            r22 = r1
            int r1 = r0.B
            r23 = r1
            r30 = r2
            long r1 = r0.l
            r24 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.d.e r1 = r0.k
            r27 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.tkay.expressad.exoplayer.m a(int r31, int r32) {
            r30 = this;
            r0 = r30
            r19 = r31
            r20 = r32
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            java.lang.String r5 = r0.e
            int r6 = r0.d
            int r7 = r0.i
            int r8 = r0.m
            int r9 = r0.n
            float r10 = r0.o
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r31 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.z
            r21 = r1
            java.lang.String r1 = r0.A
            r22 = r1
            int r1 = r0.B
            r23 = r1
            r32 = r2
            long r1 = r0.l
            r24 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.d.e r1 = r0.k
            r27 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r31
            r2 = r32
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.tkay.expressad.exoplayer.m a(long r31) {
            r30 = this;
            r0 = r30
            r24 = r31
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            java.lang.String r5 = r0.e
            int r6 = r0.d
            int r7 = r0.i
            int r8 = r0.m
            int r9 = r0.n
            float r10 = r0.o
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r31 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.z
            r21 = r1
            java.lang.String r1 = r0.A
            r22 = r1
            int r1 = r0.B
            r23 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.d.e r1 = r0.k
            r27 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r31
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.d.e r32) {
            r31 = this;
            r0 = r31
            r27 = r32
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            java.lang.String r5 = r0.e
            int r6 = r0.d
            int r7 = r0.i
            int r8 = r0.m
            int r9 = r0.n
            float r10 = r0.o
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r32 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.z
            r21 = r1
            java.lang.String r1 = r0.A
            r22 = r1
            int r1 = r0.B
            r23 = r1
            r30 = r2
            long r1 = r0.l
            r24 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.g.a r32) {
            r31 = this;
            r0 = r31
            r28 = r32
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r2 = r0.c
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            java.lang.String r5 = r0.e
            int r6 = r0.d
            int r7 = r0.i
            int r8 = r0.m
            int r9 = r0.n
            float r10 = r0.o
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r32 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.z
            r21 = r1
            java.lang.String r1 = r0.A
            r22 = r1
            int r1 = r0.B
            r23 = r1
            r30 = r2
            long r1 = r0.l
            r24 = r1
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.d.e r1 = r0.k
            r27 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.m r33) {
            r32 = this;
            r0 = r32
            r1 = r33
            if (r0 != r1) goto L7
            return r0
        L7:
            java.lang.String r2 = r1.c
            java.lang.String r3 = r0.e
            if (r3 != 0) goto Lf
            java.lang.String r3 = r1.e
        Lf:
            r5 = r3
            int r3 = r0.d
            r4 = -1
            if (r3 != r4) goto L17
            int r3 = r1.d
        L17:
            r6 = r3
            float r3 = r0.o
            r4 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r4 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r4 != 0) goto L22
            float r3 = r1.o
        L22:
            r10 = r3
            int r3 = r0.z
            int r4 = r1.z
            r21 = r3 | r4
            java.lang.String r3 = r0.A
            if (r3 != 0) goto L2f
            java.lang.String r3 = r1.A
        L2f:
            r22 = r3
            com.tkay.expressad.exoplayer.d.e r1 = r1.k
            com.tkay.expressad.exoplayer.d.e r3 = r0.k
            com.tkay.expressad.exoplayer.d.e r27 = com.tkay.expressad.exoplayer.d.e.a(r1, r3)
            com.tkay.expressad.exoplayer.m r29 = new com.tkay.expressad.exoplayer.m
            r1 = r29
            java.lang.String r3 = r0.g
            java.lang.String r4 = r0.h
            int r7 = r0.i
            int r8 = r0.m
            int r9 = r0.n
            int r11 = r0.p
            float r12 = r0.q
            byte[] r13 = r0.s
            int r14 = r0.r
            com.tkay.expressad.exoplayer.l.b r15 = r0.t
            r33 = r1
            int r1 = r0.u
            r16 = r1
            int r1 = r0.v
            r17 = r1
            int r1 = r0.w
            r18 = r1
            int r1 = r0.x
            r19 = r1
            int r1 = r0.y
            r20 = r1
            int r1 = r0.B
            r23 = r1
            r30 = r3
            r31 = r4
            long r3 = r0.l
            r24 = r3
            java.util.List<byte[]> r1 = r0.j
            r26 = r1
            com.tkay.expressad.exoplayer.g.a r1 = r0.f
            r28 = r1
            r1 = r33
            r3 = r30
            r4 = r31
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final boolean b(com.tkay.expressad.exoplayer.m r5) {
            r4 = this;
            java.util.List<byte[]> r0 = r4.j
            int r0 = r0.size()
            java.util.List<byte[]> r1 = r5.j
            int r1 = r1.size()
            r2 = 0
            if (r0 == r1) goto L10
            return r2
        L10:
            r0 = r2
        L11:
            java.util.List<byte[]> r1 = r4.j
            int r1 = r1.size()
            if (r0 >= r1) goto L33
            java.util.List<byte[]> r1 = r4.j
            java.lang.Object r1 = r1.get(r0)
            byte[] r1 = (byte[]) r1
            java.util.List<byte[]> r3 = r5.j
            java.lang.Object r3 = r3.get(r0)
            byte[] r3 = (byte[]) r3
            boolean r1 = java.util.Arrays.equals(r1, r3)
            if (r1 != 0) goto L30
            return r2
        L30:
            int r0 = r0 + 1
            goto L11
        L33:
            r5 = 1
            return r5
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto Ldc
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L13
            goto Ldc
        L13:
            com.tkay.expressad.exoplayer.m r7 = (com.tkay.expressad.exoplayer.m) r7
            int r2 = r6.d
            int r3 = r7.d
            if (r2 != r3) goto Ldc
            int r2 = r6.i
            int r3 = r7.i
            if (r2 != r3) goto Ldc
            int r2 = r6.m
            int r3 = r7.m
            if (r2 != r3) goto Ldc
            int r2 = r6.n
            int r3 = r7.n
            if (r2 != r3) goto Ldc
            float r2 = r6.o
            float r3 = r7.o
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto Ldc
            int r2 = r6.p
            int r3 = r7.p
            if (r2 != r3) goto Ldc
            float r2 = r6.q
            float r3 = r7.q
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto Ldc
            int r2 = r6.r
            int r3 = r7.r
            if (r2 != r3) goto Ldc
            int r2 = r6.u
            int r3 = r7.u
            if (r2 != r3) goto Ldc
            int r2 = r6.v
            int r3 = r7.v
            if (r2 != r3) goto Ldc
            int r2 = r6.w
            int r3 = r7.w
            if (r2 != r3) goto Ldc
            int r2 = r6.x
            int r3 = r7.x
            if (r2 != r3) goto Ldc
            int r2 = r6.y
            int r3 = r7.y
            if (r2 != r3) goto Ldc
            long r2 = r6.l
            long r4 = r7.l
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto Ldc
            int r2 = r6.z
            int r3 = r7.z
            if (r2 != r3) goto Ldc
            java.lang.String r2 = r6.c
            java.lang.String r3 = r7.c
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.A
            java.lang.String r3 = r7.A
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            int r2 = r6.B
            int r3 = r7.B
            if (r2 != r3) goto Ldc
            java.lang.String r2 = r6.g
            java.lang.String r3 = r7.g
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.h
            java.lang.String r3 = r7.h
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.e
            java.lang.String r3 = r7.e
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            com.tkay.expressad.exoplayer.d.e r2 = r6.k
            com.tkay.expressad.exoplayer.d.e r3 = r7.k
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            com.tkay.expressad.exoplayer.g.a r2 = r6.f
            com.tkay.expressad.exoplayer.g.a r3 = r7.f
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            com.tkay.expressad.exoplayer.l.b r2 = r6.t
            com.tkay.expressad.exoplayer.l.b r3 = r7.t
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto Ldc
            byte[] r2 = r6.s
            byte[] r3 = r7.s
            boolean r2 = java.util.Arrays.equals(r2, r3)
            if (r2 == 0) goto Ldc
            boolean r7 = r6.b(r7)
            if (r7 == 0) goto Ldc
            return r0
        Ldc:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            int r0 = r3.C
            if (r0 != 0) goto L7e
            java.lang.String r0 = r3.c
            r1 = 0
            if (r0 != 0) goto Lb
            r0 = r1
            goto Lf
        Lb:
            int r0 = r0.hashCode()
        Lf:
            int r0 = r0 + 527
            int r0 = r0 * 31
            java.lang.String r2 = r3.g
            if (r2 != 0) goto L19
            r2 = r1
            goto L1d
        L19:
            int r2 = r2.hashCode()
        L1d:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.h
            if (r2 != 0) goto L26
            r2 = r1
            goto L2a
        L26:
            int r2 = r2.hashCode()
        L2a:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.e
            if (r2 != 0) goto L33
            r2 = r1
            goto L37
        L33:
            int r2 = r2.hashCode()
        L37:
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r2 = r3.d
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r2 = r3.m
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r2 = r3.n
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r2 = r3.u
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r2 = r3.v
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.A
            if (r2 != 0) goto L59
            r2 = r1
            goto L5d
        L59:
            int r2 = r2.hashCode()
        L5d:
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r2 = r3.B
            int r0 = r0 + r2
            int r0 = r0 * 31
            com.tkay.expressad.exoplayer.d.e r2 = r3.k
            if (r2 != 0) goto L6b
            r2 = r1
            goto L6f
        L6b:
            int r2 = r2.hashCode()
        L6f:
            int r0 = r0 + r2
            int r0 = r0 * 31
            com.tkay.expressad.exoplayer.g.a r2 = r3.f
            if (r2 != 0) goto L77
            goto L7b
        L77:
            int r1 = r2.hashCode()
        L7b:
            int r0 = r0 + r1
            r3.C = r0
        L7e:
            int r0 = r3.C
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Format("
            r0.<init>(r1)
            java.lang.String r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = r3.g
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.h
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.A
            r0.append(r2)
            java.lang.String r2 = ", ["
            r0.append(r2)
            int r2 = r3.m
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.n
            r0.append(r2)
            r0.append(r1)
            float r2 = r3.o
            r0.append(r2)
            java.lang.String r2 = "], ["
            r0.append(r2)
            int r2 = r3.u
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.v
            r0.append(r1)
            java.lang.String r1 = "])"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            java.lang.String r0 = r4.c
            r5.writeString(r0)
            java.lang.String r0 = r4.g
            r5.writeString(r0)
            java.lang.String r0 = r4.h
            r5.writeString(r0)
            java.lang.String r0 = r4.e
            r5.writeString(r0)
            int r0 = r4.d
            r5.writeInt(r0)
            int r0 = r4.i
            r5.writeInt(r0)
            int r0 = r4.m
            r5.writeInt(r0)
            int r0 = r4.n
            r5.writeInt(r0)
            float r0 = r4.o
            r5.writeFloat(r0)
            int r0 = r4.p
            r5.writeInt(r0)
            float r0 = r4.q
            r5.writeFloat(r0)
            byte[] r0 = r4.s
            r1 = 0
            if (r0 == 0) goto L3e
            r0 = 1
            goto L3f
        L3e:
            r0 = r1
        L3f:
            com.tkay.expressad.exoplayer.k.af.a(r5, r0)
            byte[] r0 = r4.s
            if (r0 == 0) goto L49
            r5.writeByteArray(r0)
        L49:
            int r0 = r4.r
            r5.writeInt(r0)
            com.tkay.expressad.exoplayer.l.b r0 = r4.t
            r5.writeParcelable(r0, r6)
            int r6 = r4.u
            r5.writeInt(r6)
            int r6 = r4.v
            r5.writeInt(r6)
            int r6 = r4.w
            r5.writeInt(r6)
            int r6 = r4.x
            r5.writeInt(r6)
            int r6 = r4.y
            r5.writeInt(r6)
            int r6 = r4.z
            r5.writeInt(r6)
            java.lang.String r6 = r4.A
            r5.writeString(r6)
            int r6 = r4.B
            r5.writeInt(r6)
            long r2 = r4.l
            r5.writeLong(r2)
            java.util.List<byte[]> r6 = r4.j
            int r6 = r6.size()
            r5.writeInt(r6)
            r0 = r1
        L8a:
            if (r0 >= r6) goto L9a
            java.util.List<byte[]> r2 = r4.j
            java.lang.Object r2 = r2.get(r0)
            byte[] r2 = (byte[]) r2
            r5.writeByteArray(r2)
            int r0 = r0 + 1
            goto L8a
        L9a:
            com.tkay.expressad.exoplayer.d.e r6 = r4.k
            r5.writeParcelable(r6, r1)
            com.tkay.expressad.exoplayer.g.a r6 = r4.f
            r5.writeParcelable(r6, r1)
            return
    }
}
