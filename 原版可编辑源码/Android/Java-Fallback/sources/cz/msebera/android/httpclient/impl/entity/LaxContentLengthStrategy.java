package cz.msebera.android.httpclient.impl.entity;

@cz.msebera.android.httpclient.annotation.Immutable
public class LaxContentLengthStrategy implements cz.msebera.android.httpclient.entity.ContentLengthStrategy {
    public static final cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy INSTANCE = null;
    private final int implicitLen;

    static {
            cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy r0 = new cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy.INSTANCE = r0
            return
    }

    public LaxContentLengthStrategy() {
            r1 = this;
            r0 = -1
            r1.<init>(r0)
            return
    }

    public LaxContentLengthStrategy(int r1) {
            r0 = this;
            r0.<init>()
            r0.implicitLen = r1
            return
    }

    @Override
    public long determineLength(cz.msebera.android.httpclient.HttpMessage r8) throws cz.msebera.android.httpclient.HttpException {
            r7 = this;
            java.lang.String r0 = "HTTP message"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Transfer-Encoding"
            cz.msebera.android.httpclient.Header r0 = r8.getFirstHeader(r0)
            r1 = -1
            if (r0 == 0) goto L4f
            cz.msebera.android.httpclient.HeaderElement[] r8 = r0.getElements()     // Catch: cz.msebera.android.httpclient.ParseException -> L37
            int r3 = r8.length
            java.lang.String r0 = r0.getValue()
            java.lang.String r4 = "identity"
            boolean r0 = r4.equalsIgnoreCase(r0)
            if (r0 == 0) goto L21
            return r1
        L21:
            if (r3 <= 0) goto L36
            int r3 = r3 + (-1)
            r8 = r8[r3]
            java.lang.String r8 = r8.getName()
            java.lang.String r0 = "chunked"
            boolean r8 = r0.equalsIgnoreCase(r8)
            if (r8 == 0) goto L36
            r0 = -2
            return r0
        L36:
            return r1
        L37:
            r8 = move-exception
            cz.msebera.android.httpclient.ProtocolException r1 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalid Transfer-Encoding header value: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0, r8)
            throw r1
        L4f:
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header r3 = r8.getFirstHeader(r0)
            if (r3 == 0) goto L77
            cz.msebera.android.httpclient.Header[] r8 = r8.getHeaders(r0)
            int r0 = r8.length
            int r0 = r0 + (-1)
        L5e:
            if (r0 < 0) goto L6e
            r3 = r8[r0]
            java.lang.String r3 = r3.getValue()     // Catch: java.lang.NumberFormatException -> L6b
            long r3 = java.lang.Long.parseLong(r3)     // Catch: java.lang.NumberFormatException -> L6b
            goto L6f
        L6b:
            int r0 = r0 + (-1)
            goto L5e
        L6e:
            r3 = r1
        L6f:
            r5 = 0
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 < 0) goto L76
            return r3
        L76:
            return r1
        L77:
            int r8 = r7.implicitLen
            long r0 = (long) r8
            return r0
    }
}
