package cz.msebera.android.httpclient.client.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class EntityBuilder {
    private byte[] binary;
    private boolean chunked;
    private java.lang.String contentEncoding;
    private cz.msebera.android.httpclient.entity.ContentType contentType;
    private java.io.File file;
    private boolean gzipCompress;
    private java.util.List<cz.msebera.android.httpclient.NameValuePair> parameters;
    private java.io.Serializable serializable;
    private java.io.InputStream stream;
    private java.lang.String text;

    EntityBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    private void clearContent() {
            r1 = this;
            r0 = 0
            r1.text = r0
            r1.binary = r0
            r1.stream = r0
            r1.parameters = r0
            r1.serializable = r0
            r1.file = r0
            return
    }

    public static cz.msebera.android.httpclient.client.entity.EntityBuilder create() {
            cz.msebera.android.httpclient.client.entity.EntityBuilder r0 = new cz.msebera.android.httpclient.client.entity.EntityBuilder
            r0.<init>()
            return r0
    }

    private cz.msebera.android.httpclient.entity.ContentType getContentOrDefault(cz.msebera.android.httpclient.entity.ContentType r2) {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r1.contentType
            if (r0 == 0) goto L5
            r2 = r0
        L5:
            return r2
    }

    public cz.msebera.android.httpclient.HttpEntity build() {
            r5 = this;
            java.lang.String r0 = r5.text
            if (r0 == 0) goto L10
            cz.msebera.android.httpclient.entity.StringEntity r1 = new cz.msebera.android.httpclient.entity.StringEntity
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_TEXT
            cz.msebera.android.httpclient.entity.ContentType r2 = r5.getContentOrDefault(r2)
            r1.<init>(r0, r2)
            goto L6e
        L10:
            byte[] r0 = r5.binary
            if (r0 == 0) goto L20
            cz.msebera.android.httpclient.entity.ByteArrayEntity r1 = new cz.msebera.android.httpclient.entity.ByteArrayEntity
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            cz.msebera.android.httpclient.entity.ContentType r2 = r5.getContentOrDefault(r2)
            r1.<init>(r0, r2)
            goto L6e
        L20:
            java.io.InputStream r0 = r5.stream
            if (r0 == 0) goto L32
            cz.msebera.android.httpclient.entity.InputStreamEntity r1 = new cz.msebera.android.httpclient.entity.InputStreamEntity
            r2 = -1
            cz.msebera.android.httpclient.entity.ContentType r4 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            cz.msebera.android.httpclient.entity.ContentType r4 = r5.getContentOrDefault(r4)
            r1.<init>(r0, r2, r4)
            goto L6e
        L32:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r5.parameters
            if (r0 == 0) goto L46
            cz.msebera.android.httpclient.client.entity.UrlEncodedFormEntity r1 = new cz.msebera.android.httpclient.client.entity.UrlEncodedFormEntity
            cz.msebera.android.httpclient.entity.ContentType r2 = r5.contentType
            if (r2 == 0) goto L41
            java.nio.charset.Charset r2 = r2.getCharset()
            goto L42
        L41:
            r2 = 0
        L42:
            r1.<init>(r0, r2)
            goto L6e
        L46:
            java.io.Serializable r0 = r5.serializable
            if (r0 == 0) goto L59
            cz.msebera.android.httpclient.entity.SerializableEntity r1 = new cz.msebera.android.httpclient.entity.SerializableEntity
            r1.<init>(r0)
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            java.lang.String r0 = r0.toString()
            r1.setContentType(r0)
            goto L6e
        L59:
            java.io.File r0 = r5.file
            if (r0 == 0) goto L69
            cz.msebera.android.httpclient.entity.FileEntity r1 = new cz.msebera.android.httpclient.entity.FileEntity
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            cz.msebera.android.httpclient.entity.ContentType r2 = r5.getContentOrDefault(r2)
            r1.<init>(r0, r2)
            goto L6e
        L69:
            cz.msebera.android.httpclient.entity.BasicHttpEntity r1 = new cz.msebera.android.httpclient.entity.BasicHttpEntity
            r1.<init>()
        L6e:
            cz.msebera.android.httpclient.Header r0 = r1.getContentType()
            if (r0 == 0) goto L7f
            cz.msebera.android.httpclient.entity.ContentType r0 = r5.contentType
            if (r0 == 0) goto L7f
            java.lang.String r0 = r0.toString()
            r1.setContentType(r0)
        L7f:
            java.lang.String r0 = r5.contentEncoding
            r1.setContentEncoding(r0)
            boolean r0 = r5.chunked
            r1.setChunked(r0)
            boolean r0 = r5.gzipCompress
            if (r0 == 0) goto L93
            cz.msebera.android.httpclient.client.entity.GzipCompressingEntity r0 = new cz.msebera.android.httpclient.client.entity.GzipCompressingEntity
            r0.<init>(r1)
            return r0
        L93:
            return r1
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder chunked() {
            r1 = this;
            r0 = 1
            r1.chunked = r0
            return r1
    }

    public byte[] getBinary() {
            r1 = this;
            byte[] r0 = r1.binary
            return r0
    }

    public java.lang.String getContentEncoding() {
            r1 = this;
            java.lang.String r0 = r1.contentEncoding
            return r0
    }

    public cz.msebera.android.httpclient.entity.ContentType getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r1.contentType
            return r0
    }

    public java.io.File getFile() {
            r1 = this;
            java.io.File r0 = r1.file
            return r0
    }

    public java.util.List<cz.msebera.android.httpclient.NameValuePair> getParameters() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.parameters
            return r0
    }

    public java.io.Serializable getSerializable() {
            r1 = this;
            java.io.Serializable r0 = r1.serializable
            return r0
    }

    public java.io.InputStream getStream() {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            return r0
    }

    public java.lang.String getText() {
            r1 = this;
            java.lang.String r0 = r1.text
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder gzipCompress() {
            r1 = this;
            r0 = 1
            r1.gzipCompress = r0
            return r1
    }

    public boolean isChunked() {
            r1 = this;
            boolean r0 = r1.chunked
            return r0
    }

    public boolean isGzipCompress() {
            r1 = this;
            boolean r0 = r1.gzipCompress
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setBinary(byte[] r1) {
            r0 = this;
            r0.clearContent()
            r0.binary = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setContentEncoding(java.lang.String r1) {
            r0 = this;
            r0.contentEncoding = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setContentType(cz.msebera.android.httpclient.entity.ContentType r1) {
            r0 = this;
            r0.contentType = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setFile(java.io.File r1) {
            r0 = this;
            r0.clearContent()
            r0.file = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setParameters(java.util.List<cz.msebera.android.httpclient.NameValuePair> r1) {
            r0 = this;
            r0.clearContent()
            r0.parameters = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setParameters(cz.msebera.android.httpclient.NameValuePair... r1) {
            r0 = this;
            java.util.List r1 = java.util.Arrays.asList(r1)
            cz.msebera.android.httpclient.client.entity.EntityBuilder r1 = r0.setParameters(r1)
            return r1
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setSerializable(java.io.Serializable r1) {
            r0 = this;
            r0.clearContent()
            r0.serializable = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setStream(java.io.InputStream r1) {
            r0 = this;
            r0.clearContent()
            r0.stream = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.entity.EntityBuilder setText(java.lang.String r1) {
            r0 = this;
            r0.clearContent()
            r0.text = r1
            return r0
    }
}
