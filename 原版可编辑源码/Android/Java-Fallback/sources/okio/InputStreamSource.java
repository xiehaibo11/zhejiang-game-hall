package okio;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0012\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\b\u0010\u0007\u001a\u00020\bH\u0016J\u0018\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\nH\u0016J\b\u0010\u0004\u001a\u00020\u0005H\u0016J\b\u0010\u000e\u001a\u00020\u000fH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lokio/InputStreamSource;", "Lokio/Source;", "input", "Ljava/io/InputStream;", "timeout", "Lokio/Timeout;", "(Ljava/io/InputStream;Lokio/Timeout;)V", "close", "", "read", "", "sink", "Lokio/Buffer;", "byteCount", "toString", "", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
class InputStreamSource implements okio.Source {
    private final java.io.InputStream input;
    private final okio.Timeout timeout;

    public InputStreamSource(java.io.InputStream r2, okio.Timeout r3) {
            r1 = this;
            java.lang.String r0 = "input"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "timeout"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.input = r2
            r1.timeout = r3
            return
    }

    @Override
    public void close() {
            r1 = this;
            java.io.InputStream r0 = r1.input
            r0.close()
            return
    }

    @Override
    public long read(okio.Buffer r4, long r5) {
            r3 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 != 0) goto Lc
            return r0
        Lc:
            r0 = 1
            if (r2 < 0) goto L11
            r1 = r0
            goto L12
        L11:
            r1 = 0
        L12:
            if (r1 == 0) goto L65
            okio.Timeout r1 = r3.timeout     // Catch: java.lang.AssertionError -> L55
            r1.throwIfReached()     // Catch: java.lang.AssertionError -> L55
            okio.Segment r0 = r4.writableSegment$okio(r0)     // Catch: java.lang.AssertionError -> L55
            int r1 = r0.limit     // Catch: java.lang.AssertionError -> L55
            int r1 = 8192 - r1
            long r1 = (long) r1     // Catch: java.lang.AssertionError -> L55
            long r5 = java.lang.Math.min(r5, r1)     // Catch: java.lang.AssertionError -> L55
            int r5 = (int) r5     // Catch: java.lang.AssertionError -> L55
            java.io.InputStream r6 = r3.input     // Catch: java.lang.AssertionError -> L55
            byte[] r1 = r0.data     // Catch: java.lang.AssertionError -> L55
            int r2 = r0.limit     // Catch: java.lang.AssertionError -> L55
            int r5 = r6.read(r1, r2, r5)     // Catch: java.lang.AssertionError -> L55
            r6 = -1
            if (r5 != r6) goto L46
            int r5 = r0.pos     // Catch: java.lang.AssertionError -> L55
            int r6 = r0.limit     // Catch: java.lang.AssertionError -> L55
            if (r5 != r6) goto L43
            okio.Segment r5 = r0.pop()     // Catch: java.lang.AssertionError -> L55
            r4.head = r5     // Catch: java.lang.AssertionError -> L55
            okio.SegmentPool.recycle(r0)     // Catch: java.lang.AssertionError -> L55
        L43:
            r4 = -1
            return r4
        L46:
            int r6 = r0.limit     // Catch: java.lang.AssertionError -> L55
            int r6 = r6 + r5
            r0.limit = r6     // Catch: java.lang.AssertionError -> L55
            long r0 = r4.size()     // Catch: java.lang.AssertionError -> L55
            long r5 = (long) r5     // Catch: java.lang.AssertionError -> L55
            long r0 = r0 + r5
            r4.setSize$okio(r0)     // Catch: java.lang.AssertionError -> L55
            return r5
        L55:
            r4 = move-exception
            boolean r5 = okio.Okio.isAndroidGetsocknameError(r4)
            if (r5 == 0) goto L64
            java.io.IOException r5 = new java.io.IOException
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            r5.<init>(r4)
            throw r5
        L64:
            throw r4
        L65:
            java.lang.Long r4 = java.lang.Long.valueOf(r5)
            java.lang.String r5 = "byteCount < 0: "
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r4 = r4.toString()
            r5.<init>(r4)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.Timeout r0 = r1.timeout
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "source("
            r0.append(r1)
            java.io.InputStream r1 = r2.input
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
