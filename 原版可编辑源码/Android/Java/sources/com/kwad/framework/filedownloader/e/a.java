package com.kwad.framework.filedownloader.e;

import java.io.Closeable;

public interface a extends Closeable {
    @Override
    void close();

    void seek(long j);

    void setLength(long j);

    void vJ();

    void write(byte[] bArr, int i, int i2);
}
