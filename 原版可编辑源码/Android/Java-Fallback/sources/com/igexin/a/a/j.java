package com.igexin.a.a;

public class j implements com.igexin.a.a.c, java.io.Closeable {
    private final int a;
    private final java.nio.channels.FileChannel b;

    public j(java.io.File r2) {
            r1 = this;
            r1.<init>()
            r0 = 1179403647(0x464c457f, float:13073.374)
            r1.a = r0
            if (r2 == 0) goto L1c
            boolean r0 = r2.exists()
            if (r0 == 0) goto L1c
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r2)
            java.nio.channels.FileChannel r2 = r0.getChannel()
            r1.b = r2
            return
        L1c:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "File is null or does not exist"
            r2.<init>(r0)
            throw r2
    }

    private long a(com.igexin.a.a.e r10, long r11, long r13) {
            r9 = this;
            r0 = 0
        L2:
            int r2 = (r0 > r11 ? 1 : (r0 == r11 ? 0 : -1))
            if (r2 >= 0) goto L2a
            com.igexin.a.a.f r2 = r10.a(r0)
            long r3 = r2.a
            r5 = 1
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L28
            long r3 = r2.c
            int r3 = (r3 > r13 ? 1 : (r3 == r13 ? 0 : -1))
            if (r3 > 0) goto L28
            long r3 = r2.c
            long r7 = r2.d
            long r3 = r3 + r7
            int r3 = (r13 > r3 ? 1 : (r13 == r3 ? 0 : -1))
            if (r3 > 0) goto L28
            long r10 = r2.c
            long r13 = r13 - r10
            long r10 = r2.b
            long r13 = r13 + r10
            return r13
        L28:
            long r0 = r0 + r5
            goto L2
        L2a:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.String r11 = "Could not map vma to file offset!"
            r10.<init>(r11)
            throw r10
    }

    public com.igexin.a.a.e a() {
            r5 = this;
            java.nio.channels.FileChannel r0 = r5.b
            r1 = 0
            r0.position(r1)
            r0 = 8
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteOrder r3 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r3)
            long r1 = r5.c(r0, r1)
            r3 = 1179403647(0x464c457f, double:5.827028246E-315)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L48
            r1 = 4
            short r1 = r5.e(r0, r1)
            r2 = 5
            short r0 = r5.e(r0, r2)
            r2 = 1
            r3 = 2
            if (r0 != r3) goto L2f
            r0 = r2
            goto L30
        L2f:
            r0 = 0
        L30:
            if (r1 != r2) goto L38
            com.igexin.a.a.h r1 = new com.igexin.a.a.h
            r1.<init>(r0, r5)
            return r1
        L38:
            if (r1 != r3) goto L40
            com.igexin.a.a.i r1 = new com.igexin.a.a.i
            r1.<init>(r0, r5)
            return r1
        L40:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Invalid class type!"
            r0.<init>(r1)
            throw r0
        L48:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Invalid ELF Magic!"
            r0.<init>(r1)
            throw r0
    }

    protected java.lang.String a(java.nio.ByteBuffer r4, long r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            r1 = 1
            long r1 = r1 + r5
            short r5 = r3.e(r4, r5)
            if (r5 == 0) goto L14
            char r5 = (char) r5
            r0.append(r5)
            r5 = r1
            goto L5
        L14:
            java.lang.String r4 = r0.toString()
            return r4
    }

    protected void a(java.nio.ByteBuffer r7, long r8, int r10) {
            r6 = this;
            r0 = 0
            r7.position(r0)
            r7.limit(r10)
            r1 = 0
        L9:
            long r3 = (long) r10
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 >= 0) goto L22
            java.nio.channels.FileChannel r3 = r6.b
            long r4 = r8 + r1
            int r3 = r3.read(r7, r4)
            r4 = -1
            if (r3 == r4) goto L1c
            long r3 = (long) r3
            long r1 = r1 + r3
            goto L9
        L1c:
            java.io.EOFException r7 = new java.io.EOFException
            r7.<init>()
            throw r7
        L22:
            r7.position(r0)
            return
    }

    protected long b(java.nio.ByteBuffer r2, long r3) {
            r1 = this;
            r0 = 8
            r1.a(r2, r3, r0)
            long r2 = r2.getLong()
            return r2
    }

    public java.util.List<java.lang.String> b() {
            r21 = this;
            r6 = r21
            java.nio.channels.FileChannel r0 = r6.b
            r1 = 0
            r0.position(r1)
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            com.igexin.a.a.e r3 = r21.a()
            r0 = 8
            java.nio.ByteBuffer r8 = java.nio.ByteBuffer.allocate(r0)
            boolean r0 = r3.a
            if (r0 == 0) goto L1f
            java.nio.ByteOrder r0 = java.nio.ByteOrder.BIG_ENDIAN
            goto L21
        L1f:
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
        L21:
            r8.order(r0)
            int r0 = r3.f
            long r4 = (long) r0
            r9 = 65535(0xffff, double:3.23786E-319)
            int r0 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            r9 = 0
            if (r0 != 0) goto L35
            com.igexin.a.a.g r0 = r3.a(r9)
            long r4 = r0.a
        L35:
            r10 = r1
        L36:
            int r0 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            r12 = 1
            if (r0 >= 0) goto L4d
            com.igexin.a.a.f r0 = r3.a(r10)
            long r14 = r0.a
            r16 = 2
            int r14 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
            if (r14 != 0) goto L4b
            long r10 = r0.b
            goto L4e
        L4b:
            long r10 = r10 + r12
            goto L36
        L4d:
            r10 = r1
        L4e:
            int r0 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
            if (r0 != 0) goto L57
            java.util.List r0 = java.util.Collections.unmodifiableList(r7)
            return r0
        L57:
            java.util.ArrayList r14 = new java.util.ArrayList
            r14.<init>()
            r15 = r1
        L5d:
            com.igexin.a.a.d r0 = r3.a(r10, r9)
            long r1 = r0.a
            int r1 = (r1 > r12 ? 1 : (r1 == r12 ? 0 : -1))
            if (r1 != 0) goto L71
            long r1 = r0.b
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r14.add(r1)
            goto L7c
        L71:
            long r1 = r0.a
            r19 = 5
            int r1 = (r1 > r19 ? 1 : (r1 == r19 ? 0 : -1))
            if (r1 != 0) goto L7c
            long r1 = r0.b
            r15 = r1
        L7c:
            int r9 = r9 + 1
            long r0 = r0.a
            r17 = 0
            int r0 = (r0 > r17 ? 1 : (r0 == r17 ? 0 : -1))
            if (r0 != 0) goto Lb9
            int r0 = (r15 > r17 ? 1 : (r15 == r17 ? 0 : -1))
            if (r0 == 0) goto Lb1
            r0 = r21
            r1 = r3
            r2 = r4
            r4 = r15
            long r0 = r0.a(r1, r2, r4)
            java.util.Iterator r2 = r14.iterator()
        L97:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto Lb0
            java.lang.Object r3 = r2.next()
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            long r3 = r3 + r0
            java.lang.String r3 = r6.a(r8, r3)
            r7.add(r3)
            goto L97
        Lb0:
            return r7
        Lb1:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "String table offset not found!"
            r0.<init>(r1)
            throw r0
        Lb9:
            r1 = r17
            goto L5d
    }

    protected long c(java.nio.ByteBuffer r3, long r4) {
            r2 = this;
            r0 = 4
            r2.a(r3, r4, r0)
            int r3 = r3.getInt()
            long r3 = (long) r3
            r0 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r3 = r3 & r0
            return r3
    }

    @Override
    public void close() {
            r1 = this;
            java.nio.channels.FileChannel r0 = r1.b
            r0.close()
            return
    }

    protected int d(java.nio.ByteBuffer r2, long r3) {
            r1 = this;
            r0 = 2
            r1.a(r2, r3, r0)
            short r2 = r2.getShort()
            r3 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r3
            return r2
    }

    protected short e(java.nio.ByteBuffer r2, long r3) {
            r1 = this;
            r0 = 1
            r1.a(r2, r3, r0)
            byte r2 = r2.get()
            r2 = r2 & 255(0xff, float:3.57E-43)
            short r2 = (short) r2
            return r2
    }
}
