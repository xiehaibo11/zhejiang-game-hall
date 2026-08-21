package com.ss.android.socialbase.downloader.reader;

public class AsyncStreamReader implements com.ss.android.socialbase.downloader.reader.IStreamReader {
    private static final java.lang.String TAG = "AsyncStreamReader";
    private int bufferCount;
    private final int bufferSize;
    private volatile boolean closed;
    private final java.io.InputStream inputStream;
    private final int maxBufferCount;
    private volatile java.util.concurrent.Future rFuture;
    private com.ss.android.socialbase.downloader.segment.Buffer rHead;
    private final java.lang.Object rLock;
    private final java.lang.Runnable rRunnable;
    private com.ss.android.socialbase.downloader.segment.Buffer rSafe;
    private com.ss.android.socialbase.downloader.segment.Buffer rTail;
    private volatile boolean terminated;
    private volatile java.lang.Throwable throwable;
    private com.ss.android.socialbase.downloader.segment.Buffer wHead;
    private final java.lang.Object wLock;
    private com.ss.android.socialbase.downloader.segment.Buffer wSafe;
    private com.ss.android.socialbase.downloader.segment.Buffer wTail;


    public AsyncStreamReader(java.io.InputStream r2, int r3, int r4) throws java.lang.Throwable {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.rLock = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.wLock = r0
            com.ss.android.socialbase.downloader.reader.AsyncStreamReader$1 r0 = new com.ss.android.socialbase.downloader.reader.AsyncStreamReader$1
            r0.<init>(r1)
            r1.rRunnable = r0
            r1.inputStream = r2
            r1.bufferSize = r3
            r2 = 64
            r3 = 1
            if (r4 >= r3) goto L23
            r4 = r3
            goto L26
        L23:
            if (r4 <= r2) goto L26
            r4 = r2
        L26:
            r1.maxBufferCount = r4
            r1.start()
            return
    }

    static com.ss.android.socialbase.downloader.segment.Buffer access$000(com.ss.android.socialbase.downloader.reader.AsyncStreamReader r0) throws com.ss.android.socialbase.downloader.segment.StreamClosedException, java.lang.InterruptedException {
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r0.dequeueReadBuffer()
            return r0
    }

    static java.io.InputStream access$100(com.ss.android.socialbase.downloader.reader.AsyncStreamReader r0) {
            java.io.InputStream r0 = r0.inputStream
            return r0
    }

    static void access$200(com.ss.android.socialbase.downloader.reader.AsyncStreamReader r0, com.ss.android.socialbase.downloader.segment.Buffer r1) {
            r0.enqueueWriteBuffer(r1)
            return
    }

    static java.lang.Throwable access$302(com.ss.android.socialbase.downloader.reader.AsyncStreamReader r0, java.lang.Throwable r1) {
            r0.throwable = r1
            return r1
    }

    static java.lang.Object access$400(com.ss.android.socialbase.downloader.reader.AsyncStreamReader r0) {
            java.lang.Object r0 = r0.wLock
            return r0
    }

    static boolean access$502(com.ss.android.socialbase.downloader.reader.AsyncStreamReader r0, boolean r1) {
            r0.terminated = r1
            return r1
    }

    private com.ss.android.socialbase.downloader.segment.Buffer dequeueReadBuffer() throws com.ss.android.socialbase.downloader.segment.StreamClosedException, java.lang.InterruptedException {
            r5 = this;
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r5.rSafe
            r1 = 0
            if (r0 == 0) goto L18
            boolean r2 = r5.closed
            if (r2 != 0) goto L10
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r0.next
            r5.rSafe = r2
            r0.next = r1
            return r0
        L10:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r0 = new com.ss.android.socialbase.downloader.segment.StreamClosedException
            java.lang.String r1 = ""
            r0.<init>(r1)
            throw r0
        L18:
            java.lang.Object r0 = r5.rLock
            monitor-enter(r0)
            boolean r2 = r5.closed     // Catch: java.lang.Throwable -> L62
            if (r2 != 0) goto L5a
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r5.rHead     // Catch: java.lang.Throwable -> L62
            if (r2 != 0) goto L38
            int r3 = r5.bufferCount     // Catch: java.lang.Throwable -> L62
            int r4 = r5.maxBufferCount     // Catch: java.lang.Throwable -> L62
            if (r3 >= r4) goto L38
            int r1 = r5.bufferCount     // Catch: java.lang.Throwable -> L62
            int r1 = r1 + 1
            r5.bufferCount = r1     // Catch: java.lang.Throwable -> L62
            com.ss.android.socialbase.downloader.segment.Buffer r1 = new com.ss.android.socialbase.downloader.segment.Buffer     // Catch: java.lang.Throwable -> L62
            int r2 = r5.bufferSize     // Catch: java.lang.Throwable -> L62
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L62
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L62
            return r1
        L38:
            if (r2 != 0) goto L4e
            java.lang.Object r2 = r5.rLock     // Catch: java.lang.Throwable -> L62
            r2.wait()     // Catch: java.lang.Throwable -> L62
            boolean r2 = r5.closed     // Catch: java.lang.Throwable -> L62
            if (r2 != 0) goto L46
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r5.rHead     // Catch: java.lang.Throwable -> L62
            goto L38
        L46:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r1 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = ""
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L62
            throw r1     // Catch: java.lang.Throwable -> L62
        L4e:
            com.ss.android.socialbase.downloader.segment.Buffer r3 = r2.next     // Catch: java.lang.Throwable -> L62
            r5.rSafe = r3     // Catch: java.lang.Throwable -> L62
            r5.rTail = r1     // Catch: java.lang.Throwable -> L62
            r5.rHead = r1     // Catch: java.lang.Throwable -> L62
            r2.next = r1     // Catch: java.lang.Throwable -> L62
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L62
            return r2
        L5a:
            com.ss.android.socialbase.downloader.segment.StreamClosedException r1 = new com.ss.android.socialbase.downloader.segment.StreamClosedException     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = ""
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L62
            throw r1     // Catch: java.lang.Throwable -> L62
        L62:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L62
            throw r1
    }

