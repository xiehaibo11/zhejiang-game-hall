package cz.msebera.android.httpclient;

@cz.msebera.android.httpclient.annotation.Immutable
public final class HttpVersion extends cz.msebera.android.httpclient.ProtocolVersion implements java.io.Serializable {
    public static final java.lang.String HTTP = "HTTP";
    public static final cz.msebera.android.httpclient.HttpVersion HTTP_0_9 = null;
    public static final cz.msebera.android.httpclient.HttpVersion HTTP_1_0 = null;
    public static final cz.msebera.android.httpclient.HttpVersion HTTP_1_1 = null;
    private static final long serialVersionUID = -5856653513894415344L;

    static {
            cz.msebera.android.httpclient.HttpVersion r0 = new cz.msebera.android.httpclient.HttpVersion
            r1 = 0
            r2 = 9
            r0.<init>(r1, r2)
            cz.msebera.android.httpclient.HttpVersion.HTTP_0_9 = r0
            cz.msebera.android.httpclient.HttpVersion r0 = new cz.msebera.android.httpclient.HttpVersion
            r2 = 1
            r0.<init>(r2, r1)
            cz.msebera.android.httpclient.HttpVersion.HTTP_1_0 = r0
            cz.msebera.android.httpclient.HttpVersion r0 = new cz.msebera.android.httpclient.HttpVersion
            r0.<init>(r2, r2)
            cz.msebera.android.httpclient.HttpVersion.HTTP_1_1 = r0
            return
    }

    public HttpVersion(int r2, int r3) {
            r1 = this;
            java.lang.String r0 = "HTTP"
            r1.<init>(r0, r2, r3)
            return
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion forVersion(int r2, int r3) {
            r1 = this;
            int r0 = r1.major
            if (r2 != r0) goto L9
            int r0 = r1.minor
            if (r3 != r0) goto L9
            return r1
        L9:
            r0 = 1
            if (r2 != r0) goto L16
            if (r3 != 0) goto L11
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            return r2
        L11:
            if (r3 != r0) goto L16
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            return r2
        L16:
            if (r2 != 0) goto L1f
            r0 = 9
            if (r3 != r0) goto L1f
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_0_9
            return r2
        L1f:
            cz.msebera.android.httpclient.HttpVersion r0 = new cz.msebera.android.httpclient.HttpVersion
            r0.<init>(r2, r3)
            return r0
    }
}
