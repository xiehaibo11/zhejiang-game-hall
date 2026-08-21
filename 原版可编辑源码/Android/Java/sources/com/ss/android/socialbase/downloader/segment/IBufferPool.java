package com.ss.android.socialbase.downloader.segment;

public interface IBufferPool {
    Buffer obtain() throws InterruptedException, StreamClosedException;

    void recycle(Buffer buffer);
}
