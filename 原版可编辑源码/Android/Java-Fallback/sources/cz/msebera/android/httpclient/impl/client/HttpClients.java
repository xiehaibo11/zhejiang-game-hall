package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class HttpClients {
    private HttpClients() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.impl.client.CloseableHttpClient createDefault() {
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder r0 = cz.msebera.android.httpclient.impl.client.HttpClientBuilder.create()
            cz.msebera.android.httpclient.impl.client.CloseableHttpClient r0 = r0.build()
            return r0
    }

    public static cz.msebera.android.httpclient.impl.client.CloseableHttpClient createMinimal() {
            cz.msebera.android.httpclient.impl.client.MinimalHttpClient r0 = new cz.msebera.android.httpclient.impl.client.MinimalHttpClient
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager r1 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager
            r1.<init>()
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.impl.client.CloseableHttpClient createMinimal(cz.msebera.android.httpclient.conn.HttpClientConnectionManager r1) {
            cz.msebera.android.httpclient.impl.client.MinimalHttpClient r0 = new cz.msebera.android.httpclient.impl.client.MinimalHttpClient
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.impl.client.CloseableHttpClient createSystem() {
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder r0 = cz.msebera.android.httpclient.impl.client.HttpClientBuilder.create()
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder r0 = r0.useSystemProperties()
            cz.msebera.android.httpclient.impl.client.CloseableHttpClient r0 = r0.build()
            return r0
    }

    public static cz.msebera.android.httpclient.impl.client.HttpClientBuilder custom() {
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder r0 = cz.msebera.android.httpclient.impl.client.HttpClientBuilder.create()
            return r0
    }
}
