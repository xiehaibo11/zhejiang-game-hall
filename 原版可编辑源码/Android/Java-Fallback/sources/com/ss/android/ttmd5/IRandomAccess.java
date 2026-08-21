package com.ss.android.ttmd5;

public interface IRandomAccess {
    void close() throws java.io.IOException;

    long length() throws java.io.IOException;

    int read(byte[] r1, int r2, int r3) throws java.io.IOException;

    void seek(long r1, long r3) throws java.io.IOException;
}
