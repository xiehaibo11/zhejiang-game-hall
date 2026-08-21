package okio;

import java.io.Closeable;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.nio.file.OpenOption;
import java.security.MessageDigest;
import java.util.logging.Level;
import javax.annotation.Nullable;
import javax.crypto.Cipher;
import javax.crypto.Mac;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;

/* JADX INFO: loaded from: classes4.dex */
@Metadata(d1 = {"okio/Okio__JvmOkioKt", "okio/Okio__OkioKt"}, k = 4, mv = {1, 5, 1}, xi = 48)
public final class Okio {
    public static final Sink appendingSink(File file) throws FileNotFoundException {
        return Okio__JvmOkioKt.appendingSink(file);
    }

    public static final FileSystem asResourceFileSystem(ClassLoader classLoader) {
        return Okio__JvmOkioKt.asResourceFileSystem(classLoader);
    }

    public static final Sink blackhole() {
        return Okio__OkioKt.blackhole();
    }

    public static final BufferedSink buffer(Sink sink) {
        return Okio__OkioKt.buffer(sink);
    }

    public static final BufferedSource buffer(Source source) {
        return Okio__OkioKt.buffer(source);
    }

    public static final CipherSink cipherSink(Sink sink, Cipher cipher) {
        return Okio__JvmOkioKt.cipherSink(sink, cipher);
    }

    public static final CipherSource cipherSource(Source source, Cipher cipher) {
        return Okio__JvmOkioKt.cipherSource(source, cipher);
    }

    public static final HashingSink hashingSink(Sink sink, MessageDigest messageDigest) {
        return Okio__JvmOkioKt.hashingSink(sink, messageDigest);
    }

    public static final HashingSink hashingSink(Sink sink, Mac mac) {
        return Okio__JvmOkioKt.hashingSink(sink, mac);
    }

    public static final HashingSource hashingSource(Source source, MessageDigest messageDigest) {
        return Okio__JvmOkioKt.hashingSource(source, messageDigest);
    }

    public static final HashingSource hashingSource(Source source, Mac mac) {
        return Okio__JvmOkioKt.hashingSource(source, mac);
    }

    public static final boolean isAndroidGetsocknameError(AssertionError assertionError) {
        return Okio__JvmOkioKt.isAndroidGetsocknameError(assertionError);
    }

    public static final FileSystem openZip(FileSystem fileSystem, Path path) throws IOException {
        return Okio__JvmOkioKt.openZip(fileSystem, path);
    }

    public static final Sink sink(File file) throws FileNotFoundException {
        return Okio__JvmOkioKt.sink(file);
    }

    public static final Sink sink(File file, boolean z) throws FileNotFoundException {
        return Okio__JvmOkioKt.sink(file, z);
    }

    public static final Sink sink(OutputStream outputStream) {
        return Okio__JvmOkioKt.sink(outputStream);
    }

    public static final Sink sink(Socket socket) throws IOException {
        return Okio__JvmOkioKt.sink(socket);
    }

    public static final Sink sink(java.nio.file.Path path, OpenOption... openOptionArr) throws IOException {
        return Okio__JvmOkioKt.sink(path, openOptionArr);
    }

    public static final Source source(File file) throws FileNotFoundException {
        return Okio__JvmOkioKt.source(file);
    }

    public static final Source source(InputStream inputStream) {
        return Okio__JvmOkioKt.source(inputStream);
    }

    public static final Source source(Socket socket) throws IOException {
        return Okio__JvmOkioKt.source(socket);
    }

    public static final Source source(java.nio.file.Path path, OpenOption... openOptionArr) throws IOException {
        return Okio__JvmOkioKt.source(path, openOptionArr);
    }

    public static final <T extends Closeable, R> R use(T t, Function1<? super T, ? extends R> function1) {
        return (R) Okio__OkioKt.use(t, function1);
    }

    /* JADX INFO: renamed from: okio.Okio$1, reason: invalid class name */
    final class AnonymousClass1 implements Sink {
        final /* synthetic */ OutputStream val$out;
        final /* synthetic */ Timeout val$timeout;

        AnonymousClass1(Timeout timeout, OutputStream outputStream) {
            this.val$timeout = timeout;
            this.val$out = outputStream;
        }

