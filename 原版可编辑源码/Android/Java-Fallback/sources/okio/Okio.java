package okio;

@kotlin.Metadata(d1 = {"okio/Okio__JvmOkioKt", "okio/Okio__OkioKt"}, k = 4, mv = {1, 5, 1}, xi = 48)
public final class Okio {

    final class 1 implements okio.Sink {
        final java.io.OutputStream val$out;
        final okio.Timeout val$timeout;

        1(okio.Timeout r1, java.io.OutputStream r2) {
                r0 = this;
                r0.val$timeout = r1
                r0.val$out = r2
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                java.io.OutputStream r0 = r1.val$out
                r0.close()
                return
        }

        @Override
        public void flush() throws java.io.IOException {
                r1 = this;
                java.io.OutputStream r0 = r1.val$out
                r0.flush()
                return
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = r1.val$timeout
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "sink("
                r0.append(r1)
                java.io.OutputStream r1 = r2.val$out
                r0.append(r1)
                java.lang.String r1 = ")"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void write(okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
                long r0 = r7.size
                r2 = 0
                r4 = r8
                okio.Util.checkOffsetAndCount(r0, r2, r4)
            L8:
                r0 = 0
                int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
                if (r2 <= 0) goto L45
                okio.Timeout r0 = r6.val$timeout
                r0.throwIfReached()
                okio.Segment r0 = r7.head
                int r1 = r0.limit
                int r2 = r0.pos
                int r1 = r1 - r2
                long r1 = (long) r1
                long r1 = java.lang.Math.min(r8, r1)
                int r2 = (int) r1
                java.io.OutputStream r1 = r6.val$out
                byte[] r3 = r0.data
                int r4 = r0.pos
                r1.write(r3, r4, r2)
                int r1 = r0.pos
                int r1 = r1 + r2
                r0.pos = r1
                long r1 = (long) r2
                long r8 = r8 - r1
                long r3 = r7.size
                long r3 = r3 - r1
                r7.size = r3
                int r1 = r0.pos
                int r2 = r0.limit
                if (r1 != r2) goto L8
                okio.Segment r1 = r0.pop()
                r7.head = r1
                okio.SegmentPool.recycle(r0)
                goto L8
            L45:
                return
        }
    }

    final class 2 implements okio.Source {
        final java.io.InputStream val$in;
        final okio.Timeout val$timeout;

        2(okio.Timeout r1, java.io.InputStream r2) {
                r0 = this;
                r0.val$timeout = r1
                r0.val$in = r2
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                java.io.InputStream r0 = r1.val$in
                r0.close()
                return
        }

        @Override
        public long read(okio.Buffer r4, long r5) throws java.io.IOException {
                r3 = this;
                r0 = 0
                int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r2 < 0) goto L49
                int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r2 != 0) goto Lb
                return r0
            Lb:
                okio.Timeout r0 = r3.val$timeout     // Catch: java.lang.AssertionError -> L3b
                r0.throwIfReached()     // Catch: java.lang.AssertionError -> L3b
                r0 = 1
                okio.Segment r0 = r4.writableSegment(r0)     // Catch: java.lang.AssertionError -> L3b
                int r1 = r0.limit     // Catch: java.lang.AssertionError -> L3b
                int r1 = 8192 - r1
                long r1 = (long) r1     // Catch: java.lang.AssertionError -> L3b
                long r5 = java.lang.Math.min(r5, r1)     // Catch: java.lang.AssertionError -> L3b
                int r6 = (int) r5     // Catch: java.lang.AssertionError -> L3b
                java.io.InputStream r5 = r3.val$in     // Catch: java.lang.AssertionError -> L3b
                byte[] r1 = r0.data     // Catch: java.lang.AssertionError -> L3b
                int r2 = r0.limit     // Catch: java.lang.AssertionError -> L3b
                int r5 = r5.read(r1, r2, r6)     // Catch: java.lang.AssertionError -> L3b
                r6 = -1
                if (r5 != r6) goto L2f
                r4 = -1
                return r4
            L2f:
                int r6 = r0.limit     // Catch: java.lang.AssertionError -> L3b
                int r6 = r6 + r5
                r0.limit = r6     // Catch: java.lang.AssertionError -> L3b
                long r0 = r4.size     // Catch: java.lang.AssertionError -> L3b
                long r5 = (long) r5     // Catch: java.lang.AssertionError -> L3b
                long r0 = r0 + r5
                r4.size = r0     // Catch: java.lang.AssertionError -> L3b
                return r5
            L3b:
                r4 = move-exception
                boolean r5 = okio.Okio.isAndroidGetsocknameError(r4)
                if (r5 == 0) goto L48
                java.io.IOException r5 = new java.io.IOException
                r5.<init>(r4)
                throw r5
            L48:
                throw r4
            L49:
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
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = r1.val$timeout
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "source("
                r0.append(r1)
                java.io.InputStream r1 = r2.val$in
                r0.append(r1)
                java.lang.String r1 = ")"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    final class 3 implements okio.Sink {
        3() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        public void flush() throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = okio.Timeout.NONE
                return r0
        }

