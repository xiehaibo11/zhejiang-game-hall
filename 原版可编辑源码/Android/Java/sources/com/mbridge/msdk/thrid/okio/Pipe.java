package com.mbridge.msdk.thrid.okio;

import java.io.IOException;

public final class Pipe {
    final long maxBufferSize;
    boolean sinkClosed;
    boolean sourceClosed;
    final Buffer buffer = new Buffer();
    private final Sink sink = new PipeSink();
    private final Source source = new PipeSource();

    public Pipe(long j) {
        if (j < 1) {
            throw new IllegalArgumentException("maxBufferSize < 1: " + j);
        }
        this.maxBufferSize = j;
    }

    public final Source source() {
        return this.source;
    }

    public final Sink sink() {
        return this.sink;
    }

    final class PipeSink implements Sink {
        final Timeout timeout = new Timeout();

        PipeSink() {
        }

        @Override
        public void write(Buffer buffer, long j) throws IOException {
            synchronized (Pipe.this.buffer) {
                if (Pipe.this.sinkClosed) {
                    throw new IllegalStateException("closed");
                }
                while (j > 0) {
                    if (Pipe.this.sourceClosed) {
                        throw new IOException("source is closed");
                    }
                    long size = Pipe.this.maxBufferSize - Pipe.this.buffer.size();
                    if (size == 0) {
                        this.timeout.waitUntilNotified(Pipe.this.buffer);
                    } else {
                        long jMin = Math.min(size, j);
                        Pipe.this.buffer.write(buffer, jMin);
                        j -= jMin;
                        Pipe.this.buffer.notifyAll();
                    }
                }
            }
        }

        @Override
        public void flush() throws IOException {
            synchronized (Pipe.this.buffer) {
                if (Pipe.this.sinkClosed) {
                    throw new IllegalStateException("closed");
                }
                if (Pipe.this.sourceClosed && Pipe.this.buffer.size() > 0) {
                    throw new IOException("source is closed");
                }
            }
        }

        @Override
        public void close() throws IOException {
            synchronized (Pipe.this.buffer) {
                if (Pipe.this.sinkClosed) {
                    return;
                }
                if (Pipe.this.sourceClosed && Pipe.this.buffer.size() > 0) {
                    throw new IOException("source is closed");
                }
                Pipe.this.sinkClosed = true;
                Pipe.this.buffer.notifyAll();
            }
        }

        @Override
        public Timeout timeout() {
            return this.timeout;
        }
    }

    final class PipeSource implements Source {
        final Timeout timeout = new Timeout();

        PipeSource() {
        }

        @Override
        public long read(Buffer buffer, long j) throws IOException {
            synchronized (Pipe.this.buffer) {
                if (Pipe.this.sourceClosed) {
                    throw new IllegalStateException("closed");
                }
                while (Pipe.this.buffer.size() == 0) {
                    if (Pipe.this.sinkClosed) {
                        return -1L;
                    }
                    this.timeout.waitUntilNotified(Pipe.this.buffer);
                }
                long j2 = Pipe.this.buffer.read(buffer, j);
                Pipe.this.buffer.notifyAll();
                return j2;
            }
        }

        @Override
        public void close() throws IOException {
            synchronized (Pipe.this.buffer) {
                Pipe.this.sourceClosed = true;
                Pipe.this.buffer.notifyAll();
            }
        }

        @Override
        public Timeout timeout() {
            return this.timeout;
        }
    }
}