        @Override // okio.Sink
        public void write(Buffer buffer, long j) throws IOException {
            Util.checkOffsetAndCount(buffer.size, 0L, j);
            while (j > 0) {
                this.val$timeout.throwIfReached();
                Segment segment = buffer.head;
                int iMin = (int) Math.min(j, segment.limit - segment.pos);
                this.val$out.write(segment.data, segment.pos, iMin);
                segment.pos += iMin;
                long j2 = iMin;
                j -= j2;
                buffer.size -= j2;
                if (segment.pos == segment.limit) {
                    buffer.head = segment.pop();
                    SegmentPool.recycle(segment);
                }
            }
        }

        @Override // okio.Sink, java.io.Flushable
        public void flush() throws IOException {
            this.val$out.flush();
        }

        @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws IOException {
            this.val$out.close();
        }

        @Override // okio.Sink
        /* JADX INFO: renamed from: timeout */
        public Timeout getThis$0() {
            return this.val$timeout;
        }

        public String toString() {
            return "sink(" + this.val$out + ")";
        }
    }

    /* JADX INFO: renamed from: okio.Okio$2, reason: invalid class name */
    final class AnonymousClass2 implements Source {
        final /* synthetic */ InputStream val$in;
        final /* synthetic */ Timeout val$timeout;

        AnonymousClass2(Timeout timeout, InputStream inputStream) {
            this.val$timeout = timeout;
            this.val$in = inputStream;
        }

        @Override // okio.Source
        public long read(Buffer buffer, long j) throws IOException {
            if (j < 0) {
                throw new IllegalArgumentException("byteCount < 0: " + j);
            }
            if (j == 0) {
                return 0L;
            }
            try {
                this.val$timeout.throwIfReached();
                Segment segmentWritableSegment = buffer.writableSegment(1);
                int i = this.val$in.read(segmentWritableSegment.data, segmentWritableSegment.limit, (int) Math.min(j, 8192 - segmentWritableSegment.limit));
                if (i == -1) {
                    return -1L;
                }
                segmentWritableSegment.limit += i;
                long j2 = i;
                buffer.size += j2;
                return j2;
            } catch (AssertionError e) {
                if (Okio.isAndroidGetsocknameError(e)) {
                    throw new IOException(e);
                }
                throw e;
            }
        }

        @Override // okio.Source, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws IOException {
            this.val$in.close();
        }

        @Override // okio.Source
        /* JADX INFO: renamed from: timeout */
        public Timeout getThis$0() {
            return this.val$timeout;
        }

        public String toString() {
            return "source(" + this.val$in + ")";
        }
    }

    /* JADX INFO: renamed from: okio.Okio$3, reason: invalid class name */
    final class AnonymousClass3 implements Sink {
        @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws IOException {
        }

        @Override // okio.Sink, java.io.Flushable
        public void flush() throws IOException {
        }

        AnonymousClass3() {
        }

        @Override // okio.Sink
        public void write(Buffer buffer, long j) throws IOException {
            buffer.skip(j);
        }

        @Override // okio.Sink
        /* JADX INFO: renamed from: timeout */
        public Timeout getThis$0() {
            return Timeout.NONE;
        }
    }

    /* JADX INFO: renamed from: okio.Okio$4, reason: invalid class name */
    final class AnonymousClass4 extends AsyncTimeout {
        final /* synthetic */ Socket val$socket;

        AnonymousClass4(Socket socket) {
            this.val$socket = socket;
        }

        @Override // okio.AsyncTimeout
        protected IOException newTimeoutException(@Nullable IOException iOException) {
            SocketTimeoutException socketTimeoutException = new SocketTimeoutException("timeout");
            if (iOException != null) {
                socketTimeoutException.initCause(iOException);
            }
            return socketTimeoutException;
        }

        @Override // okio.AsyncTimeout
        protected void timedOut() {
            try {
                this.val$socket.close();
            } catch (AssertionError e) {
                if (Okio.isAndroidGetsocknameError(e)) {
                    Okio.logger.log(Level.WARNING, "Failed to close timed out socket " + this.val$socket, (Throwable) e);
                    return;
                }
                throw e;
            } catch (Exception e2) {
                Okio.logger.log(Level.WARNING, "Failed to close timed out socket " + this.val$socket, (Throwable) e2);
            }
        }
    }
}
