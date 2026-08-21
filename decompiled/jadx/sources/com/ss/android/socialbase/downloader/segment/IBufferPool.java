package com.ss.android.socialbase.downloader.segment;

/* JADX INFO: loaded from: classes3.dex */
public interface IBufferPool {
    Buffer obtain() throws InterruptedException, StreamClosedException;

    void recycle(Buffer buffer);
}
