package com.mbridge.msdk.playercommon.exoplayer2.offline;

public interface Downloader {
    void cancel();

    void download() throws java.lang.InterruptedException, java.io.IOException;

    float getDownloadPercentage();

    long getDownloadedBytes();

    void remove() throws java.lang.InterruptedException;
}
