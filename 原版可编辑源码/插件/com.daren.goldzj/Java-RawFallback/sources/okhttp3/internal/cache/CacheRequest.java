package okhttp3.internal.cache;

public interface CacheRequest {
    void abort();

    okio.Sink body() throws java.io.IOException;
}
