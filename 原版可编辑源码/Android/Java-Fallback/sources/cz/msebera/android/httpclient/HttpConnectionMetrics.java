package cz.msebera.android.httpclient;

public interface HttpConnectionMetrics {
    java.lang.Object getMetric(java.lang.String r1);

    long getReceivedBytesCount();

    long getRequestCount();

    long getResponseCount();

    long getSentBytesCount();

    void reset();
}
