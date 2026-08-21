package com.kwad.framework.filedownloader.e;

public interface a extends java.io.Closeable {
    @Override
    void close();

    void seek(long r1);

    void setLength(long r1);

    void vJ();

    void write(byte[] r1, int r2, int r3);
}
