package cz.msebera.android.httpclient.impl.io;

import cz.msebera.android.httpclient.annotation.NotThreadSafe;
import cz.msebera.android.httpclient.io.HttpTransportMetrics;

@NotThreadSafe
public class HttpTransportMetricsImpl implements HttpTransportMetrics {
    private long bytesTransferred = 0;

    @Override
    public long getBytesTransferred() {
        return this.bytesTransferred;
    }

    public void setBytesTransferred(long j) {
        this.bytesTransferred = j;
    }

    public void incrementBytesTransferred(long j) {
        this.bytesTransferred += j;
    }

    @Override
    public void reset() {
        this.bytesTransferred = 0L;
    }
}
