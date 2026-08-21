package com.czhj.wire.okio;

import android.os.Build;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.nio.file.Files;
import java.nio.file.OpenOption;
import java.nio.file.Path;
import java.util.logging.Level;
import java.util.logging.Logger;

public final class Okio {
    static final Logger a = Logger.getLogger(Okio.class.getName());

    private Okio() {
    }

    private static AsyncTimeout a(final Socket socket) {
        return new AsyncTimeout() {
            @Override
            protected IOException newTimeoutException(IOException iOException) {
                SocketTimeoutException socketTimeoutException = new SocketTimeoutException("timeout");
                if (iOException != null) {
                    socketTimeoutException.initCause(iOException);
                }
                return socketTimeoutException;
            }

            @Override
            protected void timedOut() {
                Level level;
                StringBuilder sb;
                Logger logger;
                Throwable th;
                try {
                    socket.close();
                } catch (AssertionError e) {
                    if (!Okio.a(e)) {
                        throw e;
                    }
                    Logger logger2 = Okio.a;
                    level = Level.WARNING;
                    sb = new StringBuilder();
                    th = e;
                    logger = logger2;
                    sb.append("Failed to close timed out socket ");
                    sb.append(socket);
                    logger.log(level, sb.toString(), th);
                } catch (Exception e2) {
                    Logger logger3 = Okio.a;
                    level = Level.WARNING;
                    sb = new StringBuilder();
                    th = e2;
                    logger = logger3;
                    sb.append("Failed to close timed out socket ");
                    sb.append(socket);
                    logger.log(level, sb.toString(), th);
                }
            }
        };
    }

    private static Sink a(final OutputStream outputStream, final Timeout timeout) {
        if (outputStream == null) {
            throw new IllegalArgumentException("out == null");
        }
        if (timeout != null) {
            return new Sink() {
                @Override
                public void close() throws IOException {
                    outputStream.close();
                }

                @Override
                public void flush() throws IOException {
                    outputStream.flush();
                }

                @Override
                public Timeout timeout() {
                    return timeout;
                }

                public String toString() {
                    return "sink(" + outputStream + ")";
                }

                @Override
                public void write(Buffer buffer, long j) throws IOException {
                    Util.checkOffsetAndCount(buffer.c, 0L, j);
                    while (j > 0) {
                        timeout.throwIfReached();
                        Segment segment = buffer.b;
                        int iMin = (int) Math.min(j, segment.e - segment.d);
                        outputStream.write(segment.c, segment.d, iMin);
                        segment.d += iMin;
                        long j2 = iMin;
                        j -= j2;
                        buffer.c -= j2;
                        if (segment.d == segment.e) {
                            buffer.b = segment.pop();
                            SegmentPool.a(segment);
                        }
                    }
                }
            };
        }
        throw new IllegalArgumentException("timeout == null");
    }

    private static Source a(final InputStream inputStream, final Timeout timeout) {
        if (inputStream == null) {
            throw new IllegalArgumentException("in == null");
        }
        if (timeout != null) {
            return new Source() {
                @Override
                public void close() throws IOException {
                    inputStream.close();
                }

                @Override
                public long read(Buffer buffer, long j) throws IOException {
                    if (j < 0) {
                        throw new IllegalArgumentException("byteCount < 0: " + j);
                    }
                    if (j == 0) {
                        return 0L;
                    }
                    try {
                        timeout.throwIfReached();
                        Segment segmentA = buffer.a(1);
                        int i = inputStream.read(segmentA.c, segmentA.e, (int) Math.min(j, 8192 - segmentA.e));
                        if (i == -1) {
                            return -1L;
                        }
                        segmentA.e += i;
                        long j2 = i;
                        buffer.c += j2;
                        return j2;
                    } catch (AssertionError e) {
                        if (Okio.a(e)) {
                            throw new IOException(e);
                        }
                        throw e;
                    }
                }

                @Override
                public Timeout timeout() {
                    return timeout;
                }

                public String toString() {
                    return "source(" + inputStream + ")";
                }
            };
        }
        throw new IllegalArgumentException("timeout == null");
    }

    static boolean a(AssertionError assertionError) {
        return (assertionError.getCause() == null || assertionError.getMessage() == null || !assertionError.getMessage().contains("getsockname failed")) ? false : true;
    }

    public static Sink appendingSink(File file) throws FileNotFoundException {
        if (file != null) {
            return sink(new FileOutputStream(file, true));
        }
        throw new IllegalArgumentException("file == null");
    }

    public static BufferedSink buffer(Sink sink) {
        if (sink != null) {
            return new RealBufferedSink(sink);
        }
        throw new IllegalArgumentException("sink == null");
    }

    public static BufferedSource buffer(Source source) {
        if (source != null) {
            return new RealBufferedSource(source);
        }
        throw new IllegalArgumentException("source == null");
    }

    public static Sink sink(File file) throws FileNotFoundException {
        if (file != null) {
            return sink(new FileOutputStream(file));
        }
        throw new IllegalArgumentException("file == null");
    }

    public static Sink sink(OutputStream outputStream) {
        return a(outputStream, new Timeout());
    }

    public static Sink sink(Socket socket) throws IOException {
        if (socket == null) {
            throw new IllegalArgumentException("socket == null");
        }
        AsyncTimeout asyncTimeoutA = a(socket);
        return asyncTimeoutA.sink(a(socket.getOutputStream(), asyncTimeoutA));
    }

    public static Sink sink(Path path, OpenOption... openOptionArr) throws IOException {
        if (path == null) {
            throw new IllegalArgumentException("path == null");
        }
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                return sink(Files.newOutputStream(path, openOptionArr));
            }
            throw new IOException("no support os version");
        } catch (Throwable th) {
            throw new IOException(th.getMessage());
        }
    }

    public static Source source(File file) throws FileNotFoundException {
        if (file != null) {
            return source(new FileInputStream(file));
        }
        throw new IllegalArgumentException("file == null");
    }

    public static Source source(InputStream inputStream) {
        return a(inputStream, new Timeout());
    }

    public static Source source(Socket socket) throws IOException {
        if (socket == null) {
            throw new IllegalArgumentException("socket == null");
        }
        AsyncTimeout asyncTimeoutA = a(socket);
        return asyncTimeoutA.source(a(socket.getInputStream(), asyncTimeoutA));
    }

    public static Source source(Path path, OpenOption... openOptionArr) throws IOException {
        if (path == null) {
            throw new IllegalArgumentException("path == null");
        }
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                return source(Files.newInputStream(path, openOptionArr));
            }
            throw new IOException("no support os version");
        } catch (Throwable th) {
            throw new IOException(th.getMessage());
        }
    }
}
