package cz.msebera.android.httpclient.io;

public interface SessionInputBuffer {
    cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics();

    @java.lang.Deprecated
    boolean isDataAvailable(int r1) throws java.io.IOException;

    int read() throws java.io.IOException;

    int read(byte[] r1) throws java.io.IOException;

    int read(byte[] r1, int r2, int r3) throws java.io.IOException;

    int readLine(cz.msebera.android.httpclient.util.CharArrayBuffer r1) throws java.io.IOException;

    java.lang.String readLine() throws java.io.IOException;
}
