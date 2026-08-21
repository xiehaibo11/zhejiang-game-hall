package com.bytedance.pangle.g;

final class f {
    static final java.util.HashMap<java.lang.String, android.util.SparseArray<com.bytedance.pangle.g.m>> a = null;


    static class a implements com.bytedance.pangle.g.j {
        private final java.security.MessageDigest[] a;

        a(java.security.MessageDigest[] r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public final void a(java.nio.ByteBuffer r6) {
                r5 = this;
                java.nio.ByteBuffer r6 = r6.slice()
                java.security.MessageDigest[] r0 = r5.a
                int r1 = r0.length
                r2 = 0
                r3 = r2
            L9:
                if (r3 >= r1) goto L16
                r4 = r0[r3]
                r6.position(r2)
                r4.update(r6)
                int r3 = r3 + 1
                goto L9
            L16:
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.g.f.a = r0
            return
    }

    static int a(int r4) {
            r0 = 513(0x201, float:7.19E-43)
            if (r4 == r0) goto L3a
            r0 = 514(0x202, float:7.2E-43)
            if (r4 == r0) goto L38
            r0 = 769(0x301, float:1.078E-42)
            if (r4 == r0) goto L3a
            r0 = 1057(0x421, float:1.481E-42)
            if (r4 == r0) goto L36
            r0 = 1059(0x423, float:1.484E-42)
            if (r4 == r0) goto L36
            r0 = 1061(0x425, float:1.487E-42)
            if (r4 == r0) goto L36
            switch(r4) {
                case 257: goto L3a;
                case 258: goto L38;
                case 259: goto L3a;
                case 260: goto L38;
                default: goto L1b;
            }
        L1b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unknown signature algorithm: 0x"
            r1.<init>(r2)
            r4 = r4 & (-1)
            long r2 = (long) r4
            java.lang.String r4 = java.lang.Long.toHexString(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L36:
            r4 = 3
            return r4
        L38:
            r4 = 2
            return r4
        L3a:
            r4 = 1
            return r4
    }

    static int a(int r6, int r7) {
            int r6 = a(r6)
            int r7 = a(r7)
            r0 = -1
            java.lang.String r1 = "Unknown digestAlgorithm2: "
            r2 = 0
            r3 = 3
            r4 = 2
            r5 = 1
            if (r6 == r5) goto L53
            if (r6 == r4) goto L3c
            if (r6 != r3) goto L2c
            if (r7 == r5) goto L2b
            if (r7 == r4) goto L2a
            if (r7 != r3) goto L1c
            return r2
        L1c:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r7 = r1.concat(r7)
            r6.<init>(r7)
            throw r6
        L2a:
            return r0
        L2b:
            return r5
        L2c:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r0 = "Unknown digestAlgorithm1: "
            java.lang.String r6 = r0.concat(r6)
            r7.<init>(r6)
            throw r7
        L3c:
            if (r7 == r5) goto L52
            if (r7 == r4) goto L51
            if (r7 != r3) goto L43
            goto L52
        L43:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r7 = r1.concat(r7)
            r6.<init>(r7)
            throw r6
        L51:
            return r2
        L52:
            return r5
        L53:
            if (r7 == r5) goto L69
            if (r7 == r4) goto L68
            if (r7 != r3) goto L5a
            goto L68
        L5a:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r7 = r1.concat(r7)
            r6.<init>(r7)
            throw r6
        L68:
            return r0
        L69:
            return r2
    }

    static java.nio.ByteBuffer a(java.nio.ByteBuffer r4) {
            int r0 = r4.remaining()
            r1 = 4
            if (r0 < r1) goto L40
            int r0 = r4.getInt()
            if (r0 < 0) goto L38
            int r1 = r4.remaining()
            if (r0 > r1) goto L18
            java.nio.ByteBuffer r4 = b(r4, r0)
            return r4
        L18:
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Length-prefixed field longer than remaining buffer. Field length: "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = ", remaining: "
            r2.append(r0)
            int r4 = r4.remaining()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
        L38:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Negative length"
            r4.<init>(r0)
            throw r4
        L40:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Remaining buffer too short to contain length of length-prefixed field. Remaining: "
            r1.<init>(r2)
            int r4 = r4.remaining()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private static java.nio.ByteBuffer a(java.nio.ByteBuffer r4, int r5) {
            r0 = 8
            if (r5 < r0) goto L5c
            int r1 = r4.capacity()
            int r2 = r4.capacity()
            if (r5 > r2) goto L40
            int r1 = r4.limit()
            int r2 = r4.position()
            r3 = 0
            r4.position(r3)     // Catch: java.lang.Throwable -> L35
            r4.limit(r5)     // Catch: java.lang.Throwable -> L35
            r4.position(r0)     // Catch: java.lang.Throwable -> L35
            java.nio.ByteBuffer r5 = r4.slice()     // Catch: java.lang.Throwable -> L35
            java.nio.ByteOrder r0 = r4.order()     // Catch: java.lang.Throwable -> L35
            r5.order(r0)     // Catch: java.lang.Throwable -> L35
            r4.position(r3)
            r4.limit(r1)
            r4.position(r2)
            return r5
        L35:
            r5 = move-exception
            r4.position(r3)
            r4.limit(r1)
            r4.position(r2)
            throw r5
        L40:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "end > capacity: "
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = " > "
            r0.append(r5)
            r0.append(r1)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
        L5c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "end < start: "
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r5 = " < 8"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }

    private static void a(int r2, byte[] r3) {
            r0 = r2 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r1 = 1
            r3[r1] = r0
            int r0 = r2 >>> 8
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r1 = 2
            r3[r1] = r0
            int r0 = r2 >>> 16
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r1 = 3
            r3[r1] = r0
            int r2 = r2 >>> 24
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r0 = 4
            r3[r0] = r2
            return
    }

    static void a(java.lang.String r23, java.io.RandomAccessFile r24, int... r25) {
            r0 = r23
            r1 = r24
            java.util.HashMap<java.lang.String, android.util.SparseArray<com.bytedance.pangle.g.m>> r2 = com.bytedance.pangle.g.f.a
            android.util.SparseArray r3 = new android.util.SparseArray
            r3.<init>()
            r2.put(r0, r3)
            long r2 = r24.length()
            r4 = 22
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r4 = 0
            if (r2 >= 0) goto L1b
            r2 = 0
            goto L29
        L1b:
            android.util.Pair r2 = com.bytedance.pangle.g.s.a(r1, r4)
            if (r2 == 0) goto L22
            goto L29
        L22:
            r2 = 65535(0xffff, float:9.1834E-41)
            android.util.Pair r2 = com.bytedance.pangle.g.s.a(r1, r2)
        L29:
            if (r2 == 0) goto L24f
            java.lang.Object r5 = r2.first
            java.nio.ByteBuffer r5 = (java.nio.ByteBuffer) r5
            java.lang.Object r2 = r2.second
            java.lang.Long r2 = (java.lang.Long) r2
            long r14 = r2.longValue()
            r6 = 20
            long r6 = r14 - r6
            r8 = 0
            int r2 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r2 < 0) goto L4f
            r1.seek(r6)
            int r2 = r24.readInt()
            r6 = 1347094023(0x504b0607, float:1.3624679E10)
            if (r2 != r6) goto L4f
            r2 = 1
            goto L50
        L4f:
            r2 = r4
        L50:
            if (r2 != 0) goto L247
            com.bytedance.pangle.g.s.a(r5)
            int r2 = r5.position()
            r6 = 16
            int r2 = r2 + r6
            long r12 = com.bytedance.pangle.g.s.a(r5, r2)
            int r2 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r2 > 0) goto L226
            com.bytedance.pangle.g.s.a(r5)
            int r2 = r5.position()
            int r2 = r2 + 12
            long r10 = com.bytedance.pangle.g.s.a(r5, r2)
            long r10 = r10 + r12
            int r2 = (r10 > r14 ? 1 : (r10 == r14 ? 0 : -1))
            if (r2 != 0) goto L21e
            r10 = 32
            int r2 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r2 < 0) goto L20c
            r2 = 24
            java.nio.ByteBuffer r7 = java.nio.ByteBuffer.allocate(r2)
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN
            r7.order(r10)
            int r10 = r7.capacity()
            long r10 = (long) r10
            long r10 = r12 - r10
            r1.seek(r10)
            byte[] r10 = r7.array()
            int r11 = r7.arrayOffset()
            int r3 = r7.capacity()
            r1.readFully(r10, r11, r3)
            r3 = 8
            long r10 = r7.getLong(r3)
            r17 = 2334950737559900225(0x20676953204b5041, double:1.3968830566012645E-152)
            int r10 = (r10 > r17 ? 1 : (r10 == r17 ? 0 : -1))
            if (r10 != 0) goto L145
            long r10 = r7.getLong(r6)
            r17 = 3617552046287187010(0x3234206b636f6c42, double:7.465385175170059E-67)
            int r6 = (r10 > r17 ? 1 : (r10 == r17 ? 0 : -1))
            if (r6 == 0) goto Lbe
            goto L145
        Lbe:
            long r10 = r7.getLong(r4)
            int r6 = r7.capacity()
            long r6 = (long) r6
            int r6 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r6 < 0) goto L135
            r6 = 2147483639(0x7ffffff7, double:1.060997891E-314)
            int r6 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r6 > 0) goto L135
            r6 = 8
            long r6 = r6 + r10
            int r6 = (int) r6
            long r2 = (long) r6
            long r2 = r12 - r2
            int r8 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r8 < 0) goto L125
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.allocate(r6)
            java.nio.ByteOrder r8 = java.nio.ByteOrder.LITTLE_ENDIAN
            r6.order(r8)
            r1.seek(r2)
            byte[] r8 = r6.array()
            int r9 = r6.arrayOffset()
            int r7 = r6.capacity()
            r1.readFully(r8, r9, r7)
            long r7 = r6.getLong(r4)
            int r1 = (r7 > r10 ? 1 : (r7 == r10 ? 0 : -1))
            if (r1 != 0) goto L109
            java.lang.Long r1 = java.lang.Long.valueOf(r2)
            android.util.Pair r3 = android.util.Pair.create(r6, r1)
            goto L146
        L109:
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "APK Signing Block sizes in header and footer do not match: "
            r1.<init>(r2)
            r1.append(r7)
            java.lang.String r2 = " vs "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L125:
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.String r1 = java.lang.String.valueOf(r2)
            java.lang.String r2 = "APK Signing Block offset out of range: "
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
        L135:
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.String r1 = java.lang.String.valueOf(r10)
            java.lang.String r2 = "APK Signing Block size out of range: "
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
        L145:
            r3 = 0
        L146:
            if (r3 != 0) goto L149
            return
        L149:
            java.lang.Object r1 = r3.first
            java.nio.ByteBuffer r1 = (java.nio.ByteBuffer) r1
            java.lang.Object r2 = r3.second
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            java.nio.ByteOrder r6 = r1.order()
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            if (r6 != r7) goto L204
            int r6 = r1.capacity()
            r7 = 24
            int r6 = r6 - r7
            java.nio.ByteBuffer r1 = a(r1, r6)
            java.util.HashSet r10 = new java.util.HashSet
            r10.<init>()
        L16d:
            r6 = 2
            if (r4 >= r6) goto L17c
            r6 = r25[r4]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r10.add(r6)
            int r4 = r4 + 1
            goto L16d
        L17c:
            boolean r4 = r1.hasRemaining()
            if (r4 == 0) goto L203
            int r4 = r1.remaining()
            r11 = 8
            if (r4 >= r11) goto L18b
            return
        L18b:
            long r6 = r1.getLong()
            r8 = 4
            int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r4 < 0) goto L203
            r8 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r4 <= 0) goto L19e
            goto L203
        L19e:
            int r4 = (int) r6
            int r6 = r1.position()
            int r8 = r6 + r4
            int r6 = r1.remaining()
            if (r4 <= r6) goto L1ac
            return
        L1ac:
            int r9 = r1.getInt()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r9)
            boolean r6 = r10.contains(r6)
            if (r6 == 0) goto L1e9
            java.util.HashMap<java.lang.String, android.util.SparseArray<com.bytedance.pangle.g.m>> r6 = com.bytedance.pangle.g.f.a
            java.lang.Object r6 = r6.get(r0)
            r7 = r6
            android.util.SparseArray r7 = (android.util.SparseArray) r7
            com.bytedance.pangle.g.m r6 = new com.bytedance.pangle.g.m
            int r4 = r4 + (-4)
            java.nio.ByteBuffer r4 = b(r1, r4)
            r24 = r6
            r0 = r7
            r7 = r4
            r16 = r1
            r4 = r8
            r1 = r9
            r8 = r2
            r17 = r10
            r18 = r11
            r10 = r12
            r19 = r12
            r12 = r14
            r21 = r2
            r2 = r14
            r14 = r5
            r6.<init>(r7, r8, r10, r12, r14)
            r0.put(r1, r6)
            r0 = r16
            goto L1f4
        L1e9:
            r21 = r2
            r4 = r8
            r17 = r10
            r18 = r11
            r19 = r12
            r2 = r14
            r0 = r1
        L1f4:
            r0.position(r4)
            r1 = r0
            r14 = r2
            r10 = r17
            r12 = r19
            r2 = r21
            r0 = r23
            goto L17c
        L203:
            return
        L204:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "ByteBuffer byte order must be little endian"
            r0.<init>(r1)
            throw r0
        L20c:
            r19 = r12
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.String r1 = java.lang.String.valueOf(r19)
            java.lang.String r2 = "APK too small for APK Signing Block. ZIP Central Directory offset: "
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
        L21e:
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.String r1 = "ZIP Central Directory is not immediately followed by End of Central Directory"
            r0.<init>(r1)
            throw r0
        L226:
            r19 = r12
            r2 = r14
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "ZIP Central Directory offset out of range: "
            r1.<init>(r4)
            r4 = r19
            r1.append(r4)
            java.lang.String r4 = ". ZIP End of Central Directory offset: "
            r1.append(r4)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L247:
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.String r1 = "ZIP64 APK not supported"
            r0.<init>(r1)
            throw r0
        L24f:
            com.bytedance.pangle.g.n r0 = new com.bytedance.pangle.g.n
            java.lang.String r1 = "Not an APK file: ZIP End of Central Directory record not found"
            r0.<init>(r1)
            throw r0
    }

    private static void a(java.util.Map<java.lang.Integer, byte[]> r13, java.io.FileDescriptor r14, com.bytedance.pangle.g.m r15) {
            com.bytedance.pangle.g.l r6 = new com.bytedance.pangle.g.l
            long r4 = r15.b
            r2 = 0
            r0 = r6
            r1 = r14
            r0.<init>(r1, r2, r4)
            com.bytedance.pangle.g.l r0 = new com.bytedance.pangle.g.l
            long r9 = r15.c
            long r1 = r15.d
            long r3 = r15.c
            long r11 = r1 - r3
            r7 = r0
            r8 = r14
            r7.<init>(r8, r9, r11)
            java.nio.ByteBuffer r14 = r15.e
            java.nio.ByteBuffer r14 = r14.duplicate()
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r14.order(r1)
            long r1 = r15.b
            com.bytedance.pangle.g.s.a(r14)
            int r15 = r14.position()
            int r15 = r15 + 16
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 < 0) goto Lbe
            r3 = 4294967295(0xffffffff, double:2.1219957905E-314)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 > 0) goto Lbe
            int r3 = r14.position()
            int r3 = r3 + r15
            int r15 = (int) r1
            r14.putInt(r3, r15)
            com.bytedance.pangle.g.h r15 = new com.bytedance.pangle.g.h
            r15.<init>(r14)
            int r14 = r13.size()
            int[] r1 = new int[r14]
            java.util.Set r2 = r13.keySet()
            java.util.Iterator r2 = r2.iterator()
            r3 = 0
            r4 = r3
        L5d:
            boolean r5 = r2.hasNext()
            r7 = 1
            if (r5 == 0) goto L72
            java.lang.Object r5 = r2.next()
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r1[r4] = r5
            int r4 = r4 + r7
            goto L5d
        L72:
            r2 = 3
            com.bytedance.pangle.g.k[] r2 = new com.bytedance.pangle.g.k[r2]     // Catch: java.security.DigestException -> Lb5
            r2[r3] = r6     // Catch: java.security.DigestException -> Lb5
            r2[r7] = r0     // Catch: java.security.DigestException -> Lb5
            r0 = 2
            r2[r0] = r15     // Catch: java.security.DigestException -> Lb5
            byte[][] r15 = a(r1, r2)     // Catch: java.security.DigestException -> Lb5
        L80:
            if (r3 >= r14) goto Lb4
            r0 = r1[r3]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            java.lang.Object r2 = r13.get(r2)
            byte[] r2 = (byte[]) r2
            r4 = r15[r3]
            boolean r2 = java.security.MessageDigest.isEqual(r2, r4)
            if (r2 == 0) goto L99
            int r3 = r3 + 1
            goto L80
        L99:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = b(r0)
            r14.append(r15)
            java.lang.String r15 = " digest of contents did not verify"
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            r13.<init>(r14)
            throw r13
        Lb4:
            return
        Lb5:
            r13 = move-exception
            java.lang.SecurityException r14 = new java.lang.SecurityException
            java.lang.String r15 = "Failed to compute digest(s) of contents"
            r14.<init>(r15, r13)
            throw r14
        Lbe:
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r14 = java.lang.String.valueOf(r1)
            java.lang.String r15 = "uint32 value of out range: "
            java.lang.String r14 = r15.concat(r14)
            r13.<init>(r14)
            throw r13
    }

    static void a(java.util.Map<java.lang.Integer, byte[]> r4, java.io.RandomAccessFile r5, com.bytedance.pangle.g.m r6) {
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto La8
            android.util.ArrayMap r0 = new android.util.ArrayMap
            r0.<init>()
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            boolean r2 = r4.containsKey(r2)
            if (r2 == 0) goto L25
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            java.lang.Object r3 = r4.get(r3)
            r0.put(r2, r3)
        L25:
            r2 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            boolean r3 = r4.containsKey(r3)
            if (r3 == 0) goto L3f
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r4.get(r2)
            r0.put(r3, r2)
        L3f:
            boolean r2 = r0.isEmpty()
            r3 = 0
            if (r2 != 0) goto L58
            java.io.FileDescriptor r1 = r5.getFD()     // Catch: java.io.IOException -> L4f
            a(r0, r1, r6)     // Catch: java.io.IOException -> L4f
            r1 = r3
            goto L58
        L4f:
            r4 = move-exception
            java.lang.SecurityException r5 = new java.lang.SecurityException
            java.lang.String r6 = "Cannot get FD"
            r5.<init>(r6, r4)
            throw r5
        L58:
            r0 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            boolean r2 = r4.containsKey(r2)
            if (r2 == 0) goto L9c
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.Object r4 = r4.get(r0)
            byte[] r4 = (byte[]) r4
            long r0 = r5.length()     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            byte[] r4 = a(r4, r0, r6)     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            com.bytedance.pangle.g.f$1 r0 = new com.bytedance.pangle.g.f$1     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            r0.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            com.bytedance.pangle.g.g$a r5 = com.bytedance.pangle.g.g.a(r5, r6, r0)     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            byte[] r5 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            boolean r4 = java.util.Arrays.equals(r4, r5)     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            if (r4 == 0) goto L87
            goto L9d
        L87:
            java.lang.SecurityException r4 = new java.lang.SecurityException     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            java.lang.String r5 = "APK verity digest of contents did not verify"
            r4.<init>(r5)     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
            throw r4     // Catch: java.security.NoSuchAlgorithmException -> L8f java.io.IOException -> L91 java.security.DigestException -> L93
        L8f:
            r4 = move-exception
            goto L94
        L91:
            r4 = move-exception
            goto L94
        L93:
            r4 = move-exception
        L94:
            java.lang.SecurityException r5 = new java.lang.SecurityException
            java.lang.String r6 = "Error during verification"
            r5.<init>(r6, r4)
            throw r5
        L9c:
            r3 = r1
        L9d:
            if (r3 != 0) goto La0
            return
        La0:
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.String r5 = "No known digest exists for integrity check"
            r4.<init>(r5)
            throw r4
        La8:
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.String r5 = "No digests provided"
            r4.<init>(r5)
            throw r4
    }

    static byte[] a(byte[] r8, long r9, com.bytedance.pangle.g.m r11) {
            int r0 = r8.length
            r1 = 40
            if (r0 != r1) goto L30
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r8)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            java.nio.ByteBuffer r0 = r0.order(r1)
            r1 = 32
            r0.position(r1)
            long r2 = r0.getLong()
            long r4 = r11.c
            long r6 = r11.b
            long r4 = r4 - r6
            long r9 = r9 - r4
            int r9 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r9 != 0) goto L28
            r9 = 0
            byte[] r8 = java.util.Arrays.copyOfRange(r8, r9, r1)
            return r8
        L28:
            java.lang.SecurityException r8 = new java.lang.SecurityException
            java.lang.String r9 = "APK content size did not verify"
            r8.<init>(r9)
            throw r8
        L30:
            java.lang.SecurityException r9 = new java.lang.SecurityException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r11 = "Verity digest size is wrong: "
            r10.<init>(r11)
            int r8 = r8.length
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            r9.<init>(r8)
            throw r9
    }

    private static byte[][] a(int[] r25, com.bytedance.pangle.g.k[] r26) {
            r0 = r25
            r1 = 0
            r3 = 0
            r5 = r1
            r4 = r3
        L7:
            r7 = 3
            r8 = 1048576(0x100000, double:5.180654E-318)
            if (r4 >= r7) goto L1c
            r7 = r26[r4]
            long r10 = r7.a()
            long r10 = r10 + r8
            r12 = 1
            long r10 = r10 - r12
            long r10 = r10 / r8
            long r5 = r5 + r10
            int r4 = r4 + 1
            goto L7
        L1c:
            r10 = 2097151(0x1fffff, double:1.0361303E-317)
            int r4 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r4 >= 0) goto L189
            int r4 = (int) r5
            int r5 = r0.length
            byte[][] r5 = new byte[r5][]
            r6 = r3
        L28:
            int r10 = r0.length
            r11 = 5
            if (r6 >= r10) goto L42
            r10 = r0[r6]
            int r10 = e(r10)
            int r10 = r10 * r4
            int r10 = r10 + r11
            byte[] r10 = new byte[r10]
            r11 = 90
            r10[r3] = r11
            a(r4, r10)
            r5[r6] = r10
            int r6 = r6 + 1
            goto L28
        L42:
            byte[] r4 = new byte[r11]
            r6 = -91
            r4[r3] = r6
            int r6 = r0.length
            java.security.MessageDigest[] r10 = new java.security.MessageDigest[r6]
            r12 = r3
        L4c:
            int r13 = r0.length
            java.lang.String r14 = " digest not supported"
            if (r12 >= r13) goto L76
            r13 = r0[r12]
            java.lang.String r13 = b(r13)
            java.security.MessageDigest r15 = java.security.MessageDigest.getInstance(r13)     // Catch: java.security.NoSuchAlgorithmException -> L60
            r10[r12] = r15     // Catch: java.security.NoSuchAlgorithmException -> L60
            int r12 = r12 + 1
            goto L4c
        L60:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r13)
            r2.append(r14)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L76:
            com.bytedance.pangle.g.f$a r12 = new com.bytedance.pangle.g.f$a
            r12.<init>(r10)
            r13 = r3
            r15 = r13
            r16 = r15
        L7f:
            if (r13 >= r7) goto L155
            r3 = r26[r13]
            long r17 = r3.a()
            r19 = r1
            r7 = r16
            r23 = r17
            r17 = r12
            r11 = r23
        L91:
            int r18 = (r11 > r1 ? 1 : (r11 == r1 ? 0 : -1))
            if (r18 <= 0) goto L13a
            long r1 = java.lang.Math.min(r11, r8)
            int r1 = (int) r1
            a(r1, r4)
            r2 = 0
        L9e:
            if (r2 >= r6) goto Lab
            r8 = r10[r2]
            r8.update(r4)
            int r2 = r2 + 1
            r8 = 1048576(0x100000, double:5.180654E-318)
            goto L9e
        Lab:
            r2 = r17
            r8 = r19
            r3.a(r2, r8, r1)     // Catch: java.io.IOException -> L11c
            r17 = r2
            r18 = r3
            r2 = 0
        Lb7:
            int r3 = r0.length
            if (r2 >= r3) goto Lff
            r3 = r0[r2]
            r19 = r4
            r4 = r5[r2]
            int r3 = e(r3)
            r20 = r6
            r6 = r10[r2]
            int r21 = r7 * r3
            r22 = r10
            r16 = 5
            int r10 = r21 + 5
            int r4 = r6.digest(r4, r10, r3)
            if (r4 != r3) goto Ldf
            int r2 = r2 + 1
            r4 = r19
            r6 = r20
            r10 = r22
            goto Lb7
        Ldf:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unexpected output size of "
            r1.<init>(r2)
            java.lang.String r2 = r6.getAlgorithm()
            r1.append(r2)
            java.lang.String r2 = " digest: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        Lff:
            r19 = r4
            r20 = r6
            r22 = r10
            r16 = 5
            long r1 = (long) r1
            long r3 = r8 + r1
            long r11 = r11 - r1
            int r7 = r7 + 1
            r1 = 0
            r8 = 1048576(0x100000, double:5.180654E-318)
            r23 = r3
            r3 = r18
            r4 = r19
            r19 = r23
            goto L91
        L11c:
            r0 = move-exception
            r1 = r0
            java.security.DigestException r0 = new java.security.DigestException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Failed to digest chunk #"
            r2.<init>(r3)
            r2.append(r7)
            java.lang.String r3 = " of section #"
            r2.append(r3)
            r2.append(r15)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2, r1)
            throw r0
        L13a:
            r19 = r4
            r20 = r6
            r22 = r10
            r16 = 5
            int r15 = r15 + 1
            int r13 = r13 + 1
            r11 = r16
            r12 = r17
            r1 = 0
            r3 = 0
            r8 = 1048576(0x100000, double:5.180654E-318)
            r16 = r7
            r7 = 3
            goto L7f
        L155:
            int r1 = r0.length
            byte[][] r1 = new byte[r1][]
            r3 = 0
        L159:
            int r2 = r0.length
            if (r3 >= r2) goto L188
            r2 = r0[r3]
            r4 = r5[r3]
            java.lang.String r2 = b(r2)
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> L171
            byte[] r2 = r2.digest(r4)
            r1[r3] = r2
            int r3 = r3 + 1
            goto L159
        L171:
            r0 = move-exception
            r1 = r0
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r14)
            java.lang.String r2 = r3.toString()
            r0.<init>(r2, r1)
            throw r0
        L188:
            return r1
        L189:
            java.security.DigestException r0 = new java.security.DigestException
            java.lang.String r1 = java.lang.String.valueOf(r5)
            java.lang.String r2 = "Too many chunks: "
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
    }

    static java.lang.String b(int r2) {
            r0 = 1
            if (r2 == r0) goto L1d
            r0 = 2
            if (r2 == r0) goto L1a
            r0 = 3
            if (r2 != r0) goto La
            goto L1d
        La:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "Unknown content digest algorthm: "
            java.lang.String r2 = r1.concat(r2)
            r0.<init>(r2)
            throw r0
        L1a:
            java.lang.String r2 = "SHA-512"
            return r2
        L1d:
            java.lang.String r2 = "SHA-256"
            return r2
    }

    private static java.nio.ByteBuffer b(java.nio.ByteBuffer r3, int r4) {
            if (r4 < 0) goto L2f
            int r0 = r3.limit()
            int r1 = r3.position()
            int r4 = r4 + r1
            if (r4 < r1) goto L29
            if (r4 > r0) goto L29
            r3.limit(r4)
            java.nio.ByteBuffer r1 = r3.slice()     // Catch: java.lang.Throwable -> L24
            java.nio.ByteOrder r2 = r3.order()     // Catch: java.lang.Throwable -> L24
            r1.order(r2)     // Catch: java.lang.Throwable -> L24
            r3.position(r4)     // Catch: java.lang.Throwable -> L24
            r3.limit(r0)
            return r1
        L24:
            r4 = move-exception
            r3.limit(r0)
            throw r4
        L29:
            java.nio.BufferUnderflowException r3 = new java.nio.BufferUnderflowException
            r3.<init>()
            throw r3
        L2f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r0 = "size: "
            java.lang.String r4 = r0.concat(r4)
            r3.<init>(r4)
            throw r3
    }

    static byte[] b(java.nio.ByteBuffer r4) {
            int r0 = r4.getInt()
            if (r0 < 0) goto L32
            int r1 = r4.remaining()
            if (r0 > r1) goto L12
            byte[] r0 = new byte[r0]
            r4.get(r0)
            return r0
        L12:
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Underflow while reading length-prefixed value. Length: "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = ", available: "
            r2.append(r0)
            int r4 = r4.remaining()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
        L32:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "Negative length"
            r4.<init>(r0)
            throw r4
    }

    static java.lang.String c(int r4) {
            r0 = 513(0x201, float:7.19E-43)
            if (r4 == r0) goto L3c
            r0 = 514(0x202, float:7.2E-43)
            if (r4 == r0) goto L3c
            r0 = 769(0x301, float:1.078E-42)
            if (r4 == r0) goto L39
            r0 = 1057(0x421, float:1.481E-42)
            if (r4 == r0) goto L36
            r0 = 1059(0x423, float:1.484E-42)
            if (r4 == r0) goto L3c
            r0 = 1061(0x425, float:1.487E-42)
            if (r4 == r0) goto L39
            switch(r4) {
                case 257: goto L36;
                case 258: goto L36;
                case 259: goto L36;
                case 260: goto L36;
                default: goto L1b;
            }
        L1b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unknown signature algorithm: 0x"
            r1.<init>(r2)
            r4 = r4 & (-1)
            long r2 = (long) r4
            java.lang.String r4 = java.lang.Long.toHexString(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L36:
            java.lang.String r4 = "RSA"
            return r4
        L39:
            java.lang.String r4 = "DSA"
            return r4
        L3c:
            java.lang.String r4 = "EC"
            return r4
    }

    static android.util.Pair<java.lang.String, ? extends java.security.spec.AlgorithmParameterSpec> d(int r6) {
            r0 = 513(0x201, float:7.19E-43)
            r1 = 0
            if (r6 == r0) goto L7f
            r0 = 514(0x202, float:7.2E-43)
            if (r6 == r0) goto L78
            r0 = 769(0x301, float:1.078E-42)
            if (r6 == r0) goto L71
            r0 = 1057(0x421, float:1.481E-42)
            if (r6 == r0) goto L6a
            r0 = 1059(0x423, float:1.484E-42)
            if (r6 == r0) goto L7f
            r0 = 1061(0x425, float:1.487E-42)
            if (r6 == r0) goto L71
            switch(r6) {
                case 257: goto L54;
                case 258: goto L3e;
                case 259: goto L6a;
                case 260: goto L37;
                default: goto L1c;
            }
        L1c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unknown signature algorithm: 0x"
            r1.<init>(r2)
            r6 = r6 & (-1)
            long r2 = (long) r6
            java.lang.String r6 = java.lang.Long.toHexString(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L37:
            java.lang.String r6 = "SHA512withRSA"
            android.util.Pair r6 = android.util.Pair.create(r6, r1)
            return r6
        L3e:
            java.security.spec.PSSParameterSpec r6 = new java.security.spec.PSSParameterSpec
            java.security.spec.MGF1ParameterSpec r3 = java.security.spec.MGF1ParameterSpec.SHA512
            r4 = 64
            r5 = 1
            java.lang.String r1 = "SHA-512"
            java.lang.String r2 = "MGF1"
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            java.lang.String r0 = "SHA512withRSA/PSS"
            android.util.Pair r6 = android.util.Pair.create(r0, r6)
            return r6
        L54:
            java.security.spec.PSSParameterSpec r6 = new java.security.spec.PSSParameterSpec
            java.security.spec.MGF1ParameterSpec r3 = java.security.spec.MGF1ParameterSpec.SHA256
            r4 = 32
            r5 = 1
            java.lang.String r1 = "SHA-256"
            java.lang.String r2 = "MGF1"
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            java.lang.String r0 = "SHA256withRSA/PSS"
            android.util.Pair r6 = android.util.Pair.create(r0, r6)
            return r6
        L6a:
            java.lang.String r6 = "SHA256withRSA"
            android.util.Pair r6 = android.util.Pair.create(r6, r1)
            return r6
        L71:
            java.lang.String r6 = "SHA256withDSA"
            android.util.Pair r6 = android.util.Pair.create(r6, r1)
            return r6
        L78:
            java.lang.String r6 = "SHA512withECDSA"
            android.util.Pair r6 = android.util.Pair.create(r6, r1)
            return r6
        L7f:
            java.lang.String r6 = "SHA256withECDSA"
            android.util.Pair r6 = android.util.Pair.create(r6, r1)
            return r6
    }

    private static int e(int r2) {
            r0 = 1
            if (r2 == r0) goto L1d
            r0 = 2
            if (r2 == r0) goto L1a
            r0 = 3
            if (r2 != r0) goto La
            goto L1d
        La:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "Unknown content digest algorthm: "
            java.lang.String r2 = r1.concat(r2)
            r0.<init>(r2)
            throw r0
        L1a:
            r2 = 64
            return r2
        L1d:
            r2 = 32
            return r2
    }
}
