package org.cocos2dx.okhttp3.internal.http;

public final class RealResponseBody extends org.cocos2dx.okhttp3.ResponseBody {
    private final long contentLength;

    @javax.annotation.Nullable
    private final java.lang.String contentTypeString;
    private final org.cocos2dx.okio.BufferedSource source;

    public RealResponseBody(@javax.annotation.Nullable java.lang.String r1, long r2, org.cocos2dx.okio.BufferedSource r4) {
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
    public org.cocos2dx.okhttp3.MediaType contentType() {
            r1 = this;
            java.lang.String r0 = r1.contentTypeString
            if (r0 == 0) goto L9
            org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MediaType.parse(r0)
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public org.cocos2dx.okio.BufferedSource source() {
            r1 = this;
            org.cocos2dx.okio.BufferedSource r0 = r1.source
            return r0
    }
}
