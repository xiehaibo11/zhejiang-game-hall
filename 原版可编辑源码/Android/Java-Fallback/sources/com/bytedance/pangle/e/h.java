package com.bytedance.pangle.e;

public final class h implements java.io.Closeable {
    private final java.io.FileInputStream a;
    private com.bytedance.pangle.e.h.a b;
    private com.bytedance.pangle.e.h.b[] c;
    private com.bytedance.pangle.e.h.c[] d;
    private final java.util.Map<java.lang.String, com.bytedance.pangle.e.h.c> e;

    static class a {
        public final byte[] a;
        public final short b;
        public final short c;
        public final int d;
        public final long e;
        public final long f;
        public final long g;
        public final int h;
        public final short i;
        public final short j;
        public final short k;
        public final short l;
        public final short m;
        public final short n;

        private a(java.nio.channels.FileChannel r9) {
                r8 = this;
                r8.<init>()
                r0 = 16
                byte[] r0 = new byte[r0]
                r8.a = r0
                r0 = 0
                r9.position(r0)
                byte[] r0 = r8.a
                java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r0)
                r9.read(r0)
                byte[] r0 = r8.a
                r1 = 0
                r2 = r0[r1]
                r3 = 3
                r4 = 2
                r5 = 4
                r6 = 1
                r7 = 127(0x7f, float:1.78E-43)
                if (r2 != r7) goto L121
                r2 = r0[r6]
                r7 = 69
                if (r2 != r7) goto L121
                r2 = r0[r4]
                r7 = 76
                if (r2 != r7) goto L121
                r2 = r0[r3]
                r7 = 70
                if (r2 != r7) goto L121
                r0 = r0[r5]
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "bad elf class: "
                r1.<init>(r2)
                byte[] r2 = r8.a
                r2 = r2[r5]
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.bytedance.pangle.e.h.a(r0, r4, r1)
                byte[] r0 = r8.a
                r1 = 5
                r0 = r0[r1]
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "bad elf data encoding: "
                r2.<init>(r3)
                byte[] r3 = r8.a
                r3 = r3[r1]
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                com.bytedance.pangle.e.h.a(r0, r4, r2)
                byte[] r0 = r8.a
                r0 = r0[r5]
                if (r0 != r6) goto L70
                r0 = 36
                goto L72
            L70:
                r0 = 48
            L72:
                java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
                byte[] r2 = r8.a
                r1 = r2[r1]
                if (r1 != r6) goto L7f
                java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
                goto L81
            L7f:
                java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            L81:
                r0.order(r1)
                java.lang.String r1 = "failed to read rest part of ehdr."
                com.bytedance.pangle.e.h.a(r9, r0, r1)
                short r9 = r0.getShort()
                r8.b = r9
                short r9 = r0.getShort()
                r8.c = r9
                int r9 = r0.getInt()
                r8.d = r9
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "bad elf version: "
                r1.<init>(r2)
                int r2 = r8.d
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.bytedance.pangle.e.h.a(r9, r6, r1)
                byte[] r9 = r8.a
                r9 = r9[r5]
                if (r9 == r6) goto Le1
                if (r9 != r4) goto Lc9
                long r1 = r0.getLong()
                r8.e = r1
                long r1 = r0.getLong()
                r8.f = r1
                long r1 = r0.getLong()
                r8.g = r1
                goto Lf6
            Lc9:
                java.io.IOException r9 = new java.io.IOException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Unexpected elf class: "
                r0.<init>(r1)
                byte[] r1 = r8.a
                r1 = r1[r5]
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r9.<init>(r0)
                throw r9
            Le1:
                int r9 = r0.getInt()
                long r1 = (long) r9
                r8.e = r1
                int r9 = r0.getInt()
                long r1 = (long) r9
                r8.f = r1
                int r9 = r0.getInt()
                long r1 = (long) r9
                r8.g = r1
            Lf6:
                int r9 = r0.getInt()
                r8.h = r9
                short r9 = r0.getShort()
                r8.i = r9
                short r9 = r0.getShort()
                r8.j = r9
                short r9 = r0.getShort()
                r8.k = r9
                short r9 = r0.getShort()
                r8.l = r9
                short r9 = r0.getShort()
                r8.m = r9
                short r9 = r0.getShort()
                r8.n = r9
                return
            L121:
                java.io.IOException r9 = new java.io.IOException
                java.lang.Object[] r0 = new java.lang.Object[r5]
                byte[] r2 = r8.a
                r2 = r2[r1]
                java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
                r0[r1] = r2
                byte[] r1 = r8.a
                r1 = r1[r6]
                java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
                r0[r6] = r1
                byte[] r1 = r8.a
                r1 = r1[r4]
                java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
                r0[r4] = r1
                byte[] r1 = r8.a
                r1 = r1[r3]
                java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
                r0[r3] = r1
                java.lang.String r1 = "bad elf magic: %x %x %x %x."
                java.lang.String r0 = java.lang.String.format(r1, r0)
                r9.<init>(r0)
                throw r9
        }

