package cz.msebera.android.httpclient.impl.execchain;

public interface ClientExecChain {
    cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.client.protocol.HttpClientContext r3, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r4) throws java.io.IOException, cz.msebera.android.httpclient.HttpException;
}
