package com.bumptech.glide.load.data;

public class ByteArrayFetcher implements com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> {
    private final byte[] bytes;
    private final java.lang.String id;

    public ByteArrayFetcher(byte[] r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.bytes = r1
            r0.id = r2
            return
    }

    @Override
    public void cancel() {
            r0 = this;
            return
    }

    @Override
    public void cleanup() {
            r0 = this;
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    @Override
    public java.io.InputStream loadData(com.bumptech.glide.Priority r2) {
            r1 = this;
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            byte[] r0 = r1.bytes
            r2.<init>(r0)
            return r2
    }

    @Override
    public java.io.InputStream loadData(com.bumptech.glide.Priority r1) throws java.lang.Exception {
            r0 = this;
            java.io.InputStream r1 = r0.loadData(r1)
            return r1
    }
}
