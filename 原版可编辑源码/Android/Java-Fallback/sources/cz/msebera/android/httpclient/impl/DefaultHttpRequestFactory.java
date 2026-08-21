package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpRequestFactory implements cz.msebera.android.httpclient.HttpRequestFactory {
    public static final cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory INSTANCE = null;
    private static final java.lang.String[] RFC2616_COMMON_METHODS = null;
    private static final java.lang.String[] RFC2616_ENTITY_ENC_METHODS = null;
    private static final java.lang.String[] RFC2616_SPECIAL_METHODS = null;

    static {
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory r0 = new cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.INSTANCE = r0
            java.lang.String r0 = "GET"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_COMMON_METHODS = r0
            java.lang.String r0 = "POST"
            java.lang.String r1 = "PUT"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_ENTITY_ENC_METHODS = r0
            java.lang.String r0 = "HEAD"
            java.lang.String r1 = "OPTIONS"
            java.lang.String r2 = "DELETE"
            java.lang.String r3 = "TRACE"
            java.lang.String r4 = "CONNECT"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_SPECIAL_METHODS = r0
            return
    }

    public DefaultHttpRequestFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean isOneOf(java.lang.String[] r4, java.lang.String r5) {
            int r0 = r4.length
            r1 = 0
            r2 = 0
        L3:
            if (r2 >= r0) goto L12
            r3 = r4[r2]
            boolean r3 = r3.equalsIgnoreCase(r5)
            if (r3 == 0) goto Lf
            r4 = 1
            return r4
        Lf:
            int r2 = r2 + 1
            goto L3
        L12:
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.HttpRequest newHttpRequest(cz.msebera.android.httpclient.RequestLine r3) throws cz.msebera.android.httpclient.MethodNotSupportedException {
            r2 = this;
            java.lang.String r0 = "Request line"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = r3.getMethod()
            java.lang.String[] r1 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_COMMON_METHODS
            boolean r1 = isOneOf(r1, r0)
            if (r1 == 0) goto L17
            cz.msebera.android.httpclient.message.BasicHttpRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            r0.<init>(r3)
            return r0
        L17:
            java.lang.String[] r1 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_ENTITY_ENC_METHODS
            boolean r1 = isOneOf(r1, r0)
            if (r1 == 0) goto L25
            cz.msebera.android.httpclient.message.BasicHttpEntityEnclosingRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpEntityEnclosingRequest
            r0.<init>(r3)
            return r0
        L25:
            java.lang.String[] r1 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_SPECIAL_METHODS
            boolean r1 = isOneOf(r1, r0)
            if (r1 == 0) goto L33
            cz.msebera.android.httpclient.message.BasicHttpRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            r0.<init>(r3)
            return r0
        L33:
            cz.msebera.android.httpclient.MethodNotSupportedException r3 = new cz.msebera.android.httpclient.MethodNotSupportedException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = " method not supported"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
    }

    @Override
    public cz.msebera.android.httpclient.HttpRequest newHttpRequest(java.lang.String r2, java.lang.String r3) throws cz.msebera.android.httpclient.MethodNotSupportedException {
            r1 = this;
            java.lang.String[] r0 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_COMMON_METHODS
            boolean r0 = isOneOf(r0, r2)
            if (r0 == 0) goto Le
            cz.msebera.android.httpclient.message.BasicHttpRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            r0.<init>(r2, r3)
            return r0
        Le:
            java.lang.String[] r0 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_ENTITY_ENC_METHODS
            boolean r0 = isOneOf(r0, r2)
            if (r0 == 0) goto L1c
            cz.msebera.android.httpclient.message.BasicHttpEntityEnclosingRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpEntityEnclosingRequest
            r0.<init>(r2, r3)
            return r0
        L1c:
            java.lang.String[] r0 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.RFC2616_SPECIAL_METHODS
            boolean r0 = isOneOf(r0, r2)
            if (r0 == 0) goto L2a
            cz.msebera.android.httpclient.message.BasicHttpRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            r0.<init>(r2, r3)
            return r0
        L2a:
            cz.msebera.android.httpclient.MethodNotSupportedException r3 = new cz.msebera.android.httpclient.MethodNotSupportedException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " method not supported"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }
}
