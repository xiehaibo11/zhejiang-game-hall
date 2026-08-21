package cz.msebera.android.httpclient.client;

public interface AuthCache {
    void clear();

    cz.msebera.android.httpclient.auth.AuthScheme get(cz.msebera.android.httpclient.HttpHost r1);

    void put(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.auth.AuthScheme r2);

    void remove(cz.msebera.android.httpclient.HttpHost r1);
}
