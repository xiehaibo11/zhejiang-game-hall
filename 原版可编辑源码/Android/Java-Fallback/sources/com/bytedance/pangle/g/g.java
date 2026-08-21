package com.bytedance.pangle.g;

abstract class g {
    private static final byte[] a = null;

    static class a {
        public final java.nio.ByteBuffer a;
        public final byte[] b;

        a(java.nio.ByteBuffer r1, byte[] r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    static class b implements com.bytedance.pangle.g.j {
        private int a;
        private final java.nio.ByteBuffer b;
        private final java.security.MessageDigest c;
        private final byte[] d;
        private final byte[] e;

        private b(byte[] r2, java.nio.ByteBuffer r3) {
                r1 = this;
                r1.<init>()
                r0 = 32
                byte[] r0 = new byte[r0]
                r1.d = r0
                r1.e = r2
                java.nio.ByteBuffer r2 = r3.slice()
                r1.b = r2
                java.lang.String r2 = "SHA-256"
                java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)
                r1.c = r2
                byte[] r3 = r1.e
                r2.update(r3)
                r2 = 0
                r1.a = r2
                return
        }

        b(byte[] r1, java.nio.ByteBuffer r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public final void a() {
                r3 = this;
                int r0 = r3.a
                if (r0 != 0) goto L5
                return
            L5:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "Buffer is not empty: "
                r1.<init>(r2)
                int r2 = r3.a
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
        }

        @Override
        public final void a(java.nio.ByteBuffer r6) {
                r5 = this;
                r6.position()
                int r0 = r6.remaining()
            L7:
                if (r0 <= 0) goto L42
                int r1 = r5.a
                r2 = 4096(0x1000, float:5.74E-42)
                int r1 = 4096 - r1
                int r1 = java.lang.Math.min(r0, r1)
                int r3 = r6.position()
                int r3 = r3 + r1
                r6.limit(r3)
                java.security.MessageDigest r3 = r5.c
                r3.update(r6)
                int r0 = r0 - r1
                int r3 = r5.a
                int r3 = r3 + r1
                r5.a = r3
                if (r3 != r2) goto L7
                java.security.MessageDigest r1 = r5.c
                byte[] r2 = r5.d
                int r3 = r2.length
                r4 = 0
                r1.digest(r2, r4, r3)
                java.nio.ByteBuffer r1 = r5.b
                byte[] r2 = r5.d
                r1.put(r2)
                java.security.MessageDigest r1 = r5.c
                byte[] r2 = r5.e
                r1.update(r2)
                r5.a = r4
                goto L7
            L42:
                return
        }

        final void b() {
                r2 = this;
                java.nio.ByteBuffer r0 = r2.b
                int r0 = r0.position()
                int r0 = r0 % 4096
                if (r0 != 0) goto Lb
                return
            Lb:
                java.nio.ByteBuffer r1 = r2.b
                int r0 = 4096 - r0
                java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
                r1.put(r0)
                return
        }
    }

    static {
            r0 = 8
            byte[] r0 = new byte[r0]
            com.bytedance.pangle.g.g.a = r0
            return
    }

    static com.bytedance.pangle.g.g.a a(java.io.RandomAccessFile r16, com.bytedance.pangle.g.m r17, com.bytedance.pangle.g.i r18) {
            r0 = r17
            long r1 = r0.c
            long r3 = r0.b
            long r1 = r1 - r3
            long r3 = r16.length()
            long r3 = r3 - r1
            int[] r1 = a(r3)
            int r2 = r1.length
            r3 = 1
            int r2 = r2 - r3
            r1 = r1[r2]
            int r2 = r1 + 4096
            r4 = r18
            java.nio.ByteBuffer r4 = r4.a(r2)
            java.nio.ByteOrder r5 = java.nio.ByteOrder.LITTLE_ENDIAN
            r4.order(r5)
            r5 = 0
            java.nio.ByteBuffer r6 = a(r4, r5, r1)
            int r7 = r1 + 64
            java.nio.ByteBuffer r1 = a(r4, r1, r7)
            java.nio.ByteBuffer r2 = a(r4, r7, r2)
            r8 = 32
            byte[] r8 = new byte[r8]
            java.nio.ByteBuffer r9 = java.nio.ByteBuffer.wrap(r8)
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN
            r9.order(r10)
            long r10 = r0.b
            r12 = 4096(0x1000, double:2.0237E-320)
            long r10 = r10 % r12
            r14 = 0
            int r10 = (r10 > r14 ? 1 : (r10 == r14 ? 0 : -1))
            if (r10 != 0) goto L13f
            long r10 = r0.c
            r18 = r4
            long r3 = r0.b
            long r10 = r10 - r3
            long r10 = r10 % r12
            int r3 = (r10 > r14 ? 1 : (r10 == r14 ? 0 : -1))
            if (r3 != 0) goto L126
            long r3 = r0.c
            long r10 = r0.b
            long r3 = r3 - r10
            long r10 = r16.length()
            long r10 = r10 - r3
            int[] r10 = a(r10)
            if (r6 == 0) goto L76
            byte[] r11 = com.bytedance.pangle.g.g.a
            r12 = r16
            byte[] r6 = a(r12, r0, r11, r10, r6)
            if (r9 == 0) goto L78
            r9.put(r6)
            r9.flip()
            goto L78
        L76:
            r12 = r16
        L78:
            r6 = 2
            if (r1 == 0) goto Lcd
            java.nio.ByteOrder r9 = java.nio.ByteOrder.LITTLE_ENDIAN
            r1.order(r9)
            long r9 = r16.length()
            byte[] r11 = com.bytedance.pangle.g.g.a
            int r12 = r11.length
            r13 = 8
            if (r12 != r13) goto Lc5
            java.lang.String r12 = "TrueBrew"
            byte[] r12 = r12.getBytes()
            r1.put(r12)
            r12 = 1
            r1.put(r12)
            r1.put(r5)
            r13 = 12
            r1.put(r13)
            r13 = 7
            r1.put(r13)
            r1.putShort(r12)
            r1.putShort(r12)
            r1.putInt(r5)
            r1.putInt(r5)
            r1.putLong(r9)
            r1.put(r6)
            r1.put(r5)
            r1.put(r11)
            r5 = 22
            a(r1, r5)
            r1.flip()
            goto Lcd
        Lc5:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "salt is not 8 bytes long"
            r0.<init>(r1)
            throw r0
        Lcd:
            r1 = 4
            if (r2 == 0) goto L109
            java.nio.ByteOrder r5 = java.nio.ByteOrder.LITTLE_ENDIAN
            r2.order(r5)
            long r9 = r0.b
            long r11 = r0.d
            r0 = 24
            r2.putInt(r0)
            r0 = 1
            r2.putShort(r0)
            a(r2, r6)
            r2.putLong(r9)
            r2.putLong(r3)
            r0 = 20
            r2.putInt(r0)
            r2.putShort(r6)
            a(r2, r6)
            r3 = 16
            long r11 = r11 + r3
            r2.putLong(r11)
            int r0 = c(r9)
            r2.putInt(r0)
            a(r2, r1)
            r2.flip()
        L109:
            int r0 = r2.limit()
            int r7 = r7 + r0
            r0 = r18
            r0.position(r7)
            int r2 = r2.limit()
            int r2 = r2 + 64
            int r2 = r2 + r1
            r0.putInt(r2)
            r0.flip()
            com.bytedance.pangle.g.g$a r1 = new com.bytedance.pangle.g.g$a
            r1.<init>(r0, r8)
            return r1
        L126:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Size of APK Signing Block is not a multiple of 4096: "
            r2.<init>(r3)
            long r3 = r0.c
            long r5 = r0.b
            long r3 = r3 - r5
            r2.append(r3)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L13f:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "APK Signing Block does not start at the page  boundary: "
            r2.<init>(r3)
            long r3 = r0.b
            r2.append(r3)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    private static java.nio.ByteBuffer a(java.nio.ByteBuffer r1, int r2, int r3) {
            java.nio.ByteBuffer r1 = r1.duplicate()
            r0 = 0
            r1.position(r0)
            r1.limit(r3)
            r1.position(r2)
            java.nio.ByteBuffer r1 = r1.slice()
            return r1
    }

    private static void a(com.bytedance.pangle.g.j r8, com.bytedance.pangle.g.k r9, int r10) {
            long r0 = r9.a()
            r2 = 0
            r4 = r2
        L7:
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L18
            long r6 = (long) r10
            long r6 = java.lang.Math.min(r0, r6)
            int r6 = (int) r6
            r9.a(r8, r4, r6)
            long r6 = (long) r6
            long r4 = r4 + r6
            long r0 = r0 - r6
            goto L7
        L18:
            return
    }

    private static void a(java.nio.ByteBuffer r1, int r2) {
            int r0 = r1.position()
            int r0 = r0 + r2
            r1.position(r0)
            return
    }

    private static byte[] a(java.io.RandomAccessFile r18, com.bytedance.pangle.g.m r19, byte[] r20, int[] r21, java.nio.ByteBuffer r22) {
            r0 = r19
            r1 = r20
            r2 = r21
            r3 = r22
            int r4 = r2.length
            int r4 = r4 + (-2)
            r4 = r2[r4]
            int r5 = r2.length
            int r5 = r5 + (-1)
            r5 = r2[r5]
            java.nio.ByteBuffer r4 = a(r3, r4, r5)
            com.bytedance.pangle.g.g$b r5 = new com.bytedance.pangle.g.g$b
            r6 = 0
            r5.<init>(r1, r4, r6)
            com.bytedance.pangle.g.l r4 = new com.bytedance.pangle.g.l
            java.io.FileDescriptor r8 = r18.getFD()
            long r11 = r0.b
            r9 = 0
            r7 = r4
            r7.<init>(r8, r9, r11)
            r7 = 1048576(0x100000, float:1.469368E-39)
            a(r5, r4, r7)
            long r8 = r0.d
            r10 = 16
            long r8 = r8 + r10
            com.bytedance.pangle.g.l r4 = new com.bytedance.pangle.g.l
            java.io.FileDescriptor r11 = r18.getFD()
            long r12 = r0.c
            long r14 = r0.c
            long r14 = r8 - r14
            r10 = r4
            r10.<init>(r11, r12, r14)
            a(r5, r4, r7)
            r4 = 4
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r4)
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN
            java.nio.ByteBuffer r4 = r4.order(r10)
            long r10 = r0.b
            int r0 = c(r10)
            r4.putInt(r0)
            r4.flip()
            r5.a(r4)
            r10 = 4
            long r14 = r8 + r10
            com.bytedance.pangle.g.l r0 = new com.bytedance.pangle.g.l
            java.io.FileDescriptor r13 = r18.getFD()
            long r8 = r18.length()
            long r16 = r8 - r14
            r12 = r0
            r12.<init>(r13, r14, r16)
            a(r5, r0, r7)
            long r7 = r18.length()
            r9 = 4096(0x1000, double:2.0237E-320)
            long r7 = r7 % r9
            int r0 = (int) r7
            r4 = 4096(0x1000, float:5.74E-42)
            if (r0 == 0) goto L8d
            int r0 = 4096 - r0
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r5.a(r0)
        L8d:
            r5.a()
            r5.b()
            int r0 = r2.length
            int r0 = r0 + (-3)
        L96:
            if (r0 < 0) goto Lc2
            int r5 = r0 + 1
            r7 = r2[r5]
            int r8 = r0 + 2
            r8 = r2[r8]
            java.nio.ByteBuffer r7 = a(r3, r7, r8)
            r8 = r2[r0]
            r5 = r2[r5]
            java.nio.ByteBuffer r5 = a(r3, r8, r5)
            com.bytedance.pangle.g.h r8 = new com.bytedance.pangle.g.h
            r8.<init>(r7)
            com.bytedance.pangle.g.g$b r7 = new com.bytedance.pangle.g.g$b
            r7.<init>(r1, r5, r6)
            a(r7, r8, r4)
            r7.a()
            r7.b()
            int r0 = r0 + (-1)
            goto L96
        Lc2:
            r0 = 32
            byte[] r0 = new byte[r0]
            com.bytedance.pangle.g.g$b r2 = new com.bytedance.pangle.g.g$b
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.wrap(r0)
            r2.<init>(r1, r5, r6)
            java.nio.ByteBuffer r1 = a(r3, r6, r4)
            r2.a(r1)
            r2.a()
            return r0
    }

    private static int[] a(long r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L5:
            long r5 = b(r5)
            r1 = 32
            long r5 = r5 * r1
            long r1 = b(r5)
            r3 = 4096(0x1000, double:2.0237E-320)
            long r1 = r1 * r3
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.add(r1)
            int r1 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r1 <= 0) goto L1f
            goto L5
        L1f:
            int r5 = r0.size()
            int r5 = r5 + 1
            int[] r5 = new int[r5]
            r6 = 0
            r5[r6] = r6
        L2a:
            int r1 = r0.size()
            if (r6 >= r1) goto L4e
            int r1 = r6 + 1
            r2 = r5[r6]
            int r3 = r0.size()
            int r3 = r3 - r6
            int r3 = r3 + (-1)
            java.lang.Object r6 = r0.get(r3)
            java.lang.Long r6 = (java.lang.Long) r6
            long r3 = r6.longValue()
            int r6 = c(r3)
            int r2 = r2 + r6
            r5[r1] = r2
            r6 = r1
            goto L2a
        L4e:
            return r5
    }

    private static long b(long r4) {
            r0 = 4096(0x1000, double:2.0237E-320)
            long r4 = r4 + r0
            r2 = 1
            long r4 = r4 - r2
            long r4 = r4 / r0
            return r4
    }

    private static int c(long r3) {
            int r0 = (int) r3
            long r1 = (long) r0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.ArithmeticException r3 = new java.lang.ArithmeticException
            java.lang.String r4 = "integer overflow"
            r3.<init>(r4)
            throw r3
    }
}
