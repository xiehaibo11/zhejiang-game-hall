package com.ss.android.socialbase.downloader.reader;

public class SyncStreamReader implements com.ss.android.socialbase.downloader.reader.IStreamReader {
    private final com.ss.android.socialbase.downloader.segment.Buffer buffer;
    private final java.io.InputStream inputStream;

    public SyncStreamReader(java.io.InputStream r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.inputStream = r1
            com.ss.android.socialbase.downloader.segment.Buffer r1 = new com.ss.android.socialbase.downloader.segment.Buffer
            r1.<init>(r2)
            r0.buffer = r1
            return
    }

    @Override
    public void close() {
            r3 = this;
            r0 = 1
            java.io.Closeable[] r0 = new java.io.Closeable[r0]
            java.io.InputStream r1 = r3.inputStream
            r2 = 0
            r0[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.segment.Buffer read() throws java.io.IOException {
            r3 = this;
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r3.buffer
            java.io.InputStream r1 = r3.inputStream
            byte[] r2 = r0.data
            int r1 = r1.read(r2)
            r0.size = r1
            com.ss.android.socialbase.downloader.segment.Buffer r0 = r3.buffer
            return r0
    }

    @Override
    public void recycle(com.ss.android.socialbase.downloader.segment.Buffer r1) {
            r0 = this;
            return
    }
}
