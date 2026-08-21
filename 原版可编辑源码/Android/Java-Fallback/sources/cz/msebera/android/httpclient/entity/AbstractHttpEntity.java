package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class AbstractHttpEntity implements cz.msebera.android.httpclient.HttpEntity {
    protected static final int OUTPUT_BUFFER_SIZE = 4096;
    protected boolean chunked;
    protected cz.msebera.android.httpclient.Header contentEncoding;
    protected cz.msebera.android.httpclient.Header contentType;

    protected AbstractHttpEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    @java.lang.Deprecated
    public void consumeContent() throws java.io.IOException {
            r0 = this;
            return
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r1 = this;
            cz.msebera.android.httpclient.Header r0 = r1.contentEncoding
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.Header r0 = r1.contentType
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            boolean r0 = r1.chunked
            return r0
    }

    public void setChunked(boolean r1) {
            r0 = this;
            r0.chunked = r1
            return
    }

    public void setContentEncoding(cz.msebera.android.httpclient.Header r1) {
            r0 = this;
            r0.contentEncoding = r1
            return
    }

    public void setContentEncoding(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto La
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r1 = "Content-Encoding"
            r0.<init>(r1, r3)
            goto Lb
        La:
            r0 = 0
        Lb:
            r2.setContentEncoding(r0)
            return
    }

    public void setContentType(cz.msebera.android.httpclient.Header r1) {
            r0 = this;
            r0.contentType = r1
            return
    }

    public void setContentType(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto La
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r1 = "Content-Type"
            r0.<init>(r1, r3)
            goto Lb
        La:
            r0 = 0
        Lb:
            r2.setContentType(r0)
            return
    }

    public java.lang.String toString() {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 91
            r0.append(r1)
            cz.msebera.android.httpclient.Header r1 = r7.contentType
            r2 = 44
            if (r1 == 0) goto L21
            java.lang.String r1 = "Content-Type: "
            r0.append(r1)
            cz.msebera.android.httpclient.Header r1 = r7.contentType
            java.lang.String r1 = r1.getValue()
            r0.append(r1)
            r0.append(r2)
        L21:
            cz.msebera.android.httpclient.Header r1 = r7.contentEncoding
            if (r1 == 0) goto L36
            java.lang.String r1 = "Content-Encoding: "
            r0.append(r1)
            cz.msebera.android.httpclient.Header r1 = r7.contentEncoding
            java.lang.String r1 = r1.getValue()
            r0.append(r1)
            r0.append(r2)
        L36:
            long r3 = r7.getContentLength()
            r5 = 0
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 < 0) goto L4b
            java.lang.String r1 = "Content-Length: "
            r0.append(r1)
            r0.append(r3)
            r0.append(r2)
        L4b:
            java.lang.String r1 = "Chunked: "
            r0.append(r1)
            boolean r1 = r7.chunked
            r0.append(r1)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
