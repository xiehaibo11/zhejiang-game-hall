package okhttp3;

import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;
import java.nio.charset.Charset;
import javax.annotation.Nullable;
import okhttp3.internal.Util;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;

public abstract class ResponseBody implements Closeable {

    @Nullable
    private Reader reader;

    static final class BomAwareReader extends Reader {
        private final Charset charset;
        private boolean closed;

        @Nullable
        private Reader delegate;
        private final BufferedSource source;

        BomAwareReader(BufferedSource r1, Charset r2) {
            this.source = r1;
            this.charset = r2;
        }

        @Override
        public int read(char[] r4, int r5, int r6) throws IOException {
            if (this.closed == true) goto L10;
            Reader r0 = this.delegate;
            if (r0 != null) goto L8;
            Charset r02 = Util.bomAwareCharset(this.source, this.charset);
            InputStreamReader r1 = new InputStreamReader(this.source.inputStream(), r02);
            this.delegate = r1;
            r0 = r1;
        L8:
            return r0.read(r4, r5, r6);
        L10:
            throw new IOException("Stream closed");
        }

        @Override
        public void close() throws IOException {
            this.closed = true;
            Reader r0 = this.delegate;
            if (r0 == null) goto L5;
            r0.close();
            return;
        L5:
            this.source.close();
        }
    }

    public abstract long contentLength();

    @Nullable
    public abstract MediaType contentType();

    public abstract BufferedSource source();

    public ResponseBody() {
    }

    public final InputStream byteStream() {
        return source().inputStream();
    }

    public final byte[] bytes() throws IOException {
        long r0 = contentLength();
        if (r0 > 2147483647L) goto L18;
        BufferedSource r2 = source();
        byte[] r3 = r2.readByteArray();     // Catch: Throwable -> L14
        Util.closeQuietly(r2);
        if (r0 != (-1)) goto L9;
    L13:
        return r3;
    L9:
        if (r0 == r3.length) goto L13;
        throw new IOException("Content-Length (" + r0 + ") and stream length (" + r3.length + ") disagree");
    L14:
        th = move-exception;
        Util.closeQuietly(r2);
        throw th;
    L18:
        throw new IOException("Cannot buffer entire body for content length: " + r0);
    }

    public final Reader charStream() {
        Reader r0 = this.reader;
        if (r0 != null) goto L7;
        BomAwareReader r02 = new BomAwareReader(source(), charset());
        this.reader = r02;
        return r02;
    L7:
        return r0;
    }

    public final String string() throws IOException {
        BufferedSource r0 = source();
        String r1 = r0.readString(Util.bomAwareCharset(r0, charset()));     // Catch: Throwable -> L6
        Util.closeQuietly(r0);
        return r1;
    L6:
        th = move-exception;
        Util.closeQuietly(r0);
        throw th;
    }

    private Charset charset() {
        MediaType r0 = contentType();
        if (r0 == null) goto L6;
        return r0.charset(Util.UTF_8);
    L6:
        return Util.UTF_8;
    }

    @Override
    public void close() {
        Util.closeQuietly(source());
    }

    public static ResponseBody create(@Nullable MediaType r2, String r3) {
        Charset r0 = Util.UTF_8;
        if (r2 == null) goto L7;
        r0 = r2.charset();
        if (r0 != null) goto L7;
        r0 = Util.UTF_8;
        r2 = MediaType.parse(r2 + "; charset=utf-8");
    L7:
        Buffer r32 = new Buffer().writeString(r3, r0);
        return create(r2, r32.size(), r32);
    }

    public static ResponseBody create(@Nullable MediaType r3, byte[] r4) {
        return create(r3, r4.length, new Buffer().write(r4));
    }

    public static ResponseBody create(@Nullable MediaType r3, ByteString r4) {
        return create(r3, r4.size(), new Buffer().write(r4));
    }

    public static ResponseBody create(@Nullable final MediaType r1, final long r2, final BufferedSource r4) {
        if (r4 == null) goto L6;
        return new 1(r1, r2, r4);
    L6:
        throw new NullPointerException("source == null");
    }
}
