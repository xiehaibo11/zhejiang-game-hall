package cz.msebera.android.httpclient.client.utils;

public class HttpClientUtils {
    private HttpClientUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeQuietly(cz.msebera.android.httpclient.HttpResponse r0) {
            if (r0 == 0) goto Lb
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            if (r0 == 0) goto Lb
            cz.msebera.android.httpclient.util.EntityUtils.consume(r0)     // Catch: java.io.IOException -> Lb
        Lb:
            return
    }

    public static void closeQuietly(cz.msebera.android.httpclient.client.HttpClient r1) {
            if (r1 == 0) goto Lb
            boolean r0 = r1 instanceof java.io.Closeable
            if (r0 == 0) goto Lb
            java.io.Closeable r1 = (java.io.Closeable) r1     // Catch: java.io.IOException -> Lb
            r1.close()     // Catch: java.io.IOException -> Lb
        Lb:
            return
    }

    public static void closeQuietly(cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1) {
            if (r1 == 0) goto L12
            cz.msebera.android.httpclient.HttpEntity r0 = r1.getEntity()     // Catch: java.lang.Throwable -> Ld
            cz.msebera.android.httpclient.util.EntityUtils.consume(r0)     // Catch: java.lang.Throwable -> Ld
            r1.close()     // Catch: java.io.IOException -> L12
            goto L12
        Ld:
            r0 = move-exception
            r1.close()     // Catch: java.io.IOException -> L12
            throw r0     // Catch: java.io.IOException -> L12
        L12:
            return
    }
}
