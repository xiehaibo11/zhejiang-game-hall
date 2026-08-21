package org.cocos2dx.okio;

public final class Buffer implements org.cocos2dx.okio.BufferedSource, org.cocos2dx.okio.BufferedSink, java.lang.Cloneable, java.nio.channels.ByteChannel {
    private static final byte[] DIGITS = null;
    static final int REPLACEMENT_CHARACTER = 65533;

    @javax.annotation.Nullable
    org.cocos2dx.okio.Segment head;
    long size;



    public static final class UnsafeCursor implements java.io.Closeable {
        public org.cocos2dx.okio.Buffer buffer;
        public byte[] data;
        public int end;
        public long offset;
        public boolean readWrite;
        private org.cocos2dx.okio.Segment segment;
        public int start;

        public UnsafeCursor() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.offset = r0
                r0 = -1
                r2.start = r0
                r2.end = r0
                return
        }

        @Override
        public void close() {
                r3 = this;
                org.cocos2dx.okio.Buffer r0 = r3.buffer
                if (r0 == 0) goto L15
                r0 = 0
                r3.buffer = r0
                r3.segment = r0
                r1 = -1
                r3.offset = r1
                r3.data = r0
                r0 = -1
                r3.start = r0
                r3.end = r0
                return
            L15:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "not attached to a buffer"
                r0.<init>(r1)
                throw r0
        }

        public final long expandBuffer(int r10) {
                r9 = this;
                if (r10 <= 0) goto L59
                r0 = 8192(0x2000, float:1.148E-41)
                if (r10 > r0) goto L42
                org.cocos2dx.okio.Buffer r1 = r9.buffer
                if (r1 == 0) goto L3a
                boolean r2 = r9.readWrite
                if (r2 == 0) goto L32
                long r1 = r1.size
                org.cocos2dx.okio.Buffer r3 = r9.buffer
                org.cocos2dx.okio.Segment r10 = r3.writableSegment(r10)
                int r3 = r10.limit
                int r3 = 8192 - r3
                r10.limit = r0
                org.cocos2dx.okio.Buffer r4 = r9.buffer
                long r5 = (long) r3
                long r7 = r1 + r5
                r4.size = r7
                r9.segment = r10
                r9.offset = r1
                byte[] r10 = r10.data
                r9.data = r10
                int r10 = 8192 - r3
                r9.start = r10
                r9.end = r0
                return r5
            L32:
                java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
                java.lang.String r0 = "expandBuffer() only permitted for read/write buffers"
                r10.<init>(r0)
                throw r10
            L3a:
                java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
                java.lang.String r0 = "not attached to a buffer"
                r10.<init>(r0)
                throw r10
            L42:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "minByteCount > Segment.SIZE: "
                r1.append(r2)
                r1.append(r10)
                java.lang.String r10 = r1.toString()
                r0.<init>(r10)
                throw r0
            L59:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "minByteCount <= 0: "
                r1.append(r2)
                r1.append(r10)
                java.lang.String r10 = r1.toString()
                r0.<init>(r10)
                throw r0
        }

