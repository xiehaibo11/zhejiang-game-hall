package cz.msebera.android.httpclient.client;

public interface ConnectionBackoffStrategy {
    boolean shouldBackoff(cz.msebera.android.httpclient.HttpResponse r1);

    boolean shouldBackoff(java.lang.Throwable r1);
}
