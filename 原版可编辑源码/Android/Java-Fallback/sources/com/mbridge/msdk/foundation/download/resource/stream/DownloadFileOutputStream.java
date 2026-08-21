package com.mbridge.msdk.foundation.download.resource.stream;

public interface DownloadFileOutputStream {
    void close() throws java.io.IOException;

    void flushAndSync() throws java.io.IOException;

    void seek(long r1) throws java.io.IOException, java.lang.IllegalAccessException;

    void setLength(long r1) throws java.io.IOException, java.lang.IllegalAccessException;

    void write(byte[] r1, int r2, int r3) throws java.io.IOException;
}
