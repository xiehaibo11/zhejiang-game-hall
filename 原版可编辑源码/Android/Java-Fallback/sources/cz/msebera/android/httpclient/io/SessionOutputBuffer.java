package cz.msebera.android.httpclient.io;

public interface SessionOutputBuffer {
    void flush() throws java.io.IOException;

    cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics();

    void write(int r1) throws java.io.IOException;

    void write(byte[] r1) throws java.io.IOException;

    void write(byte[] r1, int r2, int r3) throws java.io.IOException;

    void writeLine(cz.msebera.android.httpclient.util.CharArrayBuffer r1) throws java.io.IOException;

    void writeLine(java.lang.String r1) throws java.io.IOException;
}
