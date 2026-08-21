package cz.msebera.android.httpclient.impl.entity;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class EntitySerializer {
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy lenStrategy;

    public EntitySerializer(cz.msebera.android.httpclient.entity.ContentLengthStrategy r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Content length strategy"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r2 = (cz.msebera.android.httpclient.entity.ContentLengthStrategy) r2
            r1.lenStrategy = r2
            return
    }

    protected java.io.OutputStream doSerialize(cz.msebera.android.httpclient.io.SessionOutputBuffer r5, cz.msebera.android.httpclient.HttpMessage r6) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r4 = this;
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r0 = r4.lenStrategy
            long r0 = r0.determineLength(r6)
            r2 = -2
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 != 0) goto L12
            cz.msebera.android.httpclient.impl.io.ChunkedOutputStream r6 = new cz.msebera.android.httpclient.impl.io.ChunkedOutputStream
            r6.<init>(r5)
            return r6
        L12:
            r2 = -1
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 != 0) goto L1e
            cz.msebera.android.httpclient.impl.io.IdentityOutputStream r6 = new cz.msebera.android.httpclient.impl.io.IdentityOutputStream
            r6.<init>(r5)
            return r6
        L1e:
            cz.msebera.android.httpclient.impl.io.ContentLengthOutputStream r6 = new cz.msebera.android.httpclient.impl.io.ContentLengthOutputStream
            r6.<init>(r5, r0)
            return r6
    }

    public void serialize(cz.msebera.android.httpclient.io.SessionOutputBuffer r2, cz.msebera.android.httpclient.HttpMessage r3, cz.msebera.android.httpclient.HttpEntity r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Session output buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP message"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP entity"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.io.OutputStream r2 = r1.doSerialize(r2, r3)
            r4.writeTo(r2)
            r2.close()
            return
    }
}