    private com.ss.android.socialbase.downloader.segment.Buffer dequeueWriteBuffer() throws com.ss.android.socialbase.downloader.exception.BaseException, java.lang.InterruptedException {
            r4 = this;
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r4.wSafe
            r1 = 0
            if (r0 == 0) goto Lc
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r0.next
            r4.wSafe = r2
            r0.next = r1
            return r0
        Lc:
            java.lang.Object r0 = r4.wLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r4.wHead     // Catch: java.lang.Throwable -> L2f
            if (r2 != 0) goto L23
        L13:
            boolean r2 = r4.terminated     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L1a
            r4.handleTerminated()     // Catch: java.lang.Throwable -> L2f
        L1a:
            java.lang.Object r2 = r4.wLock     // Catch: java.lang.Throwable -> L2f
            r2.wait()     // Catch: java.lang.Throwable -> L2f
            com.ss.android.socialbase.downloader.segment.Buffer r2 = r4.wHead     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L13
        L23:
            com.ss.android.socialbase.downloader.segment.Buffer r3 = r2.next     // Catch: java.lang.Throwable -> L2f
            r4.wSafe = r3     // Catch: java.lang.Throwable -> L2f
            r4.wTail = r1     // Catch: java.lang.Throwable -> L2f
            r4.wHead = r1     // Catch: java.lang.Throwable -> L2f
            r2.next = r1     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            return r2
        L2f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r1
    }

    private void enqueueReadBuffer(com.ss.android.socialbase.downloader.segment.Buffer r3) {
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

    private void enqueueWriteBuffer(com.ss.android.socialbase.downloader.segment.Buffer r3) {
            r2 = this;
            java.lang.Object r0 = r2.wLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.segment.Buffer r1 = r2.wTail     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L11
            r2.wTail = r3     // Catch: java.lang.Throwable -> L17
            r2.wHead = r3     // Catch: java.lang.Throwable -> L17
            java.lang.Object r3 = r2.wLock     // Catch: java.lang.Throwable -> L17
            r3.notify()     // Catch: java.lang.Throwable -> L17
            goto L15
        L11:
            r1.next = r3     // Catch: java.lang.Throwable -> L17
            r2.wTail = r3     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }

    private void handleTerminated() throws com.ss.android.socialbase.downloader.exception.BaseException {
            r3 = this;
            java.lang.Throwable r0 = r3.throwable
            if (r0 == 0) goto L17
            boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.segment.StreamClosedException
            if (r1 == 0) goto L12
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1068(0x42c, float:1.497E-42)
            java.lang.String r2 = "async reader closed!"
            r0.<init>(r1, r2)
            throw r0
        L12:
            java.lang.String r1 = "async_read"
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r0, r1)
        L17:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1069(0x42d, float:1.498E-42)
            java.lang.String r2 = "async reader terminated!"
            r0.<init>(r1, r2)
            throw r0
    }

    private void start() throws java.lang.Throwable {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkDownloadThreadExecutorService()
            java.lang.Runnable r1 = r2.rRunnable
            java.util.concurrent.Future r0 = r0.submit(r1)
            r2.rFuture = r0
            return
    }

    @Override
    public void close() {
            r3 = this;
            java.lang.Object r0 = r3.rLock
            monitor-enter(r0)
            r1 = 1
            r3.closed = r1     // Catch: java.lang.Throwable -> L17
            java.lang.Object r2 = r3.rLock     // Catch: java.lang.Throwable -> L17
            r2.notify()     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.Future r0 = r3.rFuture
            if (r0 == 0) goto L16
            r0.cancel(r1)     // Catch: java.lang.Throwable -> L13
        L13:
            r0 = 0
            r3.rFuture = r0
        L16:
            return
        L17:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r1
    }

    @Override
    public com.ss.android.socialbase.downloader.segment.Buffer read() throws com.ss.android.socialbase.downloader.exception.BaseException, java.lang.InterruptedException {
            r1 = this;
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r1.dequeueWriteBuffer()
            return r0
    }

    @Override
    public void recycle(com.ss.android.socialbase.downloader.segment.Buffer r1) {
            r0 = this;
            r0.enqueueReadBuffer(r1)
            return
    }
}
