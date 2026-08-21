package cz.msebera.android.httpclient.conn;

public interface EofSensorWatcher {
    boolean eofDetected(java.io.InputStream r1) throws java.io.IOException;

    boolean streamAbort(java.io.InputStream r1) throws java.io.IOException;

    boolean streamClosed(java.io.InputStream r1) throws java.io.IOException;
}
