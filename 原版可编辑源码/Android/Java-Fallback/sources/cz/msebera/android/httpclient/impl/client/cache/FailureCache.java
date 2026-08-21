package cz.msebera.android.httpclient.impl.client.cache;

public interface FailureCache {
    int getErrorCount(java.lang.String r1);

    void increaseErrorCount(java.lang.String r1);

    void resetErrorCount(java.lang.String r1);
}
