package com.alibaba.sdk.android.oss.network;

import com.alibaba.sdk.android.oss.model.OSSRequest;

public class ProgressTouchableRequestBody<T extends com.alibaba.sdk.android.oss.model.OSSRequest> extends okhttp3.RequestBody {
    private static final int SEGMENT_SIZE = 2048;
    private com.alibaba.sdk.android.oss.callback.OSSProgressCallback callback;
    private long contentLength;
    private java.lang.String contentType;
    private java.io.InputStream inputStream;
    private T request;

    public ProgressTouchableRequestBody(java.io.InputStream r1, long r2, java.lang.String r4, com.alibaba.sdk.android.oss.network.ExecutionContext r5) {
            r0 = this;
            r0.<init>()
            r0.inputStream = r1
            r0.contentType = r4
            r0.contentLength = r2
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r1 = r5.getProgressCallback()
            r0.callback = r1
            com.alibaba.sdk.android.oss.model.OSSRequest r1 = r5.getRequest()
            r0.request = r1
            return
    }

    @Override
    public long contentLength() throws java.io.IOException {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    @Override
    public okhttp3.MediaType contentType() {
            r1 = this;
            java.lang.String r0 = r1.contentType
            okhttp3.MediaType r0 = okhttp3.MediaType.parse(r0)
            return r0
    }

    @Override
    public void writeTo(okio.BufferedSink r18) throws java.io.IOException {
            r17 = this;
            r0 = r17
            java.io.InputStream r1 = r0.inputStream
            okio.Source r1 = okio.Okio.source(r1)
            r2 = 0
            r4 = r2
        Lb:
            long r6 = r0.contentLength
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 >= 0) goto L3d
            long r6 = r6 - r4
            r8 = 2048(0x800, double:1.012E-320)
            long r6 = java.lang.Math.min(r6, r8)
            okio.Buffer r8 = r18.buffer()
            long r6 = r1.read(r8, r6)
            r8 = -1
            int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r10 != 0) goto L27
            goto L3d
        L27:
            long r4 = r4 + r6
            r18.flush()
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r11 = r0.callback
            if (r11 == 0) goto Lb
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 == 0) goto Lb
            T extends com.alibaba.sdk.android.oss.model.OSSRequest r12 = r0.request
            long r6 = r0.contentLength
            r13 = r4
            r15 = r6
            r11.onProgress(r12, r13, r15)
            goto Lb
        L3d:
            if (r1 == 0) goto L42
            r1.close()
        L42:
            return
    }
}