        a(java.nio.channels.FileChannel r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    static class b {
        public final int a;
        public final int b;
        public final long c;
        public final long d;
        public final long e;
        public final long f;
        public final long g;
        public final long h;

        private b(java.nio.ByteBuffer r3, int r4) {
                r2 = this;
                r2.<init>()
                r0 = 1
                if (r4 == r0) goto L4a
                r0 = 2
                if (r4 != r0) goto L3a
                int r4 = r3.getInt()
                r2.a = r4
                int r4 = r3.getInt()
                r2.b = r4
                long r0 = r3.getLong()
                r2.c = r0
                long r0 = r3.getLong()
                r2.d = r0
                long r0 = r3.getLong()
                r2.e = r0
                long r0 = r3.getLong()
                r2.f = r0
                long r0 = r3.getLong()
                r2.g = r0
                long r3 = r3.getLong()
                r2.h = r3
                return
            L3a:
                java.io.IOException r3 = new java.io.IOException
                java.lang.String r4 = java.lang.String.valueOf(r4)
                java.lang.String r0 = "Unexpected elf class: "
                java.lang.String r4 = r0.concat(r4)
                r3.<init>(r4)
                throw r3
            L4a:
                int r4 = r3.getInt()
                r2.a = r4
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.c = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.d = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.e = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.f = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.g = r0
                int r4 = r3.getInt()
                r2.b = r4
                int r3 = r3.getInt()
                long r3 = (long) r3
                r2.h = r3
                return
        }

        b(java.nio.ByteBuffer r1, int r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    static class c {
        public final int a;
        public final int b;
        public final long c;
        public final long d;
        public final long e;
        public final long f;
        public final int g;
        public final int h;
        public final long i;
        public final long j;
        public java.lang.String k;

        private c(java.nio.ByteBuffer r3, int r4) {
                r2 = this;
                r2.<init>()
                r0 = 1
                if (r4 == r0) goto L56
                r0 = 2
                if (r4 != r0) goto L46
                int r4 = r3.getInt()
                r2.a = r4
                int r4 = r3.getInt()
                r2.b = r4
                long r0 = r3.getLong()
                r2.c = r0
                long r0 = r3.getLong()
                r2.d = r0
                long r0 = r3.getLong()
                r2.e = r0
                long r0 = r3.getLong()
                r2.f = r0
                int r4 = r3.getInt()
                r2.g = r4
                int r4 = r3.getInt()
                r2.h = r4
                long r0 = r3.getLong()
                r2.i = r0
                long r3 = r3.getLong()
                r2.j = r3
                goto L98
            L46:
                java.io.IOException r3 = new java.io.IOException
                java.lang.String r4 = java.lang.String.valueOf(r4)
                java.lang.String r0 = "Unexpected elf class: "
                java.lang.String r4 = r0.concat(r4)
                r3.<init>(r4)
                throw r3
            L56:
                int r4 = r3.getInt()
                r2.a = r4
                int r4 = r3.getInt()
                r2.b = r4
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.c = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.d = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.e = r0
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.f = r0
                int r4 = r3.getInt()
                r2.g = r4
                int r4 = r3.getInt()
                r2.h = r4
                int r4 = r3.getInt()
                long r0 = (long) r4
                r2.i = r0
                int r3 = r3.getInt()
                long r3 = (long) r3
                r2.j = r3
            L98:
                r3 = 0
                r2.k = r3
                return
        }

        c(java.nio.ByteBuffer r1, int r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    private h(java.io.File r8) {
            r7 = this;
            r7.<init>()
            r0 = 0
            r7.b = r0
            r7.c = r0
            r7.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r7.e = r0
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r8)
            r7.a = r0
            java.nio.channels.FileChannel r8 = r0.getChannel()
            com.bytedance.pangle.e.h$a r0 = new com.bytedance.pangle.e.h$a
            r1 = 0
            r0.<init>(r8, r1)
            r7.b = r0
            r0 = 128(0x80, float:1.8E-43)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            com.bytedance.pangle.e.h$a r2 = r7.b
            short r2 = r2.j
            r0.limit(r2)
            com.bytedance.pangle.e.h$a r2 = r7.b
            byte[] r2 = r2.a
            r3 = 5
            r2 = r2[r3]
            r3 = 1
            if (r2 != r3) goto L3e
            java.nio.ByteOrder r2 = java.nio.ByteOrder.LITTLE_ENDIAN
            goto L40
        L3e:
            java.nio.ByteOrder r2 = java.nio.ByteOrder.BIG_ENDIAN
        L40:
            r0.order(r2)
            com.bytedance.pangle.e.h$a r2 = r7.b
            long r2 = r2.f
            r8.position(r2)
            com.bytedance.pangle.e.h$a r2 = r7.b
            short r2 = r2.k
            com.bytedance.pangle.e.h$b[] r2 = new com.bytedance.pangle.e.h.b[r2]
            r7.c = r2
            r2 = r1
        L53:
            com.bytedance.pangle.e.h$b[] r3 = r7.c
            int r3 = r3.length
            r4 = 4
            if (r2 >= r3) goto L70
            java.lang.String r3 = "failed to read phdr."
            b(r8, r0, r3)
            com.bytedance.pangle.e.h$b[] r3 = r7.c
            com.bytedance.pangle.e.h$b r5 = new com.bytedance.pangle.e.h$b
            com.bytedance.pangle.e.h$a r6 = r7.b
            byte[] r6 = r6.a
            r4 = r6[r4]
            r5.<init>(r0, r4, r1)
            r3[r2] = r5
            int r2 = r2 + 1
            goto L53
        L70:
            com.bytedance.pangle.e.h$a r2 = r7.b
            long r2 = r2.g
            r8.position(r2)
            com.bytedance.pangle.e.h$a r2 = r7.b
            short r2 = r2.l
            r0.limit(r2)
            com.bytedance.pangle.e.h$a r2 = r7.b
            short r2 = r2.m
            com.bytedance.pangle.e.h$c[] r2 = new com.bytedance.pangle.e.h.c[r2]
            r7.d = r2
            r2 = r1
        L87:
            com.bytedance.pangle.e.h$c[] r3 = r7.d
            int r3 = r3.length
            if (r2 >= r3) goto La3
            java.lang.String r3 = "failed to read shdr."
            b(r8, r0, r3)
            com.bytedance.pangle.e.h$c[] r3 = r7.d
            com.bytedance.pangle.e.h$c r5 = new com.bytedance.pangle.e.h$c
            com.bytedance.pangle.e.h$a r6 = r7.b
            byte[] r6 = r6.a
            r6 = r6[r4]
            r5.<init>(r0, r6, r1)
            r3[r2] = r5
            int r2 = r2 + 1
            goto L87
        La3:
            com.bytedance.pangle.e.h$a r8 = r7.b
            short r8 = r8.n
            if (r8 <= 0) goto Lf8
            com.bytedance.pangle.e.h$c[] r8 = r7.d
            com.bytedance.pangle.e.h$a r0 = r7.b
            short r0 = r0.n
            r8 = r8[r0]
            long r2 = r8.f
            int r0 = (int) r2
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.io.FileInputStream r2 = r7.a
            java.nio.channels.FileChannel r2 = r2.getChannel()
            long r3 = r8.e
            r2.position(r3)
            java.io.FileInputStream r2 = r7.a
            java.nio.channels.FileChannel r2 = r2.getChannel()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "failed to read section: "
            r3.<init>(r4)
            java.lang.String r8 = r8.k
            r3.append(r8)
            java.lang.String r8 = r3.toString()
            b(r2, r0, r8)
            com.bytedance.pangle.e.h$c[] r8 = r7.d
            int r2 = r8.length
        Ldf:
            if (r1 >= r2) goto Lf8
            r3 = r8[r1]
            int r4 = r3.a
            r0.position(r4)
            java.lang.String r4 = a(r0)
            r3.k = r4
            java.util.Map<java.lang.String, com.bytedance.pangle.e.h$c> r4 = r7.e
            java.lang.String r5 = r3.k
            r4.put(r5, r3)
            int r1 = r1 + 1
            goto Ldf
        Lf8:
            return
    }

    private static java.lang.String a(java.nio.ByteBuffer r4) {
            byte[] r0 = r4.array()
            int r1 = r4.position()
        L8:
            boolean r2 = r4.hasRemaining()
            if (r2 == 0) goto L20
            int r2 = r4.position()
            r2 = r0[r2]
            if (r2 == 0) goto L20
            int r2 = r4.position()
            int r2 = r2 + 1
            r4.position(r2)
            goto L8
        L20:
            int r2 = r4.position()
            int r2 = r2 + 1
            r4.position(r2)
            java.lang.String r2 = new java.lang.String
            int r4 = r4.position()
            int r4 = r4 - r1
            int r4 = r4 + (-1)
            java.lang.String r3 = "ASCII"
            java.nio.charset.Charset r3 = java.nio.charset.Charset.forName(r3)
            r2.<init>(r0, r1, r4, r3)
            return r2
    }

    static void a(int r0, int r1, java.lang.String r2) {
            if (r0 <= 0) goto L5
            if (r0 > r1) goto L5
            return
        L5:
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r2)
            throw r0
    }

    static void a(java.nio.channels.FileChannel r0, java.nio.ByteBuffer r1, java.lang.String r2) {
            b(r0, r1, r2)
            return
    }

    public static boolean a(java.io.File r2) {
            r0 = 0
            com.bytedance.pangle.e.h r1 = new com.bytedance.pangle.e.h     // Catch: java.lang.Throwable -> Lb java.io.IOException -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lb java.io.IOException -> L10
            com.bytedance.pangle.util.g.a(r1)
            r2 = 1
            return r2
        Lb:
            r2 = move-exception
            com.bytedance.pangle.util.g.a(r0)
            throw r2
        L10:
            com.bytedance.pangle.util.g.a(r0)
            r2 = 0
            return r2
    }

    private static void b(java.nio.channels.FileChannel r2, java.nio.ByteBuffer r3, java.lang.String r4) {
            r3.rewind()
            int r2 = r2.read(r3)
            int r0 = r3.limit()
            if (r2 != r0) goto L11
            r3.flip()
            return
        L11:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = " Rest bytes insufficient, expect to read "
            r1.append(r4)
            int r3 = r3.limit()
            r1.append(r3)
            java.lang.String r3 = " bytes but only "
            r1.append(r3)
            r1.append(r2)
            java.lang.String r2 = " bytes were read."
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            throw r0
    }

    @Override
    public final void close() {
            r1 = this;
            java.io.FileInputStream r0 = r1.a
            r0.close()
            java.util.Map<java.lang.String, com.bytedance.pangle.e.h$c> r0 = r1.e
            r0.clear()
            r0 = 0
            r1.c = r0
            r1.d = r0
            return
    }
}
