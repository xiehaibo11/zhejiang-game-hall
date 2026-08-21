package org.cocos2dx.okhttp3;

public abstract class ResponseBody implements java.io.Closeable {

    @javax.annotation.Nullable
    private java.io.Reader reader;


    static final class BomAwareReader extends java.io.Reader {
        private final java.nio.charset.Charset charset;
        private boolean closed;

        @javax.annotation.Nullable
        private java.io.Reader delegate;
        private final org.cocos2dx.okio.BufferedSource source;

        BomAwareReader(org.cocos2dx.okio.BufferedSource r1, java.nio.charset.Charset r2) {
                r0 = this;
                r0.<init>()
                r0.source = r1
                r0.charset = r2
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                r0 = 1
                r1.closed = r0
                java.io.Reader r0 = r1.delegate
                if (r0 == 0) goto Lb
                r0.close()
                goto L10
            Lb:
                org.cocos2dx.okio.BufferedSource r0 = r1.source
                r0.close()
            L10:
                return
        }

        @Override
        public int read(char[] r4, int r5, int r6) throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.closed
                if (r0 != 0) goto L23
                java.io.Reader r0 = r3.delegate
                if (r0 != 0) goto L1e
                org.cocos2dx.okio.BufferedSource r0 = r3.source
                java.nio.charset.Charset r1 = r3.charset
                java.nio.charset.Charset r0 = org.cocos2dx.okhttp3.internal.Util.bomAwareCharset(r0, r1)
                java.io.InputStreamReader r1 = new java.io.InputStreamReader
                org.cocos2dx.okio.BufferedSource r2 = r3.source
                java.io.InputStream r2 = r2.inputStream()
                r1.<init>(r2, r0)
                r3.delegate = r1
                r0 = r1
            L1e:
                int r4 = r0.read(r4, r5, r6)
                return r4
            L23:
                java.io.IOException r4 = new java.io.IOException
                java.lang.String r5 = "Stream closed"
                r4.<init>(r5)
                throw r4
        }
    }

    public ResponseBody() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.nio.charset.Charset charset() {
            r2 = this;
            org.cocos2dx.okhttp3.MediaType r0 = r2.contentType()
            if (r0 == 0) goto Ld
            java.nio.charset.Charset r1 = org.cocos2dx.okhttp3.internal.Util.UTF_8
            java.nio.charset.Charset r0 = r0.charset(r1)
            goto Lf
        Ld:
            java.nio.charset.Charset r0 = org.cocos2dx.okhttp3.internal.Util.UTF_8
        Lf:
            return r0
    }

    public static org.cocos2dx.okhttp3.ResponseBody create(@javax.annotation.Nullable org.cocos2dx.okhttp3.MediaType r1, long r2, org.cocos2dx.okio.BufferedSource r4) {
            if (r4 == 0) goto L8
            org.cocos2dx.okhttp3.ResponseBody$1 r0 = new org.cocos2dx.okhttp3.ResponseBody$1
            r0.<init>(r1, r2, r4)
            return r0
        L8:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "source == null"
            r1.<init>(r2)
            throw r1
    }

    public static org.cocos2dx.okhttp3.ResponseBody create(@javax.annotation.Nullable org.cocos2dx.okhttp3.MediaType r2, java.lang.String r3) {
            java.nio.charset.Charset r0 = org.cocos2dx.okhttp3.internal.Util.UTF_8
            if (r2 == 0) goto L21
            java.nio.charset.Charset r0 = r2.charset()
            if (r0 != 0) goto L21
            java.nio.charset.Charset r0 = org.cocos2dx.okhttp3.internal.Util.UTF_8
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "; charset=utf-8"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            org.cocos2dx.okhttp3.MediaType r2 = org.cocos2dx.okhttp3.MediaType.parse(r2)
        L21:
            org.cocos2dx.okio.Buffer r1 = new org.cocos2dx.okio.Buffer
            r1.<init>()
            org.cocos2dx.okio.Buffer r3 = r1.writeString(r3, r0)
            long r0 = r3.size()
            org.cocos2dx.okhttp3.ResponseBody r2 = create(r2, r0, r3)
            return r2
    }

    public static org.cocos2dx.okhttp3.ResponseBody create(@javax.annotation.Nullable org.cocos2dx.okhttp3.MediaType r3, org.cocos2dx.okio.ByteString r4) {
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            org.cocos2dx.okio.Buffer r0 = r0.write(r4)
            int r4 = r4.size()
            long r1 = (long) r4
            org.cocos2dx.okhttp3.ResponseBody r3 = create(r3, r1, r0)
            return r3
    }

    public static org.cocos2dx.okhttp3.ResponseBody create(@javax.annotation.Nullable org.cocos2dx.okhttp3.MediaType r3, byte[] r4) {
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            org.cocos2dx.okio.Buffer r0 = r0.write(r4)
            int r4 = r4.length
            long r1 = (long) r4
            org.cocos2dx.okhttp3.ResponseBody r3 = create(r3, r1, r0)
            return r3
    }

    public final java.io.InputStream byteStream() {
            r1 = this;
            org.cocos2dx.okio.BufferedSource r0 = r1.source()
            java.io.InputStream r0 = r0.inputStream()
            return r0
    }

    public final byte[] bytes() throws java.io.IOException {
            r6 = this;
            long r0 = r6.contentLength()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L4e
            org.cocos2dx.okio.BufferedSource r2 = r6.source()
            byte[] r3 = r2.readByteArray()     // Catch: java.lang.Throwable -> L49
            org.cocos2dx.okhttp3.internal.Util.closeQuietly(r2)
            r4 = -1
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 == 0) goto L48
            int r2 = r3.length
            long r4 = (long) r2
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 != 0) goto L23
            goto L48
        L23:
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Content-Length ("
            r4.append(r5)
            r4.append(r0)
            java.lang.String r0 = ") and stream length ("
            r4.append(r0)
            int r0 = r3.length
            r4.append(r0)
            java.lang.String r0 = ") disagree"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r2.<init>(r0)
            throw r2
        L48:
            return r3
        L49:
            r0 = move-exception
            org.cocos2dx.okhttp3.internal.Util.closeQuietly(r2)
            throw r0
        L4e:
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Cannot buffer entire body for content length: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
    }

    public final java.io.Reader charStream() {
            r3 = this;
            java.io.Reader r0 = r3.reader
            if (r0 == 0) goto L5
            goto L14
        L5:
            org.cocos2dx.okhttp3.ResponseBody$BomAwareReader r0 = new org.cocos2dx.okhttp3.ResponseBody$BomAwareReader
            org.cocos2dx.okio.BufferedSource r1 = r3.source()
            java.nio.charset.Charset r2 = r3.charset()
            r0.<init>(r1, r2)
            r3.reader = r0
        L14:
            return r0
    }

    @Override
    public void close() {
            r1 = this;
            org.cocos2dx.okio.BufferedSource r0 = r1.source()
            org.cocos2dx.okhttp3.internal.Util.closeQuietly(r0)
            return
    }

    public abstract long contentLength();

    @javax.annotation.Nullable
    public abstract org.cocos2dx.okhttp3.MediaType contentType();

    public abstract org.cocos2dx.okio.BufferedSource source();

    public final java.lang.String string() throws java.io.IOException {
            r2 = this;
            org.cocos2dx.okio.BufferedSource r0 = r2.source()
            java.nio.charset.Charset r1 = r2.charset()     // Catch: java.lang.Throwable -> L14
            java.nio.charset.Charset r1 = org.cocos2dx.okhttp3.internal.Util.bomAwareCharset(r0, r1)     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = r0.readString(r1)     // Catch: java.lang.Throwable -> L14
            org.cocos2dx.okhttp3.internal.Util.closeQuietly(r0)
            return r1
        L14:
            r1 = move-exception
            org.cocos2dx.okhttp3.internal.Util.closeQuietly(r0)
            throw r1
    }
}
