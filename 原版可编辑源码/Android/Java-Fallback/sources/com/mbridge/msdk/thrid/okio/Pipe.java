package com.mbridge.msdk.thrid.okio;

public final class Pipe {
    final com.mbridge.msdk.thrid.okio.Buffer buffer;
    final long maxBufferSize;
    private final com.mbridge.msdk.thrid.okio.Sink sink;
    boolean sinkClosed;
    private final com.mbridge.msdk.thrid.okio.Source source;
    boolean sourceClosed;

    final class PipeSink implements com.mbridge.msdk.thrid.okio.Sink {
        final com.mbridge.msdk.thrid.okio.Pipe this$0;
        final com.mbridge.msdk.thrid.okio.Timeout timeout;

        PipeSink(com.mbridge.msdk.thrid.okio.Pipe r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                com.mbridge.msdk.thrid.okio.Timeout r1 = new com.mbridge.msdk.thrid.okio.Timeout
                r1.<init>()
                r0.timeout = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r5 = this;
                com.mbridge.msdk.thrid.okio.Pipe r0 = r5.this$0
                com.mbridge.msdk.thrid.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L38
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L38
                if (r1 == 0) goto Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                return
            Ld:
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L38
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L38
                if (r1 == 0) goto L2a
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L38
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L38
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L38
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 > 0) goto L22
                goto L2a
            L22:
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L38
                java.lang.String r2 = "source is closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L38
                throw r1     // Catch: java.lang.Throwable -> L38
            L2a:
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L38
                r2 = 1
                r1.sinkClosed = r2     // Catch: java.lang.Throwable -> L38
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L38
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L38
                r1.notifyAll()     // Catch: java.lang.Throwable -> L38
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                return
            L38:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                throw r1
        }