        public final int next() {
                r5 = this;
                long r0 = r5.offset
                org.cocos2dx.okio.Buffer r2 = r5.buffer
                long r2 = r2.size
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 == 0) goto L25
                long r0 = r5.offset
                r2 = -1
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 != 0) goto L19
                r0 = 0
                int r0 = r5.seek(r0)
                return r0
            L19:
                int r2 = r5.end
                int r3 = r5.start
                int r2 = r2 - r3
                long r2 = (long) r2
                long r0 = r0 + r2
                int r0 = r5.seek(r0)
                return r0
            L25:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }

        public final long resizeBuffer(long r14) {
                r13 = this;
                org.cocos2dx.okio.Buffer r0 = r13.buffer
                if (r0 == 0) goto La5
                boolean r1 = r13.readWrite
                if (r1 == 0) goto L9d
                long r0 = r0.size
                r2 = 0
                int r4 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
                if (r4 > 0) goto L62
                int r4 = (r14 > r2 ? 1 : (r14 == r2 ? 0 : -1))
                if (r4 < 0) goto L4b
                long r4 = r0 - r14
            L16:
                int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
                if (r6 <= 0) goto L3e
                org.cocos2dx.okio.Buffer r6 = r13.buffer
                org.cocos2dx.okio.Segment r6 = r6.head
                org.cocos2dx.okio.Segment r6 = r6.prev
                int r7 = r6.limit
                int r8 = r6.pos
                int r7 = r7 - r8
                long r7 = (long) r7
                int r9 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
                if (r9 > 0) goto L37
                org.cocos2dx.okio.Buffer r9 = r13.buffer
                org.cocos2dx.okio.Segment r10 = r6.pop()
                r9.head = r10
                org.cocos2dx.okio.SegmentPool.recycle(r6)
                long r4 = r4 - r7
                goto L16
            L37:
                int r2 = r6.limit
                long r2 = (long) r2
                long r2 = r2 - r4
                int r3 = (int) r2
                r6.limit = r3
            L3e:
                r2 = 0
                r13.segment = r2
                r13.offset = r14
                r13.data = r2
                r2 = -1
                r13.start = r2
                r13.end = r2
                goto L98
            L4b:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "newSize < 0: "
                r1.append(r2)
                r1.append(r14)
                java.lang.String r14 = r1.toString()
                r0.<init>(r14)
                throw r0
            L62:
                if (r4 <= 0) goto L98
                long r4 = r14 - r0
                r6 = 1
                r7 = 1
            L68:
                int r8 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
                if (r8 <= 0) goto L98
                org.cocos2dx.okio.Buffer r8 = r13.buffer
                org.cocos2dx.okio.Segment r8 = r8.writableSegment(r6)
                int r9 = r8.limit
                int r9 = 8192 - r9
                long r9 = (long) r9
                long r9 = java.lang.Math.min(r4, r9)
                int r10 = (int) r9
                int r9 = r8.limit
                int r9 = r9 + r10
                r8.limit = r9
                long r11 = (long) r10
                long r4 = r4 - r11
                if (r7 == 0) goto L68
                r13.segment = r8
                r13.offset = r0
                byte[] r7 = r8.data
                r13.data = r7
                int r7 = r8.limit
                int r7 = r7 - r10
                r13.start = r7
                int r7 = r8.limit
                r13.end = r7
                r7 = 0
                goto L68
            L98:
                org.cocos2dx.okio.Buffer r2 = r13.buffer
                r2.size = r14
                return r0
            L9d:
                java.lang.IllegalStateException r14 = new java.lang.IllegalStateException
                java.lang.String r15 = "resizeBuffer() only permitted for read/write buffers"
                r14.<init>(r15)
                throw r14
            La5:
                java.lang.IllegalStateException r14 = new java.lang.IllegalStateException
                java.lang.String r15 = "not attached to a buffer"
                r14.<init>(r15)
                throw r14
        }

        public final int seek(long r12) {
                r11 = this;
                r0 = -1
                int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
                if (r2 < 0) goto Lb3
                org.cocos2dx.okio.Buffer r0 = r11.buffer
                long r0 = r0.size
                int r3 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
                if (r3 > 0) goto Lb3
                if (r2 == 0) goto La6
                org.cocos2dx.okio.Buffer r0 = r11.buffer
                long r0 = r0.size
                int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
                if (r2 != 0) goto L1a
                goto La6
            L1a:
                r0 = 0
                org.cocos2dx.okio.Buffer r2 = r11.buffer
                long r2 = r2.size
                org.cocos2dx.okio.Buffer r4 = r11.buffer
                org.cocos2dx.okio.Segment r4 = r4.head
                org.cocos2dx.okio.Buffer r5 = r11.buffer
                org.cocos2dx.okio.Segment r5 = r5.head
                org.cocos2dx.okio.Segment r6 = r11.segment
                if (r6 == 0) goto L41
                long r7 = r11.offset
                int r9 = r11.start
                int r6 = r6.pos
                int r9 = r9 - r6
                long r9 = (long) r9
                long r6 = r7 - r9
                int r8 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
                if (r8 <= 0) goto L3e
                org.cocos2dx.okio.Segment r5 = r11.segment
                r2 = r6
                goto L41
            L3e:
                org.cocos2dx.okio.Segment r4 = r11.segment
                r0 = r6
            L41:
                long r6 = r2 - r12
                long r8 = r12 - r0
                int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r10 <= 0) goto L5e
            L49:
                int r2 = r4.limit
                int r3 = r4.pos
                int r2 = r2 - r3
                long r2 = (long) r2
                long r2 = r2 + r0
                int r5 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
                if (r5 < 0) goto L6e
                int r2 = r4.limit
                int r3 = r4.pos
                int r2 = r2 - r3
                long r2 = (long) r2
                long r0 = r0 + r2
                org.cocos2dx.okio.Segment r4 = r4.next
                goto L49
            L5e:
                r0 = r2
                r4 = r5
            L60:
                int r2 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
                if (r2 <= 0) goto L6e
                org.cocos2dx.okio.Segment r4 = r4.prev
                int r2 = r4.limit
                int r3 = r4.pos
                int r2 = r2 - r3
                long r2 = (long) r2
                long r0 = r0 - r2
                goto L60
            L6e:
                boolean r2 = r11.readWrite
                if (r2 == 0) goto L8d
                boolean r2 = r4.shared
                if (r2 == 0) goto L8d
                org.cocos2dx.okio.Segment r2 = r4.unsharedCopy()
                org.cocos2dx.okio.Buffer r3 = r11.buffer
                org.cocos2dx.okio.Segment r3 = r3.head
                if (r3 != r4) goto L84
                org.cocos2dx.okio.Buffer r3 = r11.buffer
                r3.head = r2
            L84:
                org.cocos2dx.okio.Segment r4 = r4.push(r2)
                org.cocos2dx.okio.Segment r2 = r4.prev
                r2.pop()
            L8d:
                r11.segment = r4
                r11.offset = r12
                byte[] r2 = r4.data
                r11.data = r2
                int r2 = r4.pos
                long r12 = r12 - r0
                int r13 = (int) r12
                int r2 = r2 + r13
                r11.start = r2
                int r12 = r4.limit
                r11.end = r12
                int r12 = r11.end
                int r13 = r11.start
                int r12 = r12 - r13
                return r12
            La6:
                r0 = 0
                r11.segment = r0
                r11.offset = r12
                r11.data = r0
                r12 = -1
                r11.start = r12
                r11.end = r12
                return r12
            Lb3:
                java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.Long r12 = java.lang.Long.valueOf(r12)
                r1[r2] = r12
                r12 = 1
                org.cocos2dx.okio.Buffer r13 = r11.buffer
                long r2 = r13.size
                java.lang.Long r13 = java.lang.Long.valueOf(r2)
                r1[r12] = r13
                java.lang.String r12 = "offset=%s > size=%s"
                java.lang.String r12 = java.lang.String.format(r12, r1)
                r0.<init>(r12)
                throw r0
        }
    }

    static {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            org.cocos2dx.okio.Buffer.DIGITS = r0
            return
    }

    public Buffer() {
            r0 = this;
            r0.<init>()
            return
    }

    private org.cocos2dx.okio.ByteString digest(java.lang.String r6) {
            r5 = this;
            java.security.MessageDigest r6 = java.security.MessageDigest.getInstance(r6)     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.Segment r0 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
            if (r0 == 0) goto L31
            org.cocos2dx.okio.Segment r0 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
            byte[] r0 = r0.data     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.Segment r1 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r1 = r1.pos     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.Segment r2 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r2 = r2.limit     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.Segment r3 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r3 = r3.pos     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r2 = r2 - r3
            r6.update(r0, r1, r2)     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.Segment r0 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
        L1e:
            org.cocos2dx.okio.Segment r0 = r0.next     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.Segment r1 = r5.head     // Catch: java.security.NoSuchAlgorithmException -> L3a
            if (r0 == r1) goto L31
            byte[] r1 = r0.data     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r2 = r0.pos     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r3 = r0.limit     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r4 = r0.pos     // Catch: java.security.NoSuchAlgorithmException -> L3a
            int r3 = r3 - r4
            r6.update(r1, r2, r3)     // Catch: java.security.NoSuchAlgorithmException -> L3a
            goto L1e
        L31:
            byte[] r6 = r6.digest()     // Catch: java.security.NoSuchAlgorithmException -> L3a
            org.cocos2dx.okio.ByteString r6 = org.cocos2dx.okio.ByteString.of(r6)     // Catch: java.security.NoSuchAlgorithmException -> L3a
            return r6
        L3a:
            java.lang.AssertionError r6 = new java.lang.AssertionError
            r6.<init>()
            throw r6
    }

    private org.cocos2dx.okio.ByteString hmac(java.lang.String r5, org.cocos2dx.okio.ByteString r6) {
            r4 = this;
            javax.crypto.Mac r0 = javax.crypto.Mac.getInstance(r5)     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            byte[] r6 = r6.toByteArray()     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            r1.<init>(r6, r5)     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            r0.init(r1)     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.Segment r5 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            if (r5 == 0) goto L3d
            org.cocos2dx.okio.Segment r5 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            byte[] r5 = r5.data     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.Segment r6 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r6 = r6.pos     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.Segment r1 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r1 = r1.limit     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.Segment r2 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r2 = r2.pos     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r1 = r1 - r2
            r0.update(r5, r6, r1)     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.Segment r5 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
        L2a:
            org.cocos2dx.okio.Segment r5 = r5.next     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.Segment r6 = r4.head     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            if (r5 == r6) goto L3d
            byte[] r6 = r5.data     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r1 = r5.pos     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r2 = r5.limit     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r3 = r5.pos     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            int r2 = r2 - r3
            r0.update(r6, r1, r2)     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            goto L2a
        L3d:
            byte[] r5 = r0.doFinal()     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            org.cocos2dx.okio.ByteString r5 = org.cocos2dx.okio.ByteString.of(r5)     // Catch: java.security.InvalidKeyException -> L46 java.security.NoSuchAlgorithmException -> L4d
            return r5
        L46:
            r5 = move-exception
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            r6.<init>(r5)
            throw r6
        L4d:
            java.lang.AssertionError r5 = new java.lang.AssertionError
            r5.<init>()
            throw r5
    }

    private boolean rangeEquals(org.cocos2dx.okio.Segment r6, int r7, org.cocos2dx.okio.ByteString r8, int r9, int r10) {
            r5 = this;
            int r0 = r6.limit
            byte[] r1 = r6.data
        L4:
            if (r9 >= r10) goto L23
            if (r7 != r0) goto L14
            org.cocos2dx.okio.Segment r6 = r6.next
            byte[] r7 = r6.data
            int r0 = r6.pos
            int r1 = r6.limit
            r4 = r1
            r1 = r7
            r7 = r0
            r0 = r4
        L14:
            r2 = r1[r7]
            byte r3 = r8.getByte(r9)
            if (r2 == r3) goto L1e
            r6 = 0
            return r6
        L1e:
            int r7 = r7 + 1
            int r9 = r9 + 1
            goto L4
        L23:
            r6 = 1
            return r6
    }

    private void readFrom(java.io.InputStream r5, long r6, boolean r8) throws java.io.IOException {
            r4 = this;
            if (r5 == 0) goto L3c
        L2:
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 > 0) goto Lc
            if (r8 == 0) goto Lb
            goto Lc
        Lb:
            return
        Lc:
            r0 = 1
            org.cocos2dx.okio.Segment r0 = r4.writableSegment(r0)
            int r1 = r0.limit
            int r1 = 8192 - r1
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r6, r1)
            int r2 = (int) r1
            byte[] r1 = r0.data
            int r3 = r0.limit
            int r1 = r5.read(r1, r3, r2)
            r2 = -1
            if (r1 != r2) goto L2f
            if (r8 == 0) goto L29
            return
        L29:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L2f:
            int r2 = r0.limit
            int r2 = r2 + r1
            r0.limit = r2
            long r2 = r4.size
            long r0 = (long) r1
            long r2 = r2 + r0
            r4.size = r2
            long r6 = r6 - r0
            goto L2
        L3c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "in == null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public org.cocos2dx.okio.Buffer buffer() {
            r0 = this;
            return r0
    }

    public final void clear() {
            r2 = this;
            long r0 = r2.size     // Catch: java.io.EOFException -> L6
            r2.skip(r0)     // Catch: java.io.EOFException -> L6
            return
        L6:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            org.cocos2dx.okio.Buffer r0 = r1.clone()
            return r0
    }

    public org.cocos2dx.okio.Buffer clone() {
            r6 = this;
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            long r1 = r6.size
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Le
            return r0
        Le:
            org.cocos2dx.okio.Segment r1 = r6.head
            org.cocos2dx.okio.Segment r1 = r1.sharedCopy()
            r0.head = r1
            org.cocos2dx.okio.Segment r1 = r0.head
            r1.prev = r1
            r1.next = r1
            org.cocos2dx.okio.Segment r1 = r6.head
        L1e:
            org.cocos2dx.okio.Segment r1 = r1.next
            org.cocos2dx.okio.Segment r2 = r6.head
            if (r1 == r2) goto L30
            org.cocos2dx.okio.Segment r2 = r0.head
            org.cocos2dx.okio.Segment r2 = r2.prev
            org.cocos2dx.okio.Segment r3 = r1.sharedCopy()
            r2.push(r3)
            goto L1e
        L30:
            long r1 = r6.size
            r0.size = r1
            return r0
    }

    @Override
    public void close() {
            r0 = this;
            return
    }

    public final long completeSegmentByteCount() {
            r5 = this;
            long r0 = r5.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L9
            return r2
        L9:
            org.cocos2dx.okio.Segment r2 = r5.head
            org.cocos2dx.okio.Segment r2 = r2.prev
            int r3 = r2.limit
            r4 = 8192(0x2000, float:1.148E-41)
            if (r3 >= r4) goto L1e
            boolean r3 = r2.owner
            if (r3 == 0) goto L1e
            int r3 = r2.limit
            int r2 = r2.pos
            int r3 = r3 - r2
            long r2 = (long) r3
            long r0 = r0 - r2
        L1e:
            return r0
    }

    public final org.cocos2dx.okio.Buffer copyTo(java.io.OutputStream r7) throws java.io.IOException {
            r6 = this;
            long r4 = r6.size
            r2 = 0
            r0 = r6
            r1 = r7
            org.cocos2dx.okio.Buffer r7 = r0.copyTo(r1, r2, r4)
            return r7
    }

    public final org.cocos2dx.okio.Buffer copyTo(java.io.OutputStream r7, long r8, long r10) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L44
            long r0 = r6.size
            r2 = r8
            r4 = r10
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto L10
            return r6
        L10:
            org.cocos2dx.okio.Segment r2 = r6.head
        L12:
            int r3 = r2.limit
            int r4 = r2.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            int r5 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r5 < 0) goto L26
            int r3 = r2.limit
            int r4 = r2.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            long r8 = r8 - r3
            org.cocos2dx.okio.Segment r2 = r2.next
            goto L12
        L26:
            int r3 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r3 <= 0) goto L43
            int r3 = r2.pos
            long r3 = (long) r3
            long r3 = r3 + r8
            int r8 = (int) r3
            int r9 = r2.limit
            int r9 = r9 - r8
            long r3 = (long) r9
            long r3 = java.lang.Math.min(r3, r10)
            int r9 = (int) r3
            byte[] r3 = r2.data
            r7.write(r3, r8, r9)
            long r8 = (long) r9
            long r10 = r10 - r8
            org.cocos2dx.okio.Segment r2 = r2.next
            r8 = r0
            goto L26
        L43:
            return r6
        L44:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "out == null"
            r7.<init>(r8)
            throw r7
    }

    public final org.cocos2dx.okio.Buffer copyTo(org.cocos2dx.okio.Buffer r7, long r8, long r10) {
            r6 = this;
            if (r7 == 0) goto L62
            long r0 = r6.size
            r2 = r8
            r4 = r10
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto L10
            return r6
        L10:
            long r2 = r7.size
            long r2 = r2 + r10
            r7.size = r2
            org.cocos2dx.okio.Segment r2 = r6.head
        L17:
            int r3 = r2.limit
            int r4 = r2.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            int r5 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r5 < 0) goto L2b
            int r3 = r2.limit
            int r4 = r2.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            long r8 = r8 - r3
            org.cocos2dx.okio.Segment r2 = r2.next
            goto L17
        L2b:
            int r3 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r3 <= 0) goto L61
            org.cocos2dx.okio.Segment r3 = r2.sharedCopy()
            int r4 = r3.pos
            long r4 = (long) r4
            long r4 = r4 + r8
            int r8 = (int) r4
            r3.pos = r8
            int r8 = r3.pos
            int r9 = (int) r10
            int r8 = r8 + r9
            int r9 = r3.limit
            int r8 = java.lang.Math.min(r8, r9)
            r3.limit = r8
            org.cocos2dx.okio.Segment r8 = r7.head
            if (r8 != 0) goto L51
            r3.prev = r3
            r3.next = r3
            r7.head = r3
            goto L56
        L51:
            org.cocos2dx.okio.Segment r8 = r8.prev
            r8.push(r3)
        L56:
            int r8 = r3.limit
            int r9 = r3.pos
            int r8 = r8 - r9
            long r8 = (long) r8
            long r10 = r10 - r8
            org.cocos2dx.okio.Segment r2 = r2.next
            r8 = r0
            goto L2b
        L61:
            return r6
        L62:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "out == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public org.cocos2dx.okio.BufferedSink emit() {
            r0 = this;
            return r0
    }

    @Override
    public org.cocos2dx.okio.Buffer emitCompleteSegments() {
            r0 = this;
            return r0
    }

    @Override
    public org.cocos2dx.okio.BufferedSink emitCompleteSegments() throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okio.Buffer r0 = r1.emitCompleteSegments()
            return r0
    }

    public boolean equals(java.lang.Object r14) {
            r13 = this;
            r0 = 1
            if (r13 != r14) goto L4
            return r0
        L4:
            boolean r1 = r14 instanceof org.cocos2dx.okio.Buffer
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            org.cocos2dx.okio.Buffer r14 = (org.cocos2dx.okio.Buffer) r14
            long r3 = r13.size
            long r5 = r14.size
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 == 0) goto L15
            return r2
        L15:
            r5 = 0
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 != 0) goto L1c
            return r0
        L1c:
            org.cocos2dx.okio.Segment r1 = r13.head
            org.cocos2dx.okio.Segment r14 = r14.head
            int r3 = r1.pos
            int r4 = r14.pos
        L24:
            long r7 = r13.size
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 >= 0) goto L67
            int r7 = r1.limit
            int r7 = r7 - r3
            int r8 = r14.limit
            int r8 = r8 - r4
            int r7 = java.lang.Math.min(r7, r8)
            long r7 = (long) r7
            r9 = r4
            r4 = r3
            r3 = 0
        L38:
            long r10 = (long) r3
            int r12 = (r10 > r7 ? 1 : (r10 == r7 ? 0 : -1))
            if (r12 >= 0) goto L51
            byte[] r10 = r1.data
            int r11 = r4 + 1
            r4 = r10[r4]
            byte[] r10 = r14.data
            int r12 = r9 + 1
            r9 = r10[r9]
            if (r4 == r9) goto L4c
            return r2
        L4c:
            int r3 = r3 + 1
            r4 = r11
            r9 = r12
            goto L38
        L51:
            int r3 = r1.limit
            if (r4 != r3) goto L5a
            org.cocos2dx.okio.Segment r1 = r1.next
            int r3 = r1.pos
            goto L5b
        L5a:
            r3 = r4
        L5b:
            int r4 = r14.limit
            if (r9 != r4) goto L64
            org.cocos2dx.okio.Segment r14 = r14.next
            int r4 = r14.pos
            goto L65
        L64:
            r4 = r9
        L65:
            long r5 = r5 + r7
            goto L24
        L67:
            return r0
    }

    @Override
    public boolean exhausted() {
            r5 = this;
            long r0 = r5.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public void flush() {
            r0 = this;
            return
    }

    public final byte getByte(long r7) {
            r6 = this;
            long r0 = r6.size
            r4 = 1
            r2 = r7
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            long r0 = r6.size
            long r2 = r0 - r7
            int r4 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r4 <= 0) goto L29
            org.cocos2dx.okio.Segment r0 = r6.head
        L12:
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            int r3 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r3 >= 0) goto L25
            byte[] r1 = r0.data
            int r0 = r0.pos
            int r8 = (int) r7
            int r0 = r0 + r8
            r7 = r1[r0]
            return r7
        L25:
            long r7 = r7 - r1
            org.cocos2dx.okio.Segment r0 = r0.next
            goto L12
        L29:
            long r7 = r7 - r0
            org.cocos2dx.okio.Segment r0 = r6.head
        L2c:
            org.cocos2dx.okio.Segment r0 = r0.prev
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r7 = r7 + r1
            r1 = 0
            int r3 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r3 < 0) goto L2c
            byte[] r1 = r0.data
            int r0 = r0.pos
            int r8 = (int) r7
            int r0 = r0 + r8
            r7 = r1[r0]
            return r7
    }

    public int hashCode() {
            r5 = this;
            org.cocos2dx.okio.Segment r0 = r5.head
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            r1 = 1
        L7:
            int r2 = r0.pos
            int r3 = r0.limit
        Lb:
            if (r2 >= r3) goto L17
            int r1 = r1 * 31
            byte[] r4 = r0.data
            r4 = r4[r2]
            int r1 = r1 + r4
            int r2 = r2 + 1
            goto Lb
        L17:
            org.cocos2dx.okio.Segment r0 = r0.next
            org.cocos2dx.okio.Segment r2 = r5.head
            if (r0 != r2) goto L7
            return r1
    }

    public final org.cocos2dx.okio.ByteString hmacSha1(org.cocos2dx.okio.ByteString r2) {
            r1 = this;
            java.lang.String r0 = "HmacSHA1"
            org.cocos2dx.okio.ByteString r2 = r1.hmac(r0, r2)
            return r2
    }

    public final org.cocos2dx.okio.ByteString hmacSha256(org.cocos2dx.okio.ByteString r2) {
            r1 = this;
            java.lang.String r0 = "HmacSHA256"
            org.cocos2dx.okio.ByteString r2 = r1.hmac(r0, r2)
            return r2
    }

    public final org.cocos2dx.okio.ByteString hmacSha512(org.cocos2dx.okio.ByteString r2) {
            r1 = this;
            java.lang.String r0 = "HmacSHA512"
            org.cocos2dx.okio.ByteString r2 = r1.hmac(r0, r2)
            return r2
    }

    @Override
    public long indexOf(byte r7) {
            r6 = this;
            r2 = 0
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r6
            r1 = r7
            long r0 = r0.indexOf(r1, r2, r4)
            return r0
    }

    @Override
    public long indexOf(byte r7, long r8) {
            r6 = this;
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r6
            r1 = r7
            r2 = r8
            long r7 = r0.indexOf(r1, r2, r4)
            return r7
    }

    @Override
    public long indexOf(byte r16, long r17, long r19) {
            r15 = this;
            r0 = r15
            r1 = 0
            int r3 = (r17 > r1 ? 1 : (r17 == r1 ? 0 : -1))
            if (r3 < 0) goto L7f
            int r3 = (r19 > r17 ? 1 : (r19 == r17 ? 0 : -1))
            if (r3 < 0) goto L7f
            long r3 = r0.size
            int r5 = (r19 > r3 ? 1 : (r19 == r3 ? 0 : -1))
            if (r5 <= 0) goto L12
            goto L14
        L12:
            r3 = r19
        L14:
            r5 = -1
            int r7 = (r17 > r3 ? 1 : (r17 == r3 ? 0 : -1))
            if (r7 != 0) goto L1b
            return r5
        L1b:
            org.cocos2dx.okio.Segment r7 = r0.head
            if (r7 != 0) goto L20
            return r5
        L20:
            long r8 = r0.size
            long r10 = r8 - r17
            int r12 = (r10 > r17 ? 1 : (r10 == r17 ? 0 : -1))
            if (r12 >= 0) goto L36
        L28:
            int r1 = (r8 > r17 ? 1 : (r8 == r17 ? 0 : -1))
            if (r1 <= 0) goto L45
            org.cocos2dx.okio.Segment r7 = r7.prev
            int r1 = r7.limit
            int r2 = r7.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r8 = r8 - r1
            goto L28
        L36:
            r8 = r1
            int r1 = r7.limit
            int r2 = r7.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = r1 + r8
            int r10 = (r1 > r17 ? 1 : (r1 == r17 ? 0 : -1))
            if (r10 >= 0) goto L45
            org.cocos2dx.okio.Segment r7 = r7.next
            goto L36
        L45:
            r1 = r17
        L47:
            int r10 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r10 >= 0) goto L7e
            byte[] r10 = r7.data
            int r11 = r7.limit
            long r11 = (long) r11
            int r13 = r7.pos
            long r13 = (long) r13
            long r13 = r13 + r3
            long r13 = r13 - r8
            long r11 = java.lang.Math.min(r11, r13)
            int r12 = (int) r11
            int r11 = r7.pos
            long r13 = (long) r11
            long r13 = r13 + r1
            long r13 = r13 - r8
            int r1 = (int) r13
        L60:
            if (r1 >= r12) goto L71
            r2 = r10[r1]
            r11 = r16
            if (r2 != r11) goto L6e
            int r2 = r7.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = r1 + r8
            return r1
        L6e:
            int r1 = r1 + 1
            goto L60
        L71:
            r11 = r16
            int r1 = r7.limit
            int r2 = r7.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = r1 + r8
            org.cocos2dx.okio.Segment r7 = r7.next
            r8 = r1
            goto L47
        L7e:
            return r5
        L7f:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            long r4 = r0.size
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r2[r3] = r4
            java.lang.Long r3 = java.lang.Long.valueOf(r17)
            r4 = 1
            r2[r4] = r3
            r3 = 2
            java.lang.Long r4 = java.lang.Long.valueOf(r19)
            r2[r3] = r4
            java.lang.String r3 = "size=%s fromIndex=%s toIndex=%s"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            r1.<init>(r2)
            throw r1
    }

    @Override
    public long indexOf(org.cocos2dx.okio.ByteString r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOf(r3, r0)
            return r0
    }

    @Override
    public long indexOf(org.cocos2dx.okio.ByteString r19, long r20) throws java.io.IOException {
            r18 = this;
            r6 = r18
            int r0 = r19.size()
            if (r0 == 0) goto Lb0
            r0 = 0
            int r2 = (r20 > r0 ? 1 : (r20 == r0 ? 0 : -1))
            if (r2 < 0) goto La8
            org.cocos2dx.okio.Segment r2 = r6.head
            r7 = -1
            if (r2 != 0) goto L15
            return r7
        L15:
            long r3 = r6.size
            long r9 = r3 - r20
            int r5 = (r9 > r20 ? 1 : (r9 == r20 ? 0 : -1))
            if (r5 >= 0) goto L2b
        L1d:
            int r0 = (r3 > r20 ? 1 : (r3 == r20 ? 0 : -1))
            if (r0 <= 0) goto L3a
            org.cocos2dx.okio.Segment r2 = r2.prev
            int r0 = r2.limit
            int r1 = r2.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r3 = r3 - r0
            goto L1d
        L2b:
            r3 = r0
            int r0 = r2.limit
            int r1 = r2.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = r0 + r3
            int r5 = (r0 > r20 ? 1 : (r0 == r20 ? 0 : -1))
            if (r5 >= 0) goto L3a
            org.cocos2dx.okio.Segment r2 = r2.next
            goto L2b
        L3a:
            r0 = 0
            r9 = r19
            byte r10 = r9.getByte(r0)
            int r11 = r19.size()
            long r0 = r6.size
            long r12 = (long) r11
            long r0 = r0 - r12
            r12 = 1
            long r12 = r12 + r0
            r0 = r20
            r5 = r2
            r14 = r3
        L50:
            int r2 = (r14 > r12 ? 1 : (r14 == r12 ? 0 : -1))
            if (r2 >= 0) goto La6
            byte[] r4 = r5.data
            int r2 = r5.limit
            long r2 = (long) r2
            int r7 = r5.pos
            long r7 = (long) r7
            long r7 = r7 + r12
            long r7 = r7 - r14
            long r2 = java.lang.Math.min(r2, r7)
            int r7 = (int) r2
            int r2 = r5.pos
            long r2 = (long) r2
            long r2 = r2 + r0
            long r2 = r2 - r14
            int r0 = (int) r2
            r8 = r0
        L6a:
            if (r8 >= r7) goto L96
            r0 = r4[r8]
            if (r0 != r10) goto L8b
            int r2 = r8 + 1
            r16 = 1
            r0 = r18
            r1 = r5
            r3 = r19
            r17 = r4
            r4 = r16
            r6 = r5
            r5 = r11
            boolean r0 = r0.rangeEquals(r1, r2, r3, r4, r5)
            if (r0 == 0) goto L8e
            int r0 = r6.pos
            int r8 = r8 - r0
            long r0 = (long) r8
            long r0 = r0 + r14
            return r0
        L8b:
            r17 = r4
            r6 = r5
        L8e:
            int r8 = r8 + 1
            r5 = r6
            r4 = r17
            r6 = r18
            goto L6a
        L96:
            r6 = r5
            int r0 = r6.limit
            int r1 = r6.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = r0 + r14
            org.cocos2dx.okio.Segment r5 = r6.next
            r7 = -1
            r6 = r18
            r14 = r0
            goto L50
        La6:
            r0 = r7
            return r0
        La8:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "fromIndex < 0"
            r0.<init>(r1)
            throw r0
        Lb0:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "bytes is empty"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public long indexOfElement(org.cocos2dx.okio.ByteString r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOfElement(r3, r0)
            return r0
    }

    @Override
    public long indexOfElement(org.cocos2dx.okio.ByteString r12, long r13) {
            r11 = this;
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto La5
            org.cocos2dx.okio.Segment r2 = r11.head
            r3 = -1
            if (r2 != 0) goto Ld
            return r3
        Ld:
            long r5 = r11.size
            long r7 = r5 - r13
            int r9 = (r7 > r13 ? 1 : (r7 == r13 ? 0 : -1))
            if (r9 >= 0) goto L23
        L15:
            int r0 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r0 <= 0) goto L32
            org.cocos2dx.okio.Segment r2 = r2.prev
            int r0 = r2.limit
            int r1 = r2.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r5 = r5 - r0
            goto L15
        L23:
            r5 = r0
            int r0 = r2.limit
            int r1 = r2.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = r0 + r5
            int r7 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r7 >= 0) goto L32
            org.cocos2dx.okio.Segment r2 = r2.next
            goto L23
        L32:
            int r0 = r12.size()
            r1 = 2
            r7 = 0
            if (r0 != r1) goto L70
            byte r0 = r12.getByte(r7)
            r1 = 1
            byte r12 = r12.getByte(r1)
        L43:
            long r7 = r11.size
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 >= 0) goto La4
            byte[] r1 = r2.data
            int r7 = r2.pos
            long r7 = (long) r7
            long r7 = r7 + r13
            long r7 = r7 - r5
            int r13 = (int) r7
            int r14 = r2.limit
        L53:
            if (r13 >= r14) goto L65
            r7 = r1[r13]
            if (r7 == r0) goto L5f
            if (r7 != r12) goto L5c
            goto L5f
        L5c:
            int r13 = r13 + 1
            goto L53
        L5f:
            int r12 = r2.pos
        L61:
            int r13 = r13 - r12
            long r12 = (long) r13
            long r12 = r12 + r5
            return r12
        L65:
            int r13 = r2.limit
            int r14 = r2.pos
            int r13 = r13 - r14
            long r13 = (long) r13
            long r13 = r13 + r5
            org.cocos2dx.okio.Segment r2 = r2.next
            r5 = r13
            goto L43
        L70:
            byte[] r12 = r12.internalArray()
        L74:
            long r0 = r11.size
            int r8 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r8 >= 0) goto La4
            byte[] r0 = r2.data
            int r1 = r2.pos
            long r8 = (long) r1
            long r8 = r8 + r13
            long r8 = r8 - r5
            int r13 = (int) r8
            int r14 = r2.limit
        L84:
            if (r13 >= r14) goto L99
            r1 = r0[r13]
            int r8 = r12.length
            r9 = 0
        L8a:
            if (r9 >= r8) goto L96
            r10 = r12[r9]
            if (r1 != r10) goto L93
            int r12 = r2.pos
            goto L61
        L93:
            int r9 = r9 + 1
            goto L8a
        L96:
            int r13 = r13 + 1
            goto L84
        L99:
            int r13 = r2.limit
            int r14 = r2.pos
            int r13 = r13 - r14
            long r13 = (long) r13
            long r13 = r13 + r5
            org.cocos2dx.okio.Segment r2 = r2.next
            r5 = r13
            goto L74
        La4:
            return r3
        La5:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r13 = "fromIndex < 0"
            r12.<init>(r13)
            throw r12
    }

    @Override
    public java.io.InputStream inputStream() {
            r1 = this;
            org.cocos2dx.okio.Buffer$2 r0 = new org.cocos2dx.okio.Buffer$2
            r0.<init>(r1)
            return r0
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final org.cocos2dx.okio.ByteString md5() {
            r1 = this;
            java.lang.String r0 = "MD5"
            org.cocos2dx.okio.ByteString r0 = r1.digest(r0)
            return r0
    }

    @Override
    public java.io.OutputStream outputStream() {
            r1 = this;
            org.cocos2dx.okio.Buffer$1 r0 = new org.cocos2dx.okio.Buffer$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public boolean rangeEquals(long r7, org.cocos2dx.okio.ByteString r9) {
            r6 = this;
            int r5 = r9.size()
            r4 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            boolean r7 = r0.rangeEquals(r1, r3, r4, r5)
            return r7
    }

    @Override
    public boolean rangeEquals(long r7, org.cocos2dx.okio.ByteString r9, int r10, int r11) {
            r6 = this;
            r0 = 0
            r1 = 0
            int r3 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r3 < 0) goto L32
            if (r10 < 0) goto L32
            if (r11 < 0) goto L32
            long r1 = r6.size
            long r1 = r1 - r7
            long r3 = (long) r11
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 < 0) goto L32
            int r1 = r9.size()
            int r1 = r1 - r10
            if (r1 >= r11) goto L1b
            goto L32
        L1b:
            r1 = 0
        L1c:
            if (r1 >= r11) goto L30
            long r2 = (long) r1
            long r2 = r2 + r7
            byte r2 = r6.getByte(r2)
            int r3 = r10 + r1
            byte r3 = r9.getByte(r3)
            if (r2 == r3) goto L2d
            return r0
        L2d:
            int r1 = r1 + 1
            goto L1c
        L30:
            r7 = 1
            return r7
        L32:
            return r0
    }

    @Override
    public int read(java.nio.ByteBuffer r7) throws java.io.IOException {
            r6 = this;
            org.cocos2dx.okio.Segment r0 = r6.head
            if (r0 != 0) goto L6
            r7 = -1
            return r7
        L6:
            int r1 = r7.remaining()
            int r2 = r0.limit
            int r3 = r0.pos
            int r2 = r2 - r3
            int r1 = java.lang.Math.min(r1, r2)
            byte[] r2 = r0.data
            int r3 = r0.pos
            r7.put(r2, r3, r1)
            int r7 = r0.pos
            int r7 = r7 + r1
            r0.pos = r7
            long r2 = r6.size
            long r4 = (long) r1
            long r2 = r2 - r4
            r6.size = r2
            int r7 = r0.pos
            int r2 = r0.limit
            if (r7 != r2) goto L34
            org.cocos2dx.okio.Segment r7 = r0.pop()
            r6.head = r7
            org.cocos2dx.okio.SegmentPool.recycle(r0)
        L34:
            return r1
    }

    @Override
    public int read(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r8, int r9, int r10) {
            r7 = this;
            int r0 = r8.length
            long r1 = (long) r0
            long r3 = (long) r9
            long r5 = (long) r10
            org.cocos2dx.okio.Util.checkOffsetAndCount(r1, r3, r5)
            org.cocos2dx.okio.Segment r0 = r7.head
            if (r0 != 0) goto Ld
            r8 = -1
            return r8
        Ld:
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            int r10 = java.lang.Math.min(r10, r1)
            byte[] r1 = r0.data
            int r2 = r0.pos
            java.lang.System.arraycopy(r1, r2, r8, r9, r10)
            int r8 = r0.pos
            int r8 = r8 + r10
            r0.pos = r8
            long r8 = r7.size
            long r1 = (long) r10
            long r8 = r8 - r1
            r7.size = r8
            int r8 = r0.pos
            int r9 = r0.limit
            if (r8 != r9) goto L37
            org.cocos2dx.okio.Segment r8 = r0.pop()
            r7.head = r8
            org.cocos2dx.okio.SegmentPool.recycle(r0)
        L37:
            return r10
    }

    @Override
    public long read(org.cocos2dx.okio.Buffer r6, long r7) {
            r5 = this;
            if (r6 == 0) goto L31
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 < 0) goto L1a
            long r2 = r5.size
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 != 0) goto L11
            r6 = -1
            return r6
        L11:
            int r0 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r0 <= 0) goto L16
            r7 = r2
        L16:
            r6.write(r5, r7)
            return r7
        L1a:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r6.<init>(r7)
            throw r6
        L31:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "sink == null"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public long readAll(org.cocos2dx.okio.Sink r6) throws java.io.IOException {
            r5 = this;
            long r0 = r5.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Lb
            r6.write(r5, r0)
        Lb:
            return r0
    }

    public final org.cocos2dx.okio.Buffer.UnsafeCursor readAndWriteUnsafe() {
            r1 = this;
            org.cocos2dx.okio.Buffer$UnsafeCursor r0 = new org.cocos2dx.okio.Buffer$UnsafeCursor
            r0.<init>()
            org.cocos2dx.okio.Buffer$UnsafeCursor r0 = r1.readAndWriteUnsafe(r0)
            return r0
    }

    public final org.cocos2dx.okio.Buffer.UnsafeCursor readAndWriteUnsafe(org.cocos2dx.okio.Buffer.UnsafeCursor r2) {
            r1 = this;
            org.cocos2dx.okio.Buffer r0 = r2.buffer
            if (r0 != 0) goto La
            r2.buffer = r1
            r0 = 1
            r2.readWrite = r0
            return r2
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "already attached to a buffer"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public byte readByte() {
            r9 = this;
            long r0 = r9.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L2a
            org.cocos2dx.okio.Segment r0 = r9.head
            int r1 = r0.pos
            int r2 = r0.limit
            byte[] r3 = r0.data
            int r4 = r1 + 1
            r1 = r3[r1]
            long r5 = r9.size
            r7 = 1
            long r5 = r5 - r7
            r9.size = r5
            if (r4 != r2) goto L27
            org.cocos2dx.okio.Segment r2 = r0.pop()
            r9.head = r2
            org.cocos2dx.okio.SegmentPool.recycle(r0)
            goto L29
        L27:
            r0.pos = r4
        L29:
            return r1
        L2a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "size == 0"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public byte[] readByteArray() {
            r2 = this;
            long r0 = r2.size     // Catch: java.io.EOFException -> L7
            byte[] r0 = r2.readByteArray(r0)     // Catch: java.io.EOFException -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    @Override
    public byte[] readByteArray(long r7) throws java.io.EOFException {
            r6 = this;
            long r0 = r6.size
            r2 = 0
            r4 = r7
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 > 0) goto L16
            int r8 = (int) r7
            byte[] r7 = new byte[r8]
            r6.readFully(r7)
            return r7
        L16:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "byteCount > Integer.MAX_VALUE: "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
    }

    @Override
    public org.cocos2dx.okio.ByteString readByteString() {
            r2 = this;
            org.cocos2dx.okio.ByteString r0 = new org.cocos2dx.okio.ByteString
            byte[] r1 = r2.readByteArray()
            r0.<init>(r1)
            return r0
    }

    @Override
    public org.cocos2dx.okio.ByteString readByteString(long r2) throws java.io.EOFException {
            r1 = this;
            org.cocos2dx.okio.ByteString r0 = new org.cocos2dx.okio.ByteString
            byte[] r2 = r1.readByteArray(r2)
            r0.<init>(r2)
            return r0
    }

    @Override
    public long readDecimalLong() {
            r17 = this;
            r0 = r17
            long r1 = r0.size
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto Lb7
            r5 = -7
            r7 = 0
            r8 = r5
            r5 = 0
            r6 = 0
        L10:
            org.cocos2dx.okio.Segment r10 = r0.head
            byte[] r11 = r10.data
            int r12 = r10.pos
            int r13 = r10.limit
        L18:
            if (r12 >= r13) goto L98
            r15 = r11[r12]
            r14 = 48
            if (r15 < r14) goto L6a
            r1 = 57
            if (r15 > r1) goto L6a
            int r14 = r14 - r15
            r1 = -922337203685477580(0xf333333333333334, double:-8.390303882365713E246)
            int r16 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r16 < 0) goto L3d
            if (r16 != 0) goto L36
            long r1 = (long) r14
            int r16 = (r1 > r8 ? 1 : (r1 == r8 ? 0 : -1))
            if (r16 >= 0) goto L36
            goto L3d
        L36:
            r1 = 10
            long r3 = r3 * r1
            long r1 = (long) r14
            long r3 = r3 + r1
            goto L74
        L3d:
            org.cocos2dx.okio.Buffer r1 = new org.cocos2dx.okio.Buffer
            r1.<init>()
            org.cocos2dx.okio.Buffer r1 = r1.writeDecimalLong(r3)
            org.cocos2dx.okio.Buffer r1 = r1.writeByte(r15)
            if (r5 != 0) goto L4f
            r1.readByte()
        L4f:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Number too large: "
            r3.append(r4)
            java.lang.String r1 = r1.readUtf8()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        L6a:
            r1 = 45
            if (r15 != r1) goto L79
            if (r7 != 0) goto L79
            r1 = 1
            long r8 = r8 - r1
            r5 = 1
        L74:
            int r12 = r12 + 1
            int r7 = r7 + 1
            goto L18
        L79:
            if (r7 == 0) goto L7d
            r6 = 1
            goto L98
        L7d:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected leading [0-9] or '-' character but was 0x"
            r2.append(r3)
            java.lang.String r3 = java.lang.Integer.toHexString(r15)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L98:
            if (r12 != r13) goto La4
            org.cocos2dx.okio.Segment r1 = r10.pop()
            r0.head = r1
            org.cocos2dx.okio.SegmentPool.recycle(r10)
            goto La6
        La4:
            r10.pos = r12
        La6:
            if (r6 != 0) goto Lac
            org.cocos2dx.okio.Segment r1 = r0.head
            if (r1 != 0) goto L10
        Lac:
            long r1 = r0.size
            long r6 = (long) r7
            long r1 = r1 - r6
            r0.size = r1
            if (r5 == 0) goto Lb5
            goto Lb6
        Lb5:
            long r3 = -r3
        Lb6:
            return r3
        Lb7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "size == 0"
            r1.<init>(r2)
            throw r1
    }

    public final org.cocos2dx.okio.Buffer readFrom(java.io.InputStream r4) throws java.io.IOException {
            r3 = this;
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2 = 1
            r3.readFrom(r4, r0, r2)
            return r3
    }

    public final org.cocos2dx.okio.Buffer readFrom(java.io.InputStream r4, long r5) throws java.io.IOException {
            r3 = this;
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto Lb
            r0 = 0
            r3.readFrom(r4, r5, r0)
            return r3
        Lb:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }

    @Override
    public void readFully(org.cocos2dx.okio.Buffer r4, long r5) throws java.io.EOFException {
            r3 = this;
            long r0 = r3.size
            int r2 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r2 < 0) goto La
            r4.write(r3, r5)
            return
        La:
            r4.write(r3, r0)
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
    }

    @Override
    public void readFully(byte[] r4) throws java.io.EOFException {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L15
            int r1 = r4.length
            int r1 = r1 - r0
            int r1 = r3.read(r4, r0, r1)
            r2 = -1
            if (r1 == r2) goto Lf
            int r0 = r0 + r1
            goto L1
        Lf:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L15:
            return
    }

    @Override
    public long readHexadecimalUnsignedLong() {
            r15 = this;
            long r0 = r15.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Lac
            r0 = 0
            r4 = r2
            r1 = 0
        Lb:
            org.cocos2dx.okio.Segment r6 = r15.head
            byte[] r7 = r6.data
            int r8 = r6.pos
            int r9 = r6.limit
        L13:
            if (r8 >= r9) goto L91
            r10 = r7[r8]
            r11 = 48
            if (r10 < r11) goto L22
            r11 = 57
            if (r10 > r11) goto L22
            int r11 = r10 + (-48)
            goto L3a
        L22:
            r11 = 97
            if (r10 < r11) goto L2f
            r11 = 102(0x66, float:1.43E-43)
            if (r10 > r11) goto L2f
            int r11 = r10 + (-97)
        L2c:
            int r11 = r11 + 10
            goto L3a
        L2f:
            r11 = 65
            if (r10 < r11) goto L72
            r11 = 70
            if (r10 > r11) goto L72
            int r11 = r10 + (-65)
            goto L2c
        L3a:
            r12 = -1152921504606846976(0xf000000000000000, double:-3.105036184601418E231)
            long r12 = r12 & r4
            int r14 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            if (r14 != 0) goto L4a
            r10 = 4
            long r4 = r4 << r10
            long r10 = (long) r11
            long r4 = r4 | r10
            int r8 = r8 + 1
            int r1 = r1 + 1
            goto L13
        L4a:
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            org.cocos2dx.okio.Buffer r0 = r0.writeHexadecimalUnsignedLong(r4)
            org.cocos2dx.okio.Buffer r0 = r0.writeByte(r10)
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Number too large: "
            r2.append(r3)
            java.lang.String r0 = r0.readUtf8()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L72:
            if (r1 == 0) goto L76
            r0 = 1
            goto L91
        L76:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected leading [0-9a-fA-F] character but was 0x"
            r1.append(r2)
            java.lang.String r2 = java.lang.Integer.toHexString(r10)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L91:
            if (r8 != r9) goto L9d
            org.cocos2dx.okio.Segment r7 = r6.pop()
            r15.head = r7
            org.cocos2dx.okio.SegmentPool.recycle(r6)
            goto L9f
        L9d:
            r6.pos = r8
        L9f:
            if (r0 != 0) goto La5
            org.cocos2dx.okio.Segment r6 = r15.head
            if (r6 != 0) goto Lb
        La5:
            long r2 = r15.size
            long r0 = (long) r1
            long r2 = r2 - r0
            r15.size = r2
            return r4
        Lac:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "size == 0"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public int readInt() {
            r8 = this;
            long r0 = r8.size
            r2 = 4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L6c
            org.cocos2dx.okio.Segment r0 = r8.head
            int r1 = r0.pos
            int r4 = r0.limit
            int r5 = r4 - r1
            r6 = 4
            if (r5 >= r6) goto L35
            byte r0 = r8.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
        L35:
            byte[] r5 = r0.data
            int r6 = r1 + 1
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r7 = r6 + 1
            r6 = r5[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 << 16
            r1 = r1 | r6
            int r6 = r7 + 1
            r7 = r5[r7]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 << 8
            r1 = r1 | r7
            int r7 = r6 + 1
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            long r5 = r8.size
            long r5 = r5 - r2
            r8.size = r5
            if (r7 != r4) goto L69
            org.cocos2dx.okio.Segment r2 = r0.pop()
            r8.head = r2
            org.cocos2dx.okio.SegmentPool.recycle(r0)
            goto L6b
        L69:
            r0.pos = r7
        L6b:
            return r1
        L6c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size < 4: "
            r1.append(r2)
            long r2 = r8.size
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public int readIntLe() {
            r1 = this;
            int r0 = r1.readInt()
            int r0 = org.cocos2dx.okio.Util.reverseBytesInt(r0)
            return r0
    }

    @Override
    public long readLong() {
            r15 = this;
            long r0 = r15.size
            r2 = 8
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L8c
            org.cocos2dx.okio.Segment r0 = r15.head
            int r1 = r0.pos
            int r4 = r0.limit
            int r5 = r4 - r1
            r6 = 32
            r7 = 8
            if (r5 >= r7) goto L2a
            int r0 = r15.readInt()
            long r0 = (long) r0
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r0 = r0 << r6
            int r4 = r15.readInt()
            long r4 = (long) r4
            long r2 = r2 & r4
            long r0 = r0 | r2
            return r0
        L2a:
            byte[] r5 = r0.data
            int r8 = r1 + 1
            r1 = r5[r1]
            long r9 = (long) r1
            r11 = 255(0xff, double:1.26E-321)
            long r9 = r9 & r11
            r1 = 56
            long r9 = r9 << r1
            int r1 = r8 + 1
            r8 = r5[r8]
            long r13 = (long) r8
            long r13 = r13 & r11
            r8 = 48
            long r13 = r13 << r8
            long r8 = r9 | r13
            int r10 = r1 + 1
            r1 = r5[r1]
            long r13 = (long) r1
            long r13 = r13 & r11
            r1 = 40
            long r13 = r13 << r1
            long r8 = r8 | r13
            int r1 = r10 + 1
            r10 = r5[r10]
            long r13 = (long) r10
            long r13 = r13 & r11
            long r13 = r13 << r6
            long r8 = r8 | r13
            int r6 = r1 + 1
            r1 = r5[r1]
            long r13 = (long) r1
            long r13 = r13 & r11
            r1 = 24
            long r13 = r13 << r1
            long r8 = r8 | r13
            int r1 = r6 + 1
            r6 = r5[r6]
            long r13 = (long) r6
            long r13 = r13 & r11
            r6 = 16
            long r13 = r13 << r6
            long r8 = r8 | r13
            int r6 = r1 + 1
            r1 = r5[r1]
            long r13 = (long) r1
            long r13 = r13 & r11
            long r13 = r13 << r7
            long r7 = r8 | r13
            int r1 = r6 + 1
            r5 = r5[r6]
            long r5 = (long) r5
            long r5 = r5 & r11
            long r5 = r5 | r7
            long r7 = r15.size
            long r7 = r7 - r2
            r15.size = r7
            if (r1 != r4) goto L89
            org.cocos2dx.okio.Segment r1 = r0.pop()
            r15.head = r1
            org.cocos2dx.okio.SegmentPool.recycle(r0)
            goto L8b
        L89:
            r0.pos = r1
        L8b:
            return r5
        L8c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size < 8: "
            r1.append(r2)
            long r2 = r15.size
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public long readLongLe() {
            r2 = this;
            long r0 = r2.readLong()
            long r0 = org.cocos2dx.okio.Util.reverseBytesLong(r0)
            return r0
    }

    @Override
    public short readShort() {
            r8 = this;
            long r0 = r8.size
            r2 = 2
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L4a
            org.cocos2dx.okio.Segment r0 = r8.head
            int r1 = r0.pos
            int r4 = r0.limit
            int r5 = r4 - r1
            r6 = 2
            if (r5 >= r6) goto L24
            byte r0 = r8.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
        L24:
            byte[] r5 = r0.data
            int r6 = r1 + 1
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r7 = r6 + 1
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            long r5 = r8.size
            long r5 = r5 - r2
            r8.size = r5
            if (r7 != r4) goto L46
            org.cocos2dx.okio.Segment r2 = r0.pop()
            r8.head = r2
            org.cocos2dx.okio.SegmentPool.recycle(r0)
            goto L48
        L46:
            r0.pos = r7
        L48:
            short r0 = (short) r1
            return r0
        L4a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size < 2: "
            r1.append(r2)
            long r2 = r8.size
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public short readShortLe() {
            r1 = this;
            short r0 = r1.readShort()
            short r0 = org.cocos2dx.okio.Util.reverseBytesShort(r0)
            return r0
    }

    @Override
    public java.lang.String readString(long r7, java.nio.charset.Charset r9) throws java.io.EOFException {
            r6 = this;
            long r0 = r6.size
            r2 = 0
            r4 = r7
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            if (r9 == 0) goto L6e
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 > 0) goto L57
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 != 0) goto L1a
            java.lang.String r7 = ""
            return r7
        L1a:
            org.cocos2dx.okio.Segment r0 = r6.head
            int r1 = r0.pos
            long r1 = (long) r1
            long r1 = r1 + r7
            int r3 = r0.limit
            long r3 = (long) r3
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 <= 0) goto L31
            java.lang.String r0 = new java.lang.String
            byte[] r7 = r6.readByteArray(r7)
            r0.<init>(r7, r9)
            return r0
        L31:
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r0.data
            int r3 = r0.pos
            int r4 = (int) r7
            r1.<init>(r2, r3, r4, r9)
            int r9 = r0.pos
            long r2 = (long) r9
            long r2 = r2 + r7
            int r9 = (int) r2
            r0.pos = r9
            long r2 = r6.size
            long r2 = r2 - r7
            r6.size = r2
            int r7 = r0.pos
            int r8 = r0.limit
            if (r7 != r8) goto L56
            org.cocos2dx.okio.Segment r7 = r0.pop()
            r6.head = r7
            org.cocos2dx.okio.SegmentPool.recycle(r0)
        L56:
            return r1
        L57:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount > Integer.MAX_VALUE: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r9.<init>(r7)
            throw r9
        L6e:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "charset == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public java.lang.String readString(java.nio.charset.Charset r3) {
            r2 = this;
            long r0 = r2.size     // Catch: java.io.EOFException -> L7
            java.lang.String r3 = r2.readString(r0, r3)     // Catch: java.io.EOFException -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r3)
            throw r0
    }

    public final org.cocos2dx.okio.Buffer.UnsafeCursor readUnsafe() {
            r1 = this;
            org.cocos2dx.okio.Buffer$UnsafeCursor r0 = new org.cocos2dx.okio.Buffer$UnsafeCursor
            r0.<init>()
            org.cocos2dx.okio.Buffer$UnsafeCursor r0 = r1.readUnsafe(r0)
            return r0
    }

    public final org.cocos2dx.okio.Buffer.UnsafeCursor readUnsafe(org.cocos2dx.okio.Buffer.UnsafeCursor r2) {
            r1 = this;
            org.cocos2dx.okio.Buffer r0 = r2.buffer
            if (r0 != 0) goto La
            r2.buffer = r1
            r0 = 0
            r2.readWrite = r0
            return r2
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "already attached to a buffer"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String readUtf8() {
            r3 = this;
            long r0 = r3.size     // Catch: java.io.EOFException -> L9
            java.nio.charset.Charset r2 = org.cocos2dx.okio.Util.UTF_8     // Catch: java.io.EOFException -> L9
            java.lang.String r0 = r3.readString(r0, r2)     // Catch: java.io.EOFException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.lang.String readUtf8(long r2) throws java.io.EOFException {
            r1 = this;
            java.nio.charset.Charset r0 = org.cocos2dx.okio.Util.UTF_8
            java.lang.String r2 = r1.readString(r2, r0)
            return r2
    }

    @Override
    public int readUtf8CodePoint() throws java.io.EOFException {
            r12 = this;
            long r0 = r12.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Lad
            byte r0 = r12.getByte(r2)
            r1 = r0 & 128(0x80, float:1.8E-43)
            r2 = 1
            r3 = 128(0x80, float:1.8E-43)
            r4 = 65533(0xfffd, float:9.1831E-41)
            if (r1 != 0) goto L1c
            r1 = r0 & 127(0x7f, float:1.78E-43)
            r5 = 0
            r5 = 1
            r6 = 0
            goto L3f
        L1c:
            r1 = r0 & 224(0xe0, float:3.14E-43)
            r5 = 192(0xc0, float:2.69E-43)
            if (r1 != r5) goto L28
            r1 = r0 & 31
            r5 = 2
            r6 = 128(0x80, float:1.8E-43)
            goto L3f
        L28:
            r1 = r0 & 240(0xf0, float:3.36E-43)
            r5 = 224(0xe0, float:3.14E-43)
            if (r1 != r5) goto L34
            r1 = r0 & 15
            r5 = 3
            r6 = 2048(0x800, float:2.87E-42)
            goto L3f
        L34:
            r1 = r0 & 248(0xf8, float:3.48E-43)
            r5 = 240(0xf0, float:3.36E-43)
            if (r1 != r5) goto La7
            r1 = r0 & 7
            r5 = 4
            r6 = 65536(0x10000, float:9.1835E-41)
        L3f:
            long r7 = r12.size
            long r9 = (long) r5
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 < 0) goto L75
        L46:
            if (r2 >= r5) goto L5d
            long r7 = (long) r2
            byte r0 = r12.getByte(r7)
            r11 = r0 & 192(0xc0, float:2.69E-43)
            if (r11 != r3) goto L59
            int r1 = r1 << 6
            r0 = r0 & 63
            r1 = r1 | r0
            int r2 = r2 + 1
            goto L46
        L59:
            r12.skip(r7)
            return r4
        L5d:
            r12.skip(r9)
            r0 = 1114111(0x10ffff, float:1.561202E-39)
            if (r1 <= r0) goto L66
            return r4
        L66:
            r0 = 55296(0xd800, float:7.7486E-41)
            if (r1 < r0) goto L71
            r0 = 57343(0xdfff, float:8.0355E-41)
            if (r1 > r0) goto L71
            return r4
        L71:
            if (r1 >= r6) goto L74
            return r4
        L74:
            return r1
        L75:
            java.io.EOFException r1 = new java.io.EOFException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "size < "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = ": "
            r2.append(r3)
            long r3 = r12.size
            r2.append(r3)
            java.lang.String r3 = " (to read code point prefixed 0x"
            r2.append(r3)
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r2.append(r0)
            java.lang.String r0 = ")"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        La7:
            r0 = 1
            r12.skip(r0)
            return r4
        Lad:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    @Override
    @javax.annotation.Nullable
    public java.lang.String readUtf8Line() throws java.io.EOFException {
            r5 = this;
            r0 = 10
            long r0 = r5.indexOf(r0)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L1b
            long r0 = r5.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L19
            java.lang.String r0 = r5.readUtf8(r0)
            goto L1a
        L19:
            r0 = 0
        L1a:
            return r0
        L1b:
            java.lang.String r0 = r5.readUtf8Line(r0)
            return r0
    }

    java.lang.String readUtf8Line(long r7) throws java.io.EOFException {
            r6 = this;
            r0 = 1
            r2 = 0
            int r4 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1c
            long r2 = r7 - r0
            byte r4 = r6.getByte(r2)
            r5 = 13
            if (r4 != r5) goto L1c
            java.lang.String r7 = r6.readUtf8(r2)
            r0 = 2
            r6.skip(r0)
            return r7
        L1c:
            java.lang.String r7 = r6.readUtf8(r7)
            r6.skip(r0)
            return r7
    }

    @Override
    public java.lang.String readUtf8LineStrict() throws java.io.EOFException {
            r2 = this;
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            java.lang.String r0 = r2.readUtf8LineStrict(r0)
            return r0
    }

    @Override
    public java.lang.String readUtf8LineStrict(long r11) throws java.io.EOFException {
            r10 = this;
            r0 = 0
            int r2 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r2 < 0) goto L92
            r0 = 1
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r4 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r4 != 0) goto L12
            goto L14
        L12:
            long r2 = r11 + r0
        L14:
            r5 = 10
            r6 = 0
            r4 = r10
            r8 = r2
            long r4 = r4.indexOf(r5, r6, r8)
            r6 = -1
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 == 0) goto L29
            java.lang.String r11 = r10.readUtf8Line(r4)
            return r11
        L29:
            long r4 = r10.size()
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 >= 0) goto L48
            long r0 = r2 - r0
            byte r0 = r10.getByte(r0)
            r1 = 13
            if (r0 != r1) goto L48
            byte r0 = r10.getByte(r2)
            r1 = 10
            if (r0 != r1) goto L48
            java.lang.String r11 = r10.readUtf8Line(r2)
            return r11
        L48:
            org.cocos2dx.okio.Buffer r6 = new org.cocos2dx.okio.Buffer
            r6.<init>()
            r2 = 0
            r0 = 32
            long r4 = r10.size()
            long r4 = java.lang.Math.min(r0, r4)
            r0 = r10
            r1 = r6
            r0.copyTo(r1, r2, r4)
            java.io.EOFException r0 = new java.io.EOFException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "\\n not found: limit="
            r1.append(r2)
            long r2 = r10.size()
            long r11 = java.lang.Math.min(r2, r11)
            r1.append(r11)
            java.lang.String r11 = " content="
            r1.append(r11)
            org.cocos2dx.okio.ByteString r11 = r6.readByteString()
            java.lang.String r11 = r11.hex()
            r1.append(r11)
            r11 = 8230(0x2026, float:1.1533E-41)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r0.<init>(r11)
            throw r0
        L92:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "limit < 0: "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r0.<init>(r11)
            throw r0
    }

    @Override
    public boolean request(long r4) {
            r3 = this;
            long r0 = r3.size
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 < 0) goto L8
            r4 = 1
            goto L9
        L8:
            r4 = 0
        L9:
            return r4
    }

    @Override
    public void require(long r4) throws java.io.EOFException {
            r3 = this;
            long r0 = r3.size
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 < 0) goto L7
            return
        L7:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
    }

    java.util.List<java.lang.Integer> segmentSizes() {
            r4 = this;
            org.cocos2dx.okio.Segment r0 = r4.head
            if (r0 != 0) goto L9
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
        L9:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.cocos2dx.okio.Segment r1 = r4.head
            int r1 = r1.limit
            org.cocos2dx.okio.Segment r2 = r4.head
            int r2 = r2.pos
            int r1 = r1 - r2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            org.cocos2dx.okio.Segment r1 = r4.head
        L20:
            org.cocos2dx.okio.Segment r1 = r1.next
            org.cocos2dx.okio.Segment r2 = r4.head
            if (r1 == r2) goto L33
            int r2 = r1.limit
            int r3 = r1.pos
            int r2 = r2 - r3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            goto L20
        L33:
            return r0
    }

    @Override
    public int select(org.cocos2dx.okio.Options r4) {
            r3 = this;
            r0 = 0
            int r0 = r3.selectPrefix(r4, r0)
            r1 = -1
            if (r0 != r1) goto L9
            return r1
        L9:
            org.cocos2dx.okio.ByteString[] r4 = r4.byteStrings
            r4 = r4[r0]
            int r4 = r4.size()
            long r1 = (long) r4
            r3.skip(r1)     // Catch: java.io.EOFException -> L16
            return r0
        L16:
            java.lang.AssertionError r4 = new java.lang.AssertionError
            r4.<init>()
            throw r4
    }

    int selectPrefix(org.cocos2dx.okio.Options r18, boolean r19) {
            r17 = this;
            r0 = r18
            r1 = r17
            org.cocos2dx.okio.Segment r2 = r1.head
            r3 = -2
            if (r2 != 0) goto L13
            if (r19 == 0) goto Lc
            return r3
        Lc:
            org.cocos2dx.okio.ByteString r2 = org.cocos2dx.okio.ByteString.EMPTY
            int r0 = r0.indexOf(r2)
            return r0
        L13:
            byte[] r4 = r2.data
            int r5 = r2.pos
            int r6 = r2.limit
            int[] r0 = r0.trie
            r7 = 0
            r8 = -1
            r9 = r5
            r11 = r6
            r10 = -1
            r5 = r2
            r6 = r4
            r4 = 0
        L23:
            int r12 = r4 + 1
            r4 = r0[r4]
            int r13 = r12 + 1
            r12 = r0[r12]
            if (r12 == r8) goto L2e
            r10 = r12
        L2e:
            if (r5 != 0) goto L31
            goto L58
        L31:
            r12 = 0
            if (r4 >= 0) goto L6c
            int r4 = r4 * (-1)
            int r14 = r13 + r4
        L38:
            int r4 = r9 + 1
            r9 = r6[r9]
            r9 = r9 & 255(0xff, float:3.57E-43)
            int r15 = r13 + 1
            r13 = r0[r13]
            if (r9 == r13) goto L45
            return r10
        L45:
            if (r15 != r14) goto L49
            r9 = 1
            goto L4a
        L49:
            r9 = 0
        L4a:
            if (r4 != r11) goto L64
            org.cocos2dx.okio.Segment r4 = r5.next
            int r5 = r4.pos
            byte[] r6 = r4.data
            int r11 = r4.limit
            if (r4 != r2) goto L5f
            if (r9 != 0) goto L5c
        L58:
            if (r19 == 0) goto L5b
            return r3
        L5b:
            return r10
        L5c:
            r4 = r5
            r5 = r12
            goto L64
        L5f:
            r16 = r5
            r5 = r4
            r4 = r16
        L64:
            if (r9 == 0) goto L69
            r9 = r0[r15]
            goto L93
        L69:
            r9 = r4
            r13 = r15
            goto L38
        L6c:
            int r14 = r9 + 1
            r9 = r6[r9]
            r9 = r9 & 255(0xff, float:3.57E-43)
            int r15 = r13 + r4
        L74:
            if (r13 != r15) goto L77
            return r10
        L77:
            r3 = r0[r13]
            if (r9 != r3) goto L9b
            int r13 = r13 + r4
            r9 = r0[r13]
            if (r14 != r11) goto L92
            org.cocos2dx.okio.Segment r3 = r5.next
            int r4 = r3.pos
            byte[] r5 = r3.data
            int r6 = r3.limit
            if (r3 != r2) goto L8e
            r11 = r6
            r6 = r5
            r5 = r12
            goto L93
        L8e:
            r11 = r6
            r6 = r5
            r5 = r3
            goto L93
        L92:
            r4 = r14
        L93:
            if (r9 < 0) goto L96
            return r9
        L96:
            int r3 = -r9
            r9 = r4
            r4 = r3
            r3 = -2
            goto L23
        L9b:
            int r13 = r13 + 1
            r3 = -2
            goto L74
    }

    public final org.cocos2dx.okio.ByteString sha1() {
            r1 = this;
            java.lang.String r0 = "SHA-1"
            org.cocos2dx.okio.ByteString r0 = r1.digest(r0)
            return r0
    }

    public final org.cocos2dx.okio.ByteString sha256() {
            r1 = this;
            java.lang.String r0 = "SHA-256"
            org.cocos2dx.okio.ByteString r0 = r1.digest(r0)
            return r0
    }

    public final org.cocos2dx.okio.ByteString sha512() {
            r1 = this;
            java.lang.String r0 = "SHA-512"
            org.cocos2dx.okio.ByteString r0 = r1.digest(r0)
            return r0
    }

    public final long size() {
            r2 = this;
            long r0 = r2.size
            return r0
    }

    @Override
    public void skip(long r7) throws java.io.EOFException {
            r6 = this;
        L0:
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 <= 0) goto L41
            org.cocos2dx.okio.Segment r0 = r6.head
            if (r0 == 0) goto L3b
            int r0 = r0.limit
            org.cocos2dx.okio.Segment r1 = r6.head
            int r1 = r1.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = java.lang.Math.min(r7, r0)
            int r1 = (int) r0
            long r2 = r6.size
            long r4 = (long) r1
            long r2 = r2 - r4
            r6.size = r2
            long r7 = r7 - r4
            org.cocos2dx.okio.Segment r0 = r6.head
            int r2 = r0.pos
            int r2 = r2 + r1
            r0.pos = r2
            org.cocos2dx.okio.Segment r0 = r6.head
            int r0 = r0.pos
            org.cocos2dx.okio.Segment r1 = r6.head
            int r1 = r1.limit
            if (r0 != r1) goto L0
            org.cocos2dx.okio.Segment r0 = r6.head
            org.cocos2dx.okio.Segment r1 = r0.pop()
            r6.head = r1
            org.cocos2dx.okio.SegmentPool.recycle(r0)
            goto L0
        L3b:
            java.io.EOFException r7 = new java.io.EOFException
            r7.<init>()
            throw r7
        L41:
            return
    }

    public final org.cocos2dx.okio.ByteString snapshot() {
            r5 = this;
            long r0 = r5.size
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto Lf
            int r1 = (int) r0
            org.cocos2dx.okio.ByteString r0 = r5.snapshot(r1)
            return r0
        Lf:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size > Integer.MAX_VALUE: "
            r1.append(r2)
            long r2 = r5.size
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final org.cocos2dx.okio.ByteString snapshot(int r2) {
            r1 = this;
            if (r2 != 0) goto L5
            org.cocos2dx.okio.ByteString r2 = org.cocos2dx.okio.ByteString.EMPTY
            return r2
        L5:
            org.cocos2dx.okio.SegmentedByteString r0 = new org.cocos2dx.okio.SegmentedByteString
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public org.cocos2dx.okio.Timeout timeout() {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = org.cocos2dx.okio.Timeout.NONE
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            org.cocos2dx.okio.ByteString r0 = r1.snapshot()
            java.lang.String r0 = r0.toString()
            return r0
    }

    org.cocos2dx.okio.Segment writableSegment(int r4) {
            r3 = this;
            r0 = 1
            if (r4 < r0) goto L2c
            r0 = 8192(0x2000, float:1.148E-41)
            if (r4 > r0) goto L2c
            org.cocos2dx.okio.Segment r1 = r3.head
            if (r1 != 0) goto L18
            org.cocos2dx.okio.Segment r4 = org.cocos2dx.okio.SegmentPool.take()
            r3.head = r4
            org.cocos2dx.okio.Segment r4 = r3.head
            r4.prev = r4
            r4.next = r4
            return r4
        L18:
            org.cocos2dx.okio.Segment r1 = r1.prev
            int r2 = r1.limit
            int r2 = r2 + r4
            if (r2 > r0) goto L23
            boolean r4 = r1.owner
            if (r4 != 0) goto L2b
        L23:
            org.cocos2dx.okio.Segment r4 = org.cocos2dx.okio.SegmentPool.take()
            org.cocos2dx.okio.Segment r1 = r1.push(r4)
        L2b:
            return r1
        L2c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
    }

    @Override
    public int write(java.nio.ByteBuffer r7) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L2b
            int r0 = r7.remaining()
            r1 = r0
        L7:
            if (r1 <= 0) goto L24
            r2 = 1
            org.cocos2dx.okio.Segment r2 = r6.writableSegment(r2)
            int r3 = r2.limit
            int r3 = 8192 - r3
            int r3 = java.lang.Math.min(r1, r3)
            byte[] r4 = r2.data
            int r5 = r2.limit
            r7.get(r4, r5, r3)
            int r1 = r1 - r3
            int r4 = r2.limit
            int r4 = r4 + r3
            r2.limit = r4
            goto L7
        L24:
            long r1 = r6.size
            long r3 = (long) r0
            long r1 = r1 + r3
            r6.size = r1
            return r0
        L2b:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r7.<init>(r0)
            throw r7
    }

    @Override
    public org.cocos2dx.okio.Buffer write(org.cocos2dx.okio.ByteString r2) {
            r1 = this;
            if (r2 == 0) goto L6
            r2.write(r1)
            return r1
        L6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "byteString == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.Buffer write(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto L9
            r0 = 0
            int r1 = r3.length
            org.cocos2dx.okio.Buffer r3 = r2.write(r3, r0, r1)
            return r3
        L9:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public org.cocos2dx.okio.Buffer write(byte[] r10, int r11, int r12) {
            r9 = this;
            if (r10 == 0) goto L30
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            org.cocos2dx.okio.Util.checkOffsetAndCount(r1, r3, r5)
            int r12 = r12 + r11
        Lb:
            if (r11 >= r12) goto L2a
            r0 = 1
            org.cocos2dx.okio.Segment r0 = r9.writableSegment(r0)
            int r1 = r12 - r11
            int r2 = r0.limit
            int r2 = 8192 - r2
            int r1 = java.lang.Math.min(r1, r2)
            byte[] r2 = r0.data
            int r3 = r0.limit
            java.lang.System.arraycopy(r10, r11, r2, r3, r1)
            int r11 = r11 + r1
            int r2 = r0.limit
            int r2 = r2 + r1
            r0.limit = r2
            goto Lb
        L2a:
            long r10 = r9.size
            long r10 = r10 + r7
            r9.size = r10
            return r9
        L30:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "source == null"
            r10.<init>(r11)
            throw r10
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(org.cocos2dx.okio.ByteString r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.write(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(org.cocos2dx.okio.Source r6, long r7) throws java.io.IOException {
            r5 = this;
        L0:
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 <= 0) goto L18
            long r0 = r6.read(r5, r7)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L12
            long r7 = r7 - r0
            goto L0
        L12:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L18:
            return r5
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(byte[] r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.write(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(byte[] r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.write(r1, r2, r3)
            return r1
    }

    @Override
    public void write(org.cocos2dx.okio.Buffer r7, long r8) {
            r6 = this;
            if (r7 == 0) goto L95
            if (r7 == r6) goto L8d
            long r0 = r7.size
            r2 = 0
            r4 = r8
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
        Lc:
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r2 <= 0) goto L8c
            org.cocos2dx.okio.Segment r0 = r7.head
            int r0 = r0.limit
            org.cocos2dx.okio.Segment r1 = r7.head
            int r1 = r1.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r2 >= 0) goto L5c
            org.cocos2dx.okio.Segment r0 = r6.head
            if (r0 == 0) goto L27
            org.cocos2dx.okio.Segment r0 = r0.prev
            goto L28
        L27:
            r0 = 0
        L28:
            if (r0 == 0) goto L53
            boolean r1 = r0.owner
            if (r1 == 0) goto L53
            int r1 = r0.limit
            long r1 = (long) r1
            long r1 = r1 + r8
            boolean r3 = r0.shared
            if (r3 == 0) goto L38
            r3 = 0
            goto L3a
        L38:
            int r3 = r0.pos
        L3a:
            long r3 = (long) r3
            long r1 = r1 - r3
            r3 = 8192(0x2000, double:4.0474E-320)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L53
            org.cocos2dx.okio.Segment r1 = r7.head
            int r2 = (int) r8
            r1.writeTo(r0, r2)
            long r0 = r7.size
            long r0 = r0 - r8
            r7.size = r0
            long r0 = r6.size
            long r0 = r0 + r8
            r6.size = r0
            return
        L53:
            org.cocos2dx.okio.Segment r0 = r7.head
            int r1 = (int) r8
            org.cocos2dx.okio.Segment r0 = r0.split(r1)
            r7.head = r0
        L5c:
            org.cocos2dx.okio.Segment r0 = r7.head
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            org.cocos2dx.okio.Segment r3 = r0.pop()
            r7.head = r3
            org.cocos2dx.okio.Segment r3 = r6.head
            if (r3 != 0) goto L77
            r6.head = r0
            org.cocos2dx.okio.Segment r0 = r6.head
            r0.prev = r0
            r0.next = r0
            goto L80
        L77:
            org.cocos2dx.okio.Segment r3 = r3.prev
            org.cocos2dx.okio.Segment r0 = r3.push(r0)
            r0.compact()
        L80:
            long r3 = r7.size
            long r3 = r3 - r1
            r7.size = r3
            long r3 = r6.size
            long r3 = r3 + r1
            r6.size = r3
            long r8 = r8 - r1
            goto Lc
        L8c:
            return
        L8d:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "source == this"
            r7.<init>(r8)
            throw r7
        L95:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "source == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public long writeAll(org.cocos2dx.okio.Source r8) throws java.io.IOException {
            r7 = this;
            if (r8 == 0) goto L13
            r0 = 0
        L4:
            r2 = 8192(0x2000, double:4.0474E-320)
            long r2 = r8.read(r7, r2)
            r4 = -1
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto L12
            long r0 = r0 + r2
            goto L4
        L12:
            return r0
        L13:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r8.<init>(r0)
            throw r8
    }

    @Override
    public org.cocos2dx.okio.Buffer writeByte(int r5) {
            r4 = this;
            r0 = 1
            org.cocos2dx.okio.Segment r0 = r4.writableSegment(r0)
            byte[] r1 = r0.data
            int r2 = r0.limit
            int r3 = r2 + 1
            r0.limit = r3
            byte r5 = (byte) r5
            r1[r2] = r5
            long r0 = r4.size
            r2 = 1
            long r0 = r0 + r2
            r4.size = r0
            return r4
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeByte(int r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeByte(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeDecimalLong(long r12) {
            r11 = this;
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 != 0) goto Ld
            r12 = 48
            org.cocos2dx.okio.Buffer r12 = r11.writeByte(r12)
            return r12
        Ld:
            r3 = 0
            r4 = 1
            if (r2 >= 0) goto L1e
            long r12 = -r12
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 >= 0) goto L1d
            java.lang.String r12 = "-9223372036854775808"
            org.cocos2dx.okio.Buffer r12 = r11.writeUtf8(r12)
            return r12
        L1d:
            r3 = 1
        L1e:
            r5 = 100000000(0x5f5e100, double:4.94065646E-316)
            r7 = 10
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            if (r2 >= 0) goto L6a
            r5 = 10000(0x2710, double:4.9407E-320)
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            if (r2 >= 0) goto L48
            r5 = 100
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            if (r2 >= 0) goto L3c
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L39
            goto Le2
        L39:
            r4 = 2
            goto Le2
        L3c:
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L45
            r4 = 3
            goto Le2
        L45:
            r4 = 4
            goto Le2
        L48:
            r4 = 1000000(0xf4240, double:4.940656E-318)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L5c
            r4 = 100000(0x186a0, double:4.94066E-319)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L59
            r4 = 5
            goto Le2
        L59:
            r4 = 6
            goto Le2
        L5c:
            r4 = 10000000(0x989680, double:4.9406565E-317)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L66
            r4 = 7
            goto Le2
        L66:
            r4 = 8
            goto Le2
        L6a:
            r4 = 1000000000000(0xe8d4a51000, double:4.94065645841E-312)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L98
            r4 = 10000000000(0x2540be400, double:4.9406564584E-314)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L89
            r4 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L86
            r4 = 9
            goto Le2
        L86:
            r4 = 10
            goto Le2
        L89:
            r4 = 100000000000(0x174876e800, double:4.9406564584E-313)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto L95
            r4 = 11
            goto Le2
        L95:
            r4 = 12
            goto Le2
        L98:
            r4 = 1000000000000000(0x38d7ea4c68000, double:4.940656458412465E-309)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto Lbc
            r4 = 10000000000000(0x9184e72a000, double:4.9406564584125E-311)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto Lad
            r4 = 13
            goto Le2
        Lad:
            r4 = 100000000000000(0x5af3107a4000, double:4.94065645841247E-310)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto Lb9
            r4 = 14
            goto Le2
        Lb9:
            r4 = 15
            goto Le2
        Lbc:
            r4 = 100000000000000000(0x16345785d8a0000, double:5.620395787888205E-302)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto Ld4
            r4 = 10000000000000000(0x2386f26fc10000, double:5.431165199810528E-308)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto Ld1
            r4 = 16
            goto Le2
        Ld1:
            r4 = 17
            goto Le2
        Ld4:
            r4 = 1000000000000000000(0xde0b6b3a7640000, double:7.832953389245686E-242)
            int r2 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r2 >= 0) goto Le0
            r4 = 18
            goto Le2
        Le0:
            r4 = 19
        Le2:
            if (r3 == 0) goto Le6
            int r4 = r4 + 1
        Le6:
            org.cocos2dx.okio.Segment r2 = r11.writableSegment(r4)
            byte[] r5 = r2.data
            int r6 = r2.limit
            int r6 = r6 + r4
        Lef:
            int r9 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r9 == 0) goto L100
            long r9 = r12 % r7
            int r10 = (int) r9
            int r6 = r6 + (-1)
            byte[] r9 = org.cocos2dx.okio.Buffer.DIGITS
            r9 = r9[r10]
            r5[r6] = r9
            long r12 = r12 / r7
            goto Lef
        L100:
            if (r3 == 0) goto L108
            int r6 = r6 + (-1)
            r12 = 45
            r5[r6] = r12
        L108:
            int r12 = r2.limit
            int r12 = r12 + r4
            r2.limit = r12
            long r12 = r11.size
            long r0 = (long) r4
            long r12 = r12 + r0
            r11.size = r12
            return r11
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeDecimalLong(long r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeDecimalLong(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeHexadecimalUnsignedLong(long r10) {
            r9 = this;
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto Ld
            r10 = 48
            org.cocos2dx.okio.Buffer r10 = r9.writeByte(r10)
            return r10
        Ld:
            long r0 = java.lang.Long.highestOneBit(r10)
            int r0 = java.lang.Long.numberOfTrailingZeros(r0)
            r1 = 4
            int r0 = r0 / r1
            int r0 = r0 + 1
            org.cocos2dx.okio.Segment r2 = r9.writableSegment(r0)
            byte[] r3 = r2.data
            int r4 = r2.limit
            int r4 = r4 + r0
            int r4 = r4 + (-1)
            int r5 = r2.limit
        L26:
            if (r4 < r5) goto L36
            byte[] r6 = org.cocos2dx.okio.Buffer.DIGITS
            r7 = 15
            long r7 = r7 & r10
            int r8 = (int) r7
            r6 = r6[r8]
            r3[r4] = r6
            long r10 = r10 >>> r1
            int r4 = r4 + (-1)
            goto L26
        L36:
            int r10 = r2.limit
            int r10 = r10 + r0
            r2.limit = r10
            long r10 = r9.size
            long r0 = (long) r0
            long r10 = r10 + r0
            r9.size = r10
            return r9
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeHexadecimalUnsignedLong(long r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeHexadecimalUnsignedLong(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeInt(int r6) {
            r5 = this;
            r0 = 4
            org.cocos2dx.okio.Segment r0 = r5.writableSegment(r0)
            byte[] r1 = r0.data
            int r2 = r0.limit
            int r3 = r2 + 1
            int r4 = r6 >>> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            int r4 = r6 >>> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2 + 1
            int r4 = r6 >>> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte r6 = (byte) r6
            r1[r3] = r6
            r0.limit = r2
            long r0 = r5.size
            r2 = 4
            long r0 = r0 + r2
            r5.size = r0
            return r5
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeInt(int r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeInt(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeIntLe(int r1) {
            r0 = this;
            int r1 = org.cocos2dx.okio.Util.reverseBytesInt(r1)
            org.cocos2dx.okio.Buffer r1 = r0.writeInt(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeIntLe(int r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeIntLe(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeLong(long r10) {
            r9 = this;
            r0 = 8
            org.cocos2dx.okio.Segment r1 = r9.writableSegment(r0)
            byte[] r2 = r1.data
            int r3 = r1.limit
            int r4 = r3 + 1
            r5 = 56
            long r5 = r10 >>> r5
            r7 = 255(0xff, double:1.26E-321)
            long r5 = r5 & r7
            int r6 = (int) r5
            byte r5 = (byte) r6
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 48
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r6 = (int) r5
            byte r5 = (byte) r6
            r2[r4] = r5
            int r4 = r3 + 1
            r5 = 40
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r6 = (int) r5
            byte r5 = (byte) r6
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 32
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r6 = (int) r5
            byte r5 = (byte) r6
            r2[r4] = r5
            int r4 = r3 + 1
            r5 = 24
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r6 = (int) r5
            byte r5 = (byte) r6
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 16
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r6 = (int) r5
            byte r5 = (byte) r6
            r2[r4] = r5
            int r4 = r3 + 1
            long r5 = r10 >>> r0
            long r5 = r5 & r7
            int r0 = (int) r5
            byte r0 = (byte) r0
            r2[r3] = r0
            int r0 = r4 + 1
            long r10 = r10 & r7
            int r11 = (int) r10
            byte r10 = (byte) r11
            r2[r4] = r10
            r1.limit = r0
            long r10 = r9.size
            r0 = 8
            long r10 = r10 + r0
            r9.size = r10
            return r9
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeLong(long r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeLong(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeLongLe(long r1) {
            r0 = this;
            long r1 = org.cocos2dx.okio.Util.reverseBytesLong(r1)
            org.cocos2dx.okio.Buffer r1 = r0.writeLong(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeLongLe(long r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeLongLe(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeShort(int r6) {
            r5 = this;
            r0 = 2
            org.cocos2dx.okio.Segment r0 = r5.writableSegment(r0)
            byte[] r1 = r0.data
            int r2 = r0.limit
            int r3 = r2 + 1
            int r4 = r6 >>> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte r6 = (byte) r6
            r1[r3] = r6
            r0.limit = r2
            long r0 = r5.size
            r2 = 2
            long r0 = r0 + r2
            r5.size = r0
            return r5
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeShort(int r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeShort(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeShortLe(int r1) {
            r0 = this;
            short r1 = (short) r1
            short r1 = org.cocos2dx.okio.Util.reverseBytesShort(r1)
            org.cocos2dx.okio.Buffer r1 = r0.writeShort(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeShortLe(int r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeShortLe(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeString(java.lang.String r2, int r3, int r4, java.nio.charset.Charset r5) {
            r1 = this;
            if (r2 == 0) goto L8b
            if (r3 < 0) goto L74
            if (r4 < r3) goto L55
            int r0 = r2.length()
            if (r4 > r0) goto L32
            if (r5 == 0) goto L2a
            java.nio.charset.Charset r0 = org.cocos2dx.okio.Util.UTF_8
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L1b
            org.cocos2dx.okio.Buffer r2 = r1.writeUtf8(r2, r3, r4)
            return r2
        L1b:
            java.lang.String r2 = r2.substring(r3, r4)
            byte[] r2 = r2.getBytes(r5)
            r3 = 0
            int r4 = r2.length
            org.cocos2dx.okio.Buffer r2 = r1.write(r2, r3, r4)
            return r2
        L2a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "charset == null"
            r2.<init>(r3)
            throw r2
        L32:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "endIndex > string.length: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = " > "
            r5.append(r4)
            int r2 = r2.length()
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r3.<init>(r2)
            throw r3
        L55:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "endIndex < beginIndex: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = " < "
            r5.append(r4)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r2.<init>(r3)
            throw r2
        L74:
            java.lang.IllegalAccessError r2 = new java.lang.IllegalAccessError
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "beginIndex < 0: "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            throw r2
        L8b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "string == null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.Buffer writeString(java.lang.String r3, java.nio.charset.Charset r4) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            org.cocos2dx.okio.Buffer r3 = r2.writeString(r3, r1, r0, r4)
            return r3
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeString(java.lang.String r1, int r2, int r3, java.nio.charset.Charset r4) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeString(r1, r2, r3, r4)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeString(java.lang.String r1, java.nio.charset.Charset r2) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeString(r1, r2)
            return r1
    }

    public final org.cocos2dx.okio.Buffer writeTo(java.io.OutputStream r3) throws java.io.IOException {
            r2 = this;
            long r0 = r2.size
            org.cocos2dx.okio.Buffer r3 = r2.writeTo(r3, r0)
            return r3
    }

    public final org.cocos2dx.okio.Buffer writeTo(java.io.OutputStream r7, long r8) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L42
            long r0 = r6.size
            r2 = 0
            r4 = r8
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            org.cocos2dx.okio.Segment r0 = r6.head
        Lc:
            r1 = 0
            int r3 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r3 <= 0) goto L41
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r8, r1)
            int r2 = (int) r1
            byte[] r1 = r0.data
            int r3 = r0.pos
            r7.write(r1, r3, r2)
            int r1 = r0.pos
            int r1 = r1 + r2
            r0.pos = r1
            long r3 = r6.size
            long r1 = (long) r2
            long r3 = r3 - r1
            r6.size = r3
            long r8 = r8 - r1
            int r1 = r0.pos
            int r2 = r0.limit
            if (r1 != r2) goto Lc
            org.cocos2dx.okio.Segment r1 = r0.pop()
            r6.head = r1
            org.cocos2dx.okio.SegmentPool.recycle(r0)
            r0 = r1
            goto Lc
        L41:
            return r6
        L42:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "out == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public org.cocos2dx.okio.Buffer writeUtf8(java.lang.String r3) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            org.cocos2dx.okio.Buffer r3 = r2.writeUtf8(r3, r1, r0)
            return r3
    }

    @Override
    public org.cocos2dx.okio.Buffer writeUtf8(java.lang.String r8, int r9, int r10) {
            r7 = this;
            if (r8 == 0) goto L127
            if (r9 < 0) goto L110
            if (r10 < r9) goto Lf1
            int r0 = r8.length()
            if (r10 > r0) goto Lce
        Lc:
            if (r9 >= r10) goto Lcd
            char r0 = r8.charAt(r9)
            r1 = 128(0x80, float:1.8E-43)
            if (r0 >= r1) goto L4e
            r2 = 1
            org.cocos2dx.okio.Segment r2 = r7.writableSegment(r2)
            byte[] r3 = r2.data
            int r4 = r2.limit
            int r4 = r4 - r9
            int r5 = 8192 - r4
            int r5 = java.lang.Math.min(r10, r5)
            int r6 = r9 + 1
            int r9 = r9 + r4
            byte r0 = (byte) r0
            r3[r9] = r0
        L2c:
            if (r6 >= r5) goto L3d
            char r9 = r8.charAt(r6)
            if (r9 < r1) goto L35
            goto L3d
        L35:
            int r0 = r6 + 1
            int r6 = r6 + r4
            byte r9 = (byte) r9
            r3[r6] = r9
            r6 = r0
            goto L2c
        L3d:
            int r4 = r4 + r6
            int r9 = r2.limit
            int r4 = r4 - r9
            int r9 = r2.limit
            int r9 = r9 + r4
            r2.limit = r9
            long r0 = r7.size
            long r2 = (long) r4
            long r0 = r0 + r2
            r7.size = r0
            r9 = r6
            goto Lc
        L4e:
            r2 = 2048(0x800, float:2.87E-42)
            if (r0 >= r2) goto L62
            int r2 = r0 >> 6
            r2 = r2 | 192(0xc0, float:2.69E-43)
            r7.writeByte(r2)
            r0 = r0 & 63
            r0 = r0 | r1
            r7.writeByte(r0)
        L5f:
            int r9 = r9 + 1
            goto Lc
        L62:
            r2 = 55296(0xd800, float:7.7486E-41)
            r3 = 63
            if (r0 < r2) goto Lb8
            r2 = 57343(0xdfff, float:8.0355E-41)
            if (r0 <= r2) goto L6f
            goto Lb8
        L6f:
            int r4 = r9 + 1
            if (r4 >= r10) goto L78
            char r5 = r8.charAt(r4)
            goto L79
        L78:
            r5 = 0
        L79:
            r6 = 56319(0xdbff, float:7.892E-41)
            if (r0 > r6) goto Lb2
            r6 = 56320(0xdc00, float:7.8921E-41)
            if (r5 < r6) goto Lb2
            if (r5 <= r2) goto L86
            goto Lb2
        L86:
            r2 = 65536(0x10000, float:9.1835E-41)
            r4 = -55297(0xffffffffffff27ff, float:NaN)
            r0 = r0 & r4
            int r0 = r0 << 10
            r4 = -56321(0xffffffffffff23ff, float:NaN)
            r4 = r4 & r5
            r0 = r0 | r4
            int r0 = r0 + r2
            int r2 = r0 >> 18
            r2 = r2 | 240(0xf0, float:3.36E-43)
            r7.writeByte(r2)
            int r2 = r0 >> 12
            r2 = r2 & r3
            r2 = r2 | r1
            r7.writeByte(r2)
            int r2 = r0 >> 6
            r2 = r2 & r3
            r2 = r2 | r1
            r7.writeByte(r2)
            r0 = r0 & r3
            r0 = r0 | r1
            r7.writeByte(r0)
            int r9 = r9 + 2
            goto Lc
        Lb2:
            r7.writeByte(r3)
            r9 = r4
            goto Lc
        Lb8:
            int r2 = r0 >> 12
            r2 = r2 | 224(0xe0, float:3.14E-43)
            r7.writeByte(r2)
            int r2 = r0 >> 6
            r2 = r2 & r3
            r2 = r2 | r1
            r7.writeByte(r2)
            r0 = r0 & 63
            r0 = r0 | r1
            r7.writeByte(r0)
            goto L5f
        Lcd:
            return r7
        Lce:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endIndex > string.length: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = " > "
            r0.append(r10)
            int r8 = r8.length()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        Lf1:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endIndex < beginIndex: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = " < "
            r0.append(r10)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L110:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "beginIndex < 0: "
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r8.<init>(r9)
            throw r8
        L127:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "string == null"
            r8.<init>(r9)
            throw r8
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeUtf8(java.lang.String r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeUtf8(r1)
            return r1
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeUtf8(java.lang.String r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeUtf8(r1, r2, r3)
            return r1
    }

    @Override
    public org.cocos2dx.okio.Buffer writeUtf8CodePoint(int r4) {
            r3 = this;
            r0 = 128(0x80, float:1.8E-43)
            if (r4 >= r0) goto L8
            r3.writeByte(r4)
            goto L60
        L8:
            r1 = 2048(0x800, float:2.87E-42)
            r2 = 63
            if (r4 >= r1) goto L1b
            int r1 = r4 >> 6
            r1 = r1 | 192(0xc0, float:2.69E-43)
            r3.writeByte(r1)
            r4 = r4 & r2
            r4 = r4 | r0
            r3.writeByte(r4)
            goto L60
        L1b:
            r1 = 65536(0x10000, float:9.1835E-41)
            if (r4 >= r1) goto L41
            r1 = 55296(0xd800, float:7.7486E-41)
            if (r4 < r1) goto L2d
            r1 = 57343(0xdfff, float:8.0355E-41)
            if (r4 > r1) goto L2d
            r3.writeByte(r2)
            goto L60
        L2d:
            int r1 = r4 >> 12
            r1 = r1 | 224(0xe0, float:3.14E-43)
            r3.writeByte(r1)
            int r1 = r4 >> 6
            r1 = r1 & r2
            r1 = r1 | r0
            r3.writeByte(r1)
            r4 = r4 & r2
            r4 = r4 | r0
            r3.writeByte(r4)
            goto L60
        L41:
            r1 = 1114111(0x10ffff, float:1.561202E-39)
            if (r4 > r1) goto L61
            int r1 = r4 >> 18
            r1 = r1 | 240(0xf0, float:3.36E-43)
            r3.writeByte(r1)
            int r1 = r4 >> 12
            r1 = r1 & r2
            r1 = r1 | r0
            r3.writeByte(r1)
            int r1 = r4 >> 6
            r1 = r1 & r2
            r1 = r1 | r0
            r3.writeByte(r1)
            r4 = r4 & r2
            r4 = r4 | r0
            r3.writeByte(r4)
        L60:
            return r3
        L61:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected code point: "
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeUtf8CodePoint(int r1) throws java.io.IOException {
            r0 = this;
            org.cocos2dx.okio.Buffer r1 = r0.writeUtf8CodePoint(r1)
            return r1
    }
}
