package com.ss.android.socialbase.downloader.segment;

public interface IBufferPool {
    com.ss.android.socialbase.downloader.segment.Buffer obtain() throws com.ss.android.socialbase.downloader.segment.StreamClosedException, java.lang.InterruptedException;

    void recycle(com.ss.android.socialbase.downloader.segment.Buffer r1);
}
