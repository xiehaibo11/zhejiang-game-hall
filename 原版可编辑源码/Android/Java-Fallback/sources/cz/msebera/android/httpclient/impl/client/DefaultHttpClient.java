package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class DefaultHttpClient extends cz.msebera.android.httpclient.impl.client.AbstractHttpClient {
    public DefaultHttpClient() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    public DefaultHttpClient(cz.msebera.android.httpclient.conn.ClientConnectionManager r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DefaultHttpClient(cz.msebera.android.httpclient.conn.ClientConnectionManager r1, cz.msebera.android.httpclient.params.HttpParams r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public DefaultHttpClient(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public static void setDefaultHttpParams(cz.msebera.android.httpclient.params.HttpParams r3) {
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            cz.msebera.android.httpclient.params.HttpProtocolParams.setVersion(r3, r0)
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
            java.lang.String r0 = r0.name()
            cz.msebera.android.httpclient.params.HttpProtocolParams.setContentCharset(r3, r0)
            r0 = 1
            cz.msebera.android.httpclient.params.HttpConnectionParams.setTcpNoDelay(r3, r0)
            r0 = 8192(0x2000, float:1.148E-41)
            cz.msebera.android.httpclient.params.HttpConnectionParams.setSocketBufferSize(r3, r0)
            java.lang.Class<cz.msebera.android.httpclient.impl.client.DefaultHttpClient> r0 = cz.msebera.android.httpclient.impl.client.DefaultHttpClient.class
            java.lang.String r1 = "Apache-HttpClient"
            java.lang.String r2 = "cz.msebera.android.httpclient.client"
            java.lang.String r0 = cz.msebera.android.httpclient.util.VersionInfo.getUserAgent(r1, r2, r0)
            cz.msebera.android.httpclient.params.HttpProtocolParams.setUserAgent(r3, r0)
            return
    }

    @Override
    protected cz.msebera.android.httpclient.params.HttpParams createHttpParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.SyncBasicHttpParams r0 = new cz.msebera.android.httpclient.params.SyncBasicHttpParams
            r0.<init>()
            setDefaultHttpParams(r0)
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.protocol.BasicHttpProcessor createHttpProcessor() {
            r2 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = new cz.msebera.android.httpclient.protocol.BasicHttpProcessor
            r0.<init>()
            cz.msebera.android.httpclient.client.protocol.RequestDefaultHeaders r1 = new cz.msebera.android.httpclient.client.protocol.RequestDefaultHeaders
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.protocol.RequestContent r1 = new cz.msebera.android.httpclient.protocol.RequestContent
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.protocol.RequestTargetHost r1 = new cz.msebera.android.httpclient.protocol.RequestTargetHost
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.RequestClientConnControl r1 = new cz.msebera.android.httpclient.client.protocol.RequestClientConnControl
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.protocol.RequestUserAgent r1 = new cz.msebera.android.httpclient.protocol.RequestUserAgent
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.protocol.RequestExpectContinue r1 = new cz.msebera.android.httpclient.protocol.RequestExpectContinue
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.RequestAddCookies r1 = new cz.msebera.android.httpclient.client.protocol.RequestAddCookies
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.ResponseProcessCookies r1 = new cz.msebera.android.httpclient.client.protocol.ResponseProcessCookies
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.RequestAuthCache r1 = new cz.msebera.android.httpclient.client.protocol.RequestAuthCache
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.RequestTargetAuthentication r1 = new cz.msebera.android.httpclient.client.protocol.RequestTargetAuthentication
            r1.<init>()
            r0.addInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.RequestProxyAuthentication r1 = new cz.msebera.android.httpclient.client.protocol.RequestProxyAuthentication
            r1.<init>()
            r0.addInterceptor(r1)
            return r0
    }
}
