package cz.msebera.android.httpclient.impl.entity;

@cz.msebera.android.httpclient.annotation.Immutable
public class DisallowIdentityContentLengthStrategy implements cz.msebera.android.httpclient.entity.ContentLengthStrategy {
    public static final cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy INSTANCE = null;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy contentLengthStrategy;

    static {
            cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy r0 = new cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy
            cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy r1 = new cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy
            r2 = 0
            r1.<init>(r2)
            r0.<init>(r1)
            cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy.INSTANCE = r0
            return
    }

    public DisallowIdentityContentLengthStrategy(cz.msebera.android.httpclient.entity.ContentLengthStrategy r1) {
            r0 = this;
            r0.<init>()
            r0.contentLengthStrategy = r1
            return
    }

    @Override
    public long determineLength(cz.msebera.android.httpclient.HttpMessage r5) throws cz.msebera.android.httpclient.HttpException {
            r4 = this;
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r0 = r4.contentLengthStrategy
            long r0 = r0.determineLength(r5)
            r2 = -1
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 == 0) goto Ld
            return r0
        Ld:
            cz.msebera.android.httpclient.ProtocolException r5 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r0 = "Identity transfer encoding cannot be used"
            r5.<init>(r0)
            throw r5
    }
}
