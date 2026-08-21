package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class ResponseContentEncoding implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    private static final cz.msebera.android.httpclient.client.entity.InputStreamFactory DEFLATE = null;
    private static final cz.msebera.android.httpclient.client.entity.InputStreamFactory GZIP = null;
    public static final java.lang.String UNCOMPRESSED = "http.client.response.uncompressed";
    private final cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.client.entity.InputStreamFactory> decoderRegistry;



    static {
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding$1 r0 = new cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding$1
            r0.<init>()
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding.GZIP = r0
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding$2 r0 = new cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding$2
            r0.<init>()
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding.DEFLATE = r0
            return
    }

    public ResponseContentEncoding() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ResponseContentEncoding(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.client.entity.InputStreamFactory> r3) {
            r2 = this;
            r2.<init>()
            if (r3 == 0) goto L6
            goto L26
        L6:
            cz.msebera.android.httpclient.config.RegistryBuilder r3 = cz.msebera.android.httpclient.config.RegistryBuilder.create()
            cz.msebera.android.httpclient.client.entity.InputStreamFactory r0 = cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding.GZIP
            java.lang.String r1 = "gzip"
            cz.msebera.android.httpclient.config.RegistryBuilder r3 = r3.register(r1, r0)
            cz.msebera.android.httpclient.client.entity.InputStreamFactory r0 = cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding.GZIP
            java.lang.String r1 = "x-gzip"
            cz.msebera.android.httpclient.config.RegistryBuilder r3 = r3.register(r1, r0)
            cz.msebera.android.httpclient.client.entity.InputStreamFactory r0 = cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding.DEFLATE
            java.lang.String r1 = "deflate"
            cz.msebera.android.httpclient.config.RegistryBuilder r3 = r3.register(r1, r0)
            cz.msebera.android.httpclient.config.Registry r3 = r3.build()
        L26:
            r2.decoderRegistry = r3
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r6, cz.msebera.android.httpclient.protocol.HttpContext r7) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r5 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r6.getEntity()
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r7 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r7)
            cz.msebera.android.httpclient.client.config.RequestConfig r7 = r7.getRequestConfig()
            boolean r7 = r7.isDecompressionEnabled()
            if (r7 == 0) goto L84
            if (r0 == 0) goto L84
            long r1 = r0.getContentLength()
            r3 = 0
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 == 0) goto L84
            cz.msebera.android.httpclient.Header r7 = r0.getContentEncoding()
            if (r7 == 0) goto L84
            cz.msebera.android.httpclient.HeaderElement[] r7 = r7.getElements()
            int r0 = r7.length
            r1 = 0
        L2a:
            if (r1 >= r0) goto L84
            r2 = r7[r1]
            java.lang.String r3 = r2.getName()
            java.util.Locale r4 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r4)
            cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.client.entity.InputStreamFactory> r4 = r5.decoderRegistry
            java.lang.Object r4 = r4.lookup(r3)
            cz.msebera.android.httpclient.client.entity.InputStreamFactory r4 = (cz.msebera.android.httpclient.client.entity.InputStreamFactory) r4
            if (r4 == 0) goto L5e
            cz.msebera.android.httpclient.client.entity.DecompressingEntity r2 = new cz.msebera.android.httpclient.client.entity.DecompressingEntity
            cz.msebera.android.httpclient.HttpEntity r3 = r6.getEntity()
            r2.<init>(r3, r4)
            r6.setEntity(r2)
            java.lang.String r2 = "Content-Length"
            r6.removeHeaders(r2)
            java.lang.String r2 = "Content-Encoding"
            r6.removeHeaders(r2)
            java.lang.String r2 = "Content-MD5"
            r6.removeHeaders(r2)
            goto L66
        L5e:
            java.lang.String r4 = "identity"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L69
        L66:
            int r1 = r1 + 1
            goto L2a
        L69:
            cz.msebera.android.httpclient.HttpException r6 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Unsupported Content-Coding: "
            r7.append(r0)
            java.lang.String r0 = r2.getName()
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L84:
            return
    }
}
