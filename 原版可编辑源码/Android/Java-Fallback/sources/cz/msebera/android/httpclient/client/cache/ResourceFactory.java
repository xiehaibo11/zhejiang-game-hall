package cz.msebera.android.httpclient.client.cache;

public interface ResourceFactory {
    cz.msebera.android.httpclient.client.cache.Resource copy(java.lang.String r1, cz.msebera.android.httpclient.client.cache.Resource r2) throws java.io.IOException;

    cz.msebera.android.httpclient.client.cache.Resource generate(java.lang.String r1, java.io.InputStream r2, cz.msebera.android.httpclient.client.cache.InputLimit r3) throws java.io.IOException;
}
