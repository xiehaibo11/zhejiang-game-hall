package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpTransportMetricsImpl implements cz.msebera.android.httpclient.io.HttpTransportMetrics {
    private long bytesTransferred;

    public HttpTransportMetricsImpl() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.bytesTransferred = r0
            return
    }

    @Override
    public long getBytesTransferred() {
            r2 = this;
            long r0 = r2.bytesTransferred
            return r0
    }

    public void incrementBytesTransferred(long r3) {
            r2 = this;
            long r0 = r2.bytesTransferred
            long r0 = r0 + r3
            r2.bytesTransferred = r0
            return
    }

    @Override
    public void reset() {
            r2 = this;
            r0 = 0
            r2.bytesTransferred = r0
            return
    }

    public void setBytesTransferred(long r1) {
            r0 = this;
            r0.bytesTransferred = r1
            return
    }
}
