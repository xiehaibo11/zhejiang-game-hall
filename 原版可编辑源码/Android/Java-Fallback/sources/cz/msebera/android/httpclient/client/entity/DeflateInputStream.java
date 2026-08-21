package cz.msebera.android.httpclient.client.entity;

public class DeflateInputStream extends java.io.InputStream {
    private java.io.InputStream sourceStream;

    static class DeflateStream extends java.util.zip.InflaterInputStream {
        private boolean closed;

        public DeflateStream(java.io.InputStream r1, java.util.zip.Inflater r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 0
                r0.closed = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                boolean r0 = r1.closed
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r1.closed = r0
                java.util.zip.Inflater r0 = r1.inf
                r0.end()
                super.close()
                return
        }
    }

    public DeflateInputStream(java.io.InputStream r11) throws java.io.IOException {
            r10 = this;
            r10.<init>()
            r0 = 6
            byte[] r0 = new byte[r0]
            java.io.PushbackInputStream r1 = new java.io.PushbackInputStream
            int r2 = r0.length
            r1.<init>(r11, r2)
            int r11 = r1.read(r0)
            r2 = -1
            java.lang.String r3 = "Unable to read the response"
            if (r11 == r2) goto L72
            r4 = 1
            byte[] r5 = new byte[r4]
            java.util.zip.Inflater r6 = new java.util.zip.Inflater
            r6.<init>()
        L1d:
            r7 = 0
            int r8 = r6.inflate(r5)     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            if (r8 != 0) goto L41
            boolean r9 = r6.finished()     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            if (r9 != 0) goto L3b
            boolean r9 = r6.needsDictionary()     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            if (r9 == 0) goto L31
            goto L41
        L31:
            boolean r8 = r6.needsInput()     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            if (r8 == 0) goto L1d
            r6.setInput(r0)     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            goto L1d
        L3b:
            java.io.IOException r2 = new java.io.IOException     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            throw r2     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
        L41:
            if (r8 == r2) goto L53
            r1.unread(r0, r7, r11)     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            cz.msebera.android.httpclient.client.entity.DeflateInputStream$DeflateStream r2 = new cz.msebera.android.httpclient.client.entity.DeflateInputStream$DeflateStream     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            java.util.zip.Inflater r3 = new java.util.zip.Inflater     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            r3.<init>()     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            r10.sourceStream = r2     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            goto L6a
        L53:
            java.io.IOException r2 = new java.io.IOException     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
            throw r2     // Catch: java.lang.Throwable -> L59 java.util.zip.DataFormatException -> L5b
        L59:
            r11 = move-exception
            goto L6e
        L5b:
            r1.unread(r0, r7, r11)     // Catch: java.lang.Throwable -> L59
            cz.msebera.android.httpclient.client.entity.DeflateInputStream$DeflateStream r11 = new cz.msebera.android.httpclient.client.entity.DeflateInputStream$DeflateStream     // Catch: java.lang.Throwable -> L59
            java.util.zip.Inflater r0 = new java.util.zip.Inflater     // Catch: java.lang.Throwable -> L59
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L59
            r11.<init>(r1, r0)     // Catch: java.lang.Throwable -> L59
            r10.sourceStream = r11     // Catch: java.lang.Throwable -> L59
        L6a:
            r6.end()
            return
        L6e:
            r6.end()
            throw r11
        L72:
            java.io.IOException r11 = new java.io.IOException
            r11.<init>(r3)
            throw r11
    }

    @Override
    public int available() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            int r0 = r0.available()
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            r0.close()
            return
    }

    @Override
    public void mark(int r2) {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            r0.mark(r2)
            return
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            boolean r0 = r0.markSupported()
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            int r0 = r0.read()
            return r0
    }

    @Override
    public int read(byte[] r2) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            int r2 = r0.read(r2)
            return r2
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            int r2 = r0.read(r2, r3, r4)
            return r2
    }

    @Override
    public void reset() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            r0.reset()
            return
    }

    @Override
    public long skip(long r2) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.sourceStream
            long r2 = r0.skip(r2)
            return r2
    }
}
