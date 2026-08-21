package cz.msebera.android.httpclient.impl.entity;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class EntityDeserializer {
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy lenStrategy;

    public EntityDeserializer(cz.msebera.android.httpclient.entity.ContentLengthStrategy r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Content length strategy"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r2 = (cz.msebera.android.httpclient.entity.ContentLengthStrategy) r2
            r1.lenStrategy = r2
            return
    }

    public cz.msebera.android.httpclient.HttpEntity deserialize(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.HttpMessage r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Session input buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP message"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.entity.BasicHttpEntity r2 = r1.doDeserialize(r2, r3)
            return r2
    }

    protected cz.msebera.android.httpclient.entity.BasicHttpEntity doDeserialize(cz.msebera.android.httpclient.io.SessionInputBuffer r9, cz.msebera.android.httpclient.HttpMessage r10) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r8 = this;
            cz.msebera.android.httpclient.entity.BasicHttpEntity r0 = new cz.msebera.android.httpclient.entity.BasicHttpEntity
            r0.<init>()
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r1 = r8.lenStrategy
            long r1 = r1.determineLength(r10)
            r3 = -1
            r5 = -2
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 != 0) goto L23
            r1 = 1
            r0.setChunked(r1)
            r0.setContentLength(r3)
            cz.msebera.android.httpclient.impl.io.ChunkedInputStream r1 = new cz.msebera.android.httpclient.impl.io.ChunkedInputStream
            r1.<init>(r9)
            r0.setContent(r1)
            goto L45
        L23:
            r5 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 != 0) goto L37
            r0.setChunked(r5)
            r0.setContentLength(r3)
            cz.msebera.android.httpclient.impl.io.IdentityInputStream r1 = new cz.msebera.android.httpclient.impl.io.IdentityInputStream
            r1.<init>(r9)
            r0.setContent(r1)
            goto L45
        L37:
            r0.setChunked(r5)
            r0.setContentLength(r1)
            cz.msebera.android.httpclient.impl.io.ContentLengthInputStream r3 = new cz.msebera.android.httpclient.impl.io.ContentLengthInputStream
            r3.<init>(r9, r1)
            r0.setContent(r3)
        L45:
            java.lang.String r9 = "Content-Type"
            cz.msebera.android.httpclient.Header r9 = r10.getFirstHeader(r9)
            if (r9 == 0) goto L50
            r0.setContentType(r9)
        L50:
            java.lang.String r9 = "Content-Encoding"
            cz.msebera.android.httpclient.Header r9 = r10.getFirstHeader(r9)
            if (r9 == 0) goto L5b
            r0.setContentEncoding(r9)
        L5b:
            return r0
    }
}
