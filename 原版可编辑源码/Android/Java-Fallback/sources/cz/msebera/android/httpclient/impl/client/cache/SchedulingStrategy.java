package cz.msebera.android.httpclient.impl.client.cache;

public interface SchedulingStrategy extends java.io.Closeable {
    void schedule(cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidationRequest r1);
}
