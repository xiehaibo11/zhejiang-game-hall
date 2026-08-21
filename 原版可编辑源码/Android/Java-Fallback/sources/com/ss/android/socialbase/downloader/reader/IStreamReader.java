package com.ss.android.socialbase.downloader.reader;

public interface IStreamReader {
    void close();

    com.ss.android.socialbase.downloader.segment.Buffer read() throws java.io.IOException, com.ss.android.socialbase.downloader.exception.BaseException, java.lang.InterruptedException;

    void recycle(com.ss.android.socialbase.downloader.segment.Buffer r1);
}