        @Override
        public void write(okio.Buffer r1, long r2) throws java.io.IOException {
                r0 = this;
                r1.skip(r2)
                return
        }
    }

    final class 4 extends okio.AsyncTimeout {
        final java.net.Socket val$socket;

        4(java.net.Socket r1) {
                r0 = this;
                r0.val$socket = r1
                r0.<init>()
                return
        }

        @Override
        protected java.io.IOException newTimeoutException(@javax.annotation.Nullable java.io.IOException r3) {
                r2 = this;
                java.net.SocketTimeoutException r0 = new java.net.SocketTimeoutException
                java.lang.String r1 = "timeout"
                r0.<init>(r1)
                if (r3 == 0) goto Lc
                r0.initCause(r3)
            Lc:
                return r0
        }

        @Override
        protected void timedOut() {
                r5 = this;
                java.lang.String r0 = "Failed to close timed out socket "
                java.net.Socket r1 = r5.val$socket     // Catch: java.lang.AssertionError -> L8 java.lang.Exception -> L29
                r1.close()     // Catch: java.lang.AssertionError -> L8 java.lang.Exception -> L29
                goto L42
            L8:
                r1 = move-exception
                boolean r2 = okio.Okio.isAndroidGetsocknameError(r1)
                if (r2 == 0) goto L28
                java.util.logging.Logger r2 = okio.Okio.logger
                java.util.logging.Level r3 = java.util.logging.Level.WARNING
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r0)
                java.net.Socket r0 = r5.val$socket
                r4.append(r0)
                java.lang.String r0 = r4.toString()
                r2.log(r3, r0, r1)
                goto L42
            L28:
                throw r1
            L29:
                r1 = move-exception
                java.util.logging.Logger r2 = okio.Okio.logger
                java.util.logging.Level r3 = java.util.logging.Level.WARNING
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r0)
                java.net.Socket r0 = r5.val$socket
                r4.append(r0)
                java.lang.String r0 = r4.toString()
                r2.log(r3, r0, r1)
            L42:
                return
        }
    }

    public static final okio.Sink appendingSink(java.io.File r0) throws java.io.FileNotFoundException {
            okio.Sink r0 = okio.Okio__JvmOkioKt.appendingSink(r0)
            return r0
    }

    public static final okio.FileSystem asResourceFileSystem(java.lang.ClassLoader r0) {
            okio.FileSystem r0 = okio.Okio__JvmOkioKt.asResourceFileSystem(r0)
            return r0
    }

    public static final okio.Sink blackhole() {
            okio.Sink r0 = okio.Okio__OkioKt.blackhole()
            return r0
    }

    public static final okio.BufferedSink buffer(okio.Sink r0) {
            okio.BufferedSink r0 = okio.Okio__OkioKt.buffer(r0)
            return r0
    }

    public static final okio.BufferedSource buffer(okio.Source r0) {
            okio.BufferedSource r0 = okio.Okio__OkioKt.buffer(r0)
            return r0
    }

    public static final okio.CipherSink cipherSink(okio.Sink r0, javax.crypto.Cipher r1) {
            okio.CipherSink r0 = okio.Okio__JvmOkioKt.cipherSink(r0, r1)
            return r0
    }

    public static final okio.CipherSource cipherSource(okio.Source r0, javax.crypto.Cipher r1) {
            okio.CipherSource r0 = okio.Okio__JvmOkioKt.cipherSource(r0, r1)
            return r0
    }

    public static final okio.HashingSink hashingSink(okio.Sink r0, java.security.MessageDigest r1) {
            okio.HashingSink r0 = okio.Okio__JvmOkioKt.hashingSink(r0, r1)
            return r0
    }

    public static final okio.HashingSink hashingSink(okio.Sink r0, javax.crypto.Mac r1) {
            okio.HashingSink r0 = okio.Okio__JvmOkioKt.hashingSink(r0, r1)
            return r0
    }

    public static final okio.HashingSource hashingSource(okio.Source r0, java.security.MessageDigest r1) {
            okio.HashingSource r0 = okio.Okio__JvmOkioKt.hashingSource(r0, r1)
            return r0
    }

    public static final okio.HashingSource hashingSource(okio.Source r0, javax.crypto.Mac r1) {
            okio.HashingSource r0 = okio.Okio__JvmOkioKt.hashingSource(r0, r1)
            return r0
    }

    public static final boolean isAndroidGetsocknameError(java.lang.AssertionError r0) {
            boolean r0 = okio.Okio__JvmOkioKt.isAndroidGetsocknameError(r0)
            return r0
    }

    public static final okio.FileSystem openZip(okio.FileSystem r0, okio.Path r1) throws java.io.IOException {
            okio.FileSystem r0 = okio.Okio__JvmOkioKt.openZip(r0, r1)
            return r0
    }

    public static final okio.Sink sink(java.io.File r0) throws java.io.FileNotFoundException {
            okio.Sink r0 = okio.Okio__JvmOkioKt.sink(r0)
            return r0
    }

    public static final okio.Sink sink(java.io.File r0, boolean r1) throws java.io.FileNotFoundException {
            okio.Sink r0 = okio.Okio__JvmOkioKt.sink(r0, r1)
            return r0
    }

    public static final okio.Sink sink(java.io.OutputStream r0) {
            okio.Sink r0 = okio.Okio__JvmOkioKt.sink(r0)
            return r0
    }

    public static final okio.Sink sink(java.net.Socket r0) throws java.io.IOException {
            okio.Sink r0 = okio.Okio__JvmOkioKt.sink(r0)
            return r0
    }

    public static final okio.Sink sink(java.nio.file.Path r0, java.nio.file.OpenOption... r1) throws java.io.IOException {
            okio.Sink r0 = okio.Okio__JvmOkioKt.sink(r0, r1)
            return r0
    }

    public static okio.Sink sink$default(java.io.File r0, boolean r1, int r2, java.lang.Object r3) throws java.io.FileNotFoundException {
            okio.Sink r0 = okio.Okio__JvmOkioKt.sink$default(r0, r1, r2, r3)
            return r0
    }

    public static final okio.Source source(java.io.File r0) throws java.io.FileNotFoundException {
            okio.Source r0 = okio.Okio__JvmOkioKt.source(r0)
            return r0
    }

    public static final okio.Source source(java.io.InputStream r0) {
            okio.Source r0 = okio.Okio__JvmOkioKt.source(r0)
            return r0
    }

    public static final okio.Source source(java.net.Socket r0) throws java.io.IOException {
            okio.Source r0 = okio.Okio__JvmOkioKt.source(r0)
            return r0
    }

    public static final okio.Source source(java.nio.file.Path r0, java.nio.file.OpenOption... r1) throws java.io.IOException {
            okio.Source r0 = okio.Okio__JvmOkioKt.source(r0, r1)
            return r0
    }

    public static final <T extends java.io.Closeable, R> R use(T r0, kotlin.jvm.functions.Function1<? super T, ? extends R> r1) {
            java.lang.Object r0 = okio.Okio__OkioKt.use(r0, r1)
            return r0
    }
}
