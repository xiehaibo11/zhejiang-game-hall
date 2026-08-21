package cz.msebera.android.httpclient.impl.entity;

@cz.msebera.android.httpclient.annotation.Immutable
public class StrictContentLengthStrategy implements cz.msebera.android.httpclient.entity.ContentLengthStrategy {
    public static final cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy INSTANCE = null;
    private final int implicitLen;

    static {
            cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy r0 = new cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy.INSTANCE = r0
            return
    }

    public StrictContentLengthStrategy() {
            r1 = this;
            r0 = -1
            r1.<init>(r0)
            return
    }

    public StrictContentLengthStrategy(int r1) {
            r0 = this;
            r0.<init>()
            r0.implicitLen = r1
            return
    }

    @Override
    public long determineLength(cz.msebera.android.httpclient.HttpMessage r6) throws cz.msebera.android.httpclient.HttpException {
            r5 = this;
            java.lang.String r0 = "HTTP message"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Transfer-Encoding"
            cz.msebera.android.httpclient.Header r0 = r6.getFirstHeader(r0)
            if (r0 == 0) goto L65
            java.lang.String r0 = r0.getValue()
            java.lang.String r1 = "chunked"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L43
            cz.msebera.android.httpclient.ProtocolVersion r0 = r6.getProtocolVersion()
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r0 = r0.lessEquals(r1)
            if (r0 != 0) goto L28
            r0 = -2
            return r0
        L28:
            cz.msebera.android.httpclient.ProtocolException r0 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Chunked transfer encoding not allowed for "
            r1.append(r2)
            cz.msebera.android.httpclient.ProtocolVersion r6 = r6.getProtocolVersion()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L43:
            java.lang.String r6 = "identity"
            boolean r6 = r6.equalsIgnoreCase(r0)
            if (r6 == 0) goto L4e
            r0 = -1
            return r0
        L4e:
            cz.msebera.android.httpclient.ProtocolException r6 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unsupported transfer encoding: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.<init>(r0)
            throw r6
        L65:
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r6 = r6.getFirstHeader(r0)
            if (r6 == 0) goto Laa
            java.lang.String r6 = r6.getValue()
            long r0 = java.lang.Long.parseLong(r6)     // Catch: java.lang.NumberFormatException -> L93
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L7c
            return r0
        L7c:
            cz.msebera.android.httpclient.ProtocolException r0 = new cz.msebera.android.httpclient.ProtocolException     // Catch: java.lang.NumberFormatException -> L93
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L93
            r1.<init>()     // Catch: java.lang.NumberFormatException -> L93
            java.lang.String r2 = "Negative content length: "
            r1.append(r2)     // Catch: java.lang.NumberFormatException -> L93
            r1.append(r6)     // Catch: java.lang.NumberFormatException -> L93
            java.lang.String r1 = r1.toString()     // Catch: java.lang.NumberFormatException -> L93
            r0.<init>(r1)     // Catch: java.lang.NumberFormatException -> L93
            throw r0     // Catch: java.lang.NumberFormatException -> L93
        L93:
            cz.msebera.android.httpclient.ProtocolException r0 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid content length: "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        Laa:
            int r6 = r5.implicitLen
            long r0 = (long) r6
            return r0
    }
}
