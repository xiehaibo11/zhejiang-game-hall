package com.mbridge.msdk.thrid.okhttp.internal.http;

public final class RealResponseBody extends com.mbridge.msdk.thrid.okhttp.ResponseBody {
    private final long contentLength;

    @javax.annotation.Nullable
    private final java.lang.String contentTypeString;
    private final com.mbridge.msdk.thrid.okio.BufferedSource source;

    public RealResponseBody(@javax.annotation.Nullable java.lang.String r1, long r2, com.mbridge.msdk.thrid.okio.BufferedSource r4) {
            r0 = this;
            r0.<init>()
            r0.contentTypeString = r1
            r0.contentLength = r2
            r0.source = r4
            return
    }

    @Override
    public long contentLength() {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.MediaType contentType() {
            r1 = this;
            java.lang.String r0 = r1.contentTypeString
            if (r0 == 0) goto L9
            com.mbridge.msdk.thrid.okhttp.MediaType r0 = com.mbridge.msdk.thrid.okhttp.MediaType.parse(r0)
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okio.BufferedSource source() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r1.source
            return r0
    }
}
