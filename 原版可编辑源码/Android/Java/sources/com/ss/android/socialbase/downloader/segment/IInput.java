package com.ss.android.socialbase.downloader.segment;

public interface IInput {
    Buffer read() throws InterruptedException, StreamClosedException;
}
