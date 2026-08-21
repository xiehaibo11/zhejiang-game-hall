package org.cocos2dx.okio;

public final class Pipe {
    final org.cocos2dx.okio.Buffer buffer;
    final long maxBufferSize;
    private final org.cocos2dx.okio.Sink sink;
    boolean sinkClosed;
    private final org.cocos2dx.okio.Source source;
    boolean sourceClosed;

    final class PipeSink implements org.cocos2dx.okio.Sink {
        final org.cocos2dx.okio.Pipe this$0;
        final org.cocos2dx.okio.Timeout timeout;

        PipeSink(org.cocos2dx.okio.Pipe r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                org.cocos2dx.okio.Timeout r1 = new org.cocos2dx.okio.Timeout
                r1.<init>()
                r0.timeout = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r6 = this;
                org.cocos2dx.okio.Pipe r0 = r6.this$0
                org.cocos2dx.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L38
                if (r1 == 0) goto Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                return
            Ld:
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L38
                if (r1 == 0) goto L2a
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L38
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L38
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 > 0) goto L22
                goto L2a
            L22:
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L38
                java.lang.String r2 = "source is closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L38
                throw r1     // Catch: java.lang.Throwable -> L38
            L2a:
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                r2 = 1
                r1.sinkClosed = r2     // Catch: java.lang.Throwable -> L38
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L38
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
                r6 = this;
                org.cocos2dx.okio.Pipe r0 = r6.this$0
                org.cocos2dx.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L32
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L32
                if (r1 != 0) goto L2a
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L32
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L32
                if (r1 == 0) goto L28
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L32
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L32
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L32
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 > 0) goto L20
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
        public org.cocos2dx.okio.Timeout timeout() {
                r1 = this;
                org.cocos2dx.okio.Timeout r0 = r1.timeout
                return r0
        }

        @Override
        public void write(org.cocos2dx.okio.Buffer r8, long r9) throws java.io.IOException {
                r7 = this;
                org.cocos2dx.okio.Pipe r0 = r7.this$0
                org.cocos2dx.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                org.cocos2dx.okio.Pipe r1 = r7.this$0     // Catch: java.lang.Throwable -> L58
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L58
                if (r1 != 0) goto L50
            Lb:
                r1 = 0
                int r3 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
                if (r3 <= 0) goto L4e
                org.cocos2dx.okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                boolean r3 = r3.sourceClosed     // Catch: java.lang.Throwable -> L58
                if (r3 != 0) goto L46
                org.cocos2dx.okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                long r3 = r3.maxBufferSize     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Pipe r5 = r7.this$0     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Buffer r5 = r5.buffer     // Catch: java.lang.Throwable -> L58
                long r5 = r5.size()     // Catch: java.lang.Throwable -> L58
                long r3 = r3 - r5
                int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r5 != 0) goto L32
                org.cocos2dx.okio.Timeout r1 = r7.timeout     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Pipe r2 = r7.this$0     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Buffer r2 = r2.buffer     // Catch: java.lang.Throwable -> L58
                r1.waitUntilNotified(r2)     // Catch: java.lang.Throwable -> L58
                goto Lb
            L32:
                long r1 = java.lang.Math.min(r3, r9)     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Buffer r3 = r3.buffer     // Catch: java.lang.Throwable -> L58
                r3.write(r8, r1)     // Catch: java.lang.Throwable -> L58
                long r9 = r9 - r1
                org.cocos2dx.okio.Pipe r1 = r7.this$0     // Catch: java.lang.Throwable -> L58
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L58
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

    final class PipeSource implements org.cocos2dx.okio.Source {
        final org.cocos2dx.okio.Pipe this$0;
        final org.cocos2dx.okio.Timeout timeout;

        PipeSource(org.cocos2dx.okio.Pipe r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                org.cocos2dx.okio.Timeout r1 = new org.cocos2dx.okio.Timeout
                r1.<init>()
                r0.timeout = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r3 = this;
                org.cocos2dx.okio.Pipe r0 = r3.this$0
                org.cocos2dx.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                org.cocos2dx.okio.Pipe r1 = r3.this$0     // Catch: java.lang.Throwable -> L13
                r2 = 1
                r1.sourceClosed = r2     // Catch: java.lang.Throwable -> L13
                org.cocos2dx.okio.Pipe r1 = r3.this$0     // Catch: java.lang.Throwable -> L13
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L13
                r1.notifyAll()     // Catch: java.lang.Throwable -> L13
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                return
            L13:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                throw r1
        }

        @Override
        public long read(org.cocos2dx.okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
                org.cocos2dx.okio.Pipe r0 = r6.this$0
                org.cocos2dx.okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L46
                if (r1 != 0) goto L3e
            Lb:
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L46
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L46
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 != 0) goto L2d
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L46
                if (r1 == 0) goto L23
                r7 = -1
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                return r7
            L23:
                org.cocos2dx.okio.Timeout r1 = r6.timeout     // Catch: java.lang.Throwable -> L46
                org.cocos2dx.okio.Pipe r2 = r6.this$0     // Catch: java.lang.Throwable -> L46
                org.cocos2dx.okio.Buffer r2 = r2.buffer     // Catch: java.lang.Throwable -> L46
                r1.waitUntilNotified(r2)     // Catch: java.lang.Throwable -> L46
                goto Lb
            L2d:
                org.cocos2dx.okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                org.cocos2dx.okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L46
                long r7 = r1.read(r7, r8)     // Catch: java.lang.Throwable -> L46
                org.cocos2dx.okio.Pipe r9 = r6.this$0     // Catch: java.lang.Throwable -> L46
                org.cocos2dx.okio.Buffer r9 = r9.buffer     // Catch: java.lang.Throwable -> L46
                r9.notifyAll()     // Catch: java.lang.Throwable -> L46
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                return r7
            L3e:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L46
                java.lang.String r8 = "closed"
                r7.<init>(r8)     // Catch: java.lang.Throwable -> L46
                throw r7     // Catch: java.lang.Throwable -> L46
            L46:
                r7 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                throw r7
        }

        @Override
        public org.cocos2dx.okio.Timeout timeout() {
                r1 = this;
                org.cocos2dx.okio.Timeout r0 = r1.timeout
                return r0
        }
    }

    public Pipe(long r4) {
            r3 = this;
            r3.<init>()
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            r3.buffer = r0
            org.cocos2dx.okio.Pipe$PipeSink r0 = new org.cocos2dx.okio.Pipe$PipeSink
            r0.<init>(r3)
            r3.sink = r0
            org.cocos2dx.okio.Pipe$PipeSource r0 = new org.cocos2dx.okio.Pipe$PipeSource
            r0.<init>(r3)
            r3.source = r0
            r0 = 1
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L21
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

    public final org.cocos2dx.okio.Sink sink() {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.sink
            return r0
    }

    public final org.cocos2dx.okio.Source source() {
            r1 = this;
            org.cocos2dx.okio.Source r0 = r1.source
            return r0
    }
}
