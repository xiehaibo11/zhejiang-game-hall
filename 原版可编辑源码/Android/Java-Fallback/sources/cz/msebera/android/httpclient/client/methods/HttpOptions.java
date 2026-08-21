package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpOptions extends cz.msebera.android.httpclient.client.methods.HttpRequestBase {
    public static final java.lang.String METHOD_NAME = "OPTIONS";

    public HttpOptions() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpOptions(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.net.URI r1 = java.net.URI.create(r1)
            r0.setURI(r1)
            return
    }

    public HttpOptions(java.net.URI r1) {
            r0 = this;
            r0.<init>()
            r0.setURI(r1)
            return
    }

    public java.util.Set<java.lang.String> getAllowedMethods(cz.msebera.android.httpclient.HttpResponse r6) {
            r5 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Allow"
            cz.msebera.android.httpclient.HeaderIterator r6 = r6.headerIterator(r0)
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
        L10:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L2e
            cz.msebera.android.httpclient.Header r1 = r6.nextHeader()
            cz.msebera.android.httpclient.HeaderElement[] r1 = r1.getElements()
            int r2 = r1.length
            r3 = 0
        L20:
            if (r3 >= r2) goto L10
            r4 = r1[r3]
            java.lang.String r4 = r4.getName()
            r0.add(r4)
            int r3 = r3 + 1
            goto L20
        L2e:
            return r0
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = "OPTIONS"
            return r0
    }
}