        @Override
        public void flush() throws java.io.IOException {
                r5 = this;
                com.mbridge.msdk.thrid.okio.Pipe r0 = r5.this$0
                com.mbridge.msdk.thrid.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L32
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L32
                if (r1 != 0) goto L2a
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L32
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L32
                if (r1 == 0) goto L28
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L32
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L32
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L32
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 > 0) goto L20
                goto L28
            L20:
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L32
                java.lang.String r2 = "source is closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L32
                throw r1     // Catch: java.lang.Throwable -> L32
            L28:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
                return
            L2a:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L32
                java.lang.String r2 = "closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L32
                throw r1     // Catch: java.lang.Throwable -> L32
            L32:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
                throw r1
        }

        @Override
        public com.mbridge.msdk.thrid.okio.Timeout timeout() {
                r1 = this;
                com.mbridge.msdk.thrid.okio.Timeout r0 = r1.timeout
                return r0
        }

        @Override
        public void write(com.mbridge.msdk.thrid.okio.Buffer r8, long r9) throws java.io.IOException {
                r7 = this;
                com.mbridge.msdk.thrid.okio.Pipe r0 = r7.this$0
                com.mbridge.msdk.thrid.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okio.Pipe r1 = r7.this$0     // Catch: java.lang.Throwable -> L58
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L58
                if (r1 != 0) goto L50
            Lb:
                r1 = 0
                int r3 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
                if (r3 <= 0) goto L4e
                com.mbridge.msdk.thrid.okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                boolean r3 = r3.sourceClosed     // Catch: java.lang.Throwable -> L58
                if (r3 != 0) goto L46
                com.mbridge.msdk.thrid.okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                long r3 = r3.maxBufferSize     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Pipe r5 = r7.this$0     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Buffer r5 = r5.buffer     // Catch: java.lang.Throwable -> L58
                long r5 = r5.size()     // Catch: java.lang.Throwable -> L58
                long r3 = r3 - r5
                int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r1 != 0) goto L32
                com.mbridge.msdk.thrid.okio.Timeout r1 = r7.timeout     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Pipe r2 = r7.this$0     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Buffer r2 = r2.buffer     // Catch: java.lang.Throwable -> L58
                r1.waitUntilNotified(r2)     // Catch: java.lang.Throwable -> L58
                goto Lb
            L32:
                long r1 = java.lang.Math.min(r3, r9)     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Buffer r3 = r3.buffer     // Catch: java.lang.Throwable -> L58
                r3.write(r8, r1)     // Catch: java.lang.Throwable -> L58
                long r9 = r9 - r1
                com.mbridge.msdk.thrid.okio.Pipe r1 = r7.this$0     // Catch: java.lang.Throwable -> L58
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L58
                r1.notifyAll()     // Catch: java.lang.Throwable -> L58
                goto Lb
            L46:
                java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L58
                java.lang.String r9 = "source is closed"
                r8.<init>(r9)     // Catch: java.lang.Throwable -> L58
                throw r8     // Catch: java.lang.Throwable -> L58
            L4e:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L58
                return
            L50:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L58
                java.lang.String r9 = "closed"
                r8.<init>(r9)     // Catch: java.lang.Throwable -> L58
                throw r8     // Catch: java.lang.Throwable -> L58
            L58:
                r8 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L58
                throw r8
        }
    }

    final class PipeSource implements com.mbridge.msdk.thrid.okio.Source {
        final com.mbridge.msdk.thrid.okio.Pipe this$0;
        final com.mbridge.msdk.thrid.okio.Timeout timeout;

        PipeSource(com.mbridge.msdk.thrid.okio.Pipe r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                com.mbridge.msdk.thrid.okio.Timeout r1 = new com.mbridge.msdk.thrid.okio.Timeout
                r1.<init>()
                r0.timeout = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r3 = this;
                com.mbridge.msdk.thrid.okio.Pipe r0 = r3.this$0
                com.mbridge.msdk.thrid.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okio.Pipe r1 = r3.this$0     // Catch: java.lang.Throwable -> L13
                r2 = 1
                r1.sourceClosed = r2     // Catch: java.lang.Throwable -> L13
                com.mbridge.msdk.thrid.okio.Pipe r1 = r3.this$0     // Catch: java.lang.Throwable -> L13
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L13
                r1.notifyAll()     // Catch: java.lang.Throwable -> L13
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                return
            L13:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                throw r1
        }

        @Override
        public long read(com.mbridge.msdk.thrid.okio.Buffer r6, long r7) throws java.io.IOException {
                r5 = this;
                com.mbridge.msdk.thrid.okio.Pipe r0 = r5.this$0
                com.mbridge.msdk.thrid.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L46
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L46
                if (r1 != 0) goto L3e
            Lb:
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L46
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L46
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 != 0) goto L2d
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L46
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L46
                if (r1 == 0) goto L23
                r6 = -1
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                return r6
            L23:
                com.mbridge.msdk.thrid.okio.Timeout r1 = r5.timeout     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.thrid.okio.Pipe r2 = r5.this$0     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.thrid.okio.Buffer r2 = r2.buffer     // Catch: java.lang.Throwable -> L46
                r1.waitUntilNotified(r2)     // Catch: java.lang.Throwable -> L46
                goto Lb
            L2d:
                com.mbridge.msdk.thrid.okio.Pipe r1 = r5.this$0     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.thrid.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L46
                long r6 = r1.read(r6, r7)     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.thrid.okio.Pipe r8 = r5.this$0     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.thrid.okio.Buffer r8 = r8.buffer     // Catch: java.lang.Throwable -> L46
                r8.notifyAll()     // Catch: java.lang.Throwable -> L46
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                return r6
            L3e:
                java.lang.IllegalStateException r6 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L46
                java.lang.String r7 = "closed"
                r6.<init>(r7)     // Catch: java.lang.Throwable -> L46
                throw r6     // Catch: java.lang.Throwable -> L46
            L46:
                r6 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                throw r6
        }

        @Override
        public com.mbridge.msdk.thrid.okio.Timeout timeout() {
                r1 = this;
                com.mbridge.msdk.thrid.okio.Timeout r0 = r1.timeout
                return r0
        }
    }

    public Pipe(long r4) {
            r3 = this;
            r3.<init>()
            com.mbridge.msdk.thrid.okio.Buffer r0 = new com.mbridge.msdk.thrid.okio.Buffer
            r0.<init>()
            r3.buffer = r0
            com.mbridge.msdk.thrid.okio.Pipe$PipeSink r0 = new com.mbridge.msdk.thrid.okio.Pipe$PipeSink
            r0.<init>(r3)
            r3.sink = r0
            com.mbridge.msdk.thrid.okio.Pipe$PipeSource r0 = new com.mbridge.msdk.thrid.okio.Pipe$PipeSource
            r0.<init>(r3)
            r3.source = r0
            r0 = 1
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L21
            r3.maxBufferSize = r4
            return
        L21:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "maxBufferSize < 1: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public final com.mbridge.msdk.thrid.okio.Sink sink() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Sink r0 = r1.sink
            return r0
    }

    public final com.mbridge.msdk.thrid.okio.Source source() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Source r0 = r1.source
            return r0
    }
}
