package com.ss.android.socialbase.downloader.segment;

class BufferQueue implements com.ss.android.socialbase.downloader.segment.IBufferPool, com.ss.android.socialbase.downloader.segment.IInput, com.ss.android.socialbase.downloader.segment.IOutput {
    private static final int MIN_BUFFER_COUNT = 64;
    private static final int MIN_BUFFER_SIZE = 8192;
    private int bufferCount;
    private final int bufferSize;
    private volatile boolean closed;
    private final int maxBufferCount;
    private com.ss.android.socialbase.downloader.segment.Buffer rHead;
    private final java.lang.Object rLock;
    private com.ss.android.socialbase.downloader.segment.Buffer rSafe;
    private com.ss.android.socialbase.downloader.segment.Buffer rTail;
    private com.ss.android.socialbase.downloader.segment.Buffer wHead;
    private final java.lang.Object wLock;
    private com.ss.android.socialbase.downloader.segment.Buffer wTail;

    BufferQueue(int r2, int r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.wLock = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.rLock = r0
            r0 = 64
            if (r2 >= r0) goto L16
            r2 = r0
        L16:
            r0 = 8192(0x2000, float:1.148E-41)
            if (r3 >= r0) goto L1b
            r3 = r0
        L1b:
            r1.maxBufferCount = r2
            r1.bufferSize = r3
            return
    }

    public void close() {
            r2 = this;
            r0 = 1
            r2.closed = r0
            java.lang.Object r0 = r2.wLock
            monitor-enter(r0)
            java.lang.Object r1 = r2.wLock     // Catch: java.lang.Throwable -> L19
            r1.notifyAll()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            java.lang.Object r1 = r2.rLock
            monitor-enter(r1)
            java.lang.Object r0 = r2.rLock     // Catch: java.lang.Throwable -> L16
            r0.notifyAll()     // Catch: java.lang.Throwable -> L16
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L16
            throw r0
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
    }

    @Override
    public com.ss.android.socialbase.downloader.segment.Buffer obtain() throws com.ss.android.socialbase.downloader.segment.StreamClosedException, java.lang.InterruptedException {
            r4 = this;
            java.lang.Object r0 = r4.wLock
            monitor-enter(r0)
            boolean r1 = r4.closed     // Catch: java.lang.Throwable -> L4d
            if (r1 != 0) goto L45
            com.ss.android.socialbase.downloader.segment.Buffer r1 = r4.wHead     // Catch: java.lang.Throwable -> L4d
            if (r1 != 0) goto L36
            int r1 = r4.bufferCount     // Catch: java.lang.Throwable -> L4d
            int r2 = r4.maxBufferCount     // Catch: java.lang.Throwable -> L4d
            if (r1 >= r2) goto L20
            int r1 = r4.bufferCount     // Catch: java.lang.Throwable -> L4d
            int r1 = r1 + 1
            r4.bufferCount = r1     // Catch: java.lang.Throwable -> L4d
            com.ss.android.socialbase.downloader.segment.Buffer r1 = new com.ss.android.socialbase.downloader.segment.Buffer     // Catch: java.lang.Throwable -> L4d
            int r2 = r4.bufferSize     // Catch: java.lang.Throwable -> L4d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            return r1
        L20:
            java.lang.Object r1 = r4.wLock     // Catch: java.lang.Throwable -> L4d
            r1.wait()     // Catch: java.lang.Throwable -> L4d
            boolean r1 = r4.closed     // Catch: java.lang.Throwable -> L4d
            if (r1 != 0) goto L2e
            com.ss.android.socialbase.downloader.segment.Buffer r1 = r4.wHead     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L20
            goto L36
        L2e:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r1 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "obtain"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4d
            throw r1     // Catch: java.lang.Throwable -> L4d
        L36:
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r1.next     // Catch: java.lang.Throwable -> L4d
            r4.wHead = r2     // Catch: java.lang.Throwable -> L4d
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r4.wTail     // Catch: java.lang.Throwable -> L4d
            r3 = 0
            if (r1 != r2) goto L41
            r4.wTail = r3     // Catch: java.lang.Throwable -> L4d
        L41:
            r1.next = r3     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            return r1
        L45:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r1 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "obtain"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4d
            throw r1     // Catch: java.lang.Throwable -> L4d
        L4d:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            throw r1
    }

    @Override
    public com.ss.android.socialbase.downloader.segment.Buffer read() throws com.ss.android.socialbase.downloader.segment.StreamClosedException, java.lang.InterruptedException {
            r4 = this;
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r4.rSafe
            r1 = 0
            if (r0 == 0) goto Lc
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r0.next
            r4.rSafe = r2
            r0.next = r1
            return r0
        Lc:
            java.lang.Object r0 = r4.rLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r4.rHead     // Catch: java.lang.Throwable -> L33
        L11:
            if (r2 != 0) goto L27
            boolean r2 = r4.closed     // Catch: java.lang.Throwable -> L33
            if (r2 != 0) goto L1f
            java.lang.Object r2 = r4.rLock     // Catch: java.lang.Throwable -> L33
            r2.wait()     // Catch: java.lang.Throwable -> L33
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r4.rHead     // Catch: java.lang.Throwable -> L33
            goto L11
        L1f:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r1 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "read"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L33
            throw r1     // Catch: java.lang.Throwable -> L33
        L27:
            com.ss.android.socialbase.downloader.segment.Buffer r3 = r2.next     // Catch: java.lang.Throwable -> L33
            r4.rSafe = r3     // Catch: java.lang.Throwable -> L33
            r4.rTail = r1     // Catch: java.lang.Throwable -> L33
            r4.rHead = r1     // Catch: java.lang.Throwable -> L33
            r2.next = r1     // Catch: java.lang.Throwable -> L33
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return r2
        L33:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            throw r1
    }

    @Override
    public void recycle(com.ss.android.socialbase.downloader.segment.Buffer r3) {
            r2 = this;
            java.lang.Object r0 = r2.wLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.segment.Buffer r1 = r2.wTail     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto Lc
            r2.wTail = r3     // Catch: java.lang.Throwable -> L17
            r2.wHead = r3     // Catch: java.lang.Throwable -> L17
            goto L10
        Lc:
            r1.next = r3     // Catch: java.lang.Throwable -> L17
            r2.wTail = r3     // Catch: java.lang.Throwable -> L17
        L10:
            java.lang.Object r3 = r2.wLock     // Catch: java.lang.Throwable -> L17
            r3.notify()     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }

    @Override
    public void write(com.ss.android.socialbase.downloader.segment.Buffer r3) {
            r2 = this;
            java.lang.Object r0 = r2.rLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.segment.Buffer r1 = r2.rTail     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L11
            r2.rTail = r3     // Catch: java.lang.Throwable -> L17
            r2.rHead = r3     // Catch: java.lang.Throwable -> L17
            java.lang.Object r3 = r2.rLock     // Catch: java.lang.Throwable -> L17
            r3.notify()     // Catch: java.lang.Throwable -> L17
            goto L15
        L11:
            r1.next = r3     // Catch: java.lang.Throwable -> L17
            r2.rTail = r3     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }
}
