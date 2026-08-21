package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class CombinedEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity {
    private final java.io.InputStream combinedStream;
    private final cz.msebera.android.httpclient.client.cache.Resource resource;

    class ResourceStream extends java.io.FilterInputStream {
        final cz.msebera.android.httpclient.impl.client.cache.CombinedEntity this$0;

        protected ResourceStream(cz.msebera.android.httpclient.impl.client.cache.CombinedEntity r1, java.io.InputStream r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r2 = this;
                super.close()     // Catch: java.lang.Throwable -> L9
                cz.msebera.android.httpclient.impl.client.cache.CombinedEntity r0 = r2.this$0
                cz.msebera.android.httpclient.impl.client.cache.CombinedEntity.access$000(r0)
                return
            L9:
                r0 = move-exception
                cz.msebera.android.httpclient.impl.client.cache.CombinedEntity r1 = r2.this$0
                cz.msebera.android.httpclient.impl.client.cache.CombinedEntity.access$000(r1)
                throw r0
        }
    }

    CombinedEntity(cz.msebera.android.httpclient.client.cache.Resource r3, java.io.InputStream r4) throws java.io.IOException {
            r2 = this;
            r2.<init>()
            r2.resource = r3
            java.io.SequenceInputStream r0 = new java.io.SequenceInputStream
            cz.msebera.android.httpclient.impl.client.cache.CombinedEntity$ResourceStream r1 = new cz.msebera.android.httpclient.impl.client.cache.CombinedEntity$ResourceStream
            java.io.InputStream r3 = r3.getInputStream()
            r1.<init>(r2, r3)
            r0.<init>(r1, r4)
            r2.combinedStream = r0
            return
    }

    static void access$000(cz.msebera.android.httpclient.impl.client.cache.CombinedEntity r0) {
            r0.dispose()
            return
    }

    private void dispose() {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.Resource r0 = r1.resource
            r0.dispose()
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException, java.lang.IllegalStateException {
            r1 = this;
            java.io.InputStream r0 = r1.combinedStream
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            r0 = -1
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.io.InputStream r0 = r4.getContent()
            r1 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L1d
        Ld:
            int r2 = r0.read(r1)     // Catch: java.lang.Throwable -> L1d
            r3 = -1
            if (r2 == r3) goto L19
            r3 = 0
            r5.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L1d
            goto Ld
        L19:
            r0.close()
            return
        L1d:
            r5 = move-exception
            r0.close()
            throw r5
    }
}
