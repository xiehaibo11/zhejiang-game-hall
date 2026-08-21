package com.ss.android.socialbase.downloader.segment;

public interface IInput {
    com.ss.android.socialbase.downloader.segment.Buffer read() throws com.ss.android.socialbase.downloader.segment.StreamClosedException, java.lang.InterruptedException;
}
