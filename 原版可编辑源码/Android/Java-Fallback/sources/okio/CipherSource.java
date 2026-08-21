package okio;

@kotlin.Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\u0011H\u0002J\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\n2\u0006\u0010\u0016\u001a\u00020\u0014H\u0016J\b\u0010\u0017\u001a\u00020\u0011H\u0002J\b\u0010\u0018\u001a\u00020\u0019H\u0016J\b\u0010\u001a\u001a\u00020\u0011H\u0002R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u000e\u0010\r\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001b"}, d2 = {"Lokio/CipherSource;", "Lokio/Source;", "source", "Lokio/BufferedSource;", "cipher", "Ljavax/crypto/Cipher;", "(Lokio/BufferedSource;Ljavax/crypto/Cipher;)V", "blockSize", "", "buffer", "Lokio/Buffer;", "getCipher", "()Ljavax/crypto/Cipher;", "closed", "", "final", "close", "", "doFinal", "read", "", "sink", "byteCount", "refill", "timeout", "Lokio/Timeout;", "update", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class CipherSource implements okio.Source {
    private final int blockSize;
    private final okio.Buffer buffer;
    private final javax.crypto.Cipher cipher;
    private boolean closed;
    private boolean final;
    private final okio.BufferedSource source;

    public CipherSource(okio.BufferedSource r2, javax.crypto.Cipher r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "cipher"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.source = r2
            r1.cipher = r3
            int r2 = r3.getBlockSize()
            r1.blockSize = r2
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            r1.buffer = r2
            int r2 = r1.blockSize
            if (r2 <= 0) goto L24
            r2 = 1
            goto L25
        L24:
            r2 = 0
        L25:
            if (r2 == 0) goto L28
            return
        L28:
            javax.crypto.Cipher r2 = r1.getCipher()
            java.lang.String r3 = "Block cipher required "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r2)
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
    }

    private final void doFinal() {
            r7 = this;
            javax.crypto.Cipher r0 = r7.cipher
            r1 = 0
            int r0 = r0.getOutputSize(r1)
            if (r0 != 0) goto La
            return
        La:
            okio.Buffer r1 = r7.buffer
            okio.Segment r0 = r1.writableSegment$okio(r0)
            javax.crypto.Cipher r1 = r7.cipher
            byte[] r2 = r0.data
            int r3 = r0.pos
            int r1 = r1.doFinal(r2, r3)
            int r2 = r0.limit
            int r2 = r2 + r1
            r0.limit = r2
            okio.Buffer r2 = r7.buffer
            long r3 = r2.size()
            long r5 = (long) r1
            long r3 = r3 + r5
            r2.setSize$okio(r3)
            int r1 = r0.pos
            int r2 = r0.limit
            if (r1 != r2) goto L3b
            okio.Buffer r1 = r7.buffer
            okio.Segment r2 = r0.pop()
            r1.head = r2
            okio.SegmentPool.recycle(r0)
        L3b:
            return
    }

    private final void refill() {
            r4 = this;
        L0:
            okio.Buffer r0 = r4.buffer
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L1f
            okio.BufferedSource r0 = r4.source
            boolean r0 = r0.exhausted()
            if (r0 == 0) goto L1b
            r0 = 1
            r4.final = r0
            r4.doFinal()
            goto L1f
        L1b:
            r4.update()
            goto L0
        L1f:
            return
    }

    private final void update() {
            r9 = this;
            okio.BufferedSource r0 = r9.source
            okio.Buffer r0 = r0.getBuffer()
            okio.Segment r0 = r0.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            javax.crypto.Cipher r2 = r9.cipher
            int r2 = r2.getOutputSize(r1)
        L16:
            r3 = 8192(0x2000, float:1.148E-41)
            if (r2 <= r3) goto L52
            int r3 = r9.blockSize
            if (r1 <= r3) goto L20
            r3 = 1
            goto L21
        L20:
            r3 = 0
        L21:
            if (r3 == 0) goto L2d
            int r2 = r9.blockSize
            int r1 = r1 - r2
            javax.crypto.Cipher r2 = r9.cipher
            int r2 = r2.getOutputSize(r1)
            goto L16
        L2d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Unexpected output size "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = " for input size "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
        L52:
            okio.Buffer r3 = r9.buffer
            okio.Segment r2 = r3.writableSegment$okio(r2)
            javax.crypto.Cipher r3 = r9.cipher
            byte[] r4 = r0.data
            int r5 = r0.pos
            byte[] r7 = r2.data
            int r8 = r2.pos
            r6 = r1
            int r0 = r3.update(r4, r5, r6, r7, r8)
            okio.BufferedSource r3 = r9.source
            long r4 = (long) r1
            r3.skip(r4)
            int r1 = r2.limit
            int r1 = r1 + r0
            r2.limit = r1
            okio.Buffer r1 = r9.buffer
            long r3 = r1.size()
            long r5 = (long) r0
            long r3 = r3 + r5
            r1.setSize$okio(r3)
            int r0 = r2.pos
            int r1 = r2.limit
            if (r0 != r1) goto L8e
            okio.Buffer r0 = r9.buffer
            okio.Segment r1 = r2.pop()
            r0.head = r1
            okio.SegmentPool.recycle(r2)
        L8e:
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.closed = r0
            okio.BufferedSource r0 = r1.source
            r0.close()
            return
    }

    public final javax.crypto.Cipher getCipher() {
            r1 = this;
            javax.crypto.Cipher r0 = r1.cipher
            return r0
    }

    @Override
    public long read(okio.Buffer r6, long r7) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r3 = 1
            if (r2 < 0) goto Le
            r4 = r3
            goto Lf
        Le:
            r4 = 0
        Lf:
            if (r4 == 0) goto L3c
            boolean r4 = r5.closed
            r3 = r3 ^ r4
            if (r3 == 0) goto L2e
            if (r2 != 0) goto L19
            return r0
        L19:
            boolean r0 = r5.final
            if (r0 == 0) goto L24
            okio.Buffer r0 = r5.buffer
            long r6 = r0.read(r6, r7)
            return r6
        L24:
            r5.refill()
            okio.Buffer r0 = r5.buffer
            long r6 = r0.read(r6, r7)
            return r6
        L2e:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "closed"
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            java.lang.Throwable r6 = (java.lang.Throwable) r6
            throw r6
        L3c:
            java.lang.Long r6 = java.lang.Long.valueOf(r7)
            java.lang.String r7 = "byteCount < 0: "
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r6)
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r6 = r6.toString()
            r7.<init>(r6)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.BufferedSource r0 = r1.source
            okio.Timeout r0 = r0.timeout()
            return r0
    }
}
